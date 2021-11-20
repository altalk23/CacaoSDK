#include <Cacao>

// this is the fix for the dynamic_cast problems

namespace Cacao::fixes {

#define HandlerFixFor(CCUtility)                                                                        \
class $implement(CCUtility##Handler, CCUtility##HandlerTypeinfoFix) {                                   \
public:                                                                                                 \
    void destructor() {                                                                                 \
        if (m_pDelegate) {                                                                              \
            cocos2d::CCObject* pObject = dynamic_cast<cocos2d::CCObject*>(m_pDelegate);                 \
            if (pObject) {                                                                              \
                pObject->release();                                                                     \
                this->cocos2d::CCObject::~CCObject();                                                   \
            }                                                                                           \
            else {                                                                                      \
                $##CCUtility##Handler::destructor();                                                    \
            }                                                                                           \
        }                                                                                               \
    }                                                                                                   \
                                                                                                        \
    bool initWithDelegate(cocos2d::CCUtility##Delegate *pDelegate) {                                    \
        cocos2d::CCObject* pObject = dynamic_cast<cocos2d::CCObject*>(pDelegate);                       \
        if (pObject) {                                                                                  \
            m_pDelegate = pDelegate;                                                                    \
            pObject->retain();                                                                          \
            return true;                                                                                \
        }                                                                                               \
        return false;                                                                                   \
    }                                                                                                   \
                                                                                                        \
    static cocos2d::CCUtility##Handler* handlerWithDelegate(cocos2d::CCUtility##Delegate *pDelegate) {  \
        cocos2d::CCUtility##Handler* pHandler = new cocos2d::CCUtility##Handler();                      \
                                                                                                        \
        if (pHandler) {                                                                                 \
            if (pHandler->initWithDelegate(pDelegate)) {                                                \
                pHandler->autorelease();                                                                \
            }                                                                                           \
            else {                                                                                      \
                CC_SAFE_RELEASE_NULL(pHandler);                                                         \
                pHandler = $##CCUtility##Handler::handlerWithDelegate(pDelegate);                       \
            }                                                                                           \
        }                                                                                               \
                                                                                                        \
        return pHandler;                                                                                \
    }                                                                                                   \
} i##CCUtility##HandlerTypeinfoFix   

HandlerFixFor(CCKeypad);
HandlerFixFor(CCKeyboard);
HandlerFixFor(CCMouse);

class $implement(CCTargetedTouchHandler, CCTargetedTouchHandlerTypeinfoFix) {
public:
    void destructor() {
        if (m_pDelegate) {
            cocos2d::CCObject* pObject = dynamic_cast<cocos2d::CCObject*>(m_pDelegate);
            if (pObject) {
                // the entire destructor
                pObject->release();
                CC_SAFE_RELEASE(m_pClaimedTouches);
                this->cocos2d::CCObject::~CCObject();
            }
            else {
                // we are not gonna handle it
                $CCTargetedTouchHandler::destructor();
            }
        }
    }

    bool initWithDelegate(cocos2d::CCTouchDelegate *pDelegate, int nPriority, bool bSwallow) {
        cocos2d::CCObject* pObject = dynamic_cast<cocos2d::CCObject*>(pDelegate);
        if (pObject) {
            m_pDelegate = pDelegate;
            pObject->retain();

            m_nPriority = nPriority;
            m_nEnabledSelectors = 0;

            m_pClaimedTouches = new cocos2d::CCSet();
            m_bSwallowsTouches = bSwallow;
            return true;
        }
        return false;
    }

    static cocos2d::CCTargetedTouchHandler* handlerWithDelegate(cocos2d::CCTouchDelegate *pDelegate, int nPriority, bool bSwallow) {
        cocos2d::CCTargetedTouchHandler* pHandler = new cocos2d::CCTargetedTouchHandler();

        if (pHandler) {
            if (pHandler->initWithDelegate(pDelegate, nPriority, bSwallow)) {
                pHandler->autorelease();
            }
            else {
                CC_SAFE_RELEASE_NULL(pHandler);
                pHandler = $CCTargetedTouchHandler::handlerWithDelegate(pDelegate, nPriority, bSwallow);
            }
        }

        return pHandler;
    }
} iCCTargetedTouchHandlerTypeinfoFix;

class $implement(CCStandardTouchHandler, CCStandardTouchHandlerTypeinfoFix) {
public:
    void destructor() {
        if (m_pDelegate) {
            cocos2d::CCObject* pObject = dynamic_cast<cocos2d::CCObject*>(m_pDelegate);
            if (pObject) {
                // the entire destructor
                pObject->release();
                this->cocos2d::CCObject::~CCObject();
            }
            else {
                // we are not gonna handle it
                $CCStandardTouchHandler::destructor();
            }
        }
    }

    bool initWithDelegate(cocos2d::CCTouchDelegate *pDelegate, int nPriority) {
        cocos2d::CCObject* pObject = dynamic_cast<cocos2d::CCObject*>(pDelegate);
        if (pObject) {
            m_pDelegate = pDelegate;
            pObject->retain();

            m_nPriority = nPriority;
            m_nEnabledSelectors = 0;
            return true;
        }
        return false;
    }

    static cocos2d::CCStandardTouchHandler* handlerWithDelegate(cocos2d::CCTouchDelegate *pDelegate, int nPriority) {
        cocos2d::CCStandardTouchHandler* pHandler = new cocos2d::CCStandardTouchHandler();
        if (pHandler) {
            if (pHandler->initWithDelegate(pDelegate, nPriority)) {
                pHandler->autorelease();
            }
            else {
                CC_SAFE_RELEASE_NULL(pHandler);
                pHandler = $CCStandardTouchHandler::handlerWithDelegate(pDelegate, nPriority);
            }
        }

        return pHandler;
    }
} iCCStandardTouchHandlerTypeinfoFix;

} // Cacao::fixes
