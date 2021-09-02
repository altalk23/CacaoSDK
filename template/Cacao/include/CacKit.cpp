#include <CacKit>


template<class D, void*** V>
$AchievementNotifier<D, V>::~$AchievementNotifier() {}

template<class D, void*** V>
$AchievementNotifier<D, V>::$AchievementNotifier() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($AchievementNotifier::*)()){&$AchievementNotifier::sharedState} != (void(D::*)()){&D::sharedState})
        m->registerHook(base+0x464e00, extract((void(D::*)()){&D::sharedState}));

    if ((void($AchievementNotifier::*)(cocos2d::CCScene*)){&$AchievementNotifier::willSwitchToScene} != (void(D::*)(cocos2d::CCScene*)){&D::willSwitchToScene})
        m->registerHook(base+0x4650b0, extract((void(D::*)(cocos2d::CCScene*)){&D::willSwitchToScene}));
}

template<class D, void*** V>
void $AchievementNotifier<D, V>::sharedState() {
    if ((void($AchievementNotifier::*)()){&$AchievementNotifier::sharedState} != (void(D::*)()){&D::sharedState})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x464e00))(this);
    else return AchievementNotifier::sharedState();
}

template<class D, void*** V>
void $AchievementNotifier<D, V>::willSwitchToScene(cocos2d::CCScene* p0) {
    if ((void($AchievementNotifier::*)(cocos2d::CCScene*)){&$AchievementNotifier::willSwitchToScene} != (void(D::*)(cocos2d::CCScene*)){&D::willSwitchToScene})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCScene*)>(m->getOriginal(base+0x4650b0))(this, p0);
    else return AchievementNotifier::willSwitchToScene(p0);
}


template<class D, void*** V>
$AnimatedGameObject<D, V>::~$AnimatedGameObject() {}

template<class D, void*** V>
$AnimatedGameObject<D, V>::$AnimatedGameObject() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($AnimatedGameObject::*)(int)){&$AnimatedGameObject::playAnimation} != (void(D::*)(int)){&D::playAnimation})
        m->registerHook(base+0xc93d0, extract((void(D::*)(int)){&D::playAnimation}));

    if ((void($AnimatedGameObject::*)(cocos2d::_ccColor3B)){&$AnimatedGameObject::updateChildSpriteColor} != (void(D::*)(cocos2d::_ccColor3B)){&D::updateChildSpriteColor})
        m->registerHook(base+0xc8450, extract((void(D::*)(cocos2d::_ccColor3B)){&D::updateChildSpriteColor}));
}

template<class D, void*** V>
void $AnimatedGameObject<D, V>::playAnimation(int p0) {
    if ((void($AnimatedGameObject::*)(int)){&$AnimatedGameObject::playAnimation} != (void(D::*)(int)){&D::playAnimation})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0xc93d0))(this, p0);
    else return AnimatedGameObject::playAnimation(p0);
}

template<class D, void*** V>
void $AnimatedGameObject<D, V>::updateChildSpriteColor(cocos2d::_ccColor3B p0) {
    if ((void($AnimatedGameObject::*)(cocos2d::_ccColor3B)){&$AnimatedGameObject::updateChildSpriteColor} != (void(D::*)(cocos2d::_ccColor3B)){&D::updateChildSpriteColor})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::_ccColor3B)>(m->getOriginal(base+0xc8450))(this, p0);
    else return AnimatedGameObject::updateChildSpriteColor(p0);
}


template<class D, void*** V>
$AppDelegate<D, V>::~$AppDelegate() {}

template<class D, void*** V>
$AppDelegate<D, V>::$AppDelegate() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($AppDelegate::*)()){&$AppDelegate::bgScale} != (void(D::*)()){&D::bgScale})
        m->registerHook(base+0x3aaab0, extract((void(D::*)()){&D::bgScale}));

    if ((bool($AppDelegate::*)()){&$AppDelegate::applicationDidFinishLaunching} != (bool(D::*)()){&D::applicationDidFinishLaunching})
        m->registerHook(base+0x3aa900, extract_virtual(V, (bool(D::*)()){&D::applicationDidFinishLaunching}));
    std::cout << "applicationDidFinishLaunching: " << (void*)extract_virtual(V, (bool(D::*)()){&D::applicationDidFinishLaunching}) << std::endl;

    if ((void($AppDelegate::*)()){&$AppDelegate::applicationDidEnterBackground} != (void(D::*)()){&D::applicationDidEnterBackground})
        m->registerHook(base+0x3aabe0, extract_virtual(V, (void(D::*)()){&D::applicationDidEnterBackground}));
    std::cout << "applicationDidEnterBackground: " << (void*)extract_virtual(V, (void(D::*)()){&D::applicationDidEnterBackground}) << std::endl;

    if ((void($AppDelegate::*)()){&$AppDelegate::applicationWillEnterForeground} != (void(D::*)()){&D::applicationWillEnterForeground})
        m->registerHook(base+0x3aac80, extract_virtual(V, (void(D::*)()){&D::applicationWillEnterForeground}));
    std::cout << "applicationWillEnterForeground: " << (void*)extract_virtual(V, (void(D::*)()){&D::applicationWillEnterForeground}) << std::endl;

    if ((bool($AppDelegate::*)()){&$AppDelegate::applicationWillBecomeActive} != (bool(D::*)()){&D::applicationWillBecomeActive})
        m->registerHook(base+0x3aab30, extract_virtual(V, (bool(D::*)()){&D::applicationWillBecomeActive}));
    std::cout << "applicationWillBecomeActive: " << (void*)extract_virtual(V, (bool(D::*)()){&D::applicationWillBecomeActive}) << std::endl;

    if ((bool($AppDelegate::*)()){&$AppDelegate::applicationWillResignActive} != (bool(D::*)()){&D::applicationWillResignActive})
        m->registerHook(base+0x3aab50, extract_virtual(V, (bool(D::*)()){&D::applicationWillResignActive}));
    std::cout << "applicationWillResignActive: " << (void*)extract_virtual(V, (bool(D::*)()){&D::applicationWillResignActive}) << std::endl;

    if ((void($AppDelegate::*)()){&$AppDelegate::trySaveGame} != (void(D::*)()){&D::trySaveGame})
        m->registerHook(base+0x3aaf10, extract_virtual(V, (void(D::*)()){&D::trySaveGame}));
    std::cout << "trySaveGame: " << (void*)extract_virtual(V, (void(D::*)()){&D::trySaveGame}) << std::endl;

    if ((void($AppDelegate::*)(cocos2d::CCScene*)){&$AppDelegate::willSwitchToScene} != (void(D::*)(cocos2d::CCScene*)){&D::willSwitchToScene})
        m->registerHook(base+0x3aaf40, extract_virtual(V, (void(D::*)(cocos2d::CCScene*)){&D::willSwitchToScene}));
    std::cout << "willSwitchToScene: " << (void*)extract_virtual(V, (void(D::*)(cocos2d::CCScene*)){&D::willSwitchToScene}) << std::endl;

    if ((AppDelegate*(*)()){&$AppDelegate::get} != (AppDelegate*(*)()){&D::get})
        m->registerHook(base+0x3aab10, (AppDelegate*(*)()){&D::get});
}

template<class D, void*** V>
void $AppDelegate<D, V>::bgScale() {
    if ((void($AppDelegate::*)()){&$AppDelegate::bgScale} != (void(D::*)()){&D::bgScale})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x3aaab0))(this);
    else return AppDelegate::bgScale();
}

template<class D, void*** V>
bool $AppDelegate<D, V>::applicationDidFinishLaunching() {
    if ((bool($AppDelegate::*)()){&$AppDelegate::applicationDidFinishLaunching} != (bool(D::*)()){&D::applicationDidFinishLaunching})
        return reinterpret_cast<bool(*)(decltype(this))>(m->getOriginal(base+0x3aa900))(this);
    else return AppDelegate::applicationDidFinishLaunching();
}

template<class D, void*** V>
void $AppDelegate<D, V>::applicationDidEnterBackground() {
    if ((void($AppDelegate::*)()){&$AppDelegate::applicationDidEnterBackground} != (void(D::*)()){&D::applicationDidEnterBackground})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x3aabe0))(this);
    else return AppDelegate::applicationDidEnterBackground();
}

template<class D, void*** V>
void $AppDelegate<D, V>::applicationWillEnterForeground() {
    if ((void($AppDelegate::*)()){&$AppDelegate::applicationWillEnterForeground} != (void(D::*)()){&D::applicationWillEnterForeground})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x3aac80))(this);
    else return AppDelegate::applicationWillEnterForeground();
}

template<class D, void*** V>
bool $AppDelegate<D, V>::applicationWillBecomeActive() {
    if ((bool($AppDelegate::*)()){&$AppDelegate::applicationWillBecomeActive} != (bool(D::*)()){&D::applicationWillBecomeActive})
        return reinterpret_cast<bool(*)(decltype(this))>(m->getOriginal(base+0x3aab30))(this);
    else return AppDelegate::applicationWillBecomeActive();
}

template<class D, void*** V>
bool $AppDelegate<D, V>::applicationWillResignActive() {
    if ((bool($AppDelegate::*)()){&$AppDelegate::applicationWillResignActive} != (bool(D::*)()){&D::applicationWillResignActive})
        return reinterpret_cast<bool(*)(decltype(this))>(m->getOriginal(base+0x3aab50))(this);
    else return AppDelegate::applicationWillResignActive();
}

template<class D, void*** V>
void $AppDelegate<D, V>::trySaveGame() {
    if ((void($AppDelegate::*)()){&$AppDelegate::trySaveGame} != (void(D::*)()){&D::trySaveGame})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x3aaf10))(this);
    else return AppDelegate::trySaveGame();
}

template<class D, void*** V>
void $AppDelegate<D, V>::willSwitchToScene(cocos2d::CCScene* p0) {
    if ((void($AppDelegate::*)(cocos2d::CCScene*)){&$AppDelegate::willSwitchToScene} != (void(D::*)(cocos2d::CCScene*)){&D::willSwitchToScene})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCScene*)>(m->getOriginal(base+0x3aaf40))(this, p0);
    else return AppDelegate::willSwitchToScene(p0);
}

template<class D, void*** V>
AppDelegate* $AppDelegate<D, V>::get() {
    if ((AppDelegate*(*)()){&$AppDelegate::get} != (AppDelegate*(*)()){&D::get})
        return reinterpret_cast<AppDelegate*(*)()>(m->getOriginal(base+0x3aab10))();
    else return AppDelegate::get();
}


template<class D, void*** V>
$SongInfoObject<D, V>::~$SongInfoObject() {}

template<class D, void*** V>
$SongInfoObject<D, V>::$SongInfoObject() {
    m->registerHook(extract_destructor(V), +[](){});
}


template<class D, void*** V>
$ArtistCell<D, V>::~$ArtistCell() {}

template<class D, void*** V>
$ArtistCell<D, V>::$ArtistCell() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($ArtistCell::*)()){&$ArtistCell::draw} != (void(D::*)()){&D::draw})
        m->registerHook(base+0x11c980, extract((void(D::*)()){&D::draw}));

    if ((bool($ArtistCell::*)()){&$ArtistCell::init} != (bool(D::*)()){&D::init})
        m->registerHook(base+0x11c7c0, extract((bool(D::*)()){&D::init}));

    if ((void($ArtistCell::*)(SongInfoObject*)){&$ArtistCell::loadFromObject} != (void(D::*)(SongInfoObject*)){&D::loadFromObject})
        m->registerHook(base+0x1118b0, extract((void(D::*)(SongInfoObject*)){&D::loadFromObject}));

    if ((void($ArtistCell::*)(cocos2d::CCObject*)){&$ArtistCell::onNewgrounds} != (void(D::*)(cocos2d::CCObject*)){&D::onNewgrounds})
        m->registerHook(base+0x11c7e0, extract((void(D::*)(cocos2d::CCObject*)){&D::onNewgrounds}));

    if ((void($ArtistCell::*)(int)){&$ArtistCell::updateBGColor} != (void(D::*)(int)){&D::updateBGColor})
        m->registerHook(base+0x110460, extract((void(D::*)(int)){&D::updateBGColor}));
}

template<class D, void*** V>
void $ArtistCell<D, V>::draw() {
    if ((void($ArtistCell::*)()){&$ArtistCell::draw} != (void(D::*)()){&D::draw})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x11c980))(this);
    else return ArtistCell::draw();
}

template<class D, void*** V>
bool $ArtistCell<D, V>::init() {
    if ((bool($ArtistCell::*)()){&$ArtistCell::init} != (bool(D::*)()){&D::init})
        return reinterpret_cast<bool(*)(decltype(this))>(m->getOriginal(base+0x11c7c0))(this);
    else return ArtistCell::init();
}

template<class D, void*** V>
void $ArtistCell<D, V>::loadFromObject(SongInfoObject* p0) {
    if ((void($ArtistCell::*)(SongInfoObject*)){&$ArtistCell::loadFromObject} != (void(D::*)(SongInfoObject*)){&D::loadFromObject})
        return reinterpret_cast<void(*)(decltype(this), SongInfoObject*)>(m->getOriginal(base+0x1118b0))(this, p0);
    else return ArtistCell::loadFromObject(p0);
}

template<class D, void*** V>
void $ArtistCell<D, V>::onNewgrounds(cocos2d::CCObject* p0) {
    if ((void($ArtistCell::*)(cocos2d::CCObject*)){&$ArtistCell::onNewgrounds} != (void(D::*)(cocos2d::CCObject*)){&D::onNewgrounds})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x11c7e0))(this, p0);
    else return ArtistCell::onNewgrounds(p0);
}

template<class D, void*** V>
void $ArtistCell<D, V>::updateBGColor(int p0) {
    if ((void($ArtistCell::*)(int)){&$ArtistCell::updateBGColor} != (void(D::*)(int)){&D::updateBGColor})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x110460))(this, p0);
    else return ArtistCell::updateBGColor(p0);
}


template<class D, void*** V>
$AudioEffectsLayer<D, V>::~$AudioEffectsLayer() {}

template<class D, void*** V>
$AudioEffectsLayer<D, V>::$AudioEffectsLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($AudioEffectsLayer::*)(float)){&$AudioEffectsLayer::audioStep} != (void(D::*)(float)){&D::audioStep})
        m->registerHook(base+0x271f40, extract((void(D::*)(float)){&D::audioStep}));

    if ((AudioEffectsLayer*(*)(std::string)){&$AudioEffectsLayer::create} != (AudioEffectsLayer*(*)(std::string)){&D::create})
        m->registerHook(base+0x271a00, (AudioEffectsLayer*(*)(std::string)){&D::create});

    if ((void($AudioEffectsLayer::*)()){&$AudioEffectsLayer::resetAudioVars} != (void(D::*)()){&D::resetAudioVars})
        m->registerHook(base+0x271ee0, extract((void(D::*)()){&D::resetAudioVars}));
}

template<class D, void*** V>
void $AudioEffectsLayer<D, V>::audioStep(float p0) {
    if ((void($AudioEffectsLayer::*)(float)){&$AudioEffectsLayer::audioStep} != (void(D::*)(float)){&D::audioStep})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x271f40))(this, p0);
    else return AudioEffectsLayer::audioStep(p0);
}

template<class D, void*** V>
AudioEffectsLayer* $AudioEffectsLayer<D, V>::create(std::string p0) {
    if ((AudioEffectsLayer*(*)(std::string)){&$AudioEffectsLayer::create} != (AudioEffectsLayer*(*)(std::string)){&D::create})
        return reinterpret_cast<AudioEffectsLayer*(*)(std::string)>(m->getOriginal(base+0x271a00))(p0);
    else return AudioEffectsLayer::create(p0);
}

template<class D, void*** V>
void $AudioEffectsLayer<D, V>::resetAudioVars() {
    if ((void($AudioEffectsLayer::*)()){&$AudioEffectsLayer::resetAudioVars} != (void(D::*)()){&D::resetAudioVars})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x271ee0))(this);
    else return AudioEffectsLayer::resetAudioVars();
}


template<class D, void*** V>
$CCIndexPath<D, V>::~$CCIndexPath() {}

template<class D, void*** V>
$CCIndexPath<D, V>::$CCIndexPath() {
    m->registerHook(extract_destructor(V), +[](){});
}


template<class D, void*** V>
$TableViewCell<D, V>::~$TableViewCell() {}

template<class D, void*** V>
$TableViewCell<D, V>::$TableViewCell() {
    m->registerHook(extract_destructor(V), +[](){});
}


template<class D, void*** V>
$TableViewDelegate<D, V>::~$TableViewDelegate() {}

template<class D, void*** V>
$TableViewDelegate<D, V>::$TableViewDelegate() {
    m->registerHook(extract_destructor(V), +[](){});
}


template<class D, void*** V>
$TableViewDataSource<D, V>::~$TableViewDataSource() {}

template<class D, void*** V>
$TableViewDataSource<D, V>::$TableViewDataSource() {
    m->registerHook(extract_destructor(V), +[](){});
}


template<class D, void*** V>
$CCScrollLayerExt<D, V>::~$CCScrollLayerExt() {}

template<class D, void*** V>
$CCScrollLayerExt<D, V>::$CCScrollLayerExt() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($CCScrollLayerExt::*)()){&$CCScrollLayerExt::moveToTop} != (void(D::*)()){&D::moveToTop})
        m->registerHook(base+0x235870, extract((void(D::*)()){&D::moveToTop}));

    if ((void($CCScrollLayerExt::*)(float)){&$CCScrollLayerExt::moveToTopWithOffset} != (void(D::*)(float)){&D::moveToTopWithOffset})
        m->registerHook(base+0x2357d0, extract((void(D::*)(float)){&D::moveToTopWithOffset}));
}

template<class D, void*** V>
void $CCScrollLayerExt<D, V>::moveToTop() {
    if ((void($CCScrollLayerExt::*)()){&$CCScrollLayerExt::moveToTop} != (void(D::*)()){&D::moveToTop})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x235870))(this);
    else return CCScrollLayerExt::moveToTop();
}

template<class D, void*** V>
void $CCScrollLayerExt<D, V>::moveToTopWithOffset(float p0) {
    if ((void($CCScrollLayerExt::*)(float)){&$CCScrollLayerExt::moveToTopWithOffset} != (void(D::*)(float)){&D::moveToTopWithOffset})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x2357d0))(this, p0);
    else return CCScrollLayerExt::moveToTopWithOffset(p0);
}


template<class D, void*** V>
$CCScrollLayerExtDelegate<D, V>::~$CCScrollLayerExtDelegate() {}

template<class D, void*** V>
$CCScrollLayerExtDelegate<D, V>::$CCScrollLayerExtDelegate() {
    m->registerHook(extract_destructor(V), +[](){});
}


template<class D, void*** V>
$TableView<D, V>::~$TableView() {}

template<class D, void*** V>
$TableView<D, V>::$TableView() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((TableView*(*)(TableViewDelegate*, TableViewDataSource*, cocos2d::CCRect)){&$TableView::create} != (TableView*(*)(TableViewDelegate*, TableViewDataSource*, cocos2d::CCRect)){&D::create})
        m->registerHook(base+0x37eb30, (TableView*(*)(TableViewDelegate*, TableViewDataSource*, cocos2d::CCRect)){&D::create});

    if ((void($TableView::*)()){&$TableView::reloadData} != (void(D::*)()){&D::reloadData})
        m->registerHook(base+0x37f970, extract((void(D::*)()){&D::reloadData}));
}

template<class D, void*** V>
TableView* $TableView<D, V>::create(TableViewDelegate* p0, TableViewDataSource* p1, cocos2d::CCRect p2) {
    if ((TableView*(*)(TableViewDelegate*, TableViewDataSource*, cocos2d::CCRect)){&$TableView::create} != (TableView*(*)(TableViewDelegate*, TableViewDataSource*, cocos2d::CCRect)){&D::create})
        return reinterpret_cast<TableView*(*)(TableViewDelegate*, TableViewDataSource*, cocos2d::CCRect)>(m->getOriginal(base+0x37eb30))(p0, p1, p2);
    else return TableView::create(p0, p1, p2);
}

template<class D, void*** V>
void $TableView<D, V>::reloadData() {
    if ((void($TableView::*)()){&$TableView::reloadData} != (void(D::*)()){&D::reloadData})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x37f970))(this);
    else return TableView::reloadData();
}


template<class D, void*** V>
$BoomListView<D, V>::~$BoomListView() {}

template<class D, void*** V>
$BoomListView<D, V>::$BoomListView() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((BoomListView*(*)(cocos2d::CCArray*, float, float, int, BoomListType)){&$BoomListView::create} != (BoomListView*(*)(cocos2d::CCArray*, float, float, int, BoomListType)){&D::create})
        m->registerHook(base+0x18ecb0, (BoomListView*(*)(cocos2d::CCArray*, float, float, int, BoomListType)){&D::create});

    if ((bool($BoomListView::*)(cocos2d::CCArray*, float, float, int, BoomListType)){&$BoomListView::init} != (bool(D::*)(cocos2d::CCArray*, float, float, int, BoomListType)){&D::init})
        m->registerHook(base+0x18ee00, extract((bool(D::*)(cocos2d::CCArray*, float, float, int, BoomListType)){&D::init}));

    if ((void($BoomListView::*)()){&$BoomListView::draw} != (void(D::*)()){&D::draw})
        m->registerHook(base+0x18f790, extract((void(D::*)()){&D::draw}));

    if ((void($BoomListView::*)()){&$BoomListView::setupList} != (void(D::*)()){&D::setupList})
        m->registerHook(base+0x18ef90, extract_virtual(V, (void(D::*)()){&D::setupList}));
    std::cout << "setupList: " << (void*)extract_virtual(V, (void(D::*)()){&D::setupList}) << std::endl;

    if ((void($BoomListView::*)(CCIndexPath&, TableViewCell*, TableView*)){&$BoomListView::TableViewWillDisplayCellForRowAtIndexPath} != (void(D::*)(CCIndexPath&, TableViewCell*, TableView*)){&D::TableViewWillDisplayCellForRowAtIndexPath})
        m->registerHook(base+0x18f030, extract_virtual(V, (void(D::*)(CCIndexPath&, TableViewCell*, TableView*)){&D::TableViewWillDisplayCellForRowAtIndexPath}));
    std::cout << "TableViewWillDisplayCellForRowAtIndexPath: " << (void*)extract_virtual(V, (void(D::*)(CCIndexPath&, TableViewCell*, TableView*)){&D::TableViewWillDisplayCellForRowAtIndexPath}) << std::endl;

    if ((void($BoomListView::*)(CCIndexPath&, TableView*)){&$BoomListView::cellHeightForRowAtIndexPath} != (void(D::*)(CCIndexPath&, TableView*)){&D::cellHeightForRowAtIndexPath})
        m->registerHook(base+0x18f070, extract_virtual(V, (void(D::*)(CCIndexPath&, TableView*)){&D::cellHeightForRowAtIndexPath}));
    std::cout << "cellHeightForRowAtIndexPath: " << (void*)extract_virtual(V, (void(D::*)(CCIndexPath&, TableView*)){&D::cellHeightForRowAtIndexPath}) << std::endl;

    if ((void($BoomListView::*)(CCIndexPath&, TableView*)){&$BoomListView::didSelectRowAtIndexPath} != (void(D::*)(CCIndexPath&, TableView*)){&D::didSelectRowAtIndexPath})
        m->registerHook(base+0x18f090, extract_virtual(V, (void(D::*)(CCIndexPath&, TableView*)){&D::didSelectRowAtIndexPath}));
    std::cout << "didSelectRowAtIndexPath: " << (void*)extract_virtual(V, (void(D::*)(CCIndexPath&, TableView*)){&D::didSelectRowAtIndexPath}) << std::endl;

    if ((int($BoomListView::*)(unsigned int, TableView*)){&$BoomListView::numberOfRowsInSection} != (int(D::*)(unsigned int, TableView*)){&D::numberOfRowsInSection})
        m->registerHook(base+0x18f0b0, extract_virtual(V, (int(D::*)(unsigned int, TableView*)){&D::numberOfRowsInSection}));
    std::cout << "numberOfRowsInSection: " << (void*)extract_virtual(V, (int(D::*)(unsigned int, TableView*)){&D::numberOfRowsInSection}) << std::endl;

    if ((void($BoomListView::*)(TableView*)){&$BoomListView::numberOfSectionsInTableView} != (void(D::*)(TableView*)){&D::numberOfSectionsInTableView})
        m->registerHook(base+0x18f0e0, extract_virtual(V, (void(D::*)(TableView*)){&D::numberOfSectionsInTableView}));
    std::cout << "numberOfSectionsInTableView: " << (void*)extract_virtual(V, (void(D::*)(TableView*)){&D::numberOfSectionsInTableView}) << std::endl;

    if ((void($BoomListView::*)(CCIndexPath&, TableView*)){&$BoomListView::cellForRowAtIndexPath} != (void(D::*)(CCIndexPath&, TableView*)){&D::cellForRowAtIndexPath})
        m->registerHook(base+0x18f100, extract_virtual(V, (void(D::*)(CCIndexPath&, TableView*)){&D::cellForRowAtIndexPath}));
    std::cout << "cellForRowAtIndexPath: " << (void*)extract_virtual(V, (void(D::*)(CCIndexPath&, TableView*)){&D::cellForRowAtIndexPath}) << std::endl;

    if ((void($BoomListView::*)(TableView*, TableViewCellEditingStyle, CCIndexPath&)){&$BoomListView::TableViewCommitCellEditingStyleForRowAtIndexPath} != (void(D::*)(TableView*, TableViewCellEditingStyle, CCIndexPath&)){&D::TableViewCommitCellEditingStyleForRowAtIndexPath})
        m->registerHook(base+0x18f770, extract_virtual(V, (void(D::*)(TableView*, TableViewCellEditingStyle, CCIndexPath&)){&D::TableViewCommitCellEditingStyleForRowAtIndexPath}));
    std::cout << "TableViewCommitCellEditingStyleForRowAtIndexPath: " << (void*)extract_virtual(V, (void(D::*)(TableView*, TableViewCellEditingStyle, CCIndexPath&)){&D::TableViewCommitCellEditingStyleForRowAtIndexPath}) << std::endl;

    if ((void($BoomListView::*)(CCIndexPath&, TableViewCell*, TableView*)){&$BoomListView::TableViewWillReloadCellForRowAtIndexPath} != (void(D::*)(CCIndexPath&, TableViewCell*, TableView*)){&D::TableViewWillReloadCellForRowAtIndexPath})
        m->registerHook(base+0x18f050, extract_virtual(V, (void(D::*)(CCIndexPath&, TableViewCell*, TableView*)){&D::TableViewWillReloadCellForRowAtIndexPath}));
    std::cout << "TableViewWillReloadCellForRowAtIndexPath: " << (void*)extract_virtual(V, (void(D::*)(CCIndexPath&, TableViewCell*, TableView*)){&D::TableViewWillReloadCellForRowAtIndexPath}) << std::endl;

    if ((TableViewCell*($BoomListView::*)(char const*)){&$BoomListView::getListCell} != (TableViewCell*(D::*)(char const*)){&D::getListCell})
        m->registerHook(base+0x18f200, extract_virtual(V, (TableViewCell*(D::*)(char const*)){&D::getListCell}));
    std::cout << "getListCell: " << (void*)extract_virtual(V, (TableViewCell*(D::*)(char const*)){&D::getListCell}) << std::endl;

    if ((void($BoomListView::*)(TableViewCell*, int)){&$BoomListView::loadCell} != (void(D::*)(TableViewCell*, int)){&D::loadCell})
        m->registerHook(base+0x18f4a0, extract_virtual(V, (void(D::*)(TableViewCell*, int)){&D::loadCell}));
    std::cout << "loadCell: " << (void*)extract_virtual(V, (void(D::*)(TableViewCell*, int)){&D::loadCell}) << std::endl;
}

template<class D, void*** V>
BoomListView* $BoomListView<D, V>::create(cocos2d::CCArray* p0, float p1, float p2, int p3, BoomListType p4) {
    if ((BoomListView*(*)(cocos2d::CCArray*, float, float, int, BoomListType)){&$BoomListView::create} != (BoomListView*(*)(cocos2d::CCArray*, float, float, int, BoomListType)){&D::create})
        return reinterpret_cast<BoomListView*(*)(cocos2d::CCArray*, float, float, int, BoomListType)>(m->getOriginal(base+0x18ecb0))(p0, p1, p2, p3, p4);
    else return BoomListView::create(p0, p1, p2, p3, p4);
}

template<class D, void*** V>
bool $BoomListView<D, V>::init(cocos2d::CCArray* p0, float p1, float p2, int p3, BoomListType p4) {
    if ((bool($BoomListView::*)(cocos2d::CCArray*, float, float, int, BoomListType)){&$BoomListView::init} != (bool(D::*)(cocos2d::CCArray*, float, float, int, BoomListType)){&D::init})
        return reinterpret_cast<bool(*)(decltype(this), cocos2d::CCArray*, float, float, int, BoomListType)>(m->getOriginal(base+0x18ee00))(this, p0, p1, p2, p3, p4);
    else return BoomListView::init(p0, p1, p2, p3, p4);
}

template<class D, void*** V>
void $BoomListView<D, V>::draw() {
    if ((void($BoomListView::*)()){&$BoomListView::draw} != (void(D::*)()){&D::draw})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x18f790))(this);
    else return BoomListView::draw();
}

template<class D, void*** V>
void $BoomListView<D, V>::setupList() {
    if ((void($BoomListView::*)()){&$BoomListView::setupList} != (void(D::*)()){&D::setupList})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x18ef90))(this);
    else return BoomListView::setupList();
}

template<class D, void*** V>
void $BoomListView<D, V>::TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2) {
    if ((void($BoomListView::*)(CCIndexPath&, TableViewCell*, TableView*)){&$BoomListView::TableViewWillDisplayCellForRowAtIndexPath} != (void(D::*)(CCIndexPath&, TableViewCell*, TableView*)){&D::TableViewWillDisplayCellForRowAtIndexPath})
        return reinterpret_cast<void(*)(decltype(this), CCIndexPath&, TableViewCell*, TableView*)>(m->getOriginal(base+0x18f030))(this, p0, p1, p2);
    else return BoomListView::TableViewWillDisplayCellForRowAtIndexPath(p0, p1, p2);
}

template<class D, void*** V>
void $BoomListView<D, V>::cellHeightForRowAtIndexPath(CCIndexPath& p0, TableView* p1) {
    if ((void($BoomListView::*)(CCIndexPath&, TableView*)){&$BoomListView::cellHeightForRowAtIndexPath} != (void(D::*)(CCIndexPath&, TableView*)){&D::cellHeightForRowAtIndexPath})
        return reinterpret_cast<void(*)(decltype(this), CCIndexPath&, TableView*)>(m->getOriginal(base+0x18f070))(this, p0, p1);
    else return BoomListView::cellHeightForRowAtIndexPath(p0, p1);
}

template<class D, void*** V>
void $BoomListView<D, V>::didSelectRowAtIndexPath(CCIndexPath& p0, TableView* p1) {
    if ((void($BoomListView::*)(CCIndexPath&, TableView*)){&$BoomListView::didSelectRowAtIndexPath} != (void(D::*)(CCIndexPath&, TableView*)){&D::didSelectRowAtIndexPath})
        return reinterpret_cast<void(*)(decltype(this), CCIndexPath&, TableView*)>(m->getOriginal(base+0x18f090))(this, p0, p1);
    else return BoomListView::didSelectRowAtIndexPath(p0, p1);
}

template<class D, void*** V>
int $BoomListView<D, V>::numberOfRowsInSection(unsigned int p0, TableView* p1) {
    if ((int($BoomListView::*)(unsigned int, TableView*)){&$BoomListView::numberOfRowsInSection} != (int(D::*)(unsigned int, TableView*)){&D::numberOfRowsInSection})
        return reinterpret_cast<int(*)(decltype(this), unsigned int, TableView*)>(m->getOriginal(base+0x18f0b0))(this, p0, p1);
    else return BoomListView::numberOfRowsInSection(p0, p1);
}

template<class D, void*** V>
void $BoomListView<D, V>::numberOfSectionsInTableView(TableView* p0) {
    if ((void($BoomListView::*)(TableView*)){&$BoomListView::numberOfSectionsInTableView} != (void(D::*)(TableView*)){&D::numberOfSectionsInTableView})
        return reinterpret_cast<void(*)(decltype(this), TableView*)>(m->getOriginal(base+0x18f0e0))(this, p0);
    else return BoomListView::numberOfSectionsInTableView(p0);
}

template<class D, void*** V>
void $BoomListView<D, V>::cellForRowAtIndexPath(CCIndexPath& p0, TableView* p1) {
    if ((void($BoomListView::*)(CCIndexPath&, TableView*)){&$BoomListView::cellForRowAtIndexPath} != (void(D::*)(CCIndexPath&, TableView*)){&D::cellForRowAtIndexPath})
        return reinterpret_cast<void(*)(decltype(this), CCIndexPath&, TableView*)>(m->getOriginal(base+0x18f100))(this, p0, p1);
    else return BoomListView::cellForRowAtIndexPath(p0, p1);
}

template<class D, void*** V>
void $BoomListView<D, V>::TableViewCommitCellEditingStyleForRowAtIndexPath(TableView* p0, TableViewCellEditingStyle p1, CCIndexPath& p2) {
    if ((void($BoomListView::*)(TableView*, TableViewCellEditingStyle, CCIndexPath&)){&$BoomListView::TableViewCommitCellEditingStyleForRowAtIndexPath} != (void(D::*)(TableView*, TableViewCellEditingStyle, CCIndexPath&)){&D::TableViewCommitCellEditingStyleForRowAtIndexPath})
        return reinterpret_cast<void(*)(decltype(this), TableView*, TableViewCellEditingStyle, CCIndexPath&)>(m->getOriginal(base+0x18f770))(this, p0, p1, p2);
    else return BoomListView::TableViewCommitCellEditingStyleForRowAtIndexPath(p0, p1, p2);
}

template<class D, void*** V>
void $BoomListView<D, V>::TableViewWillReloadCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2) {
    if ((void($BoomListView::*)(CCIndexPath&, TableViewCell*, TableView*)){&$BoomListView::TableViewWillReloadCellForRowAtIndexPath} != (void(D::*)(CCIndexPath&, TableViewCell*, TableView*)){&D::TableViewWillReloadCellForRowAtIndexPath})
        return reinterpret_cast<void(*)(decltype(this), CCIndexPath&, TableViewCell*, TableView*)>(m->getOriginal(base+0x18f050))(this, p0, p1, p2);
    else return BoomListView::TableViewWillReloadCellForRowAtIndexPath(p0, p1, p2);
}

template<class D, void*** V>
TableViewCell* $BoomListView<D, V>::getListCell(char const* p0) {
    if ((TableViewCell*($BoomListView::*)(char const*)){&$BoomListView::getListCell} != (TableViewCell*(D::*)(char const*)){&D::getListCell})
        return reinterpret_cast<TableViewCell*(*)(decltype(this), char const*)>(m->getOriginal(base+0x18f200))(this, p0);
    else return BoomListView::getListCell(p0);
}

template<class D, void*** V>
void $BoomListView<D, V>::loadCell(TableViewCell* p0, int p1) {
    if ((void($BoomListView::*)(TableViewCell*, int)){&$BoomListView::loadCell} != (void(D::*)(TableViewCell*, int)){&D::loadCell})
        return reinterpret_cast<void(*)(decltype(this), TableViewCell*, int)>(m->getOriginal(base+0x18f4a0))(this, p0, p1);
    else return BoomListView::loadCell(p0, p1);
}


template<class D, void*** V>
$BoomScrollLayer<D, V>::~$BoomScrollLayer() {}

template<class D, void*** V>
$BoomScrollLayer<D, V>::$BoomScrollLayer() {
    m->registerHook(extract_destructor(V), +[](){});
}


template<class D, void*** V>
$ButtonSprite<D, V>::~$ButtonSprite() {}

template<class D, void*** V>
$ButtonSprite<D, V>::$ButtonSprite() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((ButtonSprite*(*)(char const*)){&$ButtonSprite::create} != (ButtonSprite*(*)(char const*)){&D::create})
        m->registerHook(base+0x4fa10, (ButtonSprite*(*)(char const*)){&D::create});

    if ((ButtonSprite*(*)(char const*, int, int, float, bool)){&$ButtonSprite::create} != (ButtonSprite*(*)(char const*, int, int, float, bool)){&D::create})
        m->registerHook(base+0x4fa40, (ButtonSprite*(*)(char const*, int, int, float, bool)){&D::create});

    if ((void($ButtonSprite::*)(char const*)){&$ButtonSprite::updateBGImage} != (void(D::*)(char const*)){&D::updateBGImage})
        m->registerHook(base+0x502d0, extract((void(D::*)(char const*)){&D::updateBGImage}));
}

template<class D, void*** V>
ButtonSprite* $ButtonSprite<D, V>::create(char const* p0) {
    if ((ButtonSprite*(*)(char const*)){&$ButtonSprite::create} != (ButtonSprite*(*)(char const*)){&D::create})
        return reinterpret_cast<ButtonSprite*(*)(char const*)>(m->getOriginal(base+0x4fa10))(p0);
    else return ButtonSprite::create(p0);
}

template<class D, void*** V>
ButtonSprite* $ButtonSprite<D, V>::create(char const* p0, int p1, int p2, float p3, bool p4) {
    if ((ButtonSprite*(*)(char const*, int, int, float, bool)){&$ButtonSprite::create} != (ButtonSprite*(*)(char const*, int, int, float, bool)){&D::create})
        return reinterpret_cast<ButtonSprite*(*)(char const*, int, int, float, bool)>(m->getOriginal(base+0x4fa40))(p0, p1, p2, p3, p4);
    else return ButtonSprite::create(p0, p1, p2, p3, p4);
}

template<class D, void*** V>
void $ButtonSprite<D, V>::updateBGImage(char const* p0) {
    if ((void($ButtonSprite::*)(char const*)){&$ButtonSprite::updateBGImage} != (void(D::*)(char const*)){&D::updateBGImage})
        return reinterpret_cast<void(*)(decltype(this), char const*)>(m->getOriginal(base+0x502d0))(this, p0);
    else return ButtonSprite::updateBGImage(p0);
}


template<class D, void*** V>
$CCAnimatedSprite<D, V>::~$CCAnimatedSprite() {}

template<class D, void*** V>
$CCAnimatedSprite<D, V>::$CCAnimatedSprite() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($CCAnimatedSprite::*)(std::string)){&$CCAnimatedSprite::runAnimation} != (void(D::*)(std::string)){&D::runAnimation})
        m->registerHook(base+0x1a6430, extract((void(D::*)(std::string)){&D::runAnimation}));

    if ((void($CCAnimatedSprite::*)(std::string, float)){&$CCAnimatedSprite::tweenToAnimation} != (void(D::*)(std::string, float)){&D::tweenToAnimation})
        m->registerHook(base+0x1a65b0, extract((void(D::*)(std::string, float)){&D::tweenToAnimation}));
}

template<class D, void*** V>
void $CCAnimatedSprite<D, V>::runAnimation(std::string p0) {
    if ((void($CCAnimatedSprite::*)(std::string)){&$CCAnimatedSprite::runAnimation} != (void(D::*)(std::string)){&D::runAnimation})
        return reinterpret_cast<void(*)(decltype(this), std::string)>(m->getOriginal(base+0x1a6430))(this, p0);
    else return CCAnimatedSprite::runAnimation(p0);
}

template<class D, void*** V>
void $CCAnimatedSprite<D, V>::tweenToAnimation(std::string p0, float p1) {
    if ((void($CCAnimatedSprite::*)(std::string, float)){&$CCAnimatedSprite::tweenToAnimation} != (void(D::*)(std::string, float)){&D::tweenToAnimation})
        return reinterpret_cast<void(*)(decltype(this), std::string, float)>(m->getOriginal(base+0x1a65b0))(this, p0, p1);
    else return CCAnimatedSprite::tweenToAnimation(p0, p1);
}


template<class D, void*** V>
$CCCircleWave<D, V>::~$CCCircleWave() {}

template<class D, void*** V>
$CCCircleWave<D, V>::$CCCircleWave() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((CCCircleWave*(*)(float, float, float, bool)){&$CCCircleWave::create} != (CCCircleWave*(*)(float, float, float, bool)){&D::create})
        m->registerHook(base+0xbd270, (CCCircleWave*(*)(float, float, float, bool)){&D::create});

    if ((CCCircleWave*(*)(float, float, float, bool, bool)){&$CCCircleWave::create} != (CCCircleWave*(*)(float, float, float, bool, bool)){&D::create})
        m->registerHook(base+0xbd290, (CCCircleWave*(*)(float, float, float, bool, bool)){&D::create});

    if ((void($CCCircleWave::*)(cocos2d::CCNode*, bool)){&$CCCircleWave::followObject} != (void(D::*)(cocos2d::CCNode*, bool)){&D::followObject})
        m->registerHook(base+0xbd670, extract((void(D::*)(cocos2d::CCNode*, bool)){&D::followObject}));

    if ((void($CCCircleWave::*)(float)){&$CCCircleWave::updatePosition} != (void(D::*)(float)){&D::updatePosition})
        m->registerHook(base+0xbd630, extract((void(D::*)(float)){&D::updatePosition}));
}

template<class D, void*** V>
CCCircleWave* $CCCircleWave<D, V>::create(float p0, float p1, float p2, bool p3) {
    if ((CCCircleWave*(*)(float, float, float, bool)){&$CCCircleWave::create} != (CCCircleWave*(*)(float, float, float, bool)){&D::create})
        return reinterpret_cast<CCCircleWave*(*)(float, float, float, bool)>(m->getOriginal(base+0xbd270))(p0, p1, p2, p3);
    else return CCCircleWave::create(p0, p1, p2, p3);
}

template<class D, void*** V>
CCCircleWave* $CCCircleWave<D, V>::create(float p0, float p1, float p2, bool p3, bool p4) {
    if ((CCCircleWave*(*)(float, float, float, bool, bool)){&$CCCircleWave::create} != (CCCircleWave*(*)(float, float, float, bool, bool)){&D::create})
        return reinterpret_cast<CCCircleWave*(*)(float, float, float, bool, bool)>(m->getOriginal(base+0xbd290))(p0, p1, p2, p3, p4);
    else return CCCircleWave::create(p0, p1, p2, p3, p4);
}

template<class D, void*** V>
void $CCCircleWave<D, V>::followObject(cocos2d::CCNode* p0, bool p1) {
    if ((void($CCCircleWave::*)(cocos2d::CCNode*, bool)){&$CCCircleWave::followObject} != (void(D::*)(cocos2d::CCNode*, bool)){&D::followObject})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCNode*, bool)>(m->getOriginal(base+0xbd670))(this, p0, p1);
    else return CCCircleWave::followObject(p0, p1);
}

template<class D, void*** V>
void $CCCircleWave<D, V>::updatePosition(float p0) {
    if ((void($CCCircleWave::*)(float)){&$CCCircleWave::updatePosition} != (void(D::*)(float)){&D::updatePosition})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0xbd630))(this, p0);
    else return CCCircleWave::updatePosition(p0);
}


template<class D, void*** V>
$CCCircleWaveDelegate<D, V>::~$CCCircleWaveDelegate() {}

template<class D, void*** V>
$CCCircleWaveDelegate<D, V>::$CCCircleWaveDelegate() {
    m->registerHook(extract_destructor(V), +[](){});
}


template<class D, void*** V>
$CCLightFlash<D, V>::~$CCLightFlash() {}

template<class D, void*** V>
$CCLightFlash<D, V>::$CCLightFlash() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((CCLightFlash*(*)()){&$CCLightFlash::create} != (CCLightFlash*(*)()){&D::create})
        m->registerHook(base+0x295870, (CCLightFlash*(*)()){&D::create});

    if ((void($CCLightFlash::*)(cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int, bool, bool, float)){&$CCLightFlash::playEffect} != (void(D::*)(cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int, bool, bool, float)){&D::playEffect})
        m->registerHook(base+0x295900, extract((void(D::*)(cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int, bool, bool, float)){&D::playEffect}));
}

template<class D, void*** V>
CCLightFlash* $CCLightFlash<D, V>::create() {
    if ((CCLightFlash*(*)()){&$CCLightFlash::create} != (CCLightFlash*(*)()){&D::create})
        return reinterpret_cast<CCLightFlash*(*)()>(m->getOriginal(base+0x295870))();
    else return CCLightFlash::create();
}

template<class D, void*** V>
void $CCLightFlash<D, V>::playEffect(cocos2d::CCPoint p0, cocos2d::_ccColor3B p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, float p15, int p16, bool p17, bool p18, float p19) {
    if ((void($CCLightFlash::*)(cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int, bool, bool, float)){&$CCLightFlash::playEffect} != (void(D::*)(cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int, bool, bool, float)){&D::playEffect})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int, bool, bool, float)>(m->getOriginal(base+0x295900))(this, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19);
    else return CCLightFlash::playEffect(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19);
}


template<class D, void*** V>
$CCMenuItemSpriteExtra<D, V>::~$CCMenuItemSpriteExtra() {}

template<class D, void*** V>
$CCMenuItemSpriteExtra<D, V>::$CCMenuItemSpriteExtra() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((CCMenuItemSpriteExtra*(*)(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_CallFuncO)){&$CCMenuItemSpriteExtra::create} != (CCMenuItemSpriteExtra*(*)(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_CallFuncO)){&D::create})
        m->registerHook(base+0x1253c0, (CCMenuItemSpriteExtra*(*)(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_CallFuncO)){&D::create});

    if ((void($CCMenuItemSpriteExtra::*)(float)){&$CCMenuItemSpriteExtra::setSizeMult} != (void(D::*)(float)){&D::setSizeMult})
        m->registerHook(base+0x1255e0, extract((void(D::*)(float)){&D::setSizeMult}));
}

template<class D, void*** V>
CCMenuItemSpriteExtra* $CCMenuItemSpriteExtra<D, V>::create(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_CallFuncO p3) {
    if ((CCMenuItemSpriteExtra*(*)(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_CallFuncO)){&$CCMenuItemSpriteExtra::create} != (CCMenuItemSpriteExtra*(*)(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_CallFuncO)){&D::create})
        return reinterpret_cast<CCMenuItemSpriteExtra*(*)(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_CallFuncO)>(m->getOriginal(base+0x1253c0))(p0, p1, p2, p3);
    else return CCMenuItemSpriteExtra::create(p0, p1, p2, p3);
}

template<class D, void*** V>
void $CCMenuItemSpriteExtra<D, V>::setSizeMult(float p0) {
    if ((void($CCMenuItemSpriteExtra::*)(float)){&$CCMenuItemSpriteExtra::setSizeMult} != (void(D::*)(float)){&D::setSizeMult})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x1255e0))(this, p0);
    else return CCMenuItemSpriteExtra::setSizeMult(p0);
}


template<class D, void*** V>
$CCMenuItemToggler<D, V>::~$CCMenuItemToggler() {}

template<class D, void*** V>
$CCMenuItemToggler<D, V>::$CCMenuItemToggler() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((CCMenuItemToggler*(*)(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_CallFuncO)){&$CCMenuItemToggler::create} != (CCMenuItemToggler*(*)(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_CallFuncO)){&D::create})
        m->registerHook(base+0x38400, (CCMenuItemToggler*(*)(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_CallFuncO)){&D::create});

    if ((void($CCMenuItemToggler::*)(float)){&$CCMenuItemToggler::setSizeMult} != (void(D::*)(float)){&D::setSizeMult})
        m->registerHook(base+0x38a40, extract((void(D::*)(float)){&D::setSizeMult}));
}

template<class D, void*** V>
CCMenuItemToggler* $CCMenuItemToggler<D, V>::create(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_CallFuncO p3) {
    if ((CCMenuItemToggler*(*)(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_CallFuncO)){&$CCMenuItemToggler::create} != (CCMenuItemToggler*(*)(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_CallFuncO)){&D::create})
        return reinterpret_cast<CCMenuItemToggler*(*)(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_CallFuncO)>(m->getOriginal(base+0x38400))(p0, p1, p2, p3);
    else return CCMenuItemToggler::create(p0, p1, p2, p3);
}

template<class D, void*** V>
void $CCMenuItemToggler<D, V>::setSizeMult(float p0) {
    if ((void($CCMenuItemToggler::*)(float)){&$CCMenuItemToggler::setSizeMult} != (void(D::*)(float)){&D::setSizeMult})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x38a40))(this, p0);
    else return CCMenuItemToggler::setSizeMult(p0);
}


template<class D, void*** V>
$CCMoveCNode<D, V>::~$CCMoveCNode() {}

template<class D, void*** V>
$CCMoveCNode<D, V>::$CCMoveCNode() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((CCMoveCNode*(*)()){&$CCMoveCNode::create} != (CCMoveCNode*(*)()){&D::create})
        m->registerHook(base+0x1842a0, (CCMoveCNode*(*)()){&D::create});

    if ((bool($CCMoveCNode::*)()){&$CCMoveCNode::init} != (bool(D::*)()){&D::init})
        m->registerHook(base+0x18b3d0, extract((bool(D::*)()){&D::init}));
}

template<class D, void*** V>
CCMoveCNode* $CCMoveCNode<D, V>::create() {
    if ((CCMoveCNode*(*)()){&$CCMoveCNode::create} != (CCMoveCNode*(*)()){&D::create})
        return reinterpret_cast<CCMoveCNode*(*)()>(m->getOriginal(base+0x1842a0))();
    else return CCMoveCNode::create();
}

template<class D, void*** V>
bool $CCMoveCNode<D, V>::init() {
    if ((bool($CCMoveCNode::*)()){&$CCMoveCNode::init} != (bool(D::*)()){&D::init})
        return reinterpret_cast<bool(*)(decltype(this))>(m->getOriginal(base+0x18b3d0))(this);
    else return CCMoveCNode::init();
}


template<class D, void*** V>
$CCNodeContainer<D, V>::~$CCNodeContainer() {}

template<class D, void*** V>
$CCNodeContainer<D, V>::$CCNodeContainer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((CCNodeContainer*(*)()){&$CCNodeContainer::create} != (CCNodeContainer*(*)()){&D::create})
        m->registerHook(base+0xb1090, (CCNodeContainer*(*)()){&D::create});

    if ((bool($CCNodeContainer::*)()){&$CCNodeContainer::init} != (bool(D::*)()){&D::init})
        m->registerHook(base+0xba950, extract((bool(D::*)()){&D::init}));

    if ((void($CCNodeContainer::*)()){&$CCNodeContainer::visit} != (void(D::*)()){&D::visit})
        m->registerHook(base+0xba960, extract((void(D::*)()){&D::visit}));
}

template<class D, void*** V>
CCNodeContainer* $CCNodeContainer<D, V>::create() {
    if ((CCNodeContainer*(*)()){&$CCNodeContainer::create} != (CCNodeContainer*(*)()){&D::create})
        return reinterpret_cast<CCNodeContainer*(*)()>(m->getOriginal(base+0xb1090))();
    else return CCNodeContainer::create();
}

template<class D, void*** V>
bool $CCNodeContainer<D, V>::init() {
    if ((bool($CCNodeContainer::*)()){&$CCNodeContainer::init} != (bool(D::*)()){&D::init})
        return reinterpret_cast<bool(*)(decltype(this))>(m->getOriginal(base+0xba950))(this);
    else return CCNodeContainer::init();
}

template<class D, void*** V>
void $CCNodeContainer<D, V>::visit() {
    if ((void($CCNodeContainer::*)()){&$CCNodeContainer::visit} != (void(D::*)()){&D::visit})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0xba960))(this);
    else return CCNodeContainer::visit();
}


template<class D, void*** V>
$CCSpritePlus<D, V>::~$CCSpritePlus() {}

template<class D, void*** V>
$CCSpritePlus<D, V>::$CCSpritePlus() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((bool($CCSpritePlus::*)(char const*)){&$CCSpritePlus::initWithSpriteFrameName} != (bool(D::*)(char const*)){&D::initWithSpriteFrameName})
        m->registerHook(base+0x248670, extract((bool(D::*)(char const*)){&D::initWithSpriteFrameName}));
}

template<class D, void*** V>
bool $CCSpritePlus<D, V>::initWithSpriteFrameName(char const* p0) {
    if ((bool($CCSpritePlus::*)(char const*)){&$CCSpritePlus::initWithSpriteFrameName} != (bool(D::*)(char const*)){&D::initWithSpriteFrameName})
        return reinterpret_cast<bool(*)(decltype(this), char const*)>(m->getOriginal(base+0x248670))(this, p0);
    else return CCSpritePlus::initWithSpriteFrameName(p0);
}


template<class D, void*** V>
$CCTextInputNode<D, V>::~$CCTextInputNode() {}

template<class D, void*** V>
$CCTextInputNode<D, V>::$CCTextInputNode() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((CCTextInputNode*(*)(float, float, char const*, char const*, int, char const*)){&$CCTextInputNode::create} != (CCTextInputNode*(*)(float, float, char const*, char const*, int, char const*)){&D::create})
        m->registerHook(base+0x5cfb0, (CCTextInputNode*(*)(float, float, char const*, char const*, int, char const*)){&D::create});

    if ((std::string($CCTextInputNode::*)()){&$CCTextInputNode::getString} != (std::string(D::*)()){&D::getString})
        m->registerHook(base+0x5d6f0, extract((std::string(D::*)()){&D::getString}));

    if ((void($CCTextInputNode::*)()){&$CCTextInputNode::refreshLabel} != (void(D::*)()){&D::refreshLabel})
        m->registerHook(base+0x5d730, extract((void(D::*)()){&D::refreshLabel}));

    if ((void($CCTextInputNode::*)(std::string)){&$CCTextInputNode::setAllowedChars} != (void(D::*)(std::string)){&D::setAllowedChars})
        m->registerHook(base+0x5d360, extract((void(D::*)(std::string)){&D::setAllowedChars}));

    if ((void($CCTextInputNode::*)(cocos2d::_ccColor3B)){&$CCTextInputNode::setLabelNormalColor} != (void(D::*)(cocos2d::_ccColor3B)){&D::setLabelNormalColor})
        m->registerHook(base+0x5dab0, extract((void(D::*)(cocos2d::_ccColor3B)){&D::setLabelNormalColor}));

    if ((void($CCTextInputNode::*)(cocos2d::_ccColor3B)){&$CCTextInputNode::setLabelPlaceholderColor} != (void(D::*)(cocos2d::_ccColor3B)){&D::setLabelPlaceholderColor})
        m->registerHook(base+0x5da90, extract((void(D::*)(cocos2d::_ccColor3B)){&D::setLabelPlaceholderColor}));

    if ((void($CCTextInputNode::*)(float)){&$CCTextInputNode::setLabelPlaceholderScale} != (void(D::*)(float)){&D::setLabelPlaceholderScale})
        m->registerHook(base+0x5da70, extract((void(D::*)(float)){&D::setLabelPlaceholderScale}));

    if ((void($CCTextInputNode::*)(float)){&$CCTextInputNode::setMaxLabelScale} != (void(D::*)(float)){&D::setMaxLabelScale})
        m->registerHook(base+0x5da30, extract((void(D::*)(float)){&D::setMaxLabelScale}));

    if ((void($CCTextInputNode::*)(float)){&$CCTextInputNode::setMaxLabelWidth} != (void(D::*)(float)){&D::setMaxLabelWidth})
        m->registerHook(base+0x5da50, extract((void(D::*)(float)){&D::setMaxLabelWidth}));

    if ((void($CCTextInputNode::*)(std::string)){&$CCTextInputNode::setString} != (void(D::*)(std::string)){&D::setString})
        m->registerHook(base+0x5d3e0, extract((void(D::*)(std::string)){&D::setString}));

    if ((void($CCTextInputNode::*)(std::string)){&$CCTextInputNode::updateLabel} != (void(D::*)(std::string)){&D::updateLabel})
        m->registerHook(base+0x5d4a0, extract((void(D::*)(std::string)){&D::updateLabel}));

    if ((void($CCTextInputNode::*)()){&$CCTextInputNode::forceOffset} != (void(D::*)()){&D::forceOffset})
        m->registerHook(base+0x5ec70, extract((void(D::*)()){&D::forceOffset}));

    if ((void($CCTextInputNode::*)()){&$CCTextInputNode::registerWithTouchDispatcher} != (void(D::*)()){&D::registerWithTouchDispatcher})
        m->registerHook(base+0x5eec0, extract_virtual(V, (void(D::*)()){&D::registerWithTouchDispatcher}));
    std::cout << "registerWithTouchDispatcher: " << (void*)extract_virtual(V, (void(D::*)()){&D::registerWithTouchDispatcher}) << std::endl;

    if ((bool($CCTextInputNode::*)(float, float, char const*, char const*, int, char const*)){&$CCTextInputNode::init} != (bool(D::*)(float, float, char const*, char const*, int, char const*)){&D::init})
        m->registerHook(base+0x5d180, extract((bool(D::*)(float, float, char const*, char const*, int, char const*)){&D::init}));

    if ((void($CCTextInputNode::*)()){&$CCTextInputNode::visit} != (void(D::*)()){&D::visit})
        m->registerHook(base+0x5d380, extract_virtual(V, (void(D::*)()){&D::visit}));
    std::cout << "visit: " << (void*)extract_virtual(V, (void(D::*)()){&D::visit}) << std::endl;

    if ((bool($CCTextInputNode::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&$CCTextInputNode::ccTouchBegan} != (bool(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchBegan})
        m->registerHook(base+0x5ec80, extract_virtual(V, (bool(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchBegan}));
    std::cout << "ccTouchBegan: " << (void*)extract_virtual(V, (bool(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchBegan}) << std::endl;

    if ((void($CCTextInputNode::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&$CCTextInputNode::ccTouchCancelled} != (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchCancelled})
        m->registerHook(base+0x5ee80, extract_virtual(V, (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchCancelled}));
    std::cout << "ccTouchCancelled: " << (void*)extract_virtual(V, (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchCancelled}) << std::endl;

    if ((void($CCTextInputNode::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&$CCTextInputNode::ccTouchEnded} != (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchEnded})
        m->registerHook(base+0x5ee60, extract_virtual(V, (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchEnded}));
    std::cout << "ccTouchEnded: " << (void*)extract_virtual(V, (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchEnded}) << std::endl;

    if ((void($CCTextInputNode::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&$CCTextInputNode::ccTouchMoved} != (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchMoved})
        m->registerHook(base+0x5eea0, extract_virtual(V, (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchMoved}));
    std::cout << "ccTouchMoved: " << (void*)extract_virtual(V, (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchMoved}) << std::endl;

    if ((void($CCTextInputNode::*)()){&$CCTextInputNode::textChanged} != (void(D::*)()){&D::textChanged})
        m->registerHook(base+0x5dd70, extract_virtual(V, (void(D::*)()){&D::textChanged}));
    std::cout << "textChanged: " << (void*)extract_virtual(V, (void(D::*)()){&D::textChanged}) << std::endl;

    if ((void($CCTextInputNode::*)(bool)){&$CCTextInputNode::onClickTrackNode} != (void(D::*)(bool)){&D::onClickTrackNode})
        m->registerHook(base+0x5dd40, extract_virtual(V, (void(D::*)(bool)){&D::onClickTrackNode}));
    std::cout << "onClickTrackNode: " << (void*)extract_virtual(V, (void(D::*)(bool)){&D::onClickTrackNode}) << std::endl;

    if ((void($CCTextInputNode::*)(cocos2d::CCIMEKeyboardNotificationInfo&)){&$CCTextInputNode::keyboardWillShow} != (void(D::*)(cocos2d::CCIMEKeyboardNotificationInfo&)){&D::keyboardWillShow})
        m->registerHook(base+0x5dad0, extract_virtual(V, (void(D::*)(cocos2d::CCIMEKeyboardNotificationInfo&)){&D::keyboardWillShow}));
    std::cout << "keyboardWillShow: " << (void*)extract_virtual(V, (void(D::*)(cocos2d::CCIMEKeyboardNotificationInfo&)){&D::keyboardWillShow}) << std::endl;

    if ((void($CCTextInputNode::*)(cocos2d::CCIMEKeyboardNotificationInfo&)){&$CCTextInputNode::keyboardWillHide} != (void(D::*)(cocos2d::CCIMEKeyboardNotificationInfo&)){&D::keyboardWillHide})
        m->registerHook(base+0x5dc20, extract_virtual(V, (void(D::*)(cocos2d::CCIMEKeyboardNotificationInfo&)){&D::keyboardWillHide}));
    std::cout << "keyboardWillHide: " << (void*)extract_virtual(V, (void(D::*)(cocos2d::CCIMEKeyboardNotificationInfo&)){&D::keyboardWillHide}) << std::endl;

    if ((bool($CCTextInputNode::*)(cocos2d::CCTextFieldTTF*, char const*, int)){&$CCTextInputNode::onTextFieldInsertText} != (bool(D::*)(cocos2d::CCTextFieldTTF*, char const*, int)){&D::onTextFieldInsertText})
        m->registerHook(base+0x5de50, extract_virtual(V, (bool(D::*)(cocos2d::CCTextFieldTTF*, char const*, int)){&D::onTextFieldInsertText}));
    std::cout << "onTextFieldInsertText: " << (void*)extract_virtual(V, (bool(D::*)(cocos2d::CCTextFieldTTF*, char const*, int)){&D::onTextFieldInsertText}) << std::endl;

    if ((bool($CCTextInputNode::*)(cocos2d::CCTextFieldTTF*)){&$CCTextInputNode::onTextFieldAttachWithIME} != (bool(D::*)(cocos2d::CCTextFieldTTF*)){&D::onTextFieldAttachWithIME})
        m->registerHook(base+0x5e2c0, extract_virtual(V, (bool(D::*)(cocos2d::CCTextFieldTTF*)){&D::onTextFieldAttachWithIME}));
    std::cout << "onTextFieldAttachWithIME: " << (void*)extract_virtual(V, (bool(D::*)(cocos2d::CCTextFieldTTF*)){&D::onTextFieldAttachWithIME}) << std::endl;

    if ((bool($CCTextInputNode::*)(cocos2d::CCTextFieldTTF*)){&$CCTextInputNode::onTextFieldDetachWithIME} != (bool(D::*)(cocos2d::CCTextFieldTTF*)){&D::onTextFieldDetachWithIME})
        m->registerHook(base+0x5e610, extract_virtual(V, (bool(D::*)(cocos2d::CCTextFieldTTF*)){&D::onTextFieldDetachWithIME}));
    std::cout << "onTextFieldDetachWithIME: " << (void*)extract_virtual(V, (bool(D::*)(cocos2d::CCTextFieldTTF*)){&D::onTextFieldDetachWithIME}) << std::endl;
}

template<class D, void*** V>
CCTextInputNode* $CCTextInputNode<D, V>::create(float p0, float p1, char const* p2, char const* p3, int p4, char const* p5) {
    if ((CCTextInputNode*(*)(float, float, char const*, char const*, int, char const*)){&$CCTextInputNode::create} != (CCTextInputNode*(*)(float, float, char const*, char const*, int, char const*)){&D::create})
        return reinterpret_cast<CCTextInputNode*(*)(float, float, char const*, char const*, int, char const*)>(m->getOriginal(base+0x5cfb0))(p0, p1, p2, p3, p4, p5);
    else return CCTextInputNode::create(p0, p1, p2, p3, p4, p5);
}

template<class D, void*** V>
std::string $CCTextInputNode<D, V>::getString() {
    if ((std::string($CCTextInputNode::*)()){&$CCTextInputNode::getString} != (std::string(D::*)()){&D::getString})
        return reinterpret_cast<std::string(*)(decltype(this))>(m->getOriginal(base+0x5d6f0))(this);
    else return CCTextInputNode::getString();
}

template<class D, void*** V>
void $CCTextInputNode<D, V>::refreshLabel() {
    if ((void($CCTextInputNode::*)()){&$CCTextInputNode::refreshLabel} != (void(D::*)()){&D::refreshLabel})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x5d730))(this);
    else return CCTextInputNode::refreshLabel();
}

template<class D, void*** V>
void $CCTextInputNode<D, V>::setAllowedChars(std::string p0) {
    if ((void($CCTextInputNode::*)(std::string)){&$CCTextInputNode::setAllowedChars} != (void(D::*)(std::string)){&D::setAllowedChars})
        return reinterpret_cast<void(*)(decltype(this), std::string)>(m->getOriginal(base+0x5d360))(this, p0);
    else return CCTextInputNode::setAllowedChars(p0);
}

template<class D, void*** V>
void $CCTextInputNode<D, V>::setLabelNormalColor(cocos2d::_ccColor3B p0) {
    if ((void($CCTextInputNode::*)(cocos2d::_ccColor3B)){&$CCTextInputNode::setLabelNormalColor} != (void(D::*)(cocos2d::_ccColor3B)){&D::setLabelNormalColor})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::_ccColor3B)>(m->getOriginal(base+0x5dab0))(this, p0);
    else return CCTextInputNode::setLabelNormalColor(p0);
}

template<class D, void*** V>
void $CCTextInputNode<D, V>::setLabelPlaceholderColor(cocos2d::_ccColor3B p0) {
    if ((void($CCTextInputNode::*)(cocos2d::_ccColor3B)){&$CCTextInputNode::setLabelPlaceholderColor} != (void(D::*)(cocos2d::_ccColor3B)){&D::setLabelPlaceholderColor})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::_ccColor3B)>(m->getOriginal(base+0x5da90))(this, p0);
    else return CCTextInputNode::setLabelPlaceholderColor(p0);
}

template<class D, void*** V>
void $CCTextInputNode<D, V>::setLabelPlaceholderScale(float p0) {
    if ((void($CCTextInputNode::*)(float)){&$CCTextInputNode::setLabelPlaceholderScale} != (void(D::*)(float)){&D::setLabelPlaceholderScale})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x5da70))(this, p0);
    else return CCTextInputNode::setLabelPlaceholderScale(p0);
}

template<class D, void*** V>
void $CCTextInputNode<D, V>::setMaxLabelScale(float p0) {
    if ((void($CCTextInputNode::*)(float)){&$CCTextInputNode::setMaxLabelScale} != (void(D::*)(float)){&D::setMaxLabelScale})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x5da30))(this, p0);
    else return CCTextInputNode::setMaxLabelScale(p0);
}

template<class D, void*** V>
void $CCTextInputNode<D, V>::setMaxLabelWidth(float p0) {
    if ((void($CCTextInputNode::*)(float)){&$CCTextInputNode::setMaxLabelWidth} != (void(D::*)(float)){&D::setMaxLabelWidth})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x5da50))(this, p0);
    else return CCTextInputNode::setMaxLabelWidth(p0);
}

template<class D, void*** V>
void $CCTextInputNode<D, V>::setString(std::string p0) {
    if ((void($CCTextInputNode::*)(std::string)){&$CCTextInputNode::setString} != (void(D::*)(std::string)){&D::setString})
        return reinterpret_cast<void(*)(decltype(this), std::string)>(m->getOriginal(base+0x5d3e0))(this, p0);
    else return CCTextInputNode::setString(p0);
}

template<class D, void*** V>
void $CCTextInputNode<D, V>::updateLabel(std::string p0) {
    if ((void($CCTextInputNode::*)(std::string)){&$CCTextInputNode::updateLabel} != (void(D::*)(std::string)){&D::updateLabel})
        return reinterpret_cast<void(*)(decltype(this), std::string)>(m->getOriginal(base+0x5d4a0))(this, p0);
    else return CCTextInputNode::updateLabel(p0);
}

template<class D, void*** V>
void $CCTextInputNode<D, V>::forceOffset() {
    if ((void($CCTextInputNode::*)()){&$CCTextInputNode::forceOffset} != (void(D::*)()){&D::forceOffset})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x5ec70))(this);
    else return CCTextInputNode::forceOffset();
}

template<class D, void*** V>
void $CCTextInputNode<D, V>::registerWithTouchDispatcher() {
    if ((void($CCTextInputNode::*)()){&$CCTextInputNode::registerWithTouchDispatcher} != (void(D::*)()){&D::registerWithTouchDispatcher})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x5eec0))(this);
    else return CCTextInputNode::registerWithTouchDispatcher();
}

template<class D, void*** V>
bool $CCTextInputNode<D, V>::init(float p0, float p1, char const* p2, char const* p3, int p4, char const* p5) {
    if ((bool($CCTextInputNode::*)(float, float, char const*, char const*, int, char const*)){&$CCTextInputNode::init} != (bool(D::*)(float, float, char const*, char const*, int, char const*)){&D::init})
        return reinterpret_cast<bool(*)(decltype(this), float, float, char const*, char const*, int, char const*)>(m->getOriginal(base+0x5d180))(this, p0, p1, p2, p3, p4, p5);
    else return CCTextInputNode::init(p0, p1, p2, p3, p4, p5);
}

template<class D, void*** V>
void $CCTextInputNode<D, V>::visit() {
    if ((void($CCTextInputNode::*)()){&$CCTextInputNode::visit} != (void(D::*)()){&D::visit})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x5d380))(this);
    else return CCTextInputNode::visit();
}

template<class D, void*** V>
bool $CCTextInputNode<D, V>::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    if ((bool($CCTextInputNode::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&$CCTextInputNode::ccTouchBegan} != (bool(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchBegan})
        return reinterpret_cast<bool(*)(decltype(this), cocos2d::CCTouch*, cocos2d::CCEvent*)>(m->getOriginal(base+0x5ec80))(this, p0, p1);
    else return CCTextInputNode::ccTouchBegan(p0, p1);
}

template<class D, void*** V>
void $CCTextInputNode<D, V>::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    if ((void($CCTextInputNode::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&$CCTextInputNode::ccTouchCancelled} != (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchCancelled})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCTouch*, cocos2d::CCEvent*)>(m->getOriginal(base+0x5ee80))(this, p0, p1);
    else return CCTextInputNode::ccTouchCancelled(p0, p1);
}

template<class D, void*** V>
void $CCTextInputNode<D, V>::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    if ((void($CCTextInputNode::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&$CCTextInputNode::ccTouchEnded} != (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchEnded})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCTouch*, cocos2d::CCEvent*)>(m->getOriginal(base+0x5ee60))(this, p0, p1);
    else return CCTextInputNode::ccTouchEnded(p0, p1);
}

template<class D, void*** V>
void $CCTextInputNode<D, V>::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    if ((void($CCTextInputNode::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&$CCTextInputNode::ccTouchMoved} != (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchMoved})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCTouch*, cocos2d::CCEvent*)>(m->getOriginal(base+0x5eea0))(this, p0, p1);
    else return CCTextInputNode::ccTouchMoved(p0, p1);
}

template<class D, void*** V>
void $CCTextInputNode<D, V>::textChanged() {
    if ((void($CCTextInputNode::*)()){&$CCTextInputNode::textChanged} != (void(D::*)()){&D::textChanged})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x5dd70))(this);
    else return CCTextInputNode::textChanged();
}

template<class D, void*** V>
void $CCTextInputNode<D, V>::onClickTrackNode(bool p0) {
    if ((void($CCTextInputNode::*)(bool)){&$CCTextInputNode::onClickTrackNode} != (void(D::*)(bool)){&D::onClickTrackNode})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x5dd40))(this, p0);
    else return CCTextInputNode::onClickTrackNode(p0);
}

template<class D, void*** V>
void $CCTextInputNode<D, V>::keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo& p0) {
    if ((void($CCTextInputNode::*)(cocos2d::CCIMEKeyboardNotificationInfo&)){&$CCTextInputNode::keyboardWillShow} != (void(D::*)(cocos2d::CCIMEKeyboardNotificationInfo&)){&D::keyboardWillShow})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCIMEKeyboardNotificationInfo&)>(m->getOriginal(base+0x5dad0))(this, p0);
    else return CCTextInputNode::keyboardWillShow(p0);
}

template<class D, void*** V>
void $CCTextInputNode<D, V>::keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo& p0) {
    if ((void($CCTextInputNode::*)(cocos2d::CCIMEKeyboardNotificationInfo&)){&$CCTextInputNode::keyboardWillHide} != (void(D::*)(cocos2d::CCIMEKeyboardNotificationInfo&)){&D::keyboardWillHide})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCIMEKeyboardNotificationInfo&)>(m->getOriginal(base+0x5dc20))(this, p0);
    else return CCTextInputNode::keyboardWillHide(p0);
}

template<class D, void*** V>
bool $CCTextInputNode<D, V>::onTextFieldInsertText(cocos2d::CCTextFieldTTF* p0, char const* p1, int p2) {
    if ((bool($CCTextInputNode::*)(cocos2d::CCTextFieldTTF*, char const*, int)){&$CCTextInputNode::onTextFieldInsertText} != (bool(D::*)(cocos2d::CCTextFieldTTF*, char const*, int)){&D::onTextFieldInsertText})
        return reinterpret_cast<bool(*)(decltype(this), cocos2d::CCTextFieldTTF*, char const*, int)>(m->getOriginal(base+0x5de50))(this, p0, p1, p2);
    else return CCTextInputNode::onTextFieldInsertText(p0, p1, p2);
}

template<class D, void*** V>
bool $CCTextInputNode<D, V>::onTextFieldAttachWithIME(cocos2d::CCTextFieldTTF* p0) {
    if ((bool($CCTextInputNode::*)(cocos2d::CCTextFieldTTF*)){&$CCTextInputNode::onTextFieldAttachWithIME} != (bool(D::*)(cocos2d::CCTextFieldTTF*)){&D::onTextFieldAttachWithIME})
        return reinterpret_cast<bool(*)(decltype(this), cocos2d::CCTextFieldTTF*)>(m->getOriginal(base+0x5e2c0))(this, p0);
    else return CCTextInputNode::onTextFieldAttachWithIME(p0);
}

template<class D, void*** V>
bool $CCTextInputNode<D, V>::onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF* p0) {
    if ((bool($CCTextInputNode::*)(cocos2d::CCTextFieldTTF*)){&$CCTextInputNode::onTextFieldDetachWithIME} != (bool(D::*)(cocos2d::CCTextFieldTTF*)){&D::onTextFieldDetachWithIME})
        return reinterpret_cast<bool(*)(decltype(this), cocos2d::CCTextFieldTTF*)>(m->getOriginal(base+0x5e610))(this, p0);
    else return CCTextInputNode::onTextFieldDetachWithIME(p0);
}


template<class D, void*** V>
$CheckpointObject<D, V>::~$CheckpointObject() {}

template<class D, void*** V>
$CheckpointObject<D, V>::$CheckpointObject() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((CheckpointObject*(*)()){&$CheckpointObject::create} != (CheckpointObject*(*)()){&D::create})
        m->registerHook(base+0x7e7d0, (CheckpointObject*(*)()){&D::create});

    if ((void($CheckpointObject::*)()){&$CheckpointObject::getObject} != (void(D::*)()){&D::getObject})
        m->registerHook(base+0x7ef50, extract((void(D::*)()){&D::getObject}));
}

template<class D, void*** V>
CheckpointObject* $CheckpointObject<D, V>::create() {
    if ((CheckpointObject*(*)()){&$CheckpointObject::create} != (CheckpointObject*(*)()){&D::create})
        return reinterpret_cast<CheckpointObject*(*)()>(m->getOriginal(base+0x7e7d0))();
    else return CheckpointObject::create();
}

template<class D, void*** V>
void $CheckpointObject<D, V>::getObject() {
    if ((void($CheckpointObject::*)()){&$CheckpointObject::getObject} != (void(D::*)()){&D::getObject})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x7ef50))(this);
    else return CheckpointObject::getObject();
}


template<class D, void*** V>
$CollisionBlockPopup<D, V>::~$CollisionBlockPopup() {}

template<class D, void*** V>
$CollisionBlockPopup<D, V>::$CollisionBlockPopup() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((CollisionBlockPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&$CollisionBlockPopup::create} != (CollisionBlockPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        m->registerHook(base+0x130010, (CollisionBlockPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create});

    if ((void($CollisionBlockPopup::*)(cocos2d::CCObject*)){&$CollisionBlockPopup::onNextItemID} != (void(D::*)(cocos2d::CCObject*)){&D::onNextItemID})
        m->registerHook(base+0x130e60, extract((void(D::*)(cocos2d::CCObject*)){&D::onNextItemID}));
}

template<class D, void*** V>
CollisionBlockPopup* $CollisionBlockPopup<D, V>::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    if ((CollisionBlockPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&$CollisionBlockPopup::create} != (CollisionBlockPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        return reinterpret_cast<CollisionBlockPopup*(*)(EffectGameObject*, cocos2d::CCArray*)>(m->getOriginal(base+0x130010))(p0, p1);
    else return CollisionBlockPopup::create(p0, p1);
}

template<class D, void*** V>
void $CollisionBlockPopup<D, V>::onNextItemID(cocos2d::CCObject* p0) {
    if ((void($CollisionBlockPopup::*)(cocos2d::CCObject*)){&$CollisionBlockPopup::onNextItemID} != (void(D::*)(cocos2d::CCObject*)){&D::onNextItemID})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x130e60))(this, p0);
    else return CollisionBlockPopup::onNextItemID(p0);
}


template<class D, void*** V>
$CollisionTriggerAction<D, V>::~$CollisionTriggerAction() {}

template<class D, void*** V>
$CollisionTriggerAction<D, V>::$CollisionTriggerAction() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((CollisionTriggerAction*(*)(std::string)){&$CollisionTriggerAction::createFromString} != (CollisionTriggerAction*(*)(std::string)){&D::createFromString})
        m->registerHook(base+0x176ee0, (CollisionTriggerAction*(*)(std::string)){&D::createFromString});
}

template<class D, void*** V>
CollisionTriggerAction* $CollisionTriggerAction<D, V>::createFromString(std::string p0) {
    if ((CollisionTriggerAction*(*)(std::string)){&$CollisionTriggerAction::createFromString} != (CollisionTriggerAction*(*)(std::string)){&D::createFromString})
        return reinterpret_cast<CollisionTriggerAction*(*)(std::string)>(m->getOriginal(base+0x176ee0))(p0);
    else return CollisionTriggerAction::createFromString(p0);
}


template<class D, void*** V>
$ColorAction<D, V>::~$ColorAction() {}

template<class D, void*** V>
$ColorAction<D, V>::$ColorAction() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($ColorAction::*)()){&$ColorAction::getSaveString} != (void(D::*)()){&D::getSaveString})
        m->registerHook(base+0x17d080, extract((void(D::*)()){&D::getSaveString}));

    if ((void($ColorAction::*)(cocos2d::CCDictionary*)){&$ColorAction::setupFromDict} != (void(D::*)(cocos2d::CCDictionary*)){&D::setupFromDict})
        m->registerHook(base+0x17f310, extract((void(D::*)(cocos2d::CCDictionary*)){&D::setupFromDict}));

    if ((void($ColorAction::*)(std::string)){&$ColorAction::setupFromString} != (void(D::*)(std::string)){&D::setupFromString})
        m->registerHook(base+0x17f270, extract((void(D::*)(std::string)){&D::setupFromString}));
}

template<class D, void*** V>
void $ColorAction<D, V>::getSaveString() {
    if ((void($ColorAction::*)()){&$ColorAction::getSaveString} != (void(D::*)()){&D::getSaveString})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x17d080))(this);
    else return ColorAction::getSaveString();
}

template<class D, void*** V>
void $ColorAction<D, V>::setupFromDict(cocos2d::CCDictionary* p0) {
    if ((void($ColorAction::*)(cocos2d::CCDictionary*)){&$ColorAction::setupFromDict} != (void(D::*)(cocos2d::CCDictionary*)){&D::setupFromDict})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCDictionary*)>(m->getOriginal(base+0x17f310))(this, p0);
    else return ColorAction::setupFromDict(p0);
}

template<class D, void*** V>
void $ColorAction<D, V>::setupFromString(std::string p0) {
    if ((void($ColorAction::*)(std::string)){&$ColorAction::setupFromString} != (void(D::*)(std::string)){&D::setupFromString})
        return reinterpret_cast<void(*)(decltype(this), std::string)>(m->getOriginal(base+0x17f270))(this, p0);
    else return ColorAction::setupFromString(p0);
}


template<class D, void*** V>
$ColorActionSprite<D, V>::~$ColorActionSprite() {}

template<class D, void*** V>
$ColorActionSprite<D, V>::$ColorActionSprite() {
    m->registerHook(extract_destructor(V), +[](){});
}


template<class D, void*** V>
$ColorChannelSprite<D, V>::~$ColorChannelSprite() {}

template<class D, void*** V>
$ColorChannelSprite<D, V>::$ColorChannelSprite() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($ColorChannelSprite::*)(bool)){&$ColorChannelSprite::updateBlending} != (void(D::*)(bool)){&D::updateBlending})
        m->registerHook(base+0x16e1d0, extract((void(D::*)(bool)){&D::updateBlending}));

    if ((void($ColorChannelSprite::*)(int, bool)){&$ColorChannelSprite::updateCopyLabel} != (void(D::*)(int, bool)){&D::updateCopyLabel})
        m->registerHook(base+0x16ded0, extract((void(D::*)(int, bool)){&D::updateCopyLabel}));

    if ((void($ColorChannelSprite::*)(float)){&$ColorChannelSprite::updateOpacity} != (void(D::*)(float)){&D::updateOpacity})
        m->registerHook(base+0x16e080, extract((void(D::*)(float)){&D::updateOpacity}));

    if ((void($ColorChannelSprite::*)(ColorAction*)){&$ColorChannelSprite::updateValues} != (void(D::*)(ColorAction*)){&D::updateValues})
        m->registerHook(base+0x16e2e0, extract((void(D::*)(ColorAction*)){&D::updateValues}));
}

template<class D, void*** V>
void $ColorChannelSprite<D, V>::updateBlending(bool p0) {
    if ((void($ColorChannelSprite::*)(bool)){&$ColorChannelSprite::updateBlending} != (void(D::*)(bool)){&D::updateBlending})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x16e1d0))(this, p0);
    else return ColorChannelSprite::updateBlending(p0);
}

template<class D, void*** V>
void $ColorChannelSprite<D, V>::updateCopyLabel(int p0, bool p1) {
    if ((void($ColorChannelSprite::*)(int, bool)){&$ColorChannelSprite::updateCopyLabel} != (void(D::*)(int, bool)){&D::updateCopyLabel})
        return reinterpret_cast<void(*)(decltype(this), int, bool)>(m->getOriginal(base+0x16ded0))(this, p0, p1);
    else return ColorChannelSprite::updateCopyLabel(p0, p1);
}

template<class D, void*** V>
void $ColorChannelSprite<D, V>::updateOpacity(float p0) {
    if ((void($ColorChannelSprite::*)(float)){&$ColorChannelSprite::updateOpacity} != (void(D::*)(float)){&D::updateOpacity})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x16e080))(this, p0);
    else return ColorChannelSprite::updateOpacity(p0);
}

template<class D, void*** V>
void $ColorChannelSprite<D, V>::updateValues(ColorAction* p0) {
    if ((void($ColorChannelSprite::*)(ColorAction*)){&$ColorChannelSprite::updateValues} != (void(D::*)(ColorAction*)){&D::updateValues})
        return reinterpret_cast<void(*)(decltype(this), ColorAction*)>(m->getOriginal(base+0x16e2e0))(this, p0);
    else return ColorChannelSprite::updateValues(p0);
}


template<class D, void*** V>
$ColorPickerDelegate<D, V>::~$ColorPickerDelegate() {}

template<class D, void*** V>
$ColorPickerDelegate<D, V>::$ColorPickerDelegate() {
    m->registerHook(extract_destructor(V), +[](){});
}


template<class D, void*** V>
$ColorSelectLiveOverlay<D, V>::~$ColorSelectLiveOverlay() {}

template<class D, void*** V>
$ColorSelectLiveOverlay<D, V>::$ColorSelectLiveOverlay() {
    m->registerHook(extract_destructor(V), +[](){});
}


template<class D, void*** V>
$ConfigureValuePopup<D, V>::~$ConfigureValuePopup() {}

template<class D, void*** V>
$ConfigureValuePopup<D, V>::$ConfigureValuePopup() {
    m->registerHook(extract_destructor(V), +[](){});
}


template<class D, void*** V>
$CountTriggerAction<D, V>::~$CountTriggerAction() {}

template<class D, void*** V>
$CountTriggerAction<D, V>::$CountTriggerAction() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((CountTriggerAction*(*)(std::string)){&$CountTriggerAction::createFromString} != (CountTriggerAction*(*)(std::string)){&D::createFromString})
        m->registerHook(base+0x1754f0, (CountTriggerAction*(*)(std::string)){&D::createFromString});
}

template<class D, void*** V>
CountTriggerAction* $CountTriggerAction<D, V>::createFromString(std::string p0) {
    if ((CountTriggerAction*(*)(std::string)){&$CountTriggerAction::createFromString} != (CountTriggerAction*(*)(std::string)){&D::createFromString})
        return reinterpret_cast<CountTriggerAction*(*)(std::string)>(m->getOriginal(base+0x1754f0))(p0);
    else return CountTriggerAction::createFromString(p0);
}


template<class D, void*** V>
$CreateMenuItem<D, V>::~$CreateMenuItem() {}

template<class D, void*** V>
$CreateMenuItem<D, V>::$CreateMenuItem() {
    m->registerHook(extract_destructor(V), +[](){});
}


template<class D, void*** V>
$CreatorLayer<D, V>::~$CreatorLayer() {}

template<class D, void*** V>
$CreatorLayer<D, V>::$CreatorLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($CreatorLayer::*)(cocos2d::CCObject*)){&$CreatorLayer::onMyLevels} != (void(D::*)(cocos2d::CCObject*)){&D::onMyLevels})
        m->registerHook(base+0x142b70, extract((void(D::*)(cocos2d::CCObject*)){&D::onMyLevels}));

    if ((void($CreatorLayer::*)(cocos2d::CCObject*)){&$CreatorLayer::onSavedLevels} != (void(D::*)(cocos2d::CCObject*)){&D::onSavedLevels})
        m->registerHook(base+0x142860, extract((void(D::*)(cocos2d::CCObject*)){&D::onSavedLevels}));
}

template<class D, void*** V>
void $CreatorLayer<D, V>::onMyLevels(cocos2d::CCObject* p0) {
    if ((void($CreatorLayer::*)(cocos2d::CCObject*)){&$CreatorLayer::onMyLevels} != (void(D::*)(cocos2d::CCObject*)){&D::onMyLevels})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x142b70))(this, p0);
    else return CreatorLayer::onMyLevels(p0);
}

template<class D, void*** V>
void $CreatorLayer<D, V>::onSavedLevels(cocos2d::CCObject* p0) {
    if ((void($CreatorLayer::*)(cocos2d::CCObject*)){&$CreatorLayer::onSavedLevels} != (void(D::*)(cocos2d::CCObject*)){&D::onSavedLevels})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x142860))(this, p0);
    else return CreatorLayer::onSavedLevels(p0);
}


template<class D, void*** V>
$CurrencyRewardLayer<D, V>::~$CurrencyRewardLayer() {}

template<class D, void*** V>
$CurrencyRewardLayer<D, V>::$CurrencyRewardLayer() {
    m->registerHook(extract_destructor(V), +[](){});
}


template<class D, void*** V>
$CustomListView<D, V>::~$CustomListView() {}

template<class D, void*** V>
$CustomListView<D, V>::$CustomListView() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((CustomListView*(*)(cocos2d::CCArray*, float, float, int, BoomListType)){&$CustomListView::create} != (CustomListView*(*)(cocos2d::CCArray*, float, float, int, BoomListType)){&D::create})
        m->registerHook(base+0x10d410, (CustomListView*(*)(cocos2d::CCArray*, float, float, int, BoomListType)){&D::create});
}

template<class D, void*** V>
CustomListView* $CustomListView<D, V>::create(cocos2d::CCArray* p0, float p1, float p2, int p3, BoomListType p4) {
    if ((CustomListView*(*)(cocos2d::CCArray*, float, float, int, BoomListType)){&$CustomListView::create} != (CustomListView*(*)(cocos2d::CCArray*, float, float, int, BoomListType)){&D::create})
        return reinterpret_cast<CustomListView*(*)(cocos2d::CCArray*, float, float, int, BoomListType)>(m->getOriginal(base+0x10d410))(p0, p1, p2, p3, p4);
    else return CustomListView::create(p0, p1, p2, p3, p4);
}


template<class D, void*** V>
$CustomizeObjectLayer<D, V>::~$CustomizeObjectLayer() {}

template<class D, void*** V>
$CustomizeObjectLayer<D, V>::$CustomizeObjectLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($CustomizeObjectLayer::*)(cocos2d::CCNode*)){&$CustomizeObjectLayer::colorSelectClosed} != (void(D::*)(cocos2d::CCNode*)){&D::colorSelectClosed})
        m->registerHook(base+0xe1050, extract((void(D::*)(cocos2d::CCNode*)){&D::colorSelectClosed}));

    if ((CustomizeObjectLayer*(*)(GameObject*, cocos2d::CCArray*)){&$CustomizeObjectLayer::create} != (CustomizeObjectLayer*(*)(GameObject*, cocos2d::CCArray*)){&D::create})
        m->registerHook(base+0xdd340, (CustomizeObjectLayer*(*)(GameObject*, cocos2d::CCArray*)){&D::create});

    if ((bool($CustomizeObjectLayer::*)(GameObject*, cocos2d::CCArray*)){&$CustomizeObjectLayer::init} != (bool(D::*)(GameObject*, cocos2d::CCArray*)){&D::init})
        m->registerHook(base+0xdd560, extract((bool(D::*)(GameObject*, cocos2d::CCArray*)){&D::init}));

    if ((void($CustomizeObjectLayer::*)(CCTextInputNode*)){&$CustomizeObjectLayer::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        m->registerHook(base+0xe1470, extract((void(D::*)(CCTextInputNode*)){&D::textChanged}));

    if ((void($CustomizeObjectLayer::*)(CCTextInputNode*)){&$CustomizeObjectLayer::textInputClosed} != (void(D::*)(CCTextInputNode*)){&D::textInputClosed})
        m->registerHook(base+0xe1430, extract((void(D::*)(CCTextInputNode*)){&D::textInputClosed}));
}

template<class D, void*** V>
void $CustomizeObjectLayer<D, V>::colorSelectClosed(cocos2d::CCNode* p0) {
    if ((void($CustomizeObjectLayer::*)(cocos2d::CCNode*)){&$CustomizeObjectLayer::colorSelectClosed} != (void(D::*)(cocos2d::CCNode*)){&D::colorSelectClosed})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCNode*)>(m->getOriginal(base+0xe1050))(this, p0);
    else return CustomizeObjectLayer::colorSelectClosed(p0);
}

template<class D, void*** V>
CustomizeObjectLayer* $CustomizeObjectLayer<D, V>::create(GameObject* p0, cocos2d::CCArray* p1) {
    if ((CustomizeObjectLayer*(*)(GameObject*, cocos2d::CCArray*)){&$CustomizeObjectLayer::create} != (CustomizeObjectLayer*(*)(GameObject*, cocos2d::CCArray*)){&D::create})
        return reinterpret_cast<CustomizeObjectLayer*(*)(GameObject*, cocos2d::CCArray*)>(m->getOriginal(base+0xdd340))(p0, p1);
    else return CustomizeObjectLayer::create(p0, p1);
}

template<class D, void*** V>
bool $CustomizeObjectLayer<D, V>::init(GameObject* p0, cocos2d::CCArray* p1) {
    if ((bool($CustomizeObjectLayer::*)(GameObject*, cocos2d::CCArray*)){&$CustomizeObjectLayer::init} != (bool(D::*)(GameObject*, cocos2d::CCArray*)){&D::init})
        return reinterpret_cast<bool(*)(decltype(this), GameObject*, cocos2d::CCArray*)>(m->getOriginal(base+0xdd560))(this, p0, p1);
    else return CustomizeObjectLayer::init(p0, p1);
}

template<class D, void*** V>
void $CustomizeObjectLayer<D, V>::textChanged(CCTextInputNode* p0) {
    if ((void($CustomizeObjectLayer::*)(CCTextInputNode*)){&$CustomizeObjectLayer::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        return reinterpret_cast<void(*)(decltype(this), CCTextInputNode*)>(m->getOriginal(base+0xe1470))(this, p0);
    else return CustomizeObjectLayer::textChanged(p0);
}

template<class D, void*** V>
void $CustomizeObjectLayer<D, V>::textInputClosed(CCTextInputNode* p0) {
    if ((void($CustomizeObjectLayer::*)(CCTextInputNode*)){&$CustomizeObjectLayer::textInputClosed} != (void(D::*)(CCTextInputNode*)){&D::textInputClosed})
        return reinterpret_cast<void(*)(decltype(this), CCTextInputNode*)>(m->getOriginal(base+0xe1430))(this, p0);
    else return CustomizeObjectLayer::textInputClosed(p0);
}


template<class D, void*** V>
$DelayedSpawnNode<D, V>::~$DelayedSpawnNode() {}

template<class D, void*** V>
$DelayedSpawnNode<D, V>::$DelayedSpawnNode() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((DelayedSpawnNode*(*)()){&$DelayedSpawnNode::create} != (DelayedSpawnNode*(*)()){&D::create})
        m->registerHook(base+0x9b360, (DelayedSpawnNode*(*)()){&D::create});
}

template<class D, void*** V>
DelayedSpawnNode* $DelayedSpawnNode<D, V>::create() {
    if ((DelayedSpawnNode*(*)()){&$DelayedSpawnNode::create} != (DelayedSpawnNode*(*)()){&D::create})
        return reinterpret_cast<DelayedSpawnNode*(*)()>(m->getOriginal(base+0x9b360))();
    else return DelayedSpawnNode::create();
}


template<class D, void*** V>
$DialogLayer<D, V>::~$DialogLayer() {}

template<class D, void*** V>
$DialogLayer<D, V>::$DialogLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((DialogLayer*(*)(DialogObject*, int)){&$DialogLayer::create} != (DialogLayer*(*)(DialogObject*, int)){&D::create})
        m->registerHook(base+0x2047c0, (DialogLayer*(*)(DialogObject*, int)){&D::create});
}

template<class D, void*** V>
DialogLayer* $DialogLayer<D, V>::create(DialogObject* p0, int p1) {
    if ((DialogLayer*(*)(DialogObject*, int)){&$DialogLayer::create} != (DialogLayer*(*)(DialogObject*, int)){&D::create})
        return reinterpret_cast<DialogLayer*(*)(DialogObject*, int)>(m->getOriginal(base+0x2047c0))(p0, p1);
    else return DialogLayer::create(p0, p1);
}


template<class D, void*** V>
$DialogObject<D, V>::~$DialogObject() {}

template<class D, void*** V>
$DialogObject<D, V>::$DialogObject() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((DialogObject*(*)(std::string, std::string, int, float, bool, cocos2d::_ccColor3B)){&$DialogObject::create} != (DialogObject*(*)(std::string, std::string, int, float, bool, cocos2d::_ccColor3B)){&D::create})
        m->registerHook(base+0x204410, (DialogObject*(*)(std::string, std::string, int, float, bool, cocos2d::_ccColor3B)){&D::create});
}

template<class D, void*** V>
DialogObject* $DialogObject<D, V>::create(std::string p0, std::string p1, int p2, float p3, bool p4, cocos2d::_ccColor3B p5) {
    if ((DialogObject*(*)(std::string, std::string, int, float, bool, cocos2d::_ccColor3B)){&$DialogObject::create} != (DialogObject*(*)(std::string, std::string, int, float, bool, cocos2d::_ccColor3B)){&D::create})
        return reinterpret_cast<DialogObject*(*)(std::string, std::string, int, float, bool, cocos2d::_ccColor3B)>(m->getOriginal(base+0x204410))(p0, p1, p2, p3, p4, p5);
    else return DialogObject::create(p0, p1, p2, p3, p4, p5);
}


template<class D, void*** V>
$DrawGridLayer<D, V>::~$DrawGridLayer() {}

template<class D, void*** V>
$DrawGridLayer<D, V>::$DrawGridLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($DrawGridLayer::*)(cocos2d::CCPoint, bool)){&$DrawGridLayer::addPlayer2Point} != (void(D::*)(cocos2d::CCPoint, bool)){&D::addPlayer2Point})
        m->registerHook(base+0xa25b0, extract((void(D::*)(cocos2d::CCPoint, bool)){&D::addPlayer2Point}));

    if ((void($DrawGridLayer::*)(cocos2d::CCPoint)){&$DrawGridLayer::addPlayerPoint} != (void(D::*)(cocos2d::CCPoint)){&D::addPlayerPoint})
        m->registerHook(base+0xa39c0, extract((void(D::*)(cocos2d::CCPoint)){&D::addPlayerPoint}));

    if ((void($DrawGridLayer::*)(GameObject*)){&$DrawGridLayer::addToSpeedObjects} != (void(D::*)(GameObject*)){&D::addToSpeedObjects})
        m->registerHook(base+0x99900, extract((void(D::*)(GameObject*)){&D::addToSpeedObjects}));

    if ((DrawGridLayer*(*)(cocos2d::CCNode*, LevelEditorLayer*)){&$DrawGridLayer::create} != (DrawGridLayer*(*)(cocos2d::CCNode*, LevelEditorLayer*)){&D::create})
        m->registerHook(base+0x920c0, (DrawGridLayer*(*)(cocos2d::CCNode*, LevelEditorLayer*)){&D::create});

    if ((bool($DrawGridLayer::*)(cocos2d::CCNode*, LevelEditorLayer*)){&$DrawGridLayer::init} != (bool(D::*)(cocos2d::CCNode*, LevelEditorLayer*)){&D::init})
        m->registerHook(base+0xa36e0, extract((bool(D::*)(cocos2d::CCNode*, LevelEditorLayer*)){&D::init}));

    if ((void($DrawGridLayer::*)(float)){&$DrawGridLayer::timeForXPos} != (void(D::*)(float)){&D::timeForXPos})
        m->registerHook(base+0x9b330, extract((void(D::*)(float)){&D::timeForXPos}));

    if ((void($DrawGridLayer::*)(float)){&$DrawGridLayer::update} != (void(D::*)(float)){&D::update})
        m->registerHook(base+0xa3b30, extract((void(D::*)(float)){&D::update}));

    if ((void($DrawGridLayer::*)()){&$DrawGridLayer::updateTimeMarkers} != (void(D::*)()){&D::updateTimeMarkers})
        m->registerHook(base+0x92950, extract((void(D::*)()){&D::updateTimeMarkers}));

    if ((void($DrawGridLayer::*)(float)){&$DrawGridLayer::xPosForTime} != (void(D::*)(float)){&D::xPosForTime})
        m->registerHook(base+0x9c830, extract((void(D::*)(float)){&D::xPosForTime}));
}

template<class D, void*** V>
void $DrawGridLayer<D, V>::addPlayer2Point(cocos2d::CCPoint p0, bool p1) {
    if ((void($DrawGridLayer::*)(cocos2d::CCPoint, bool)){&$DrawGridLayer::addPlayer2Point} != (void(D::*)(cocos2d::CCPoint, bool)){&D::addPlayer2Point})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCPoint, bool)>(m->getOriginal(base+0xa25b0))(this, p0, p1);
    else return DrawGridLayer::addPlayer2Point(p0, p1);
}

template<class D, void*** V>
void $DrawGridLayer<D, V>::addPlayerPoint(cocos2d::CCPoint p0) {
    if ((void($DrawGridLayer::*)(cocos2d::CCPoint)){&$DrawGridLayer::addPlayerPoint} != (void(D::*)(cocos2d::CCPoint)){&D::addPlayerPoint})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCPoint)>(m->getOriginal(base+0xa39c0))(this, p0);
    else return DrawGridLayer::addPlayerPoint(p0);
}

template<class D, void*** V>
void $DrawGridLayer<D, V>::addToSpeedObjects(GameObject* p0) {
    if ((void($DrawGridLayer::*)(GameObject*)){&$DrawGridLayer::addToSpeedObjects} != (void(D::*)(GameObject*)){&D::addToSpeedObjects})
        return reinterpret_cast<void(*)(decltype(this), GameObject*)>(m->getOriginal(base+0x99900))(this, p0);
    else return DrawGridLayer::addToSpeedObjects(p0);
}

template<class D, void*** V>
DrawGridLayer* $DrawGridLayer<D, V>::create(cocos2d::CCNode* p0, LevelEditorLayer* p1) {
    if ((DrawGridLayer*(*)(cocos2d::CCNode*, LevelEditorLayer*)){&$DrawGridLayer::create} != (DrawGridLayer*(*)(cocos2d::CCNode*, LevelEditorLayer*)){&D::create})
        return reinterpret_cast<DrawGridLayer*(*)(cocos2d::CCNode*, LevelEditorLayer*)>(m->getOriginal(base+0x920c0))(p0, p1);
    else return DrawGridLayer::create(p0, p1);
}

template<class D, void*** V>
bool $DrawGridLayer<D, V>::init(cocos2d::CCNode* p0, LevelEditorLayer* p1) {
    if ((bool($DrawGridLayer::*)(cocos2d::CCNode*, LevelEditorLayer*)){&$DrawGridLayer::init} != (bool(D::*)(cocos2d::CCNode*, LevelEditorLayer*)){&D::init})
        return reinterpret_cast<bool(*)(decltype(this), cocos2d::CCNode*, LevelEditorLayer*)>(m->getOriginal(base+0xa36e0))(this, p0, p1);
    else return DrawGridLayer::init(p0, p1);
}

template<class D, void*** V>
void $DrawGridLayer<D, V>::timeForXPos(float p0) {
    if ((void($DrawGridLayer::*)(float)){&$DrawGridLayer::timeForXPos} != (void(D::*)(float)){&D::timeForXPos})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x9b330))(this, p0);
    else return DrawGridLayer::timeForXPos(p0);
}

template<class D, void*** V>
void $DrawGridLayer<D, V>::update(float p0) {
    if ((void($DrawGridLayer::*)(float)){&$DrawGridLayer::update} != (void(D::*)(float)){&D::update})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0xa3b30))(this, p0);
    else return DrawGridLayer::update(p0);
}

template<class D, void*** V>
void $DrawGridLayer<D, V>::updateTimeMarkers() {
    if ((void($DrawGridLayer::*)()){&$DrawGridLayer::updateTimeMarkers} != (void(D::*)()){&D::updateTimeMarkers})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x92950))(this);
    else return DrawGridLayer::updateTimeMarkers();
}

template<class D, void*** V>
void $DrawGridLayer<D, V>::xPosForTime(float p0) {
    if ((void($DrawGridLayer::*)(float)){&$DrawGridLayer::xPosForTime} != (void(D::*)(float)){&D::xPosForTime})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x9c830))(this, p0);
    else return DrawGridLayer::xPosForTime(p0);
}


template<class D, void*** V>
$EditButtonBar<D, V>::~$EditButtonBar() {}

template<class D, void*** V>
$EditButtonBar<D, V>::$EditButtonBar() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($EditButtonBar::*)(cocos2d::CCArray*, int, int, bool)){&$EditButtonBar::loadFromItems} != (void(D::*)(cocos2d::CCArray*, int, int, bool)){&D::loadFromItems})
        m->registerHook(base+0x351010, extract((void(D::*)(cocos2d::CCArray*, int, int, bool)){&D::loadFromItems}));
}

template<class D, void*** V>
void $EditButtonBar<D, V>::loadFromItems(cocos2d::CCArray* p0, int p1, int p2, bool p3) {
    if ((void($EditButtonBar::*)(cocos2d::CCArray*, int, int, bool)){&$EditButtonBar::loadFromItems} != (void(D::*)(cocos2d::CCArray*, int, int, bool)){&D::loadFromItems})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCArray*, int, int, bool)>(m->getOriginal(base+0x351010))(this, p0, p1, p2, p3);
    else return EditButtonBar::loadFromItems(p0, p1, p2, p3);
}


template<class D, void*** V>
$EditorOptionsLayer<D, V>::~$EditorOptionsLayer() {}

template<class D, void*** V>
$EditorOptionsLayer<D, V>::$EditorOptionsLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($EditorOptionsLayer::*)(cocos2d::CCObject*)){&$EditorOptionsLayer::onButtonsPerRow} != (void(D::*)(cocos2d::CCObject*)){&D::onButtonsPerRow})
        m->registerHook(base+0x147b30, extract((void(D::*)(cocos2d::CCObject*)){&D::onButtonsPerRow}));
}

template<class D, void*** V>
void $EditorOptionsLayer<D, V>::onButtonsPerRow(cocos2d::CCObject* p0) {
    if ((void($EditorOptionsLayer::*)(cocos2d::CCObject*)){&$EditorOptionsLayer::onButtonsPerRow} != (void(D::*)(cocos2d::CCObject*)){&D::onButtonsPerRow})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x147b30))(this, p0);
    else return EditorOptionsLayer::onButtonsPerRow(p0);
}


template<class D, void*** V>
$EditorUI<D, V>::~$EditorUI() {}

template<class D, void*** V>
$EditorUI<D, V>::$EditorUI() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($EditorUI::*)()){&$EditorUI::constrainGameLayerPosition} != (void(D::*)()){&D::constrainGameLayerPosition})
        m->registerHook(base+0x1c6d0, extract((void(D::*)()){&D::constrainGameLayerPosition}));

    if ((void($EditorUI::*)(LevelEditorLayer*)){&$EditorUI::create} != (void(D::*)(LevelEditorLayer*)){&D::create})
        m->registerHook(base+0x8a80, extract((void(D::*)(LevelEditorLayer*)){&D::create}));

    if ((void($EditorUI::*)()){&$EditorUI::deselectAll} != (void(D::*)()){&D::deselectAll})
        m->registerHook(base+0x1f300, extract((void(D::*)()){&D::deselectAll}));

    if ((void($EditorUI::*)(CCObject*)){&$EditorUI::onDeselectAll} != (void(D::*)(CCObject*)){&D::onDeselectAll})
        m->registerHook(base+0x19cd0, extract((void(D::*)(CCObject*)){&D::onDeselectAll}));

    if ((void($EditorUI::*)(CreateMenuItem*)){&$EditorUI::disableButton} != (void(D::*)(CreateMenuItem*)){&D::disableButton})
        m->registerHook(base+0x1c0f0, extract((void(D::*)(CreateMenuItem*)){&D::disableButton}));

    if ((void($EditorUI::*)()){&$EditorUI::editButtonUsable} != (void(D::*)()){&D::editButtonUsable})
        m->registerHook(base+0x28f30, extract((void(D::*)()){&D::editButtonUsable}));

    if ((void($EditorUI::*)(cocos2d::CCObject*)){&$EditorUI::editObject} != (void(D::*)(cocos2d::CCObject*)){&D::editObject})
        m->registerHook(base+0x195a0, extract((void(D::*)(cocos2d::CCObject*)){&D::editObject}));

    if ((void($EditorUI::*)(CreateMenuItem*)){&$EditorUI::enableButton} != (void(D::*)(CreateMenuItem*)){&D::enableButton})
        m->registerHook(base+0x1bff0, extract((void(D::*)(CreateMenuItem*)){&D::enableButton}));

    if ((CCMenuItemSpriteExtra*($EditorUI::*)(int, int)){&$EditorUI::getCreateBtn} != (CCMenuItemSpriteExtra*(D::*)(int, int)){&D::getCreateBtn})
        m->registerHook(base+0x1f6c0, extract((CCMenuItemSpriteExtra*(D::*)(int, int)){&D::getCreateBtn}));

    if ((void($EditorUI::*)(cocos2d::CCArray*, bool)){&$EditorUI::getGroupCenter} != (void(D::*)(cocos2d::CCArray*, bool)){&D::getGroupCenter})
        m->registerHook(base+0x23470, extract((void(D::*)(cocos2d::CCArray*, bool)){&D::getGroupCenter}));

    if ((cocos2d::CCArray*($EditorUI::*)()){&$EditorUI::getSelectedObjects} != (cocos2d::CCArray*(D::*)()){&D::getSelectedObjects})
        m->registerHook(base+0x23f30, extract((cocos2d::CCArray*(D::*)()){&D::getSelectedObjects}));

    if ((void($EditorUI::*)(LevelEditorLayer*)){&$EditorUI::init} != (void(D::*)(LevelEditorLayer*)){&D::init})
        m->registerHook(base+0x8ae0, extract((void(D::*)(LevelEditorLayer*)){&D::init}));

    if ((void($EditorUI::*)(cocos2d::enumKeyCodes)){&$EditorUI::keyDown} != (void(D::*)(cocos2d::enumKeyCodes)){&D::keyDown})
        m->registerHook(base+0x30790, extract_virtual(V, (void(D::*)(cocos2d::enumKeyCodes)){&D::keyDown}));
    std::cout << "keyDown: " << (void*)extract_virtual(V, (void(D::*)(cocos2d::enumKeyCodes)){&D::keyDown}) << std::endl;

    if ((void($EditorUI::*)(GameObject*, cocos2d::CCPoint)){&$EditorUI::moveObject} != (void(D::*)(GameObject*, cocos2d::CCPoint)){&D::moveObject})
        m->registerHook(base+0x24b10, extract((void(D::*)(GameObject*, cocos2d::CCPoint)){&D::moveObject}));

    if ((void($EditorUI::*)(cocos2d::CCObject*)){&$EditorUI::onDuplicate} != (void(D::*)(cocos2d::CCObject*)){&D::onDuplicate})
        m->registerHook(base+0x18ba0, extract((void(D::*)(cocos2d::CCObject*)){&D::onDuplicate}));

    if ((void($EditorUI::*)(std::string)){&$EditorUI::pasteObjects} != (void(D::*)(std::string)){&D::pasteObjects})
        m->registerHook(base+0x232d0, extract((void(D::*)(std::string)){&D::pasteObjects}));

    if ((void($EditorUI::*)()){&$EditorUI::playtestStopped} != (void(D::*)()){&D::playtestStopped})
        m->registerHook(base+0x24790, extract((void(D::*)()){&D::playtestStopped}));

    if ((void($EditorUI::*)(cocos2d::CCObject*)){&$EditorUI::redoLastAction} != (void(D::*)(cocos2d::CCObject*)){&D::redoLastAction})
        m->registerHook(base+0xb8e0, extract((void(D::*)(cocos2d::CCObject*)){&D::redoLastAction}));

    if ((void($EditorUI::*)(GameObject*, int, int)){&$EditorUI::replaceGroupID} != (void(D::*)(GameObject*, int, int)){&D::replaceGroupID})
        m->registerHook(base+0x27470, extract((void(D::*)(GameObject*, int, int)){&D::replaceGroupID}));

    if ((void($EditorUI::*)(float)){&$EditorUI::scaleChanged} != (void(D::*)(float)){&D::scaleChanged})
        m->registerHook(base+0x25490, extract((void(D::*)(float)){&D::scaleChanged}));

    if ((void($EditorUI::*)(cocos2d::CCArray*, float, cocos2d::CCPoint)){&$EditorUI::scaleObjects} != (void(D::*)(cocos2d::CCArray*, float, cocos2d::CCPoint)){&D::scaleObjects})
        m->registerHook(base+0x252e0, extract((void(D::*)(cocos2d::CCArray*, float, cocos2d::CCPoint)){&D::scaleObjects}));

    if ((void($EditorUI::*)(cocos2d::CCArray*, bool)){&$EditorUI::selectObjects} != (void(D::*)(cocos2d::CCArray*, bool)){&D::selectObjects})
        m->registerHook(base+0x23940, extract((void(D::*)(cocos2d::CCArray*, bool)){&D::selectObjects}));

    if ((void($EditorUI::*)()){&$EditorUI::setupCreateMenu} != (void(D::*)()){&D::setupCreateMenu})
        m->registerHook(base+0xcb50, extract((void(D::*)()){&D::setupCreateMenu}));

    if ((void($EditorUI::*)(cocos2d::CCObject*)){&$EditorUI::undoLastAction} != (void(D::*)(cocos2d::CCObject*)){&D::undoLastAction})
        m->registerHook(base+0xb830, extract((void(D::*)(cocos2d::CCObject*)){&D::undoLastAction}));

    if ((void($EditorUI::*)()){&$EditorUI::updateButtons} != (void(D::*)()){&D::updateButtons})
        m->registerHook(base+0x1a300, extract((void(D::*)()){&D::updateButtons}));

    if ((void($EditorUI::*)()){&$EditorUI::updateObjectInfoLabel} != (void(D::*)()){&D::updateObjectInfoLabel})
        m->registerHook(base+0x1cb10, extract((void(D::*)()){&D::updateObjectInfoLabel}));

    if ((void($EditorUI::*)()){&$EditorUI::updateSlider} != (void(D::*)()){&D::updateSlider})
        m->registerHook(base+0x18a90, extract((void(D::*)()){&D::updateSlider}));

    if ((void($EditorUI::*)(float)){&$EditorUI::updateZoom} != (void(D::*)(float)){&D::updateZoom})
        m->registerHook(base+0x248c0, extract((void(D::*)(float)){&D::updateZoom}));
}

template<class D, void*** V>
void $EditorUI<D, V>::constrainGameLayerPosition() {
    if ((void($EditorUI::*)()){&$EditorUI::constrainGameLayerPosition} != (void(D::*)()){&D::constrainGameLayerPosition})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x1c6d0))(this);
    else return EditorUI::constrainGameLayerPosition();
}

template<class D, void*** V>
void $EditorUI<D, V>::create(LevelEditorLayer* p0) {
    if ((void($EditorUI::*)(LevelEditorLayer*)){&$EditorUI::create} != (void(D::*)(LevelEditorLayer*)){&D::create})
        return reinterpret_cast<void(*)(decltype(this), LevelEditorLayer*)>(m->getOriginal(base+0x8a80))(this, p0);
    else return EditorUI::create(p0);
}

template<class D, void*** V>
void $EditorUI<D, V>::deselectAll() {
    if ((void($EditorUI::*)()){&$EditorUI::deselectAll} != (void(D::*)()){&D::deselectAll})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x1f300))(this);
    else return EditorUI::deselectAll();
}

template<class D, void*** V>
void $EditorUI<D, V>::onDeselectAll(CCObject* p0) {
    if ((void($EditorUI::*)(CCObject*)){&$EditorUI::onDeselectAll} != (void(D::*)(CCObject*)){&D::onDeselectAll})
        return reinterpret_cast<void(*)(decltype(this), CCObject*)>(m->getOriginal(base+0x19cd0))(this, p0);
    else return EditorUI::onDeselectAll(p0);
}

template<class D, void*** V>
void $EditorUI<D, V>::disableButton(CreateMenuItem* p0) {
    if ((void($EditorUI::*)(CreateMenuItem*)){&$EditorUI::disableButton} != (void(D::*)(CreateMenuItem*)){&D::disableButton})
        return reinterpret_cast<void(*)(decltype(this), CreateMenuItem*)>(m->getOriginal(base+0x1c0f0))(this, p0);
    else return EditorUI::disableButton(p0);
}

template<class D, void*** V>
void $EditorUI<D, V>::editButtonUsable() {
    if ((void($EditorUI::*)()){&$EditorUI::editButtonUsable} != (void(D::*)()){&D::editButtonUsable})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x28f30))(this);
    else return EditorUI::editButtonUsable();
}

template<class D, void*** V>
void $EditorUI<D, V>::editObject(cocos2d::CCObject* p0) {
    if ((void($EditorUI::*)(cocos2d::CCObject*)){&$EditorUI::editObject} != (void(D::*)(cocos2d::CCObject*)){&D::editObject})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x195a0))(this, p0);
    else return EditorUI::editObject(p0);
}

template<class D, void*** V>
void $EditorUI<D, V>::enableButton(CreateMenuItem* p0) {
    if ((void($EditorUI::*)(CreateMenuItem*)){&$EditorUI::enableButton} != (void(D::*)(CreateMenuItem*)){&D::enableButton})
        return reinterpret_cast<void(*)(decltype(this), CreateMenuItem*)>(m->getOriginal(base+0x1bff0))(this, p0);
    else return EditorUI::enableButton(p0);
}

template<class D, void*** V>
CCMenuItemSpriteExtra* $EditorUI<D, V>::getCreateBtn(int p0, int p1) {
    if ((CCMenuItemSpriteExtra*($EditorUI::*)(int, int)){&$EditorUI::getCreateBtn} != (CCMenuItemSpriteExtra*(D::*)(int, int)){&D::getCreateBtn})
        return reinterpret_cast<CCMenuItemSpriteExtra*(*)(decltype(this), int, int)>(m->getOriginal(base+0x1f6c0))(this, p0, p1);
    else return EditorUI::getCreateBtn(p0, p1);
}

template<class D, void*** V>
void $EditorUI<D, V>::getGroupCenter(cocos2d::CCArray* p0, bool p1) {
    if ((void($EditorUI::*)(cocos2d::CCArray*, bool)){&$EditorUI::getGroupCenter} != (void(D::*)(cocos2d::CCArray*, bool)){&D::getGroupCenter})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCArray*, bool)>(m->getOriginal(base+0x23470))(this, p0, p1);
    else return EditorUI::getGroupCenter(p0, p1);
}

template<class D, void*** V>
cocos2d::CCArray* $EditorUI<D, V>::getSelectedObjects() {
    if ((cocos2d::CCArray*($EditorUI::*)()){&$EditorUI::getSelectedObjects} != (cocos2d::CCArray*(D::*)()){&D::getSelectedObjects})
        return reinterpret_cast<cocos2d::CCArray*(*)(decltype(this))>(m->getOriginal(base+0x23f30))(this);
    else return EditorUI::getSelectedObjects();
}

template<class D, void*** V>
void $EditorUI<D, V>::init(LevelEditorLayer* p0) {
    if ((void($EditorUI::*)(LevelEditorLayer*)){&$EditorUI::init} != (void(D::*)(LevelEditorLayer*)){&D::init})
        return reinterpret_cast<void(*)(decltype(this), LevelEditorLayer*)>(m->getOriginal(base+0x8ae0))(this, p0);
    else return EditorUI::init(p0);
}

template<class D, void*** V>
void $EditorUI<D, V>::keyDown(cocos2d::enumKeyCodes p0) {
    if ((void($EditorUI::*)(cocos2d::enumKeyCodes)){&$EditorUI::keyDown} != (void(D::*)(cocos2d::enumKeyCodes)){&D::keyDown})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::enumKeyCodes)>(m->getOriginal(base+0x30790))(this, p0);
    else return EditorUI::keyDown(p0);
}

template<class D, void*** V>
void $EditorUI<D, V>::moveObject(GameObject* p0, cocos2d::CCPoint p1) {
    if ((void($EditorUI::*)(GameObject*, cocos2d::CCPoint)){&$EditorUI::moveObject} != (void(D::*)(GameObject*, cocos2d::CCPoint)){&D::moveObject})
        return reinterpret_cast<void(*)(decltype(this), GameObject*, cocos2d::CCPoint)>(m->getOriginal(base+0x24b10))(this, p0, p1);
    else return EditorUI::moveObject(p0, p1);
}

template<class D, void*** V>
void $EditorUI<D, V>::onDuplicate(cocos2d::CCObject* p0) {
    if ((void($EditorUI::*)(cocos2d::CCObject*)){&$EditorUI::onDuplicate} != (void(D::*)(cocos2d::CCObject*)){&D::onDuplicate})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x18ba0))(this, p0);
    else return EditorUI::onDuplicate(p0);
}

template<class D, void*** V>
void $EditorUI<D, V>::pasteObjects(std::string p0) {
    if ((void($EditorUI::*)(std::string)){&$EditorUI::pasteObjects} != (void(D::*)(std::string)){&D::pasteObjects})
        return reinterpret_cast<void(*)(decltype(this), std::string)>(m->getOriginal(base+0x232d0))(this, p0);
    else return EditorUI::pasteObjects(p0);
}

template<class D, void*** V>
void $EditorUI<D, V>::playtestStopped() {
    if ((void($EditorUI::*)()){&$EditorUI::playtestStopped} != (void(D::*)()){&D::playtestStopped})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x24790))(this);
    else return EditorUI::playtestStopped();
}

template<class D, void*** V>
void $EditorUI<D, V>::redoLastAction(cocos2d::CCObject* p0) {
    if ((void($EditorUI::*)(cocos2d::CCObject*)){&$EditorUI::redoLastAction} != (void(D::*)(cocos2d::CCObject*)){&D::redoLastAction})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0xb8e0))(this, p0);
    else return EditorUI::redoLastAction(p0);
}

template<class D, void*** V>
void $EditorUI<D, V>::replaceGroupID(GameObject* p0, int p1, int p2) {
    if ((void($EditorUI::*)(GameObject*, int, int)){&$EditorUI::replaceGroupID} != (void(D::*)(GameObject*, int, int)){&D::replaceGroupID})
        return reinterpret_cast<void(*)(decltype(this), GameObject*, int, int)>(m->getOriginal(base+0x27470))(this, p0, p1, p2);
    else return EditorUI::replaceGroupID(p0, p1, p2);
}

template<class D, void*** V>
void $EditorUI<D, V>::scaleChanged(float p0) {
    if ((void($EditorUI::*)(float)){&$EditorUI::scaleChanged} != (void(D::*)(float)){&D::scaleChanged})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x25490))(this, p0);
    else return EditorUI::scaleChanged(p0);
}

template<class D, void*** V>
void $EditorUI<D, V>::scaleObjects(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2) {
    if ((void($EditorUI::*)(cocos2d::CCArray*, float, cocos2d::CCPoint)){&$EditorUI::scaleObjects} != (void(D::*)(cocos2d::CCArray*, float, cocos2d::CCPoint)){&D::scaleObjects})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCArray*, float, cocos2d::CCPoint)>(m->getOriginal(base+0x252e0))(this, p0, p1, p2);
    else return EditorUI::scaleObjects(p0, p1, p2);
}

template<class D, void*** V>
void $EditorUI<D, V>::selectObjects(cocos2d::CCArray* p0, bool p1) {
    if ((void($EditorUI::*)(cocos2d::CCArray*, bool)){&$EditorUI::selectObjects} != (void(D::*)(cocos2d::CCArray*, bool)){&D::selectObjects})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCArray*, bool)>(m->getOriginal(base+0x23940))(this, p0, p1);
    else return EditorUI::selectObjects(p0, p1);
}

template<class D, void*** V>
void $EditorUI<D, V>::setupCreateMenu() {
    if ((void($EditorUI::*)()){&$EditorUI::setupCreateMenu} != (void(D::*)()){&D::setupCreateMenu})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0xcb50))(this);
    else return EditorUI::setupCreateMenu();
}

template<class D, void*** V>
void $EditorUI<D, V>::undoLastAction(cocos2d::CCObject* p0) {
    if ((void($EditorUI::*)(cocos2d::CCObject*)){&$EditorUI::undoLastAction} != (void(D::*)(cocos2d::CCObject*)){&D::undoLastAction})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0xb830))(this, p0);
    else return EditorUI::undoLastAction(p0);
}

template<class D, void*** V>
void $EditorUI<D, V>::updateButtons() {
    if ((void($EditorUI::*)()){&$EditorUI::updateButtons} != (void(D::*)()){&D::updateButtons})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x1a300))(this);
    else return EditorUI::updateButtons();
}

template<class D, void*** V>
void $EditorUI<D, V>::updateObjectInfoLabel() {
    if ((void($EditorUI::*)()){&$EditorUI::updateObjectInfoLabel} != (void(D::*)()){&D::updateObjectInfoLabel})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x1cb10))(this);
    else return EditorUI::updateObjectInfoLabel();
}

template<class D, void*** V>
void $EditorUI<D, V>::updateSlider() {
    if ((void($EditorUI::*)()){&$EditorUI::updateSlider} != (void(D::*)()){&D::updateSlider})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x18a90))(this);
    else return EditorUI::updateSlider();
}

template<class D, void*** V>
void $EditorUI<D, V>::updateZoom(float p0) {
    if ((void($EditorUI::*)(float)){&$EditorUI::updateZoom} != (void(D::*)(float)){&D::updateZoom})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x248c0))(this, p0);
    else return EditorUI::updateZoom(p0);
}


template<class D, void*** V>
$EndLevelLayer<D, V>::~$EndLevelLayer() {}

template<class D, void*** V>
$EndLevelLayer<D, V>::$EndLevelLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((EndLevelLayer*(*)()){&$EndLevelLayer::create} != (EndLevelLayer*(*)()){&D::create})
        m->registerHook(base+0x2787d0, (EndLevelLayer*(*)()){&D::create});
}

template<class D, void*** V>
EndLevelLayer* $EndLevelLayer<D, V>::create() {
    if ((EndLevelLayer*(*)()){&$EndLevelLayer::create} != (EndLevelLayer*(*)()){&D::create})
        return reinterpret_cast<EndLevelLayer*(*)()>(m->getOriginal(base+0x2787d0))();
    else return EndLevelLayer::create();
}


template<class D, void*** V>
$FLAlertLayer<D, V>::~$FLAlertLayer() {}

template<class D, void*** V>
$FLAlertLayer<D, V>::$FLAlertLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($FLAlertLayer::*)()){&$FLAlertLayer::onEnter} != (void(D::*)()){&D::onEnter})
        m->registerHook(base+0x25f350, extract_virtual(V, (void(D::*)()){&D::onEnter}));
    std::cout << "onEnter: " << (void*)extract_virtual(V, (void(D::*)()){&D::onEnter}) << std::endl;

    if ((bool($FLAlertLayer::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&$FLAlertLayer::ccTouchBegan} != (bool(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchBegan})
        m->registerHook(base+0x25ee40, extract_virtual(V, (bool(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchBegan}));
    std::cout << "ccTouchBegan: " << (void*)extract_virtual(V, (bool(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchBegan}) << std::endl;

    if ((void($FLAlertLayer::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&$FLAlertLayer::ccTouchMoved} != (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchMoved})
        m->registerHook(base+0x25f0a0, extract_virtual(V, (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchMoved}));
    std::cout << "ccTouchMoved: " << (void*)extract_virtual(V, (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchMoved}) << std::endl;

    if ((void($FLAlertLayer::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&$FLAlertLayer::ccTouchEnded} != (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchEnded})
        m->registerHook(base+0x25ef60, extract_virtual(V, (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchEnded}));
    std::cout << "ccTouchEnded: " << (void*)extract_virtual(V, (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchEnded}) << std::endl;

    if ((void($FLAlertLayer::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&$FLAlertLayer::ccTouchCancelled} != (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchCancelled})
        m->registerHook(base+0x25f020, extract_virtual(V, (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchCancelled}));
    std::cout << "ccTouchCancelled: " << (void*)extract_virtual(V, (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchCancelled}) << std::endl;

    if ((void($FLAlertLayer::*)()){&$FLAlertLayer::registerWithTouchDispatcher} != (void(D::*)()){&D::registerWithTouchDispatcher})
        m->registerHook(base+0x25f2e0, extract_virtual(V, (void(D::*)()){&D::registerWithTouchDispatcher}));
    std::cout << "registerWithTouchDispatcher: " << (void*)extract_virtual(V, (void(D::*)()){&D::registerWithTouchDispatcher}) << std::endl;

    if ((void($FLAlertLayer::*)()){&$FLAlertLayer::keyBackClicked} != (void(D::*)()){&D::keyBackClicked})
        m->registerHook(base+0x25ed90, extract_virtual(V, (void(D::*)()){&D::keyBackClicked}));
    std::cout << "keyBackClicked: " << (void*)extract_virtual(V, (void(D::*)()){&D::keyBackClicked}) << std::endl;

    if ((void($FLAlertLayer::*)(cocos2d::enumKeyCodes)){&$FLAlertLayer::keyDown} != (void(D::*)(cocos2d::enumKeyCodes)){&D::keyDown})
        m->registerHook(base+0x25ece0, extract_virtual(V, (void(D::*)(cocos2d::enumKeyCodes)){&D::keyDown}));
    std::cout << "keyDown: " << (void*)extract_virtual(V, (void(D::*)(cocos2d::enumKeyCodes)){&D::keyDown}) << std::endl;

    if ((void($FLAlertLayer::*)()){&$FLAlertLayer::show} != (void(D::*)()){&D::show})
        m->registerHook(base+0x25f120, extract_virtual(V, (void(D::*)()){&D::show}));
    std::cout << "show: " << (void*)extract_virtual(V, (void(D::*)()){&D::show}) << std::endl;

    if ((bool($FLAlertLayer::*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float)){&$FLAlertLayer::init} != (bool(D::*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float)){&D::init})
        m->registerHook(base+0x25e1b0, extract_virtual(V, (bool(D::*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float)){&D::init}));
    std::cout << "init: " << (void*)extract_virtual(V, (bool(D::*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float)){&D::init}) << std::endl;

    if ((FLAlertLayer*(*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float)){&$FLAlertLayer::create} != (FLAlertLayer*(*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float)){&D::create})
        m->registerHook(base+0x25e0e0, (FLAlertLayer*(*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float)){&D::create});

    if ((FLAlertLayer*(*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float)){&$FLAlertLayer::create} != (FLAlertLayer*(*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float)){&D::create})
        m->registerHook(base+0x25dec0, (FLAlertLayer*(*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float)){&D::create});
}

template<class D, void*** V>
void $FLAlertLayer<D, V>::onEnter() {
    if ((void($FLAlertLayer::*)()){&$FLAlertLayer::onEnter} != (void(D::*)()){&D::onEnter})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x25f350))(this);
    else return FLAlertLayer::onEnter();
}

template<class D, void*** V>
bool $FLAlertLayer<D, V>::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    if ((bool($FLAlertLayer::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&$FLAlertLayer::ccTouchBegan} != (bool(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchBegan})
        return reinterpret_cast<bool(*)(decltype(this), cocos2d::CCTouch*, cocos2d::CCEvent*)>(m->getOriginal(base+0x25ee40))(this, p0, p1);
    else return FLAlertLayer::ccTouchBegan(p0, p1);
}

template<class D, void*** V>
void $FLAlertLayer<D, V>::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    if ((void($FLAlertLayer::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&$FLAlertLayer::ccTouchMoved} != (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchMoved})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCTouch*, cocos2d::CCEvent*)>(m->getOriginal(base+0x25f0a0))(this, p0, p1);
    else return FLAlertLayer::ccTouchMoved(p0, p1);
}

template<class D, void*** V>
void $FLAlertLayer<D, V>::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    if ((void($FLAlertLayer::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&$FLAlertLayer::ccTouchEnded} != (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchEnded})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCTouch*, cocos2d::CCEvent*)>(m->getOriginal(base+0x25ef60))(this, p0, p1);
    else return FLAlertLayer::ccTouchEnded(p0, p1);
}

template<class D, void*** V>
void $FLAlertLayer<D, V>::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    if ((void($FLAlertLayer::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&$FLAlertLayer::ccTouchCancelled} != (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchCancelled})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCTouch*, cocos2d::CCEvent*)>(m->getOriginal(base+0x25f020))(this, p0, p1);
    else return FLAlertLayer::ccTouchCancelled(p0, p1);
}

template<class D, void*** V>
void $FLAlertLayer<D, V>::registerWithTouchDispatcher() {
    if ((void($FLAlertLayer::*)()){&$FLAlertLayer::registerWithTouchDispatcher} != (void(D::*)()){&D::registerWithTouchDispatcher})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x25f2e0))(this);
    else return FLAlertLayer::registerWithTouchDispatcher();
}

template<class D, void*** V>
void $FLAlertLayer<D, V>::keyBackClicked() {
    if ((void($FLAlertLayer::*)()){&$FLAlertLayer::keyBackClicked} != (void(D::*)()){&D::keyBackClicked})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x25ed90))(this);
    else return FLAlertLayer::keyBackClicked();
}

template<class D, void*** V>
void $FLAlertLayer<D, V>::keyDown(cocos2d::enumKeyCodes p0) {
    if ((void($FLAlertLayer::*)(cocos2d::enumKeyCodes)){&$FLAlertLayer::keyDown} != (void(D::*)(cocos2d::enumKeyCodes)){&D::keyDown})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::enumKeyCodes)>(m->getOriginal(base+0x25ece0))(this, p0);
    else return FLAlertLayer::keyDown(p0);
}

template<class D, void*** V>
void $FLAlertLayer<D, V>::show() {
    if ((void($FLAlertLayer::*)()){&$FLAlertLayer::show} != (void(D::*)()){&D::show})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x25f120))(this);
    else return FLAlertLayer::show();
}

template<class D, void*** V>
bool $FLAlertLayer<D, V>::init(FLAlertLayerProtocol* p0, char const* p1, std::string p2, char const* p3, char const* p4, float p5, bool p6, float p7) {
    if ((bool($FLAlertLayer::*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float)){&$FLAlertLayer::init} != (bool(D::*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float)){&D::init})
        return reinterpret_cast<bool(*)(decltype(this), FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float)>(m->getOriginal(base+0x25e1b0))(this, p0, p1, p2, p3, p4, p5, p6, p7);
    else return FLAlertLayer::init(p0, p1, p2, p3, p4, p5, p6, p7);
}

template<class D, void*** V>
FLAlertLayer* $FLAlertLayer<D, V>::create(FLAlertLayerProtocol* p0, char const* p1, std::string p2, char const* p3, char const* p4, float p5) {
    if ((FLAlertLayer*(*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float)){&$FLAlertLayer::create} != (FLAlertLayer*(*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float)){&D::create})
        return reinterpret_cast<FLAlertLayer*(*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float)>(m->getOriginal(base+0x25e0e0))(p0, p1, p2, p3, p4, p5);
    else return FLAlertLayer::create(p0, p1, p2, p3, p4, p5);
}

template<class D, void*** V>
FLAlertLayer* $FLAlertLayer<D, V>::create(FLAlertLayerProtocol* p0, char const* p1, std::string p2, char const* p3, char const* p4, float p5, bool p6, float p7) {
    if ((FLAlertLayer*(*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float)){&$FLAlertLayer::create} != (FLAlertLayer*(*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float)){&D::create})
        return reinterpret_cast<FLAlertLayer*(*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float)>(m->getOriginal(base+0x25dec0))(p0, p1, p2, p3, p4, p5, p6, p7);
    else return FLAlertLayer::create(p0, p1, p2, p3, p4, p5, p6, p7);
}


template<class D, void*** V>
$FLAlertLayerProtocol<D, V>::~$FLAlertLayerProtocol() {}

template<class D, void*** V>
$FLAlertLayerProtocol<D, V>::$FLAlertLayerProtocol() {
    m->registerHook(extract_destructor(V), +[](){});
}


template<class D, void*** V>
$FMODAudioEngine<D, V>::~$FMODAudioEngine() {}

template<class D, void*** V>
$FMODAudioEngine<D, V>::$FMODAudioEngine() {
    m->registerHook(extract_destructor(V), +[](){});
}


template<class D, void*** V>
$FollowRewardPage<D, V>::~$FollowRewardPage() {}

template<class D, void*** V>
$FollowRewardPage<D, V>::$FollowRewardPage() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((FollowRewardPage*(*)()){&$FollowRewardPage::create} != (FollowRewardPage*(*)()){&D::create})
        m->registerHook(base+0x22f140, (FollowRewardPage*(*)()){&D::create});
}

template<class D, void*** V>
FollowRewardPage* $FollowRewardPage<D, V>::create() {
    if ((FollowRewardPage*(*)()){&$FollowRewardPage::create} != (FollowRewardPage*(*)()){&D::create})
        return reinterpret_cast<FollowRewardPage*(*)()>(m->getOriginal(base+0x22f140))();
    else return FollowRewardPage::create();
}


template<class D, void*** V>
$GJAccountManager<D, V>::~$GJAccountManager() {}

template<class D, void*** V>
$GJAccountManager<D, V>::$GJAccountManager() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((GJAccountManager*(*)()){&$GJAccountManager::sharedState} != (GJAccountManager*(*)()){&D::sharedState})
        m->registerHook(base+0x85070, (GJAccountManager*(*)()){&D::sharedState});
}

template<class D, void*** V>
GJAccountManager* $GJAccountManager<D, V>::sharedState() {
    if ((GJAccountManager*(*)()){&$GJAccountManager::sharedState} != (GJAccountManager*(*)()){&D::sharedState})
        return reinterpret_cast<GJAccountManager*(*)()>(m->getOriginal(base+0x85070))();
    else return GJAccountManager::sharedState();
}


template<class D, void*** V>
$GJBaseGameLayer<D, V>::~$GJBaseGameLayer() {}

template<class D, void*** V>
$GJBaseGameLayer<D, V>::$GJBaseGameLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($GJBaseGameLayer::*)(int, int)){&$GJBaseGameLayer::objectsCollided} != (void(D::*)(int, int)){&D::objectsCollided})
        m->registerHook(base+0xb6d90, extract_virtual(V, (void(D::*)(int, int)){&D::objectsCollided}));
    std::cout << "objectsCollided: " << (void*)extract_virtual(V, (void(D::*)(int, int)){&D::objectsCollided}) << std::endl;

    if ((void($GJBaseGameLayer::*)(cocos2d::CCPoint, int, float, int, float, bool, bool, int)){&$GJBaseGameLayer::createMoveCommand} != (void(D::*)(cocos2d::CCPoint, int, float, int, float, bool, bool, int)){&D::createMoveCommand})
        m->registerHook(base+0xb73a0, extract_virtual(V, (void(D::*)(cocos2d::CCPoint, int, float, int, float, bool, bool, int)){&D::createMoveCommand}));
    std::cout << "createMoveCommand: " << (void*)extract_virtual(V, (void(D::*)(cocos2d::CCPoint, int, float, int, float, bool, bool, int)){&D::createMoveCommand}) << std::endl;

    if ((void($GJBaseGameLayer::*)(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)){&$GJBaseGameLayer::updateColor} != (void(D::*)(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)){&D::updateColor})
        m->registerHook(base+0xb7420, extract_virtual(V, (void(D::*)(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)){&D::updateColor}));
    std::cout << "updateColor: " << (void*)extract_virtual(V, (void(D::*)(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)){&D::updateColor}) << std::endl;

    if ((void($GJBaseGameLayer::*)(PlayerObject*, bool, bool)){&$GJBaseGameLayer::flipGravity} != (void(D::*)(PlayerObject*, bool, bool)){&D::flipGravity})
        m->registerHook(base+0xba990, extract_virtual(V, (void(D::*)(PlayerObject*, bool, bool)){&D::flipGravity}));
    std::cout << "flipGravity: " << (void*)extract_virtual(V, (void(D::*)(PlayerObject*, bool, bool)){&D::flipGravity}) << std::endl;

    if ((void($GJBaseGameLayer::*)(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)){&$GJBaseGameLayer::calculateColorValues} != (void(D::*)(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)){&D::calculateColorValues})
        m->registerHook(base+0xba9a0, extract_virtual(V, (void(D::*)(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)){&D::calculateColorValues}));
    std::cout << "calculateColorValues: " << (void*)extract_virtual(V, (void(D::*)(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)){&D::calculateColorValues}) << std::endl;

    if ((void($GJBaseGameLayer::*)(int, bool)){&$GJBaseGameLayer::toggleGroupTriggered} != (void(D::*)(int, bool)){&D::toggleGroupTriggered})
        m->registerHook(base+0xb75a0, extract_virtual(V, (void(D::*)(int, bool)){&D::toggleGroupTriggered}));
    std::cout << "toggleGroupTriggered: " << (void*)extract_virtual(V, (void(D::*)(int, bool)){&D::toggleGroupTriggered}) << std::endl;

    if ((void($GJBaseGameLayer::*)(int)){&$GJBaseGameLayer::spawnGroup} != (void(D::*)(int)){&D::spawnGroup})
        m->registerHook(base+0xb7050, extract_virtual(V, (void(D::*)(int)){&D::spawnGroup}));
    std::cout << "spawnGroup: " << (void*)extract_virtual(V, (void(D::*)(int)){&D::spawnGroup}) << std::endl;

    if ((void($GJBaseGameLayer::*)(GameObject*)){&$GJBaseGameLayer::addToSection} != (void(D::*)(GameObject*)){&D::addToSection})
        m->registerHook(base+0xb7b70, extract_virtual(V, (void(D::*)(GameObject*)){&D::addToSection}));
    std::cout << "addToSection: " << (void*)extract_virtual(V, (void(D::*)(GameObject*)){&D::addToSection}) << std::endl;

    if ((void($GJBaseGameLayer::*)(GameObject*, int, bool)){&$GJBaseGameLayer::addToGroup} != (void(D::*)(GameObject*, int, bool)){&D::addToGroup})
        m->registerHook(base+0xb77f0, extract_virtual(V, (void(D::*)(GameObject*, int, bool)){&D::addToGroup}));
    std::cout << "addToGroup: " << (void*)extract_virtual(V, (void(D::*)(GameObject*, int, bool)){&D::addToGroup}) << std::endl;

    if ((void($GJBaseGameLayer::*)(GameObject*, int)){&$GJBaseGameLayer::removeFromGroup} != (void(D::*)(GameObject*, int)){&D::removeFromGroup})
        m->registerHook(base+0xb7a60, extract_virtual(V, (void(D::*)(GameObject*, int)){&D::removeFromGroup}));
    std::cout << "removeFromGroup: " << (void*)extract_virtual(V, (void(D::*)(GameObject*, int)){&D::removeFromGroup}) << std::endl;

    if ((bool($GJBaseGameLayer::*)()){&$GJBaseGameLayer::init} != (bool(D::*)()){&D::init})
        m->registerHook(base+0xafc90, extract_virtual(V, (bool(D::*)()){&D::init}));
    std::cout << "init: " << (void*)extract_virtual(V, (bool(D::*)()){&D::init}) << std::endl;

    if ((void($GJBaseGameLayer::*)(LabelGameObject*, int)){&$GJBaseGameLayer::addObjectCounter} != (void(D::*)(LabelGameObject*, int)){&D::addObjectCounter})
        m->registerHook(base+0xb9eb0, extract((void(D::*)(LabelGameObject*, int)){&D::addObjectCounter}));

    if ((void($GJBaseGameLayer::*)(GameObject*, bool)){&$GJBaseGameLayer::addToGroups} != (void(D::*)(GameObject*, bool)){&D::addToGroups})
        m->registerHook(base+0xb7780, extract((void(D::*)(GameObject*, bool)){&D::addToGroups}));

    if ((void($GJBaseGameLayer::*)(int)){&$GJBaseGameLayer::atlasValue} != (void(D::*)(int)){&D::atlasValue})
        m->registerHook(base+0xb21e0, extract((void(D::*)(int)){&D::atlasValue}));

    if ((void($GJBaseGameLayer::*)(PlayerObject*, GameObject*)){&$GJBaseGameLayer::bumpPlayer} != (void(D::*)(PlayerObject*, GameObject*)){&D::bumpPlayer})
        m->registerHook(base+0xb6860, extract((void(D::*)(PlayerObject*, GameObject*)){&D::bumpPlayer}));

    if ((void($GJBaseGameLayer::*)(EffectGameObject*, EffectGameObject*, float, GJEffectManager*)){&$GJBaseGameLayer::calculateOpacityValues} != (void(D::*)(EffectGameObject*, EffectGameObject*, float, GJEffectManager*)){&D::calculateOpacityValues})
        m->registerHook(base+0xb5be0, extract((void(D::*)(EffectGameObject*, EffectGameObject*, float, GJEffectManager*)){&D::calculateOpacityValues}));

    if ((void($GJBaseGameLayer::*)()){&$GJBaseGameLayer::checkSpawnObjects} != (void(D::*)()){&D::checkSpawnObjects})
        m->registerHook(base+0xb6f90, extract((void(D::*)()){&D::checkSpawnObjects}));

    if ((void($GJBaseGameLayer::*)(int, int)){&$GJBaseGameLayer::collectItem} != (void(D::*)(int, int)){&D::collectItem})
        m->registerHook(base+0xb9e20, extract((void(D::*)(int, int)){&D::collectItem}));

    if ((void($GJBaseGameLayer::*)(EffectGameObject*)){&$GJBaseGameLayer::collectedObject} != (void(D::*)(EffectGameObject*)){&D::collectedObject})
        m->registerHook(base+0xb9b60, extract((void(D::*)(EffectGameObject*)){&D::collectedObject}));

    if ((void($GJBaseGameLayer::*)()){&$GJBaseGameLayer::createTextLayers} != (void(D::*)()){&D::createTextLayers})
        m->registerHook(base+0xb5260, extract((void(D::*)()){&D::createTextLayers}));

    if ((void($GJBaseGameLayer::*)(cocos2d::CCRect)){&$GJBaseGameLayer::damagingObjectsInRect} != (void(D::*)(cocos2d::CCRect)){&D::damagingObjectsInRect})
        m->registerHook(base+0xb6140, extract((void(D::*)(cocos2d::CCRect)){&D::damagingObjectsInRect}));

    if ((void($GJBaseGameLayer::*)()){&$GJBaseGameLayer::enableHighCapacityMode} != (void(D::*)()){&D::enableHighCapacityMode})
        m->registerHook(base+0xb11e0, extract((void(D::*)()){&D::enableHighCapacityMode}));

    if ((void($GJBaseGameLayer::*)()){&$GJBaseGameLayer::getCapacityString} != (void(D::*)()){&D::getCapacityString})
        m->registerHook(base+0xb2210, extract((void(D::*)()){&D::getCapacityString}));

    if ((void($GJBaseGameLayer::*)(int)){&$GJBaseGameLayer::getGroundHeightForMode} != (void(D::*)(int)){&D::getGroundHeightForMode})
        m->registerHook(base+0xb6630, extract((void(D::*)(int)){&D::getGroundHeightForMode}));

    if ((void($GJBaseGameLayer::*)(int)){&$GJBaseGameLayer::getGroup} != (void(D::*)(int)){&D::getGroup})
        m->registerHook(base+0xb6f20, extract((void(D::*)(int)){&D::getGroup}));

    if ((void($GJBaseGameLayer::*)(int, int)){&$GJBaseGameLayer::getMoveDeltaForObjects} != (void(D::*)(int, int)){&D::getMoveDeltaForObjects})
        m->registerHook(base+0xb6db0, extract((void(D::*)(int, int)){&D::getMoveDeltaForObjects}));

    if ((void($GJBaseGameLayer::*)(int)){&$GJBaseGameLayer::getOptimizedGroup} != (void(D::*)(int)){&D::getOptimizedGroup})
        m->registerHook(base+0xb7940, extract((void(D::*)(int)){&D::getOptimizedGroup}));

    if ((void($GJBaseGameLayer::*)(int)){&$GJBaseGameLayer::getStaticGroup} != (void(D::*)(int)){&D::getStaticGroup})
        m->registerHook(base+0xb79a0, extract((void(D::*)(int)){&D::getStaticGroup}));

    if ((void($GJBaseGameLayer::*)(GameObject*)){&$GJBaseGameLayer::isGroupDisabledForObject} != (void(D::*)(GameObject*)){&D::isGroupDisabledForObject})
        m->registerHook(base+0xb5cc0, extract((void(D::*)(GameObject*)){&D::isGroupDisabledForObject}));

    if ((void($GJBaseGameLayer::*)(GameObject*, cocos2d::CCArray*)){&$GJBaseGameLayer::isGroupDisabledForObjectFull} != (void(D::*)(GameObject*, cocos2d::CCArray*)){&D::isGroupDisabledForObjectFull})
        m->registerHook(base+0xb5de0, extract((void(D::*)(GameObject*, cocos2d::CCArray*)){&D::isGroupDisabledForObjectFull}));

    if ((void($GJBaseGameLayer::*)(float)){&$GJBaseGameLayer::loadUpToPosition} != (void(D::*)(float)){&D::loadUpToPosition})
        m->registerHook(base+0xba680, extract((void(D::*)(float)){&D::loadUpToPosition}));

    if ((void($GJBaseGameLayer::*)(GameObject*, GameObject*)){&$GJBaseGameLayer::objectIntersectsCircle} != (void(D::*)(GameObject*, GameObject*)){&D::objectIntersectsCircle})
        m->registerHook(base+0xb66e0, extract((void(D::*)(GameObject*, GameObject*)){&D::objectIntersectsCircle}));

    if ((void($GJBaseGameLayer::*)(EffectGameObject*)){&$GJBaseGameLayer::objectTriggered} != (void(D::*)(EffectGameObject*)){&D::objectTriggered})
        m->registerHook(base+0xb71b0, extract((void(D::*)(EffectGameObject*)){&D::objectTriggered}));

    if ((void($GJBaseGameLayer::*)()){&$GJBaseGameLayer::optimizeMoveGroups} != (void(D::*)()){&D::optimizeMoveGroups})
        m->registerHook(base+0xb96c0, extract((void(D::*)()){&D::optimizeMoveGroups}));

    if ((void($GJBaseGameLayer::*)(int, bool, int)){&$GJBaseGameLayer::parentForZLayer} != (void(D::*)(int, bool, int)){&D::parentForZLayer})
        m->registerHook(base+0xb55d0, extract((void(D::*)(int, bool, int)){&D::parentForZLayer}));

    if ((void($GJBaseGameLayer::*)(PlayerObject*, GameObject*)){&$GJBaseGameLayer::playerTouchedRing} != (void(D::*)(PlayerObject*, GameObject*)){&D::playerTouchedRing})
        m->registerHook(base+0xb69e0, extract((void(D::*)(PlayerObject*, GameObject*)){&D::playerTouchedRing}));

    if ((void($GJBaseGameLayer::*)(EffectGameObject*, int, cocos2d::CCDictionary*, float, GJEffectManager*)){&$GJBaseGameLayer::processColorObject} != (void(D::*)(EffectGameObject*, int, cocos2d::CCDictionary*, float, GJEffectManager*)){&D::processColorObject})
        m->registerHook(base+0xb5a90, extract((void(D::*)(EffectGameObject*, int, cocos2d::CCDictionary*, float, GJEffectManager*)){&D::processColorObject}));

    if ((void($GJBaseGameLayer::*)()){&$GJBaseGameLayer::processFollowActions} != (void(D::*)()){&D::processFollowActions})
        m->registerHook(base+0xb8fd0, extract((void(D::*)()){&D::processFollowActions}));

    if ((void($GJBaseGameLayer::*)()){&$GJBaseGameLayer::processMoveActions} != (void(D::*)()){&D::processMoveActions})
        m->registerHook(base+0xb86c0, extract((void(D::*)()){&D::processMoveActions}));

    if ((void($GJBaseGameLayer::*)(float)){&$GJBaseGameLayer::processMoveActionsStep} != (void(D::*)(float)){&D::processMoveActionsStep})
        m->registerHook(base+0xb7ea0, extract((void(D::*)(float)){&D::processMoveActionsStep}));

    if ((void($GJBaseGameLayer::*)(EffectGameObject*, cocos2d::CCDictionary*, float, GJEffectManager*)){&$GJBaseGameLayer::processOpacityObject} != (void(D::*)(EffectGameObject*, cocos2d::CCDictionary*, float, GJEffectManager*)){&D::processOpacityObject})
        m->registerHook(base+0xb5ae0, extract((void(D::*)(EffectGameObject*, cocos2d::CCDictionary*, float, GJEffectManager*)){&D::processOpacityObject}));

    if ((void($GJBaseGameLayer::*)(float)){&$GJBaseGameLayer::processPlayerFollowActions} != (void(D::*)(float)){&D::processPlayerFollowActions})
        m->registerHook(base+0xb8b50, extract((void(D::*)(float)){&D::processPlayerFollowActions}));

    if ((void($GJBaseGameLayer::*)()){&$GJBaseGameLayer::processRotationActions} != (void(D::*)()){&D::processRotationActions})
        m->registerHook(base+0xb7fd0, extract((void(D::*)()){&D::processRotationActions}));

    if ((void($GJBaseGameLayer::*)(int, bool)){&$GJBaseGameLayer::pushButton} != (void(D::*)(int, bool)){&D::pushButton})
        m->registerHook(base+0xb9920, extract((void(D::*)(int, bool)){&D::pushButton}));

    if ((void($GJBaseGameLayer::*)(cocos2d::CCRect, cocos2d::CCPoint, float)){&$GJBaseGameLayer::rectIntersectsCircle} != (void(D::*)(cocos2d::CCRect, cocos2d::CCPoint, float)){&D::rectIntersectsCircle})
        m->registerHook(base+0xb6470, extract((void(D::*)(cocos2d::CCRect, cocos2d::CCPoint, float)){&D::rectIntersectsCircle}));

    if ((void($GJBaseGameLayer::*)()){&$GJBaseGameLayer::refreshCounterLabels} != (void(D::*)()){&D::refreshCounterLabels})
        m->registerHook(base+0xb9fc0, extract((void(D::*)()){&D::refreshCounterLabels}));

    if ((void($GJBaseGameLayer::*)(int, bool)){&$GJBaseGameLayer::releaseButton} != (void(D::*)(int, bool)){&D::releaseButton})
        m->registerHook(base+0xb9a00, extract((void(D::*)(int, bool)){&D::releaseButton}));

    if ((void($GJBaseGameLayer::*)(GameObject*)){&$GJBaseGameLayer::removeFromGroups} != (void(D::*)(GameObject*)){&D::removeFromGroups})
        m->registerHook(base+0xb7a00, extract((void(D::*)(GameObject*)){&D::removeFromGroups}));

    if ((void($GJBaseGameLayer::*)(GameObject*)){&$GJBaseGameLayer::removeObjectFromSection} != (void(D::*)(GameObject*)){&D::removeObjectFromSection})
        m->registerHook(base+0xb7e00, extract((void(D::*)(GameObject*)){&D::removeObjectFromSection}));

    if ((void($GJBaseGameLayer::*)(GameObject*)){&$GJBaseGameLayer::reorderObjectSection} != (void(D::*)(GameObject*)){&D::reorderObjectSection})
        m->registerHook(base+0xb7cb0, extract((void(D::*)(GameObject*)){&D::reorderObjectSection}));

    if ((void($GJBaseGameLayer::*)(bool)){&$GJBaseGameLayer::resetGroupCounters} != (void(D::*)(bool)){&D::resetGroupCounters})
        m->registerHook(base+0xba300, extract((void(D::*)(bool)){&D::resetGroupCounters}));

    if ((void($GJBaseGameLayer::*)()){&$GJBaseGameLayer::resetMoveOptimizedValue} != (void(D::*)()){&D::resetMoveOptimizedValue})
        m->registerHook(base+0xb9670, extract((void(D::*)()){&D::resetMoveOptimizedValue}));

    if ((void($GJBaseGameLayer::*)(float)){&$GJBaseGameLayer::sectionForPos} != (void(D::*)(float)){&D::sectionForPos})
        m->registerHook(base+0xb6120, extract((void(D::*)(float)){&D::sectionForPos}));

    if ((void($GJBaseGameLayer::*)()){&$GJBaseGameLayer::setupLayers} != (void(D::*)()){&D::setupLayers})
        m->registerHook(base+0xaffe0, extract((void(D::*)()){&D::setupLayers}));

    if ((void($GJBaseGameLayer::*)()){&$GJBaseGameLayer::shouldExitHackedLevel} != (void(D::*)()){&D::shouldExitHackedLevel})
        m->registerHook(base+0xb1100, extract((void(D::*)()){&D::shouldExitHackedLevel}));

    if ((void($GJBaseGameLayer::*)(int, float, int)){&$GJBaseGameLayer::spawnGroupTriggered} != (void(D::*)(int, float, int)){&D::spawnGroupTriggered})
        m->registerHook(base+0xb7020, extract((void(D::*)(int, float, int)){&D::spawnGroupTriggered}));

    if ((void($GJBaseGameLayer::*)(cocos2d::CCRect)){&$GJBaseGameLayer::staticObjectsInRect} != (void(D::*)(cocos2d::CCRect)){&D::staticObjectsInRect})
        m->registerHook(base+0xb5f90, extract((void(D::*)(cocos2d::CCRect)){&D::staticObjectsInRect}));

    if ((void($GJBaseGameLayer::*)(int, int, int, bool, int)){&$GJBaseGameLayer::testInstantCountTrigger} != (void(D::*)(int, int, int, bool, int)){&D::testInstantCountTrigger})
        m->registerHook(base+0xb9ae0, extract((void(D::*)(int, int, int, bool, int)){&D::testInstantCountTrigger}));

    if ((void($GJBaseGameLayer::*)(int, bool)){&$GJBaseGameLayer::toggleGroup} != (void(D::*)(int, bool)){&D::toggleGroup})
        m->registerHook(base+0xb75f0, extract((void(D::*)(int, bool)){&D::toggleGroup}));

    if ((void($GJBaseGameLayer::*)(bool)){&$GJBaseGameLayer::togglePlayerVisibility} != (void(D::*)(bool)){&D::togglePlayerVisibility})
        m->registerHook(base+0xba910, extract((void(D::*)(bool)){&D::togglePlayerVisibility}));

    if ((void($GJBaseGameLayer::*)(EffectGameObject*)){&$GJBaseGameLayer::triggerMoveCommand} != (void(D::*)(EffectGameObject*)){&D::triggerMoveCommand})
        m->registerHook(base+0xb7290, extract((void(D::*)(EffectGameObject*)){&D::triggerMoveCommand}));

    if ((void($GJBaseGameLayer::*)()){&$GJBaseGameLayer::updateCollisionBlocks} != (void(D::*)()){&D::updateCollisionBlocks})
        m->registerHook(base+0xb6a30, extract((void(D::*)()){&D::updateCollisionBlocks}));

    if ((void($GJBaseGameLayer::*)(int, int)){&$GJBaseGameLayer::updateCounters} != (void(D::*)(int, int)){&D::updateCounters})
        m->registerHook(base+0xb9bc0, extract((void(D::*)(int, int)){&D::updateCounters}));

    if ((void($GJBaseGameLayer::*)(cocos2d::CCArray*)){&$GJBaseGameLayer::updateDisabledObjectsLastPos} != (void(D::*)(cocos2d::CCArray*)){&D::updateDisabledObjectsLastPos})
        m->registerHook(base+0xb95b0, extract((void(D::*)(cocos2d::CCArray*)){&D::updateDisabledObjectsLastPos}));

    if ((void($GJBaseGameLayer::*)(std::string)){&$GJBaseGameLayer::updateLayerCapacity} != (void(D::*)(std::string)){&D::updateLayerCapacity})
        m->registerHook(base+0xb1680, extract((void(D::*)(std::string)){&D::updateLayerCapacity}));

    if ((void($GJBaseGameLayer::*)(int, int, int, int)){&$GJBaseGameLayer::updateLegacyLayerCapacity} != (void(D::*)(int, int, int, int)){&D::updateLegacyLayerCapacity})
        m->registerHook(base+0xb1590, extract((void(D::*)(int, int, int, int)){&D::updateLegacyLayerCapacity}));

    if ((void($GJBaseGameLayer::*)(cocos2d::CCRect)){&$GJBaseGameLayer::updateOBB2} != (void(D::*)(cocos2d::CCRect)){&D::updateOBB2})
        m->registerHook(base+0xb63f0, extract((void(D::*)(cocos2d::CCRect)){&D::updateOBB2}));

    if ((void($GJBaseGameLayer::*)()){&$GJBaseGameLayer::updateQueuedLabels} != (void(D::*)()){&D::updateQueuedLabels})
        m->registerHook(base+0xb9f30, extract((void(D::*)()){&D::updateQueuedLabels}));
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::objectsCollided(int p0, int p1) {
    if ((void($GJBaseGameLayer::*)(int, int)){&$GJBaseGameLayer::objectsCollided} != (void(D::*)(int, int)){&D::objectsCollided})
        return reinterpret_cast<void(*)(decltype(this), int, int)>(m->getOriginal(base+0xb6d90))(this, p0, p1);
    else return GJBaseGameLayer::objectsCollided(p0, p1);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::createMoveCommand(cocos2d::CCPoint p0, int p1, float p2, int p3, float p4, bool p5, bool p6, int p7) {
    if ((void($GJBaseGameLayer::*)(cocos2d::CCPoint, int, float, int, float, bool, bool, int)){&$GJBaseGameLayer::createMoveCommand} != (void(D::*)(cocos2d::CCPoint, int, float, int, float, bool, bool, int)){&D::createMoveCommand})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCPoint, int, float, int, float, bool, bool, int)>(m->getOriginal(base+0xb73a0))(this, p0, p1, p2, p3, p4, p5, p6, p7);
    else return GJBaseGameLayer::createMoveCommand(p0, p1, p2, p3, p4, p5, p6, p7);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::updateColor(cocos2d::_ccColor3B p0, float p1, int p2, bool p3, float p4, cocos2d::_ccHSVValue p5, int p6, bool p7, int p8, EffectGameObject* p9) {
    if ((void($GJBaseGameLayer::*)(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)){&$GJBaseGameLayer::updateColor} != (void(D::*)(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)){&D::updateColor})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)>(m->getOriginal(base+0xb7420))(this, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
    else return GJBaseGameLayer::updateColor(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::flipGravity(PlayerObject* p0, bool p1, bool p2) {
    if ((void($GJBaseGameLayer::*)(PlayerObject*, bool, bool)){&$GJBaseGameLayer::flipGravity} != (void(D::*)(PlayerObject*, bool, bool)){&D::flipGravity})
        return reinterpret_cast<void(*)(decltype(this), PlayerObject*, bool, bool)>(m->getOriginal(base+0xba990))(this, p0, p1, p2);
    else return GJBaseGameLayer::flipGravity(p0, p1, p2);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::calculateColorValues(EffectGameObject* p0, EffectGameObject* p1, int p2, float p3, ColorActionSprite* p4, GJEffectManager* p5) {
    if ((void($GJBaseGameLayer::*)(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)){&$GJBaseGameLayer::calculateColorValues} != (void(D::*)(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)){&D::calculateColorValues})
        return reinterpret_cast<void(*)(decltype(this), EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)>(m->getOriginal(base+0xba9a0))(this, p0, p1, p2, p3, p4, p5);
    else return GJBaseGameLayer::calculateColorValues(p0, p1, p2, p3, p4, p5);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::toggleGroupTriggered(int p0, bool p1) {
    if ((void($GJBaseGameLayer::*)(int, bool)){&$GJBaseGameLayer::toggleGroupTriggered} != (void(D::*)(int, bool)){&D::toggleGroupTriggered})
        return reinterpret_cast<void(*)(decltype(this), int, bool)>(m->getOriginal(base+0xb75a0))(this, p0, p1);
    else return GJBaseGameLayer::toggleGroupTriggered(p0, p1);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::spawnGroup(int p0) {
    if ((void($GJBaseGameLayer::*)(int)){&$GJBaseGameLayer::spawnGroup} != (void(D::*)(int)){&D::spawnGroup})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0xb7050))(this, p0);
    else return GJBaseGameLayer::spawnGroup(p0);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::addToSection(GameObject* p0) {
    if ((void($GJBaseGameLayer::*)(GameObject*)){&$GJBaseGameLayer::addToSection} != (void(D::*)(GameObject*)){&D::addToSection})
        return reinterpret_cast<void(*)(decltype(this), GameObject*)>(m->getOriginal(base+0xb7b70))(this, p0);
    else return GJBaseGameLayer::addToSection(p0);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::addToGroup(GameObject* p0, int p1, bool p2) {
    if ((void($GJBaseGameLayer::*)(GameObject*, int, bool)){&$GJBaseGameLayer::addToGroup} != (void(D::*)(GameObject*, int, bool)){&D::addToGroup})
        return reinterpret_cast<void(*)(decltype(this), GameObject*, int, bool)>(m->getOriginal(base+0xb77f0))(this, p0, p1, p2);
    else return GJBaseGameLayer::addToGroup(p0, p1, p2);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::removeFromGroup(GameObject* p0, int p1) {
    if ((void($GJBaseGameLayer::*)(GameObject*, int)){&$GJBaseGameLayer::removeFromGroup} != (void(D::*)(GameObject*, int)){&D::removeFromGroup})
        return reinterpret_cast<void(*)(decltype(this), GameObject*, int)>(m->getOriginal(base+0xb7a60))(this, p0, p1);
    else return GJBaseGameLayer::removeFromGroup(p0, p1);
}

template<class D, void*** V>
bool $GJBaseGameLayer<D, V>::init() {
    if ((bool($GJBaseGameLayer::*)()){&$GJBaseGameLayer::init} != (bool(D::*)()){&D::init})
        return reinterpret_cast<bool(*)(decltype(this))>(m->getOriginal(base+0xafc90))(this);
    else return GJBaseGameLayer::init();
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::addObjectCounter(LabelGameObject* p0, int p1) {
    if ((void($GJBaseGameLayer::*)(LabelGameObject*, int)){&$GJBaseGameLayer::addObjectCounter} != (void(D::*)(LabelGameObject*, int)){&D::addObjectCounter})
        return reinterpret_cast<void(*)(decltype(this), LabelGameObject*, int)>(m->getOriginal(base+0xb9eb0))(this, p0, p1);
    else return GJBaseGameLayer::addObjectCounter(p0, p1);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::addToGroups(GameObject* p0, bool p1) {
    if ((void($GJBaseGameLayer::*)(GameObject*, bool)){&$GJBaseGameLayer::addToGroups} != (void(D::*)(GameObject*, bool)){&D::addToGroups})
        return reinterpret_cast<void(*)(decltype(this), GameObject*, bool)>(m->getOriginal(base+0xb7780))(this, p0, p1);
    else return GJBaseGameLayer::addToGroups(p0, p1);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::atlasValue(int p0) {
    if ((void($GJBaseGameLayer::*)(int)){&$GJBaseGameLayer::atlasValue} != (void(D::*)(int)){&D::atlasValue})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0xb21e0))(this, p0);
    else return GJBaseGameLayer::atlasValue(p0);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::bumpPlayer(PlayerObject* p0, GameObject* p1) {
    if ((void($GJBaseGameLayer::*)(PlayerObject*, GameObject*)){&$GJBaseGameLayer::bumpPlayer} != (void(D::*)(PlayerObject*, GameObject*)){&D::bumpPlayer})
        return reinterpret_cast<void(*)(decltype(this), PlayerObject*, GameObject*)>(m->getOriginal(base+0xb6860))(this, p0, p1);
    else return GJBaseGameLayer::bumpPlayer(p0, p1);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::calculateOpacityValues(EffectGameObject* p0, EffectGameObject* p1, float p2, GJEffectManager* p3) {
    if ((void($GJBaseGameLayer::*)(EffectGameObject*, EffectGameObject*, float, GJEffectManager*)){&$GJBaseGameLayer::calculateOpacityValues} != (void(D::*)(EffectGameObject*, EffectGameObject*, float, GJEffectManager*)){&D::calculateOpacityValues})
        return reinterpret_cast<void(*)(decltype(this), EffectGameObject*, EffectGameObject*, float, GJEffectManager*)>(m->getOriginal(base+0xb5be0))(this, p0, p1, p2, p3);
    else return GJBaseGameLayer::calculateOpacityValues(p0, p1, p2, p3);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::checkSpawnObjects() {
    if ((void($GJBaseGameLayer::*)()){&$GJBaseGameLayer::checkSpawnObjects} != (void(D::*)()){&D::checkSpawnObjects})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0xb6f90))(this);
    else return GJBaseGameLayer::checkSpawnObjects();
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::collectItem(int p0, int p1) {
    if ((void($GJBaseGameLayer::*)(int, int)){&$GJBaseGameLayer::collectItem} != (void(D::*)(int, int)){&D::collectItem})
        return reinterpret_cast<void(*)(decltype(this), int, int)>(m->getOriginal(base+0xb9e20))(this, p0, p1);
    else return GJBaseGameLayer::collectItem(p0, p1);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::collectedObject(EffectGameObject* p0) {
    if ((void($GJBaseGameLayer::*)(EffectGameObject*)){&$GJBaseGameLayer::collectedObject} != (void(D::*)(EffectGameObject*)){&D::collectedObject})
        return reinterpret_cast<void(*)(decltype(this), EffectGameObject*)>(m->getOriginal(base+0xb9b60))(this, p0);
    else return GJBaseGameLayer::collectedObject(p0);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::createTextLayers() {
    if ((void($GJBaseGameLayer::*)()){&$GJBaseGameLayer::createTextLayers} != (void(D::*)()){&D::createTextLayers})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0xb5260))(this);
    else return GJBaseGameLayer::createTextLayers();
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::damagingObjectsInRect(cocos2d::CCRect p0) {
    if ((void($GJBaseGameLayer::*)(cocos2d::CCRect)){&$GJBaseGameLayer::damagingObjectsInRect} != (void(D::*)(cocos2d::CCRect)){&D::damagingObjectsInRect})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCRect)>(m->getOriginal(base+0xb6140))(this, p0);
    else return GJBaseGameLayer::damagingObjectsInRect(p0);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::enableHighCapacityMode() {
    if ((void($GJBaseGameLayer::*)()){&$GJBaseGameLayer::enableHighCapacityMode} != (void(D::*)()){&D::enableHighCapacityMode})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0xb11e0))(this);
    else return GJBaseGameLayer::enableHighCapacityMode();
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::getCapacityString() {
    if ((void($GJBaseGameLayer::*)()){&$GJBaseGameLayer::getCapacityString} != (void(D::*)()){&D::getCapacityString})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0xb2210))(this);
    else return GJBaseGameLayer::getCapacityString();
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::getGroundHeightForMode(int p0) {
    if ((void($GJBaseGameLayer::*)(int)){&$GJBaseGameLayer::getGroundHeightForMode} != (void(D::*)(int)){&D::getGroundHeightForMode})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0xb6630))(this, p0);
    else return GJBaseGameLayer::getGroundHeightForMode(p0);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::getGroup(int p0) {
    if ((void($GJBaseGameLayer::*)(int)){&$GJBaseGameLayer::getGroup} != (void(D::*)(int)){&D::getGroup})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0xb6f20))(this, p0);
    else return GJBaseGameLayer::getGroup(p0);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::getMoveDeltaForObjects(int p0, int p1) {
    if ((void($GJBaseGameLayer::*)(int, int)){&$GJBaseGameLayer::getMoveDeltaForObjects} != (void(D::*)(int, int)){&D::getMoveDeltaForObjects})
        return reinterpret_cast<void(*)(decltype(this), int, int)>(m->getOriginal(base+0xb6db0))(this, p0, p1);
    else return GJBaseGameLayer::getMoveDeltaForObjects(p0, p1);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::getOptimizedGroup(int p0) {
    if ((void($GJBaseGameLayer::*)(int)){&$GJBaseGameLayer::getOptimizedGroup} != (void(D::*)(int)){&D::getOptimizedGroup})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0xb7940))(this, p0);
    else return GJBaseGameLayer::getOptimizedGroup(p0);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::getStaticGroup(int p0) {
    if ((void($GJBaseGameLayer::*)(int)){&$GJBaseGameLayer::getStaticGroup} != (void(D::*)(int)){&D::getStaticGroup})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0xb79a0))(this, p0);
    else return GJBaseGameLayer::getStaticGroup(p0);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::isGroupDisabledForObject(GameObject* p0) {
    if ((void($GJBaseGameLayer::*)(GameObject*)){&$GJBaseGameLayer::isGroupDisabledForObject} != (void(D::*)(GameObject*)){&D::isGroupDisabledForObject})
        return reinterpret_cast<void(*)(decltype(this), GameObject*)>(m->getOriginal(base+0xb5cc0))(this, p0);
    else return GJBaseGameLayer::isGroupDisabledForObject(p0);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::isGroupDisabledForObjectFull(GameObject* p0, cocos2d::CCArray* p1) {
    if ((void($GJBaseGameLayer::*)(GameObject*, cocos2d::CCArray*)){&$GJBaseGameLayer::isGroupDisabledForObjectFull} != (void(D::*)(GameObject*, cocos2d::CCArray*)){&D::isGroupDisabledForObjectFull})
        return reinterpret_cast<void(*)(decltype(this), GameObject*, cocos2d::CCArray*)>(m->getOriginal(base+0xb5de0))(this, p0, p1);
    else return GJBaseGameLayer::isGroupDisabledForObjectFull(p0, p1);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::loadUpToPosition(float p0) {
    if ((void($GJBaseGameLayer::*)(float)){&$GJBaseGameLayer::loadUpToPosition} != (void(D::*)(float)){&D::loadUpToPosition})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0xba680))(this, p0);
    else return GJBaseGameLayer::loadUpToPosition(p0);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::objectIntersectsCircle(GameObject* p0, GameObject* p1) {
    if ((void($GJBaseGameLayer::*)(GameObject*, GameObject*)){&$GJBaseGameLayer::objectIntersectsCircle} != (void(D::*)(GameObject*, GameObject*)){&D::objectIntersectsCircle})
        return reinterpret_cast<void(*)(decltype(this), GameObject*, GameObject*)>(m->getOriginal(base+0xb66e0))(this, p0, p1);
    else return GJBaseGameLayer::objectIntersectsCircle(p0, p1);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::objectTriggered(EffectGameObject* p0) {
    if ((void($GJBaseGameLayer::*)(EffectGameObject*)){&$GJBaseGameLayer::objectTriggered} != (void(D::*)(EffectGameObject*)){&D::objectTriggered})
        return reinterpret_cast<void(*)(decltype(this), EffectGameObject*)>(m->getOriginal(base+0xb71b0))(this, p0);
    else return GJBaseGameLayer::objectTriggered(p0);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::optimizeMoveGroups() {
    if ((void($GJBaseGameLayer::*)()){&$GJBaseGameLayer::optimizeMoveGroups} != (void(D::*)()){&D::optimizeMoveGroups})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0xb96c0))(this);
    else return GJBaseGameLayer::optimizeMoveGroups();
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::parentForZLayer(int p0, bool p1, int p2) {
    if ((void($GJBaseGameLayer::*)(int, bool, int)){&$GJBaseGameLayer::parentForZLayer} != (void(D::*)(int, bool, int)){&D::parentForZLayer})
        return reinterpret_cast<void(*)(decltype(this), int, bool, int)>(m->getOriginal(base+0xb55d0))(this, p0, p1, p2);
    else return GJBaseGameLayer::parentForZLayer(p0, p1, p2);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::playerTouchedRing(PlayerObject* p0, GameObject* p1) {
    if ((void($GJBaseGameLayer::*)(PlayerObject*, GameObject*)){&$GJBaseGameLayer::playerTouchedRing} != (void(D::*)(PlayerObject*, GameObject*)){&D::playerTouchedRing})
        return reinterpret_cast<void(*)(decltype(this), PlayerObject*, GameObject*)>(m->getOriginal(base+0xb69e0))(this, p0, p1);
    else return GJBaseGameLayer::playerTouchedRing(p0, p1);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::processColorObject(EffectGameObject* p0, int p1, cocos2d::CCDictionary* p2, float p3, GJEffectManager* p4) {
    if ((void($GJBaseGameLayer::*)(EffectGameObject*, int, cocos2d::CCDictionary*, float, GJEffectManager*)){&$GJBaseGameLayer::processColorObject} != (void(D::*)(EffectGameObject*, int, cocos2d::CCDictionary*, float, GJEffectManager*)){&D::processColorObject})
        return reinterpret_cast<void(*)(decltype(this), EffectGameObject*, int, cocos2d::CCDictionary*, float, GJEffectManager*)>(m->getOriginal(base+0xb5a90))(this, p0, p1, p2, p3, p4);
    else return GJBaseGameLayer::processColorObject(p0, p1, p2, p3, p4);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::processFollowActions() {
    if ((void($GJBaseGameLayer::*)()){&$GJBaseGameLayer::processFollowActions} != (void(D::*)()){&D::processFollowActions})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0xb8fd0))(this);
    else return GJBaseGameLayer::processFollowActions();
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::processMoveActions() {
    if ((void($GJBaseGameLayer::*)()){&$GJBaseGameLayer::processMoveActions} != (void(D::*)()){&D::processMoveActions})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0xb86c0))(this);
    else return GJBaseGameLayer::processMoveActions();
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::processMoveActionsStep(float p0) {
    if ((void($GJBaseGameLayer::*)(float)){&$GJBaseGameLayer::processMoveActionsStep} != (void(D::*)(float)){&D::processMoveActionsStep})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0xb7ea0))(this, p0);
    else return GJBaseGameLayer::processMoveActionsStep(p0);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::processOpacityObject(EffectGameObject* p0, cocos2d::CCDictionary* p1, float p2, GJEffectManager* p3) {
    if ((void($GJBaseGameLayer::*)(EffectGameObject*, cocos2d::CCDictionary*, float, GJEffectManager*)){&$GJBaseGameLayer::processOpacityObject} != (void(D::*)(EffectGameObject*, cocos2d::CCDictionary*, float, GJEffectManager*)){&D::processOpacityObject})
        return reinterpret_cast<void(*)(decltype(this), EffectGameObject*, cocos2d::CCDictionary*, float, GJEffectManager*)>(m->getOriginal(base+0xb5ae0))(this, p0, p1, p2, p3);
    else return GJBaseGameLayer::processOpacityObject(p0, p1, p2, p3);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::processPlayerFollowActions(float p0) {
    if ((void($GJBaseGameLayer::*)(float)){&$GJBaseGameLayer::processPlayerFollowActions} != (void(D::*)(float)){&D::processPlayerFollowActions})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0xb8b50))(this, p0);
    else return GJBaseGameLayer::processPlayerFollowActions(p0);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::processRotationActions() {
    if ((void($GJBaseGameLayer::*)()){&$GJBaseGameLayer::processRotationActions} != (void(D::*)()){&D::processRotationActions})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0xb7fd0))(this);
    else return GJBaseGameLayer::processRotationActions();
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::pushButton(int p0, bool p1) {
    if ((void($GJBaseGameLayer::*)(int, bool)){&$GJBaseGameLayer::pushButton} != (void(D::*)(int, bool)){&D::pushButton})
        return reinterpret_cast<void(*)(decltype(this), int, bool)>(m->getOriginal(base+0xb9920))(this, p0, p1);
    else return GJBaseGameLayer::pushButton(p0, p1);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::rectIntersectsCircle(cocos2d::CCRect p0, cocos2d::CCPoint p1, float p2) {
    if ((void($GJBaseGameLayer::*)(cocos2d::CCRect, cocos2d::CCPoint, float)){&$GJBaseGameLayer::rectIntersectsCircle} != (void(D::*)(cocos2d::CCRect, cocos2d::CCPoint, float)){&D::rectIntersectsCircle})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCRect, cocos2d::CCPoint, float)>(m->getOriginal(base+0xb6470))(this, p0, p1, p2);
    else return GJBaseGameLayer::rectIntersectsCircle(p0, p1, p2);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::refreshCounterLabels() {
    if ((void($GJBaseGameLayer::*)()){&$GJBaseGameLayer::refreshCounterLabels} != (void(D::*)()){&D::refreshCounterLabels})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0xb9fc0))(this);
    else return GJBaseGameLayer::refreshCounterLabels();
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::releaseButton(int p0, bool p1) {
    if ((void($GJBaseGameLayer::*)(int, bool)){&$GJBaseGameLayer::releaseButton} != (void(D::*)(int, bool)){&D::releaseButton})
        return reinterpret_cast<void(*)(decltype(this), int, bool)>(m->getOriginal(base+0xb9a00))(this, p0, p1);
    else return GJBaseGameLayer::releaseButton(p0, p1);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::removeFromGroups(GameObject* p0) {
    if ((void($GJBaseGameLayer::*)(GameObject*)){&$GJBaseGameLayer::removeFromGroups} != (void(D::*)(GameObject*)){&D::removeFromGroups})
        return reinterpret_cast<void(*)(decltype(this), GameObject*)>(m->getOriginal(base+0xb7a00))(this, p0);
    else return GJBaseGameLayer::removeFromGroups(p0);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::removeObjectFromSection(GameObject* p0) {
    if ((void($GJBaseGameLayer::*)(GameObject*)){&$GJBaseGameLayer::removeObjectFromSection} != (void(D::*)(GameObject*)){&D::removeObjectFromSection})
        return reinterpret_cast<void(*)(decltype(this), GameObject*)>(m->getOriginal(base+0xb7e00))(this, p0);
    else return GJBaseGameLayer::removeObjectFromSection(p0);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::reorderObjectSection(GameObject* p0) {
    if ((void($GJBaseGameLayer::*)(GameObject*)){&$GJBaseGameLayer::reorderObjectSection} != (void(D::*)(GameObject*)){&D::reorderObjectSection})
        return reinterpret_cast<void(*)(decltype(this), GameObject*)>(m->getOriginal(base+0xb7cb0))(this, p0);
    else return GJBaseGameLayer::reorderObjectSection(p0);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::resetGroupCounters(bool p0) {
    if ((void($GJBaseGameLayer::*)(bool)){&$GJBaseGameLayer::resetGroupCounters} != (void(D::*)(bool)){&D::resetGroupCounters})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0xba300))(this, p0);
    else return GJBaseGameLayer::resetGroupCounters(p0);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::resetMoveOptimizedValue() {
    if ((void($GJBaseGameLayer::*)()){&$GJBaseGameLayer::resetMoveOptimizedValue} != (void(D::*)()){&D::resetMoveOptimizedValue})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0xb9670))(this);
    else return GJBaseGameLayer::resetMoveOptimizedValue();
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::sectionForPos(float p0) {
    if ((void($GJBaseGameLayer::*)(float)){&$GJBaseGameLayer::sectionForPos} != (void(D::*)(float)){&D::sectionForPos})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0xb6120))(this, p0);
    else return GJBaseGameLayer::sectionForPos(p0);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::setupLayers() {
    if ((void($GJBaseGameLayer::*)()){&$GJBaseGameLayer::setupLayers} != (void(D::*)()){&D::setupLayers})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0xaffe0))(this);
    else return GJBaseGameLayer::setupLayers();
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::shouldExitHackedLevel() {
    if ((void($GJBaseGameLayer::*)()){&$GJBaseGameLayer::shouldExitHackedLevel} != (void(D::*)()){&D::shouldExitHackedLevel})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0xb1100))(this);
    else return GJBaseGameLayer::shouldExitHackedLevel();
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::spawnGroupTriggered(int p0, float p1, int p2) {
    if ((void($GJBaseGameLayer::*)(int, float, int)){&$GJBaseGameLayer::spawnGroupTriggered} != (void(D::*)(int, float, int)){&D::spawnGroupTriggered})
        return reinterpret_cast<void(*)(decltype(this), int, float, int)>(m->getOriginal(base+0xb7020))(this, p0, p1, p2);
    else return GJBaseGameLayer::spawnGroupTriggered(p0, p1, p2);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::staticObjectsInRect(cocos2d::CCRect p0) {
    if ((void($GJBaseGameLayer::*)(cocos2d::CCRect)){&$GJBaseGameLayer::staticObjectsInRect} != (void(D::*)(cocos2d::CCRect)){&D::staticObjectsInRect})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCRect)>(m->getOriginal(base+0xb5f90))(this, p0);
    else return GJBaseGameLayer::staticObjectsInRect(p0);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::testInstantCountTrigger(int p0, int p1, int p2, bool p3, int p4) {
    if ((void($GJBaseGameLayer::*)(int, int, int, bool, int)){&$GJBaseGameLayer::testInstantCountTrigger} != (void(D::*)(int, int, int, bool, int)){&D::testInstantCountTrigger})
        return reinterpret_cast<void(*)(decltype(this), int, int, int, bool, int)>(m->getOriginal(base+0xb9ae0))(this, p0, p1, p2, p3, p4);
    else return GJBaseGameLayer::testInstantCountTrigger(p0, p1, p2, p3, p4);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::toggleGroup(int p0, bool p1) {
    if ((void($GJBaseGameLayer::*)(int, bool)){&$GJBaseGameLayer::toggleGroup} != (void(D::*)(int, bool)){&D::toggleGroup})
        return reinterpret_cast<void(*)(decltype(this), int, bool)>(m->getOriginal(base+0xb75f0))(this, p0, p1);
    else return GJBaseGameLayer::toggleGroup(p0, p1);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::togglePlayerVisibility(bool p0) {
    if ((void($GJBaseGameLayer::*)(bool)){&$GJBaseGameLayer::togglePlayerVisibility} != (void(D::*)(bool)){&D::togglePlayerVisibility})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0xba910))(this, p0);
    else return GJBaseGameLayer::togglePlayerVisibility(p0);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::triggerMoveCommand(EffectGameObject* p0) {
    if ((void($GJBaseGameLayer::*)(EffectGameObject*)){&$GJBaseGameLayer::triggerMoveCommand} != (void(D::*)(EffectGameObject*)){&D::triggerMoveCommand})
        return reinterpret_cast<void(*)(decltype(this), EffectGameObject*)>(m->getOriginal(base+0xb7290))(this, p0);
    else return GJBaseGameLayer::triggerMoveCommand(p0);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::updateCollisionBlocks() {
    if ((void($GJBaseGameLayer::*)()){&$GJBaseGameLayer::updateCollisionBlocks} != (void(D::*)()){&D::updateCollisionBlocks})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0xb6a30))(this);
    else return GJBaseGameLayer::updateCollisionBlocks();
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::updateCounters(int p0, int p1) {
    if ((void($GJBaseGameLayer::*)(int, int)){&$GJBaseGameLayer::updateCounters} != (void(D::*)(int, int)){&D::updateCounters})
        return reinterpret_cast<void(*)(decltype(this), int, int)>(m->getOriginal(base+0xb9bc0))(this, p0, p1);
    else return GJBaseGameLayer::updateCounters(p0, p1);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::updateDisabledObjectsLastPos(cocos2d::CCArray* p0) {
    if ((void($GJBaseGameLayer::*)(cocos2d::CCArray*)){&$GJBaseGameLayer::updateDisabledObjectsLastPos} != (void(D::*)(cocos2d::CCArray*)){&D::updateDisabledObjectsLastPos})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCArray*)>(m->getOriginal(base+0xb95b0))(this, p0);
    else return GJBaseGameLayer::updateDisabledObjectsLastPos(p0);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::updateLayerCapacity(std::string p0) {
    if ((void($GJBaseGameLayer::*)(std::string)){&$GJBaseGameLayer::updateLayerCapacity} != (void(D::*)(std::string)){&D::updateLayerCapacity})
        return reinterpret_cast<void(*)(decltype(this), std::string)>(m->getOriginal(base+0xb1680))(this, p0);
    else return GJBaseGameLayer::updateLayerCapacity(p0);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::updateLegacyLayerCapacity(int p0, int p1, int p2, int p3) {
    if ((void($GJBaseGameLayer::*)(int, int, int, int)){&$GJBaseGameLayer::updateLegacyLayerCapacity} != (void(D::*)(int, int, int, int)){&D::updateLegacyLayerCapacity})
        return reinterpret_cast<void(*)(decltype(this), int, int, int, int)>(m->getOriginal(base+0xb1590))(this, p0, p1, p2, p3);
    else return GJBaseGameLayer::updateLegacyLayerCapacity(p0, p1, p2, p3);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::updateOBB2(cocos2d::CCRect p0) {
    if ((void($GJBaseGameLayer::*)(cocos2d::CCRect)){&$GJBaseGameLayer::updateOBB2} != (void(D::*)(cocos2d::CCRect)){&D::updateOBB2})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCRect)>(m->getOriginal(base+0xb63f0))(this, p0);
    else return GJBaseGameLayer::updateOBB2(p0);
}

template<class D, void*** V>
void $GJBaseGameLayer<D, V>::updateQueuedLabels() {
    if ((void($GJBaseGameLayer::*)()){&$GJBaseGameLayer::updateQueuedLabels} != (void(D::*)()){&D::updateQueuedLabels})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0xb9f30))(this);
    else return GJBaseGameLayer::updateQueuedLabels();
}


template<class D, void*** V>
$GJColorSetupLayer<D, V>::~$GJColorSetupLayer() {}

template<class D, void*** V>
$GJColorSetupLayer<D, V>::$GJColorSetupLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($GJColorSetupLayer::*)()){&$GJColorSetupLayer::updateSpriteColors} != (void(D::*)()){&D::updateSpriteColors})
        m->registerHook(base+0xefe50, extract((void(D::*)()){&D::updateSpriteColors}));
}

template<class D, void*** V>
void $GJColorSetupLayer<D, V>::updateSpriteColors() {
    if ((void($GJColorSetupLayer::*)()){&$GJColorSetupLayer::updateSpriteColors} != (void(D::*)()){&D::updateSpriteColors})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0xefe50))(this);
    else return GJColorSetupLayer::updateSpriteColors();
}


template<class D, void*** V>
$GJDropDownLayer<D, V>::~$GJDropDownLayer() {}

template<class D, void*** V>
$GJDropDownLayer<D, V>::$GJDropDownLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($GJDropDownLayer::*)()){&$GJDropDownLayer::customSetup} != (void(D::*)()){&D::customSetup})
        m->registerHook(base+0x352570, extract_virtual(V, (void(D::*)()){&D::customSetup}));
    std::cout << "customSetup: " << (void*)extract_virtual(V, (void(D::*)()){&D::customSetup}) << std::endl;

    if ((void($GJDropDownLayer::*)()){&$GJDropDownLayer::enterLayer} != (void(D::*)()){&D::enterLayer})
        m->registerHook(base+0x3525c0, extract_virtual(V, (void(D::*)()){&D::enterLayer}));
    std::cout << "enterLayer: " << (void*)extract_virtual(V, (void(D::*)()){&D::enterLayer}) << std::endl;

    if ((void($GJDropDownLayer::*)(cocos2d::CCObject*)){&$GJDropDownLayer::exitLayer} != (void(D::*)(cocos2d::CCObject*)){&D::exitLayer})
        m->registerHook(base+0x352670, extract_virtual(V, (void(D::*)(cocos2d::CCObject*)){&D::exitLayer}));
    std::cout << "exitLayer: " << (void*)extract_virtual(V, (void(D::*)(cocos2d::CCObject*)){&D::exitLayer}) << std::endl;

    if ((void($GJDropDownLayer::*)(bool)){&$GJDropDownLayer::showLayer} != (void(D::*)(bool)){&D::showLayer})
        m->registerHook(base+0x3526c0, extract_virtual(V, (void(D::*)(bool)){&D::showLayer}));
    std::cout << "showLayer: " << (void*)extract_virtual(V, (void(D::*)(bool)){&D::showLayer}) << std::endl;

    if ((void($GJDropDownLayer::*)(bool)){&$GJDropDownLayer::hideLayer} != (void(D::*)(bool)){&D::hideLayer})
        m->registerHook(base+0x3527b0, extract_virtual(V, (void(D::*)(bool)){&D::hideLayer}));
    std::cout << "hideLayer: " << (void*)extract_virtual(V, (void(D::*)(bool)){&D::hideLayer}) << std::endl;

    if ((void($GJDropDownLayer::*)()){&$GJDropDownLayer::layerVisible} != (void(D::*)()){&D::layerVisible})
        m->registerHook(base+0x3528b0, extract_virtual(V, (void(D::*)()){&D::layerVisible}));
    std::cout << "layerVisible: " << (void*)extract_virtual(V, (void(D::*)()){&D::layerVisible}) << std::endl;

    if ((void($GJDropDownLayer::*)()){&$GJDropDownLayer::layerHidden} != (void(D::*)()){&D::layerHidden})
        m->registerHook(base+0x3528d0, extract_virtual(V, (void(D::*)()){&D::layerHidden}));
    std::cout << "layerHidden: " << (void*)extract_virtual(V, (void(D::*)()){&D::layerHidden}) << std::endl;

    if ((void($GJDropDownLayer::*)()){&$GJDropDownLayer::enterAnimFinished} != (void(D::*)()){&D::enterAnimFinished})
        m->registerHook(base+0x3528a0, extract_virtual(V, (void(D::*)()){&D::enterAnimFinished}));
    std::cout << "enterAnimFinished: " << (void*)extract_virtual(V, (void(D::*)()){&D::enterAnimFinished}) << std::endl;

    if ((void($GJDropDownLayer::*)()){&$GJDropDownLayer::disableUI} != (void(D::*)()){&D::disableUI})
        m->registerHook(base+0x352580, extract_virtual(V, (void(D::*)()){&D::disableUI}));
    std::cout << "disableUI: " << (void*)extract_virtual(V, (void(D::*)()){&D::disableUI}) << std::endl;

    if ((void($GJDropDownLayer::*)()){&$GJDropDownLayer::enableUI} != (void(D::*)()){&D::enableUI})
        m->registerHook(base+0x3525a0, extract_virtual(V, (void(D::*)()){&D::enableUI}));
    std::cout << "enableUI: " << (void*)extract_virtual(V, (void(D::*)()){&D::enableUI}) << std::endl;

    if ((void($GJDropDownLayer::*)()){&$GJDropDownLayer::draw} != (void(D::*)()){&D::draw})
        m->registerHook(base+0x352910, extract_virtual(V, (void(D::*)()){&D::draw}));
    std::cout << "draw: " << (void*)extract_virtual(V, (void(D::*)()){&D::draw}) << std::endl;

    if ((bool($GJDropDownLayer::*)(char const*, float)){&$GJDropDownLayer::init} != (bool(D::*)(char const*, float)){&D::init})
        m->registerHook(base+0x352100, extract_virtual(V, (bool(D::*)(char const*, float)){&D::init}));
    std::cout << "init: " << (void*)extract_virtual(V, (bool(D::*)(char const*, float)){&D::init}) << std::endl;

    if ((void($GJDropDownLayer::*)()){&$GJDropDownLayer::registerWithTouchDispatcher} != (void(D::*)()){&D::registerWithTouchDispatcher})
        m->registerHook(base+0x3525f0, extract_virtual(V, (void(D::*)()){&D::registerWithTouchDispatcher}));
    std::cout << "registerWithTouchDispatcher: " << (void*)extract_virtual(V, (void(D::*)()){&D::registerWithTouchDispatcher}) << std::endl;

    if ((void($GJDropDownLayer::*)()){&$GJDropDownLayer::keyBackClicked} != (void(D::*)()){&D::keyBackClicked})
        m->registerHook(base+0x352630, extract_virtual(V, (void(D::*)()){&D::keyBackClicked}));
    std::cout << "keyBackClicked: " << (void*)extract_virtual(V, (void(D::*)()){&D::keyBackClicked}) << std::endl;

    if ((GJDropDownLayer*(*)(char const*)){&$GJDropDownLayer::create} != (GJDropDownLayer*(*)(char const*)){&D::create})
        m->registerHook(base+0x352530, (GJDropDownLayer*(*)(char const*)){&D::create});
}

template<class D, void*** V>
void $GJDropDownLayer<D, V>::customSetup() {
    if ((void($GJDropDownLayer::*)()){&$GJDropDownLayer::customSetup} != (void(D::*)()){&D::customSetup})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x352570))(this);
    else return GJDropDownLayer::customSetup();
}

template<class D, void*** V>
void $GJDropDownLayer<D, V>::enterLayer() {
    if ((void($GJDropDownLayer::*)()){&$GJDropDownLayer::enterLayer} != (void(D::*)()){&D::enterLayer})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x3525c0))(this);
    else return GJDropDownLayer::enterLayer();
}

template<class D, void*** V>
void $GJDropDownLayer<D, V>::exitLayer(cocos2d::CCObject* p0) {
    if ((void($GJDropDownLayer::*)(cocos2d::CCObject*)){&$GJDropDownLayer::exitLayer} != (void(D::*)(cocos2d::CCObject*)){&D::exitLayer})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x352670))(this, p0);
    else return GJDropDownLayer::exitLayer(p0);
}

template<class D, void*** V>
void $GJDropDownLayer<D, V>::showLayer(bool p0) {
    if ((void($GJDropDownLayer::*)(bool)){&$GJDropDownLayer::showLayer} != (void(D::*)(bool)){&D::showLayer})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x3526c0))(this, p0);
    else return GJDropDownLayer::showLayer(p0);
}

template<class D, void*** V>
void $GJDropDownLayer<D, V>::hideLayer(bool p0) {
    if ((void($GJDropDownLayer::*)(bool)){&$GJDropDownLayer::hideLayer} != (void(D::*)(bool)){&D::hideLayer})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x3527b0))(this, p0);
    else return GJDropDownLayer::hideLayer(p0);
}

template<class D, void*** V>
void $GJDropDownLayer<D, V>::layerVisible() {
    if ((void($GJDropDownLayer::*)()){&$GJDropDownLayer::layerVisible} != (void(D::*)()){&D::layerVisible})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x3528b0))(this);
    else return GJDropDownLayer::layerVisible();
}

template<class D, void*** V>
void $GJDropDownLayer<D, V>::layerHidden() {
    if ((void($GJDropDownLayer::*)()){&$GJDropDownLayer::layerHidden} != (void(D::*)()){&D::layerHidden})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x3528d0))(this);
    else return GJDropDownLayer::layerHidden();
}

template<class D, void*** V>
void $GJDropDownLayer<D, V>::enterAnimFinished() {
    if ((void($GJDropDownLayer::*)()){&$GJDropDownLayer::enterAnimFinished} != (void(D::*)()){&D::enterAnimFinished})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x3528a0))(this);
    else return GJDropDownLayer::enterAnimFinished();
}

template<class D, void*** V>
void $GJDropDownLayer<D, V>::disableUI() {
    if ((void($GJDropDownLayer::*)()){&$GJDropDownLayer::disableUI} != (void(D::*)()){&D::disableUI})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x352580))(this);
    else return GJDropDownLayer::disableUI();
}

template<class D, void*** V>
void $GJDropDownLayer<D, V>::enableUI() {
    if ((void($GJDropDownLayer::*)()){&$GJDropDownLayer::enableUI} != (void(D::*)()){&D::enableUI})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x3525a0))(this);
    else return GJDropDownLayer::enableUI();
}

template<class D, void*** V>
void $GJDropDownLayer<D, V>::draw() {
    if ((void($GJDropDownLayer::*)()){&$GJDropDownLayer::draw} != (void(D::*)()){&D::draw})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x352910))(this);
    else return GJDropDownLayer::draw();
}

template<class D, void*** V>
bool $GJDropDownLayer<D, V>::init(char const* p0, float p1) {
    if ((bool($GJDropDownLayer::*)(char const*, float)){&$GJDropDownLayer::init} != (bool(D::*)(char const*, float)){&D::init})
        return reinterpret_cast<bool(*)(decltype(this), char const*, float)>(m->getOriginal(base+0x352100))(this, p0, p1);
    else return GJDropDownLayer::init(p0, p1);
}

template<class D, void*** V>
void $GJDropDownLayer<D, V>::registerWithTouchDispatcher() {
    if ((void($GJDropDownLayer::*)()){&$GJDropDownLayer::registerWithTouchDispatcher} != (void(D::*)()){&D::registerWithTouchDispatcher})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x3525f0))(this);
    else return GJDropDownLayer::registerWithTouchDispatcher();
}

template<class D, void*** V>
void $GJDropDownLayer<D, V>::keyBackClicked() {
    if ((void($GJDropDownLayer::*)()){&$GJDropDownLayer::keyBackClicked} != (void(D::*)()){&D::keyBackClicked})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x352630))(this);
    else return GJDropDownLayer::keyBackClicked();
}

template<class D, void*** V>
GJDropDownLayer* $GJDropDownLayer<D, V>::create(char const* p0) {
    if ((GJDropDownLayer*(*)(char const*)){&$GJDropDownLayer::create} != (GJDropDownLayer*(*)(char const*)){&D::create})
        return reinterpret_cast<GJDropDownLayer*(*)(char const*)>(m->getOriginal(base+0x352530))(p0);
    else return GJDropDownLayer::create(p0);
}


template<class D, void*** V>
$GJEffectManager<D, V>::~$GJEffectManager() {}

template<class D, void*** V>
$GJEffectManager<D, V>::$GJEffectManager() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((bool($GJEffectManager::*)()){&$GJEffectManager::init} != (bool(D::*)()){&D::init})
        m->registerHook(base+0x180230, extract_virtual(V, (bool(D::*)()){&D::init}));
    std::cout << "init: " << (void*)extract_virtual(V, (bool(D::*)()){&D::init}) << std::endl;

    if ((void($GJEffectManager::*)(int)){&$GJEffectManager::activeColorForIndex} != (void(D::*)(int)){&D::activeColorForIndex})
        m->registerHook(base+0x180cb0, extract((void(D::*)(int)){&D::activeColorForIndex}));

    if ((void($GJEffectManager::*)(int)){&$GJEffectManager::activeOpacityForIndex} != (void(D::*)(int)){&D::activeOpacityForIndex})
        m->registerHook(base+0x180e10, extract((void(D::*)(int)){&D::activeOpacityForIndex}));

    if ((void($GJEffectManager::*)(cocos2d::CCArray*)){&$GJEffectManager::addAllInheritedColorActions} != (void(D::*)(cocos2d::CCArray*)){&D::addAllInheritedColorActions})
        m->registerHook(base+0x1817a0, extract((void(D::*)(cocos2d::CCArray*)){&D::addAllInheritedColorActions}));

    if ((void($GJEffectManager::*)(PulseEffectAction*)){&$GJEffectManager::addGroupPulseEffect} != (void(D::*)(PulseEffectAction*)){&D::addGroupPulseEffect})
        m->registerHook(base+0x184c10, extract((void(D::*)(PulseEffectAction*)){&D::addGroupPulseEffect}));

    if ((void($GJEffectManager::*)()){&$GJEffectManager::calculateBaseActiveColors} != (void(D::*)()){&D::calculateBaseActiveColors})
        m->registerHook(base+0x180f70, extract((void(D::*)()){&D::calculateBaseActiveColors}));

    if ((void($GJEffectManager::*)(int, ColorAction*)){&$GJEffectManager::calculateInheritedColor} != (void(D::*)(int, ColorAction*)){&D::calculateInheritedColor})
        m->registerHook(base+0x1818f0, extract((void(D::*)(int, ColorAction*)){&D::calculateInheritedColor}));

    if ((void($GJEffectManager::*)(cocos2d::_ccColor3B)){&$GJEffectManager::calculateLightBGColor} != (void(D::*)(cocos2d::_ccColor3B)){&D::calculateLightBGColor})
        m->registerHook(base+0x185b90, extract((void(D::*)(cocos2d::_ccColor3B)){&D::calculateLightBGColor}));

    if ((void($GJEffectManager::*)(ColorAction*)){&$GJEffectManager::colorActionChanged} != (void(D::*)(ColorAction*)){&D::colorActionChanged})
        m->registerHook(base+0x181dc0, extract((void(D::*)(ColorAction*)){&D::colorActionChanged}));

    if ((void($GJEffectManager::*)(int)){&$GJEffectManager::colorExists} != (void(D::*)(int)){&D::colorExists})
        m->registerHook(base+0x181da0, extract((void(D::*)(int)){&D::colorExists}));

    if ((void($GJEffectManager::*)(cocos2d::_ccColor3B, cocos2d::_ccHSVValue)){&$GJEffectManager::colorForEffect} != (void(D::*)(cocos2d::_ccColor3B, cocos2d::_ccHSVValue)){&D::colorForEffect})
        m->registerHook(base+0x182650, extract((void(D::*)(cocos2d::_ccColor3B, cocos2d::_ccHSVValue)){&D::colorForEffect}));

    if ((cocos2d::_ccColor3B($GJEffectManager::*)(int, cocos2d::_ccColor3B const&, bool)){&$GJEffectManager::colorForGroupID} != (cocos2d::_ccColor3B(D::*)(int, cocos2d::_ccColor3B const&, bool)){&D::colorForGroupID})
        m->registerHook(base+0x184f90, extract((cocos2d::_ccColor3B(D::*)(int, cocos2d::_ccColor3B const&, bool)){&D::colorForGroupID}));

    if ((void($GJEffectManager::*)(int)){&$GJEffectManager::colorForIndex} != (void(D::*)(int)){&D::colorForIndex})
        m->registerHook(base+0x180ad0, extract((void(D::*)(int)){&D::colorForIndex}));

    if ((void($GJEffectManager::*)(cocos2d::_ccColor3B const&, PulseEffectAction*)){&$GJEffectManager::colorForPulseEffect} != (void(D::*)(cocos2d::_ccColor3B const&, PulseEffectAction*)){&D::colorForPulseEffect})
        m->registerHook(base+0x181bf0, extract((void(D::*)(cocos2d::_ccColor3B const&, PulseEffectAction*)){&D::colorForPulseEffect}));

    if ((void($GJEffectManager::*)(int)){&$GJEffectManager::countChangedForItem} != (void(D::*)(int)){&D::countChangedForItem})
        m->registerHook(base+0x185a40, extract((void(D::*)(int)){&D::countChangedForItem}));

    if ((void($GJEffectManager::*)(int)){&$GJEffectManager::countForItem} != (void(D::*)(int)){&D::countForItem})
        m->registerHook(base+0x185a10, extract((void(D::*)(int)){&D::countForItem}));

    if ((GJEffectManager*(*)()){&$GJEffectManager::create} != (GJEffectManager*(*)()){&D::create})
        m->registerHook(base+0x1800f0, (GJEffectManager*(*)()){&D::create});

    if ((void($GJEffectManager::*)(float, float, float, int, int, bool, int)){&$GJEffectManager::createFollowCommand} != (void(D::*)(float, float, float, int, int, bool, int)){&D::createFollowCommand})
        m->registerHook(base+0x182ed0, extract((void(D::*)(float, float, float, int, int, bool, int)){&D::createFollowCommand}));

    if ((void($GJEffectManager::*)(cocos2d::CCPoint, int, float, int, float, bool, bool, int)){&$GJEffectManager::createMoveCommand} != (void(D::*)(cocos2d::CCPoint, int, float, int, float, bool, bool, int)){&D::createMoveCommand})
        m->registerHook(base+0x182cc0, extract((void(D::*)(cocos2d::CCPoint, int, float, int, float, bool, bool, int)){&D::createMoveCommand}));

    if ((void($GJEffectManager::*)(float, float, int, float, float, int, int)){&$GJEffectManager::createPlayerFollowCommand} != (void(D::*)(float, float, int, float, float, int, int)){&D::createPlayerFollowCommand})
        m->registerHook(base+0x182fe0, extract((void(D::*)(float, float, int, float, float, int, int)){&D::createPlayerFollowCommand}));

    if ((void($GJEffectManager::*)(int, float, int, int, int, float, bool, int)){&$GJEffectManager::createRotateCommand} != (void(D::*)(int, float, int, int, int, float, bool, int)){&D::createRotateCommand})
        m->registerHook(base+0x182df0, extract((void(D::*)(int, float, int, int, int, float, bool, int)){&D::createRotateCommand}));

    if ((void($GJEffectManager::*)()){&$GJEffectManager::getAllColorActions} != (void(D::*)()){&D::getAllColorActions})
        m->registerHook(base+0x180980, extract((void(D::*)()){&D::getAllColorActions}));

    if ((void($GJEffectManager::*)()){&$GJEffectManager::getAllColorSprites} != (void(D::*)()){&D::getAllColorSprites})
        m->registerHook(base+0x1809e0, extract((void(D::*)()){&D::getAllColorSprites}));

    if ((const cocos2d::_ccColor3B&($GJEffectManager::*)(int)){&$GJEffectManager::getColorAction} != (const cocos2d::_ccColor3B&(D::*)(int)){&D::getColorAction})
        m->registerHook(base+0x180b00, extract((const cocos2d::_ccColor3B&(D::*)(int)){&D::getColorAction}));

    if ((const cocos2d::_ccColor3B&($GJEffectManager::*)(int)){&$GJEffectManager::getColorSprite} != (const cocos2d::_ccColor3B&(D::*)(int)){&D::getColorSprite})
        m->registerHook(base+0x180d00, extract((const cocos2d::_ccColor3B&(D::*)(int)){&D::getColorSprite}));

    if ((void($GJEffectManager::*)()){&$GJEffectManager::getCurrentStateString} != (void(D::*)()){&D::getCurrentStateString})
        m->registerHook(base+0x1867e0, extract((void(D::*)()){&D::getCurrentStateString}));

    if ((void($GJEffectManager::*)()){&$GJEffectManager::getLoadedMoveOffset} != (void(D::*)()){&D::getLoadedMoveOffset})
        m->registerHook(base+0x184390, extract((void(D::*)()){&D::getLoadedMoveOffset}));

    if ((void($GJEffectManager::*)(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float)){&$GJEffectManager::getMixedColor} != (void(D::*)(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float)){&D::getMixedColor})
        m->registerHook(base+0x185d30, extract((void(D::*)(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float)){&D::getMixedColor}));

    if ((uint8_t($GJEffectManager::*)(int)){&$GJEffectManager::getOpacityActionForGroup} != (uint8_t(D::*)(int)){&D::getOpacityActionForGroup})
        m->registerHook(base+0x1845b0, extract((uint8_t(D::*)(int)){&D::getOpacityActionForGroup}));

    if ((void($GJEffectManager::*)()){&$GJEffectManager::getSaveString} != (void(D::*)()){&D::getSaveString})
        m->registerHook(base+0x185e90, extract((void(D::*)()){&D::getSaveString}));

    if ((void($GJEffectManager::*)(bool, int, int)){&$GJEffectManager::handleObjectCollision} != (void(D::*)(bool, int, int)){&D::handleObjectCollision})
        m->registerHook(base+0x1828f0, extract((void(D::*)(bool, int, int)){&D::handleObjectCollision}));

    if ((void($GJEffectManager::*)()){&$GJEffectManager::hasActiveDualTouch} != (void(D::*)()){&D::hasActiveDualTouch})
        m->registerHook(base+0x185540, extract((void(D::*)()){&D::hasActiveDualTouch}));

    if ((void($GJEffectManager::*)(int)){&$GJEffectManager::hasBeenTriggered} != (void(D::*)(int)){&D::hasBeenTriggered})
        m->registerHook(base+0x1853b0, extract((void(D::*)(int)){&D::hasBeenTriggered}));

    if ((void($GJEffectManager::*)(int)){&$GJEffectManager::hasPulseEffectForGroupID} != (void(D::*)(int)){&D::hasPulseEffectForGroupID})
        m->registerHook(base+0x184f60, extract((void(D::*)(int)){&D::hasPulseEffectForGroupID}));

    if ((bool($GJEffectManager::*)(int)){&$GJEffectManager::isGroupEnabled} != (bool(D::*)(int)){&D::isGroupEnabled})
        m->registerHook(base+0x1853d0, extract((bool(D::*)(int)){&D::isGroupEnabled}));

    if ((void($GJEffectManager::*)(int, cocos2d::_ccColor3B const&, bool)){&$GJEffectManager::keyForGroupIDColor} != (void(D::*)(int, cocos2d::_ccColor3B const&, bool)){&D::keyForGroupIDColor})
        m->registerHook(base+0x184c90, extract((void(D::*)(int, cocos2d::_ccColor3B const&, bool)){&D::keyForGroupIDColor}));

    if ((void($GJEffectManager::*)(std::string)){&$GJEffectManager::loadState} != (void(D::*)(std::string)){&D::loadState})
        m->registerHook(base+0x188db0, extract((void(D::*)(std::string)){&D::loadState}));

    if ((void($GJEffectManager::*)(int, int)){&$GJEffectManager::objectsCollided} != (void(D::*)(int, int)){&D::objectsCollided})
        m->registerHook(base+0x182a00, extract((void(D::*)(int, int)){&D::objectsCollided}));

    if ((void($GJEffectManager::*)(int)){&$GJEffectManager::opacityForIndex} != (void(D::*)(int)){&D::opacityForIndex})
        m->registerHook(base+0x180c80, extract((void(D::*)(int)){&D::opacityForIndex}));

    if ((float($GJEffectManager::*)(int)){&$GJEffectManager::opacityModForGroup} != (float(D::*)(int)){&D::opacityModForGroup})
        m->registerHook(base+0x184740, extract((float(D::*)(int)){&D::opacityModForGroup}));

    if ((void($GJEffectManager::*)(bool, bool)){&$GJEffectManager::playerButton} != (void(D::*)(bool, bool)){&D::playerButton})
        m->registerHook(base+0x1855a0, extract((void(D::*)(bool, bool)){&D::playerButton}));

    if ((void($GJEffectManager::*)()){&$GJEffectManager::playerDied} != (void(D::*)()){&D::playerDied})
        m->registerHook(base+0x185860, extract((void(D::*)()){&D::playerDied}));

    if ((void($GJEffectManager::*)()){&$GJEffectManager::postCollisionCheck} != (void(D::*)()){&D::postCollisionCheck})
        m->registerHook(base+0x182720, extract((void(D::*)()){&D::postCollisionCheck}));

    if ((void($GJEffectManager::*)()){&$GJEffectManager::preCollisionCheck} != (void(D::*)()){&D::preCollisionCheck})
        m->registerHook(base+0x182680, extract((void(D::*)()){&D::preCollisionCheck}));

    if ((void($GJEffectManager::*)(float, bool)){&$GJEffectManager::prepareMoveActions} != (void(D::*)(float, bool)){&D::prepareMoveActions})
        m->registerHook(base+0x183660, extract((void(D::*)(float, bool)){&D::prepareMoveActions}));

    if ((void($GJEffectManager::*)()){&$GJEffectManager::processColors} != (void(D::*)()){&D::processColors})
        m->registerHook(base+0x180e70, extract((void(D::*)()){&D::processColors}));

    if ((void($GJEffectManager::*)()){&$GJEffectManager::processCopyColorPulseActions} != (void(D::*)()){&D::processCopyColorPulseActions})
        m->registerHook(base+0x181530, extract((void(D::*)()){&D::processCopyColorPulseActions}));

    if ((void($GJEffectManager::*)()){&$GJEffectManager::processInheritedColors} != (void(D::*)()){&D::processInheritedColors})
        m->registerHook(base+0x181190, extract((void(D::*)()){&D::processInheritedColors}));

    if ((void($GJEffectManager::*)()){&$GJEffectManager::processPulseActions} != (void(D::*)()){&D::processPulseActions})
        m->registerHook(base+0x181040, extract((void(D::*)()){&D::processPulseActions}));

    if ((void($GJEffectManager::*)(int, int, int, bool, bool, int)){&$GJEffectManager::registerCollisionTrigger} != (void(D::*)(int, int, int, bool, bool, int)){&D::registerCollisionTrigger})
        m->registerHook(base+0x182b70, extract((void(D::*)(int, int, int, bool, bool, int)){&D::registerCollisionTrigger}));

    if ((void($GJEffectManager::*)()){&$GJEffectManager::removeAllPulseActions} != (void(D::*)()){&D::removeAllPulseActions})
        m->registerHook(base+0x1825e0, extract((void(D::*)()){&D::removeAllPulseActions}));

    if ((void($GJEffectManager::*)(int)){&$GJEffectManager::removeColorAction} != (void(D::*)(int)){&D::removeColorAction})
        m->registerHook(base+0x181d60, extract((void(D::*)(int)){&D::removeColorAction}));

    if ((void($GJEffectManager::*)()){&$GJEffectManager::reset} != (void(D::*)()){&D::reset})
        m->registerHook(base+0x180690, extract((void(D::*)()){&D::reset}));

    if ((void($GJEffectManager::*)()){&$GJEffectManager::resetColorCache} != (void(D::*)()){&D::resetColorCache})
        m->registerHook(base+0x185280, extract((void(D::*)()){&D::resetColorCache}));

    if ((void($GJEffectManager::*)()){&$GJEffectManager::resetEffects} != (void(D::*)()){&D::resetEffects})
        m->registerHook(base+0x1807d0, extract((void(D::*)()){&D::resetEffects}));

    if ((void($GJEffectManager::*)()){&$GJEffectManager::resetMoveActions} != (void(D::*)()){&D::resetMoveActions})
        m->registerHook(base+0x180940, extract((void(D::*)()){&D::resetMoveActions}));

    if ((void($GJEffectManager::*)()){&$GJEffectManager::resetToggledGroups} != (void(D::*)()){&D::resetToggledGroups})
        m->registerHook(base+0x1853f0, extract((void(D::*)()){&D::resetToggledGroups}));

    if ((void($GJEffectManager::*)()){&$GJEffectManager::resetTriggeredIDs} != (void(D::*)()){&D::resetTriggeredIDs})
        m->registerHook(base+0x182630, extract((void(D::*)()){&D::resetTriggeredIDs}));

    if ((void($GJEffectManager::*)(int, int, bool, int, bool, int)){&$GJEffectManager::runCountTrigger} != (void(D::*)(int, int, bool, int, bool, int)){&D::runCountTrigger})
        m->registerHook(base+0x1858d0, extract((void(D::*)(int, int, bool, int, bool, int)){&D::runCountTrigger}));

    if ((void($GJEffectManager::*)(int, bool, int)){&$GJEffectManager::runDeathTrigger} != (void(D::*)(int, bool, int)){&D::runDeathTrigger})
        m->registerHook(base+0x1857a0, extract((void(D::*)(int, bool, int)){&D::runDeathTrigger}));

    if ((OpacityEffectAction*($GJEffectManager::*)(int, float, float, int)){&$GJEffectManager::runOpacityActionOnGroup} != (OpacityEffectAction*(D::*)(int, float, float, int)){&D::runOpacityActionOnGroup})
        m->registerHook(base+0x1845d0, extract((OpacityEffectAction*(D::*)(int, float, float, int)){&D::runOpacityActionOnGroup}));

    if ((void($GJEffectManager::*)(int, bool, float, float, float, PulseEffectType, cocos2d::_ccColor3B, cocos2d::_ccHSVValue, int, bool, bool, bool, int)){&$GJEffectManager::runPulseEffect} != (void(D::*)(int, bool, float, float, float, PulseEffectType, cocos2d::_ccColor3B, cocos2d::_ccHSVValue, int, bool, bool, bool, int)){&D::runPulseEffect})
        m->registerHook(base+0x184890, extract((void(D::*)(int, bool, float, float, float, PulseEffectType, cocos2d::_ccColor3B, cocos2d::_ccHSVValue, int, bool, bool, bool, int)){&D::runPulseEffect}));

    if ((void($GJEffectManager::*)(int, bool, TouchTriggerType, bool, int)){&$GJEffectManager::runTouchTriggerCommand} != (void(D::*)(int, bool, TouchTriggerType, bool, int)){&D::runTouchTriggerCommand})
        m->registerHook(base+0x185460, extract((void(D::*)(int, bool, TouchTriggerType, bool, int)){&D::runTouchTriggerCommand}));

    if ((void($GJEffectManager::*)(ColorAction*, int)){&$GJEffectManager::setColorAction} != (void(D::*)(ColorAction*, int)){&D::setColorAction})
        m->registerHook(base+0x181d00, extract((void(D::*)(ColorAction*, int)){&D::setColorAction}));

    if ((void($GJEffectManager::*)(int, int, bool)){&$GJEffectManager::setFollowing} != (void(D::*)(int, int, bool)){&D::setFollowing})
        m->registerHook(base+0x185e00, extract((void(D::*)(int, int, bool)){&D::setFollowing}));

    if ((void($GJEffectManager::*)(std::string)){&$GJEffectManager::setupFromString} != (void(D::*)(std::string)){&D::setupFromString})
        m->registerHook(base+0x186290, extract((void(D::*)(std::string)){&D::setupFromString}));

    if ((void($GJEffectManager::*)(int)){&$GJEffectManager::shouldBlend} != (void(D::*)(int)){&D::shouldBlend})
        m->registerHook(base+0x180e40, extract((void(D::*)(int)){&D::shouldBlend}));

    if ((void($GJEffectManager::*)(int, float, int)){&$GJEffectManager::spawnGroup} != (void(D::*)(int, float, int)){&D::spawnGroup})
        m->registerHook(base+0x1852a0, extract((void(D::*)(int, float, int)){&D::spawnGroup}));

    if ((void($GJEffectManager::*)(EffectGameObject*)){&$GJEffectManager::stopActionsForTrigger} != (void(D::*)(EffectGameObject*)){&D::stopActionsForTrigger})
        m->registerHook(base+0x183150, extract((void(D::*)(EffectGameObject*)){&D::stopActionsForTrigger}));

    if ((void($GJEffectManager::*)(int)){&$GJEffectManager::stopMoveActionsForGroup} != (void(D::*)(int)){&D::stopMoveActionsForGroup})
        m->registerHook(base+0x1830e0, extract((void(D::*)(int)){&D::stopMoveActionsForGroup}));

    if ((void($GJEffectManager::*)(int)){&$GJEffectManager::storeTriggeredID} != (void(D::*)(int)){&D::storeTriggeredID})
        m->registerHook(base+0x185380, extract((void(D::*)(int)){&D::storeTriggeredID}));

    if ((void($GJEffectManager::*)(int, bool)){&$GJEffectManager::toggleGroup} != (void(D::*)(int, bool)){&D::toggleGroup})
        m->registerHook(base+0x182c80, extract((void(D::*)(int, bool)){&D::toggleGroup}));

    if ((void($GJEffectManager::*)(InheritanceNode*)){&$GJEffectManager::traverseInheritanceChain} != (void(D::*)(InheritanceNode*)){&D::traverseInheritanceChain})
        m->registerHook(base+0x181850, extract((void(D::*)(InheritanceNode*)){&D::traverseInheritanceChain}));

    if ((void($GJEffectManager::*)()){&$GJEffectManager::updateActiveOpacityEffects} != (void(D::*)()){&D::updateActiveOpacityEffects})
        m->registerHook(base+0x1847e0, extract((void(D::*)()){&D::updateActiveOpacityEffects}));

    if ((void($GJEffectManager::*)(ColorAction*)){&$GJEffectManager::updateColorAction} != (void(D::*)(ColorAction*)){&D::updateColorAction})
        m->registerHook(base+0x184560, extract((void(D::*)(ColorAction*)){&D::updateColorAction}));

    if ((void($GJEffectManager::*)(float)){&$GJEffectManager::updateColorEffects} != (void(D::*)(float)){&D::updateColorEffects})
        m->registerHook(base+0x181f40, extract((void(D::*)(float)){&D::updateColorEffects}));

    if ((void($GJEffectManager::*)(cocos2d::_ccColor3B, cocos2d::_ccColor3B)){&$GJEffectManager::updateColors} != (void(D::*)(cocos2d::_ccColor3B, cocos2d::_ccColor3B)){&D::updateColors})
        m->registerHook(base+0x180a40, extract((void(D::*)(cocos2d::_ccColor3B, cocos2d::_ccColor3B)){&D::updateColors}));

    if ((void($GJEffectManager::*)(float)){&$GJEffectManager::updateEffects} != (void(D::*)(float)){&D::updateEffects})
        m->registerHook(base+0x181df0, extract((void(D::*)(float)){&D::updateEffects}));

    if ((void($GJEffectManager::*)(OpacityEffectAction*)){&$GJEffectManager::updateOpacityAction} != (void(D::*)(OpacityEffectAction*)){&D::updateOpacityAction})
        m->registerHook(base+0x184780, extract((void(D::*)(OpacityEffectAction*)){&D::updateOpacityAction}));

    if ((void($GJEffectManager::*)(float)){&$GJEffectManager::updateOpacityEffects} != (void(D::*)(float)){&D::updateOpacityEffects})
        m->registerHook(base+0x1823e0, extract((void(D::*)(float)){&D::updateOpacityEffects}));

    if ((void($GJEffectManager::*)(float)){&$GJEffectManager::updatePulseEffects} != (void(D::*)(float)){&D::updatePulseEffects})
        m->registerHook(base+0x182130, extract((void(D::*)(float)){&D::updatePulseEffects}));

    if ((void($GJEffectManager::*)(float)){&$GJEffectManager::updateSpawnTriggers} != (void(D::*)(float)){&D::updateSpawnTriggers})
        m->registerHook(base+0x182510, extract((void(D::*)(float)){&D::updateSpawnTriggers}));

    if ((void($GJEffectManager::*)(int, int)){&$GJEffectManager::wasFollowing} != (void(D::*)(int, int)){&D::wasFollowing})
        m->registerHook(base+0x185e60, extract((void(D::*)(int, int)){&D::wasFollowing}));

    if ((void($GJEffectManager::*)(InheritanceNode*, int)){&$GJEffectManager::wouldCreateLoop} != (void(D::*)(InheritanceNode*, int)){&D::wouldCreateLoop})
        m->registerHook(base+0x181820, extract((void(D::*)(InheritanceNode*, int)){&D::wouldCreateLoop}));
}

template<class D, void*** V>
bool $GJEffectManager<D, V>::init() {
    if ((bool($GJEffectManager::*)()){&$GJEffectManager::init} != (bool(D::*)()){&D::init})
        return reinterpret_cast<bool(*)(decltype(this))>(m->getOriginal(base+0x180230))(this);
    else return GJEffectManager::init();
}

template<class D, void*** V>
void $GJEffectManager<D, V>::activeColorForIndex(int p0) {
    if ((void($GJEffectManager::*)(int)){&$GJEffectManager::activeColorForIndex} != (void(D::*)(int)){&D::activeColorForIndex})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x180cb0))(this, p0);
    else return GJEffectManager::activeColorForIndex(p0);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::activeOpacityForIndex(int p0) {
    if ((void($GJEffectManager::*)(int)){&$GJEffectManager::activeOpacityForIndex} != (void(D::*)(int)){&D::activeOpacityForIndex})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x180e10))(this, p0);
    else return GJEffectManager::activeOpacityForIndex(p0);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::addAllInheritedColorActions(cocos2d::CCArray* p0) {
    if ((void($GJEffectManager::*)(cocos2d::CCArray*)){&$GJEffectManager::addAllInheritedColorActions} != (void(D::*)(cocos2d::CCArray*)){&D::addAllInheritedColorActions})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCArray*)>(m->getOriginal(base+0x1817a0))(this, p0);
    else return GJEffectManager::addAllInheritedColorActions(p0);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::addGroupPulseEffect(PulseEffectAction* p0) {
    if ((void($GJEffectManager::*)(PulseEffectAction*)){&$GJEffectManager::addGroupPulseEffect} != (void(D::*)(PulseEffectAction*)){&D::addGroupPulseEffect})
        return reinterpret_cast<void(*)(decltype(this), PulseEffectAction*)>(m->getOriginal(base+0x184c10))(this, p0);
    else return GJEffectManager::addGroupPulseEffect(p0);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::calculateBaseActiveColors() {
    if ((void($GJEffectManager::*)()){&$GJEffectManager::calculateBaseActiveColors} != (void(D::*)()){&D::calculateBaseActiveColors})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x180f70))(this);
    else return GJEffectManager::calculateBaseActiveColors();
}

template<class D, void*** V>
void $GJEffectManager<D, V>::calculateInheritedColor(int p0, ColorAction* p1) {
    if ((void($GJEffectManager::*)(int, ColorAction*)){&$GJEffectManager::calculateInheritedColor} != (void(D::*)(int, ColorAction*)){&D::calculateInheritedColor})
        return reinterpret_cast<void(*)(decltype(this), int, ColorAction*)>(m->getOriginal(base+0x1818f0))(this, p0, p1);
    else return GJEffectManager::calculateInheritedColor(p0, p1);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::calculateLightBGColor(cocos2d::_ccColor3B p0) {
    if ((void($GJEffectManager::*)(cocos2d::_ccColor3B)){&$GJEffectManager::calculateLightBGColor} != (void(D::*)(cocos2d::_ccColor3B)){&D::calculateLightBGColor})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::_ccColor3B)>(m->getOriginal(base+0x185b90))(this, p0);
    else return GJEffectManager::calculateLightBGColor(p0);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::colorActionChanged(ColorAction* p0) {
    if ((void($GJEffectManager::*)(ColorAction*)){&$GJEffectManager::colorActionChanged} != (void(D::*)(ColorAction*)){&D::colorActionChanged})
        return reinterpret_cast<void(*)(decltype(this), ColorAction*)>(m->getOriginal(base+0x181dc0))(this, p0);
    else return GJEffectManager::colorActionChanged(p0);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::colorExists(int p0) {
    if ((void($GJEffectManager::*)(int)){&$GJEffectManager::colorExists} != (void(D::*)(int)){&D::colorExists})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x181da0))(this, p0);
    else return GJEffectManager::colorExists(p0);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::colorForEffect(cocos2d::_ccColor3B p0, cocos2d::_ccHSVValue p1) {
    if ((void($GJEffectManager::*)(cocos2d::_ccColor3B, cocos2d::_ccHSVValue)){&$GJEffectManager::colorForEffect} != (void(D::*)(cocos2d::_ccColor3B, cocos2d::_ccHSVValue)){&D::colorForEffect})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::_ccColor3B, cocos2d::_ccHSVValue)>(m->getOriginal(base+0x182650))(this, p0, p1);
    else return GJEffectManager::colorForEffect(p0, p1);
}

template<class D, void*** V>
cocos2d::_ccColor3B $GJEffectManager<D, V>::colorForGroupID(int p0, cocos2d::_ccColor3B const& p1, bool p2) {
    if ((cocos2d::_ccColor3B($GJEffectManager::*)(int, cocos2d::_ccColor3B const&, bool)){&$GJEffectManager::colorForGroupID} != (cocos2d::_ccColor3B(D::*)(int, cocos2d::_ccColor3B const&, bool)){&D::colorForGroupID})
        return reinterpret_cast<cocos2d::_ccColor3B(*)(decltype(this), int, cocos2d::_ccColor3B const&, bool)>(m->getOriginal(base+0x184f90))(this, p0, p1, p2);
    else return GJEffectManager::colorForGroupID(p0, p1, p2);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::colorForIndex(int p0) {
    if ((void($GJEffectManager::*)(int)){&$GJEffectManager::colorForIndex} != (void(D::*)(int)){&D::colorForIndex})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x180ad0))(this, p0);
    else return GJEffectManager::colorForIndex(p0);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::colorForPulseEffect(cocos2d::_ccColor3B const& p0, PulseEffectAction* p1) {
    if ((void($GJEffectManager::*)(cocos2d::_ccColor3B const&, PulseEffectAction*)){&$GJEffectManager::colorForPulseEffect} != (void(D::*)(cocos2d::_ccColor3B const&, PulseEffectAction*)){&D::colorForPulseEffect})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::_ccColor3B const&, PulseEffectAction*)>(m->getOriginal(base+0x181bf0))(this, p0, p1);
    else return GJEffectManager::colorForPulseEffect(p0, p1);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::countChangedForItem(int p0) {
    if ((void($GJEffectManager::*)(int)){&$GJEffectManager::countChangedForItem} != (void(D::*)(int)){&D::countChangedForItem})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x185a40))(this, p0);
    else return GJEffectManager::countChangedForItem(p0);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::countForItem(int p0) {
    if ((void($GJEffectManager::*)(int)){&$GJEffectManager::countForItem} != (void(D::*)(int)){&D::countForItem})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x185a10))(this, p0);
    else return GJEffectManager::countForItem(p0);
}

template<class D, void*** V>
GJEffectManager* $GJEffectManager<D, V>::create() {
    if ((GJEffectManager*(*)()){&$GJEffectManager::create} != (GJEffectManager*(*)()){&D::create})
        return reinterpret_cast<GJEffectManager*(*)()>(m->getOriginal(base+0x1800f0))();
    else return GJEffectManager::create();
}

template<class D, void*** V>
void $GJEffectManager<D, V>::createFollowCommand(float p0, float p1, float p2, int p3, int p4, bool p5, int p6) {
    if ((void($GJEffectManager::*)(float, float, float, int, int, bool, int)){&$GJEffectManager::createFollowCommand} != (void(D::*)(float, float, float, int, int, bool, int)){&D::createFollowCommand})
        return reinterpret_cast<void(*)(decltype(this), float, float, float, int, int, bool, int)>(m->getOriginal(base+0x182ed0))(this, p0, p1, p2, p3, p4, p5, p6);
    else return GJEffectManager::createFollowCommand(p0, p1, p2, p3, p4, p5, p6);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::createMoveCommand(cocos2d::CCPoint p0, int p1, float p2, int p3, float p4, bool p5, bool p6, int p7) {
    if ((void($GJEffectManager::*)(cocos2d::CCPoint, int, float, int, float, bool, bool, int)){&$GJEffectManager::createMoveCommand} != (void(D::*)(cocos2d::CCPoint, int, float, int, float, bool, bool, int)){&D::createMoveCommand})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCPoint, int, float, int, float, bool, bool, int)>(m->getOriginal(base+0x182cc0))(this, p0, p1, p2, p3, p4, p5, p6, p7);
    else return GJEffectManager::createMoveCommand(p0, p1, p2, p3, p4, p5, p6, p7);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::createPlayerFollowCommand(float p0, float p1, int p2, float p3, float p4, int p5, int p6) {
    if ((void($GJEffectManager::*)(float, float, int, float, float, int, int)){&$GJEffectManager::createPlayerFollowCommand} != (void(D::*)(float, float, int, float, float, int, int)){&D::createPlayerFollowCommand})
        return reinterpret_cast<void(*)(decltype(this), float, float, int, float, float, int, int)>(m->getOriginal(base+0x182fe0))(this, p0, p1, p2, p3, p4, p5, p6);
    else return GJEffectManager::createPlayerFollowCommand(p0, p1, p2, p3, p4, p5, p6);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::createRotateCommand(int p0, float p1, int p2, int p3, int p4, float p5, bool p6, int p7) {
    if ((void($GJEffectManager::*)(int, float, int, int, int, float, bool, int)){&$GJEffectManager::createRotateCommand} != (void(D::*)(int, float, int, int, int, float, bool, int)){&D::createRotateCommand})
        return reinterpret_cast<void(*)(decltype(this), int, float, int, int, int, float, bool, int)>(m->getOriginal(base+0x182df0))(this, p0, p1, p2, p3, p4, p5, p6, p7);
    else return GJEffectManager::createRotateCommand(p0, p1, p2, p3, p4, p5, p6, p7);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::getAllColorActions() {
    if ((void($GJEffectManager::*)()){&$GJEffectManager::getAllColorActions} != (void(D::*)()){&D::getAllColorActions})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x180980))(this);
    else return GJEffectManager::getAllColorActions();
}

template<class D, void*** V>
void $GJEffectManager<D, V>::getAllColorSprites() {
    if ((void($GJEffectManager::*)()){&$GJEffectManager::getAllColorSprites} != (void(D::*)()){&D::getAllColorSprites})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x1809e0))(this);
    else return GJEffectManager::getAllColorSprites();
}

template<class D, void*** V>
const cocos2d::_ccColor3B& $GJEffectManager<D, V>::getColorAction(int p0) {
    if ((const cocos2d::_ccColor3B&($GJEffectManager::*)(int)){&$GJEffectManager::getColorAction} != (const cocos2d::_ccColor3B&(D::*)(int)){&D::getColorAction})
        return reinterpret_cast<const cocos2d::_ccColor3B&(*)(decltype(this), int)>(m->getOriginal(base+0x180b00))(this, p0);
    else return GJEffectManager::getColorAction(p0);
}

template<class D, void*** V>
const cocos2d::_ccColor3B& $GJEffectManager<D, V>::getColorSprite(int p0) {
    if ((const cocos2d::_ccColor3B&($GJEffectManager::*)(int)){&$GJEffectManager::getColorSprite} != (const cocos2d::_ccColor3B&(D::*)(int)){&D::getColorSprite})
        return reinterpret_cast<const cocos2d::_ccColor3B&(*)(decltype(this), int)>(m->getOriginal(base+0x180d00))(this, p0);
    else return GJEffectManager::getColorSprite(p0);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::getCurrentStateString() {
    if ((void($GJEffectManager::*)()){&$GJEffectManager::getCurrentStateString} != (void(D::*)()){&D::getCurrentStateString})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x1867e0))(this);
    else return GJEffectManager::getCurrentStateString();
}

template<class D, void*** V>
void $GJEffectManager<D, V>::getLoadedMoveOffset() {
    if ((void($GJEffectManager::*)()){&$GJEffectManager::getLoadedMoveOffset} != (void(D::*)()){&D::getLoadedMoveOffset})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x184390))(this);
    else return GJEffectManager::getLoadedMoveOffset();
}

template<class D, void*** V>
void $GJEffectManager<D, V>::getMixedColor(cocos2d::_ccColor3B p0, cocos2d::_ccColor3B p1, float p2) {
    if ((void($GJEffectManager::*)(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float)){&$GJEffectManager::getMixedColor} != (void(D::*)(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float)){&D::getMixedColor})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::_ccColor3B, cocos2d::_ccColor3B, float)>(m->getOriginal(base+0x185d30))(this, p0, p1, p2);
    else return GJEffectManager::getMixedColor(p0, p1, p2);
}

template<class D, void*** V>
uint8_t $GJEffectManager<D, V>::getOpacityActionForGroup(int p0) {
    if ((uint8_t($GJEffectManager::*)(int)){&$GJEffectManager::getOpacityActionForGroup} != (uint8_t(D::*)(int)){&D::getOpacityActionForGroup})
        return reinterpret_cast<uint8_t(*)(decltype(this), int)>(m->getOriginal(base+0x1845b0))(this, p0);
    else return GJEffectManager::getOpacityActionForGroup(p0);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::getSaveString() {
    if ((void($GJEffectManager::*)()){&$GJEffectManager::getSaveString} != (void(D::*)()){&D::getSaveString})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x185e90))(this);
    else return GJEffectManager::getSaveString();
}

template<class D, void*** V>
void $GJEffectManager<D, V>::handleObjectCollision(bool p0, int p1, int p2) {
    if ((void($GJEffectManager::*)(bool, int, int)){&$GJEffectManager::handleObjectCollision} != (void(D::*)(bool, int, int)){&D::handleObjectCollision})
        return reinterpret_cast<void(*)(decltype(this), bool, int, int)>(m->getOriginal(base+0x1828f0))(this, p0, p1, p2);
    else return GJEffectManager::handleObjectCollision(p0, p1, p2);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::hasActiveDualTouch() {
    if ((void($GJEffectManager::*)()){&$GJEffectManager::hasActiveDualTouch} != (void(D::*)()){&D::hasActiveDualTouch})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x185540))(this);
    else return GJEffectManager::hasActiveDualTouch();
}

template<class D, void*** V>
void $GJEffectManager<D, V>::hasBeenTriggered(int p0) {
    if ((void($GJEffectManager::*)(int)){&$GJEffectManager::hasBeenTriggered} != (void(D::*)(int)){&D::hasBeenTriggered})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x1853b0))(this, p0);
    else return GJEffectManager::hasBeenTriggered(p0);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::hasPulseEffectForGroupID(int p0) {
    if ((void($GJEffectManager::*)(int)){&$GJEffectManager::hasPulseEffectForGroupID} != (void(D::*)(int)){&D::hasPulseEffectForGroupID})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x184f60))(this, p0);
    else return GJEffectManager::hasPulseEffectForGroupID(p0);
}

template<class D, void*** V>
bool $GJEffectManager<D, V>::isGroupEnabled(int p0) {
    if ((bool($GJEffectManager::*)(int)){&$GJEffectManager::isGroupEnabled} != (bool(D::*)(int)){&D::isGroupEnabled})
        return reinterpret_cast<bool(*)(decltype(this), int)>(m->getOriginal(base+0x1853d0))(this, p0);
    else return GJEffectManager::isGroupEnabled(p0);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::keyForGroupIDColor(int p0, cocos2d::_ccColor3B const& p1, bool p2) {
    if ((void($GJEffectManager::*)(int, cocos2d::_ccColor3B const&, bool)){&$GJEffectManager::keyForGroupIDColor} != (void(D::*)(int, cocos2d::_ccColor3B const&, bool)){&D::keyForGroupIDColor})
        return reinterpret_cast<void(*)(decltype(this), int, cocos2d::_ccColor3B const&, bool)>(m->getOriginal(base+0x184c90))(this, p0, p1, p2);
    else return GJEffectManager::keyForGroupIDColor(p0, p1, p2);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::loadState(std::string p0) {
    if ((void($GJEffectManager::*)(std::string)){&$GJEffectManager::loadState} != (void(D::*)(std::string)){&D::loadState})
        return reinterpret_cast<void(*)(decltype(this), std::string)>(m->getOriginal(base+0x188db0))(this, p0);
    else return GJEffectManager::loadState(p0);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::objectsCollided(int p0, int p1) {
    if ((void($GJEffectManager::*)(int, int)){&$GJEffectManager::objectsCollided} != (void(D::*)(int, int)){&D::objectsCollided})
        return reinterpret_cast<void(*)(decltype(this), int, int)>(m->getOriginal(base+0x182a00))(this, p0, p1);
    else return GJEffectManager::objectsCollided(p0, p1);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::opacityForIndex(int p0) {
    if ((void($GJEffectManager::*)(int)){&$GJEffectManager::opacityForIndex} != (void(D::*)(int)){&D::opacityForIndex})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x180c80))(this, p0);
    else return GJEffectManager::opacityForIndex(p0);
}

template<class D, void*** V>
float $GJEffectManager<D, V>::opacityModForGroup(int p0) {
    if ((float($GJEffectManager::*)(int)){&$GJEffectManager::opacityModForGroup} != (float(D::*)(int)){&D::opacityModForGroup})
        return reinterpret_cast<float(*)(decltype(this), int)>(m->getOriginal(base+0x184740))(this, p0);
    else return GJEffectManager::opacityModForGroup(p0);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::playerButton(bool p0, bool p1) {
    if ((void($GJEffectManager::*)(bool, bool)){&$GJEffectManager::playerButton} != (void(D::*)(bool, bool)){&D::playerButton})
        return reinterpret_cast<void(*)(decltype(this), bool, bool)>(m->getOriginal(base+0x1855a0))(this, p0, p1);
    else return GJEffectManager::playerButton(p0, p1);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::playerDied() {
    if ((void($GJEffectManager::*)()){&$GJEffectManager::playerDied} != (void(D::*)()){&D::playerDied})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x185860))(this);
    else return GJEffectManager::playerDied();
}

template<class D, void*** V>
void $GJEffectManager<D, V>::postCollisionCheck() {
    if ((void($GJEffectManager::*)()){&$GJEffectManager::postCollisionCheck} != (void(D::*)()){&D::postCollisionCheck})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x182720))(this);
    else return GJEffectManager::postCollisionCheck();
}

template<class D, void*** V>
void $GJEffectManager<D, V>::preCollisionCheck() {
    if ((void($GJEffectManager::*)()){&$GJEffectManager::preCollisionCheck} != (void(D::*)()){&D::preCollisionCheck})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x182680))(this);
    else return GJEffectManager::preCollisionCheck();
}

template<class D, void*** V>
void $GJEffectManager<D, V>::prepareMoveActions(float p0, bool p1) {
    if ((void($GJEffectManager::*)(float, bool)){&$GJEffectManager::prepareMoveActions} != (void(D::*)(float, bool)){&D::prepareMoveActions})
        return reinterpret_cast<void(*)(decltype(this), float, bool)>(m->getOriginal(base+0x183660))(this, p0, p1);
    else return GJEffectManager::prepareMoveActions(p0, p1);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::processColors() {
    if ((void($GJEffectManager::*)()){&$GJEffectManager::processColors} != (void(D::*)()){&D::processColors})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x180e70))(this);
    else return GJEffectManager::processColors();
}

template<class D, void*** V>
void $GJEffectManager<D, V>::processCopyColorPulseActions() {
    if ((void($GJEffectManager::*)()){&$GJEffectManager::processCopyColorPulseActions} != (void(D::*)()){&D::processCopyColorPulseActions})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x181530))(this);
    else return GJEffectManager::processCopyColorPulseActions();
}

template<class D, void*** V>
void $GJEffectManager<D, V>::processInheritedColors() {
    if ((void($GJEffectManager::*)()){&$GJEffectManager::processInheritedColors} != (void(D::*)()){&D::processInheritedColors})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x181190))(this);
    else return GJEffectManager::processInheritedColors();
}

template<class D, void*** V>
void $GJEffectManager<D, V>::processPulseActions() {
    if ((void($GJEffectManager::*)()){&$GJEffectManager::processPulseActions} != (void(D::*)()){&D::processPulseActions})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x181040))(this);
    else return GJEffectManager::processPulseActions();
}

template<class D, void*** V>
void $GJEffectManager<D, V>::registerCollisionTrigger(int p0, int p1, int p2, bool p3, bool p4, int p5) {
    if ((void($GJEffectManager::*)(int, int, int, bool, bool, int)){&$GJEffectManager::registerCollisionTrigger} != (void(D::*)(int, int, int, bool, bool, int)){&D::registerCollisionTrigger})
        return reinterpret_cast<void(*)(decltype(this), int, int, int, bool, bool, int)>(m->getOriginal(base+0x182b70))(this, p0, p1, p2, p3, p4, p5);
    else return GJEffectManager::registerCollisionTrigger(p0, p1, p2, p3, p4, p5);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::removeAllPulseActions() {
    if ((void($GJEffectManager::*)()){&$GJEffectManager::removeAllPulseActions} != (void(D::*)()){&D::removeAllPulseActions})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x1825e0))(this);
    else return GJEffectManager::removeAllPulseActions();
}

template<class D, void*** V>
void $GJEffectManager<D, V>::removeColorAction(int p0) {
    if ((void($GJEffectManager::*)(int)){&$GJEffectManager::removeColorAction} != (void(D::*)(int)){&D::removeColorAction})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x181d60))(this, p0);
    else return GJEffectManager::removeColorAction(p0);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::reset() {
    if ((void($GJEffectManager::*)()){&$GJEffectManager::reset} != (void(D::*)()){&D::reset})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x180690))(this);
    else return GJEffectManager::reset();
}

template<class D, void*** V>
void $GJEffectManager<D, V>::resetColorCache() {
    if ((void($GJEffectManager::*)()){&$GJEffectManager::resetColorCache} != (void(D::*)()){&D::resetColorCache})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x185280))(this);
    else return GJEffectManager::resetColorCache();
}

template<class D, void*** V>
void $GJEffectManager<D, V>::resetEffects() {
    if ((void($GJEffectManager::*)()){&$GJEffectManager::resetEffects} != (void(D::*)()){&D::resetEffects})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x1807d0))(this);
    else return GJEffectManager::resetEffects();
}

template<class D, void*** V>
void $GJEffectManager<D, V>::resetMoveActions() {
    if ((void($GJEffectManager::*)()){&$GJEffectManager::resetMoveActions} != (void(D::*)()){&D::resetMoveActions})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x180940))(this);
    else return GJEffectManager::resetMoveActions();
}

template<class D, void*** V>
void $GJEffectManager<D, V>::resetToggledGroups() {
    if ((void($GJEffectManager::*)()){&$GJEffectManager::resetToggledGroups} != (void(D::*)()){&D::resetToggledGroups})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x1853f0))(this);
    else return GJEffectManager::resetToggledGroups();
}

template<class D, void*** V>
void $GJEffectManager<D, V>::resetTriggeredIDs() {
    if ((void($GJEffectManager::*)()){&$GJEffectManager::resetTriggeredIDs} != (void(D::*)()){&D::resetTriggeredIDs})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x182630))(this);
    else return GJEffectManager::resetTriggeredIDs();
}

template<class D, void*** V>
void $GJEffectManager<D, V>::runCountTrigger(int p0, int p1, bool p2, int p3, bool p4, int p5) {
    if ((void($GJEffectManager::*)(int, int, bool, int, bool, int)){&$GJEffectManager::runCountTrigger} != (void(D::*)(int, int, bool, int, bool, int)){&D::runCountTrigger})
        return reinterpret_cast<void(*)(decltype(this), int, int, bool, int, bool, int)>(m->getOriginal(base+0x1858d0))(this, p0, p1, p2, p3, p4, p5);
    else return GJEffectManager::runCountTrigger(p0, p1, p2, p3, p4, p5);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::runDeathTrigger(int p0, bool p1, int p2) {
    if ((void($GJEffectManager::*)(int, bool, int)){&$GJEffectManager::runDeathTrigger} != (void(D::*)(int, bool, int)){&D::runDeathTrigger})
        return reinterpret_cast<void(*)(decltype(this), int, bool, int)>(m->getOriginal(base+0x1857a0))(this, p0, p1, p2);
    else return GJEffectManager::runDeathTrigger(p0, p1, p2);
}

template<class D, void*** V>
OpacityEffectAction* $GJEffectManager<D, V>::runOpacityActionOnGroup(int p0, float p1, float p2, int p3) {
    if ((OpacityEffectAction*($GJEffectManager::*)(int, float, float, int)){&$GJEffectManager::runOpacityActionOnGroup} != (OpacityEffectAction*(D::*)(int, float, float, int)){&D::runOpacityActionOnGroup})
        return reinterpret_cast<OpacityEffectAction*(*)(decltype(this), int, float, float, int)>(m->getOriginal(base+0x1845d0))(this, p0, p1, p2, p3);
    else return GJEffectManager::runOpacityActionOnGroup(p0, p1, p2, p3);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::runPulseEffect(int p0, bool p1, float p2, float p3, float p4, PulseEffectType p5, cocos2d::_ccColor3B p6, cocos2d::_ccHSVValue p7, int p8, bool p9, bool p10, bool p11, int p12) {
    if ((void($GJEffectManager::*)(int, bool, float, float, float, PulseEffectType, cocos2d::_ccColor3B, cocos2d::_ccHSVValue, int, bool, bool, bool, int)){&$GJEffectManager::runPulseEffect} != (void(D::*)(int, bool, float, float, float, PulseEffectType, cocos2d::_ccColor3B, cocos2d::_ccHSVValue, int, bool, bool, bool, int)){&D::runPulseEffect})
        return reinterpret_cast<void(*)(decltype(this), int, bool, float, float, float, PulseEffectType, cocos2d::_ccColor3B, cocos2d::_ccHSVValue, int, bool, bool, bool, int)>(m->getOriginal(base+0x184890))(this, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);
    else return GJEffectManager::runPulseEffect(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::runTouchTriggerCommand(int p0, bool p1, TouchTriggerType p2, bool p3, int p4) {
    if ((void($GJEffectManager::*)(int, bool, TouchTriggerType, bool, int)){&$GJEffectManager::runTouchTriggerCommand} != (void(D::*)(int, bool, TouchTriggerType, bool, int)){&D::runTouchTriggerCommand})
        return reinterpret_cast<void(*)(decltype(this), int, bool, TouchTriggerType, bool, int)>(m->getOriginal(base+0x185460))(this, p0, p1, p2, p3, p4);
    else return GJEffectManager::runTouchTriggerCommand(p0, p1, p2, p3, p4);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::setColorAction(ColorAction* p0, int p1) {
    if ((void($GJEffectManager::*)(ColorAction*, int)){&$GJEffectManager::setColorAction} != (void(D::*)(ColorAction*, int)){&D::setColorAction})
        return reinterpret_cast<void(*)(decltype(this), ColorAction*, int)>(m->getOriginal(base+0x181d00))(this, p0, p1);
    else return GJEffectManager::setColorAction(p0, p1);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::setFollowing(int p0, int p1, bool p2) {
    if ((void($GJEffectManager::*)(int, int, bool)){&$GJEffectManager::setFollowing} != (void(D::*)(int, int, bool)){&D::setFollowing})
        return reinterpret_cast<void(*)(decltype(this), int, int, bool)>(m->getOriginal(base+0x185e00))(this, p0, p1, p2);
    else return GJEffectManager::setFollowing(p0, p1, p2);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::setupFromString(std::string p0) {
    if ((void($GJEffectManager::*)(std::string)){&$GJEffectManager::setupFromString} != (void(D::*)(std::string)){&D::setupFromString})
        return reinterpret_cast<void(*)(decltype(this), std::string)>(m->getOriginal(base+0x186290))(this, p0);
    else return GJEffectManager::setupFromString(p0);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::shouldBlend(int p0) {
    if ((void($GJEffectManager::*)(int)){&$GJEffectManager::shouldBlend} != (void(D::*)(int)){&D::shouldBlend})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x180e40))(this, p0);
    else return GJEffectManager::shouldBlend(p0);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::spawnGroup(int p0, float p1, int p2) {
    if ((void($GJEffectManager::*)(int, float, int)){&$GJEffectManager::spawnGroup} != (void(D::*)(int, float, int)){&D::spawnGroup})
        return reinterpret_cast<void(*)(decltype(this), int, float, int)>(m->getOriginal(base+0x1852a0))(this, p0, p1, p2);
    else return GJEffectManager::spawnGroup(p0, p1, p2);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::stopActionsForTrigger(EffectGameObject* p0) {
    if ((void($GJEffectManager::*)(EffectGameObject*)){&$GJEffectManager::stopActionsForTrigger} != (void(D::*)(EffectGameObject*)){&D::stopActionsForTrigger})
        return reinterpret_cast<void(*)(decltype(this), EffectGameObject*)>(m->getOriginal(base+0x183150))(this, p0);
    else return GJEffectManager::stopActionsForTrigger(p0);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::stopMoveActionsForGroup(int p0) {
    if ((void($GJEffectManager::*)(int)){&$GJEffectManager::stopMoveActionsForGroup} != (void(D::*)(int)){&D::stopMoveActionsForGroup})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x1830e0))(this, p0);
    else return GJEffectManager::stopMoveActionsForGroup(p0);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::storeTriggeredID(int p0) {
    if ((void($GJEffectManager::*)(int)){&$GJEffectManager::storeTriggeredID} != (void(D::*)(int)){&D::storeTriggeredID})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x185380))(this, p0);
    else return GJEffectManager::storeTriggeredID(p0);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::toggleGroup(int p0, bool p1) {
    if ((void($GJEffectManager::*)(int, bool)){&$GJEffectManager::toggleGroup} != (void(D::*)(int, bool)){&D::toggleGroup})
        return reinterpret_cast<void(*)(decltype(this), int, bool)>(m->getOriginal(base+0x182c80))(this, p0, p1);
    else return GJEffectManager::toggleGroup(p0, p1);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::traverseInheritanceChain(InheritanceNode* p0) {
    if ((void($GJEffectManager::*)(InheritanceNode*)){&$GJEffectManager::traverseInheritanceChain} != (void(D::*)(InheritanceNode*)){&D::traverseInheritanceChain})
        return reinterpret_cast<void(*)(decltype(this), InheritanceNode*)>(m->getOriginal(base+0x181850))(this, p0);
    else return GJEffectManager::traverseInheritanceChain(p0);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::updateActiveOpacityEffects() {
    if ((void($GJEffectManager::*)()){&$GJEffectManager::updateActiveOpacityEffects} != (void(D::*)()){&D::updateActiveOpacityEffects})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x1847e0))(this);
    else return GJEffectManager::updateActiveOpacityEffects();
}

template<class D, void*** V>
void $GJEffectManager<D, V>::updateColorAction(ColorAction* p0) {
    if ((void($GJEffectManager::*)(ColorAction*)){&$GJEffectManager::updateColorAction} != (void(D::*)(ColorAction*)){&D::updateColorAction})
        return reinterpret_cast<void(*)(decltype(this), ColorAction*)>(m->getOriginal(base+0x184560))(this, p0);
    else return GJEffectManager::updateColorAction(p0);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::updateColorEffects(float p0) {
    if ((void($GJEffectManager::*)(float)){&$GJEffectManager::updateColorEffects} != (void(D::*)(float)){&D::updateColorEffects})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x181f40))(this, p0);
    else return GJEffectManager::updateColorEffects(p0);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::updateColors(cocos2d::_ccColor3B p0, cocos2d::_ccColor3B p1) {
    if ((void($GJEffectManager::*)(cocos2d::_ccColor3B, cocos2d::_ccColor3B)){&$GJEffectManager::updateColors} != (void(D::*)(cocos2d::_ccColor3B, cocos2d::_ccColor3B)){&D::updateColors})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::_ccColor3B, cocos2d::_ccColor3B)>(m->getOriginal(base+0x180a40))(this, p0, p1);
    else return GJEffectManager::updateColors(p0, p1);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::updateEffects(float p0) {
    if ((void($GJEffectManager::*)(float)){&$GJEffectManager::updateEffects} != (void(D::*)(float)){&D::updateEffects})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x181df0))(this, p0);
    else return GJEffectManager::updateEffects(p0);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::updateOpacityAction(OpacityEffectAction* p0) {
    if ((void($GJEffectManager::*)(OpacityEffectAction*)){&$GJEffectManager::updateOpacityAction} != (void(D::*)(OpacityEffectAction*)){&D::updateOpacityAction})
        return reinterpret_cast<void(*)(decltype(this), OpacityEffectAction*)>(m->getOriginal(base+0x184780))(this, p0);
    else return GJEffectManager::updateOpacityAction(p0);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::updateOpacityEffects(float p0) {
    if ((void($GJEffectManager::*)(float)){&$GJEffectManager::updateOpacityEffects} != (void(D::*)(float)){&D::updateOpacityEffects})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x1823e0))(this, p0);
    else return GJEffectManager::updateOpacityEffects(p0);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::updatePulseEffects(float p0) {
    if ((void($GJEffectManager::*)(float)){&$GJEffectManager::updatePulseEffects} != (void(D::*)(float)){&D::updatePulseEffects})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x182130))(this, p0);
    else return GJEffectManager::updatePulseEffects(p0);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::updateSpawnTriggers(float p0) {
    if ((void($GJEffectManager::*)(float)){&$GJEffectManager::updateSpawnTriggers} != (void(D::*)(float)){&D::updateSpawnTriggers})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x182510))(this, p0);
    else return GJEffectManager::updateSpawnTriggers(p0);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::wasFollowing(int p0, int p1) {
    if ((void($GJEffectManager::*)(int, int)){&$GJEffectManager::wasFollowing} != (void(D::*)(int, int)){&D::wasFollowing})
        return reinterpret_cast<void(*)(decltype(this), int, int)>(m->getOriginal(base+0x185e60))(this, p0, p1);
    else return GJEffectManager::wasFollowing(p0, p1);
}

template<class D, void*** V>
void $GJEffectManager<D, V>::wouldCreateLoop(InheritanceNode* p0, int p1) {
    if ((void($GJEffectManager::*)(InheritanceNode*, int)){&$GJEffectManager::wouldCreateLoop} != (void(D::*)(InheritanceNode*, int)){&D::wouldCreateLoop})
        return reinterpret_cast<void(*)(decltype(this), InheritanceNode*, int)>(m->getOriginal(base+0x181820))(this, p0, p1);
    else return GJEffectManager::wouldCreateLoop(p0, p1);
}


template<class D, void*** V>
$GJFollowCommandLayer<D, V>::~$GJFollowCommandLayer() {}

template<class D, void*** V>
$GJFollowCommandLayer<D, V>::$GJFollowCommandLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((GJFollowCommandLayer*(*)(EffectGameObject*, cocos2d::CCArray*)){&$GJFollowCommandLayer::create} != (GJFollowCommandLayer*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        m->registerHook(base+0x16a550, (GJFollowCommandLayer*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create});

    if ((void($GJFollowCommandLayer::*)(cocos2d::CCObject*)){&$GJFollowCommandLayer::onUpdateGroupID} != (void(D::*)(cocos2d::CCObject*)){&D::onUpdateGroupID})
        m->registerHook(base+0x16c8f0, extract((void(D::*)(cocos2d::CCObject*)){&D::onUpdateGroupID}));

    if ((void($GJFollowCommandLayer::*)(cocos2d::CCObject*)){&$GJFollowCommandLayer::onUpdateGroupID2} != (void(D::*)(cocos2d::CCObject*)){&D::onUpdateGroupID2})
        m->registerHook(base+0x16c9e0, extract((void(D::*)(cocos2d::CCObject*)){&D::onUpdateGroupID2}));

    if ((void($GJFollowCommandLayer::*)(CCTextInputNode*)){&$GJFollowCommandLayer::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        m->registerHook(base+0x16d480, extract((void(D::*)(CCTextInputNode*)){&D::textChanged}));

    if ((void($GJFollowCommandLayer::*)()){&$GJFollowCommandLayer::updateTargetGroupID} != (void(D::*)()){&D::updateTargetGroupID})
        m->registerHook(base+0x16cfe0, extract((void(D::*)()){&D::updateTargetGroupID}));

    if ((void($GJFollowCommandLayer::*)()){&$GJFollowCommandLayer::updateTargetGroupID2} != (void(D::*)()){&D::updateTargetGroupID2})
        m->registerHook(base+0x16d1c0, extract((void(D::*)()){&D::updateTargetGroupID2}));
}

template<class D, void*** V>
GJFollowCommandLayer* $GJFollowCommandLayer<D, V>::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    if ((GJFollowCommandLayer*(*)(EffectGameObject*, cocos2d::CCArray*)){&$GJFollowCommandLayer::create} != (GJFollowCommandLayer*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        return reinterpret_cast<GJFollowCommandLayer*(*)(EffectGameObject*, cocos2d::CCArray*)>(m->getOriginal(base+0x16a550))(p0, p1);
    else return GJFollowCommandLayer::create(p0, p1);
}

template<class D, void*** V>
void $GJFollowCommandLayer<D, V>::onUpdateGroupID(cocos2d::CCObject* p0) {
    if ((void($GJFollowCommandLayer::*)(cocos2d::CCObject*)){&$GJFollowCommandLayer::onUpdateGroupID} != (void(D::*)(cocos2d::CCObject*)){&D::onUpdateGroupID})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x16c8f0))(this, p0);
    else return GJFollowCommandLayer::onUpdateGroupID(p0);
}

template<class D, void*** V>
void $GJFollowCommandLayer<D, V>::onUpdateGroupID2(cocos2d::CCObject* p0) {
    if ((void($GJFollowCommandLayer::*)(cocos2d::CCObject*)){&$GJFollowCommandLayer::onUpdateGroupID2} != (void(D::*)(cocos2d::CCObject*)){&D::onUpdateGroupID2})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x16c9e0))(this, p0);
    else return GJFollowCommandLayer::onUpdateGroupID2(p0);
}

template<class D, void*** V>
void $GJFollowCommandLayer<D, V>::textChanged(CCTextInputNode* p0) {
    if ((void($GJFollowCommandLayer::*)(CCTextInputNode*)){&$GJFollowCommandLayer::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        return reinterpret_cast<void(*)(decltype(this), CCTextInputNode*)>(m->getOriginal(base+0x16d480))(this, p0);
    else return GJFollowCommandLayer::textChanged(p0);
}

template<class D, void*** V>
void $GJFollowCommandLayer<D, V>::updateTargetGroupID() {
    if ((void($GJFollowCommandLayer::*)()){&$GJFollowCommandLayer::updateTargetGroupID} != (void(D::*)()){&D::updateTargetGroupID})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x16cfe0))(this);
    else return GJFollowCommandLayer::updateTargetGroupID();
}

template<class D, void*** V>
void $GJFollowCommandLayer<D, V>::updateTargetGroupID2() {
    if ((void($GJFollowCommandLayer::*)()){&$GJFollowCommandLayer::updateTargetGroupID2} != (void(D::*)()){&D::updateTargetGroupID2})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x16d1c0))(this);
    else return GJFollowCommandLayer::updateTargetGroupID2();
}


template<class D, void*** V>
$GJGameLevel<D, V>::~$GJGameLevel() {}

template<class D, void*** V>
$GJGameLevel<D, V>::$GJGameLevel() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((GJGameLevel*(*)()){&$GJGameLevel::create} != (GJGameLevel*(*)()){&D::create})
        m->registerHook(base+0x2b83e0, (GJGameLevel*(*)()){&D::create});

    if ((void($GJGameLevel::*)()){&$GJGameLevel::getAudioFileName} != (void(D::*)()){&D::getAudioFileName})
        m->registerHook(base+0x2dbe70, extract((void(D::*)()){&D::getAudioFileName}));

    if ((void($GJGameLevel::*)(int)){&$GJGameLevel::getCoinKey} != (void(D::*)(int)){&D::getCoinKey})
        m->registerHook(base+0x2ce360, extract((void(D::*)(int)){&D::getCoinKey}));

    if ((void($GJGameLevel::*)(int)){&$GJGameLevel::getLengthKey} != (void(D::*)(int)){&D::getLengthKey})
        m->registerHook(base+0x2dbba0, extract((void(D::*)(int)){&D::getLengthKey}));

    if ((void($GJGameLevel::*)()){&$GJGameLevel::getNormalPercent} != (void(D::*)()){&D::getNormalPercent})
        m->registerHook(base+0x2b8b20, extract((void(D::*)()){&D::getNormalPercent}));

    if ((void($GJGameLevel::*)()){&$GJGameLevel::levelWasAltered} != (void(D::*)()){&D::levelWasAltered})
        m->registerHook(base+0x2db530, extract((void(D::*)()){&D::levelWasAltered}));

    if ((void($GJGameLevel::*)(int, bool, int, int, bool)){&$GJGameLevel::savePercentage} != (void(D::*)(int, bool, int, int, bool)){&D::savePercentage})
        m->registerHook(base+0x2db700, extract((void(D::*)(int, bool, int, int, bool)){&D::savePercentage}));
}

template<class D, void*** V>
GJGameLevel* $GJGameLevel<D, V>::create() {
    if ((GJGameLevel*(*)()){&$GJGameLevel::create} != (GJGameLevel*(*)()){&D::create})
        return reinterpret_cast<GJGameLevel*(*)()>(m->getOriginal(base+0x2b83e0))();
    else return GJGameLevel::create();
}

template<class D, void*** V>
void $GJGameLevel<D, V>::getAudioFileName() {
    if ((void($GJGameLevel::*)()){&$GJGameLevel::getAudioFileName} != (void(D::*)()){&D::getAudioFileName})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x2dbe70))(this);
    else return GJGameLevel::getAudioFileName();
}

template<class D, void*** V>
void $GJGameLevel<D, V>::getCoinKey(int p0) {
    if ((void($GJGameLevel::*)(int)){&$GJGameLevel::getCoinKey} != (void(D::*)(int)){&D::getCoinKey})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x2ce360))(this, p0);
    else return GJGameLevel::getCoinKey(p0);
}

template<class D, void*** V>
void $GJGameLevel<D, V>::getLengthKey(int p0) {
    if ((void($GJGameLevel::*)(int)){&$GJGameLevel::getLengthKey} != (void(D::*)(int)){&D::getLengthKey})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x2dbba0))(this, p0);
    else return GJGameLevel::getLengthKey(p0);
}

template<class D, void*** V>
void $GJGameLevel<D, V>::getNormalPercent() {
    if ((void($GJGameLevel::*)()){&$GJGameLevel::getNormalPercent} != (void(D::*)()){&D::getNormalPercent})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x2b8b20))(this);
    else return GJGameLevel::getNormalPercent();
}

template<class D, void*** V>
void $GJGameLevel<D, V>::levelWasAltered() {
    if ((void($GJGameLevel::*)()){&$GJGameLevel::levelWasAltered} != (void(D::*)()){&D::levelWasAltered})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x2db530))(this);
    else return GJGameLevel::levelWasAltered();
}

template<class D, void*** V>
void $GJGameLevel<D, V>::savePercentage(int p0, bool p1, int p2, int p3, bool p4) {
    if ((void($GJGameLevel::*)(int, bool, int, int, bool)){&$GJGameLevel::savePercentage} != (void(D::*)(int, bool, int, int, bool)){&D::savePercentage})
        return reinterpret_cast<void(*)(decltype(this), int, bool, int, int, bool)>(m->getOriginal(base+0x2db700))(this, p0, p1, p2, p3, p4);
    else return GJGameLevel::savePercentage(p0, p1, p2, p3, p4);
}


template<class D, void*** V>
$GJGroundLayer<D, V>::~$GJGroundLayer() {}

template<class D, void*** V>
$GJGroundLayer<D, V>::$GJGroundLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((GJGroundLayer*(*)(int, int)){&$GJGroundLayer::create} != (GJGroundLayer*(*)(int, int)){&D::create})
        m->registerHook(base+0x355c00, (GJGroundLayer*(*)(int, int)){&D::create});

    if ((void($GJGroundLayer::*)(int)){&$GJGroundLayer::createLine} != (void(D::*)(int)){&D::createLine})
        m->registerHook(base+0x356220, extract((void(D::*)(int)){&D::createLine}));

    if ((void($GJGroundLayer::*)()){&$GJGroundLayer::deactivateGround} != (void(D::*)()){&D::deactivateGround})
        m->registerHook(base+0x356a40, extract((void(D::*)()){&D::deactivateGround}));

    if ((void($GJGroundLayer::*)()){&$GJGroundLayer::getGroundY} != (void(D::*)()){&D::getGroundY})
        m->registerHook(base+0x356ac0, extract((void(D::*)()){&D::getGroundY}));

    if ((bool($GJGroundLayer::*)(int, int)){&$GJGroundLayer::init} != (bool(D::*)(int, int)){&D::init})
        m->registerHook(base+0x355d10, extract((bool(D::*)(int, int)){&D::init}));

    if ((void($GJGroundLayer::*)(int, bool)){&$GJGroundLayer::loadGroundSprites} != (void(D::*)(int, bool)){&D::loadGroundSprites})
        m->registerHook(base+0x3563d0, extract((void(D::*)(int, bool)){&D::loadGroundSprites}));

    if ((void($GJGroundLayer::*)(cocos2d::_ccColor3B)){&$GJGroundLayer::updateGround01Color} != (void(D::*)(cocos2d::_ccColor3B)){&D::updateGround01Color})
        m->registerHook(base+0x356640, extract((void(D::*)(cocos2d::_ccColor3B)){&D::updateGround01Color}));

    if ((void($GJGroundLayer::*)(cocos2d::_ccColor3B)){&$GJGroundLayer::updateGround02Color} != (void(D::*)(cocos2d::_ccColor3B)){&D::updateGround02Color})
        m->registerHook(base+0x356710, extract((void(D::*)(cocos2d::_ccColor3B)){&D::updateGround02Color}));

    if ((void($GJGroundLayer::*)(cocos2d::CCPoint)){&$GJGroundLayer::updateGroundPos} != (void(D::*)(cocos2d::CCPoint)){&D::updateGroundPos})
        m->registerHook(base+0x3566c0, extract((void(D::*)(cocos2d::CCPoint)){&D::updateGroundPos}));

    if ((void($GJGroundLayer::*)()){&$GJGroundLayer::updateGroundWidth} != (void(D::*)()){&D::updateGroundWidth})
        m->registerHook(base+0x356790, extract((void(D::*)()){&D::updateGroundWidth}));
}

template<class D, void*** V>
GJGroundLayer* $GJGroundLayer<D, V>::create(int p0, int p1) {
    if ((GJGroundLayer*(*)(int, int)){&$GJGroundLayer::create} != (GJGroundLayer*(*)(int, int)){&D::create})
        return reinterpret_cast<GJGroundLayer*(*)(int, int)>(m->getOriginal(base+0x355c00))(p0, p1);
    else return GJGroundLayer::create(p0, p1);
}

template<class D, void*** V>
void $GJGroundLayer<D, V>::createLine(int p0) {
    if ((void($GJGroundLayer::*)(int)){&$GJGroundLayer::createLine} != (void(D::*)(int)){&D::createLine})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x356220))(this, p0);
    else return GJGroundLayer::createLine(p0);
}

template<class D, void*** V>
void $GJGroundLayer<D, V>::deactivateGround() {
    if ((void($GJGroundLayer::*)()){&$GJGroundLayer::deactivateGround} != (void(D::*)()){&D::deactivateGround})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x356a40))(this);
    else return GJGroundLayer::deactivateGround();
}

template<class D, void*** V>
void $GJGroundLayer<D, V>::getGroundY() {
    if ((void($GJGroundLayer::*)()){&$GJGroundLayer::getGroundY} != (void(D::*)()){&D::getGroundY})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x356ac0))(this);
    else return GJGroundLayer::getGroundY();
}

template<class D, void*** V>
bool $GJGroundLayer<D, V>::init(int p0, int p1) {
    if ((bool($GJGroundLayer::*)(int, int)){&$GJGroundLayer::init} != (bool(D::*)(int, int)){&D::init})
        return reinterpret_cast<bool(*)(decltype(this), int, int)>(m->getOriginal(base+0x355d10))(this, p0, p1);
    else return GJGroundLayer::init(p0, p1);
}

template<class D, void*** V>
void $GJGroundLayer<D, V>::loadGroundSprites(int p0, bool p1) {
    if ((void($GJGroundLayer::*)(int, bool)){&$GJGroundLayer::loadGroundSprites} != (void(D::*)(int, bool)){&D::loadGroundSprites})
        return reinterpret_cast<void(*)(decltype(this), int, bool)>(m->getOriginal(base+0x3563d0))(this, p0, p1);
    else return GJGroundLayer::loadGroundSprites(p0, p1);
}

template<class D, void*** V>
void $GJGroundLayer<D, V>::updateGround01Color(cocos2d::_ccColor3B p0) {
    if ((void($GJGroundLayer::*)(cocos2d::_ccColor3B)){&$GJGroundLayer::updateGround01Color} != (void(D::*)(cocos2d::_ccColor3B)){&D::updateGround01Color})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::_ccColor3B)>(m->getOriginal(base+0x356640))(this, p0);
    else return GJGroundLayer::updateGround01Color(p0);
}

template<class D, void*** V>
void $GJGroundLayer<D, V>::updateGround02Color(cocos2d::_ccColor3B p0) {
    if ((void($GJGroundLayer::*)(cocos2d::_ccColor3B)){&$GJGroundLayer::updateGround02Color} != (void(D::*)(cocos2d::_ccColor3B)){&D::updateGround02Color})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::_ccColor3B)>(m->getOriginal(base+0x356710))(this, p0);
    else return GJGroundLayer::updateGround02Color(p0);
}

template<class D, void*** V>
void $GJGroundLayer<D, V>::updateGroundPos(cocos2d::CCPoint p0) {
    if ((void($GJGroundLayer::*)(cocos2d::CCPoint)){&$GJGroundLayer::updateGroundPos} != (void(D::*)(cocos2d::CCPoint)){&D::updateGroundPos})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCPoint)>(m->getOriginal(base+0x3566c0))(this, p0);
    else return GJGroundLayer::updateGroundPos(p0);
}

template<class D, void*** V>
void $GJGroundLayer<D, V>::updateGroundWidth() {
    if ((void($GJGroundLayer::*)()){&$GJGroundLayer::updateGroundWidth} != (void(D::*)()){&D::updateGroundWidth})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x356790))(this);
    else return GJGroundLayer::updateGroundWidth();
}


template<class D, void*** V>
$GJListLayer<D, V>::~$GJListLayer() {}

template<class D, void*** V>
$GJListLayer<D, V>::$GJListLayer() {
    m->registerHook(extract_destructor(V), +[](){});
}


template<class D, void*** V>
$GJMoveCommandLayer<D, V>::~$GJMoveCommandLayer() {}

template<class D, void*** V>
$GJMoveCommandLayer<D, V>::$GJMoveCommandLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((GJMoveCommandLayer*(*)(EffectGameObject*, cocos2d::CCArray*)){&$GJMoveCommandLayer::create} != (GJMoveCommandLayer*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        m->registerHook(base+0x36f8a0, (GJMoveCommandLayer*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create});

    if ((bool($GJMoveCommandLayer::*)(EffectGameObject*, cocos2d::CCArray*)){&$GJMoveCommandLayer::init} != (bool(D::*)(EffectGameObject*, cocos2d::CCArray*)){&D::init})
        m->registerHook(base+0x36fac0, extract((bool(D::*)(EffectGameObject*, cocos2d::CCArray*)){&D::init}));

    if ((void($GJMoveCommandLayer::*)()){&$GJMoveCommandLayer::keyBackClicked} != (void(D::*)()){&D::keyBackClicked})
        m->registerHook(base+0x374970, extract((void(D::*)()){&D::keyBackClicked}));

    if ((void($GJMoveCommandLayer::*)(cocos2d::CCObject*)){&$GJMoveCommandLayer::onUpdateGroupID} != (void(D::*)(cocos2d::CCObject*)){&D::onUpdateGroupID})
        m->registerHook(base+0x373350, extract((void(D::*)(cocos2d::CCObject*)){&D::onUpdateGroupID}));

    if ((void($GJMoveCommandLayer::*)(cocos2d::CCObject*)){&$GJMoveCommandLayer::onUpdateGroupID2} != (void(D::*)(cocos2d::CCObject*)){&D::onUpdateGroupID2})
        m->registerHook(base+0x3734c0, extract((void(D::*)(cocos2d::CCObject*)){&D::onUpdateGroupID2}));

    if ((void($GJMoveCommandLayer::*)(CCTextInputNode*)){&$GJMoveCommandLayer::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        m->registerHook(base+0x374470, extract((void(D::*)(CCTextInputNode*)){&D::textChanged}));

    if ((void($GJMoveCommandLayer::*)(CCTextInputNode*)){&$GJMoveCommandLayer::textInputClosed} != (void(D::*)(CCTextInputNode*)){&D::textInputClosed})
        m->registerHook(base+0x374430, extract((void(D::*)(CCTextInputNode*)){&D::textInputClosed}));

    if ((void($GJMoveCommandLayer::*)(CCTextInputNode*)){&$GJMoveCommandLayer::textInputReturn} != (void(D::*)(CCTextInputNode*)){&D::textInputReturn})
        m->registerHook(base+0x374c10, extract((void(D::*)(CCTextInputNode*)){&D::textInputReturn}));

    if ((void($GJMoveCommandLayer::*)(CCTextInputNode*, float)){&$GJMoveCommandLayer::textInputShouldOffset} != (void(D::*)(CCTextInputNode*, float)){&D::textInputShouldOffset})
        m->registerHook(base+0x374b50, extract((void(D::*)(CCTextInputNode*, float)){&D::textInputShouldOffset}));

    if ((void($GJMoveCommandLayer::*)()){&$GJMoveCommandLayer::updateEditorLabel} != (void(D::*)()){&D::updateEditorLabel})
        m->registerHook(base+0x374110, extract((void(D::*)()){&D::updateEditorLabel}));

    if ((void($GJMoveCommandLayer::*)()){&$GJMoveCommandLayer::updateMoveTargetElements} != (void(D::*)()){&D::updateMoveTargetElements})
        m->registerHook(base+0x373ac0, extract((void(D::*)()){&D::updateMoveTargetElements}));

    if ((void($GJMoveCommandLayer::*)()){&$GJMoveCommandLayer::updateTargetGroupID} != (void(D::*)()){&D::updateTargetGroupID})
        m->registerHook(base+0x374050, extract((void(D::*)()){&D::updateTargetGroupID}));

    if ((void($GJMoveCommandLayer::*)()){&$GJMoveCommandLayer::updateTargetGroupID2} != (void(D::*)()){&D::updateTargetGroupID2})
        m->registerHook(base+0x374230, extract((void(D::*)()){&D::updateTargetGroupID2}));

    if ((void($GJMoveCommandLayer::*)()){&$GJMoveCommandLayer::updateTextInputLabel} != (void(D::*)()){&D::updateTextInputLabel})
        m->registerHook(base+0x373680, extract((void(D::*)()){&D::updateTextInputLabel}));

    if ((void($GJMoveCommandLayer::*)()){&$GJMoveCommandLayer::updateTextInputLabel2} != (void(D::*)()){&D::updateTextInputLabel2})
        m->registerHook(base+0x373760, extract((void(D::*)()){&D::updateTextInputLabel2}));

    if ((void($GJMoveCommandLayer::*)()){&$GJMoveCommandLayer::updateValueXLabel} != (void(D::*)()){&D::updateValueXLabel})
        m->registerHook(base+0x373840, extract((void(D::*)()){&D::updateValueXLabel}));

    if ((void($GJMoveCommandLayer::*)()){&$GJMoveCommandLayer::updateValueYLabel} != (void(D::*)()){&D::updateValueYLabel})
        m->registerHook(base+0x373950, extract((void(D::*)()){&D::updateValueYLabel}));

    if ((void($GJMoveCommandLayer::*)(ConfigureValuePopup*, float)){&$GJMoveCommandLayer::valuePopupClosed} != (void(D::*)(ConfigureValuePopup*, float)){&D::valuePopupClosed})
        m->registerHook(base+0x373c20, extract((void(D::*)(ConfigureValuePopup*, float)){&D::valuePopupClosed}));
}

template<class D, void*** V>
GJMoveCommandLayer* $GJMoveCommandLayer<D, V>::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    if ((GJMoveCommandLayer*(*)(EffectGameObject*, cocos2d::CCArray*)){&$GJMoveCommandLayer::create} != (GJMoveCommandLayer*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        return reinterpret_cast<GJMoveCommandLayer*(*)(EffectGameObject*, cocos2d::CCArray*)>(m->getOriginal(base+0x36f8a0))(p0, p1);
    else return GJMoveCommandLayer::create(p0, p1);
}

template<class D, void*** V>
bool $GJMoveCommandLayer<D, V>::init(EffectGameObject* p0, cocos2d::CCArray* p1) {
    if ((bool($GJMoveCommandLayer::*)(EffectGameObject*, cocos2d::CCArray*)){&$GJMoveCommandLayer::init} != (bool(D::*)(EffectGameObject*, cocos2d::CCArray*)){&D::init})
        return reinterpret_cast<bool(*)(decltype(this), EffectGameObject*, cocos2d::CCArray*)>(m->getOriginal(base+0x36fac0))(this, p0, p1);
    else return GJMoveCommandLayer::init(p0, p1);
}

template<class D, void*** V>
void $GJMoveCommandLayer<D, V>::keyBackClicked() {
    if ((void($GJMoveCommandLayer::*)()){&$GJMoveCommandLayer::keyBackClicked} != (void(D::*)()){&D::keyBackClicked})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x374970))(this);
    else return GJMoveCommandLayer::keyBackClicked();
}

template<class D, void*** V>
void $GJMoveCommandLayer<D, V>::onUpdateGroupID(cocos2d::CCObject* p0) {
    if ((void($GJMoveCommandLayer::*)(cocos2d::CCObject*)){&$GJMoveCommandLayer::onUpdateGroupID} != (void(D::*)(cocos2d::CCObject*)){&D::onUpdateGroupID})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x373350))(this, p0);
    else return GJMoveCommandLayer::onUpdateGroupID(p0);
}

template<class D, void*** V>
void $GJMoveCommandLayer<D, V>::onUpdateGroupID2(cocos2d::CCObject* p0) {
    if ((void($GJMoveCommandLayer::*)(cocos2d::CCObject*)){&$GJMoveCommandLayer::onUpdateGroupID2} != (void(D::*)(cocos2d::CCObject*)){&D::onUpdateGroupID2})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x3734c0))(this, p0);
    else return GJMoveCommandLayer::onUpdateGroupID2(p0);
}

template<class D, void*** V>
void $GJMoveCommandLayer<D, V>::textChanged(CCTextInputNode* p0) {
    if ((void($GJMoveCommandLayer::*)(CCTextInputNode*)){&$GJMoveCommandLayer::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        return reinterpret_cast<void(*)(decltype(this), CCTextInputNode*)>(m->getOriginal(base+0x374470))(this, p0);
    else return GJMoveCommandLayer::textChanged(p0);
}

template<class D, void*** V>
void $GJMoveCommandLayer<D, V>::textInputClosed(CCTextInputNode* p0) {
    if ((void($GJMoveCommandLayer::*)(CCTextInputNode*)){&$GJMoveCommandLayer::textInputClosed} != (void(D::*)(CCTextInputNode*)){&D::textInputClosed})
        return reinterpret_cast<void(*)(decltype(this), CCTextInputNode*)>(m->getOriginal(base+0x374430))(this, p0);
    else return GJMoveCommandLayer::textInputClosed(p0);
}

template<class D, void*** V>
void $GJMoveCommandLayer<D, V>::textInputReturn(CCTextInputNode* p0) {
    if ((void($GJMoveCommandLayer::*)(CCTextInputNode*)){&$GJMoveCommandLayer::textInputReturn} != (void(D::*)(CCTextInputNode*)){&D::textInputReturn})
        return reinterpret_cast<void(*)(decltype(this), CCTextInputNode*)>(m->getOriginal(base+0x374c10))(this, p0);
    else return GJMoveCommandLayer::textInputReturn(p0);
}

template<class D, void*** V>
void $GJMoveCommandLayer<D, V>::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    if ((void($GJMoveCommandLayer::*)(CCTextInputNode*, float)){&$GJMoveCommandLayer::textInputShouldOffset} != (void(D::*)(CCTextInputNode*, float)){&D::textInputShouldOffset})
        return reinterpret_cast<void(*)(decltype(this), CCTextInputNode*, float)>(m->getOriginal(base+0x374b50))(this, p0, p1);
    else return GJMoveCommandLayer::textInputShouldOffset(p0, p1);
}

template<class D, void*** V>
void $GJMoveCommandLayer<D, V>::updateEditorLabel() {
    if ((void($GJMoveCommandLayer::*)()){&$GJMoveCommandLayer::updateEditorLabel} != (void(D::*)()){&D::updateEditorLabel})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x374110))(this);
    else return GJMoveCommandLayer::updateEditorLabel();
}

template<class D, void*** V>
void $GJMoveCommandLayer<D, V>::updateMoveTargetElements() {
    if ((void($GJMoveCommandLayer::*)()){&$GJMoveCommandLayer::updateMoveTargetElements} != (void(D::*)()){&D::updateMoveTargetElements})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x373ac0))(this);
    else return GJMoveCommandLayer::updateMoveTargetElements();
}

template<class D, void*** V>
void $GJMoveCommandLayer<D, V>::updateTargetGroupID() {
    if ((void($GJMoveCommandLayer::*)()){&$GJMoveCommandLayer::updateTargetGroupID} != (void(D::*)()){&D::updateTargetGroupID})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x374050))(this);
    else return GJMoveCommandLayer::updateTargetGroupID();
}

template<class D, void*** V>
void $GJMoveCommandLayer<D, V>::updateTargetGroupID2() {
    if ((void($GJMoveCommandLayer::*)()){&$GJMoveCommandLayer::updateTargetGroupID2} != (void(D::*)()){&D::updateTargetGroupID2})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x374230))(this);
    else return GJMoveCommandLayer::updateTargetGroupID2();
}

template<class D, void*** V>
void $GJMoveCommandLayer<D, V>::updateTextInputLabel() {
    if ((void($GJMoveCommandLayer::*)()){&$GJMoveCommandLayer::updateTextInputLabel} != (void(D::*)()){&D::updateTextInputLabel})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x373680))(this);
    else return GJMoveCommandLayer::updateTextInputLabel();
}

template<class D, void*** V>
void $GJMoveCommandLayer<D, V>::updateTextInputLabel2() {
    if ((void($GJMoveCommandLayer::*)()){&$GJMoveCommandLayer::updateTextInputLabel2} != (void(D::*)()){&D::updateTextInputLabel2})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x373760))(this);
    else return GJMoveCommandLayer::updateTextInputLabel2();
}

template<class D, void*** V>
void $GJMoveCommandLayer<D, V>::updateValueXLabel() {
    if ((void($GJMoveCommandLayer::*)()){&$GJMoveCommandLayer::updateValueXLabel} != (void(D::*)()){&D::updateValueXLabel})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x373840))(this);
    else return GJMoveCommandLayer::updateValueXLabel();
}

template<class D, void*** V>
void $GJMoveCommandLayer<D, V>::updateValueYLabel() {
    if ((void($GJMoveCommandLayer::*)()){&$GJMoveCommandLayer::updateValueYLabel} != (void(D::*)()){&D::updateValueYLabel})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x373950))(this);
    else return GJMoveCommandLayer::updateValueYLabel();
}

template<class D, void*** V>
void $GJMoveCommandLayer<D, V>::valuePopupClosed(ConfigureValuePopup* p0, float p1) {
    if ((void($GJMoveCommandLayer::*)(ConfigureValuePopup*, float)){&$GJMoveCommandLayer::valuePopupClosed} != (void(D::*)(ConfigureValuePopup*, float)){&D::valuePopupClosed})
        return reinterpret_cast<void(*)(decltype(this), ConfigureValuePopup*, float)>(m->getOriginal(base+0x373c20))(this, p0, p1);
    else return GJMoveCommandLayer::valuePopupClosed(p0, p1);
}


template<class D, void*** V>
$GJPFollowCommandLayer<D, V>::~$GJPFollowCommandLayer() {}

template<class D, void*** V>
$GJPFollowCommandLayer<D, V>::$GJPFollowCommandLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((GJPFollowCommandLayer*(*)(EffectGameObject*, cocos2d::CCArray*)){&$GJPFollowCommandLayer::create} != (GJPFollowCommandLayer*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        m->registerHook(base+0x1aea20, (GJPFollowCommandLayer*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create});

    if ((void($GJPFollowCommandLayer::*)(CCTextInputNode*)){&$GJPFollowCommandLayer::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        m->registerHook(base+0x1b1dc0, extract((void(D::*)(CCTextInputNode*)){&D::textChanged}));

    if ((void($GJPFollowCommandLayer::*)()){&$GJPFollowCommandLayer::updateTargetGroupID} != (void(D::*)()){&D::updateTargetGroupID})
        m->registerHook(base+0x1b1a60, extract((void(D::*)()){&D::updateTargetGroupID}));
}

template<class D, void*** V>
GJPFollowCommandLayer* $GJPFollowCommandLayer<D, V>::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    if ((GJPFollowCommandLayer*(*)(EffectGameObject*, cocos2d::CCArray*)){&$GJPFollowCommandLayer::create} != (GJPFollowCommandLayer*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        return reinterpret_cast<GJPFollowCommandLayer*(*)(EffectGameObject*, cocos2d::CCArray*)>(m->getOriginal(base+0x1aea20))(p0, p1);
    else return GJPFollowCommandLayer::create(p0, p1);
}

template<class D, void*** V>
void $GJPFollowCommandLayer<D, V>::textChanged(CCTextInputNode* p0) {
    if ((void($GJPFollowCommandLayer::*)(CCTextInputNode*)){&$GJPFollowCommandLayer::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        return reinterpret_cast<void(*)(decltype(this), CCTextInputNode*)>(m->getOriginal(base+0x1b1dc0))(this, p0);
    else return GJPFollowCommandLayer::textChanged(p0);
}

template<class D, void*** V>
void $GJPFollowCommandLayer<D, V>::updateTargetGroupID() {
    if ((void($GJPFollowCommandLayer::*)()){&$GJPFollowCommandLayer::updateTargetGroupID} != (void(D::*)()){&D::updateTargetGroupID})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x1b1a60))(this);
    else return GJPFollowCommandLayer::updateTargetGroupID();
}


template<class D, void*** V>
$GJRobotSprite<D, V>::~$GJRobotSprite() {}

template<class D, void*** V>
$GJRobotSprite<D, V>::$GJRobotSprite() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((GJRobotSprite*(*)()){&$GJRobotSprite::create} != (GJRobotSprite*(*)()){&D::create})
        m->registerHook(base+0x34ac00, (GJRobotSprite*(*)()){&D::create});

    if ((void($GJRobotSprite::*)(cocos2d::_ccColor3B)){&$GJRobotSprite::updateColor02} != (void(D::*)(cocos2d::_ccColor3B)){&D::updateColor02})
        m->registerHook(base+0x34bbd0, extract((void(D::*)(cocos2d::_ccColor3B)){&D::updateColor02}));

    if ((void($GJRobotSprite::*)(int)){&$GJRobotSprite::updateFrame} != (void(D::*)(int)){&D::updateFrame})
        m->registerHook(base+0x34bdd0, extract((void(D::*)(int)){&D::updateFrame}));
}

template<class D, void*** V>
GJRobotSprite* $GJRobotSprite<D, V>::create() {
    if ((GJRobotSprite*(*)()){&$GJRobotSprite::create} != (GJRobotSprite*(*)()){&D::create})
        return reinterpret_cast<GJRobotSprite*(*)()>(m->getOriginal(base+0x34ac00))();
    else return GJRobotSprite::create();
}

template<class D, void*** V>
void $GJRobotSprite<D, V>::updateColor02(cocos2d::_ccColor3B p0) {
    if ((void($GJRobotSprite::*)(cocos2d::_ccColor3B)){&$GJRobotSprite::updateColor02} != (void(D::*)(cocos2d::_ccColor3B)){&D::updateColor02})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::_ccColor3B)>(m->getOriginal(base+0x34bbd0))(this, p0);
    else return GJRobotSprite::updateColor02(p0);
}

template<class D, void*** V>
void $GJRobotSprite<D, V>::updateFrame(int p0) {
    if ((void($GJRobotSprite::*)(int)){&$GJRobotSprite::updateFrame} != (void(D::*)(int)){&D::updateFrame})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x34bdd0))(this, p0);
    else return GJRobotSprite::updateFrame(p0);
}


template<class D, void*** V>
$GJRotateCommandLayer<D, V>::~$GJRotateCommandLayer() {}

template<class D, void*** V>
$GJRotateCommandLayer<D, V>::$GJRotateCommandLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((GJRotateCommandLayer*(*)(EffectGameObject*, cocos2d::CCArray*)){&$GJRotateCommandLayer::create} != (GJRotateCommandLayer*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        m->registerHook(base+0x1ba0, (GJRotateCommandLayer*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create});

    if ((void($GJRotateCommandLayer::*)(cocos2d::CCObject*)){&$GJRotateCommandLayer::onUpdateGroupID} != (void(D::*)(cocos2d::CCObject*)){&D::onUpdateGroupID})
        m->registerHook(base+0x4bb0, extract((void(D::*)(cocos2d::CCObject*)){&D::onUpdateGroupID}));

    if ((void($GJRotateCommandLayer::*)(cocos2d::CCObject*)){&$GJRotateCommandLayer::onUpdateGroupID2} != (void(D::*)(cocos2d::CCObject*)){&D::onUpdateGroupID2})
        m->registerHook(base+0x4ca0, extract((void(D::*)(cocos2d::CCObject*)){&D::onUpdateGroupID2}));

    if ((void($GJRotateCommandLayer::*)(CCTextInputNode*)){&$GJRotateCommandLayer::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        m->registerHook(base+0x58d0, extract((void(D::*)(CCTextInputNode*)){&D::textChanged}));

    if ((void($GJRotateCommandLayer::*)()){&$GJRotateCommandLayer::updateTargetGroupID} != (void(D::*)()){&D::updateTargetGroupID})
        m->registerHook(base+0x54b0, extract((void(D::*)()){&D::updateTargetGroupID}));

    if ((void($GJRotateCommandLayer::*)()){&$GJRotateCommandLayer::updateTargetGroupID2} != (void(D::*)()){&D::updateTargetGroupID2})
        m->registerHook(base+0x5690, extract((void(D::*)()){&D::updateTargetGroupID2}));
}

template<class D, void*** V>
GJRotateCommandLayer* $GJRotateCommandLayer<D, V>::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    if ((GJRotateCommandLayer*(*)(EffectGameObject*, cocos2d::CCArray*)){&$GJRotateCommandLayer::create} != (GJRotateCommandLayer*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        return reinterpret_cast<GJRotateCommandLayer*(*)(EffectGameObject*, cocos2d::CCArray*)>(m->getOriginal(base+0x1ba0))(p0, p1);
    else return GJRotateCommandLayer::create(p0, p1);
}

template<class D, void*** V>
void $GJRotateCommandLayer<D, V>::onUpdateGroupID(cocos2d::CCObject* p0) {
    if ((void($GJRotateCommandLayer::*)(cocos2d::CCObject*)){&$GJRotateCommandLayer::onUpdateGroupID} != (void(D::*)(cocos2d::CCObject*)){&D::onUpdateGroupID})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x4bb0))(this, p0);
    else return GJRotateCommandLayer::onUpdateGroupID(p0);
}

template<class D, void*** V>
void $GJRotateCommandLayer<D, V>::onUpdateGroupID2(cocos2d::CCObject* p0) {
    if ((void($GJRotateCommandLayer::*)(cocos2d::CCObject*)){&$GJRotateCommandLayer::onUpdateGroupID2} != (void(D::*)(cocos2d::CCObject*)){&D::onUpdateGroupID2})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x4ca0))(this, p0);
    else return GJRotateCommandLayer::onUpdateGroupID2(p0);
}

template<class D, void*** V>
void $GJRotateCommandLayer<D, V>::textChanged(CCTextInputNode* p0) {
    if ((void($GJRotateCommandLayer::*)(CCTextInputNode*)){&$GJRotateCommandLayer::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        return reinterpret_cast<void(*)(decltype(this), CCTextInputNode*)>(m->getOriginal(base+0x58d0))(this, p0);
    else return GJRotateCommandLayer::textChanged(p0);
}

template<class D, void*** V>
void $GJRotateCommandLayer<D, V>::updateTargetGroupID() {
    if ((void($GJRotateCommandLayer::*)()){&$GJRotateCommandLayer::updateTargetGroupID} != (void(D::*)()){&D::updateTargetGroupID})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x54b0))(this);
    else return GJRotateCommandLayer::updateTargetGroupID();
}

template<class D, void*** V>
void $GJRotateCommandLayer<D, V>::updateTargetGroupID2() {
    if ((void($GJRotateCommandLayer::*)()){&$GJRotateCommandLayer::updateTargetGroupID2} != (void(D::*)()){&D::updateTargetGroupID2})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x5690))(this);
    else return GJRotateCommandLayer::updateTargetGroupID2();
}


template<class D, void*** V>
$GJSearchObject<D, V>::~$GJSearchObject() {}

template<class D, void*** V>
$GJSearchObject<D, V>::$GJSearchObject() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((GJSearchObject*(*)(SearchType)){&$GJSearchObject::create} != (GJSearchObject*(*)(SearchType)){&D::create})
        m->registerHook(base+0x2df120, (GJSearchObject*(*)(SearchType)){&D::create});

    if ((GJSearchObject*(*)(SearchType, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, int, int)){&$GJSearchObject::create} != (GJSearchObject*(*)(SearchType, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, int, int)){&D::create})
        m->registerHook(base+0x2dee30, (GJSearchObject*(*)(SearchType, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, int, int)){&D::create});

    if ((void($GJSearchObject::*)(int)){&$GJSearchObject::getPageObject} != (void(D::*)(int)){&D::getPageObject})
        m->registerHook(base+0x2df9a0, extract((void(D::*)(int)){&D::getPageObject}));
}

template<class D, void*** V>
GJSearchObject* $GJSearchObject<D, V>::create(SearchType p0) {
    if ((GJSearchObject*(*)(SearchType)){&$GJSearchObject::create} != (GJSearchObject*(*)(SearchType)){&D::create})
        return reinterpret_cast<GJSearchObject*(*)(SearchType)>(m->getOriginal(base+0x2df120))(p0);
    else return GJSearchObject::create(p0);
}

template<class D, void*** V>
GJSearchObject* $GJSearchObject<D, V>::create(SearchType p0, std::string p1, std::string p2, std::string p3, int p4, bool p5, bool p6, bool p7, int p8, bool p9, bool p10, bool p11, bool p12, bool p13, bool p14, bool p15, bool p16, int p17, int p18) {
    if ((GJSearchObject*(*)(SearchType, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, int, int)){&$GJSearchObject::create} != (GJSearchObject*(*)(SearchType, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, int, int)){&D::create})
        return reinterpret_cast<GJSearchObject*(*)(SearchType, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, int, int)>(m->getOriginal(base+0x2dee30))(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18);
    else return GJSearchObject::create(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18);
}

template<class D, void*** V>
void $GJSearchObject<D, V>::getPageObject(int p0) {
    if ((void($GJSearchObject::*)(int)){&$GJSearchObject::getPageObject} != (void(D::*)(int)){&D::getPageObject})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x2df9a0))(this, p0);
    else return GJSearchObject::getPageObject(p0);
}


template<class D, void*** V>
$GJSpecialColorSelect<D, V>::~$GJSpecialColorSelect() {}

template<class D, void*** V>
$GJSpecialColorSelect<D, V>::$GJSpecialColorSelect() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($GJSpecialColorSelect::*)(int)){&$GJSpecialColorSelect::textForColorIdx} != (void(D::*)(int)){&D::textForColorIdx})
        m->registerHook(base+0x383a50, extract((void(D::*)(int)){&D::textForColorIdx}));
}

template<class D, void*** V>
void $GJSpecialColorSelect<D, V>::textForColorIdx(int p0) {
    if ((void($GJSpecialColorSelect::*)(int)){&$GJSpecialColorSelect::textForColorIdx} != (void(D::*)(int)){&D::textForColorIdx})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x383a50))(this, p0);
    else return GJSpecialColorSelect::textForColorIdx(p0);
}


template<class D, void*** V>
$GJSpecialColorSelectDelegate<D, V>::~$GJSpecialColorSelectDelegate() {}

template<class D, void*** V>
$GJSpecialColorSelectDelegate<D, V>::$GJSpecialColorSelectDelegate() {
    m->registerHook(extract_destructor(V), +[](){});
}


template<class D, void*** V>
$GJSpiderSprite<D, V>::~$GJSpiderSprite() {}

template<class D, void*** V>
$GJSpiderSprite<D, V>::$GJSpiderSprite() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((GJSpiderSprite*(*)()){&$GJSpiderSprite::create} != (GJSpiderSprite*(*)()){&D::create})
        m->registerHook(base+0x34c5b0, (GJSpiderSprite*(*)()){&D::create});
}

template<class D, void*** V>
GJSpiderSprite* $GJSpiderSprite<D, V>::create() {
    if ((GJSpiderSprite*(*)()){&$GJSpiderSprite::create} != (GJSpiderSprite*(*)()){&D::create})
        return reinterpret_cast<GJSpiderSprite*(*)()>(m->getOriginal(base+0x34c5b0))();
    else return GJSpiderSprite::create();
}


template<class D, void*** V>
$GManager<D, V>::~$GManager() {}

template<class D, void*** V>
$GManager<D, V>::$GManager() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($GManager::*)()){&$GManager::save} != (void(D::*)()){&D::save})
        m->registerHook(base+0x26f300, extract((void(D::*)()){&D::save}));

    if ((void($GManager::*)(DS_Dictionary*, std::string)){&$GManager::saveData} != (void(D::*)(DS_Dictionary*, std::string)){&D::saveData})
        m->registerHook(base+0x26f4b0, extract((void(D::*)(DS_Dictionary*, std::string)){&D::saveData}));

    if ((void($GManager::*)(std::string)){&$GManager::saveGMTo} != (void(D::*)(std::string)){&D::saveGMTo})
        m->registerHook(base+0x26f3b0, extract((void(D::*)(std::string)){&D::saveGMTo}));
}

template<class D, void*** V>
void $GManager<D, V>::save() {
    if ((void($GManager::*)()){&$GManager::save} != (void(D::*)()){&D::save})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x26f300))(this);
    else return GManager::save();
}

template<class D, void*** V>
void $GManager<D, V>::saveData(DS_Dictionary* p0, std::string p1) {
    if ((void($GManager::*)(DS_Dictionary*, std::string)){&$GManager::saveData} != (void(D::*)(DS_Dictionary*, std::string)){&D::saveData})
        return reinterpret_cast<void(*)(decltype(this), DS_Dictionary*, std::string)>(m->getOriginal(base+0x26f4b0))(this, p0, p1);
    else return GManager::saveData(p0, p1);
}

template<class D, void*** V>
void $GManager<D, V>::saveGMTo(std::string p0) {
    if ((void($GManager::*)(std::string)){&$GManager::saveGMTo} != (void(D::*)(std::string)){&D::saveGMTo})
        return reinterpret_cast<void(*)(decltype(this), std::string)>(m->getOriginal(base+0x26f3b0))(this, p0);
    else return GManager::saveGMTo(p0);
}


template<class D, void*** V>
$GameLevelManager<D, V>::~$GameLevelManager() {}

template<class D, void*** V>
$GameLevelManager<D, V>::$GameLevelManager() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((GJGameLevel*($GameLevelManager::*)()){&$GameLevelManager::createNewLevel} != (GJGameLevel*(D::*)()){&D::createNewLevel})
        m->registerHook(base+0x2b8180, extract((GJGameLevel*(D::*)()){&D::createNewLevel}));

    if ((GameLevelManager*(*)()){&$GameLevelManager::sharedState} != (GameLevelManager*(*)()){&D::sharedState})
        m->registerHook(base+0x2a8340, (GameLevelManager*(*)()){&D::sharedState});

    if ((void($GameLevelManager::*)(char const*)){&$GameLevelManager::getPageInfo} != (void(D::*)(char const*)){&D::getPageInfo})
        m->registerHook(base+0x2c0050, extract((void(D::*)(char const*)){&D::getPageInfo}));

    if ((cocos2d::CCArray*($GameLevelManager::*)(char const*)){&$GameLevelManager::getStoredOnlineLevels} != (cocos2d::CCArray*(D::*)(char const*)){&D::getStoredOnlineLevels})
        m->registerHook(base+0x2bfe80, extract((cocos2d::CCArray*(D::*)(char const*)){&D::getStoredOnlineLevels}));

    if ((void($GameLevelManager::*)(int, int)){&$GameLevelManager::getTopArtists} != (void(D::*)(int, int)){&D::getTopArtists})
        m->registerHook(base+0x2ce3d0, extract((void(D::*)(int, int)){&D::getTopArtists}));

    if ((void($GameLevelManager::*)(int)){&$GameLevelManager::getTopArtistsKey} != (void(D::*)(int)){&D::getTopArtistsKey})
        m->registerHook(base+0x2ce7a0, extract((void(D::*)(int)){&D::getTopArtistsKey}));

    if ((void($GameLevelManager::*)(char const*)){&$GameLevelManager::makeTimeStamp} != (void(D::*)(char const*)){&D::makeTimeStamp})
        m->registerHook(base+0x2bfd90, extract((void(D::*)(char const*)){&D::makeTimeStamp}));
}

template<class D, void*** V>
GJGameLevel* $GameLevelManager<D, V>::createNewLevel() {
    if ((GJGameLevel*($GameLevelManager::*)()){&$GameLevelManager::createNewLevel} != (GJGameLevel*(D::*)()){&D::createNewLevel})
        return reinterpret_cast<GJGameLevel*(*)(decltype(this))>(m->getOriginal(base+0x2b8180))(this);
    else return GameLevelManager::createNewLevel();
}

template<class D, void*** V>
GameLevelManager* $GameLevelManager<D, V>::sharedState() {
    if ((GameLevelManager*(*)()){&$GameLevelManager::sharedState} != (GameLevelManager*(*)()){&D::sharedState})
        return reinterpret_cast<GameLevelManager*(*)()>(m->getOriginal(base+0x2a8340))();
    else return GameLevelManager::sharedState();
}

template<class D, void*** V>
void $GameLevelManager<D, V>::getPageInfo(char const* p0) {
    if ((void($GameLevelManager::*)(char const*)){&$GameLevelManager::getPageInfo} != (void(D::*)(char const*)){&D::getPageInfo})
        return reinterpret_cast<void(*)(decltype(this), char const*)>(m->getOriginal(base+0x2c0050))(this, p0);
    else return GameLevelManager::getPageInfo(p0);
}

template<class D, void*** V>
cocos2d::CCArray* $GameLevelManager<D, V>::getStoredOnlineLevels(char const* p0) {
    if ((cocos2d::CCArray*($GameLevelManager::*)(char const*)){&$GameLevelManager::getStoredOnlineLevels} != (cocos2d::CCArray*(D::*)(char const*)){&D::getStoredOnlineLevels})
        return reinterpret_cast<cocos2d::CCArray*(*)(decltype(this), char const*)>(m->getOriginal(base+0x2bfe80))(this, p0);
    else return GameLevelManager::getStoredOnlineLevels(p0);
}

template<class D, void*** V>
void $GameLevelManager<D, V>::getTopArtists(int p0, int p1) {
    if ((void($GameLevelManager::*)(int, int)){&$GameLevelManager::getTopArtists} != (void(D::*)(int, int)){&D::getTopArtists})
        return reinterpret_cast<void(*)(decltype(this), int, int)>(m->getOriginal(base+0x2ce3d0))(this, p0, p1);
    else return GameLevelManager::getTopArtists(p0, p1);
}

template<class D, void*** V>
void $GameLevelManager<D, V>::getTopArtistsKey(int p0) {
    if ((void($GameLevelManager::*)(int)){&$GameLevelManager::getTopArtistsKey} != (void(D::*)(int)){&D::getTopArtistsKey})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x2ce7a0))(this, p0);
    else return GameLevelManager::getTopArtistsKey(p0);
}

template<class D, void*** V>
void $GameLevelManager<D, V>::makeTimeStamp(char const* p0) {
    if ((void($GameLevelManager::*)(char const*)){&$GameLevelManager::makeTimeStamp} != (void(D::*)(char const*)){&D::makeTimeStamp})
        return reinterpret_cast<void(*)(decltype(this), char const*)>(m->getOriginal(base+0x2bfd90))(this, p0);
    else return GameLevelManager::makeTimeStamp(p0);
}


template<class D, void*** V>
$GameManager<D, V>::~$GameManager() {}

template<class D, void*** V>
$GameManager<D, V>::$GameManager() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($GameManager::*)()){&$GameManager::accountStatusChanged} != (void(D::*)()){&D::accountStatusChanged})
        m->registerHook(base+0x1cdad0, extract((void(D::*)()){&D::accountStatusChanged}));

    if ((const cocos2d::_ccColor3B&($GameManager::*)(int)){&$GameManager::colorForIdx} != (const cocos2d::_ccColor3B&(D::*)(int)){&D::colorForIdx})
        m->registerHook(base+0x1cbc80, extract((const cocos2d::_ccColor3B&(D::*)(int)){&D::colorForIdx}));

    if ((void($GameManager::*)()){&$GameManager::didExitPlayscene} != (void(D::*)()){&D::didExitPlayscene})
        m->registerHook(base+0x1d0230, extract((void(D::*)()){&D::didExitPlayscene}));

    if ((void($GameManager::*)()){&$GameManager::doQuickSave} != (void(D::*)()){&D::doQuickSave})
        m->registerHook(base+0x1d0200, extract((void(D::*)()){&D::doQuickSave}));

    if ((void($GameManager::*)(char const*)){&$GameManager::fadeInMusic} != (void(D::*)(char const*)){&D::fadeInMusic})
        m->registerHook(base+0x1c2ff0, extract((void(D::*)(char const*)){&D::fadeInMusic}));

    if ((void($GameManager::*)(int)){&$GameManager::getBGTexture} != (void(D::*)(int)){&D::getBGTexture})
        m->registerHook(base+0x1cca00, extract((void(D::*)(int)){&D::getBGTexture}));

    if ((void($GameManager::*)(int)){&$GameManager::getFontFile} != (void(D::*)(int)){&D::getFontFile})
        m->registerHook(base+0x1cc5f0, extract((void(D::*)(int)){&D::getFontFile}));

    if ((bool($GameManager::*)(char const*)){&$GameManager::getGameVariable} != (bool(D::*)(char const*)){&D::getGameVariable})
        m->registerHook(base+0x1cccd0, extract((bool(D::*)(char const*)){&D::getGameVariable}));

    if ((int($GameManager::*)(char const*)){&$GameManager::getIntGameVariable} != (int(D::*)(char const*)){&D::getIntGameVariable})
        m->registerHook(base+0x1cd1d0, extract((int(D::*)(char const*)){&D::getIntGameVariable}));

    if ((void($GameManager::*)(char const*)){&$GameManager::getUGV} != (void(D::*)(char const*)){&D::getUGV})
        m->registerHook(base+0x1ccfa0, extract((void(D::*)(char const*)){&D::getUGV}));

    if ((void($GameManager::*)(int)){&$GameManager::loadDeathEffect} != (void(D::*)(int)){&D::loadDeathEffect})
        m->registerHook(base+0x1cc690, extract((void(D::*)(int)){&D::loadDeathEffect}));

    if ((void($GameManager::*)(int)){&$GameManager::loadFont} != (void(D::*)(int)){&D::loadFont})
        m->registerHook(base+0x1cc550, extract((void(D::*)(int)){&D::loadFont}));

    if ((void($GameManager::*)(bool, bool, bool)){&$GameManager::reloadAll} != (void(D::*)(bool, bool, bool)){&D::reloadAll})
        m->registerHook(base+0x1d08a0, extract((void(D::*)(bool, bool, bool)){&D::reloadAll}));

    if ((void($GameManager::*)()){&$GameManager::reloadAllStep5} != (void(D::*)()){&D::reloadAllStep5})
        m->registerHook(base+0x1d0b00, extract((void(D::*)()){&D::reloadAllStep5}));

    if ((void($GameManager::*)(int, int, bool)){&$GameManager::reportPercentageForLevel} != (void(D::*)(int, int, bool)){&D::reportPercentageForLevel})
        m->registerHook(base+0x1c5b00, extract((void(D::*)(int, int, bool)){&D::reportPercentageForLevel}));

    if ((void($GameManager::*)(char const*, bool)){&$GameManager::setGameVariable} != (void(D::*)(char const*, bool)){&D::setGameVariable})
        m->registerHook(base+0x1cca80, extract((void(D::*)(char const*, bool)){&D::setGameVariable}));

    if ((void($GameManager::*)(char const*, int)){&$GameManager::setIntGameVariable} != (void(D::*)(char const*, int)){&D::setIntGameVariable})
        m->registerHook(base+0x1cd0e0, extract((void(D::*)(char const*, int)){&D::setIntGameVariable}));

    if ((void($GameManager::*)(char const*, bool)){&$GameManager::setUGV} != (void(D::*)(char const*, bool)){&D::setUGV})
        m->registerHook(base+0x1cce50, extract((void(D::*)(char const*, bool)){&D::setUGV}));

    if ((GameManager*(*)()){&$GameManager::sharedState} != (GameManager*(*)()){&D::sharedState})
        m->registerHook(base+0x1c2b30, (GameManager*(*)()){&D::sharedState});
}

template<class D, void*** V>
void $GameManager<D, V>::accountStatusChanged() {
    if ((void($GameManager::*)()){&$GameManager::accountStatusChanged} != (void(D::*)()){&D::accountStatusChanged})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x1cdad0))(this);
    else return GameManager::accountStatusChanged();
}

template<class D, void*** V>
const cocos2d::_ccColor3B& $GameManager<D, V>::colorForIdx(int p0) {
    if ((const cocos2d::_ccColor3B&($GameManager::*)(int)){&$GameManager::colorForIdx} != (const cocos2d::_ccColor3B&(D::*)(int)){&D::colorForIdx})
        return reinterpret_cast<const cocos2d::_ccColor3B&(*)(decltype(this), int)>(m->getOriginal(base+0x1cbc80))(this, p0);
    else return GameManager::colorForIdx(p0);
}

template<class D, void*** V>
void $GameManager<D, V>::didExitPlayscene() {
    if ((void($GameManager::*)()){&$GameManager::didExitPlayscene} != (void(D::*)()){&D::didExitPlayscene})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x1d0230))(this);
    else return GameManager::didExitPlayscene();
}

template<class D, void*** V>
void $GameManager<D, V>::doQuickSave() {
    if ((void($GameManager::*)()){&$GameManager::doQuickSave} != (void(D::*)()){&D::doQuickSave})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x1d0200))(this);
    else return GameManager::doQuickSave();
}

template<class D, void*** V>
void $GameManager<D, V>::fadeInMusic(char const* p0) {
    if ((void($GameManager::*)(char const*)){&$GameManager::fadeInMusic} != (void(D::*)(char const*)){&D::fadeInMusic})
        return reinterpret_cast<void(*)(decltype(this), char const*)>(m->getOriginal(base+0x1c2ff0))(this, p0);
    else return GameManager::fadeInMusic(p0);
}

template<class D, void*** V>
void $GameManager<D, V>::getBGTexture(int p0) {
    if ((void($GameManager::*)(int)){&$GameManager::getBGTexture} != (void(D::*)(int)){&D::getBGTexture})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x1cca00))(this, p0);
    else return GameManager::getBGTexture(p0);
}

template<class D, void*** V>
void $GameManager<D, V>::getFontFile(int p0) {
    if ((void($GameManager::*)(int)){&$GameManager::getFontFile} != (void(D::*)(int)){&D::getFontFile})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x1cc5f0))(this, p0);
    else return GameManager::getFontFile(p0);
}

template<class D, void*** V>
bool $GameManager<D, V>::getGameVariable(char const* p0) {
    if ((bool($GameManager::*)(char const*)){&$GameManager::getGameVariable} != (bool(D::*)(char const*)){&D::getGameVariable})
        return reinterpret_cast<bool(*)(decltype(this), char const*)>(m->getOriginal(base+0x1cccd0))(this, p0);
    else return GameManager::getGameVariable(p0);
}

template<class D, void*** V>
int $GameManager<D, V>::getIntGameVariable(char const* p0) {
    if ((int($GameManager::*)(char const*)){&$GameManager::getIntGameVariable} != (int(D::*)(char const*)){&D::getIntGameVariable})
        return reinterpret_cast<int(*)(decltype(this), char const*)>(m->getOriginal(base+0x1cd1d0))(this, p0);
    else return GameManager::getIntGameVariable(p0);
}

template<class D, void*** V>
void $GameManager<D, V>::getUGV(char const* p0) {
    if ((void($GameManager::*)(char const*)){&$GameManager::getUGV} != (void(D::*)(char const*)){&D::getUGV})
        return reinterpret_cast<void(*)(decltype(this), char const*)>(m->getOriginal(base+0x1ccfa0))(this, p0);
    else return GameManager::getUGV(p0);
}

template<class D, void*** V>
void $GameManager<D, V>::loadDeathEffect(int p0) {
    if ((void($GameManager::*)(int)){&$GameManager::loadDeathEffect} != (void(D::*)(int)){&D::loadDeathEffect})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x1cc690))(this, p0);
    else return GameManager::loadDeathEffect(p0);
}

template<class D, void*** V>
void $GameManager<D, V>::loadFont(int p0) {
    if ((void($GameManager::*)(int)){&$GameManager::loadFont} != (void(D::*)(int)){&D::loadFont})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x1cc550))(this, p0);
    else return GameManager::loadFont(p0);
}

template<class D, void*** V>
void $GameManager<D, V>::reloadAll(bool p0, bool p1, bool p2) {
    if ((void($GameManager::*)(bool, bool, bool)){&$GameManager::reloadAll} != (void(D::*)(bool, bool, bool)){&D::reloadAll})
        return reinterpret_cast<void(*)(decltype(this), bool, bool, bool)>(m->getOriginal(base+0x1d08a0))(this, p0, p1, p2);
    else return GameManager::reloadAll(p0, p1, p2);
}

template<class D, void*** V>
void $GameManager<D, V>::reloadAllStep5() {
    if ((void($GameManager::*)()){&$GameManager::reloadAllStep5} != (void(D::*)()){&D::reloadAllStep5})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x1d0b00))(this);
    else return GameManager::reloadAllStep5();
}

template<class D, void*** V>
void $GameManager<D, V>::reportPercentageForLevel(int p0, int p1, bool p2) {
    if ((void($GameManager::*)(int, int, bool)){&$GameManager::reportPercentageForLevel} != (void(D::*)(int, int, bool)){&D::reportPercentageForLevel})
        return reinterpret_cast<void(*)(decltype(this), int, int, bool)>(m->getOriginal(base+0x1c5b00))(this, p0, p1, p2);
    else return GameManager::reportPercentageForLevel(p0, p1, p2);
}

template<class D, void*** V>
void $GameManager<D, V>::setGameVariable(char const* p0, bool p1) {
    if ((void($GameManager::*)(char const*, bool)){&$GameManager::setGameVariable} != (void(D::*)(char const*, bool)){&D::setGameVariable})
        return reinterpret_cast<void(*)(decltype(this), char const*, bool)>(m->getOriginal(base+0x1cca80))(this, p0, p1);
    else return GameManager::setGameVariable(p0, p1);
}

template<class D, void*** V>
void $GameManager<D, V>::setIntGameVariable(char const* p0, int p1) {
    if ((void($GameManager::*)(char const*, int)){&$GameManager::setIntGameVariable} != (void(D::*)(char const*, int)){&D::setIntGameVariable})
        return reinterpret_cast<void(*)(decltype(this), char const*, int)>(m->getOriginal(base+0x1cd0e0))(this, p0, p1);
    else return GameManager::setIntGameVariable(p0, p1);
}

template<class D, void*** V>
void $GameManager<D, V>::setUGV(char const* p0, bool p1) {
    if ((void($GameManager::*)(char const*, bool)){&$GameManager::setUGV} != (void(D::*)(char const*, bool)){&D::setUGV})
        return reinterpret_cast<void(*)(decltype(this), char const*, bool)>(m->getOriginal(base+0x1cce50))(this, p0, p1);
    else return GameManager::setUGV(p0, p1);
}

template<class D, void*** V>
GameManager* $GameManager<D, V>::sharedState() {
    if ((GameManager*(*)()){&$GameManager::sharedState} != (GameManager*(*)()){&D::sharedState})
        return reinterpret_cast<GameManager*(*)()>(m->getOriginal(base+0x1c2b30))();
    else return GameManager::sharedState();
}


template<class D, void*** V>
$GameObject<D, V>::~$GameObject() {}

template<class D, void*** V>
$GameObject<D, V>::$GameObject() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($GameObject::*)()){&$GameObject::activateObject} != (void(D::*)()){&D::activateObject})
        m->registerHook(base+0x2faf60, extract((void(D::*)()){&D::activateObject}));

    if ((void($GameObject::*)(GameObject*)){&$GameObject::activatedByPlayer} != (void(D::*)(GameObject*)){&D::activatedByPlayer})
        m->registerHook(base+0x342a20, extract((void(D::*)(GameObject*)){&D::activatedByPlayer}));

    if ((void($GameObject::*)()){&$GameObject::addColorSprite} != (void(D::*)()){&D::addColorSprite})
        m->registerHook(base+0x2f7fe0, extract((void(D::*)()){&D::addColorSprite}));

    if ((void($GameObject::*)(bool)){&$GameObject::addColorSpriteToParent} != (void(D::*)(bool)){&D::addColorSpriteToParent})
        m->registerHook(base+0x2fb470, extract((void(D::*)(bool)){&D::addColorSpriteToParent}));

    if ((void($GameObject::*)(bool)){&$GameObject::addMainSpriteToParent} != (void(D::*)(bool)){&D::addMainSpriteToParent})
        m->registerHook(base+0x33a5b0, extract((void(D::*)(bool)){&D::addMainSpriteToParent}));

    if ((void($GameObject::*)(int)){&$GameObject::addToGroup} != (void(D::*)(int)){&D::addToGroup})
        m->registerHook(base+0x33ad00, extract((void(D::*)(int)){&D::addToGroup}));

    if ((void($GameObject::*)(float, float)){&$GameObject::addToTempOffset} != (void(D::*)(float, float)){&D::addToTempOffset})
        m->registerHook(base+0x335700, extract((void(D::*)(float, float)){&D::addToTempOffset}));

    if ((void($GameObject::*)()){&$GameObject::calculateOrientedBox} != (void(D::*)()){&D::calculateOrientedBox})
        m->registerHook(base+0x342b20, extract((void(D::*)()){&D::calculateOrientedBox}));

    if ((void($GameObject::*)()){&$GameObject::calculateSpawnXPos} != (void(D::*)()){&D::calculateSpawnXPos})
        m->registerHook(base+0x336970, extract((void(D::*)()){&D::calculateSpawnXPos}));

    if ((void($GameObject::*)()){&$GameObject::canChangeCustomColor} != (void(D::*)()){&D::canChangeCustomColor})
        m->registerHook(base+0x342db0, extract((void(D::*)()){&D::canChangeCustomColor}));

    if ((void($GameObject::*)(int, bool)){&$GameObject::colorForMode} != (void(D::*)(int, bool)){&D::colorForMode})
        m->registerHook(base+0x343460, extract((void(D::*)(int, bool)){&D::colorForMode}));

    if ((void($GameObject::*)()){&$GameObject::commonSetup} != (void(D::*)()){&D::commonSetup})
        m->registerHook(base+0x2f5570, extract((void(D::*)()){&D::commonSetup}));

    if ((void($GameObject::*)(GameObject*)){&$GameObject::copyGroups} != (void(D::*)(GameObject*)){&D::copyGroups})
        m->registerHook(base+0x33ae30, extract((void(D::*)(GameObject*)){&D::copyGroups}));

    if ((GameObject*(*)(char const*)){&$GameObject::createWithFrame} != (GameObject*(*)(char const*)){&D::createWithFrame})
        m->registerHook(base+0x2f5490, (GameObject*(*)(char const*)){&D::createWithFrame});

    if ((GameObject*(*)(int)){&$GameObject::createWithKey} != (GameObject*(*)(int)){&D::createWithKey})
        m->registerHook(base+0x2f4ce0, (GameObject*(*)(int)){&D::createWithKey});

    if ((void($GameObject::*)()){&$GameObject::customSetup} != (void(D::*)()){&D::customSetup})
        m->registerHook(base+0x2fbba0, extract((void(D::*)()){&D::customSetup}));

    if ((void($GameObject::*)(bool)){&$GameObject::deactivateObject} != (void(D::*)(bool)){&D::deactivateObject})
        m->registerHook(base+0x2fb8f0, extract((void(D::*)(bool)){&D::deactivateObject}));

    if ((void($GameObject::*)()){&$GameObject::destroyObject} != (void(D::*)()){&D::destroyObject})
        m->registerHook(base+0x336a00, extract((void(D::*)()){&D::destroyObject}));

    if ((void($GameObject::*)()){&$GameObject::determineSlopeDirection} != (void(D::*)()){&D::determineSlopeDirection})
        m->registerHook(base+0x33a9e0, extract((void(D::*)()){&D::determineSlopeDirection}));

    if ((void($GameObject::*)(int, bool)){&$GameObject::getActiveColorForMode} != (void(D::*)(int, bool)){&D::getActiveColorForMode})
        m->registerHook(base+0x343860, extract((void(D::*)(int, bool)){&D::getActiveColorForMode}));

    if ((void($GameObject::*)(int)){&$GameObject::getBallFrame} != (void(D::*)(int)){&D::getBallFrame})
        m->registerHook(base+0x341bf0, extract((void(D::*)(int)){&D::getBallFrame}));

    if ((void($GameObject::*)()){&$GameObject::getBoxOffset} != (void(D::*)()){&D::getBoxOffset})
        m->registerHook(base+0x3353d0, extract((void(D::*)()){&D::getBoxOffset}));

    if ((const cocos2d::_ccColor3B&($GameObject::*)()){&$GameObject::getColorIndex} != (const cocos2d::_ccColor3B&(D::*)()){&D::getColorIndex})
        m->registerHook(base+0x343b90, extract((const cocos2d::_ccColor3B&(D::*)()){&D::getColorIndex}));

    if ((void($GameObject::*)()){&$GameObject::getDidUpdateLastPosition} != (void(D::*)()){&D::getDidUpdateLastPosition})
        m->registerHook(base+0x343a20, extract((void(D::*)()){&D::getDidUpdateLastPosition}));

    if ((int($GameObject::*)(int)){&$GameObject::getGroupID} != (int(D::*)(int)){&D::getGroupID})
        m->registerHook(base+0x33ae10, extract((int(D::*)(int)){&D::getGroupID}));

    if ((void($GameObject::*)()){&$GameObject::getLastPosition} != (void(D::*)()){&D::getLastPosition})
        m->registerHook(base+0x3439d0, extract((void(D::*)()){&D::getLastPosition}));

    if ((void($GameObject::*)()){&$GameObject::getMainColorMode} != (void(D::*)()){&D::getMainColorMode})
        m->registerHook(base+0x334c30, extract((void(D::*)()){&D::getMainColorMode}));

    if ((cocos2d::CCRect*($GameObject::*)()){&$GameObject::getObjectRect} != (cocos2d::CCRect*(D::*)()){&D::getObjectRect})
        m->registerHook(base+0x3352b0, extract((cocos2d::CCRect*(D::*)()){&D::getObjectRect}));

    if ((void($GameObject::*)(float, float)){&$GameObject::getObjectRect} != (void(D::*)(float, float)){&D::getObjectRect})
        m->registerHook(base+0x3352d0, extract((void(D::*)(float, float)){&D::getObjectRect}));

    if ((void($GameObject::*)(float, float)){&$GameObject::getObjectRect2} != (void(D::*)(float, float)){&D::getObjectRect2})
        m->registerHook(base+0x3354e0, extract((void(D::*)(float, float)){&D::getObjectRect2}));

    if ((void($GameObject::*)()){&$GameObject::getObjectRectDirty} != (void(D::*)()){&D::getObjectRectDirty})
        m->registerHook(base+0xdc1d0, extract((void(D::*)()){&D::getObjectRectDirty}));

    if ((void($GameObject::*)()){&$GameObject::getObjectTextureRect} != (void(D::*)()){&D::getObjectTextureRect})
        m->registerHook(base+0x3355b0, extract((void(D::*)()){&D::getObjectTextureRect}));

    if ((void($GameObject::*)()){&$GameObject::getObjectZOrder} != (void(D::*)()){&D::getObjectZOrder})
        m->registerHook(base+0x337d70, extract((void(D::*)()){&D::getObjectZOrder}));

    if ((void($GameObject::*)()){&$GameObject::getOrientedRectDirty} != (void(D::*)()){&D::getOrientedRectDirty})
        m->registerHook(base+0xdc1f0, extract((void(D::*)()){&D::getOrientedRectDirty}));

    if ((void($GameObject::*)()){&$GameObject::getRScaleX} != (void(D::*)()){&D::getRScaleX})
        m->registerHook(base+0x335e50, extract((void(D::*)()){&D::getRScaleX}));

    if ((void($GameObject::*)()){&$GameObject::getRScaleY} != (void(D::*)()){&D::getRScaleY})
        m->registerHook(base+0x335e80, extract((void(D::*)()){&D::getRScaleY}));

    if ((std::string($GameObject::*)()){&$GameObject::getSaveString} != (std::string(D::*)()){&D::getSaveString})
        m->registerHook(base+0x33d3d0, extract((std::string(D::*)()){&D::getSaveString}));

    if ((void($GameObject::*)()){&$GameObject::getSecondaryColorMode} != (void(D::*)()){&D::getSecondaryColorMode})
        m->registerHook(base+0x341c20, extract((void(D::*)()){&D::getSecondaryColorMode}));

    if ((void($GameObject::*)()){&$GameObject::getSectionIdx} != (void(D::*)()){&D::getSectionIdx})
        m->registerHook(base+0x343a00, extract((void(D::*)()){&D::getSectionIdx}));

    if ((void($GameObject::*)()){&$GameObject::getStartPos} != (void(D::*)()){&D::getStartPos})
        m->registerHook(base+0xdc230, extract((void(D::*)()){&D::getStartPos}));

    if ((void($GameObject::*)()){&$GameObject::getType} != (void(D::*)()){&D::getType})
        m->registerHook(base+0xdc210, extract((void(D::*)()){&D::getType}));

    if ((void($GameObject::*)()){&$GameObject::groupWasDisabled} != (void(D::*)()){&D::groupWasDisabled})
        m->registerHook(base+0x33b110, extract((void(D::*)()){&D::groupWasDisabled}));

    if ((void($GameObject::*)()){&$GameObject::groupWasEnabled} != (void(D::*)()){&D::groupWasEnabled})
        m->registerHook(base+0x33b0f0, extract((void(D::*)()){&D::groupWasEnabled}));

    if ((void($GameObject::*)()){&$GameObject::hasBeenActivated} != (void(D::*)()){&D::hasBeenActivated})
        m->registerHook(base+0x342a80, extract((void(D::*)()){&D::hasBeenActivated}));

    if ((void($GameObject::*)(GameObject*)){&$GameObject::hasBeenActivatedByPlayer} != (void(D::*)(GameObject*)){&D::hasBeenActivatedByPlayer})
        m->registerHook(base+0x342a50, extract((void(D::*)(GameObject*)){&D::hasBeenActivatedByPlayer}));

    if ((void($GameObject::*)()){&$GameObject::hasSecondaryColor} != (void(D::*)()){&D::hasSecondaryColor})
        m->registerHook(base+0x342f80, extract((void(D::*)()){&D::hasSecondaryColor}));

    if ((void($GameObject::*)()){&$GameObject::ignoreEnter} != (void(D::*)()){&D::ignoreEnter})
        m->registerHook(base+0x3352a0, extract((void(D::*)()){&D::ignoreEnter}));

    if ((void($GameObject::*)()){&$GameObject::ignoreFade} != (void(D::*)()){&D::ignoreFade})
        m->registerHook(base+0x335290, extract((void(D::*)()){&D::ignoreFade}));

    if ((bool($GameObject::*)(cocos2d::CCTexture2D*)){&$GameObject::initWithTexture} != (bool(D::*)(cocos2d::CCTexture2D*)){&D::initWithTexture})
        m->registerHook(base+0x2f56a0, extract((bool(D::*)(cocos2d::CCTexture2D*)){&D::initWithTexture}));

    if ((void($GameObject::*)()){&$GameObject::isBasicTrigger} != (void(D::*)()){&D::isBasicTrigger})
        m->registerHook(base+0x343d10, extract((void(D::*)()){&D::isBasicTrigger}));

    if ((void($GameObject::*)()){&$GameObject::isColorTrigger} != (void(D::*)()){&D::isColorTrigger})
        m->registerHook(base+0x343b40, extract((void(D::*)()){&D::isColorTrigger}));

    if ((void($GameObject::*)()){&$GameObject::isFlipX} != (void(D::*)()){&D::isFlipX})
        m->registerHook(base+0x335a40, extract((void(D::*)()){&D::isFlipX}));

    if ((void($GameObject::*)()){&$GameObject::isFlipY} != (void(D::*)()){&D::isFlipY})
        m->registerHook(base+0x335a50, extract((void(D::*)()){&D::isFlipY}));

    if ((void($GameObject::*)()){&$GameObject::isSpawnableTrigger} != (void(D::*)()){&D::isSpawnableTrigger})
        m->registerHook(base+0x343a60, extract((void(D::*)()){&D::isSpawnableTrigger}));

    if ((void($GameObject::*)()){&$GameObject::isSpecialObject} != (void(D::*)()){&D::isSpecialObject})
        m->registerHook(base+0x343c40, extract((void(D::*)()){&D::isSpecialObject}));

    if ((GameObject*(*)(std::string, bool)){&$GameObject::objectFromString} != (GameObject*(*)(std::string, bool)){&D::objectFromString})
        m->registerHook(base+0x33b720, (GameObject*(*)(std::string, bool)){&D::objectFromString});

    if ((void($GameObject::*)()){&$GameObject::playShineEffect} != (void(D::*)()){&D::playShineEffect})
        m->registerHook(base+0x2fa9d0, extract((void(D::*)()){&D::playShineEffect}));

    if ((void($GameObject::*)()){&$GameObject::powerOffObject} != (void(D::*)()){&D::powerOffObject})
        m->registerHook(base+0x3369c0, extract((void(D::*)()){&D::powerOffObject}));

    if ((void($GameObject::*)()){&$GameObject::powerOnObject} != (void(D::*)()){&D::powerOnObject})
        m->registerHook(base+0x3369a0, extract((void(D::*)()){&D::powerOnObject}));

    if ((void($GameObject::*)()){&$GameObject::quickUpdatePosition} != (void(D::*)()){&D::quickUpdatePosition})
        m->registerHook(base+0x335790, extract((void(D::*)()){&D::quickUpdatePosition}));

    if ((void($GameObject::*)(int)){&$GameObject::removeFromGroup} != (void(D::*)(int)){&D::removeFromGroup})
        m->registerHook(base+0x33ada0, extract((void(D::*)(int)){&D::removeFromGroup}));

    if ((void($GameObject::*)()){&$GameObject::removeGlow} != (void(D::*)()){&D::removeGlow})
        m->registerHook(base+0x2f7f70, extract((void(D::*)()){&D::removeGlow}));

    if ((void($GameObject::*)()){&$GameObject::resetGroupDisabled} != (void(D::*)()){&D::resetGroupDisabled})
        m->registerHook(base+0x2fa7e0, extract((void(D::*)()){&D::resetGroupDisabled}));

    if ((void($GameObject::*)()){&$GameObject::saveActiveColors} != (void(D::*)()){&D::saveActiveColors})
        m->registerHook(base+0x33d250, extract((void(D::*)()){&D::saveActiveColors}));

    if ((void($GameObject::*)(cocos2d::_ccColor3B)){&$GameObject::selectObject} != (void(D::*)(cocos2d::_ccColor3B)){&D::selectObject})
        m->registerHook(base+0x341f90, extract((void(D::*)(cocos2d::_ccColor3B)){&D::selectObject}));

    if ((void($GameObject::*)(cocos2d::_ccColor3B const&)){&$GameObject::setChildColor} != (void(D::*)(cocos2d::_ccColor3B const&)){&D::setChildColor})
        m->registerHook(base+0x341f20, extract((void(D::*)(cocos2d::_ccColor3B const&)){&D::setChildColor}));

    if ((void($GameObject::*)(int)){&$GameObject::setDefaultMainColorMode} != (void(D::*)(int)){&D::setDefaultMainColorMode})
        m->registerHook(base+0x304fc0, extract((void(D::*)(int)){&D::setDefaultMainColorMode}));

    if ((void($GameObject::*)(bool const&)){&$GameObject::setDidUpdateLastPosition} != (void(D::*)(bool const&)){&D::setDidUpdateLastPosition})
        m->registerHook(base+0x343a30, extract((void(D::*)(bool const&)){&D::setDidUpdateLastPosition}));

    if ((void($GameObject::*)(cocos2d::_ccColor3B const&)){&$GameObject::setGlowColor} != (void(D::*)(cocos2d::_ccColor3B const&)){&D::setGlowColor})
        m->registerHook(base+0x341ed0, extract((void(D::*)(cocos2d::_ccColor3B const&)){&D::setGlowColor}));

    if ((void($GameObject::*)(unsigned char)){&$GameObject::setGlowOpacity} != (void(D::*)(unsigned char)){&D::setGlowOpacity})
        m->registerHook(base+0x336200, extract((void(D::*)(unsigned char)){&D::setGlowOpacity}));

    if ((void($GameObject::*)(cocos2d::CCPoint const&)){&$GameObject::setLastPosition} != (void(D::*)(cocos2d::CCPoint const&)){&D::setLastPosition})
        m->registerHook(base+0x3439e0, extract((void(D::*)(cocos2d::CCPoint const&)){&D::setLastPosition}));

    if ((void($GameObject::*)(int)){&$GameObject::setMainColorMode} != (void(D::*)(int)){&D::setMainColorMode})
        m->registerHook(base+0x342e70, extract((void(D::*)(int)){&D::setMainColorMode}));

    if ((void($GameObject::*)(cocos2d::_ccColor3B const&)){&$GameObject::setObjectColor} != (void(D::*)(cocos2d::_ccColor3B const&)){&D::setObjectColor})
        m->registerHook(base+0x341c90, extract((void(D::*)(cocos2d::_ccColor3B const&)){&D::setObjectColor}));

    if ((void($GameObject::*)(bool)){&$GameObject::setObjectRectDirty} != (void(D::*)(bool)){&D::setObjectRectDirty})
        m->registerHook(base+0xdc1e0, extract((void(D::*)(bool)){&D::setObjectRectDirty}));

    if ((void($GameObject::*)(bool)){&$GameObject::setOrientedRectDirty} != (void(D::*)(bool)){&D::setOrientedRectDirty})
        m->registerHook(base+0xdc200, extract((void(D::*)(bool)){&D::setOrientedRectDirty}));

    if ((void($GameObject::*)(cocos2d::CCPoint const&)){&$GameObject::setPosition} != (void(D::*)(cocos2d::CCPoint const&)){&D::setPosition})
        m->registerHook(base+0x335850, extract((void(D::*)(cocos2d::CCPoint const&)){&D::setPosition}));

    if ((void($GameObject::*)(float)){&$GameObject::setRScale} != (void(D::*)(float)){&D::setRScale})
        m->registerHook(base+0x335e10, extract((void(D::*)(float)){&D::setRScale}));

    if ((void($GameObject::*)(float)){&$GameObject::setRScaleX} != (void(D::*)(float)){&D::setRScaleX})
        m->registerHook(base+0x335cb0, extract((void(D::*)(float)){&D::setRScaleX}));

    if ((void($GameObject::*)(float)){&$GameObject::setRScaleY} != (void(D::*)(float)){&D::setRScaleY})
        m->registerHook(base+0x335d60, extract((void(D::*)(float)){&D::setRScaleY}));

    if ((void($GameObject::*)(int const&)){&$GameObject::setSectionIdx} != (void(D::*)(int const&)){&D::setSectionIdx})
        m->registerHook(base+0x343a10, extract((void(D::*)(int const&)){&D::setSectionIdx}));

    if ((void($GameObject::*)(cocos2d::CCPoint)){&$GameObject::setStartPos} != (void(D::*)(cocos2d::CCPoint)){&D::setStartPos})
        m->registerHook(base+0x2fa520, extract((void(D::*)(cocos2d::CCPoint)){&D::setStartPos}));

    if ((void($GameObject::*)(GameObjectType)){&$GameObject::setType} != (void(D::*)(GameObjectType)){&D::setType})
        m->registerHook(base+0xdc220, extract((void(D::*)(GameObjectType)){&D::setType}));

    if ((void($GameObject::*)()){&$GameObject::setupCoinArt} != (void(D::*)()){&D::setupCoinArt})
        m->registerHook(base+0x337dd0, extract((void(D::*)()){&D::setupCoinArt}));

    if ((void($GameObject::*)()){&$GameObject::setupCustomSprites} != (void(D::*)()){&D::setupCustomSprites})
        m->registerHook(base+0x307f60, extract((void(D::*)()){&D::setupCustomSprites}));

    if ((void($GameObject::*)()){&$GameObject::slopeFloorTop} != (void(D::*)()){&D::slopeFloorTop})
        m->registerHook(base+0x342800, extract((void(D::*)()){&D::slopeFloorTop}));

    if ((void($GameObject::*)()){&$GameObject::slopeWallLeft} != (void(D::*)()){&D::slopeWallLeft})
        m->registerHook(base+0x3427e0, extract((void(D::*)()){&D::slopeWallLeft}));

    if ((void($GameObject::*)()){&$GameObject::spawnXPosition} != (void(D::*)()){&D::spawnXPosition})
        m->registerHook(base+0xdc1b0, extract((void(D::*)()){&D::spawnXPosition}));

    if ((void($GameObject::*)(float)){&$GameObject::triggerActivated} != (void(D::*)(float)){&D::triggerActivated})
        m->registerHook(base+0x336990, extract((void(D::*)(float)){&D::triggerActivated}));

    if ((void($GameObject::*)(GJBaseGameLayer*)){&$GameObject::triggerObject} != (void(D::*)(GJBaseGameLayer*)){&D::triggerObject})
        m->registerHook(base+0x2fa8f0, extract((void(D::*)(GJBaseGameLayer*)){&D::triggerObject}));

    if ((void($GameObject::*)(float)){&$GameObject::updateCustomScale} != (void(D::*)(float)){&D::updateCustomScale})
        m->registerHook(base+0x335eb0, extract((void(D::*)(float)){&D::updateCustomScale}));

    if ((void($GameObject::*)()){&$GameObject::updateMainColor} != (void(D::*)()){&D::updateMainColor})
        m->registerHook(base+0x343340, extract((void(D::*)()){&D::updateMainColor}));

    if ((void($GameObject::*)()){&$GameObject::updateOrientedBox} != (void(D::*)()){&D::updateOrientedBox})
        m->registerHook(base+0x342b50, extract((void(D::*)()){&D::updateOrientedBox}));

    if ((void($GameObject::*)()){&$GameObject::updateSecondaryColor} != (void(D::*)()){&D::updateSecondaryColor})
        m->registerHook(base+0x343740, extract((void(D::*)()){&D::updateSecondaryColor}));

    if ((void($GameObject::*)()){&$GameObject::updateStartPos} != (void(D::*)()){&D::updateStartPos})
        m->registerHook(base+0x2fa590, extract((void(D::*)()){&D::updateStartPos}));

    if ((void($GameObject::*)()){&$GameObject::updateStartValues} != (void(D::*)()){&D::updateStartValues})
        m->registerHook(base+0x2fa800, extract((void(D::*)()){&D::updateStartValues}));

    if ((void($GameObject::*)()){&$GameObject::updateState} != (void(D::*)()){&D::updateState})
        m->registerHook(base+0x3369e0, extract((void(D::*)()){&D::updateState}));

    if ((void($GameObject::*)(float)){&$GameObject::updateSyncedAnimation} != (void(D::*)(float)){&D::updateSyncedAnimation})
        m->registerHook(base+0x337f00, extract((void(D::*)(float)){&D::updateSyncedAnimation}));
}

template<class D, void*** V>
void $GameObject<D, V>::activateObject() {
    if ((void($GameObject::*)()){&$GameObject::activateObject} != (void(D::*)()){&D::activateObject})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x2faf60))(this);
    else return GameObject::activateObject();
}

template<class D, void*** V>
void $GameObject<D, V>::activatedByPlayer(GameObject* p0) {
    if ((void($GameObject::*)(GameObject*)){&$GameObject::activatedByPlayer} != (void(D::*)(GameObject*)){&D::activatedByPlayer})
        return reinterpret_cast<void(*)(decltype(this), GameObject*)>(m->getOriginal(base+0x342a20))(this, p0);
    else return GameObject::activatedByPlayer(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::addColorSprite() {
    if ((void($GameObject::*)()){&$GameObject::addColorSprite} != (void(D::*)()){&D::addColorSprite})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x2f7fe0))(this);
    else return GameObject::addColorSprite();
}

template<class D, void*** V>
void $GameObject<D, V>::addColorSpriteToParent(bool p0) {
    if ((void($GameObject::*)(bool)){&$GameObject::addColorSpriteToParent} != (void(D::*)(bool)){&D::addColorSpriteToParent})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x2fb470))(this, p0);
    else return GameObject::addColorSpriteToParent(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::addMainSpriteToParent(bool p0) {
    if ((void($GameObject::*)(bool)){&$GameObject::addMainSpriteToParent} != (void(D::*)(bool)){&D::addMainSpriteToParent})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x33a5b0))(this, p0);
    else return GameObject::addMainSpriteToParent(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::addToGroup(int p0) {
    if ((void($GameObject::*)(int)){&$GameObject::addToGroup} != (void(D::*)(int)){&D::addToGroup})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x33ad00))(this, p0);
    else return GameObject::addToGroup(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::addToTempOffset(float p0, float p1) {
    if ((void($GameObject::*)(float, float)){&$GameObject::addToTempOffset} != (void(D::*)(float, float)){&D::addToTempOffset})
        return reinterpret_cast<void(*)(decltype(this), float, float)>(m->getOriginal(base+0x335700))(this, p0, p1);
    else return GameObject::addToTempOffset(p0, p1);
}

template<class D, void*** V>
void $GameObject<D, V>::calculateOrientedBox() {
    if ((void($GameObject::*)()){&$GameObject::calculateOrientedBox} != (void(D::*)()){&D::calculateOrientedBox})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x342b20))(this);
    else return GameObject::calculateOrientedBox();
}

template<class D, void*** V>
void $GameObject<D, V>::calculateSpawnXPos() {
    if ((void($GameObject::*)()){&$GameObject::calculateSpawnXPos} != (void(D::*)()){&D::calculateSpawnXPos})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x336970))(this);
    else return GameObject::calculateSpawnXPos();
}

template<class D, void*** V>
void $GameObject<D, V>::canChangeCustomColor() {
    if ((void($GameObject::*)()){&$GameObject::canChangeCustomColor} != (void(D::*)()){&D::canChangeCustomColor})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x342db0))(this);
    else return GameObject::canChangeCustomColor();
}

template<class D, void*** V>
void $GameObject<D, V>::colorForMode(int p0, bool p1) {
    if ((void($GameObject::*)(int, bool)){&$GameObject::colorForMode} != (void(D::*)(int, bool)){&D::colorForMode})
        return reinterpret_cast<void(*)(decltype(this), int, bool)>(m->getOriginal(base+0x343460))(this, p0, p1);
    else return GameObject::colorForMode(p0, p1);
}

template<class D, void*** V>
void $GameObject<D, V>::commonSetup() {
    if ((void($GameObject::*)()){&$GameObject::commonSetup} != (void(D::*)()){&D::commonSetup})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x2f5570))(this);
    else return GameObject::commonSetup();
}

template<class D, void*** V>
void $GameObject<D, V>::copyGroups(GameObject* p0) {
    if ((void($GameObject::*)(GameObject*)){&$GameObject::copyGroups} != (void(D::*)(GameObject*)){&D::copyGroups})
        return reinterpret_cast<void(*)(decltype(this), GameObject*)>(m->getOriginal(base+0x33ae30))(this, p0);
    else return GameObject::copyGroups(p0);
}

template<class D, void*** V>
GameObject* $GameObject<D, V>::createWithFrame(char const* p0) {
    if ((GameObject*(*)(char const*)){&$GameObject::createWithFrame} != (GameObject*(*)(char const*)){&D::createWithFrame})
        return reinterpret_cast<GameObject*(*)(char const*)>(m->getOriginal(base+0x2f5490))(p0);
    else return GameObject::createWithFrame(p0);
}

template<class D, void*** V>
GameObject* $GameObject<D, V>::createWithKey(int p0) {
    if ((GameObject*(*)(int)){&$GameObject::createWithKey} != (GameObject*(*)(int)){&D::createWithKey})
        return reinterpret_cast<GameObject*(*)(int)>(m->getOriginal(base+0x2f4ce0))(p0);
    else return GameObject::createWithKey(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::customSetup() {
    if ((void($GameObject::*)()){&$GameObject::customSetup} != (void(D::*)()){&D::customSetup})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x2fbba0))(this);
    else return GameObject::customSetup();
}

template<class D, void*** V>
void $GameObject<D, V>::deactivateObject(bool p0) {
    if ((void($GameObject::*)(bool)){&$GameObject::deactivateObject} != (void(D::*)(bool)){&D::deactivateObject})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x2fb8f0))(this, p0);
    else return GameObject::deactivateObject(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::destroyObject() {
    if ((void($GameObject::*)()){&$GameObject::destroyObject} != (void(D::*)()){&D::destroyObject})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x336a00))(this);
    else return GameObject::destroyObject();
}

template<class D, void*** V>
void $GameObject<D, V>::determineSlopeDirection() {
    if ((void($GameObject::*)()){&$GameObject::determineSlopeDirection} != (void(D::*)()){&D::determineSlopeDirection})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x33a9e0))(this);
    else return GameObject::determineSlopeDirection();
}

template<class D, void*** V>
void $GameObject<D, V>::getActiveColorForMode(int p0, bool p1) {
    if ((void($GameObject::*)(int, bool)){&$GameObject::getActiveColorForMode} != (void(D::*)(int, bool)){&D::getActiveColorForMode})
        return reinterpret_cast<void(*)(decltype(this), int, bool)>(m->getOriginal(base+0x343860))(this, p0, p1);
    else return GameObject::getActiveColorForMode(p0, p1);
}

template<class D, void*** V>
void $GameObject<D, V>::getBallFrame(int p0) {
    if ((void($GameObject::*)(int)){&$GameObject::getBallFrame} != (void(D::*)(int)){&D::getBallFrame})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x341bf0))(this, p0);
    else return GameObject::getBallFrame(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::getBoxOffset() {
    if ((void($GameObject::*)()){&$GameObject::getBoxOffset} != (void(D::*)()){&D::getBoxOffset})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x3353d0))(this);
    else return GameObject::getBoxOffset();
}

template<class D, void*** V>
const cocos2d::_ccColor3B& $GameObject<D, V>::getColorIndex() {
    if ((const cocos2d::_ccColor3B&($GameObject::*)()){&$GameObject::getColorIndex} != (const cocos2d::_ccColor3B&(D::*)()){&D::getColorIndex})
        return reinterpret_cast<const cocos2d::_ccColor3B&(*)(decltype(this))>(m->getOriginal(base+0x343b90))(this);
    else return GameObject::getColorIndex();
}

template<class D, void*** V>
void $GameObject<D, V>::getDidUpdateLastPosition() {
    if ((void($GameObject::*)()){&$GameObject::getDidUpdateLastPosition} != (void(D::*)()){&D::getDidUpdateLastPosition})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x343a20))(this);
    else return GameObject::getDidUpdateLastPosition();
}

template<class D, void*** V>
int $GameObject<D, V>::getGroupID(int p0) {
    if ((int($GameObject::*)(int)){&$GameObject::getGroupID} != (int(D::*)(int)){&D::getGroupID})
        return reinterpret_cast<int(*)(decltype(this), int)>(m->getOriginal(base+0x33ae10))(this, p0);
    else return GameObject::getGroupID(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::getLastPosition() {
    if ((void($GameObject::*)()){&$GameObject::getLastPosition} != (void(D::*)()){&D::getLastPosition})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x3439d0))(this);
    else return GameObject::getLastPosition();
}

template<class D, void*** V>
void $GameObject<D, V>::getMainColorMode() {
    if ((void($GameObject::*)()){&$GameObject::getMainColorMode} != (void(D::*)()){&D::getMainColorMode})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x334c30))(this);
    else return GameObject::getMainColorMode();
}

template<class D, void*** V>
cocos2d::CCRect* $GameObject<D, V>::getObjectRect() {
    if ((cocos2d::CCRect*($GameObject::*)()){&$GameObject::getObjectRect} != (cocos2d::CCRect*(D::*)()){&D::getObjectRect})
        return reinterpret_cast<cocos2d::CCRect*(*)(decltype(this))>(m->getOriginal(base+0x3352b0))(this);
    else return GameObject::getObjectRect();
}

template<class D, void*** V>
void $GameObject<D, V>::getObjectRect(float p0, float p1) {
    if ((void($GameObject::*)(float, float)){&$GameObject::getObjectRect} != (void(D::*)(float, float)){&D::getObjectRect})
        return reinterpret_cast<void(*)(decltype(this), float, float)>(m->getOriginal(base+0x3352d0))(this, p0, p1);
    else return GameObject::getObjectRect(p0, p1);
}

template<class D, void*** V>
void $GameObject<D, V>::getObjectRect2(float p0, float p1) {
    if ((void($GameObject::*)(float, float)){&$GameObject::getObjectRect2} != (void(D::*)(float, float)){&D::getObjectRect2})
        return reinterpret_cast<void(*)(decltype(this), float, float)>(m->getOriginal(base+0x3354e0))(this, p0, p1);
    else return GameObject::getObjectRect2(p0, p1);
}

template<class D, void*** V>
void $GameObject<D, V>::getObjectRectDirty() {
    if ((void($GameObject::*)()){&$GameObject::getObjectRectDirty} != (void(D::*)()){&D::getObjectRectDirty})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0xdc1d0))(this);
    else return GameObject::getObjectRectDirty();
}

template<class D, void*** V>
void $GameObject<D, V>::getObjectTextureRect() {
    if ((void($GameObject::*)()){&$GameObject::getObjectTextureRect} != (void(D::*)()){&D::getObjectTextureRect})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x3355b0))(this);
    else return GameObject::getObjectTextureRect();
}

template<class D, void*** V>
void $GameObject<D, V>::getObjectZOrder() {
    if ((void($GameObject::*)()){&$GameObject::getObjectZOrder} != (void(D::*)()){&D::getObjectZOrder})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x337d70))(this);
    else return GameObject::getObjectZOrder();
}

template<class D, void*** V>
void $GameObject<D, V>::getOrientedRectDirty() {
    if ((void($GameObject::*)()){&$GameObject::getOrientedRectDirty} != (void(D::*)()){&D::getOrientedRectDirty})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0xdc1f0))(this);
    else return GameObject::getOrientedRectDirty();
}

template<class D, void*** V>
void $GameObject<D, V>::getRScaleX() {
    if ((void($GameObject::*)()){&$GameObject::getRScaleX} != (void(D::*)()){&D::getRScaleX})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x335e50))(this);
    else return GameObject::getRScaleX();
}

template<class D, void*** V>
void $GameObject<D, V>::getRScaleY() {
    if ((void($GameObject::*)()){&$GameObject::getRScaleY} != (void(D::*)()){&D::getRScaleY})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x335e80))(this);
    else return GameObject::getRScaleY();
}

template<class D, void*** V>
std::string $GameObject<D, V>::getSaveString() {
    if ((std::string($GameObject::*)()){&$GameObject::getSaveString} != (std::string(D::*)()){&D::getSaveString})
        return reinterpret_cast<std::string(*)(decltype(this))>(m->getOriginal(base+0x33d3d0))(this);
    else return GameObject::getSaveString();
}

template<class D, void*** V>
void $GameObject<D, V>::getSecondaryColorMode() {
    if ((void($GameObject::*)()){&$GameObject::getSecondaryColorMode} != (void(D::*)()){&D::getSecondaryColorMode})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x341c20))(this);
    else return GameObject::getSecondaryColorMode();
}

template<class D, void*** V>
void $GameObject<D, V>::getSectionIdx() {
    if ((void($GameObject::*)()){&$GameObject::getSectionIdx} != (void(D::*)()){&D::getSectionIdx})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x343a00))(this);
    else return GameObject::getSectionIdx();
}

template<class D, void*** V>
void $GameObject<D, V>::getStartPos() {
    if ((void($GameObject::*)()){&$GameObject::getStartPos} != (void(D::*)()){&D::getStartPos})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0xdc230))(this);
    else return GameObject::getStartPos();
}

template<class D, void*** V>
void $GameObject<D, V>::getType() {
    if ((void($GameObject::*)()){&$GameObject::getType} != (void(D::*)()){&D::getType})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0xdc210))(this);
    else return GameObject::getType();
}

template<class D, void*** V>
void $GameObject<D, V>::groupWasDisabled() {
    if ((void($GameObject::*)()){&$GameObject::groupWasDisabled} != (void(D::*)()){&D::groupWasDisabled})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x33b110))(this);
    else return GameObject::groupWasDisabled();
}

template<class D, void*** V>
void $GameObject<D, V>::groupWasEnabled() {
    if ((void($GameObject::*)()){&$GameObject::groupWasEnabled} != (void(D::*)()){&D::groupWasEnabled})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x33b0f0))(this);
    else return GameObject::groupWasEnabled();
}

template<class D, void*** V>
void $GameObject<D, V>::hasBeenActivated() {
    if ((void($GameObject::*)()){&$GameObject::hasBeenActivated} != (void(D::*)()){&D::hasBeenActivated})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x342a80))(this);
    else return GameObject::hasBeenActivated();
}

template<class D, void*** V>
void $GameObject<D, V>::hasBeenActivatedByPlayer(GameObject* p0) {
    if ((void($GameObject::*)(GameObject*)){&$GameObject::hasBeenActivatedByPlayer} != (void(D::*)(GameObject*)){&D::hasBeenActivatedByPlayer})
        return reinterpret_cast<void(*)(decltype(this), GameObject*)>(m->getOriginal(base+0x342a50))(this, p0);
    else return GameObject::hasBeenActivatedByPlayer(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::hasSecondaryColor() {
    if ((void($GameObject::*)()){&$GameObject::hasSecondaryColor} != (void(D::*)()){&D::hasSecondaryColor})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x342f80))(this);
    else return GameObject::hasSecondaryColor();
}

template<class D, void*** V>
void $GameObject<D, V>::ignoreEnter() {
    if ((void($GameObject::*)()){&$GameObject::ignoreEnter} != (void(D::*)()){&D::ignoreEnter})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x3352a0))(this);
    else return GameObject::ignoreEnter();
}

template<class D, void*** V>
void $GameObject<D, V>::ignoreFade() {
    if ((void($GameObject::*)()){&$GameObject::ignoreFade} != (void(D::*)()){&D::ignoreFade})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x335290))(this);
    else return GameObject::ignoreFade();
}

template<class D, void*** V>
bool $GameObject<D, V>::initWithTexture(cocos2d::CCTexture2D* p0) {
    if ((bool($GameObject::*)(cocos2d::CCTexture2D*)){&$GameObject::initWithTexture} != (bool(D::*)(cocos2d::CCTexture2D*)){&D::initWithTexture})
        return reinterpret_cast<bool(*)(decltype(this), cocos2d::CCTexture2D*)>(m->getOriginal(base+0x2f56a0))(this, p0);
    else return GameObject::initWithTexture(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::isBasicTrigger() {
    if ((void($GameObject::*)()){&$GameObject::isBasicTrigger} != (void(D::*)()){&D::isBasicTrigger})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x343d10))(this);
    else return GameObject::isBasicTrigger();
}

template<class D, void*** V>
void $GameObject<D, V>::isColorTrigger() {
    if ((void($GameObject::*)()){&$GameObject::isColorTrigger} != (void(D::*)()){&D::isColorTrigger})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x343b40))(this);
    else return GameObject::isColorTrigger();
}

template<class D, void*** V>
void $GameObject<D, V>::isFlipX() {
    if ((void($GameObject::*)()){&$GameObject::isFlipX} != (void(D::*)()){&D::isFlipX})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x335a40))(this);
    else return GameObject::isFlipX();
}

template<class D, void*** V>
void $GameObject<D, V>::isFlipY() {
    if ((void($GameObject::*)()){&$GameObject::isFlipY} != (void(D::*)()){&D::isFlipY})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x335a50))(this);
    else return GameObject::isFlipY();
}

template<class D, void*** V>
void $GameObject<D, V>::isSpawnableTrigger() {
    if ((void($GameObject::*)()){&$GameObject::isSpawnableTrigger} != (void(D::*)()){&D::isSpawnableTrigger})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x343a60))(this);
    else return GameObject::isSpawnableTrigger();
}

template<class D, void*** V>
void $GameObject<D, V>::isSpecialObject() {
    if ((void($GameObject::*)()){&$GameObject::isSpecialObject} != (void(D::*)()){&D::isSpecialObject})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x343c40))(this);
    else return GameObject::isSpecialObject();
}

template<class D, void*** V>
GameObject* $GameObject<D, V>::objectFromString(std::string p0, bool p1) {
    if ((GameObject*(*)(std::string, bool)){&$GameObject::objectFromString} != (GameObject*(*)(std::string, bool)){&D::objectFromString})
        return reinterpret_cast<GameObject*(*)(std::string, bool)>(m->getOriginal(base+0x33b720))(p0, p1);
    else return GameObject::objectFromString(p0, p1);
}

template<class D, void*** V>
void $GameObject<D, V>::playShineEffect() {
    if ((void($GameObject::*)()){&$GameObject::playShineEffect} != (void(D::*)()){&D::playShineEffect})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x2fa9d0))(this);
    else return GameObject::playShineEffect();
}

template<class D, void*** V>
void $GameObject<D, V>::powerOffObject() {
    if ((void($GameObject::*)()){&$GameObject::powerOffObject} != (void(D::*)()){&D::powerOffObject})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x3369c0))(this);
    else return GameObject::powerOffObject();
}

template<class D, void*** V>
void $GameObject<D, V>::powerOnObject() {
    if ((void($GameObject::*)()){&$GameObject::powerOnObject} != (void(D::*)()){&D::powerOnObject})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x3369a0))(this);
    else return GameObject::powerOnObject();
}

template<class D, void*** V>
void $GameObject<D, V>::quickUpdatePosition() {
    if ((void($GameObject::*)()){&$GameObject::quickUpdatePosition} != (void(D::*)()){&D::quickUpdatePosition})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x335790))(this);
    else return GameObject::quickUpdatePosition();
}

template<class D, void*** V>
void $GameObject<D, V>::removeFromGroup(int p0) {
    if ((void($GameObject::*)(int)){&$GameObject::removeFromGroup} != (void(D::*)(int)){&D::removeFromGroup})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x33ada0))(this, p0);
    else return GameObject::removeFromGroup(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::removeGlow() {
    if ((void($GameObject::*)()){&$GameObject::removeGlow} != (void(D::*)()){&D::removeGlow})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x2f7f70))(this);
    else return GameObject::removeGlow();
}

template<class D, void*** V>
void $GameObject<D, V>::resetGroupDisabled() {
    if ((void($GameObject::*)()){&$GameObject::resetGroupDisabled} != (void(D::*)()){&D::resetGroupDisabled})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x2fa7e0))(this);
    else return GameObject::resetGroupDisabled();
}

template<class D, void*** V>
void $GameObject<D, V>::saveActiveColors() {
    if ((void($GameObject::*)()){&$GameObject::saveActiveColors} != (void(D::*)()){&D::saveActiveColors})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x33d250))(this);
    else return GameObject::saveActiveColors();
}

template<class D, void*** V>
void $GameObject<D, V>::selectObject(cocos2d::_ccColor3B p0) {
    if ((void($GameObject::*)(cocos2d::_ccColor3B)){&$GameObject::selectObject} != (void(D::*)(cocos2d::_ccColor3B)){&D::selectObject})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::_ccColor3B)>(m->getOriginal(base+0x341f90))(this, p0);
    else return GameObject::selectObject(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::setChildColor(cocos2d::_ccColor3B const& p0) {
    if ((void($GameObject::*)(cocos2d::_ccColor3B const&)){&$GameObject::setChildColor} != (void(D::*)(cocos2d::_ccColor3B const&)){&D::setChildColor})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::_ccColor3B const&)>(m->getOriginal(base+0x341f20))(this, p0);
    else return GameObject::setChildColor(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::setDefaultMainColorMode(int p0) {
    if ((void($GameObject::*)(int)){&$GameObject::setDefaultMainColorMode} != (void(D::*)(int)){&D::setDefaultMainColorMode})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x304fc0))(this, p0);
    else return GameObject::setDefaultMainColorMode(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::setDidUpdateLastPosition(bool const& p0) {
    if ((void($GameObject::*)(bool const&)){&$GameObject::setDidUpdateLastPosition} != (void(D::*)(bool const&)){&D::setDidUpdateLastPosition})
        return reinterpret_cast<void(*)(decltype(this), bool const&)>(m->getOriginal(base+0x343a30))(this, p0);
    else return GameObject::setDidUpdateLastPosition(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::setGlowColor(cocos2d::_ccColor3B const& p0) {
    if ((void($GameObject::*)(cocos2d::_ccColor3B const&)){&$GameObject::setGlowColor} != (void(D::*)(cocos2d::_ccColor3B const&)){&D::setGlowColor})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::_ccColor3B const&)>(m->getOriginal(base+0x341ed0))(this, p0);
    else return GameObject::setGlowColor(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::setGlowOpacity(unsigned char p0) {
    if ((void($GameObject::*)(unsigned char)){&$GameObject::setGlowOpacity} != (void(D::*)(unsigned char)){&D::setGlowOpacity})
        return reinterpret_cast<void(*)(decltype(this), unsigned char)>(m->getOriginal(base+0x336200))(this, p0);
    else return GameObject::setGlowOpacity(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::setLastPosition(cocos2d::CCPoint const& p0) {
    if ((void($GameObject::*)(cocos2d::CCPoint const&)){&$GameObject::setLastPosition} != (void(D::*)(cocos2d::CCPoint const&)){&D::setLastPosition})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCPoint const&)>(m->getOriginal(base+0x3439e0))(this, p0);
    else return GameObject::setLastPosition(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::setMainColorMode(int p0) {
    if ((void($GameObject::*)(int)){&$GameObject::setMainColorMode} != (void(D::*)(int)){&D::setMainColorMode})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x342e70))(this, p0);
    else return GameObject::setMainColorMode(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::setObjectColor(cocos2d::_ccColor3B const& p0) {
    if ((void($GameObject::*)(cocos2d::_ccColor3B const&)){&$GameObject::setObjectColor} != (void(D::*)(cocos2d::_ccColor3B const&)){&D::setObjectColor})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::_ccColor3B const&)>(m->getOriginal(base+0x341c90))(this, p0);
    else return GameObject::setObjectColor(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::setObjectRectDirty(bool p0) {
    if ((void($GameObject::*)(bool)){&$GameObject::setObjectRectDirty} != (void(D::*)(bool)){&D::setObjectRectDirty})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0xdc1e0))(this, p0);
    else return GameObject::setObjectRectDirty(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::setOrientedRectDirty(bool p0) {
    if ((void($GameObject::*)(bool)){&$GameObject::setOrientedRectDirty} != (void(D::*)(bool)){&D::setOrientedRectDirty})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0xdc200))(this, p0);
    else return GameObject::setOrientedRectDirty(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::setPosition(cocos2d::CCPoint const& p0) {
    if ((void($GameObject::*)(cocos2d::CCPoint const&)){&$GameObject::setPosition} != (void(D::*)(cocos2d::CCPoint const&)){&D::setPosition})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCPoint const&)>(m->getOriginal(base+0x335850))(this, p0);
    else return GameObject::setPosition(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::setRScale(float p0) {
    if ((void($GameObject::*)(float)){&$GameObject::setRScale} != (void(D::*)(float)){&D::setRScale})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x335e10))(this, p0);
    else return GameObject::setRScale(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::setRScaleX(float p0) {
    if ((void($GameObject::*)(float)){&$GameObject::setRScaleX} != (void(D::*)(float)){&D::setRScaleX})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x335cb0))(this, p0);
    else return GameObject::setRScaleX(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::setRScaleY(float p0) {
    if ((void($GameObject::*)(float)){&$GameObject::setRScaleY} != (void(D::*)(float)){&D::setRScaleY})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x335d60))(this, p0);
    else return GameObject::setRScaleY(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::setSectionIdx(int const& p0) {
    if ((void($GameObject::*)(int const&)){&$GameObject::setSectionIdx} != (void(D::*)(int const&)){&D::setSectionIdx})
        return reinterpret_cast<void(*)(decltype(this), int const&)>(m->getOriginal(base+0x343a10))(this, p0);
    else return GameObject::setSectionIdx(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::setStartPos(cocos2d::CCPoint p0) {
    if ((void($GameObject::*)(cocos2d::CCPoint)){&$GameObject::setStartPos} != (void(D::*)(cocos2d::CCPoint)){&D::setStartPos})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCPoint)>(m->getOriginal(base+0x2fa520))(this, p0);
    else return GameObject::setStartPos(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::setType(GameObjectType p0) {
    if ((void($GameObject::*)(GameObjectType)){&$GameObject::setType} != (void(D::*)(GameObjectType)){&D::setType})
        return reinterpret_cast<void(*)(decltype(this), GameObjectType)>(m->getOriginal(base+0xdc220))(this, p0);
    else return GameObject::setType(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::setupCoinArt() {
    if ((void($GameObject::*)()){&$GameObject::setupCoinArt} != (void(D::*)()){&D::setupCoinArt})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x337dd0))(this);
    else return GameObject::setupCoinArt();
}

template<class D, void*** V>
void $GameObject<D, V>::setupCustomSprites() {
    if ((void($GameObject::*)()){&$GameObject::setupCustomSprites} != (void(D::*)()){&D::setupCustomSprites})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x307f60))(this);
    else return GameObject::setupCustomSprites();
}

template<class D, void*** V>
void $GameObject<D, V>::slopeFloorTop() {
    if ((void($GameObject::*)()){&$GameObject::slopeFloorTop} != (void(D::*)()){&D::slopeFloorTop})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x342800))(this);
    else return GameObject::slopeFloorTop();
}

template<class D, void*** V>
void $GameObject<D, V>::slopeWallLeft() {
    if ((void($GameObject::*)()){&$GameObject::slopeWallLeft} != (void(D::*)()){&D::slopeWallLeft})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x3427e0))(this);
    else return GameObject::slopeWallLeft();
}

template<class D, void*** V>
void $GameObject<D, V>::spawnXPosition() {
    if ((void($GameObject::*)()){&$GameObject::spawnXPosition} != (void(D::*)()){&D::spawnXPosition})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0xdc1b0))(this);
    else return GameObject::spawnXPosition();
}

template<class D, void*** V>
void $GameObject<D, V>::triggerActivated(float p0) {
    if ((void($GameObject::*)(float)){&$GameObject::triggerActivated} != (void(D::*)(float)){&D::triggerActivated})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x336990))(this, p0);
    else return GameObject::triggerActivated(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::triggerObject(GJBaseGameLayer* p0) {
    if ((void($GameObject::*)(GJBaseGameLayer*)){&$GameObject::triggerObject} != (void(D::*)(GJBaseGameLayer*)){&D::triggerObject})
        return reinterpret_cast<void(*)(decltype(this), GJBaseGameLayer*)>(m->getOriginal(base+0x2fa8f0))(this, p0);
    else return GameObject::triggerObject(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::updateCustomScale(float p0) {
    if ((void($GameObject::*)(float)){&$GameObject::updateCustomScale} != (void(D::*)(float)){&D::updateCustomScale})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x335eb0))(this, p0);
    else return GameObject::updateCustomScale(p0);
}

template<class D, void*** V>
void $GameObject<D, V>::updateMainColor() {
    if ((void($GameObject::*)()){&$GameObject::updateMainColor} != (void(D::*)()){&D::updateMainColor})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x343340))(this);
    else return GameObject::updateMainColor();
}

template<class D, void*** V>
void $GameObject<D, V>::updateOrientedBox() {
    if ((void($GameObject::*)()){&$GameObject::updateOrientedBox} != (void(D::*)()){&D::updateOrientedBox})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x342b50))(this);
    else return GameObject::updateOrientedBox();
}

template<class D, void*** V>
void $GameObject<D, V>::updateSecondaryColor() {
    if ((void($GameObject::*)()){&$GameObject::updateSecondaryColor} != (void(D::*)()){&D::updateSecondaryColor})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x343740))(this);
    else return GameObject::updateSecondaryColor();
}

template<class D, void*** V>
void $GameObject<D, V>::updateStartPos() {
    if ((void($GameObject::*)()){&$GameObject::updateStartPos} != (void(D::*)()){&D::updateStartPos})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x2fa590))(this);
    else return GameObject::updateStartPos();
}

template<class D, void*** V>
void $GameObject<D, V>::updateStartValues() {
    if ((void($GameObject::*)()){&$GameObject::updateStartValues} != (void(D::*)()){&D::updateStartValues})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x2fa800))(this);
    else return GameObject::updateStartValues();
}

template<class D, void*** V>
void $GameObject<D, V>::updateState() {
    if ((void($GameObject::*)()){&$GameObject::updateState} != (void(D::*)()){&D::updateState})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x3369e0))(this);
    else return GameObject::updateState();
}

template<class D, void*** V>
void $GameObject<D, V>::updateSyncedAnimation(float p0) {
    if ((void($GameObject::*)(float)){&$GameObject::updateSyncedAnimation} != (void(D::*)(float)){&D::updateSyncedAnimation})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x337f00))(this, p0);
    else return GameObject::updateSyncedAnimation(p0);
}


template<class D, void*** V>
$GameObjectCopy<D, V>::~$GameObjectCopy() {}

template<class D, void*** V>
$GameObjectCopy<D, V>::$GameObjectCopy() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((GameObjectCopy*(*)(GameObject*)){&$GameObjectCopy::create} != (GameObjectCopy*(*)(GameObject*)){&D::create})
        m->registerHook(base+0x975a0, (GameObjectCopy*(*)(GameObject*)){&D::create});

    if ((void($GameObjectCopy::*)()){&$GameObjectCopy::resetObject} != (void(D::*)()){&D::resetObject})
        m->registerHook(base+0x976a0, extract((void(D::*)()){&D::resetObject}));
}

template<class D, void*** V>
GameObjectCopy* $GameObjectCopy<D, V>::create(GameObject* p0) {
    if ((GameObjectCopy*(*)(GameObject*)){&$GameObjectCopy::create} != (GameObjectCopy*(*)(GameObject*)){&D::create})
        return reinterpret_cast<GameObjectCopy*(*)(GameObject*)>(m->getOriginal(base+0x975a0))(p0);
    else return GameObjectCopy::create(p0);
}

template<class D, void*** V>
void $GameObjectCopy<D, V>::resetObject() {
    if ((void($GameObjectCopy::*)()){&$GameObjectCopy::resetObject} != (void(D::*)()){&D::resetObject})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x976a0))(this);
    else return GameObjectCopy::resetObject();
}


template<class D, void*** V>
$GameSoundManager<D, V>::~$GameSoundManager() {}

template<class D, void*** V>
$GameSoundManager<D, V>::$GameSoundManager() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($GameSoundManager::*)()){&$GameSoundManager::disableMetering} != (void(D::*)()){&D::disableMetering})
        m->registerHook(base+0x362d80, extract((void(D::*)()){&D::disableMetering}));

    if ((void($GameSoundManager::*)()){&$GameSoundManager::enableMetering} != (void(D::*)()){&D::enableMetering})
        m->registerHook(base+0x362d00, extract((void(D::*)()){&D::enableMetering}));

    if ((void($GameSoundManager::*)()){&$GameSoundManager::getMeteringValue} != (void(D::*)()){&D::getMeteringValue})
        m->registerHook(base+0x362db0, extract((void(D::*)()){&D::getMeteringValue}));

    if ((void($GameSoundManager::*)(std::string, bool, bool)){&$GameSoundManager::playBackgroundMusic} != (void(D::*)(std::string, bool, bool)){&D::playBackgroundMusic})
        m->registerHook(base+0x362070, extract((void(D::*)(std::string, bool, bool)){&D::playBackgroundMusic}));

    if ((void($GameSoundManager::*)(std::string, float, float, float)){&$GameSoundManager::playEffect} != (void(D::*)(std::string, float, float, float)){&D::playEffect})
        m->registerHook(base+0x3623d0, extract((void(D::*)(std::string, float, float, float)){&D::playEffect}));

    if ((void($GameSoundManager::*)()){&$GameSoundManager::sharedManager} != (void(D::*)()){&D::sharedManager})
        m->registerHook(base+0x3610f0, extract((void(D::*)()){&D::sharedManager}));

    if ((void($GameSoundManager::*)()){&$GameSoundManager::stopBackgroundMusic} != (void(D::*)()){&D::stopBackgroundMusic})
        m->registerHook(base+0x362130, extract((void(D::*)()){&D::stopBackgroundMusic}));
}

template<class D, void*** V>
void $GameSoundManager<D, V>::disableMetering() {
    if ((void($GameSoundManager::*)()){&$GameSoundManager::disableMetering} != (void(D::*)()){&D::disableMetering})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x362d80))(this);
    else return GameSoundManager::disableMetering();
}

template<class D, void*** V>
void $GameSoundManager<D, V>::enableMetering() {
    if ((void($GameSoundManager::*)()){&$GameSoundManager::enableMetering} != (void(D::*)()){&D::enableMetering})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x362d00))(this);
    else return GameSoundManager::enableMetering();
}

template<class D, void*** V>
void $GameSoundManager<D, V>::getMeteringValue() {
    if ((void($GameSoundManager::*)()){&$GameSoundManager::getMeteringValue} != (void(D::*)()){&D::getMeteringValue})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x362db0))(this);
    else return GameSoundManager::getMeteringValue();
}

template<class D, void*** V>
void $GameSoundManager<D, V>::playBackgroundMusic(std::string p0, bool p1, bool p2) {
    if ((void($GameSoundManager::*)(std::string, bool, bool)){&$GameSoundManager::playBackgroundMusic} != (void(D::*)(std::string, bool, bool)){&D::playBackgroundMusic})
        return reinterpret_cast<void(*)(decltype(this), std::string, bool, bool)>(m->getOriginal(base+0x362070))(this, p0, p1, p2);
    else return GameSoundManager::playBackgroundMusic(p0, p1, p2);
}

template<class D, void*** V>
void $GameSoundManager<D, V>::playEffect(std::string p0, float p1, float p2, float p3) {
    if ((void($GameSoundManager::*)(std::string, float, float, float)){&$GameSoundManager::playEffect} != (void(D::*)(std::string, float, float, float)){&D::playEffect})
        return reinterpret_cast<void(*)(decltype(this), std::string, float, float, float)>(m->getOriginal(base+0x3623d0))(this, p0, p1, p2, p3);
    else return GameSoundManager::playEffect(p0, p1, p2, p3);
}

template<class D, void*** V>
void $GameSoundManager<D, V>::sharedManager() {
    if ((void($GameSoundManager::*)()){&$GameSoundManager::sharedManager} != (void(D::*)()){&D::sharedManager})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x3610f0))(this);
    else return GameSoundManager::sharedManager();
}

template<class D, void*** V>
void $GameSoundManager<D, V>::stopBackgroundMusic() {
    if ((void($GameSoundManager::*)()){&$GameSoundManager::stopBackgroundMusic} != (void(D::*)()){&D::stopBackgroundMusic})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x362130))(this);
    else return GameSoundManager::stopBackgroundMusic();
}


template<class D, void*** V>
$GameStatsManager<D, V>::~$GameStatsManager() {}

template<class D, void*** V>
$GameStatsManager<D, V>::$GameStatsManager() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($GameStatsManager::*)(GJGameLevel*)){&$GameStatsManager::awardCurrencyForLevel} != (void(D::*)(GJGameLevel*)){&D::awardCurrencyForLevel})
        m->registerHook(base+0x43600, extract((void(D::*)(GJGameLevel*)){&D::awardCurrencyForLevel}));

    if ((void($GameStatsManager::*)(GJGameLevel*)){&$GameStatsManager::awardDiamondsForLevel} != (void(D::*)(GJGameLevel*)){&D::awardDiamondsForLevel})
        m->registerHook(base+0x43c60, extract((void(D::*)(GJGameLevel*)){&D::awardDiamondsForLevel}));

    if ((void($GameStatsManager::*)()){&$GameStatsManager::awardSecretKey} != (void(D::*)()){&D::awardSecretKey})
        m->registerHook(base+0x4b1e0, extract((void(D::*)()){&D::awardSecretKey}));

    if ((void($GameStatsManager::*)(char const*)){&$GameStatsManager::getSecretCoinKey} != (void(D::*)(char const*)){&D::getSecretCoinKey})
        m->registerHook(base+0x429f0, extract((void(D::*)(char const*)){&D::getSecretCoinKey}));

    if ((void($GameStatsManager::*)(char const*)){&$GameStatsManager::getStat} != (void(D::*)(char const*)){&D::getStat})
        m->registerHook(base+0x3d310, extract((void(D::*)(char const*)){&D::getStat}));

    if ((void($GameStatsManager::*)(char const*)){&$GameStatsManager::hasPendingUserCoin} != (void(D::*)(char const*)){&D::hasPendingUserCoin})
        m->registerHook(base+0x42730, extract((void(D::*)(char const*)){&D::hasPendingUserCoin}));

    if ((void($GameStatsManager::*)(char const*)){&$GameStatsManager::hasSecretCoin} != (void(D::*)(char const*)){&D::hasSecretCoin})
        m->registerHook(base+0x40730, extract((void(D::*)(char const*)){&D::hasSecretCoin}));

    if ((void($GameStatsManager::*)(char const*)){&$GameStatsManager::hasUserCoin} != (void(D::*)(char const*)){&D::hasUserCoin})
        m->registerHook(base+0x427e0, extract((void(D::*)(char const*)){&D::hasUserCoin}));

    if ((void($GameStatsManager::*)(char const*)){&$GameStatsManager::incrementStat} != (void(D::*)(char const*)){&D::incrementStat})
        m->registerHook(base+0x3d6d0, extract((void(D::*)(char const*)){&D::incrementStat}));

    if ((void($GameStatsManager::*)(char const*, int)){&$GameStatsManager::incrementStat} != (void(D::*)(char const*, int)){&D::incrementStat})
        m->registerHook(base+0x3d6e0, extract((void(D::*)(char const*, int)){&D::incrementStat}));

    if ((void($GameStatsManager::*)()){&$GameStatsManager::sharedState} != (void(D::*)()){&D::sharedState})
        m->registerHook(base+0x38f20, extract((void(D::*)()){&D::sharedState}));

    if ((void($GameStatsManager::*)(char const*)){&$GameStatsManager::storePendingUserCoin} != (void(D::*)(char const*)){&D::storePendingUserCoin})
        m->registerHook(base+0x42940, extract((void(D::*)(char const*)){&D::storePendingUserCoin}));

    if ((void($GameStatsManager::*)(char const*)){&$GameStatsManager::storeSecretCoin} != (void(D::*)(char const*)){&D::storeSecretCoin})
        m->registerHook(base+0x42a10, extract((void(D::*)(char const*)){&D::storeSecretCoin}));

    if ((void($GameStatsManager::*)(char const*)){&$GameStatsManager::storeUserCoin} != (void(D::*)(char const*)){&D::storeUserCoin})
        m->registerHook(base+0x42890, extract((void(D::*)(char const*)){&D::storeUserCoin}));
}

template<class D, void*** V>
void $GameStatsManager<D, V>::awardCurrencyForLevel(GJGameLevel* p0) {
    if ((void($GameStatsManager::*)(GJGameLevel*)){&$GameStatsManager::awardCurrencyForLevel} != (void(D::*)(GJGameLevel*)){&D::awardCurrencyForLevel})
        return reinterpret_cast<void(*)(decltype(this), GJGameLevel*)>(m->getOriginal(base+0x43600))(this, p0);
    else return GameStatsManager::awardCurrencyForLevel(p0);
}

template<class D, void*** V>
void $GameStatsManager<D, V>::awardDiamondsForLevel(GJGameLevel* p0) {
    if ((void($GameStatsManager::*)(GJGameLevel*)){&$GameStatsManager::awardDiamondsForLevel} != (void(D::*)(GJGameLevel*)){&D::awardDiamondsForLevel})
        return reinterpret_cast<void(*)(decltype(this), GJGameLevel*)>(m->getOriginal(base+0x43c60))(this, p0);
    else return GameStatsManager::awardDiamondsForLevel(p0);
}

template<class D, void*** V>
void $GameStatsManager<D, V>::awardSecretKey() {
    if ((void($GameStatsManager::*)()){&$GameStatsManager::awardSecretKey} != (void(D::*)()){&D::awardSecretKey})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x4b1e0))(this);
    else return GameStatsManager::awardSecretKey();
}

template<class D, void*** V>
void $GameStatsManager<D, V>::getSecretCoinKey(char const* p0) {
    if ((void($GameStatsManager::*)(char const*)){&$GameStatsManager::getSecretCoinKey} != (void(D::*)(char const*)){&D::getSecretCoinKey})
        return reinterpret_cast<void(*)(decltype(this), char const*)>(m->getOriginal(base+0x429f0))(this, p0);
    else return GameStatsManager::getSecretCoinKey(p0);
}

template<class D, void*** V>
void $GameStatsManager<D, V>::getStat(char const* p0) {
    if ((void($GameStatsManager::*)(char const*)){&$GameStatsManager::getStat} != (void(D::*)(char const*)){&D::getStat})
        return reinterpret_cast<void(*)(decltype(this), char const*)>(m->getOriginal(base+0x3d310))(this, p0);
    else return GameStatsManager::getStat(p0);
}

template<class D, void*** V>
void $GameStatsManager<D, V>::hasPendingUserCoin(char const* p0) {
    if ((void($GameStatsManager::*)(char const*)){&$GameStatsManager::hasPendingUserCoin} != (void(D::*)(char const*)){&D::hasPendingUserCoin})
        return reinterpret_cast<void(*)(decltype(this), char const*)>(m->getOriginal(base+0x42730))(this, p0);
    else return GameStatsManager::hasPendingUserCoin(p0);
}

template<class D, void*** V>
void $GameStatsManager<D, V>::hasSecretCoin(char const* p0) {
    if ((void($GameStatsManager::*)(char const*)){&$GameStatsManager::hasSecretCoin} != (void(D::*)(char const*)){&D::hasSecretCoin})
        return reinterpret_cast<void(*)(decltype(this), char const*)>(m->getOriginal(base+0x40730))(this, p0);
    else return GameStatsManager::hasSecretCoin(p0);
}

template<class D, void*** V>
void $GameStatsManager<D, V>::hasUserCoin(char const* p0) {
    if ((void($GameStatsManager::*)(char const*)){&$GameStatsManager::hasUserCoin} != (void(D::*)(char const*)){&D::hasUserCoin})
        return reinterpret_cast<void(*)(decltype(this), char const*)>(m->getOriginal(base+0x427e0))(this, p0);
    else return GameStatsManager::hasUserCoin(p0);
}

template<class D, void*** V>
void $GameStatsManager<D, V>::incrementStat(char const* p0) {
    if ((void($GameStatsManager::*)(char const*)){&$GameStatsManager::incrementStat} != (void(D::*)(char const*)){&D::incrementStat})
        return reinterpret_cast<void(*)(decltype(this), char const*)>(m->getOriginal(base+0x3d6d0))(this, p0);
    else return GameStatsManager::incrementStat(p0);
}

template<class D, void*** V>
void $GameStatsManager<D, V>::incrementStat(char const* p0, int p1) {
    if ((void($GameStatsManager::*)(char const*, int)){&$GameStatsManager::incrementStat} != (void(D::*)(char const*, int)){&D::incrementStat})
        return reinterpret_cast<void(*)(decltype(this), char const*, int)>(m->getOriginal(base+0x3d6e0))(this, p0, p1);
    else return GameStatsManager::incrementStat(p0, p1);
}

template<class D, void*** V>
void $GameStatsManager<D, V>::sharedState() {
    if ((void($GameStatsManager::*)()){&$GameStatsManager::sharedState} != (void(D::*)()){&D::sharedState})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x38f20))(this);
    else return GameStatsManager::sharedState();
}

template<class D, void*** V>
void $GameStatsManager<D, V>::storePendingUserCoin(char const* p0) {
    if ((void($GameStatsManager::*)(char const*)){&$GameStatsManager::storePendingUserCoin} != (void(D::*)(char const*)){&D::storePendingUserCoin})
        return reinterpret_cast<void(*)(decltype(this), char const*)>(m->getOriginal(base+0x42940))(this, p0);
    else return GameStatsManager::storePendingUserCoin(p0);
}

template<class D, void*** V>
void $GameStatsManager<D, V>::storeSecretCoin(char const* p0) {
    if ((void($GameStatsManager::*)(char const*)){&$GameStatsManager::storeSecretCoin} != (void(D::*)(char const*)){&D::storeSecretCoin})
        return reinterpret_cast<void(*)(decltype(this), char const*)>(m->getOriginal(base+0x42a10))(this, p0);
    else return GameStatsManager::storeSecretCoin(p0);
}

template<class D, void*** V>
void $GameStatsManager<D, V>::storeUserCoin(char const* p0) {
    if ((void($GameStatsManager::*)(char const*)){&$GameStatsManager::storeUserCoin} != (void(D::*)(char const*)){&D::storeUserCoin})
        return reinterpret_cast<void(*)(decltype(this), char const*)>(m->getOriginal(base+0x42890))(this, p0);
    else return GameStatsManager::storeUserCoin(p0);
}


template<class D, void*** V>
$GameToolbox<D, V>::~$GameToolbox() {}

template<class D, void*** V>
$GameToolbox<D, V>::$GameToolbox() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void(*)(std::string, cocos2d::SEL_CallFuncO, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, float, float, float, cocos2d::CCPoint, char const*, bool, int, cocos2d::CCArray*)){&$GameToolbox::createToggleButton} != (void(*)(std::string, cocos2d::SEL_CallFuncO, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, float, float, float, cocos2d::CCPoint, char const*, bool, int, cocos2d::CCArray*)){&D::createToggleButton})
        m->registerHook(base+0x28bdd0, (void(*)(std::string, cocos2d::SEL_CallFuncO, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, float, float, float, cocos2d::CCPoint, char const*, bool, int, cocos2d::CCArray*)){&D::createToggleButton});

    if ((void(*)(GameObject*, cocos2d::CCPoint)){&$GameToolbox::getRelativeOffset} != (void(*)(GameObject*, cocos2d::CCPoint)){&D::getRelativeOffset})
        m->registerHook(base+0x28c060, (void(*)(GameObject*, cocos2d::CCPoint)){&D::getRelativeOffset});

    if ((void(*)(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float)){&$GameToolbox::multipliedColorValue} != (void(*)(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float)){&D::multipliedColorValue})
        m->registerHook(base+0x28cb90, (void(*)(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float)){&D::multipliedColorValue});

    if ((void(*)(std::string, char const*)){&$GameToolbox::stringSetupToDict} != (void(*)(std::string, char const*)){&D::stringSetupToDict})
        m->registerHook(base+0x28d700, (void(*)(std::string, char const*)){&D::stringSetupToDict});

    if ((std::map<std::string, std::string>(*)(std::string, char const*)){&$GameToolbox::stringSetupToMap} != (std::map<std::string, std::string>(*)(std::string, char const*)){&D::stringSetupToMap})
        m->registerHook(base+0x28d4c0, (std::map<std::string, std::string>(*)(std::string, char const*)){&D::stringSetupToMap});

    if ((void(*)(cocos2d::_ccColor3B const&, cocos2d::_ccHSVValue)){&$GameToolbox::transformColor} != (void(*)(cocos2d::_ccColor3B const&, cocos2d::_ccHSVValue)){&D::transformColor})
        m->registerHook(base+0x28c950, (void(*)(cocos2d::_ccColor3B const&, cocos2d::_ccHSVValue)){&D::transformColor});

    if ((void(*)(cocos2d::_ccColor3B const&, float, float, float)){&$GameToolbox::transformColor} != (void(*)(cocos2d::_ccColor3B const&, float, float, float)){&D::transformColor})
        m->registerHook(base+0x28c930, (void(*)(cocos2d::_ccColor3B const&, float, float, float)){&D::transformColor});
}

template<class D, void*** V>
void $GameToolbox<D, V>::createToggleButton(std::string p0, cocos2d::SEL_CallFuncO p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, cocos2d::CCNode* p5, cocos2d::CCNode* p6, float p7, float p8, float p9, cocos2d::CCPoint p10, char const* p11, bool p12, int p13, cocos2d::CCArray* p14) {
    if ((void(*)(std::string, cocos2d::SEL_CallFuncO, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, float, float, float, cocos2d::CCPoint, char const*, bool, int, cocos2d::CCArray*)){&$GameToolbox::createToggleButton} != (void(*)(std::string, cocos2d::SEL_CallFuncO, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, float, float, float, cocos2d::CCPoint, char const*, bool, int, cocos2d::CCArray*)){&D::createToggleButton})
        return reinterpret_cast<void(*)(std::string, cocos2d::SEL_CallFuncO, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, float, float, float, cocos2d::CCPoint, char const*, bool, int, cocos2d::CCArray*)>(m->getOriginal(base+0x28bdd0))(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14);
    else return GameToolbox::createToggleButton(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14);
}

template<class D, void*** V>
void $GameToolbox<D, V>::getRelativeOffset(GameObject* p0, cocos2d::CCPoint p1) {
    if ((void(*)(GameObject*, cocos2d::CCPoint)){&$GameToolbox::getRelativeOffset} != (void(*)(GameObject*, cocos2d::CCPoint)){&D::getRelativeOffset})
        return reinterpret_cast<void(*)(GameObject*, cocos2d::CCPoint)>(m->getOriginal(base+0x28c060))(p0, p1);
    else return GameToolbox::getRelativeOffset(p0, p1);
}

template<class D, void*** V>
void $GameToolbox<D, V>::multipliedColorValue(cocos2d::_ccColor3B p0, cocos2d::_ccColor3B p1, float p2) {
    if ((void(*)(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float)){&$GameToolbox::multipliedColorValue} != (void(*)(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float)){&D::multipliedColorValue})
        return reinterpret_cast<void(*)(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float)>(m->getOriginal(base+0x28cb90))(p0, p1, p2);
    else return GameToolbox::multipliedColorValue(p0, p1, p2);
}

template<class D, void*** V>
void $GameToolbox<D, V>::stringSetupToDict(std::string p0, char const* p1) {
    if ((void(*)(std::string, char const*)){&$GameToolbox::stringSetupToDict} != (void(*)(std::string, char const*)){&D::stringSetupToDict})
        return reinterpret_cast<void(*)(std::string, char const*)>(m->getOriginal(base+0x28d700))(p0, p1);
    else return GameToolbox::stringSetupToDict(p0, p1);
}

template<class D, void*** V>
std::map<std::string, std::string> $GameToolbox<D, V>::stringSetupToMap(std::string p0, char const* p1) {
    if ((std::map<std::string, std::string>(*)(std::string, char const*)){&$GameToolbox::stringSetupToMap} != (std::map<std::string, std::string>(*)(std::string, char const*)){&D::stringSetupToMap})
        return reinterpret_cast<std::map<std::string, std::string>(*)(std::string, char const*)>(m->getOriginal(base+0x28d4c0))(p0, p1);
    else return GameToolbox::stringSetupToMap(p0, p1);
}

template<class D, void*** V>
void $GameToolbox<D, V>::transformColor(cocos2d::_ccColor3B const& p0, cocos2d::_ccHSVValue p1) {
    if ((void(*)(cocos2d::_ccColor3B const&, cocos2d::_ccHSVValue)){&$GameToolbox::transformColor} != (void(*)(cocos2d::_ccColor3B const&, cocos2d::_ccHSVValue)){&D::transformColor})
        return reinterpret_cast<void(*)(cocos2d::_ccColor3B const&, cocos2d::_ccHSVValue)>(m->getOriginal(base+0x28c950))(p0, p1);
    else return GameToolbox::transformColor(p0, p1);
}

template<class D, void*** V>
void $GameToolbox<D, V>::transformColor(cocos2d::_ccColor3B const& p0, float p1, float p2, float p3) {
    if ((void(*)(cocos2d::_ccColor3B const&, float, float, float)){&$GameToolbox::transformColor} != (void(*)(cocos2d::_ccColor3B const&, float, float, float)){&D::transformColor})
        return reinterpret_cast<void(*)(cocos2d::_ccColor3B const&, float, float, float)>(m->getOriginal(base+0x28c930))(p0, p1, p2, p3);
    else return GameToolbox::transformColor(p0, p1, p2, p3);
}


template<class D, void*** V>
$GravityEffectSprite<D, V>::~$GravityEffectSprite() {}

template<class D, void*** V>
$GravityEffectSprite<D, V>::$GravityEffectSprite() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((GravityEffectSprite*(*)()){&$GravityEffectSprite::create} != (GravityEffectSprite*(*)()){&D::create})
        m->registerHook(base+0x6d0a0, (GravityEffectSprite*(*)()){&D::create});

    if ((bool($GravityEffectSprite::*)()){&$GravityEffectSprite::init} != (bool(D::*)()){&D::init})
        m->registerHook(base+0x80b20, extract((bool(D::*)()){&D::init}));

    if ((void($GravityEffectSprite::*)(cocos2d::_ccColor3B)){&$GravityEffectSprite::updateSpritesColor} != (void(D::*)(cocos2d::_ccColor3B)){&D::updateSpritesColor})
        m->registerHook(base+0x7ce30, extract((void(D::*)(cocos2d::_ccColor3B)){&D::updateSpritesColor}));
}

template<class D, void*** V>
GravityEffectSprite* $GravityEffectSprite<D, V>::create() {
    if ((GravityEffectSprite*(*)()){&$GravityEffectSprite::create} != (GravityEffectSprite*(*)()){&D::create})
        return reinterpret_cast<GravityEffectSprite*(*)()>(m->getOriginal(base+0x6d0a0))();
    else return GravityEffectSprite::create();
}

template<class D, void*** V>
bool $GravityEffectSprite<D, V>::init() {
    if ((bool($GravityEffectSprite::*)()){&$GravityEffectSprite::init} != (bool(D::*)()){&D::init})
        return reinterpret_cast<bool(*)(decltype(this))>(m->getOriginal(base+0x80b20))(this);
    else return GravityEffectSprite::init();
}

template<class D, void*** V>
void $GravityEffectSprite<D, V>::updateSpritesColor(cocos2d::_ccColor3B p0) {
    if ((void($GravityEffectSprite::*)(cocos2d::_ccColor3B)){&$GravityEffectSprite::updateSpritesColor} != (void(D::*)(cocos2d::_ccColor3B)){&D::updateSpritesColor})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::_ccColor3B)>(m->getOriginal(base+0x7ce30))(this, p0);
    else return GravityEffectSprite::updateSpritesColor(p0);
}


template<class D, void*** V>
$GroupCommandObject<D, V>::~$GroupCommandObject() {}

template<class D, void*** V>
$GroupCommandObject<D, V>::$GroupCommandObject() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((GroupCommandObject*(*)()){&$GroupCommandObject::create} != (GroupCommandObject*(*)()){&D::create})
        m->registerHook(base+0x18b460, (GroupCommandObject*(*)()){&D::create});

    if ((GroupCommandObject*(*)(std::string)){&$GroupCommandObject::createFromString} != (GroupCommandObject*(*)(std::string)){&D::createFromString})
        m->registerHook(base+0x16ece0, (GroupCommandObject*(*)(std::string)){&D::createFromString});

    if ((void($GroupCommandObject::*)(int)){&$GroupCommandObject::easeToText} != (void(D::*)(int)){&D::easeToText})
        m->registerHook(base+0x16ecb0, extract((void(D::*)(int)){&D::easeToText}));

    if ((void($GroupCommandObject::*)(cocos2d::CCActionInterval*, int, float)){&$GroupCommandObject::getEasedAction} != (void(D::*)(cocos2d::CCActionInterval*, int, float)){&D::getEasedAction})
        m->registerHook(base+0x16e7b0, extract((void(D::*)(cocos2d::CCActionInterval*, int, float)){&D::getEasedAction}));

    if ((void($GroupCommandObject::*)(cocos2d::CCPoint, float, int, float, bool, bool)){&$GroupCommandObject::runMoveCommand} != (void(D::*)(cocos2d::CCPoint, float, int, float, bool, bool)){&D::runMoveCommand})
        m->registerHook(base+0x16e640, extract((void(D::*)(cocos2d::CCPoint, float, int, float, bool, bool)){&D::runMoveCommand}));

    if ((void($GroupCommandObject::*)(float, float, int, float, bool)){&$GroupCommandObject::runRotateCommand} != (void(D::*)(float, float, int, float, bool)){&D::runRotateCommand})
        m->registerHook(base+0x16e8f0, extract((void(D::*)(float, float, int, float, bool)){&D::runRotateCommand}));
}

template<class D, void*** V>
GroupCommandObject* $GroupCommandObject<D, V>::create() {
    if ((GroupCommandObject*(*)()){&$GroupCommandObject::create} != (GroupCommandObject*(*)()){&D::create})
        return reinterpret_cast<GroupCommandObject*(*)()>(m->getOriginal(base+0x18b460))();
    else return GroupCommandObject::create();
}

template<class D, void*** V>
GroupCommandObject* $GroupCommandObject<D, V>::createFromString(std::string p0) {
    if ((GroupCommandObject*(*)(std::string)){&$GroupCommandObject::createFromString} != (GroupCommandObject*(*)(std::string)){&D::createFromString})
        return reinterpret_cast<GroupCommandObject*(*)(std::string)>(m->getOriginal(base+0x16ece0))(p0);
    else return GroupCommandObject::createFromString(p0);
}

template<class D, void*** V>
void $GroupCommandObject<D, V>::easeToText(int p0) {
    if ((void($GroupCommandObject::*)(int)){&$GroupCommandObject::easeToText} != (void(D::*)(int)){&D::easeToText})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x16ecb0))(this, p0);
    else return GroupCommandObject::easeToText(p0);
}

template<class D, void*** V>
void $GroupCommandObject<D, V>::getEasedAction(cocos2d::CCActionInterval* p0, int p1, float p2) {
    if ((void($GroupCommandObject::*)(cocos2d::CCActionInterval*, int, float)){&$GroupCommandObject::getEasedAction} != (void(D::*)(cocos2d::CCActionInterval*, int, float)){&D::getEasedAction})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCActionInterval*, int, float)>(m->getOriginal(base+0x16e7b0))(this, p0, p1, p2);
    else return GroupCommandObject::getEasedAction(p0, p1, p2);
}

template<class D, void*** V>
void $GroupCommandObject<D, V>::runMoveCommand(cocos2d::CCPoint p0, float p1, int p2, float p3, bool p4, bool p5) {
    if ((void($GroupCommandObject::*)(cocos2d::CCPoint, float, int, float, bool, bool)){&$GroupCommandObject::runMoveCommand} != (void(D::*)(cocos2d::CCPoint, float, int, float, bool, bool)){&D::runMoveCommand})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCPoint, float, int, float, bool, bool)>(m->getOriginal(base+0x16e640))(this, p0, p1, p2, p3, p4, p5);
    else return GroupCommandObject::runMoveCommand(p0, p1, p2, p3, p4, p5);
}

template<class D, void*** V>
void $GroupCommandObject<D, V>::runRotateCommand(float p0, float p1, int p2, float p3, bool p4) {
    if ((void($GroupCommandObject::*)(float, float, int, float, bool)){&$GroupCommandObject::runRotateCommand} != (void(D::*)(float, float, int, float, bool)){&D::runRotateCommand})
        return reinterpret_cast<void(*)(decltype(this), float, float, int, float, bool)>(m->getOriginal(base+0x16e8f0))(this, p0, p1, p2, p3, p4);
    else return GroupCommandObject::runRotateCommand(p0, p1, p2, p3, p4);
}


template<class D, void*** V>
$HardStreak<D, V>::~$HardStreak() {}

template<class D, void*** V>
$HardStreak<D, V>::$HardStreak() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($HardStreak::*)(cocos2d::CCPoint)){&$HardStreak::addPoint} != (void(D::*)(cocos2d::CCPoint)){&D::addPoint})
        m->registerHook(base+0x5c950, extract((void(D::*)(cocos2d::CCPoint)){&D::addPoint}));

    if ((void($HardStreak::*)()){&$HardStreak::reset} != (void(D::*)()){&D::reset})
        m->registerHook(base+0x5c930, extract((void(D::*)()){&D::reset}));

    if ((void($HardStreak::*)()){&$HardStreak::resumeStroke} != (void(D::*)()){&D::resumeStroke})
        m->registerHook(base+0x5c210, extract((void(D::*)()){&D::resumeStroke}));

    if ((void($HardStreak::*)()){&$HardStreak::stopStroke} != (void(D::*)()){&D::stopStroke})
        m->registerHook(base+0x5c8f0, extract((void(D::*)()){&D::stopStroke}));
}

template<class D, void*** V>
void $HardStreak<D, V>::addPoint(cocos2d::CCPoint p0) {
    if ((void($HardStreak::*)(cocos2d::CCPoint)){&$HardStreak::addPoint} != (void(D::*)(cocos2d::CCPoint)){&D::addPoint})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCPoint)>(m->getOriginal(base+0x5c950))(this, p0);
    else return HardStreak::addPoint(p0);
}

template<class D, void*** V>
void $HardStreak<D, V>::reset() {
    if ((void($HardStreak::*)()){&$HardStreak::reset} != (void(D::*)()){&D::reset})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x5c930))(this);
    else return HardStreak::reset();
}

template<class D, void*** V>
void $HardStreak<D, V>::resumeStroke() {
    if ((void($HardStreak::*)()){&$HardStreak::resumeStroke} != (void(D::*)()){&D::resumeStroke})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x5c210))(this);
    else return HardStreak::resumeStroke();
}

template<class D, void*** V>
void $HardStreak<D, V>::stopStroke() {
    if ((void($HardStreak::*)()){&$HardStreak::stopStroke} != (void(D::*)()){&D::stopStroke})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x5c8f0))(this);
    else return HardStreak::stopStroke();
}


template<class D, void*** V>
$InfoLayer<D, V>::~$InfoLayer() {}

template<class D, void*** V>
$InfoLayer<D, V>::$InfoLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($InfoLayer::*)(int, bool)){&$InfoLayer::loadPage} != (void(D::*)(int, bool)){&D::loadPage})
        m->registerHook(base+0x458fb0, extract((void(D::*)(int, bool)){&D::loadPage}));

    if ((void($InfoLayer::*)(cocos2d::CCObject*)){&$InfoLayer::onRefreshComments} != (void(D::*)(cocos2d::CCObject*)){&D::onRefreshComments})
        m->registerHook(base+0x459b60, extract((void(D::*)(cocos2d::CCObject*)){&D::onRefreshComments}));
}

template<class D, void*** V>
void $InfoLayer<D, V>::loadPage(int p0, bool p1) {
    if ((void($InfoLayer::*)(int, bool)){&$InfoLayer::loadPage} != (void(D::*)(int, bool)){&D::loadPage})
        return reinterpret_cast<void(*)(decltype(this), int, bool)>(m->getOriginal(base+0x458fb0))(this, p0, p1);
    else return InfoLayer::loadPage(p0, p1);
}

template<class D, void*** V>
void $InfoLayer<D, V>::onRefreshComments(cocos2d::CCObject* p0) {
    if ((void($InfoLayer::*)(cocos2d::CCObject*)){&$InfoLayer::onRefreshComments} != (void(D::*)(cocos2d::CCObject*)){&D::onRefreshComments})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x459b60))(this, p0);
    else return InfoLayer::onRefreshComments(p0);
}


template<class D, void*** V>
$InheritanceNode<D, V>::~$InheritanceNode() {}

template<class D, void*** V>
$InheritanceNode<D, V>::$InheritanceNode() {
    m->registerHook(extract_destructor(V), +[](){});
}


template<class D, void*** V>
$EffectGameObject<D, V>::~$EffectGameObject() {}

template<class D, void*** V>
$EffectGameObject<D, V>::$EffectGameObject() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((EffectGameObject*(*)(char const*)){&$EffectGameObject::create} != (EffectGameObject*(*)(char const*)){&D::create})
        m->registerHook(base+0xc9790, (EffectGameObject*(*)(char const*)){&D::create});

    if ((void($EffectGameObject::*)()){&$EffectGameObject::getTargetColorIndex} != (void(D::*)()){&D::getTargetColorIndex})
        m->registerHook(base+0xca1f0, extract((void(D::*)()){&D::getTargetColorIndex}));

    if ((void($EffectGameObject::*)(GJBaseGameLayer*)){&$EffectGameObject::triggerObject} != (void(D::*)(GJBaseGameLayer*)){&D::triggerObject})
        m->registerHook(base+0xc9870, extract((void(D::*)(GJBaseGameLayer*)){&D::triggerObject}));
}

template<class D, void*** V>
EffectGameObject* $EffectGameObject<D, V>::create(char const* p0) {
    if ((EffectGameObject*(*)(char const*)){&$EffectGameObject::create} != (EffectGameObject*(*)(char const*)){&D::create})
        return reinterpret_cast<EffectGameObject*(*)(char const*)>(m->getOriginal(base+0xc9790))(p0);
    else return EffectGameObject::create(p0);
}

template<class D, void*** V>
void $EffectGameObject<D, V>::getTargetColorIndex() {
    if ((void($EffectGameObject::*)()){&$EffectGameObject::getTargetColorIndex} != (void(D::*)()){&D::getTargetColorIndex})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0xca1f0))(this);
    else return EffectGameObject::getTargetColorIndex();
}

template<class D, void*** V>
void $EffectGameObject<D, V>::triggerObject(GJBaseGameLayer* p0) {
    if ((void($EffectGameObject::*)(GJBaseGameLayer*)){&$EffectGameObject::triggerObject} != (void(D::*)(GJBaseGameLayer*)){&D::triggerObject})
        return reinterpret_cast<void(*)(decltype(this), GJBaseGameLayer*)>(m->getOriginal(base+0xc9870))(this, p0);
    else return EffectGameObject::triggerObject(p0);
}


template<class D, void*** V>
$EndPortalObject<D, V>::~$EndPortalObject() {}

template<class D, void*** V>
$EndPortalObject<D, V>::$EndPortalObject() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((EndPortalObject*(*)()){&$EndPortalObject::create} != (EndPortalObject*(*)()){&D::create})
        m->registerHook(base+0x1da8f0, (EndPortalObject*(*)()){&D::create});

    if ((void($EndPortalObject::*)(cocos2d::_ccColor3B)){&$EndPortalObject::updateColors} != (void(D::*)(cocos2d::_ccColor3B)){&D::updateColors})
        m->registerHook(base+0x1dacb0, extract((void(D::*)(cocos2d::_ccColor3B)){&D::updateColors}));
}

template<class D, void*** V>
EndPortalObject* $EndPortalObject<D, V>::create() {
    if ((EndPortalObject*(*)()){&$EndPortalObject::create} != (EndPortalObject*(*)()){&D::create})
        return reinterpret_cast<EndPortalObject*(*)()>(m->getOriginal(base+0x1da8f0))();
    else return EndPortalObject::create();
}

template<class D, void*** V>
void $EndPortalObject<D, V>::updateColors(cocos2d::_ccColor3B p0) {
    if ((void($EndPortalObject::*)(cocos2d::_ccColor3B)){&$EndPortalObject::updateColors} != (void(D::*)(cocos2d::_ccColor3B)){&D::updateColors})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::_ccColor3B)>(m->getOriginal(base+0x1dacb0))(this, p0);
    else return EndPortalObject::updateColors(p0);
}


template<class D, void*** V>
$LabelGameObject<D, V>::~$LabelGameObject() {}

template<class D, void*** V>
$LabelGameObject<D, V>::$LabelGameObject() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((bool($LabelGameObject::*)()){&$LabelGameObject::init} != (bool(D::*)()){&D::init})
        m->registerHook(base+0x2f5520, extract((bool(D::*)()){&D::init}));

    if ((void($LabelGameObject::*)(cocos2d::_ccColor3B const&)){&$LabelGameObject::setObjectColor} != (void(D::*)(cocos2d::_ccColor3B const&)){&D::setObjectColor})
        m->registerHook(base+0xdbca0, extract((void(D::*)(cocos2d::_ccColor3B const&)){&D::setObjectColor}));
}

template<class D, void*** V>
bool $LabelGameObject<D, V>::init() {
    if ((bool($LabelGameObject::*)()){&$LabelGameObject::init} != (bool(D::*)()){&D::init})
        return reinterpret_cast<bool(*)(decltype(this))>(m->getOriginal(base+0x2f5520))(this);
    else return LabelGameObject::init();
}

template<class D, void*** V>
void $LabelGameObject<D, V>::setObjectColor(cocos2d::_ccColor3B const& p0) {
    if ((void($LabelGameObject::*)(cocos2d::_ccColor3B const&)){&$LabelGameObject::setObjectColor} != (void(D::*)(cocos2d::_ccColor3B const&)){&D::setObjectColor})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::_ccColor3B const&)>(m->getOriginal(base+0xdbca0))(this, p0);
    else return LabelGameObject::setObjectColor(p0);
}


template<class D, void*** V>
$LevelBrowserLayer<D, V>::~$LevelBrowserLayer() {}

template<class D, void*** V>
$LevelBrowserLayer<D, V>::$LevelBrowserLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($LevelBrowserLayer::*)(GJSearchObject*)){&$LevelBrowserLayer::loadPage} != (void(D::*)(GJSearchObject*)){&D::loadPage})
        m->registerHook(base+0x253650, extract((void(D::*)(GJSearchObject*)){&D::loadPage}));

    if ((cocos2d::CCScene*(*)(GJSearchObject*)){&$LevelBrowserLayer::scene} != (cocos2d::CCScene*(*)(GJSearchObject*)){&D::scene})
        m->registerHook(base+0x2511d0, (cocos2d::CCScene*(*)(GJSearchObject*)){&D::scene});

    if ((void($LevelBrowserLayer::*)(SetIDPopup*, int)){&$LevelBrowserLayer::setIDPopupClosed} != (void(D::*)(SetIDPopup*, int)){&D::setIDPopupClosed})
        m->registerHook(base+0x2554f0, extract((void(D::*)(SetIDPopup*, int)){&D::setIDPopupClosed}));
}

template<class D, void*** V>
void $LevelBrowserLayer<D, V>::loadPage(GJSearchObject* p0) {
    if ((void($LevelBrowserLayer::*)(GJSearchObject*)){&$LevelBrowserLayer::loadPage} != (void(D::*)(GJSearchObject*)){&D::loadPage})
        return reinterpret_cast<void(*)(decltype(this), GJSearchObject*)>(m->getOriginal(base+0x253650))(this, p0);
    else return LevelBrowserLayer::loadPage(p0);
}

template<class D, void*** V>
cocos2d::CCScene* $LevelBrowserLayer<D, V>::scene(GJSearchObject* p0) {
    if ((cocos2d::CCScene*(*)(GJSearchObject*)){&$LevelBrowserLayer::scene} != (cocos2d::CCScene*(*)(GJSearchObject*)){&D::scene})
        return reinterpret_cast<cocos2d::CCScene*(*)(GJSearchObject*)>(m->getOriginal(base+0x2511d0))(p0);
    else return LevelBrowserLayer::scene(p0);
}

template<class D, void*** V>
void $LevelBrowserLayer<D, V>::setIDPopupClosed(SetIDPopup* p0, int p1) {
    if ((void($LevelBrowserLayer::*)(SetIDPopup*, int)){&$LevelBrowserLayer::setIDPopupClosed} != (void(D::*)(SetIDPopup*, int)){&D::setIDPopupClosed})
        return reinterpret_cast<void(*)(decltype(this), SetIDPopup*, int)>(m->getOriginal(base+0x2554f0))(this, p0, p1);
    else return LevelBrowserLayer::setIDPopupClosed(p0, p1);
}


template<class D, void*** V>
$LevelEditorLayer<D, V>::~$LevelEditorLayer() {}

template<class D, void*** V>
$LevelEditorLayer<D, V>::$LevelEditorLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($LevelEditorLayer::*)(EffectGameObject*, float, float, float)){&$LevelEditorLayer::activateTriggerEffect} != (void(D::*)(EffectGameObject*, float, float, float)){&D::activateTriggerEffect})
        m->registerHook(base+0x9b520, extract((void(D::*)(EffectGameObject*, float, float, float)){&D::activateTriggerEffect}));

    if ((GameObject*($LevelEditorLayer::*)(std::string)){&$LevelEditorLayer::addObjectFromString} != (GameObject*(D::*)(std::string)){&D::addObjectFromString})
        m->registerHook(base+0x94640, extract((GameObject*(D::*)(std::string)){&D::addObjectFromString}));

    if ((void($LevelEditorLayer::*)(GameObject*)){&$LevelEditorLayer::addSpecial} != (void(D::*)(GameObject*)){&D::addSpecial})
        m->registerHook(base+0x94f30, extract((void(D::*)(GameObject*)){&D::addSpecial}));

    if ((void($LevelEditorLayer::*)(GameObject*, int, bool)){&$LevelEditorLayer::addToGroup} != (void(D::*)(GameObject*, int, bool)){&D::addToGroup})
        m->registerHook(base+0x9dab0, extract((void(D::*)(GameObject*, int, bool)){&D::addToGroup}));

    if ((void($LevelEditorLayer::*)(UndoObject*)){&$LevelEditorLayer::addToRedoList} != (void(D::*)(UndoObject*)){&D::addToRedoList})
        m->registerHook(base+0x96f80, extract((void(D::*)(UndoObject*)){&D::addToRedoList}));

    if ((void($LevelEditorLayer::*)(UndoObject*, bool)){&$LevelEditorLayer::addToUndoList} != (void(D::*)(UndoObject*, bool)){&D::addToUndoList})
        m->registerHook(base+0x94e20, extract((void(D::*)(UndoObject*, bool)){&D::addToUndoList}));

    if ((void($LevelEditorLayer::*)(GameObject*, float, bool)){&$LevelEditorLayer::animateInDualGround} != (void(D::*)(GameObject*, float, bool)){&D::animateInDualGround})
        m->registerHook(base+0xa2780, extract((void(D::*)(GameObject*, float, bool)){&D::animateInDualGround}));

    if ((void($LevelEditorLayer::*)(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)){&$LevelEditorLayer::calculateColorValues} != (void(D::*)(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)){&D::calculateColorValues})
        m->registerHook(base+0x9c590, extract_virtual(V, (void(D::*)(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)){&D::calculateColorValues}));
    std::cout << "calculateColorValues: " << (void*)extract_virtual(V, (void(D::*)(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)){&D::calculateColorValues}) << std::endl;

    if ((void($LevelEditorLayer::*)(PlayerObject*, float)){&$LevelEditorLayer::checkCollisions} != (void(D::*)(PlayerObject*, float)){&D::checkCollisions})
        m->registerHook(base+0x9e620, extract((void(D::*)(PlayerObject*, float)){&D::checkCollisions}));

    if ((LevelEditorLayer*(*)(GJGameLevel*)){&$LevelEditorLayer::create} != (LevelEditorLayer*(*)(GJGameLevel*)){&D::create})
        m->registerHook(base+0x90fb0, (LevelEditorLayer*(*)(GJGameLevel*)){&D::create});

    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::createBackground} != (void(D::*)()){&D::createBackground})
        m->registerHook(base+0x929f0, extract((void(D::*)()){&D::createBackground}));

    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::createGroundLayer} != (void(D::*)()){&D::createGroundLayer})
        m->registerHook(base+0x92840, extract((void(D::*)()){&D::createGroundLayer}));

    if ((GameObject*($LevelEditorLayer::*)(int, cocos2d::CCPoint, bool)){&$LevelEditorLayer::createObject} != (GameObject*(D::*)(int, cocos2d::CCPoint, bool)){&D::createObject})
        m->registerHook(base+0x957c0, extract((GameObject*(D::*)(int, cocos2d::CCPoint, bool)){&D::createObject}));

    if ((void($LevelEditorLayer::*)(std::string)){&$LevelEditorLayer::createObjectsFromSetup} != (void(D::*)(std::string)){&D::createObjectsFromSetup})
        m->registerHook(base+0x92230, extract((void(D::*)(std::string)){&D::createObjectsFromSetup}));

    if ((void($LevelEditorLayer::*)(std::string, bool)){&$LevelEditorLayer::createObjectsFromString} != (void(D::*)(std::string, bool)){&D::createObjectsFromString})
        m->registerHook(base+0x94730, extract((void(D::*)(std::string, bool)){&D::createObjectsFromString}));

    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::draw} != (void(D::*)()){&D::draw})
        m->registerHook(base+0xa2a70, extract((void(D::*)()){&D::draw}));

    if ((void($LevelEditorLayer::*)(PlayerObject*, bool, bool)){&$LevelEditorLayer::flipGravity} != (void(D::*)(PlayerObject*, bool, bool)){&D::flipGravity})
        m->registerHook(base+0xa04e0, extract((void(D::*)(PlayerObject*, bool, bool)){&D::flipGravity}));

    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::getLastObjectX} != (void(D::*)()){&D::getLastObjectX})
        m->registerHook(base+0x9c860, extract((void(D::*)()){&D::getLastObjectX}));

    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::getLevelString} != (void(D::*)()){&D::getLevelString})
        m->registerHook(base+0x97790, extract((void(D::*)()){&D::getLevelString}));

    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::getNextColorChannel} != (void(D::*)()){&D::getNextColorChannel})
        m->registerHook(base+0x9a610, extract((void(D::*)()){&D::getNextColorChannel}));

    if ((void($LevelEditorLayer::*)(cocos2d::CCArray*)){&$LevelEditorLayer::getNextFreeBlockID} != (void(D::*)(cocos2d::CCArray*)){&D::getNextFreeBlockID})
        m->registerHook(base+0x9a4e0, extract((void(D::*)(cocos2d::CCArray*)){&D::getNextFreeBlockID}));

    if ((int($LevelEditorLayer::*)(cocos2d::CCArray*)){&$LevelEditorLayer::getNextFreeGroupID} != (int(D::*)(cocos2d::CCArray*)){&D::getNextFreeGroupID})
        m->registerHook(base+0x9a1b0, extract((int(D::*)(cocos2d::CCArray*)){&D::getNextFreeGroupID}));

    if ((void($LevelEditorLayer::*)(cocos2d::CCArray*)){&$LevelEditorLayer::getNextFreeItemID} != (void(D::*)(cocos2d::CCArray*)){&D::getNextFreeItemID})
        m->registerHook(base+0x9a390, extract((void(D::*)(cocos2d::CCArray*)){&D::getNextFreeItemID}));

    if ((void($LevelEditorLayer::*)(GameObject*, bool)){&$LevelEditorLayer::getObjectRect} != (void(D::*)(GameObject*, bool)){&D::getObjectRect})
        m->registerHook(base+0x96240, extract((void(D::*)(GameObject*, bool)){&D::getObjectRect}));

    if ((void($LevelEditorLayer::*)(GameObject*)){&$LevelEditorLayer::getRelativeOffset} != (void(D::*)(GameObject*)){&D::getRelativeOffset})
        m->registerHook(base+0x96840, extract((void(D::*)(GameObject*)){&D::getRelativeOffset}));

    if ((void($LevelEditorLayer::*)(bool, cocos2d::CCArray*)){&$LevelEditorLayer::handleAction} != (void(D::*)(bool, cocos2d::CCArray*)){&D::handleAction})
        m->registerHook(base+0x97020, extract((void(D::*)(bool, cocos2d::CCArray*)){&D::handleAction}));

    if ((bool($LevelEditorLayer::*)(GJGameLevel*)){&$LevelEditorLayer::init} != (bool(D::*)(GJGameLevel*)){&D::init})
        m->registerHook(base+0x91010, extract((bool(D::*)(GJGameLevel*)){&D::init}));

    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::levelSettingsUpdated} != (void(D::*)()){&D::levelSettingsUpdated})
        m->registerHook(base+0x93f30, extract((void(D::*)()){&D::levelSettingsUpdated}));

    if ((void($LevelEditorLayer::*)(cocos2d::CCPoint)){&$LevelEditorLayer::objectAtPosition} != (void(D::*)(cocos2d::CCPoint)){&D::objectAtPosition})
        m->registerHook(base+0x960c0, extract((void(D::*)(cocos2d::CCPoint)){&D::objectAtPosition}));

    if ((void($LevelEditorLayer::*)(GameObject*)){&$LevelEditorLayer::objectMoved} != (void(D::*)(GameObject*)){&D::objectMoved})
        m->registerHook(base+0x999f0, extract((void(D::*)(GameObject*)){&D::objectMoved}));

    if ((void($LevelEditorLayer::*)(cocos2d::CCRect, bool)){&$LevelEditorLayer::objectsInRect} != (void(D::*)(cocos2d::CCRect, bool)){&D::objectsInRect})
        m->registerHook(base+0x95e60, extract((void(D::*)(cocos2d::CCRect, bool)){&D::objectsInRect}));

    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::onPlaytest} != (void(D::*)()){&D::onPlaytest})
        m->registerHook(base+0xa06b0, extract((void(D::*)()){&D::onPlaytest}));

    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::onStopPlaytest} != (void(D::*)()){&D::onStopPlaytest})
        m->registerHook(base+0xa1780, extract((void(D::*)()){&D::onStopPlaytest}));

    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::playMusic} != (void(D::*)()){&D::playMusic})
        m->registerHook(base+0xa13c0, extract((void(D::*)()){&D::playMusic}));

    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::recreateGroups} != (void(D::*)()){&D::recreateGroups})
        m->registerHook(base+0x9dbf0, extract((void(D::*)()){&D::recreateGroups}));

    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::redoLastAction} != (void(D::*)()){&D::redoLastAction})
        m->registerHook(base+0x97750, extract((void(D::*)()){&D::redoLastAction}));

    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::removeAllObjects} != (void(D::*)()){&D::removeAllObjects})
        m->registerHook(base+0x93d80, extract((void(D::*)()){&D::removeAllObjects}));

    if ((void($LevelEditorLayer::*)(int)){&$LevelEditorLayer::removeAllObjectsOfType} != (void(D::*)(int)){&D::removeAllObjectsOfType})
        m->registerHook(base+0x96d40, extract((void(D::*)(int)){&D::removeAllObjectsOfType}));

    if ((void($LevelEditorLayer::*)(GameObject*, int)){&$LevelEditorLayer::removeFromGroup} != (void(D::*)(GameObject*, int)){&D::removeFromGroup})
        m->registerHook(base+0x9db60, extract((void(D::*)(GameObject*, int)){&D::removeFromGroup}));

    if ((void($LevelEditorLayer::*)(GameObject*, bool)){&$LevelEditorLayer::removeObject} != (void(D::*)(GameObject*, bool)){&D::removeObject})
        m->registerHook(base+0x96890, extract((void(D::*)(GameObject*, bool)){&D::removeObject}));

    if ((void($LevelEditorLayer::*)(GameObject*)){&$LevelEditorLayer::removeSpecial} != (void(D::*)(GameObject*)){&D::removeSpecial})
        m->registerHook(base+0x969c0, extract((void(D::*)(GameObject*)){&D::removeSpecial}));

    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::resetMovingObjects} != (void(D::*)()){&D::resetMovingObjects})
        m->registerHook(base+0x9ddc0, extract((void(D::*)()){&D::resetMovingObjects}));

    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::resetObjectVector} != (void(D::*)()){&D::resetObjectVector})
        m->registerHook(base+0x9c4b0, extract((void(D::*)()){&D::resetObjectVector}));

    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::resetToggledGroups} != (void(D::*)()){&D::resetToggledGroups})
        m->registerHook(base+0x9aa70, extract((void(D::*)()){&D::resetToggledGroups}));

    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::resetToggledGroupsAndObjects} != (void(D::*)()){&D::resetToggledGroupsAndObjects})
        m->registerHook(base+0x9c3c0, extract((void(D::*)()){&D::resetToggledGroupsAndObjects}));

    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::resetUnusedColorChannels} != (void(D::*)()){&D::resetUnusedColorChannels})
        m->registerHook(base+0x9a870, extract((void(D::*)()){&D::resetUnusedColorChannels}));

    if ((void($LevelEditorLayer::*)(GameObject*)){&$LevelEditorLayer::rotationForSlopeNearObject} != (void(D::*)(GameObject*)){&D::rotationForSlopeNearObject})
        m->registerHook(base+0x95cd0, extract((void(D::*)(GameObject*)){&D::rotationForSlopeNearObject}));

    if ((void($LevelEditorLayer::*)(EffectGameObject*, int, float, float, bool)){&$LevelEditorLayer::runColorEffect} != (void(D::*)(EffectGameObject*, int, float, float, bool)){&D::runColorEffect})
        m->registerHook(base+0x9bd30, extract((void(D::*)(EffectGameObject*, int, float, float, bool)){&D::runColorEffect}));

    if ((void($LevelEditorLayer::*)(GJGameLevel*)){&$LevelEditorLayer::scene} != (void(D::*)(GJGameLevel*)){&D::scene})
        m->registerHook(base+0x90f20, extract((void(D::*)(GJGameLevel*)){&D::scene}));

    if ((void($LevelEditorLayer::*)(LevelSettingsObject*)){&$LevelEditorLayer::setupLevelStart} != (void(D::*)(LevelSettingsObject*)){&D::setupLevelStart})
        m->registerHook(base+0xa0ca0, extract((void(D::*)(LevelSettingsObject*)){&D::setupLevelStart}));

    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::sortStickyGroups} != (void(D::*)()){&D::sortStickyGroups})
        m->registerHook(base+0x92b10, extract((void(D::*)()){&D::sortStickyGroups}));

    if ((void($LevelEditorLayer::*)(int, float)){&$LevelEditorLayer::stopTriggersInGroup} != (void(D::*)(int, float)){&D::stopTriggersInGroup})
        m->registerHook(base+0x9c030, extract((void(D::*)(int, float)){&D::stopTriggersInGroup}));

    if ((void($LevelEditorLayer::*)(float)){&$LevelEditorLayer::timeForXPos} != (void(D::*)(float)){&D::timeForXPos})
        m->registerHook(base+0x9c7d0, extract((void(D::*)(float)){&D::timeForXPos}));

    if ((void($LevelEditorLayer::*)(GameObject*, bool, PlayerObject*, bool)){&$LevelEditorLayer::toggleDualMode} != (void(D::*)(GameObject*, bool, PlayerObject*, bool)){&D::toggleDualMode})
        m->registerHook(base+0xa0200, extract((void(D::*)(GameObject*, bool, PlayerObject*, bool)){&D::toggleDualMode}));

    if ((void($LevelEditorLayer::*)(int, bool)){&$LevelEditorLayer::toggleGroupPreview} != (void(D::*)(int, bool)){&D::toggleGroupPreview})
        m->registerHook(base+0x9bea0, extract((void(D::*)(int, bool)){&D::toggleGroupPreview}));

    if ((void($LevelEditorLayer::*)(GJEffectManager*, GJEffectManager*)){&$LevelEditorLayer::transferDefaultColors} != (void(D::*)(GJEffectManager*, GJEffectManager*)){&D::transferDefaultColors})
        m->registerHook(base+0x9ab50, extract((void(D::*)(GJEffectManager*, GJEffectManager*)){&D::transferDefaultColors}));

    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::undoLastAction} != (void(D::*)()){&D::undoLastAction})
        m->registerHook(base+0x97770, extract((void(D::*)()){&D::undoLastAction}));

    if ((void($LevelEditorLayer::*)(float)){&$LevelEditorLayer::update} != (void(D::*)(float)){&D::update})
        m->registerHook(base+0xa1b70, extract((void(D::*)(float)){&D::update}));

    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::updateBGAndGColors} != (void(D::*)()){&D::updateBGAndGColors})
        m->registerHook(base+0x9b9b0, extract((void(D::*)()){&D::updateBGAndGColors}));

    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::updateBlendValues} != (void(D::*)()){&D::updateBlendValues})
        m->registerHook(base+0x9bc60, extract((void(D::*)()){&D::updateBlendValues}));

    if ((void($LevelEditorLayer::*)(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)){&$LevelEditorLayer::updateColor} != (void(D::*)(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)){&D::updateColor})
        m->registerHook(base+0x9c200, extract((void(D::*)(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)){&D::updateColor}));

    if ((void($LevelEditorLayer::*)(PlayerObject*, int, bool)){&$LevelEditorLayer::updateDualGround} != (void(D::*)(PlayerObject*, int, bool)){&D::updateDualGround})
        m->registerHook(base+0xa1a60, extract((void(D::*)(PlayerObject*, int, bool)){&D::updateDualGround}));

    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::updateEditorMode} != (void(D::*)()){&D::updateEditorMode})
        m->registerHook(base+0x93b50, extract((void(D::*)()){&D::updateEditorMode}));

    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::updateGameObjectsNew} != (void(D::*)()){&D::updateGameObjectsNew})
        m->registerHook(base+0x9adc0, extract((void(D::*)()){&D::updateGameObjectsNew}));

    if ((void($LevelEditorLayer::*)(float)){&$LevelEditorLayer::updateGround} != (void(D::*)(float)){&D::updateGround})
        m->registerHook(base+0x93a60, extract((void(D::*)(float)){&D::updateGround}));

    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::updateGroundWidth} != (void(D::*)()){&D::updateGroundWidth})
        m->registerHook(base+0x92af0, extract((void(D::*)()){&D::updateGroundWidth}));

    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::updateOptions} != (void(D::*)()){&D::updateOptions})
        m->registerHook(base+0x91ed0, extract((void(D::*)()){&D::updateOptions}));

    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::updateToggledGroups} != (void(D::*)()){&D::updateToggledGroups})
        m->registerHook(base+0x9bb10, extract((void(D::*)()){&D::updateToggledGroups}));

    if ((void($LevelEditorLayer::*)(float)){&$LevelEditorLayer::updateVisibility} != (void(D::*)(float)){&D::updateVisibility})
        m->registerHook(base+0x92c70, extract((void(D::*)(float)){&D::updateVisibility}));

    if ((void($LevelEditorLayer::*)(float)){&$LevelEditorLayer::xPosForTime} != (void(D::*)(float)){&D::xPosForTime})
        m->registerHook(base+0x9c800, extract((void(D::*)(float)){&D::xPosForTime}));
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::activateTriggerEffect(EffectGameObject* p0, float p1, float p2, float p3) {
    if ((void($LevelEditorLayer::*)(EffectGameObject*, float, float, float)){&$LevelEditorLayer::activateTriggerEffect} != (void(D::*)(EffectGameObject*, float, float, float)){&D::activateTriggerEffect})
        return reinterpret_cast<void(*)(decltype(this), EffectGameObject*, float, float, float)>(m->getOriginal(base+0x9b520))(this, p0, p1, p2, p3);
    else return LevelEditorLayer::activateTriggerEffect(p0, p1, p2, p3);
}

template<class D, void*** V>
GameObject* $LevelEditorLayer<D, V>::addObjectFromString(std::string p0) {
    if ((GameObject*($LevelEditorLayer::*)(std::string)){&$LevelEditorLayer::addObjectFromString} != (GameObject*(D::*)(std::string)){&D::addObjectFromString})
        return reinterpret_cast<GameObject*(*)(decltype(this), std::string)>(m->getOriginal(base+0x94640))(this, p0);
    else return LevelEditorLayer::addObjectFromString(p0);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::addSpecial(GameObject* p0) {
    if ((void($LevelEditorLayer::*)(GameObject*)){&$LevelEditorLayer::addSpecial} != (void(D::*)(GameObject*)){&D::addSpecial})
        return reinterpret_cast<void(*)(decltype(this), GameObject*)>(m->getOriginal(base+0x94f30))(this, p0);
    else return LevelEditorLayer::addSpecial(p0);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::addToGroup(GameObject* p0, int p1, bool p2) {
    if ((void($LevelEditorLayer::*)(GameObject*, int, bool)){&$LevelEditorLayer::addToGroup} != (void(D::*)(GameObject*, int, bool)){&D::addToGroup})
        return reinterpret_cast<void(*)(decltype(this), GameObject*, int, bool)>(m->getOriginal(base+0x9dab0))(this, p0, p1, p2);
    else return LevelEditorLayer::addToGroup(p0, p1, p2);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::addToRedoList(UndoObject* p0) {
    if ((void($LevelEditorLayer::*)(UndoObject*)){&$LevelEditorLayer::addToRedoList} != (void(D::*)(UndoObject*)){&D::addToRedoList})
        return reinterpret_cast<void(*)(decltype(this), UndoObject*)>(m->getOriginal(base+0x96f80))(this, p0);
    else return LevelEditorLayer::addToRedoList(p0);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::addToUndoList(UndoObject* p0, bool p1) {
    if ((void($LevelEditorLayer::*)(UndoObject*, bool)){&$LevelEditorLayer::addToUndoList} != (void(D::*)(UndoObject*, bool)){&D::addToUndoList})
        return reinterpret_cast<void(*)(decltype(this), UndoObject*, bool)>(m->getOriginal(base+0x94e20))(this, p0, p1);
    else return LevelEditorLayer::addToUndoList(p0, p1);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::animateInDualGround(GameObject* p0, float p1, bool p2) {
    if ((void($LevelEditorLayer::*)(GameObject*, float, bool)){&$LevelEditorLayer::animateInDualGround} != (void(D::*)(GameObject*, float, bool)){&D::animateInDualGround})
        return reinterpret_cast<void(*)(decltype(this), GameObject*, float, bool)>(m->getOriginal(base+0xa2780))(this, p0, p1, p2);
    else return LevelEditorLayer::animateInDualGround(p0, p1, p2);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::calculateColorValues(EffectGameObject* p0, EffectGameObject* p1, int p2, float p3, ColorActionSprite* p4, GJEffectManager* p5) {
    if ((void($LevelEditorLayer::*)(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)){&$LevelEditorLayer::calculateColorValues} != (void(D::*)(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)){&D::calculateColorValues})
        return reinterpret_cast<void(*)(decltype(this), EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)>(m->getOriginal(base+0x9c590))(this, p0, p1, p2, p3, p4, p5);
    else return LevelEditorLayer::calculateColorValues(p0, p1, p2, p3, p4, p5);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::checkCollisions(PlayerObject* p0, float p1) {
    if ((void($LevelEditorLayer::*)(PlayerObject*, float)){&$LevelEditorLayer::checkCollisions} != (void(D::*)(PlayerObject*, float)){&D::checkCollisions})
        return reinterpret_cast<void(*)(decltype(this), PlayerObject*, float)>(m->getOriginal(base+0x9e620))(this, p0, p1);
    else return LevelEditorLayer::checkCollisions(p0, p1);
}

template<class D, void*** V>
LevelEditorLayer* $LevelEditorLayer<D, V>::create(GJGameLevel* p0) {
    if ((LevelEditorLayer*(*)(GJGameLevel*)){&$LevelEditorLayer::create} != (LevelEditorLayer*(*)(GJGameLevel*)){&D::create})
        return reinterpret_cast<LevelEditorLayer*(*)(GJGameLevel*)>(m->getOriginal(base+0x90fb0))(p0);
    else return LevelEditorLayer::create(p0);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::createBackground() {
    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::createBackground} != (void(D::*)()){&D::createBackground})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x929f0))(this);
    else return LevelEditorLayer::createBackground();
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::createGroundLayer() {
    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::createGroundLayer} != (void(D::*)()){&D::createGroundLayer})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x92840))(this);
    else return LevelEditorLayer::createGroundLayer();
}

template<class D, void*** V>
GameObject* $LevelEditorLayer<D, V>::createObject(int p0, cocos2d::CCPoint p1, bool p2) {
    if ((GameObject*($LevelEditorLayer::*)(int, cocos2d::CCPoint, bool)){&$LevelEditorLayer::createObject} != (GameObject*(D::*)(int, cocos2d::CCPoint, bool)){&D::createObject})
        return reinterpret_cast<GameObject*(*)(decltype(this), int, cocos2d::CCPoint, bool)>(m->getOriginal(base+0x957c0))(this, p0, p1, p2);
    else return LevelEditorLayer::createObject(p0, p1, p2);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::createObjectsFromSetup(std::string p0) {
    if ((void($LevelEditorLayer::*)(std::string)){&$LevelEditorLayer::createObjectsFromSetup} != (void(D::*)(std::string)){&D::createObjectsFromSetup})
        return reinterpret_cast<void(*)(decltype(this), std::string)>(m->getOriginal(base+0x92230))(this, p0);
    else return LevelEditorLayer::createObjectsFromSetup(p0);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::createObjectsFromString(std::string p0, bool p1) {
    if ((void($LevelEditorLayer::*)(std::string, bool)){&$LevelEditorLayer::createObjectsFromString} != (void(D::*)(std::string, bool)){&D::createObjectsFromString})
        return reinterpret_cast<void(*)(decltype(this), std::string, bool)>(m->getOriginal(base+0x94730))(this, p0, p1);
    else return LevelEditorLayer::createObjectsFromString(p0, p1);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::draw() {
    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::draw} != (void(D::*)()){&D::draw})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0xa2a70))(this);
    else return LevelEditorLayer::draw();
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::flipGravity(PlayerObject* p0, bool p1, bool p2) {
    if ((void($LevelEditorLayer::*)(PlayerObject*, bool, bool)){&$LevelEditorLayer::flipGravity} != (void(D::*)(PlayerObject*, bool, bool)){&D::flipGravity})
        return reinterpret_cast<void(*)(decltype(this), PlayerObject*, bool, bool)>(m->getOriginal(base+0xa04e0))(this, p0, p1, p2);
    else return LevelEditorLayer::flipGravity(p0, p1, p2);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::getLastObjectX() {
    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::getLastObjectX} != (void(D::*)()){&D::getLastObjectX})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x9c860))(this);
    else return LevelEditorLayer::getLastObjectX();
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::getLevelString() {
    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::getLevelString} != (void(D::*)()){&D::getLevelString})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x97790))(this);
    else return LevelEditorLayer::getLevelString();
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::getNextColorChannel() {
    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::getNextColorChannel} != (void(D::*)()){&D::getNextColorChannel})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x9a610))(this);
    else return LevelEditorLayer::getNextColorChannel();
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::getNextFreeBlockID(cocos2d::CCArray* p0) {
    if ((void($LevelEditorLayer::*)(cocos2d::CCArray*)){&$LevelEditorLayer::getNextFreeBlockID} != (void(D::*)(cocos2d::CCArray*)){&D::getNextFreeBlockID})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCArray*)>(m->getOriginal(base+0x9a4e0))(this, p0);
    else return LevelEditorLayer::getNextFreeBlockID(p0);
}

template<class D, void*** V>
int $LevelEditorLayer<D, V>::getNextFreeGroupID(cocos2d::CCArray* p0) {
    if ((int($LevelEditorLayer::*)(cocos2d::CCArray*)){&$LevelEditorLayer::getNextFreeGroupID} != (int(D::*)(cocos2d::CCArray*)){&D::getNextFreeGroupID})
        return reinterpret_cast<int(*)(decltype(this), cocos2d::CCArray*)>(m->getOriginal(base+0x9a1b0))(this, p0);
    else return LevelEditorLayer::getNextFreeGroupID(p0);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::getNextFreeItemID(cocos2d::CCArray* p0) {
    if ((void($LevelEditorLayer::*)(cocos2d::CCArray*)){&$LevelEditorLayer::getNextFreeItemID} != (void(D::*)(cocos2d::CCArray*)){&D::getNextFreeItemID})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCArray*)>(m->getOriginal(base+0x9a390))(this, p0);
    else return LevelEditorLayer::getNextFreeItemID(p0);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::getObjectRect(GameObject* p0, bool p1) {
    if ((void($LevelEditorLayer::*)(GameObject*, bool)){&$LevelEditorLayer::getObjectRect} != (void(D::*)(GameObject*, bool)){&D::getObjectRect})
        return reinterpret_cast<void(*)(decltype(this), GameObject*, bool)>(m->getOriginal(base+0x96240))(this, p0, p1);
    else return LevelEditorLayer::getObjectRect(p0, p1);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::getRelativeOffset(GameObject* p0) {
    if ((void($LevelEditorLayer::*)(GameObject*)){&$LevelEditorLayer::getRelativeOffset} != (void(D::*)(GameObject*)){&D::getRelativeOffset})
        return reinterpret_cast<void(*)(decltype(this), GameObject*)>(m->getOriginal(base+0x96840))(this, p0);
    else return LevelEditorLayer::getRelativeOffset(p0);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::handleAction(bool p0, cocos2d::CCArray* p1) {
    if ((void($LevelEditorLayer::*)(bool, cocos2d::CCArray*)){&$LevelEditorLayer::handleAction} != (void(D::*)(bool, cocos2d::CCArray*)){&D::handleAction})
        return reinterpret_cast<void(*)(decltype(this), bool, cocos2d::CCArray*)>(m->getOriginal(base+0x97020))(this, p0, p1);
    else return LevelEditorLayer::handleAction(p0, p1);
}

template<class D, void*** V>
bool $LevelEditorLayer<D, V>::init(GJGameLevel* p0) {
    if ((bool($LevelEditorLayer::*)(GJGameLevel*)){&$LevelEditorLayer::init} != (bool(D::*)(GJGameLevel*)){&D::init})
        return reinterpret_cast<bool(*)(decltype(this), GJGameLevel*)>(m->getOriginal(base+0x91010))(this, p0);
    else return LevelEditorLayer::init(p0);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::levelSettingsUpdated() {
    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::levelSettingsUpdated} != (void(D::*)()){&D::levelSettingsUpdated})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x93f30))(this);
    else return LevelEditorLayer::levelSettingsUpdated();
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::objectAtPosition(cocos2d::CCPoint p0) {
    if ((void($LevelEditorLayer::*)(cocos2d::CCPoint)){&$LevelEditorLayer::objectAtPosition} != (void(D::*)(cocos2d::CCPoint)){&D::objectAtPosition})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCPoint)>(m->getOriginal(base+0x960c0))(this, p0);
    else return LevelEditorLayer::objectAtPosition(p0);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::objectMoved(GameObject* p0) {
    if ((void($LevelEditorLayer::*)(GameObject*)){&$LevelEditorLayer::objectMoved} != (void(D::*)(GameObject*)){&D::objectMoved})
        return reinterpret_cast<void(*)(decltype(this), GameObject*)>(m->getOriginal(base+0x999f0))(this, p0);
    else return LevelEditorLayer::objectMoved(p0);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::objectsInRect(cocos2d::CCRect p0, bool p1) {
    if ((void($LevelEditorLayer::*)(cocos2d::CCRect, bool)){&$LevelEditorLayer::objectsInRect} != (void(D::*)(cocos2d::CCRect, bool)){&D::objectsInRect})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCRect, bool)>(m->getOriginal(base+0x95e60))(this, p0, p1);
    else return LevelEditorLayer::objectsInRect(p0, p1);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::onPlaytest() {
    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::onPlaytest} != (void(D::*)()){&D::onPlaytest})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0xa06b0))(this);
    else return LevelEditorLayer::onPlaytest();
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::onStopPlaytest() {
    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::onStopPlaytest} != (void(D::*)()){&D::onStopPlaytest})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0xa1780))(this);
    else return LevelEditorLayer::onStopPlaytest();
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::playMusic() {
    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::playMusic} != (void(D::*)()){&D::playMusic})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0xa13c0))(this);
    else return LevelEditorLayer::playMusic();
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::recreateGroups() {
    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::recreateGroups} != (void(D::*)()){&D::recreateGroups})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x9dbf0))(this);
    else return LevelEditorLayer::recreateGroups();
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::redoLastAction() {
    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::redoLastAction} != (void(D::*)()){&D::redoLastAction})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x97750))(this);
    else return LevelEditorLayer::redoLastAction();
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::removeAllObjects() {
    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::removeAllObjects} != (void(D::*)()){&D::removeAllObjects})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x93d80))(this);
    else return LevelEditorLayer::removeAllObjects();
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::removeAllObjectsOfType(int p0) {
    if ((void($LevelEditorLayer::*)(int)){&$LevelEditorLayer::removeAllObjectsOfType} != (void(D::*)(int)){&D::removeAllObjectsOfType})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x96d40))(this, p0);
    else return LevelEditorLayer::removeAllObjectsOfType(p0);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::removeFromGroup(GameObject* p0, int p1) {
    if ((void($LevelEditorLayer::*)(GameObject*, int)){&$LevelEditorLayer::removeFromGroup} != (void(D::*)(GameObject*, int)){&D::removeFromGroup})
        return reinterpret_cast<void(*)(decltype(this), GameObject*, int)>(m->getOriginal(base+0x9db60))(this, p0, p1);
    else return LevelEditorLayer::removeFromGroup(p0, p1);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::removeObject(GameObject* p0, bool p1) {
    if ((void($LevelEditorLayer::*)(GameObject*, bool)){&$LevelEditorLayer::removeObject} != (void(D::*)(GameObject*, bool)){&D::removeObject})
        return reinterpret_cast<void(*)(decltype(this), GameObject*, bool)>(m->getOriginal(base+0x96890))(this, p0, p1);
    else return LevelEditorLayer::removeObject(p0, p1);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::removeSpecial(GameObject* p0) {
    if ((void($LevelEditorLayer::*)(GameObject*)){&$LevelEditorLayer::removeSpecial} != (void(D::*)(GameObject*)){&D::removeSpecial})
        return reinterpret_cast<void(*)(decltype(this), GameObject*)>(m->getOriginal(base+0x969c0))(this, p0);
    else return LevelEditorLayer::removeSpecial(p0);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::resetMovingObjects() {
    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::resetMovingObjects} != (void(D::*)()){&D::resetMovingObjects})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x9ddc0))(this);
    else return LevelEditorLayer::resetMovingObjects();
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::resetObjectVector() {
    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::resetObjectVector} != (void(D::*)()){&D::resetObjectVector})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x9c4b0))(this);
    else return LevelEditorLayer::resetObjectVector();
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::resetToggledGroups() {
    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::resetToggledGroups} != (void(D::*)()){&D::resetToggledGroups})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x9aa70))(this);
    else return LevelEditorLayer::resetToggledGroups();
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::resetToggledGroupsAndObjects() {
    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::resetToggledGroupsAndObjects} != (void(D::*)()){&D::resetToggledGroupsAndObjects})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x9c3c0))(this);
    else return LevelEditorLayer::resetToggledGroupsAndObjects();
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::resetUnusedColorChannels() {
    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::resetUnusedColorChannels} != (void(D::*)()){&D::resetUnusedColorChannels})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x9a870))(this);
    else return LevelEditorLayer::resetUnusedColorChannels();
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::rotationForSlopeNearObject(GameObject* p0) {
    if ((void($LevelEditorLayer::*)(GameObject*)){&$LevelEditorLayer::rotationForSlopeNearObject} != (void(D::*)(GameObject*)){&D::rotationForSlopeNearObject})
        return reinterpret_cast<void(*)(decltype(this), GameObject*)>(m->getOriginal(base+0x95cd0))(this, p0);
    else return LevelEditorLayer::rotationForSlopeNearObject(p0);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::runColorEffect(EffectGameObject* p0, int p1, float p2, float p3, bool p4) {
    if ((void($LevelEditorLayer::*)(EffectGameObject*, int, float, float, bool)){&$LevelEditorLayer::runColorEffect} != (void(D::*)(EffectGameObject*, int, float, float, bool)){&D::runColorEffect})
        return reinterpret_cast<void(*)(decltype(this), EffectGameObject*, int, float, float, bool)>(m->getOriginal(base+0x9bd30))(this, p0, p1, p2, p3, p4);
    else return LevelEditorLayer::runColorEffect(p0, p1, p2, p3, p4);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::scene(GJGameLevel* p0) {
    if ((void($LevelEditorLayer::*)(GJGameLevel*)){&$LevelEditorLayer::scene} != (void(D::*)(GJGameLevel*)){&D::scene})
        return reinterpret_cast<void(*)(decltype(this), GJGameLevel*)>(m->getOriginal(base+0x90f20))(this, p0);
    else return LevelEditorLayer::scene(p0);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::setupLevelStart(LevelSettingsObject* p0) {
    if ((void($LevelEditorLayer::*)(LevelSettingsObject*)){&$LevelEditorLayer::setupLevelStart} != (void(D::*)(LevelSettingsObject*)){&D::setupLevelStart})
        return reinterpret_cast<void(*)(decltype(this), LevelSettingsObject*)>(m->getOriginal(base+0xa0ca0))(this, p0);
    else return LevelEditorLayer::setupLevelStart(p0);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::sortStickyGroups() {
    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::sortStickyGroups} != (void(D::*)()){&D::sortStickyGroups})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x92b10))(this);
    else return LevelEditorLayer::sortStickyGroups();
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::stopTriggersInGroup(int p0, float p1) {
    if ((void($LevelEditorLayer::*)(int, float)){&$LevelEditorLayer::stopTriggersInGroup} != (void(D::*)(int, float)){&D::stopTriggersInGroup})
        return reinterpret_cast<void(*)(decltype(this), int, float)>(m->getOriginal(base+0x9c030))(this, p0, p1);
    else return LevelEditorLayer::stopTriggersInGroup(p0, p1);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::timeForXPos(float p0) {
    if ((void($LevelEditorLayer::*)(float)){&$LevelEditorLayer::timeForXPos} != (void(D::*)(float)){&D::timeForXPos})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x9c7d0))(this, p0);
    else return LevelEditorLayer::timeForXPos(p0);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::toggleDualMode(GameObject* p0, bool p1, PlayerObject* p2, bool p3) {
    if ((void($LevelEditorLayer::*)(GameObject*, bool, PlayerObject*, bool)){&$LevelEditorLayer::toggleDualMode} != (void(D::*)(GameObject*, bool, PlayerObject*, bool)){&D::toggleDualMode})
        return reinterpret_cast<void(*)(decltype(this), GameObject*, bool, PlayerObject*, bool)>(m->getOriginal(base+0xa0200))(this, p0, p1, p2, p3);
    else return LevelEditorLayer::toggleDualMode(p0, p1, p2, p3);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::toggleGroupPreview(int p0, bool p1) {
    if ((void($LevelEditorLayer::*)(int, bool)){&$LevelEditorLayer::toggleGroupPreview} != (void(D::*)(int, bool)){&D::toggleGroupPreview})
        return reinterpret_cast<void(*)(decltype(this), int, bool)>(m->getOriginal(base+0x9bea0))(this, p0, p1);
    else return LevelEditorLayer::toggleGroupPreview(p0, p1);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::transferDefaultColors(GJEffectManager* p0, GJEffectManager* p1) {
    if ((void($LevelEditorLayer::*)(GJEffectManager*, GJEffectManager*)){&$LevelEditorLayer::transferDefaultColors} != (void(D::*)(GJEffectManager*, GJEffectManager*)){&D::transferDefaultColors})
        return reinterpret_cast<void(*)(decltype(this), GJEffectManager*, GJEffectManager*)>(m->getOriginal(base+0x9ab50))(this, p0, p1);
    else return LevelEditorLayer::transferDefaultColors(p0, p1);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::undoLastAction() {
    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::undoLastAction} != (void(D::*)()){&D::undoLastAction})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x97770))(this);
    else return LevelEditorLayer::undoLastAction();
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::update(float p0) {
    if ((void($LevelEditorLayer::*)(float)){&$LevelEditorLayer::update} != (void(D::*)(float)){&D::update})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0xa1b70))(this, p0);
    else return LevelEditorLayer::update(p0);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::updateBGAndGColors() {
    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::updateBGAndGColors} != (void(D::*)()){&D::updateBGAndGColors})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x9b9b0))(this);
    else return LevelEditorLayer::updateBGAndGColors();
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::updateBlendValues() {
    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::updateBlendValues} != (void(D::*)()){&D::updateBlendValues})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x9bc60))(this);
    else return LevelEditorLayer::updateBlendValues();
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::updateColor(cocos2d::_ccColor3B p0, float p1, int p2, bool p3, float p4, cocos2d::_ccHSVValue p5, int p6, bool p7, int p8, EffectGameObject* p9) {
    if ((void($LevelEditorLayer::*)(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)){&$LevelEditorLayer::updateColor} != (void(D::*)(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)){&D::updateColor})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)>(m->getOriginal(base+0x9c200))(this, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
    else return LevelEditorLayer::updateColor(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::updateDualGround(PlayerObject* p0, int p1, bool p2) {
    if ((void($LevelEditorLayer::*)(PlayerObject*, int, bool)){&$LevelEditorLayer::updateDualGround} != (void(D::*)(PlayerObject*, int, bool)){&D::updateDualGround})
        return reinterpret_cast<void(*)(decltype(this), PlayerObject*, int, bool)>(m->getOriginal(base+0xa1a60))(this, p0, p1, p2);
    else return LevelEditorLayer::updateDualGround(p0, p1, p2);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::updateEditorMode() {
    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::updateEditorMode} != (void(D::*)()){&D::updateEditorMode})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x93b50))(this);
    else return LevelEditorLayer::updateEditorMode();
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::updateGameObjectsNew() {
    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::updateGameObjectsNew} != (void(D::*)()){&D::updateGameObjectsNew})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x9adc0))(this);
    else return LevelEditorLayer::updateGameObjectsNew();
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::updateGround(float p0) {
    if ((void($LevelEditorLayer::*)(float)){&$LevelEditorLayer::updateGround} != (void(D::*)(float)){&D::updateGround})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x93a60))(this, p0);
    else return LevelEditorLayer::updateGround(p0);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::updateGroundWidth() {
    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::updateGroundWidth} != (void(D::*)()){&D::updateGroundWidth})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x92af0))(this);
    else return LevelEditorLayer::updateGroundWidth();
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::updateOptions() {
    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::updateOptions} != (void(D::*)()){&D::updateOptions})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x91ed0))(this);
    else return LevelEditorLayer::updateOptions();
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::updateToggledGroups() {
    if ((void($LevelEditorLayer::*)()){&$LevelEditorLayer::updateToggledGroups} != (void(D::*)()){&D::updateToggledGroups})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x9bb10))(this);
    else return LevelEditorLayer::updateToggledGroups();
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::updateVisibility(float p0) {
    if ((void($LevelEditorLayer::*)(float)){&$LevelEditorLayer::updateVisibility} != (void(D::*)(float)){&D::updateVisibility})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x92c70))(this, p0);
    else return LevelEditorLayer::updateVisibility(p0);
}

template<class D, void*** V>
void $LevelEditorLayer<D, V>::xPosForTime(float p0) {
    if ((void($LevelEditorLayer::*)(float)){&$LevelEditorLayer::xPosForTime} != (void(D::*)(float)){&D::xPosForTime})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x9c800))(this, p0);
    else return LevelEditorLayer::xPosForTime(p0);
}


template<class D, void*** V>
$LevelInfoLayer<D, V>::~$LevelInfoLayer() {}

template<class D, void*** V>
$LevelInfoLayer<D, V>::$LevelInfoLayer() {
    m->registerHook(extract_destructor(V), +[](){});
}


template<class D, void*** V>
$LevelSettingsLayer<D, V>::~$LevelSettingsLayer() {}

template<class D, void*** V>
$LevelSettingsLayer<D, V>::$LevelSettingsLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((LevelSettingsLayer*(*)(LevelSettingsObject*, LevelEditorLayer*)){&$LevelSettingsLayer::create} != (LevelSettingsLayer*(*)(LevelSettingsObject*, LevelEditorLayer*)){&D::create})
        m->registerHook(base+0xa7c30, (LevelSettingsLayer*(*)(LevelSettingsObject*, LevelEditorLayer*)){&D::create});
}

template<class D, void*** V>
LevelSettingsLayer* $LevelSettingsLayer<D, V>::create(LevelSettingsObject* p0, LevelEditorLayer* p1) {
    if ((LevelSettingsLayer*(*)(LevelSettingsObject*, LevelEditorLayer*)){&$LevelSettingsLayer::create} != (LevelSettingsLayer*(*)(LevelSettingsObject*, LevelEditorLayer*)){&D::create})
        return reinterpret_cast<LevelSettingsLayer*(*)(LevelSettingsObject*, LevelEditorLayer*)>(m->getOriginal(base+0xa7c30))(p0, p1);
    else return LevelSettingsLayer::create(p0, p1);
}


template<class D, void*** V>
$LevelSettingsObject<D, V>::~$LevelSettingsObject() {}

template<class D, void*** V>
$LevelSettingsObject<D, V>::$LevelSettingsObject() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((LevelSettingsObject*(*)()){&$LevelSettingsObject::create} != (LevelSettingsObject*(*)()){&D::create})
        m->registerHook(base+0x92760, (LevelSettingsObject*(*)()){&D::create});

    if ((bool($LevelSettingsObject::*)()){&$LevelSettingsObject::init} != (bool(D::*)()){&D::init})
        m->registerHook(base+0xa5690, extract((bool(D::*)()){&D::init}));

    if ((void($LevelSettingsObject::*)(cocos2d::CCDictionary*)){&$LevelSettingsObject::objectFromDict} != (void(D::*)(cocos2d::CCDictionary*)){&D::objectFromDict})
        m->registerHook(base+0xa5810, extract((void(D::*)(cocos2d::CCDictionary*)){&D::objectFromDict}));

    if ((LevelSettingsObject*(*)(std::string)){&$LevelSettingsObject::objectFromString} != (LevelSettingsObject*(*)(std::string)){&D::objectFromString})
        m->registerHook(base+0x945a0, (LevelSettingsObject*(*)(std::string)){&D::objectFromString});

    if ((void($LevelSettingsObject::*)(cocos2d::CCDictionary*)){&$LevelSettingsObject::setupColorsFromLegacyMode} != (void(D::*)(cocos2d::CCDictionary*)){&D::setupColorsFromLegacyMode})
        m->registerHook(base+0xa6a30, extract((void(D::*)(cocos2d::CCDictionary*)){&D::setupColorsFromLegacyMode}));
}

template<class D, void*** V>
LevelSettingsObject* $LevelSettingsObject<D, V>::create() {
    if ((LevelSettingsObject*(*)()){&$LevelSettingsObject::create} != (LevelSettingsObject*(*)()){&D::create})
        return reinterpret_cast<LevelSettingsObject*(*)()>(m->getOriginal(base+0x92760))();
    else return LevelSettingsObject::create();
}

template<class D, void*** V>
bool $LevelSettingsObject<D, V>::init() {
    if ((bool($LevelSettingsObject::*)()){&$LevelSettingsObject::init} != (bool(D::*)()){&D::init})
        return reinterpret_cast<bool(*)(decltype(this))>(m->getOriginal(base+0xa5690))(this);
    else return LevelSettingsObject::init();
}

template<class D, void*** V>
void $LevelSettingsObject<D, V>::objectFromDict(cocos2d::CCDictionary* p0) {
    if ((void($LevelSettingsObject::*)(cocos2d::CCDictionary*)){&$LevelSettingsObject::objectFromDict} != (void(D::*)(cocos2d::CCDictionary*)){&D::objectFromDict})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCDictionary*)>(m->getOriginal(base+0xa5810))(this, p0);
    else return LevelSettingsObject::objectFromDict(p0);
}

template<class D, void*** V>
LevelSettingsObject* $LevelSettingsObject<D, V>::objectFromString(std::string p0) {
    if ((LevelSettingsObject*(*)(std::string)){&$LevelSettingsObject::objectFromString} != (LevelSettingsObject*(*)(std::string)){&D::objectFromString})
        return reinterpret_cast<LevelSettingsObject*(*)(std::string)>(m->getOriginal(base+0x945a0))(p0);
    else return LevelSettingsObject::objectFromString(p0);
}

template<class D, void*** V>
void $LevelSettingsObject<D, V>::setupColorsFromLegacyMode(cocos2d::CCDictionary* p0) {
    if ((void($LevelSettingsObject::*)(cocos2d::CCDictionary*)){&$LevelSettingsObject::setupColorsFromLegacyMode} != (void(D::*)(cocos2d::CCDictionary*)){&D::setupColorsFromLegacyMode})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCDictionary*)>(m->getOriginal(base+0xa6a30))(this, p0);
    else return LevelSettingsObject::setupColorsFromLegacyMode(p0);
}


template<class D, void*** V>
$LevelTools<D, V>::~$LevelTools() {}

template<class D, void*** V>
$LevelTools<D, V>::$LevelTools() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($LevelTools::*)(int)){&$LevelTools::getAudioString} != (void(D::*)(int)){&D::getAudioString})
        m->registerHook(base+0x293880, extract((void(D::*)(int)){&D::getAudioString}));

    if ((void($LevelTools::*)(std::string, int)){&$LevelTools::verifyLevelIntegrity} != (void(D::*)(std::string, int)){&D::verifyLevelIntegrity})
        m->registerHook(base+0x294360, extract((void(D::*)(std::string, int)){&D::verifyLevelIntegrity}));

    if ((void($LevelTools::*)(float, cocos2d::CCArray*, int)){&$LevelTools::xPosForTime} != (void(D::*)(float, cocos2d::CCArray*, int)){&D::xPosForTime})
        m->registerHook(base+0x293d90, extract((void(D::*)(float, cocos2d::CCArray*, int)){&D::xPosForTime}));
}

template<class D, void*** V>
void $LevelTools<D, V>::getAudioString(int p0) {
    if ((void($LevelTools::*)(int)){&$LevelTools::getAudioString} != (void(D::*)(int)){&D::getAudioString})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x293880))(this, p0);
    else return LevelTools::getAudioString(p0);
}

template<class D, void*** V>
void $LevelTools<D, V>::verifyLevelIntegrity(std::string p0, int p1) {
    if ((void($LevelTools::*)(std::string, int)){&$LevelTools::verifyLevelIntegrity} != (void(D::*)(std::string, int)){&D::verifyLevelIntegrity})
        return reinterpret_cast<void(*)(decltype(this), std::string, int)>(m->getOriginal(base+0x294360))(this, p0, p1);
    else return LevelTools::verifyLevelIntegrity(p0, p1);
}

template<class D, void*** V>
void $LevelTools<D, V>::xPosForTime(float p0, cocos2d::CCArray* p1, int p2) {
    if ((void($LevelTools::*)(float, cocos2d::CCArray*, int)){&$LevelTools::xPosForTime} != (void(D::*)(float, cocos2d::CCArray*, int)){&D::xPosForTime})
        return reinterpret_cast<void(*)(decltype(this), float, cocos2d::CCArray*, int)>(m->getOriginal(base+0x293d90))(this, p0, p1, p2);
    else return LevelTools::xPosForTime(p0, p1, p2);
}


template<class D, void*** V>
$LoadingLayer<D, V>::~$LoadingLayer() {}

template<class D, void*** V>
$LoadingLayer<D, V>::$LoadingLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($LoadingLayer::*)()){&$LoadingLayer::loadAssets} != (void(D::*)()){&D::loadAssets})
        m->registerHook(base+0x1dfb20, extract((void(D::*)()){&D::loadAssets}));
}

template<class D, void*** V>
void $LoadingLayer<D, V>::loadAssets() {
    if ((void($LoadingLayer::*)()){&$LoadingLayer::loadAssets} != (void(D::*)()){&D::loadAssets})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x1dfb20))(this);
    else return LoadingLayer::loadAssets();
}


template<class D, void*** V>
$LocalLevelManager<D, V>::~$LocalLevelManager() {}

template<class D, void*** V>
$LocalLevelManager<D, V>::$LocalLevelManager() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((LocalLevelManager*(*)()){&$LocalLevelManager::sharedState} != (LocalLevelManager*(*)()){&D::sharedState})
        m->registerHook(base+0x35dd60, (LocalLevelManager*(*)()){&D::sharedState});
}

template<class D, void*** V>
LocalLevelManager* $LocalLevelManager<D, V>::sharedState() {
    if ((LocalLevelManager*(*)()){&$LocalLevelManager::sharedState} != (LocalLevelManager*(*)()){&D::sharedState})
        return reinterpret_cast<LocalLevelManager*(*)()>(m->getOriginal(base+0x35dd60))();
    else return LocalLevelManager::sharedState();
}


template<class D, void*** V>
$MenuGameLayer<D, V>::~$MenuGameLayer() {}

template<class D, void*** V>
$MenuGameLayer<D, V>::$MenuGameLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($MenuGameLayer::*)()){&$MenuGameLayer::resetPlayer} != (void(D::*)()){&D::resetPlayer})
        m->registerHook(base+0x28fdc0, extract((void(D::*)()){&D::resetPlayer}));

    if ((void($MenuGameLayer::*)(float)){&$MenuGameLayer::update} != (void(D::*)(float)){&D::update})
        m->registerHook(base+0x28fa70, extract((void(D::*)(float)){&D::update}));
}

template<class D, void*** V>
void $MenuGameLayer<D, V>::resetPlayer() {
    if ((void($MenuGameLayer::*)()){&$MenuGameLayer::resetPlayer} != (void(D::*)()){&D::resetPlayer})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x28fdc0))(this);
    else return MenuGameLayer::resetPlayer();
}

template<class D, void*** V>
void $MenuGameLayer<D, V>::update(float p0) {
    if ((void($MenuGameLayer::*)(float)){&$MenuGameLayer::update} != (void(D::*)(float)){&D::update})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x28fa70))(this, p0);
    else return MenuGameLayer::update(p0);
}


template<class D, void*** V>
$MenuLayer<D, V>::~$MenuLayer() {}

template<class D, void*** V>
$MenuLayer<D, V>::$MenuLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($MenuLayer::*)()){&$MenuLayer::keyBackClicked} != (void(D::*)()){&D::keyBackClicked})
        m->registerHook(base+0x1d3160, extract_virtual(V, (void(D::*)()){&D::keyBackClicked}));
    std::cout << "keyBackClicked: " << (void*)extract_virtual(V, (void(D::*)()){&D::keyBackClicked}) << std::endl;

    if ((void($MenuLayer::*)(cocos2d::CCObject*)){&$MenuLayer::onMoreGames} != (void(D::*)(cocos2d::CCObject*)){&D::onMoreGames})
        m->registerHook(base+0x1d2ad0, extract((void(D::*)(cocos2d::CCObject*)){&D::onMoreGames}));

    if ((void($MenuLayer::*)(cocos2d::CCObject*)){&$MenuLayer::onQuit} != (void(D::*)(cocos2d::CCObject*)){&D::onQuit})
        m->registerHook(base+0x1d2b40, extract((void(D::*)(cocos2d::CCObject*)){&D::onQuit}));
}

template<class D, void*** V>
void $MenuLayer<D, V>::keyBackClicked() {
    if ((void($MenuLayer::*)()){&$MenuLayer::keyBackClicked} != (void(D::*)()){&D::keyBackClicked})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x1d3160))(this);
    else return MenuLayer::keyBackClicked();
}

template<class D, void*** V>
void $MenuLayer<D, V>::onMoreGames(cocos2d::CCObject* p0) {
    if ((void($MenuLayer::*)(cocos2d::CCObject*)){&$MenuLayer::onMoreGames} != (void(D::*)(cocos2d::CCObject*)){&D::onMoreGames})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x1d2ad0))(this, p0);
    else return MenuLayer::onMoreGames(p0);
}

template<class D, void*** V>
void $MenuLayer<D, V>::onQuit(cocos2d::CCObject* p0) {
    if ((void($MenuLayer::*)(cocos2d::CCObject*)){&$MenuLayer::onQuit} != (void(D::*)(cocos2d::CCObject*)){&D::onQuit})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x1d2b40))(this, p0);
    else return MenuLayer::onQuit(p0);
}


template<class D, void*** V>
$MoreVideoOptionsLayer<D, V>::~$MoreVideoOptionsLayer() {}

template<class D, void*** V>
$MoreVideoOptionsLayer<D, V>::$MoreVideoOptionsLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((MoreVideoOptionsLayer*(*)()){&$MoreVideoOptionsLayer::create} != (MoreVideoOptionsLayer*(*)()){&D::create})
        m->registerHook(base+0x443c10, (MoreVideoOptionsLayer*(*)()){&D::create});

    if ((bool($MoreVideoOptionsLayer::*)()){&$MoreVideoOptionsLayer::init} != (bool(D::*)()){&D::init})
        m->registerHook(base+0x444150, extract((bool(D::*)()){&D::init}));
}

template<class D, void*** V>
MoreVideoOptionsLayer* $MoreVideoOptionsLayer<D, V>::create() {
    if ((MoreVideoOptionsLayer*(*)()){&$MoreVideoOptionsLayer::create} != (MoreVideoOptionsLayer*(*)()){&D::create})
        return reinterpret_cast<MoreVideoOptionsLayer*(*)()>(m->getOriginal(base+0x443c10))();
    else return MoreVideoOptionsLayer::create();
}

template<class D, void*** V>
bool $MoreVideoOptionsLayer<D, V>::init() {
    if ((bool($MoreVideoOptionsLayer::*)()){&$MoreVideoOptionsLayer::init} != (bool(D::*)()){&D::init})
        return reinterpret_cast<bool(*)(decltype(this))>(m->getOriginal(base+0x444150))(this);
    else return MoreVideoOptionsLayer::init();
}


template<class D, void*** V>
$MusicDownloadManager<D, V>::~$MusicDownloadManager() {}

template<class D, void*** V>
$MusicDownloadManager<D, V>::$MusicDownloadManager() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($MusicDownloadManager::*)(int)){&$MusicDownloadManager::incrementPriorityForSong} != (void(D::*)(int)){&D::incrementPriorityForSong})
        m->registerHook(base+0x2ef750, extract((void(D::*)(int)){&D::incrementPriorityForSong}));

    if ((MusicDownloadManager*(*)()){&$MusicDownloadManager::sharedState} != (MusicDownloadManager*(*)()){&D::sharedState})
        m->registerHook(base+0x2ee4c0, (MusicDownloadManager*(*)()){&D::sharedState});
}

template<class D, void*** V>
void $MusicDownloadManager<D, V>::incrementPriorityForSong(int p0) {
    if ((void($MusicDownloadManager::*)(int)){&$MusicDownloadManager::incrementPriorityForSong} != (void(D::*)(int)){&D::incrementPriorityForSong})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x2ef750))(this, p0);
    else return MusicDownloadManager::incrementPriorityForSong(p0);
}

template<class D, void*** V>
MusicDownloadManager* $MusicDownloadManager<D, V>::sharedState() {
    if ((MusicDownloadManager*(*)()){&$MusicDownloadManager::sharedState} != (MusicDownloadManager*(*)()){&D::sharedState})
        return reinterpret_cast<MusicDownloadManager*(*)()>(m->getOriginal(base+0x2ee4c0))();
    else return MusicDownloadManager::sharedState();
}


template<class D, void*** V>
$OBB2D<D, V>::~$OBB2D() {}

template<class D, void*** V>
$OBB2D<D, V>::$OBB2D() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($OBB2D::*)(cocos2d::CCPoint, float, float, float)){&$OBB2D::calculateWithCenter} != (void(D::*)(cocos2d::CCPoint, float, float, float)){&D::calculateWithCenter})
        m->registerHook(base+0x35a9c0, extract((void(D::*)(cocos2d::CCPoint, float, float, float)){&D::calculateWithCenter}));

    if ((OBB2D*(*)(cocos2d::CCPoint, float, float, float)){&$OBB2D::create} != (OBB2D*(*)(cocos2d::CCPoint, float, float, float)){&D::create})
        m->registerHook(base+0x35a890, (OBB2D*(*)(cocos2d::CCPoint, float, float, float)){&D::create});

    if ((void($OBB2D::*)()){&$OBB2D::getBoundingRect} != (void(D::*)()){&D::getBoundingRect})
        m->registerHook(base+0x35b2b0, extract((void(D::*)()){&D::getBoundingRect}));

    if ((void($OBB2D::*)(OBB2D*)){&$OBB2D::overlaps} != (void(D::*)(OBB2D*)){&D::overlaps})
        m->registerHook(base+0x35b0a0, extract((void(D::*)(OBB2D*)){&D::overlaps}));

    if ((void($OBB2D::*)(OBB2D*)){&$OBB2D::overlaps1Way} != (void(D::*)(OBB2D*)){&D::overlaps1Way})
        m->registerHook(base+0x35b0d0, extract((void(D::*)(OBB2D*)){&D::overlaps1Way}));
}

template<class D, void*** V>
void $OBB2D<D, V>::calculateWithCenter(cocos2d::CCPoint p0, float p1, float p2, float p3) {
    if ((void($OBB2D::*)(cocos2d::CCPoint, float, float, float)){&$OBB2D::calculateWithCenter} != (void(D::*)(cocos2d::CCPoint, float, float, float)){&D::calculateWithCenter})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCPoint, float, float, float)>(m->getOriginal(base+0x35a9c0))(this, p0, p1, p2, p3);
    else return OBB2D::calculateWithCenter(p0, p1, p2, p3);
}

template<class D, void*** V>
OBB2D* $OBB2D<D, V>::create(cocos2d::CCPoint p0, float p1, float p2, float p3) {
    if ((OBB2D*(*)(cocos2d::CCPoint, float, float, float)){&$OBB2D::create} != (OBB2D*(*)(cocos2d::CCPoint, float, float, float)){&D::create})
        return reinterpret_cast<OBB2D*(*)(cocos2d::CCPoint, float, float, float)>(m->getOriginal(base+0x35a890))(p0, p1, p2, p3);
    else return OBB2D::create(p0, p1, p2, p3);
}

template<class D, void*** V>
void $OBB2D<D, V>::getBoundingRect() {
    if ((void($OBB2D::*)()){&$OBB2D::getBoundingRect} != (void(D::*)()){&D::getBoundingRect})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x35b2b0))(this);
    else return OBB2D::getBoundingRect();
}

template<class D, void*** V>
void $OBB2D<D, V>::overlaps(OBB2D* p0) {
    if ((void($OBB2D::*)(OBB2D*)){&$OBB2D::overlaps} != (void(D::*)(OBB2D*)){&D::overlaps})
        return reinterpret_cast<void(*)(decltype(this), OBB2D*)>(m->getOriginal(base+0x35b0a0))(this, p0);
    else return OBB2D::overlaps(p0);
}

template<class D, void*** V>
void $OBB2D<D, V>::overlaps1Way(OBB2D* p0) {
    if ((void($OBB2D::*)(OBB2D*)){&$OBB2D::overlaps1Way} != (void(D::*)(OBB2D*)){&D::overlaps1Way})
        return reinterpret_cast<void(*)(decltype(this), OBB2D*)>(m->getOriginal(base+0x35b0d0))(this, p0);
    else return OBB2D::overlaps1Way(p0);
}


template<class D, void*** V>
$ObjectToolbox<D, V>::~$ObjectToolbox() {}

template<class D, void*** V>
$ObjectToolbox<D, V>::$ObjectToolbox() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((bool($ObjectToolbox::*)()){&$ObjectToolbox::init} != (bool(D::*)()){&D::init})
        m->registerHook(base+0x3b2d80, extract((bool(D::*)()){&D::init}));

    if ((char const*($ObjectToolbox::*)(int)){&$ObjectToolbox::intKeyToFrame} != (char const*(D::*)(int)){&D::intKeyToFrame})
        m->registerHook(base+0x4173b0, extract((char const*(D::*)(int)){&D::intKeyToFrame}));

    if ((ObjectToolbox*(*)()){&$ObjectToolbox::sharedState} != (ObjectToolbox*(*)()){&D::sharedState})
        m->registerHook(base+0x3b2bc0, (ObjectToolbox*(*)()){&D::sharedState});
}

template<class D, void*** V>
bool $ObjectToolbox<D, V>::init() {
    if ((bool($ObjectToolbox::*)()){&$ObjectToolbox::init} != (bool(D::*)()){&D::init})
        return reinterpret_cast<bool(*)(decltype(this))>(m->getOriginal(base+0x3b2d80))(this);
    else return ObjectToolbox::init();
}

template<class D, void*** V>
char const* $ObjectToolbox<D, V>::intKeyToFrame(int p0) {
    if ((char const*($ObjectToolbox::*)(int)){&$ObjectToolbox::intKeyToFrame} != (char const*(D::*)(int)){&D::intKeyToFrame})
        return reinterpret_cast<char const*(*)(decltype(this), int)>(m->getOriginal(base+0x4173b0))(this, p0);
    else return ObjectToolbox::intKeyToFrame(p0);
}

template<class D, void*** V>
ObjectToolbox* $ObjectToolbox<D, V>::sharedState() {
    if ((ObjectToolbox*(*)()){&$ObjectToolbox::sharedState} != (ObjectToolbox*(*)()){&D::sharedState})
        return reinterpret_cast<ObjectToolbox*(*)()>(m->getOriginal(base+0x3b2bc0))();
    else return ObjectToolbox::sharedState();
}


template<class D, void*** V>
$OpacityEffectAction<D, V>::~$OpacityEffectAction() {}

template<class D, void*** V>
$OpacityEffectAction<D, V>::$OpacityEffectAction() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((OpacityEffectAction*(*)(float, float, float, int)){&$OpacityEffectAction::create} != (OpacityEffectAction*(*)(float, float, float, int)){&D::create})
        m->registerHook(base+0x1789f0, (OpacityEffectAction*(*)(float, float, float, int)){&D::create});

    if ((OpacityEffectAction*(*)(std::string)){&$OpacityEffectAction::createFromString} != (OpacityEffectAction*(*)(std::string)){&D::createFromString})
        m->registerHook(base+0x178c10, (OpacityEffectAction*(*)(std::string)){&D::createFromString});

    if ((bool($OpacityEffectAction::*)(float, float, float, int)){&$OpacityEffectAction::init} != (bool(D::*)(float, float, float, int)){&D::init})
        m->registerHook(base+0x178b00, extract((bool(D::*)(float, float, float, int)){&D::init}));

    if ((void($OpacityEffectAction::*)(float)){&$OpacityEffectAction::step} != (void(D::*)(float)){&D::step})
        m->registerHook(base+0x178b90, extract((void(D::*)(float)){&D::step}));
}

template<class D, void*** V>
OpacityEffectAction* $OpacityEffectAction<D, V>::create(float p0, float p1, float p2, int p3) {
    if ((OpacityEffectAction*(*)(float, float, float, int)){&$OpacityEffectAction::create} != (OpacityEffectAction*(*)(float, float, float, int)){&D::create})
        return reinterpret_cast<OpacityEffectAction*(*)(float, float, float, int)>(m->getOriginal(base+0x1789f0))(p0, p1, p2, p3);
    else return OpacityEffectAction::create(p0, p1, p2, p3);
}

template<class D, void*** V>
OpacityEffectAction* $OpacityEffectAction<D, V>::createFromString(std::string p0) {
    if ((OpacityEffectAction*(*)(std::string)){&$OpacityEffectAction::createFromString} != (OpacityEffectAction*(*)(std::string)){&D::createFromString})
        return reinterpret_cast<OpacityEffectAction*(*)(std::string)>(m->getOriginal(base+0x178c10))(p0);
    else return OpacityEffectAction::createFromString(p0);
}

template<class D, void*** V>
bool $OpacityEffectAction<D, V>::init(float p0, float p1, float p2, int p3) {
    if ((bool($OpacityEffectAction::*)(float, float, float, int)){&$OpacityEffectAction::init} != (bool(D::*)(float, float, float, int)){&D::init})
        return reinterpret_cast<bool(*)(decltype(this), float, float, float, int)>(m->getOriginal(base+0x178b00))(this, p0, p1, p2, p3);
    else return OpacityEffectAction::init(p0, p1, p2, p3);
}

template<class D, void*** V>
void $OpacityEffectAction<D, V>::step(float p0) {
    if ((void($OpacityEffectAction::*)(float)){&$OpacityEffectAction::step} != (void(D::*)(float)){&D::step})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x178b90))(this, p0);
    else return OpacityEffectAction::step(p0);
}


template<class D, void*** V>
$EditorPauseLayer<D, V>::~$EditorPauseLayer() {}

template<class D, void*** V>
$EditorPauseLayer<D, V>::$EditorPauseLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((EditorPauseLayer*(*)(LevelEditorLayer*)){&$EditorPauseLayer::create} != (EditorPauseLayer*(*)(LevelEditorLayer*)){&D::create})
        m->registerHook(base+0x13c680, (EditorPauseLayer*(*)(LevelEditorLayer*)){&D::create});

    if ((void($EditorPauseLayer::*)()){&$EditorPauseLayer::saveLevel} != (void(D::*)()){&D::saveLevel})
        m->registerHook(base+0x13ebd0, extract((void(D::*)()){&D::saveLevel}));
}

template<class D, void*** V>
EditorPauseLayer* $EditorPauseLayer<D, V>::create(LevelEditorLayer* p0) {
    if ((EditorPauseLayer*(*)(LevelEditorLayer*)){&$EditorPauseLayer::create} != (EditorPauseLayer*(*)(LevelEditorLayer*)){&D::create})
        return reinterpret_cast<EditorPauseLayer*(*)(LevelEditorLayer*)>(m->getOriginal(base+0x13c680))(p0);
    else return EditorPauseLayer::create(p0);
}

template<class D, void*** V>
void $EditorPauseLayer<D, V>::saveLevel() {
    if ((void($EditorPauseLayer::*)()){&$EditorPauseLayer::saveLevel} != (void(D::*)()){&D::saveLevel})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x13ebd0))(this);
    else return EditorPauseLayer::saveLevel();
}


template<class D, void*** V>
$PauseLayer<D, V>::~$PauseLayer() {}

template<class D, void*** V>
$PauseLayer<D, V>::$PauseLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((PauseLayer*(*)(bool)){&$PauseLayer::create} != (PauseLayer*(*)(bool)){&D::create})
        m->registerHook(base+0x20b1e0, (PauseLayer*(*)(bool)){&D::create});

    if ((void($PauseLayer::*)(cocos2d::CCObject*)){&$PauseLayer::onEdit} != (void(D::*)(cocos2d::CCObject*)){&D::onEdit})
        m->registerHook(base+0x20c630, extract((void(D::*)(cocos2d::CCObject*)){&D::onEdit}));
}

template<class D, void*** V>
PauseLayer* $PauseLayer<D, V>::create(bool p0) {
    if ((PauseLayer*(*)(bool)){&$PauseLayer::create} != (PauseLayer*(*)(bool)){&D::create})
        return reinterpret_cast<PauseLayer*(*)(bool)>(m->getOriginal(base+0x20b1e0))(p0);
    else return PauseLayer::create(p0);
}

template<class D, void*** V>
void $PauseLayer<D, V>::onEdit(cocos2d::CCObject* p0) {
    if ((void($PauseLayer::*)(cocos2d::CCObject*)){&$PauseLayer::onEdit} != (void(D::*)(cocos2d::CCObject*)){&D::onEdit})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x20c630))(this, p0);
    else return PauseLayer::onEdit(p0);
}


template<class D, void*** V>
$PlatformToolbox<D, V>::~$PlatformToolbox() {}

template<class D, void*** V>
$PlatformToolbox<D, V>::$PlatformToolbox() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($PlatformToolbox::*)()){&$PlatformToolbox::hideCursor} != (void(D::*)()){&D::hideCursor})
        m->registerHook(base+0x27c340, extract((void(D::*)()){&D::hideCursor}));

    if ((void($PlatformToolbox::*)()){&$PlatformToolbox::showCursor} != (void(D::*)()){&D::showCursor})
        m->registerHook(base+0x27c360, extract((void(D::*)()){&D::showCursor}));
}

template<class D, void*** V>
void $PlatformToolbox<D, V>::hideCursor() {
    if ((void($PlatformToolbox::*)()){&$PlatformToolbox::hideCursor} != (void(D::*)()){&D::hideCursor})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x27c340))(this);
    else return PlatformToolbox::hideCursor();
}

template<class D, void*** V>
void $PlatformToolbox<D, V>::showCursor() {
    if ((void($PlatformToolbox::*)()){&$PlatformToolbox::showCursor} != (void(D::*)()){&D::showCursor})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x27c360))(this);
    else return PlatformToolbox::showCursor();
}


template<class D, void*** V>
$PlayLayer<D, V>::~$PlayLayer() {}

template<class D, void*** V>
$PlayLayer<D, V>::$PlayLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($PlayLayer::*)(CCCircleWave*)){&$PlayLayer::addCircle} != (void(D::*)(CCCircleWave*)){&D::addCircle})
        m->registerHook(base+0x7e0f0, extract((void(D::*)(CCCircleWave*)){&D::addCircle}));

    if ((void($PlayLayer::*)(GameObject*)){&$PlayLayer::addObject} != (void(D::*)(GameObject*)){&D::addObject})
        m->registerHook(base+0x70e50, extract((void(D::*)(GameObject*)){&D::addObject}));

    if ((void($PlayLayer::*)(GameObject*)){&$PlayLayer::addToGroupOld} != (void(D::*)(GameObject*)){&D::addToGroupOld})
        m->registerHook(base+0x77680, extract((void(D::*)(GameObject*)){&D::addToGroupOld}));

    if ((void($PlayLayer::*)(GameObject*)){&$PlayLayer::addToSpeedObjects} != (void(D::*)(GameObject*)){&D::addToSpeedObjects})
        m->registerHook(base+0x7cfc0, extract((void(D::*)(GameObject*)){&D::addToSpeedObjects}));

    if ((void($PlayLayer::*)(GameObject*, float, bool)){&$PlayLayer::animateInDualGround} != (void(D::*)(GameObject*, float, bool)){&D::animateInDualGround})
        m->registerHook(base+0x7d710, extract((void(D::*)(GameObject*, float, bool)){&D::animateInDualGround}));

    if ((void($PlayLayer::*)(bool)){&$PlayLayer::animateInGround} != (void(D::*)(bool)){&D::animateInGround})
        m->registerHook(base+0x7d9d0, extract((void(D::*)(bool)){&D::animateInGround}));

    if ((void($PlayLayer::*)(bool)){&$PlayLayer::animateOutGround} != (void(D::*)(bool)){&D::animateOutGround})
        m->registerHook(base+0x6f350, extract((void(D::*)(bool)){&D::animateOutGround}));

    if ((void($PlayLayer::*)()){&$PlayLayer::animateOutGroundFinished} != (void(D::*)()){&D::animateOutGroundFinished})
        m->registerHook(base+0x7de80, extract((void(D::*)()){&D::animateOutGroundFinished}));

    if ((void($PlayLayer::*)(GameObject*)){&$PlayLayer::applyEnterEffect} != (void(D::*)(GameObject*)){&D::applyEnterEffect})
        m->registerHook(base+0x7c310, extract((void(D::*)(GameObject*)){&D::applyEnterEffect}));

    if ((void($PlayLayer::*)(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)){&$PlayLayer::calculateColorValues} != (void(D::*)(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)){&D::calculateColorValues})
        m->registerHook(base+0x7aa10, extract_virtual(V, (void(D::*)(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)){&D::calculateColorValues}));
    std::cout << "calculateColorValues: " << (void*)extract_virtual(V, (void(D::*)(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)){&D::calculateColorValues}) << std::endl;

    if ((void($PlayLayer::*)(float, float, float)){&$PlayLayer::cameraMoveX} != (void(D::*)(float, float, float)){&D::cameraMoveX})
        m->registerHook(base+0x7cbe0, extract((void(D::*)(float, float, float)){&D::cameraMoveX}));

    if ((void($PlayLayer::*)(float, float, float)){&$PlayLayer::cameraMoveY} != (void(D::*)(float, float, float)){&D::cameraMoveY})
        m->registerHook(base+0x7cc60, extract((void(D::*)(float, float, float)){&D::cameraMoveY}));

    if ((void($PlayLayer::*)(PlayerObject*, float)){&$PlayLayer::checkCollisions} != (void(D::*)(PlayerObject*, float)){&D::checkCollisions})
        m->registerHook(base+0x78c90, extract((void(D::*)(PlayerObject*, float)){&D::checkCollisions}));

    if ((void($PlayLayer::*)(CCCircleWave*)){&$PlayLayer::circleWaveWillBeRemoved} != (void(D::*)(CCCircleWave*)){&D::circleWaveWillBeRemoved})
        m->registerHook(base+0x7e110, extract((void(D::*)(CCCircleWave*)){&D::circleWaveWillBeRemoved}));

    if ((void($PlayLayer::*)(std::string)){&$PlayLayer::claimParticle} != (void(D::*)(std::string)){&D::claimParticle})
        m->registerHook(base+0x76ba0, extract((void(D::*)(std::string)){&D::claimParticle}));

    if ((void($PlayLayer::*)()){&$PlayLayer::clearPickedUpItems} != (void(D::*)()){&D::clearPickedUpItems})
        m->registerHook(base+0x7cfa0, extract((void(D::*)()){&D::clearPickedUpItems}));

    if ((void($PlayLayer::*)(int, cocos2d::_ccColor3B)){&$PlayLayer::colorObject} != (void(D::*)(int, cocos2d::_ccColor3B)){&D::colorObject})
        m->registerHook(base+0x77810, extract((void(D::*)(int, cocos2d::_ccColor3B)){&D::colorObject}));

    if ((void($PlayLayer::*)()){&$PlayLayer::commitJumps} != (void(D::*)()){&D::commitJumps})
        m->registerHook(base+0x737e0, extract((void(D::*)()){&D::commitJumps}));

    if ((PlayLayer*(*)(GJGameLevel*)){&$PlayLayer::create} != (PlayLayer*(*)(GJGameLevel*)){&D::create})
        m->registerHook(base+0x6b590, (PlayLayer*(*)(GJGameLevel*)){&D::create});

    if ((void($PlayLayer::*)()){&$PlayLayer::createCheckpoint} != (void(D::*)()){&D::createCheckpoint})
        m->registerHook(base+0x7e470, extract((void(D::*)()){&D::createCheckpoint}));

    if ((void($PlayLayer::*)(std::string)){&$PlayLayer::createObjectsFromSetup} != (void(D::*)(std::string)){&D::createObjectsFromSetup})
        m->registerHook(base+0x6d130, extract((void(D::*)(std::string)){&D::createObjectsFromSetup}));

    if ((void($PlayLayer::*)(int, char const*, int, cocos2d::tCCPositionType)){&$PlayLayer::createParticle} != (void(D::*)(int, char const*, int, cocos2d::tCCPositionType)){&D::createParticle})
        m->registerHook(base+0x76800, extract((void(D::*)(int, char const*, int, cocos2d::tCCPositionType)){&D::createParticle}));

    if ((void($PlayLayer::*)(CurrencyRewardLayer*)){&$PlayLayer::currencyWillExit} != (void(D::*)(CurrencyRewardLayer*)){&D::currencyWillExit})
        m->registerHook(base+0x7e070, extract((void(D::*)(CurrencyRewardLayer*)){&D::currencyWillExit}));

    if ((void($PlayLayer::*)()){&$PlayLayer::delayedResetLevel} != (void(D::*)()){&D::delayedResetLevel})
        m->registerHook(base+0x7e050, extract((void(D::*)()){&D::delayedResetLevel}));

    if ((void($PlayLayer::*)(PlayerObject*, GameObject*)){&$PlayLayer::destroyPlayer} != (void(D::*)(PlayerObject*, GameObject*)){&D::destroyPlayer})
        m->registerHook(base+0x7ab80, extract((void(D::*)(PlayerObject*, GameObject*)){&D::destroyPlayer}));

    if ((void($PlayLayer::*)(DialogLayer*)){&$PlayLayer::dialogClosed} != (void(D::*)(DialogLayer*)){&D::dialogClosed})
        m->registerHook(base+0x7e0b0, extract((void(D::*)(DialogLayer*)){&D::dialogClosed}));

    if ((void($PlayLayer::*)()){&$PlayLayer::draw} != (void(D::*)()){&D::draw})
        m->registerHook(base+0x7d160, extract_virtual(V, (void(D::*)()){&D::draw}));
    std::cout << "draw: " << (void*)extract_virtual(V, (void(D::*)()){&D::draw}) << std::endl;

    if ((void($PlayLayer::*)(GameObject*, bool)){&$PlayLayer::enterDualMode} != (void(D::*)(GameObject*, bool)){&D::enterDualMode})
        m->registerHook(base+0x7d6a0, extract((void(D::*)(GameObject*, bool)){&D::enterDualMode}));

    if ((void($PlayLayer::*)()){&$PlayLayer::exitAirMode} != (void(D::*)()){&D::exitAirMode})
        m->registerHook(base+0x7dd40, extract((void(D::*)()){&D::exitAirMode}));

    if ((void($PlayLayer::*)(PlayerObject*)){&$PlayLayer::exitBirdMode} != (void(D::*)(PlayerObject*)){&D::exitBirdMode})
        m->registerHook(base+0x7dd80, extract((void(D::*)(PlayerObject*)){&D::exitBirdMode}));

    if ((void($PlayLayer::*)(PlayerObject*)){&$PlayLayer::exitDartMode} != (void(D::*)(PlayerObject*)){&D::exitDartMode})
        m->registerHook(base+0x7ddd0, extract((void(D::*)(PlayerObject*)){&D::exitDartMode}));

    if ((void($PlayLayer::*)(PlayerObject*)){&$PlayLayer::exitFlyMode} != (void(D::*)(PlayerObject*)){&D::exitFlyMode})
        m->registerHook(base+0x7dcf0, extract((void(D::*)(PlayerObject*)){&D::exitFlyMode}));

    if ((void($PlayLayer::*)(PlayerObject*)){&$PlayLayer::exitRobotMode} != (void(D::*)(PlayerObject*)){&D::exitRobotMode})
        m->registerHook(base+0x7de20, extract((void(D::*)(PlayerObject*)){&D::exitRobotMode}));

    if ((void($PlayLayer::*)(PlayerObject*)){&$PlayLayer::exitRollMode} != (void(D::*)(PlayerObject*)){&D::exitRollMode})
        m->registerHook(base+0x7de60, extract((void(D::*)(PlayerObject*)){&D::exitRollMode}));

    if ((void($PlayLayer::*)(PlayerObject*)){&$PlayLayer::exitSpiderMode} != (void(D::*)(PlayerObject*)){&D::exitSpiderMode})
        m->registerHook(base+0x7de40, extract((void(D::*)(PlayerObject*)){&D::exitSpiderMode}));

    if ((void($PlayLayer::*)()){&$PlayLayer::flipFinished} != (void(D::*)()){&D::flipFinished})
        m->registerHook(base+0x7e150, extract((void(D::*)()){&D::flipFinished}));

    if ((void($PlayLayer::*)(PlayerObject*, bool, bool)){&$PlayLayer::flipGravity} != (void(D::*)(PlayerObject*, bool, bool)){&D::flipGravity})
        m->registerHook(base+0x7cd10, extract_virtual(V, (void(D::*)(PlayerObject*, bool, bool)){&D::flipGravity}));
    std::cout << "flipGravity: " << (void*)extract_virtual(V, (void(D::*)(PlayerObject*, bool, bool)){&D::flipGravity}) << std::endl;

    if ((void($PlayLayer::*)()){&$PlayLayer::flipObjects} != (void(D::*)()){&D::flipObjects})
        m->registerHook(base+0x76130, extract((void(D::*)()){&D::flipObjects}));

    if ((void($PlayLayer::*)()){&$PlayLayer::fullReset} != (void(D::*)()){&D::fullReset})
        m->registerHook(base+0x7f8e0, extract((void(D::*)()){&D::fullReset}));

    if ((void($PlayLayer::*)()){&$PlayLayer::getLastCheckpoint} != (void(D::*)()){&D::getLastCheckpoint})
        m->registerHook(base+0x7f840, extract((void(D::*)()){&D::getLastCheckpoint}));

    if ((void($PlayLayer::*)()){&$PlayLayer::getMaxPortalY} != (void(D::*)()){&D::getMaxPortalY})
        m->registerHook(base+0x7b4e0, extract((void(D::*)()){&D::getMaxPortalY}));

    if ((void($PlayLayer::*)()){&$PlayLayer::getMinPortalY} != (void(D::*)()){&D::getMinPortalY})
        m->registerHook(base+0x7b550, extract((void(D::*)()){&D::getMinPortalY}));

    if ((void($PlayLayer::*)()){&$PlayLayer::getObjectsState} != (void(D::*)()){&D::getObjectsState})
        m->registerHook(base+0x7e9d0, extract((void(D::*)()){&D::getObjectsState}));

    if ((void($PlayLayer::*)(PlayerObject*)){&$PlayLayer::getOtherPlayer} != (void(D::*)(PlayerObject*)){&D::getOtherPlayer})
        m->registerHook(base+0x7dcc0, extract((void(D::*)(PlayerObject*)){&D::getOtherPlayer}));

    if ((void($PlayLayer::*)(int, char const*, int, cocos2d::tCCPositionType)){&$PlayLayer::getParticleKey} != (void(D::*)(int, char const*, int, cocos2d::tCCPositionType)){&D::getParticleKey})
        m->registerHook(base+0x764d0, extract((void(D::*)(int, char const*, int, cocos2d::tCCPositionType)){&D::getParticleKey}));

    if ((void($PlayLayer::*)(std::string)){&$PlayLayer::getParticleKey2} != (void(D::*)(std::string)){&D::getParticleKey2})
        m->registerHook(base+0x767b0, extract((void(D::*)(std::string)){&D::getParticleKey2}));

    if ((void($PlayLayer::*)(cocos2d::CCPoint, float, float, float)){&$PlayLayer::getRelativeMod} != (void(D::*)(cocos2d::CCPoint, float, float, float)){&D::getRelativeMod})
        m->registerHook(base+0x7c2a0, extract((void(D::*)(cocos2d::CCPoint, float, float, float)){&D::getRelativeMod}));

    if ((void($PlayLayer::*)()){&$PlayLayer::getTempMilliTime} != (void(D::*)()){&D::getTempMilliTime})
        m->registerHook(base+0x778e0, extract((void(D::*)()){&D::getTempMilliTime}));

    if ((void($PlayLayer::*)()){&$PlayLayer::gravityEffectFinished} != (void(D::*)()){&D::gravityEffectFinished})
        m->registerHook(base+0x7cec0, extract((void(D::*)()){&D::gravityEffectFinished}));

    if ((void($PlayLayer::*)(int)){&$PlayLayer::hasItem} != (void(D::*)(int)){&D::hasItem})
        m->registerHook(base+0x7cee0, extract((void(D::*)(int)){&D::hasItem}));

    if ((void($PlayLayer::*)(GameObject*)){&$PlayLayer::hasUniqueCoin} != (void(D::*)(GameObject*)){&D::hasUniqueCoin})
        m->registerHook(base+0x77510, extract((void(D::*)(GameObject*)){&D::hasUniqueCoin}));

    if ((void($PlayLayer::*)()){&$PlayLayer::incrementJumps} != (void(D::*)()){&D::incrementJumps})
        m->registerHook(base+0x7ff40, extract((void(D::*)()){&D::incrementJumps}));

    if ((bool($PlayLayer::*)(GJGameLevel*)){&$PlayLayer::init} != (bool(D::*)(GJGameLevel*)){&D::init})
        m->registerHook(base+0x6b5f0, extract((bool(D::*)(GJGameLevel*)){&D::init}));

    if ((void($PlayLayer::*)()){&$PlayLayer::isFlipping} != (void(D::*)()){&D::isFlipping})
        m->registerHook(base+0x76100, extract((void(D::*)()){&D::isFlipping}));

    if ((void($PlayLayer::*)()){&$PlayLayer::levelComplete} != (void(D::*)()){&D::levelComplete})
        m->registerHook(base+0x72b80, extract((void(D::*)()){&D::levelComplete}));

    if ((void($PlayLayer::*)(cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, int, bool, float)){&$PlayLayer::lightningFlash} != (void(D::*)(cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, int, bool, float)){&D::lightningFlash})
        m->registerHook(base+0x75cc0, extract((void(D::*)(cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, int, bool, float)){&D::lightningFlash}));

    if ((void($PlayLayer::*)(cocos2d::CCPoint, cocos2d::_ccColor3B)){&$PlayLayer::lightningFlash} != (void(D::*)(cocos2d::CCPoint, cocos2d::_ccColor3B)){&D::lightningFlash})
        m->registerHook(base+0x75bf0, extract((void(D::*)(cocos2d::CCPoint, cocos2d::_ccColor3B)){&D::lightningFlash}));

    if ((void($PlayLayer::*)()){&$PlayLayer::loadDefaultColors} != (void(D::*)()){&D::loadDefaultColors})
        m->registerHook(base+0x6ef30, extract((void(D::*)()){&D::loadDefaultColors}));

    if ((void($PlayLayer::*)(CheckpointObject*)){&$PlayLayer::loadFromCheckpoint} != (void(D::*)(CheckpointObject*)){&D::loadFromCheckpoint})
        m->registerHook(base+0x7f000, extract((void(D::*)(CheckpointObject*)){&D::loadFromCheckpoint}));

    if ((void($PlayLayer::*)()){&$PlayLayer::loadLastCheckpoint} != (void(D::*)()){&D::loadLastCheckpoint})
        m->registerHook(base+0x7efc0, extract((void(D::*)()){&D::loadLastCheckpoint}));

    if ((void($PlayLayer::*)(std::string)){&$PlayLayer::loadSavedObjectsState} != (void(D::*)(std::string)){&D::loadSavedObjectsState})
        m->registerHook(base+0x7f3d0, extract((void(D::*)(std::string)){&D::loadSavedObjectsState}));

    if ((void($PlayLayer::*)()){&$PlayLayer::markCheckpoint} != (void(D::*)()){&D::markCheckpoint})
        m->registerHook(base+0x7ef60, extract((void(D::*)()){&D::markCheckpoint}));

    if ((void($PlayLayer::*)(cocos2d::CCPoint)){&$PlayLayer::moveCameraToPos} != (void(D::*)(cocos2d::CCPoint)){&D::moveCameraToPos})
        m->registerHook(base+0x7c980, extract((void(D::*)(cocos2d::CCPoint)){&D::moveCameraToPos}));

    if ((void($PlayLayer::*)()){&$PlayLayer::onEnterTransitionDidFinish} != (void(D::*)()){&D::onEnterTransitionDidFinish})
        m->registerHook(base+0x806e0, extract_virtual(V, (void(D::*)()){&D::onEnterTransitionDidFinish}));
    std::cout << "onEnterTransitionDidFinish: " << (void*)extract_virtual(V, (void(D::*)()){&D::onEnterTransitionDidFinish}) << std::endl;

    if ((void($PlayLayer::*)()){&$PlayLayer::onExit} != (void(D::*)()){&D::onExit})
        m->registerHook(base+0x80710, extract_virtual(V, (void(D::*)()){&D::onExit}));
    std::cout << "onExit: " << (void*)extract_virtual(V, (void(D::*)()){&D::onExit}) << std::endl;

    if ((void($PlayLayer::*)()){&$PlayLayer::onQuit} != (void(D::*)()){&D::onQuit})
        m->registerHook(base+0x72710, extract((void(D::*)()){&D::onQuit}));

    if ((void($PlayLayer::*)()){&$PlayLayer::optimizeColorGroups} != (void(D::*)()){&D::optimizeColorGroups})
        m->registerHook(base+0x6dad0, extract((void(D::*)()){&D::optimizeColorGroups}));

    if ((void($PlayLayer::*)()){&$PlayLayer::optimizeOpacityGroups} != (void(D::*)()){&D::optimizeOpacityGroups})
        m->registerHook(base+0x6dc20, extract((void(D::*)()){&D::optimizeOpacityGroups}));

    if ((void($PlayLayer::*)()){&$PlayLayer::optimizeSaveRequiredGroups} != (void(D::*)()){&D::optimizeSaveRequiredGroups})
        m->registerHook(base+0x6dd70, extract((void(D::*)()){&D::optimizeSaveRequiredGroups}));

    if ((void($PlayLayer::*)(bool)){&$PlayLayer::pauseGame} != (void(D::*)(bool)){&D::pauseGame})
        m->registerHook(base+0x802d0, extract((void(D::*)(bool)){&D::pauseGame}));

    if ((void($PlayLayer::*)(GameObject*)){&$PlayLayer::pickupItem} != (void(D::*)(GameObject*)){&D::pickupItem})
        m->registerHook(base+0x7c1d0, extract((void(D::*)(GameObject*)){&D::pickupItem}));

    if ((void($PlayLayer::*)(int, int)){&$PlayLayer::playAnimationCommand} != (void(D::*)(int, int)){&D::playAnimationCommand})
        m->registerHook(base+0x75930, extract((void(D::*)(int, int)){&D::playAnimationCommand}));

    if ((void($PlayLayer::*)(cocos2d::CCPoint)){&$PlayLayer::playEndAnimationToPos} != (void(D::*)(cocos2d::CCPoint)){&D::playEndAnimationToPos})
        m->registerHook(base+0x759a0, extract((void(D::*)(cocos2d::CCPoint)){&D::playEndAnimationToPos}));

    if ((void($PlayLayer::*)(PlayerObject*)){&$PlayLayer::playExitDualEffect} != (void(D::*)(PlayerObject*)){&D::playExitDualEffect})
        m->registerHook(base+0x7d1d0, extract((void(D::*)(PlayerObject*)){&D::playExitDualEffect}));

    if ((void($PlayLayer::*)(float, int, float)){&$PlayLayer::playFlashEffect} != (void(D::*)(float, int, float)){&D::playFlashEffect})
        m->registerHook(base+0x75e50, extract((void(D::*)(float, int, float)){&D::playFlashEffect}));

    if ((void($PlayLayer::*)(bool)){&$PlayLayer::playGravityEffect} != (void(D::*)(bool)){&D::playGravityEffect})
        m->registerHook(base+0x7b5a0, extract((void(D::*)(bool)){&D::playGravityEffect}));

    if ((void($PlayLayer::*)(float)){&$PlayLayer::playSpeedParticle} != (void(D::*)(float)){&D::playSpeedParticle})
        m->registerHook(base+0x77030, extract((void(D::*)(float)){&D::playSpeedParticle}));

    if ((void($PlayLayer::*)(PlayerObject*, GameObject*)){&$PlayLayer::playerWillSwitchMode} != (void(D::*)(PlayerObject*, GameObject*)){&D::playerWillSwitchMode})
        m->registerHook(base+0x7b820, extract((void(D::*)(PlayerObject*, GameObject*)){&D::playerWillSwitchMode}));

    if ((void($PlayLayer::*)()){&$PlayLayer::prepareSpawnObjects} != (void(D::*)()){&D::prepareSpawnObjects})
        m->registerHook(base+0x7fc00, extract((void(D::*)()){&D::prepareSpawnObjects}));

    if ((void($PlayLayer::*)()){&$PlayLayer::processItems} != (void(D::*)()){&D::processItems})
        m->registerHook(base+0x735c0, extract((void(D::*)()){&D::processItems}));

    if ((void($PlayLayer::*)()){&$PlayLayer::processLoadedMoveActions} != (void(D::*)()){&D::processLoadedMoveActions})
        m->registerHook(base+0x7a7c0, extract((void(D::*)()){&D::processLoadedMoveActions}));

    if ((void($PlayLayer::*)(bool, PlayerObject*)){&$PlayLayer::recordAction} != (void(D::*)(bool, PlayerObject*)){&D::recordAction})
        m->registerHook(base+0x7e190, extract((void(D::*)(bool, PlayerObject*)){&D::recordAction}));

    if ((void($PlayLayer::*)(GameObject*)){&$PlayLayer::registerActiveObject} != (void(D::*)(GameObject*)){&D::registerActiveObject})
        m->registerHook(base+0x77620, extract((void(D::*)(GameObject*)){&D::registerActiveObject}));

    if ((void($PlayLayer::*)(GameObject*)){&$PlayLayer::registerStateObject} != (void(D::*)(GameObject*)){&D::registerStateObject})
        m->registerHook(base+0x777b0, extract((void(D::*)(GameObject*)){&D::registerStateObject}));

    if ((void($PlayLayer::*)()){&$PlayLayer::removeAllObjects} != (void(D::*)()){&D::removeAllObjects})
        m->registerHook(base+0x727b0, extract((void(D::*)()){&D::removeAllObjects}));

    if ((void($PlayLayer::*)(GameObject*)){&$PlayLayer::removeFromGroupOld} != (void(D::*)(GameObject*)){&D::removeFromGroupOld})
        m->registerHook(base+0x77750, extract((void(D::*)(GameObject*)){&D::removeFromGroupOld}));

    if ((void($PlayLayer::*)()){&$PlayLayer::removeLastCheckpoint} != (void(D::*)()){&D::removeLastCheckpoint})
        m->registerHook(base+0x7f870, extract((void(D::*)()){&D::removeLastCheckpoint}));

    if ((void($PlayLayer::*)()){&$PlayLayer::removePlayer2} != (void(D::*)()){&D::removePlayer2})
        m->registerHook(base+0x7d630, extract((void(D::*)()){&D::removePlayer2}));

    if ((void($PlayLayer::*)()){&$PlayLayer::resetLevel} != (void(D::*)()){&D::resetLevel})
        m->registerHook(base+0x71c50, extract((void(D::*)()){&D::resetLevel}));

    if ((void($PlayLayer::*)()){&$PlayLayer::resume} != (void(D::*)()){&D::resume})
        m->registerHook(base+0x80480, extract((void(D::*)()){&D::resume}));

    if ((void($PlayLayer::*)()){&$PlayLayer::resumeAndRestart} != (void(D::*)()){&D::resumeAndRestart})
        m->registerHook(base+0x80400, extract((void(D::*)()){&D::resumeAndRestart}));

    if ((void($PlayLayer::*)(bool, PlayerObject*)){&$PlayLayer::saveRecordAction} != (void(D::*)(bool, PlayerObject*)){&D::saveRecordAction})
        m->registerHook(base+0x78750, extract((void(D::*)(bool, PlayerObject*)){&D::saveRecordAction}));

    if ((void($PlayLayer::*)(GJGameLevel*)){&$PlayLayer::scene} != (void(D::*)(GJGameLevel*)){&D::scene})
        m->registerHook(base+0x6b500, extract((void(D::*)(GJGameLevel*)){&D::scene}));

    if ((void($PlayLayer::*)(LevelSettingsObject*)){&$PlayLayer::setupLevelStart} != (void(D::*)(LevelSettingsObject*)){&D::setupLevelStart})
        m->registerHook(base+0x6f560, extract((void(D::*)(LevelSettingsObject*)){&D::setupLevelStart}));

    if ((void($PlayLayer::*)(std::string)){&$PlayLayer::setupReplay} != (void(D::*)(std::string)){&D::setupReplay})
        m->registerHook(base+0x7e1e0, extract((void(D::*)(std::string)){&D::setupReplay}));

    if ((void($PlayLayer::*)(float, float, float)){&$PlayLayer::shakeCamera} != (void(D::*)(float, float, float)){&D::shakeCamera})
        m->registerHook(base+0x744a0, extract((void(D::*)(float, float, float)){&D::shakeCamera}));

    if ((void($PlayLayer::*)(int)){&$PlayLayer::shouldBlend} != (void(D::*)(int)){&D::shouldBlend})
        m->registerHook(base+0x771b0, extract((void(D::*)(int)){&D::shouldBlend}));

    if ((void($PlayLayer::*)()){&$PlayLayer::showCompleteEffect} != (void(D::*)()){&D::showCompleteEffect})
        m->registerHook(base+0x738e0, extract((void(D::*)()){&D::showCompleteEffect}));

    if ((void($PlayLayer::*)()){&$PlayLayer::showCompleteText} != (void(D::*)()){&D::showCompleteText})
        m->registerHook(base+0x73be0, extract((void(D::*)()){&D::showCompleteText}));

    if ((void($PlayLayer::*)()){&$PlayLayer::showEndLayer} != (void(D::*)()){&D::showEndLayer})
        m->registerHook(base+0x74450, extract((void(D::*)()){&D::showEndLayer}));

    if ((void($PlayLayer::*)()){&$PlayLayer::showHint} != (void(D::*)()){&D::showHint})
        m->registerHook(base+0x7deb0, extract((void(D::*)()){&D::showHint}));

    if ((void($PlayLayer::*)(bool, int, int, bool, bool, bool)){&$PlayLayer::showNewBest} != (void(D::*)(bool, int, int, bool, bool, bool)){&D::showNewBest})
        m->registerHook(base+0x74580, extract((void(D::*)(bool, int, int, bool, bool, bool)){&D::showNewBest}));

    if ((void($PlayLayer::*)()){&$PlayLayer::showRetryLayer} != (void(D::*)()){&D::showRetryLayer})
        m->registerHook(base+0x75ba0, extract((void(D::*)()){&D::showRetryLayer}));

    if ((void($PlayLayer::*)()){&$PlayLayer::showTwoPlayerGuide} != (void(D::*)()){&D::showTwoPlayerGuide})
        m->registerHook(base+0x6df00, extract((void(D::*)()){&D::showTwoPlayerGuide}));

    if ((void($PlayLayer::*)()){&$PlayLayer::sortGroups} != (void(D::*)()){&D::sortGroups})
        m->registerHook(base+0x6d9e0, extract((void(D::*)()){&D::sortGroups}));

    if ((void($PlayLayer::*)()){&$PlayLayer::spawnCircle} != (void(D::*)()){&D::spawnCircle})
        m->registerHook(base+0x73820, extract((void(D::*)()){&D::spawnCircle}));

    if ((void($PlayLayer::*)()){&$PlayLayer::spawnFirework} != (void(D::*)()){&D::spawnFirework})
        m->registerHook(base+0x74200, extract((void(D::*)()){&D::spawnFirework}));

    if ((void($PlayLayer::*)(char const*, int, cocos2d::tCCPositionType, cocos2d::CCPoint)){&$PlayLayer::spawnParticle} != (void(D::*)(char const*, int, cocos2d::tCCPositionType, cocos2d::CCPoint)){&D::spawnParticle})
        m->registerHook(base+0x76330, extract((void(D::*)(char const*, int, cocos2d::tCCPositionType, cocos2d::CCPoint)){&D::spawnParticle}));

    if ((void($PlayLayer::*)()){&$PlayLayer::spawnPlayer2} != (void(D::*)()){&D::spawnPlayer2})
        m->registerHook(base+0x7d170, extract((void(D::*)()){&D::spawnPlayer2}));

    if ((void($PlayLayer::*)()){&$PlayLayer::startGame} != (void(D::*)()){&D::startGame})
        m->registerHook(base+0x726b0, extract((void(D::*)()){&D::startGame}));

    if ((void($PlayLayer::*)()){&$PlayLayer::startMusic} != (void(D::*)()){&D::startMusic})
        m->registerHook(base+0x72910, extract((void(D::*)()){&D::startMusic}));

    if ((void($PlayLayer::*)()){&$PlayLayer::startRecording} != (void(D::*)()){&D::startRecording})
        m->registerHook(base+0x7fec0, extract((void(D::*)()){&D::startRecording}));

    if ((void($PlayLayer::*)()){&$PlayLayer::startRecordingDelayed} != (void(D::*)()){&D::startRecordingDelayed})
        m->registerHook(base+0x7fed0, extract((void(D::*)()){&D::startRecordingDelayed}));

    if ((void($PlayLayer::*)()){&$PlayLayer::stopCameraShake} != (void(D::*)()){&D::stopCameraShake})
        m->registerHook(base+0x75900, extract((void(D::*)()){&D::stopCameraShake}));

    if ((void($PlayLayer::*)()){&$PlayLayer::stopRecording} != (void(D::*)()){&D::stopRecording})
        m->registerHook(base+0x6d090, extract((void(D::*)()){&D::stopRecording}));

    if ((void($PlayLayer::*)(CheckpointObject*)){&$PlayLayer::storeCheckpoint} != (void(D::*)(CheckpointObject*)){&D::storeCheckpoint})
        m->registerHook(base+0x7ef10, extract((void(D::*)(CheckpointObject*)){&D::storeCheckpoint}));

    if ((void($PlayLayer::*)(PlayerObject*, GameObject*, bool, int)){&$PlayLayer::switchToFlyMode} != (void(D::*)(PlayerObject*, GameObject*, bool, int)){&D::switchToFlyMode})
        m->registerHook(base+0x7baf0, extract((void(D::*)(PlayerObject*, GameObject*, bool, int)){&D::switchToFlyMode}));

    if ((void($PlayLayer::*)(PlayerObject*, GameObject*, bool)){&$PlayLayer::switchToRobotMode} != (void(D::*)(PlayerObject*, GameObject*, bool)){&D::switchToRobotMode})
        m->registerHook(base+0x7bc80, extract((void(D::*)(PlayerObject*, GameObject*, bool)){&D::switchToRobotMode}));

    if ((void($PlayLayer::*)(PlayerObject*, GameObject*, bool)){&$PlayLayer::switchToRollMode} != (void(D::*)(PlayerObject*, GameObject*, bool)){&D::switchToRollMode})
        m->registerHook(base+0x7bbe0, extract((void(D::*)(PlayerObject*, GameObject*, bool)){&D::switchToRollMode}));

    if ((void($PlayLayer::*)(PlayerObject*, GameObject*, bool)){&$PlayLayer::switchToSpiderMode} != (void(D::*)(PlayerObject*, GameObject*, bool)){&D::switchToSpiderMode})
        m->registerHook(base+0x7bd20, extract((void(D::*)(PlayerObject*, GameObject*, bool)){&D::switchToSpiderMode}));

    if ((void($PlayLayer::*)(float)){&$PlayLayer::timeForXPos} != (void(D::*)(float)){&D::timeForXPos})
        m->registerHook(base+0x7d120, extract((void(D::*)(float)){&D::timeForXPos}));

    if ((void($PlayLayer::*)(float, bool)){&$PlayLayer::timeForXPos2} != (void(D::*)(float, bool)){&D::timeForXPos2})
        m->registerHook(base+0x293eb0, extract((void(D::*)(float, bool)){&D::timeForXPos2}));

    if ((void($PlayLayer::*)(bool)){&$PlayLayer::toggleBGEffectVisibility} != (void(D::*)(bool)){&D::toggleBGEffectVisibility})
        m->registerHook(base+0x7fe80, extract((void(D::*)(bool)){&D::toggleBGEffectVisibility}));

    if ((void($PlayLayer::*)(GameObject*, bool, PlayerObject*, bool)){&$PlayLayer::toggleDualMode} != (void(D::*)(GameObject*, bool, PlayerObject*, bool)){&D::toggleDualMode})
        m->registerHook(base+0x7bf90, extract((void(D::*)(GameObject*, bool, PlayerObject*, bool)){&D::toggleDualMode}));

    if ((void($PlayLayer::*)(bool, bool)){&$PlayLayer::toggleFlipped} != (void(D::*)(bool, bool)){&D::toggleFlipped})
        m->registerHook(base+0x7bdc0, extract((void(D::*)(bool, bool)){&D::toggleFlipped}));

    if ((void($PlayLayer::*)(int)){&$PlayLayer::toggleGhostEffect} != (void(D::*)(int)){&D::toggleGhostEffect})
        m->registerHook(base+0x7fe40, extract((void(D::*)(int)){&D::toggleGhostEffect}));

    if ((void($PlayLayer::*)(bool)){&$PlayLayer::toggleGlitter} != (void(D::*)(bool)){&D::toggleGlitter})
        m->registerHook(base+0x70e00, extract((void(D::*)(bool)){&D::toggleGlitter}));

    if ((void($PlayLayer::*)(bool)){&$PlayLayer::togglePracticeMode} != (void(D::*)(bool)){&D::togglePracticeMode})
        m->registerHook(base+0x7f9e0, extract((void(D::*)(bool)){&D::togglePracticeMode}));

    if ((void($PlayLayer::*)()){&$PlayLayer::toggleProgressbar} != (void(D::*)()){&D::toggleProgressbar})
        m->registerHook(base+0x6eeb0, extract((void(D::*)()){&D::toggleProgressbar}));

    if ((void($PlayLayer::*)()){&$PlayLayer::tryStartRecord} != (void(D::*)()){&D::tryStartRecord})
        m->registerHook(base+0x7fe00, extract((void(D::*)()){&D::tryStartRecord}));

    if ((void($PlayLayer::*)(char const*, cocos2d::CCParticleSystemQuad*)){&$PlayLayer::unclaimParticle} != (void(D::*)(char const*, cocos2d::CCParticleSystemQuad*)){&D::unclaimParticle})
        m->registerHook(base+0x76e00, extract((void(D::*)(char const*, cocos2d::CCParticleSystemQuad*)){&D::unclaimParticle}));

    if ((void($PlayLayer::*)(GameObject*)){&$PlayLayer::unregisterActiveObject} != (void(D::*)(GameObject*)){&D::unregisterActiveObject})
        m->registerHook(base+0x77660, extract((void(D::*)(GameObject*)){&D::unregisterActiveObject}));

    if ((void($PlayLayer::*)(GameObject*)){&$PlayLayer::unregisterStateObject} != (void(D::*)(GameObject*)){&D::unregisterStateObject})
        m->registerHook(base+0x777f0, extract((void(D::*)(GameObject*)){&D::unregisterStateObject}));

    if ((void($PlayLayer::*)(float)){&$PlayLayer::update} != (void(D::*)(float)){&D::update})
        m->registerHook(base+0x77900, extract_virtual(V, (void(D::*)(float)){&D::update}));
    std::cout << "update: " << (void*)extract_virtual(V, (void(D::*)(float)){&D::update}) << std::endl;

    if ((void($PlayLayer::*)()){&$PlayLayer::updateAttempts} != (void(D::*)()){&D::updateAttempts})
        m->registerHook(base+0x7fcd0, extract((void(D::*)()){&D::updateAttempts}));

    if ((void($PlayLayer::*)(float)){&$PlayLayer::updateCamera} != (void(D::*)(float)){&D::updateCamera})
        m->registerHook(base+0x6e2b0, extract((void(D::*)(float)){&D::updateCamera}));

    if ((void($PlayLayer::*)(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)){&$PlayLayer::updateColor} != (void(D::*)(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)){&D::updateColor})
        m->registerHook(base+0x7c7f0, extract_virtual(V, (void(D::*)(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)){&D::updateColor}));
    std::cout << "updateColor: " << (void*)extract_virtual(V, (void(D::*)(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)){&D::updateColor}) << std::endl;

    if ((void($PlayLayer::*)(PlayerObject*, int, bool)){&$PlayLayer::updateDualGround} != (void(D::*)(PlayerObject*, int, bool)){&D::updateDualGround})
        m->registerHook(base+0x7caa0, extract((void(D::*)(PlayerObject*, int, bool)){&D::updateDualGround}));

    if ((void($PlayLayer::*)()){&$PlayLayer::updateEffectPositions} != (void(D::*)()){&D::updateEffectPositions})
        m->registerHook(base+0x7a6d0, extract((void(D::*)()){&D::updateEffectPositions}));

    if ((void($PlayLayer::*)()){&$PlayLayer::updateLevelColors} != (void(D::*)()){&D::updateLevelColors})
        m->registerHook(base+0x6f1e0, extract((void(D::*)()){&D::updateLevelColors}));

    if ((void($PlayLayer::*)()){&$PlayLayer::updateMoveObjectsLastPosition} != (void(D::*)()){&D::updateMoveObjectsLastPosition})
        m->registerHook(base+0x7a720, extract((void(D::*)()){&D::updateMoveObjectsLastPosition}));

    if ((void($PlayLayer::*)()){&$PlayLayer::updateProgressbar} != (void(D::*)()){&D::updateProgressbar})
        m->registerHook(base+0x6ed70, extract((void(D::*)()){&D::updateProgressbar}));

    if ((void($PlayLayer::*)(float)){&$PlayLayer::updateReplay} != (void(D::*)(float)){&D::updateReplay})
        m->registerHook(base+0x78b60, extract((void(D::*)(float)){&D::updateReplay}));

    if ((void($PlayLayer::*)(float, bool)){&$PlayLayer::updateTimeMod} != (void(D::*)(float, bool)){&D::updateTimeMod})
        m->registerHook(base+0x786f0, extract((void(D::*)(float, bool)){&D::updateTimeMod}));

    if ((void($PlayLayer::*)(float, char const*)){&$PlayLayer::updateTweenAction} != (void(D::*)(float, char const*)){&D::updateTweenAction})
        m->registerHook(base+0x7ffb0, extract_virtual(V, (void(D::*)(float, char const*)){&D::updateTweenAction}));
    std::cout << "updateTweenAction: " << (void*)extract_virtual(V, (void(D::*)(float, char const*)){&D::updateTweenAction}) << std::endl;

    if ((void($PlayLayer::*)()){&$PlayLayer::updateVisibility} != (void(D::*)()){&D::updateVisibility})
        m->registerHook(base+0x6fb90, extract((void(D::*)()){&D::updateVisibility}));

    if ((void($PlayLayer::*)()){&$PlayLayer::vfDChk} != (void(D::*)()){&D::vfDChk})
        m->registerHook(base+0x7fcb0, extract((void(D::*)()){&D::vfDChk}));

    if ((void($PlayLayer::*)()){&$PlayLayer::visit} != (void(D::*)()){&D::visit})
        m->registerHook(base+0x75ef0, extract_virtual(V, (void(D::*)()){&D::visit}));
    std::cout << "visit: " << (void*)extract_virtual(V, (void(D::*)()){&D::visit}) << std::endl;

    if ((void($PlayLayer::*)()){&$PlayLayer::visitWithColorFlash} != (void(D::*)()){&D::visitWithColorFlash})
        m->registerHook(base+0x761f0, extract((void(D::*)()){&D::visitWithColorFlash}));

    if ((void($PlayLayer::*)(int, PlayerObject*)){&$PlayLayer::willSwitchToMode} != (void(D::*)(int, PlayerObject*)){&D::willSwitchToMode})
        m->registerHook(base+0x7b9e0, extract((void(D::*)(int, PlayerObject*)){&D::willSwitchToMode}));

    if ((void($PlayLayer::*)(float)){&$PlayLayer::xPosForTime} != (void(D::*)(float)){&D::xPosForTime})
        m->registerHook(base+0x7d140, extract((void(D::*)(float)){&D::xPosForTime}));
}

template<class D, void*** V>
void $PlayLayer<D, V>::addCircle(CCCircleWave* p0) {
    if ((void($PlayLayer::*)(CCCircleWave*)){&$PlayLayer::addCircle} != (void(D::*)(CCCircleWave*)){&D::addCircle})
        return reinterpret_cast<void(*)(decltype(this), CCCircleWave*)>(m->getOriginal(base+0x7e0f0))(this, p0);
    else return PlayLayer::addCircle(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::addObject(GameObject* p0) {
    if ((void($PlayLayer::*)(GameObject*)){&$PlayLayer::addObject} != (void(D::*)(GameObject*)){&D::addObject})
        return reinterpret_cast<void(*)(decltype(this), GameObject*)>(m->getOriginal(base+0x70e50))(this, p0);
    else return PlayLayer::addObject(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::addToGroupOld(GameObject* p0) {
    if ((void($PlayLayer::*)(GameObject*)){&$PlayLayer::addToGroupOld} != (void(D::*)(GameObject*)){&D::addToGroupOld})
        return reinterpret_cast<void(*)(decltype(this), GameObject*)>(m->getOriginal(base+0x77680))(this, p0);
    else return PlayLayer::addToGroupOld(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::addToSpeedObjects(GameObject* p0) {
    if ((void($PlayLayer::*)(GameObject*)){&$PlayLayer::addToSpeedObjects} != (void(D::*)(GameObject*)){&D::addToSpeedObjects})
        return reinterpret_cast<void(*)(decltype(this), GameObject*)>(m->getOriginal(base+0x7cfc0))(this, p0);
    else return PlayLayer::addToSpeedObjects(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::animateInDualGround(GameObject* p0, float p1, bool p2) {
    if ((void($PlayLayer::*)(GameObject*, float, bool)){&$PlayLayer::animateInDualGround} != (void(D::*)(GameObject*, float, bool)){&D::animateInDualGround})
        return reinterpret_cast<void(*)(decltype(this), GameObject*, float, bool)>(m->getOriginal(base+0x7d710))(this, p0, p1, p2);
    else return PlayLayer::animateInDualGround(p0, p1, p2);
}

template<class D, void*** V>
void $PlayLayer<D, V>::animateInGround(bool p0) {
    if ((void($PlayLayer::*)(bool)){&$PlayLayer::animateInGround} != (void(D::*)(bool)){&D::animateInGround})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x7d9d0))(this, p0);
    else return PlayLayer::animateInGround(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::animateOutGround(bool p0) {
    if ((void($PlayLayer::*)(bool)){&$PlayLayer::animateOutGround} != (void(D::*)(bool)){&D::animateOutGround})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x6f350))(this, p0);
    else return PlayLayer::animateOutGround(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::animateOutGroundFinished() {
    if ((void($PlayLayer::*)()){&$PlayLayer::animateOutGroundFinished} != (void(D::*)()){&D::animateOutGroundFinished})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x7de80))(this);
    else return PlayLayer::animateOutGroundFinished();
}

template<class D, void*** V>
void $PlayLayer<D, V>::applyEnterEffect(GameObject* p0) {
    if ((void($PlayLayer::*)(GameObject*)){&$PlayLayer::applyEnterEffect} != (void(D::*)(GameObject*)){&D::applyEnterEffect})
        return reinterpret_cast<void(*)(decltype(this), GameObject*)>(m->getOriginal(base+0x7c310))(this, p0);
    else return PlayLayer::applyEnterEffect(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::calculateColorValues(EffectGameObject* p0, EffectGameObject* p1, int p2, float p3, ColorActionSprite* p4, GJEffectManager* p5) {
    if ((void($PlayLayer::*)(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)){&$PlayLayer::calculateColorValues} != (void(D::*)(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)){&D::calculateColorValues})
        return reinterpret_cast<void(*)(decltype(this), EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)>(m->getOriginal(base+0x7aa10))(this, p0, p1, p2, p3, p4, p5);
    else return PlayLayer::calculateColorValues(p0, p1, p2, p3, p4, p5);
}

template<class D, void*** V>
void $PlayLayer<D, V>::cameraMoveX(float p0, float p1, float p2) {
    if ((void($PlayLayer::*)(float, float, float)){&$PlayLayer::cameraMoveX} != (void(D::*)(float, float, float)){&D::cameraMoveX})
        return reinterpret_cast<void(*)(decltype(this), float, float, float)>(m->getOriginal(base+0x7cbe0))(this, p0, p1, p2);
    else return PlayLayer::cameraMoveX(p0, p1, p2);
}

template<class D, void*** V>
void $PlayLayer<D, V>::cameraMoveY(float p0, float p1, float p2) {
    if ((void($PlayLayer::*)(float, float, float)){&$PlayLayer::cameraMoveY} != (void(D::*)(float, float, float)){&D::cameraMoveY})
        return reinterpret_cast<void(*)(decltype(this), float, float, float)>(m->getOriginal(base+0x7cc60))(this, p0, p1, p2);
    else return PlayLayer::cameraMoveY(p0, p1, p2);
}

template<class D, void*** V>
void $PlayLayer<D, V>::checkCollisions(PlayerObject* p0, float p1) {
    if ((void($PlayLayer::*)(PlayerObject*, float)){&$PlayLayer::checkCollisions} != (void(D::*)(PlayerObject*, float)){&D::checkCollisions})
        return reinterpret_cast<void(*)(decltype(this), PlayerObject*, float)>(m->getOriginal(base+0x78c90))(this, p0, p1);
    else return PlayLayer::checkCollisions(p0, p1);
}

template<class D, void*** V>
void $PlayLayer<D, V>::circleWaveWillBeRemoved(CCCircleWave* p0) {
    if ((void($PlayLayer::*)(CCCircleWave*)){&$PlayLayer::circleWaveWillBeRemoved} != (void(D::*)(CCCircleWave*)){&D::circleWaveWillBeRemoved})
        return reinterpret_cast<void(*)(decltype(this), CCCircleWave*)>(m->getOriginal(base+0x7e110))(this, p0);
    else return PlayLayer::circleWaveWillBeRemoved(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::claimParticle(std::string p0) {
    if ((void($PlayLayer::*)(std::string)){&$PlayLayer::claimParticle} != (void(D::*)(std::string)){&D::claimParticle})
        return reinterpret_cast<void(*)(decltype(this), std::string)>(m->getOriginal(base+0x76ba0))(this, p0);
    else return PlayLayer::claimParticle(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::clearPickedUpItems() {
    if ((void($PlayLayer::*)()){&$PlayLayer::clearPickedUpItems} != (void(D::*)()){&D::clearPickedUpItems})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x7cfa0))(this);
    else return PlayLayer::clearPickedUpItems();
}

template<class D, void*** V>
void $PlayLayer<D, V>::colorObject(int p0, cocos2d::_ccColor3B p1) {
    if ((void($PlayLayer::*)(int, cocos2d::_ccColor3B)){&$PlayLayer::colorObject} != (void(D::*)(int, cocos2d::_ccColor3B)){&D::colorObject})
        return reinterpret_cast<void(*)(decltype(this), int, cocos2d::_ccColor3B)>(m->getOriginal(base+0x77810))(this, p0, p1);
    else return PlayLayer::colorObject(p0, p1);
}

template<class D, void*** V>
void $PlayLayer<D, V>::commitJumps() {
    if ((void($PlayLayer::*)()){&$PlayLayer::commitJumps} != (void(D::*)()){&D::commitJumps})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x737e0))(this);
    else return PlayLayer::commitJumps();
}

template<class D, void*** V>
PlayLayer* $PlayLayer<D, V>::create(GJGameLevel* p0) {
    if ((PlayLayer*(*)(GJGameLevel*)){&$PlayLayer::create} != (PlayLayer*(*)(GJGameLevel*)){&D::create})
        return reinterpret_cast<PlayLayer*(*)(GJGameLevel*)>(m->getOriginal(base+0x6b590))(p0);
    else return PlayLayer::create(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::createCheckpoint() {
    if ((void($PlayLayer::*)()){&$PlayLayer::createCheckpoint} != (void(D::*)()){&D::createCheckpoint})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x7e470))(this);
    else return PlayLayer::createCheckpoint();
}

template<class D, void*** V>
void $PlayLayer<D, V>::createObjectsFromSetup(std::string p0) {
    if ((void($PlayLayer::*)(std::string)){&$PlayLayer::createObjectsFromSetup} != (void(D::*)(std::string)){&D::createObjectsFromSetup})
        return reinterpret_cast<void(*)(decltype(this), std::string)>(m->getOriginal(base+0x6d130))(this, p0);
    else return PlayLayer::createObjectsFromSetup(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::createParticle(int p0, char const* p1, int p2, cocos2d::tCCPositionType p3) {
    if ((void($PlayLayer::*)(int, char const*, int, cocos2d::tCCPositionType)){&$PlayLayer::createParticle} != (void(D::*)(int, char const*, int, cocos2d::tCCPositionType)){&D::createParticle})
        return reinterpret_cast<void(*)(decltype(this), int, char const*, int, cocos2d::tCCPositionType)>(m->getOriginal(base+0x76800))(this, p0, p1, p2, p3);
    else return PlayLayer::createParticle(p0, p1, p2, p3);
}

template<class D, void*** V>
void $PlayLayer<D, V>::currencyWillExit(CurrencyRewardLayer* p0) {
    if ((void($PlayLayer::*)(CurrencyRewardLayer*)){&$PlayLayer::currencyWillExit} != (void(D::*)(CurrencyRewardLayer*)){&D::currencyWillExit})
        return reinterpret_cast<void(*)(decltype(this), CurrencyRewardLayer*)>(m->getOriginal(base+0x7e070))(this, p0);
    else return PlayLayer::currencyWillExit(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::delayedResetLevel() {
    if ((void($PlayLayer::*)()){&$PlayLayer::delayedResetLevel} != (void(D::*)()){&D::delayedResetLevel})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x7e050))(this);
    else return PlayLayer::delayedResetLevel();
}

template<class D, void*** V>
void $PlayLayer<D, V>::destroyPlayer(PlayerObject* p0, GameObject* p1) {
    if ((void($PlayLayer::*)(PlayerObject*, GameObject*)){&$PlayLayer::destroyPlayer} != (void(D::*)(PlayerObject*, GameObject*)){&D::destroyPlayer})
        return reinterpret_cast<void(*)(decltype(this), PlayerObject*, GameObject*)>(m->getOriginal(base+0x7ab80))(this, p0, p1);
    else return PlayLayer::destroyPlayer(p0, p1);
}

template<class D, void*** V>
void $PlayLayer<D, V>::dialogClosed(DialogLayer* p0) {
    if ((void($PlayLayer::*)(DialogLayer*)){&$PlayLayer::dialogClosed} != (void(D::*)(DialogLayer*)){&D::dialogClosed})
        return reinterpret_cast<void(*)(decltype(this), DialogLayer*)>(m->getOriginal(base+0x7e0b0))(this, p0);
    else return PlayLayer::dialogClosed(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::draw() {
    if ((void($PlayLayer::*)()){&$PlayLayer::draw} != (void(D::*)()){&D::draw})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x7d160))(this);
    else return PlayLayer::draw();
}

template<class D, void*** V>
void $PlayLayer<D, V>::enterDualMode(GameObject* p0, bool p1) {
    if ((void($PlayLayer::*)(GameObject*, bool)){&$PlayLayer::enterDualMode} != (void(D::*)(GameObject*, bool)){&D::enterDualMode})
        return reinterpret_cast<void(*)(decltype(this), GameObject*, bool)>(m->getOriginal(base+0x7d6a0))(this, p0, p1);
    else return PlayLayer::enterDualMode(p0, p1);
}

template<class D, void*** V>
void $PlayLayer<D, V>::exitAirMode() {
    if ((void($PlayLayer::*)()){&$PlayLayer::exitAirMode} != (void(D::*)()){&D::exitAirMode})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x7dd40))(this);
    else return PlayLayer::exitAirMode();
}

template<class D, void*** V>
void $PlayLayer<D, V>::exitBirdMode(PlayerObject* p0) {
    if ((void($PlayLayer::*)(PlayerObject*)){&$PlayLayer::exitBirdMode} != (void(D::*)(PlayerObject*)){&D::exitBirdMode})
        return reinterpret_cast<void(*)(decltype(this), PlayerObject*)>(m->getOriginal(base+0x7dd80))(this, p0);
    else return PlayLayer::exitBirdMode(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::exitDartMode(PlayerObject* p0) {
    if ((void($PlayLayer::*)(PlayerObject*)){&$PlayLayer::exitDartMode} != (void(D::*)(PlayerObject*)){&D::exitDartMode})
        return reinterpret_cast<void(*)(decltype(this), PlayerObject*)>(m->getOriginal(base+0x7ddd0))(this, p0);
    else return PlayLayer::exitDartMode(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::exitFlyMode(PlayerObject* p0) {
    if ((void($PlayLayer::*)(PlayerObject*)){&$PlayLayer::exitFlyMode} != (void(D::*)(PlayerObject*)){&D::exitFlyMode})
        return reinterpret_cast<void(*)(decltype(this), PlayerObject*)>(m->getOriginal(base+0x7dcf0))(this, p0);
    else return PlayLayer::exitFlyMode(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::exitRobotMode(PlayerObject* p0) {
    if ((void($PlayLayer::*)(PlayerObject*)){&$PlayLayer::exitRobotMode} != (void(D::*)(PlayerObject*)){&D::exitRobotMode})
        return reinterpret_cast<void(*)(decltype(this), PlayerObject*)>(m->getOriginal(base+0x7de20))(this, p0);
    else return PlayLayer::exitRobotMode(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::exitRollMode(PlayerObject* p0) {
    if ((void($PlayLayer::*)(PlayerObject*)){&$PlayLayer::exitRollMode} != (void(D::*)(PlayerObject*)){&D::exitRollMode})
        return reinterpret_cast<void(*)(decltype(this), PlayerObject*)>(m->getOriginal(base+0x7de60))(this, p0);
    else return PlayLayer::exitRollMode(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::exitSpiderMode(PlayerObject* p0) {
    if ((void($PlayLayer::*)(PlayerObject*)){&$PlayLayer::exitSpiderMode} != (void(D::*)(PlayerObject*)){&D::exitSpiderMode})
        return reinterpret_cast<void(*)(decltype(this), PlayerObject*)>(m->getOriginal(base+0x7de40))(this, p0);
    else return PlayLayer::exitSpiderMode(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::flipFinished() {
    if ((void($PlayLayer::*)()){&$PlayLayer::flipFinished} != (void(D::*)()){&D::flipFinished})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x7e150))(this);
    else return PlayLayer::flipFinished();
}

template<class D, void*** V>
void $PlayLayer<D, V>::flipGravity(PlayerObject* p0, bool p1, bool p2) {
    if ((void($PlayLayer::*)(PlayerObject*, bool, bool)){&$PlayLayer::flipGravity} != (void(D::*)(PlayerObject*, bool, bool)){&D::flipGravity})
        return reinterpret_cast<void(*)(decltype(this), PlayerObject*, bool, bool)>(m->getOriginal(base+0x7cd10))(this, p0, p1, p2);
    else return PlayLayer::flipGravity(p0, p1, p2);
}

template<class D, void*** V>
void $PlayLayer<D, V>::flipObjects() {
    if ((void($PlayLayer::*)()){&$PlayLayer::flipObjects} != (void(D::*)()){&D::flipObjects})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x76130))(this);
    else return PlayLayer::flipObjects();
}

template<class D, void*** V>
void $PlayLayer<D, V>::fullReset() {
    if ((void($PlayLayer::*)()){&$PlayLayer::fullReset} != (void(D::*)()){&D::fullReset})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x7f8e0))(this);
    else return PlayLayer::fullReset();
}

template<class D, void*** V>
void $PlayLayer<D, V>::getLastCheckpoint() {
    if ((void($PlayLayer::*)()){&$PlayLayer::getLastCheckpoint} != (void(D::*)()){&D::getLastCheckpoint})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x7f840))(this);
    else return PlayLayer::getLastCheckpoint();
}

template<class D, void*** V>
void $PlayLayer<D, V>::getMaxPortalY() {
    if ((void($PlayLayer::*)()){&$PlayLayer::getMaxPortalY} != (void(D::*)()){&D::getMaxPortalY})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x7b4e0))(this);
    else return PlayLayer::getMaxPortalY();
}

template<class D, void*** V>
void $PlayLayer<D, V>::getMinPortalY() {
    if ((void($PlayLayer::*)()){&$PlayLayer::getMinPortalY} != (void(D::*)()){&D::getMinPortalY})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x7b550))(this);
    else return PlayLayer::getMinPortalY();
}

template<class D, void*** V>
void $PlayLayer<D, V>::getObjectsState() {
    if ((void($PlayLayer::*)()){&$PlayLayer::getObjectsState} != (void(D::*)()){&D::getObjectsState})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x7e9d0))(this);
    else return PlayLayer::getObjectsState();
}

template<class D, void*** V>
void $PlayLayer<D, V>::getOtherPlayer(PlayerObject* p0) {
    if ((void($PlayLayer::*)(PlayerObject*)){&$PlayLayer::getOtherPlayer} != (void(D::*)(PlayerObject*)){&D::getOtherPlayer})
        return reinterpret_cast<void(*)(decltype(this), PlayerObject*)>(m->getOriginal(base+0x7dcc0))(this, p0);
    else return PlayLayer::getOtherPlayer(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::getParticleKey(int p0, char const* p1, int p2, cocos2d::tCCPositionType p3) {
    if ((void($PlayLayer::*)(int, char const*, int, cocos2d::tCCPositionType)){&$PlayLayer::getParticleKey} != (void(D::*)(int, char const*, int, cocos2d::tCCPositionType)){&D::getParticleKey})
        return reinterpret_cast<void(*)(decltype(this), int, char const*, int, cocos2d::tCCPositionType)>(m->getOriginal(base+0x764d0))(this, p0, p1, p2, p3);
    else return PlayLayer::getParticleKey(p0, p1, p2, p3);
}

template<class D, void*** V>
void $PlayLayer<D, V>::getParticleKey2(std::string p0) {
    if ((void($PlayLayer::*)(std::string)){&$PlayLayer::getParticleKey2} != (void(D::*)(std::string)){&D::getParticleKey2})
        return reinterpret_cast<void(*)(decltype(this), std::string)>(m->getOriginal(base+0x767b0))(this, p0);
    else return PlayLayer::getParticleKey2(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::getRelativeMod(cocos2d::CCPoint p0, float p1, float p2, float p3) {
    if ((void($PlayLayer::*)(cocos2d::CCPoint, float, float, float)){&$PlayLayer::getRelativeMod} != (void(D::*)(cocos2d::CCPoint, float, float, float)){&D::getRelativeMod})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCPoint, float, float, float)>(m->getOriginal(base+0x7c2a0))(this, p0, p1, p2, p3);
    else return PlayLayer::getRelativeMod(p0, p1, p2, p3);
}

template<class D, void*** V>
void $PlayLayer<D, V>::getTempMilliTime() {
    if ((void($PlayLayer::*)()){&$PlayLayer::getTempMilliTime} != (void(D::*)()){&D::getTempMilliTime})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x778e0))(this);
    else return PlayLayer::getTempMilliTime();
}

template<class D, void*** V>
void $PlayLayer<D, V>::gravityEffectFinished() {
    if ((void($PlayLayer::*)()){&$PlayLayer::gravityEffectFinished} != (void(D::*)()){&D::gravityEffectFinished})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x7cec0))(this);
    else return PlayLayer::gravityEffectFinished();
}

template<class D, void*** V>
void $PlayLayer<D, V>::hasItem(int p0) {
    if ((void($PlayLayer::*)(int)){&$PlayLayer::hasItem} != (void(D::*)(int)){&D::hasItem})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x7cee0))(this, p0);
    else return PlayLayer::hasItem(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::hasUniqueCoin(GameObject* p0) {
    if ((void($PlayLayer::*)(GameObject*)){&$PlayLayer::hasUniqueCoin} != (void(D::*)(GameObject*)){&D::hasUniqueCoin})
        return reinterpret_cast<void(*)(decltype(this), GameObject*)>(m->getOriginal(base+0x77510))(this, p0);
    else return PlayLayer::hasUniqueCoin(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::incrementJumps() {
    if ((void($PlayLayer::*)()){&$PlayLayer::incrementJumps} != (void(D::*)()){&D::incrementJumps})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x7ff40))(this);
    else return PlayLayer::incrementJumps();
}

template<class D, void*** V>
bool $PlayLayer<D, V>::init(GJGameLevel* p0) {
    if ((bool($PlayLayer::*)(GJGameLevel*)){&$PlayLayer::init} != (bool(D::*)(GJGameLevel*)){&D::init})
        return reinterpret_cast<bool(*)(decltype(this), GJGameLevel*)>(m->getOriginal(base+0x6b5f0))(this, p0);
    else return PlayLayer::init(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::isFlipping() {
    if ((void($PlayLayer::*)()){&$PlayLayer::isFlipping} != (void(D::*)()){&D::isFlipping})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x76100))(this);
    else return PlayLayer::isFlipping();
}

template<class D, void*** V>
void $PlayLayer<D, V>::levelComplete() {
    if ((void($PlayLayer::*)()){&$PlayLayer::levelComplete} != (void(D::*)()){&D::levelComplete})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x72b80))(this);
    else return PlayLayer::levelComplete();
}

template<class D, void*** V>
void $PlayLayer<D, V>::lightningFlash(cocos2d::CCPoint p0, cocos2d::CCPoint p1, cocos2d::_ccColor3B p2, float p3, float p4, int p5, bool p6, float p7) {
    if ((void($PlayLayer::*)(cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, int, bool, float)){&$PlayLayer::lightningFlash} != (void(D::*)(cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, int, bool, float)){&D::lightningFlash})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, int, bool, float)>(m->getOriginal(base+0x75cc0))(this, p0, p1, p2, p3, p4, p5, p6, p7);
    else return PlayLayer::lightningFlash(p0, p1, p2, p3, p4, p5, p6, p7);
}

template<class D, void*** V>
void $PlayLayer<D, V>::lightningFlash(cocos2d::CCPoint p0, cocos2d::_ccColor3B p1) {
    if ((void($PlayLayer::*)(cocos2d::CCPoint, cocos2d::_ccColor3B)){&$PlayLayer::lightningFlash} != (void(D::*)(cocos2d::CCPoint, cocos2d::_ccColor3B)){&D::lightningFlash})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCPoint, cocos2d::_ccColor3B)>(m->getOriginal(base+0x75bf0))(this, p0, p1);
    else return PlayLayer::lightningFlash(p0, p1);
}

template<class D, void*** V>
void $PlayLayer<D, V>::loadDefaultColors() {
    if ((void($PlayLayer::*)()){&$PlayLayer::loadDefaultColors} != (void(D::*)()){&D::loadDefaultColors})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x6ef30))(this);
    else return PlayLayer::loadDefaultColors();
}

template<class D, void*** V>
void $PlayLayer<D, V>::loadFromCheckpoint(CheckpointObject* p0) {
    if ((void($PlayLayer::*)(CheckpointObject*)){&$PlayLayer::loadFromCheckpoint} != (void(D::*)(CheckpointObject*)){&D::loadFromCheckpoint})
        return reinterpret_cast<void(*)(decltype(this), CheckpointObject*)>(m->getOriginal(base+0x7f000))(this, p0);
    else return PlayLayer::loadFromCheckpoint(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::loadLastCheckpoint() {
    if ((void($PlayLayer::*)()){&$PlayLayer::loadLastCheckpoint} != (void(D::*)()){&D::loadLastCheckpoint})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x7efc0))(this);
    else return PlayLayer::loadLastCheckpoint();
}

template<class D, void*** V>
void $PlayLayer<D, V>::loadSavedObjectsState(std::string p0) {
    if ((void($PlayLayer::*)(std::string)){&$PlayLayer::loadSavedObjectsState} != (void(D::*)(std::string)){&D::loadSavedObjectsState})
        return reinterpret_cast<void(*)(decltype(this), std::string)>(m->getOriginal(base+0x7f3d0))(this, p0);
    else return PlayLayer::loadSavedObjectsState(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::markCheckpoint() {
    if ((void($PlayLayer::*)()){&$PlayLayer::markCheckpoint} != (void(D::*)()){&D::markCheckpoint})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x7ef60))(this);
    else return PlayLayer::markCheckpoint();
}

template<class D, void*** V>
void $PlayLayer<D, V>::moveCameraToPos(cocos2d::CCPoint p0) {
    if ((void($PlayLayer::*)(cocos2d::CCPoint)){&$PlayLayer::moveCameraToPos} != (void(D::*)(cocos2d::CCPoint)){&D::moveCameraToPos})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCPoint)>(m->getOriginal(base+0x7c980))(this, p0);
    else return PlayLayer::moveCameraToPos(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::onEnterTransitionDidFinish() {
    if ((void($PlayLayer::*)()){&$PlayLayer::onEnterTransitionDidFinish} != (void(D::*)()){&D::onEnterTransitionDidFinish})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x806e0))(this);
    else return PlayLayer::onEnterTransitionDidFinish();
}

template<class D, void*** V>
void $PlayLayer<D, V>::onExit() {
    if ((void($PlayLayer::*)()){&$PlayLayer::onExit} != (void(D::*)()){&D::onExit})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x80710))(this);
    else return PlayLayer::onExit();
}

template<class D, void*** V>
void $PlayLayer<D, V>::onQuit() {
    if ((void($PlayLayer::*)()){&$PlayLayer::onQuit} != (void(D::*)()){&D::onQuit})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x72710))(this);
    else return PlayLayer::onQuit();
}

template<class D, void*** V>
void $PlayLayer<D, V>::optimizeColorGroups() {
    if ((void($PlayLayer::*)()){&$PlayLayer::optimizeColorGroups} != (void(D::*)()){&D::optimizeColorGroups})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x6dad0))(this);
    else return PlayLayer::optimizeColorGroups();
}

template<class D, void*** V>
void $PlayLayer<D, V>::optimizeOpacityGroups() {
    if ((void($PlayLayer::*)()){&$PlayLayer::optimizeOpacityGroups} != (void(D::*)()){&D::optimizeOpacityGroups})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x6dc20))(this);
    else return PlayLayer::optimizeOpacityGroups();
}

template<class D, void*** V>
void $PlayLayer<D, V>::optimizeSaveRequiredGroups() {
    if ((void($PlayLayer::*)()){&$PlayLayer::optimizeSaveRequiredGroups} != (void(D::*)()){&D::optimizeSaveRequiredGroups})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x6dd70))(this);
    else return PlayLayer::optimizeSaveRequiredGroups();
}

template<class D, void*** V>
void $PlayLayer<D, V>::pauseGame(bool p0) {
    if ((void($PlayLayer::*)(bool)){&$PlayLayer::pauseGame} != (void(D::*)(bool)){&D::pauseGame})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x802d0))(this, p0);
    else return PlayLayer::pauseGame(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::pickupItem(GameObject* p0) {
    if ((void($PlayLayer::*)(GameObject*)){&$PlayLayer::pickupItem} != (void(D::*)(GameObject*)){&D::pickupItem})
        return reinterpret_cast<void(*)(decltype(this), GameObject*)>(m->getOriginal(base+0x7c1d0))(this, p0);
    else return PlayLayer::pickupItem(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::playAnimationCommand(int p0, int p1) {
    if ((void($PlayLayer::*)(int, int)){&$PlayLayer::playAnimationCommand} != (void(D::*)(int, int)){&D::playAnimationCommand})
        return reinterpret_cast<void(*)(decltype(this), int, int)>(m->getOriginal(base+0x75930))(this, p0, p1);
    else return PlayLayer::playAnimationCommand(p0, p1);
}

template<class D, void*** V>
void $PlayLayer<D, V>::playEndAnimationToPos(cocos2d::CCPoint p0) {
    if ((void($PlayLayer::*)(cocos2d::CCPoint)){&$PlayLayer::playEndAnimationToPos} != (void(D::*)(cocos2d::CCPoint)){&D::playEndAnimationToPos})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCPoint)>(m->getOriginal(base+0x759a0))(this, p0);
    else return PlayLayer::playEndAnimationToPos(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::playExitDualEffect(PlayerObject* p0) {
    if ((void($PlayLayer::*)(PlayerObject*)){&$PlayLayer::playExitDualEffect} != (void(D::*)(PlayerObject*)){&D::playExitDualEffect})
        return reinterpret_cast<void(*)(decltype(this), PlayerObject*)>(m->getOriginal(base+0x7d1d0))(this, p0);
    else return PlayLayer::playExitDualEffect(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::playFlashEffect(float p0, int p1, float p2) {
    if ((void($PlayLayer::*)(float, int, float)){&$PlayLayer::playFlashEffect} != (void(D::*)(float, int, float)){&D::playFlashEffect})
        return reinterpret_cast<void(*)(decltype(this), float, int, float)>(m->getOriginal(base+0x75e50))(this, p0, p1, p2);
    else return PlayLayer::playFlashEffect(p0, p1, p2);
}

template<class D, void*** V>
void $PlayLayer<D, V>::playGravityEffect(bool p0) {
    if ((void($PlayLayer::*)(bool)){&$PlayLayer::playGravityEffect} != (void(D::*)(bool)){&D::playGravityEffect})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x7b5a0))(this, p0);
    else return PlayLayer::playGravityEffect(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::playSpeedParticle(float p0) {
    if ((void($PlayLayer::*)(float)){&$PlayLayer::playSpeedParticle} != (void(D::*)(float)){&D::playSpeedParticle})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x77030))(this, p0);
    else return PlayLayer::playSpeedParticle(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::playerWillSwitchMode(PlayerObject* p0, GameObject* p1) {
    if ((void($PlayLayer::*)(PlayerObject*, GameObject*)){&$PlayLayer::playerWillSwitchMode} != (void(D::*)(PlayerObject*, GameObject*)){&D::playerWillSwitchMode})
        return reinterpret_cast<void(*)(decltype(this), PlayerObject*, GameObject*)>(m->getOriginal(base+0x7b820))(this, p0, p1);
    else return PlayLayer::playerWillSwitchMode(p0, p1);
}

template<class D, void*** V>
void $PlayLayer<D, V>::prepareSpawnObjects() {
    if ((void($PlayLayer::*)()){&$PlayLayer::prepareSpawnObjects} != (void(D::*)()){&D::prepareSpawnObjects})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x7fc00))(this);
    else return PlayLayer::prepareSpawnObjects();
}

template<class D, void*** V>
void $PlayLayer<D, V>::processItems() {
    if ((void($PlayLayer::*)()){&$PlayLayer::processItems} != (void(D::*)()){&D::processItems})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x735c0))(this);
    else return PlayLayer::processItems();
}

template<class D, void*** V>
void $PlayLayer<D, V>::processLoadedMoveActions() {
    if ((void($PlayLayer::*)()){&$PlayLayer::processLoadedMoveActions} != (void(D::*)()){&D::processLoadedMoveActions})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x7a7c0))(this);
    else return PlayLayer::processLoadedMoveActions();
}

template<class D, void*** V>
void $PlayLayer<D, V>::recordAction(bool p0, PlayerObject* p1) {
    if ((void($PlayLayer::*)(bool, PlayerObject*)){&$PlayLayer::recordAction} != (void(D::*)(bool, PlayerObject*)){&D::recordAction})
        return reinterpret_cast<void(*)(decltype(this), bool, PlayerObject*)>(m->getOriginal(base+0x7e190))(this, p0, p1);
    else return PlayLayer::recordAction(p0, p1);
}

template<class D, void*** V>
void $PlayLayer<D, V>::registerActiveObject(GameObject* p0) {
    if ((void($PlayLayer::*)(GameObject*)){&$PlayLayer::registerActiveObject} != (void(D::*)(GameObject*)){&D::registerActiveObject})
        return reinterpret_cast<void(*)(decltype(this), GameObject*)>(m->getOriginal(base+0x77620))(this, p0);
    else return PlayLayer::registerActiveObject(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::registerStateObject(GameObject* p0) {
    if ((void($PlayLayer::*)(GameObject*)){&$PlayLayer::registerStateObject} != (void(D::*)(GameObject*)){&D::registerStateObject})
        return reinterpret_cast<void(*)(decltype(this), GameObject*)>(m->getOriginal(base+0x777b0))(this, p0);
    else return PlayLayer::registerStateObject(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::removeAllObjects() {
    if ((void($PlayLayer::*)()){&$PlayLayer::removeAllObjects} != (void(D::*)()){&D::removeAllObjects})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x727b0))(this);
    else return PlayLayer::removeAllObjects();
}

template<class D, void*** V>
void $PlayLayer<D, V>::removeFromGroupOld(GameObject* p0) {
    if ((void($PlayLayer::*)(GameObject*)){&$PlayLayer::removeFromGroupOld} != (void(D::*)(GameObject*)){&D::removeFromGroupOld})
        return reinterpret_cast<void(*)(decltype(this), GameObject*)>(m->getOriginal(base+0x77750))(this, p0);
    else return PlayLayer::removeFromGroupOld(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::removeLastCheckpoint() {
    if ((void($PlayLayer::*)()){&$PlayLayer::removeLastCheckpoint} != (void(D::*)()){&D::removeLastCheckpoint})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x7f870))(this);
    else return PlayLayer::removeLastCheckpoint();
}

template<class D, void*** V>
void $PlayLayer<D, V>::removePlayer2() {
    if ((void($PlayLayer::*)()){&$PlayLayer::removePlayer2} != (void(D::*)()){&D::removePlayer2})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x7d630))(this);
    else return PlayLayer::removePlayer2();
}

template<class D, void*** V>
void $PlayLayer<D, V>::resetLevel() {
    if ((void($PlayLayer::*)()){&$PlayLayer::resetLevel} != (void(D::*)()){&D::resetLevel})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x71c50))(this);
    else return PlayLayer::resetLevel();
}

template<class D, void*** V>
void $PlayLayer<D, V>::resume() {
    if ((void($PlayLayer::*)()){&$PlayLayer::resume} != (void(D::*)()){&D::resume})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x80480))(this);
    else return PlayLayer::resume();
}

template<class D, void*** V>
void $PlayLayer<D, V>::resumeAndRestart() {
    if ((void($PlayLayer::*)()){&$PlayLayer::resumeAndRestart} != (void(D::*)()){&D::resumeAndRestart})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x80400))(this);
    else return PlayLayer::resumeAndRestart();
}

template<class D, void*** V>
void $PlayLayer<D, V>::saveRecordAction(bool p0, PlayerObject* p1) {
    if ((void($PlayLayer::*)(bool, PlayerObject*)){&$PlayLayer::saveRecordAction} != (void(D::*)(bool, PlayerObject*)){&D::saveRecordAction})
        return reinterpret_cast<void(*)(decltype(this), bool, PlayerObject*)>(m->getOriginal(base+0x78750))(this, p0, p1);
    else return PlayLayer::saveRecordAction(p0, p1);
}

template<class D, void*** V>
void $PlayLayer<D, V>::scene(GJGameLevel* p0) {
    if ((void($PlayLayer::*)(GJGameLevel*)){&$PlayLayer::scene} != (void(D::*)(GJGameLevel*)){&D::scene})
        return reinterpret_cast<void(*)(decltype(this), GJGameLevel*)>(m->getOriginal(base+0x6b500))(this, p0);
    else return PlayLayer::scene(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::setupLevelStart(LevelSettingsObject* p0) {
    if ((void($PlayLayer::*)(LevelSettingsObject*)){&$PlayLayer::setupLevelStart} != (void(D::*)(LevelSettingsObject*)){&D::setupLevelStart})
        return reinterpret_cast<void(*)(decltype(this), LevelSettingsObject*)>(m->getOriginal(base+0x6f560))(this, p0);
    else return PlayLayer::setupLevelStart(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::setupReplay(std::string p0) {
    if ((void($PlayLayer::*)(std::string)){&$PlayLayer::setupReplay} != (void(D::*)(std::string)){&D::setupReplay})
        return reinterpret_cast<void(*)(decltype(this), std::string)>(m->getOriginal(base+0x7e1e0))(this, p0);
    else return PlayLayer::setupReplay(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::shakeCamera(float p0, float p1, float p2) {
    if ((void($PlayLayer::*)(float, float, float)){&$PlayLayer::shakeCamera} != (void(D::*)(float, float, float)){&D::shakeCamera})
        return reinterpret_cast<void(*)(decltype(this), float, float, float)>(m->getOriginal(base+0x744a0))(this, p0, p1, p2);
    else return PlayLayer::shakeCamera(p0, p1, p2);
}

template<class D, void*** V>
void $PlayLayer<D, V>::shouldBlend(int p0) {
    if ((void($PlayLayer::*)(int)){&$PlayLayer::shouldBlend} != (void(D::*)(int)){&D::shouldBlend})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x771b0))(this, p0);
    else return PlayLayer::shouldBlend(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::showCompleteEffect() {
    if ((void($PlayLayer::*)()){&$PlayLayer::showCompleteEffect} != (void(D::*)()){&D::showCompleteEffect})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x738e0))(this);
    else return PlayLayer::showCompleteEffect();
}

template<class D, void*** V>
void $PlayLayer<D, V>::showCompleteText() {
    if ((void($PlayLayer::*)()){&$PlayLayer::showCompleteText} != (void(D::*)()){&D::showCompleteText})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x73be0))(this);
    else return PlayLayer::showCompleteText();
}

template<class D, void*** V>
void $PlayLayer<D, V>::showEndLayer() {
    if ((void($PlayLayer::*)()){&$PlayLayer::showEndLayer} != (void(D::*)()){&D::showEndLayer})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x74450))(this);
    else return PlayLayer::showEndLayer();
}

template<class D, void*** V>
void $PlayLayer<D, V>::showHint() {
    if ((void($PlayLayer::*)()){&$PlayLayer::showHint} != (void(D::*)()){&D::showHint})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x7deb0))(this);
    else return PlayLayer::showHint();
}

template<class D, void*** V>
void $PlayLayer<D, V>::showNewBest(bool p0, int p1, int p2, bool p3, bool p4, bool p5) {
    if ((void($PlayLayer::*)(bool, int, int, bool, bool, bool)){&$PlayLayer::showNewBest} != (void(D::*)(bool, int, int, bool, bool, bool)){&D::showNewBest})
        return reinterpret_cast<void(*)(decltype(this), bool, int, int, bool, bool, bool)>(m->getOriginal(base+0x74580))(this, p0, p1, p2, p3, p4, p5);
    else return PlayLayer::showNewBest(p0, p1, p2, p3, p4, p5);
}

template<class D, void*** V>
void $PlayLayer<D, V>::showRetryLayer() {
    if ((void($PlayLayer::*)()){&$PlayLayer::showRetryLayer} != (void(D::*)()){&D::showRetryLayer})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x75ba0))(this);
    else return PlayLayer::showRetryLayer();
}

template<class D, void*** V>
void $PlayLayer<D, V>::showTwoPlayerGuide() {
    if ((void($PlayLayer::*)()){&$PlayLayer::showTwoPlayerGuide} != (void(D::*)()){&D::showTwoPlayerGuide})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x6df00))(this);
    else return PlayLayer::showTwoPlayerGuide();
}

template<class D, void*** V>
void $PlayLayer<D, V>::sortGroups() {
    if ((void($PlayLayer::*)()){&$PlayLayer::sortGroups} != (void(D::*)()){&D::sortGroups})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x6d9e0))(this);
    else return PlayLayer::sortGroups();
}

template<class D, void*** V>
void $PlayLayer<D, V>::spawnCircle() {
    if ((void($PlayLayer::*)()){&$PlayLayer::spawnCircle} != (void(D::*)()){&D::spawnCircle})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x73820))(this);
    else return PlayLayer::spawnCircle();
}

template<class D, void*** V>
void $PlayLayer<D, V>::spawnFirework() {
    if ((void($PlayLayer::*)()){&$PlayLayer::spawnFirework} != (void(D::*)()){&D::spawnFirework})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x74200))(this);
    else return PlayLayer::spawnFirework();
}

template<class D, void*** V>
void $PlayLayer<D, V>::spawnParticle(char const* p0, int p1, cocos2d::tCCPositionType p2, cocos2d::CCPoint p3) {
    if ((void($PlayLayer::*)(char const*, int, cocos2d::tCCPositionType, cocos2d::CCPoint)){&$PlayLayer::spawnParticle} != (void(D::*)(char const*, int, cocos2d::tCCPositionType, cocos2d::CCPoint)){&D::spawnParticle})
        return reinterpret_cast<void(*)(decltype(this), char const*, int, cocos2d::tCCPositionType, cocos2d::CCPoint)>(m->getOriginal(base+0x76330))(this, p0, p1, p2, p3);
    else return PlayLayer::spawnParticle(p0, p1, p2, p3);
}

template<class D, void*** V>
void $PlayLayer<D, V>::spawnPlayer2() {
    if ((void($PlayLayer::*)()){&$PlayLayer::spawnPlayer2} != (void(D::*)()){&D::spawnPlayer2})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x7d170))(this);
    else return PlayLayer::spawnPlayer2();
}

template<class D, void*** V>
void $PlayLayer<D, V>::startGame() {
    if ((void($PlayLayer::*)()){&$PlayLayer::startGame} != (void(D::*)()){&D::startGame})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x726b0))(this);
    else return PlayLayer::startGame();
}

template<class D, void*** V>
void $PlayLayer<D, V>::startMusic() {
    if ((void($PlayLayer::*)()){&$PlayLayer::startMusic} != (void(D::*)()){&D::startMusic})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x72910))(this);
    else return PlayLayer::startMusic();
}

template<class D, void*** V>
void $PlayLayer<D, V>::startRecording() {
    if ((void($PlayLayer::*)()){&$PlayLayer::startRecording} != (void(D::*)()){&D::startRecording})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x7fec0))(this);
    else return PlayLayer::startRecording();
}

template<class D, void*** V>
void $PlayLayer<D, V>::startRecordingDelayed() {
    if ((void($PlayLayer::*)()){&$PlayLayer::startRecordingDelayed} != (void(D::*)()){&D::startRecordingDelayed})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x7fed0))(this);
    else return PlayLayer::startRecordingDelayed();
}

template<class D, void*** V>
void $PlayLayer<D, V>::stopCameraShake() {
    if ((void($PlayLayer::*)()){&$PlayLayer::stopCameraShake} != (void(D::*)()){&D::stopCameraShake})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x75900))(this);
    else return PlayLayer::stopCameraShake();
}

template<class D, void*** V>
void $PlayLayer<D, V>::stopRecording() {
    if ((void($PlayLayer::*)()){&$PlayLayer::stopRecording} != (void(D::*)()){&D::stopRecording})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x6d090))(this);
    else return PlayLayer::stopRecording();
}

template<class D, void*** V>
void $PlayLayer<D, V>::storeCheckpoint(CheckpointObject* p0) {
    if ((void($PlayLayer::*)(CheckpointObject*)){&$PlayLayer::storeCheckpoint} != (void(D::*)(CheckpointObject*)){&D::storeCheckpoint})
        return reinterpret_cast<void(*)(decltype(this), CheckpointObject*)>(m->getOriginal(base+0x7ef10))(this, p0);
    else return PlayLayer::storeCheckpoint(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::switchToFlyMode(PlayerObject* p0, GameObject* p1, bool p2, int p3) {
    if ((void($PlayLayer::*)(PlayerObject*, GameObject*, bool, int)){&$PlayLayer::switchToFlyMode} != (void(D::*)(PlayerObject*, GameObject*, bool, int)){&D::switchToFlyMode})
        return reinterpret_cast<void(*)(decltype(this), PlayerObject*, GameObject*, bool, int)>(m->getOriginal(base+0x7baf0))(this, p0, p1, p2, p3);
    else return PlayLayer::switchToFlyMode(p0, p1, p2, p3);
}

template<class D, void*** V>
void $PlayLayer<D, V>::switchToRobotMode(PlayerObject* p0, GameObject* p1, bool p2) {
    if ((void($PlayLayer::*)(PlayerObject*, GameObject*, bool)){&$PlayLayer::switchToRobotMode} != (void(D::*)(PlayerObject*, GameObject*, bool)){&D::switchToRobotMode})
        return reinterpret_cast<void(*)(decltype(this), PlayerObject*, GameObject*, bool)>(m->getOriginal(base+0x7bc80))(this, p0, p1, p2);
    else return PlayLayer::switchToRobotMode(p0, p1, p2);
}

template<class D, void*** V>
void $PlayLayer<D, V>::switchToRollMode(PlayerObject* p0, GameObject* p1, bool p2) {
    if ((void($PlayLayer::*)(PlayerObject*, GameObject*, bool)){&$PlayLayer::switchToRollMode} != (void(D::*)(PlayerObject*, GameObject*, bool)){&D::switchToRollMode})
        return reinterpret_cast<void(*)(decltype(this), PlayerObject*, GameObject*, bool)>(m->getOriginal(base+0x7bbe0))(this, p0, p1, p2);
    else return PlayLayer::switchToRollMode(p0, p1, p2);
}

template<class D, void*** V>
void $PlayLayer<D, V>::switchToSpiderMode(PlayerObject* p0, GameObject* p1, bool p2) {
    if ((void($PlayLayer::*)(PlayerObject*, GameObject*, bool)){&$PlayLayer::switchToSpiderMode} != (void(D::*)(PlayerObject*, GameObject*, bool)){&D::switchToSpiderMode})
        return reinterpret_cast<void(*)(decltype(this), PlayerObject*, GameObject*, bool)>(m->getOriginal(base+0x7bd20))(this, p0, p1, p2);
    else return PlayLayer::switchToSpiderMode(p0, p1, p2);
}

template<class D, void*** V>
void $PlayLayer<D, V>::timeForXPos(float p0) {
    if ((void($PlayLayer::*)(float)){&$PlayLayer::timeForXPos} != (void(D::*)(float)){&D::timeForXPos})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x7d120))(this, p0);
    else return PlayLayer::timeForXPos(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::timeForXPos2(float p0, bool p1) {
    if ((void($PlayLayer::*)(float, bool)){&$PlayLayer::timeForXPos2} != (void(D::*)(float, bool)){&D::timeForXPos2})
        return reinterpret_cast<void(*)(decltype(this), float, bool)>(m->getOriginal(base+0x293eb0))(this, p0, p1);
    else return PlayLayer::timeForXPos2(p0, p1);
}

template<class D, void*** V>
void $PlayLayer<D, V>::toggleBGEffectVisibility(bool p0) {
    if ((void($PlayLayer::*)(bool)){&$PlayLayer::toggleBGEffectVisibility} != (void(D::*)(bool)){&D::toggleBGEffectVisibility})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x7fe80))(this, p0);
    else return PlayLayer::toggleBGEffectVisibility(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::toggleDualMode(GameObject* p0, bool p1, PlayerObject* p2, bool p3) {
    if ((void($PlayLayer::*)(GameObject*, bool, PlayerObject*, bool)){&$PlayLayer::toggleDualMode} != (void(D::*)(GameObject*, bool, PlayerObject*, bool)){&D::toggleDualMode})
        return reinterpret_cast<void(*)(decltype(this), GameObject*, bool, PlayerObject*, bool)>(m->getOriginal(base+0x7bf90))(this, p0, p1, p2, p3);
    else return PlayLayer::toggleDualMode(p0, p1, p2, p3);
}

template<class D, void*** V>
void $PlayLayer<D, V>::toggleFlipped(bool p0, bool p1) {
    if ((void($PlayLayer::*)(bool, bool)){&$PlayLayer::toggleFlipped} != (void(D::*)(bool, bool)){&D::toggleFlipped})
        return reinterpret_cast<void(*)(decltype(this), bool, bool)>(m->getOriginal(base+0x7bdc0))(this, p0, p1);
    else return PlayLayer::toggleFlipped(p0, p1);
}

template<class D, void*** V>
void $PlayLayer<D, V>::toggleGhostEffect(int p0) {
    if ((void($PlayLayer::*)(int)){&$PlayLayer::toggleGhostEffect} != (void(D::*)(int)){&D::toggleGhostEffect})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x7fe40))(this, p0);
    else return PlayLayer::toggleGhostEffect(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::toggleGlitter(bool p0) {
    if ((void($PlayLayer::*)(bool)){&$PlayLayer::toggleGlitter} != (void(D::*)(bool)){&D::toggleGlitter})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x70e00))(this, p0);
    else return PlayLayer::toggleGlitter(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::togglePracticeMode(bool p0) {
    if ((void($PlayLayer::*)(bool)){&$PlayLayer::togglePracticeMode} != (void(D::*)(bool)){&D::togglePracticeMode})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x7f9e0))(this, p0);
    else return PlayLayer::togglePracticeMode(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::toggleProgressbar() {
    if ((void($PlayLayer::*)()){&$PlayLayer::toggleProgressbar} != (void(D::*)()){&D::toggleProgressbar})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x6eeb0))(this);
    else return PlayLayer::toggleProgressbar();
}

template<class D, void*** V>
void $PlayLayer<D, V>::tryStartRecord() {
    if ((void($PlayLayer::*)()){&$PlayLayer::tryStartRecord} != (void(D::*)()){&D::tryStartRecord})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x7fe00))(this);
    else return PlayLayer::tryStartRecord();
}

template<class D, void*** V>
void $PlayLayer<D, V>::unclaimParticle(char const* p0, cocos2d::CCParticleSystemQuad* p1) {
    if ((void($PlayLayer::*)(char const*, cocos2d::CCParticleSystemQuad*)){&$PlayLayer::unclaimParticle} != (void(D::*)(char const*, cocos2d::CCParticleSystemQuad*)){&D::unclaimParticle})
        return reinterpret_cast<void(*)(decltype(this), char const*, cocos2d::CCParticleSystemQuad*)>(m->getOriginal(base+0x76e00))(this, p0, p1);
    else return PlayLayer::unclaimParticle(p0, p1);
}

template<class D, void*** V>
void $PlayLayer<D, V>::unregisterActiveObject(GameObject* p0) {
    if ((void($PlayLayer::*)(GameObject*)){&$PlayLayer::unregisterActiveObject} != (void(D::*)(GameObject*)){&D::unregisterActiveObject})
        return reinterpret_cast<void(*)(decltype(this), GameObject*)>(m->getOriginal(base+0x77660))(this, p0);
    else return PlayLayer::unregisterActiveObject(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::unregisterStateObject(GameObject* p0) {
    if ((void($PlayLayer::*)(GameObject*)){&$PlayLayer::unregisterStateObject} != (void(D::*)(GameObject*)){&D::unregisterStateObject})
        return reinterpret_cast<void(*)(decltype(this), GameObject*)>(m->getOriginal(base+0x777f0))(this, p0);
    else return PlayLayer::unregisterStateObject(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::update(float p0) {
    if ((void($PlayLayer::*)(float)){&$PlayLayer::update} != (void(D::*)(float)){&D::update})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x77900))(this, p0);
    else return PlayLayer::update(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::updateAttempts() {
    if ((void($PlayLayer::*)()){&$PlayLayer::updateAttempts} != (void(D::*)()){&D::updateAttempts})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x7fcd0))(this);
    else return PlayLayer::updateAttempts();
}

template<class D, void*** V>
void $PlayLayer<D, V>::updateCamera(float p0) {
    if ((void($PlayLayer::*)(float)){&$PlayLayer::updateCamera} != (void(D::*)(float)){&D::updateCamera})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x6e2b0))(this, p0);
    else return PlayLayer::updateCamera(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::updateColor(cocos2d::_ccColor3B p0, float p1, int p2, bool p3, float p4, cocos2d::_ccHSVValue p5, int p6, bool p7, int p8, EffectGameObject* p9) {
    if ((void($PlayLayer::*)(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)){&$PlayLayer::updateColor} != (void(D::*)(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)){&D::updateColor})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)>(m->getOriginal(base+0x7c7f0))(this, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
    else return PlayLayer::updateColor(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
}

template<class D, void*** V>
void $PlayLayer<D, V>::updateDualGround(PlayerObject* p0, int p1, bool p2) {
    if ((void($PlayLayer::*)(PlayerObject*, int, bool)){&$PlayLayer::updateDualGround} != (void(D::*)(PlayerObject*, int, bool)){&D::updateDualGround})
        return reinterpret_cast<void(*)(decltype(this), PlayerObject*, int, bool)>(m->getOriginal(base+0x7caa0))(this, p0, p1, p2);
    else return PlayLayer::updateDualGround(p0, p1, p2);
}

template<class D, void*** V>
void $PlayLayer<D, V>::updateEffectPositions() {
    if ((void($PlayLayer::*)()){&$PlayLayer::updateEffectPositions} != (void(D::*)()){&D::updateEffectPositions})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x7a6d0))(this);
    else return PlayLayer::updateEffectPositions();
}

template<class D, void*** V>
void $PlayLayer<D, V>::updateLevelColors() {
    if ((void($PlayLayer::*)()){&$PlayLayer::updateLevelColors} != (void(D::*)()){&D::updateLevelColors})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x6f1e0))(this);
    else return PlayLayer::updateLevelColors();
}

template<class D, void*** V>
void $PlayLayer<D, V>::updateMoveObjectsLastPosition() {
    if ((void($PlayLayer::*)()){&$PlayLayer::updateMoveObjectsLastPosition} != (void(D::*)()){&D::updateMoveObjectsLastPosition})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x7a720))(this);
    else return PlayLayer::updateMoveObjectsLastPosition();
}

template<class D, void*** V>
void $PlayLayer<D, V>::updateProgressbar() {
    if ((void($PlayLayer::*)()){&$PlayLayer::updateProgressbar} != (void(D::*)()){&D::updateProgressbar})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x6ed70))(this);
    else return PlayLayer::updateProgressbar();
}

template<class D, void*** V>
void $PlayLayer<D, V>::updateReplay(float p0) {
    if ((void($PlayLayer::*)(float)){&$PlayLayer::updateReplay} != (void(D::*)(float)){&D::updateReplay})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x78b60))(this, p0);
    else return PlayLayer::updateReplay(p0);
}

template<class D, void*** V>
void $PlayLayer<D, V>::updateTimeMod(float p0, bool p1) {
    if ((void($PlayLayer::*)(float, bool)){&$PlayLayer::updateTimeMod} != (void(D::*)(float, bool)){&D::updateTimeMod})
        return reinterpret_cast<void(*)(decltype(this), float, bool)>(m->getOriginal(base+0x786f0))(this, p0, p1);
    else return PlayLayer::updateTimeMod(p0, p1);
}

template<class D, void*** V>
void $PlayLayer<D, V>::updateTweenAction(float p0, char const* p1) {
    if ((void($PlayLayer::*)(float, char const*)){&$PlayLayer::updateTweenAction} != (void(D::*)(float, char const*)){&D::updateTweenAction})
        return reinterpret_cast<void(*)(decltype(this), float, char const*)>(m->getOriginal(base+0x7ffb0))(this, p0, p1);
    else return PlayLayer::updateTweenAction(p0, p1);
}

template<class D, void*** V>
void $PlayLayer<D, V>::updateVisibility() {
    if ((void($PlayLayer::*)()){&$PlayLayer::updateVisibility} != (void(D::*)()){&D::updateVisibility})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x6fb90))(this);
    else return PlayLayer::updateVisibility();
}

template<class D, void*** V>
void $PlayLayer<D, V>::vfDChk() {
    if ((void($PlayLayer::*)()){&$PlayLayer::vfDChk} != (void(D::*)()){&D::vfDChk})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x7fcb0))(this);
    else return PlayLayer::vfDChk();
}

template<class D, void*** V>
void $PlayLayer<D, V>::visit() {
    if ((void($PlayLayer::*)()){&$PlayLayer::visit} != (void(D::*)()){&D::visit})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x75ef0))(this);
    else return PlayLayer::visit();
}

template<class D, void*** V>
void $PlayLayer<D, V>::visitWithColorFlash() {
    if ((void($PlayLayer::*)()){&$PlayLayer::visitWithColorFlash} != (void(D::*)()){&D::visitWithColorFlash})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x761f0))(this);
    else return PlayLayer::visitWithColorFlash();
}

template<class D, void*** V>
void $PlayLayer<D, V>::willSwitchToMode(int p0, PlayerObject* p1) {
    if ((void($PlayLayer::*)(int, PlayerObject*)){&$PlayLayer::willSwitchToMode} != (void(D::*)(int, PlayerObject*)){&D::willSwitchToMode})
        return reinterpret_cast<void(*)(decltype(this), int, PlayerObject*)>(m->getOriginal(base+0x7b9e0))(this, p0, p1);
    else return PlayLayer::willSwitchToMode(p0, p1);
}

template<class D, void*** V>
void $PlayLayer<D, V>::xPosForTime(float p0) {
    if ((void($PlayLayer::*)(float)){&$PlayLayer::xPosForTime} != (void(D::*)(float)){&D::xPosForTime})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x7d140))(this, p0);
    else return PlayLayer::xPosForTime(p0);
}


template<class D, void*** V>
$PlayerCheckpoint<D, V>::~$PlayerCheckpoint() {}

template<class D, void*** V>
$PlayerCheckpoint<D, V>::$PlayerCheckpoint() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((PlayerCheckpoint*(*)()){&$PlayerCheckpoint::create} != (PlayerCheckpoint*(*)()){&D::create})
        m->registerHook(base+0x7e8c0, (PlayerCheckpoint*(*)()){&D::create});
}

template<class D, void*** V>
PlayerCheckpoint* $PlayerCheckpoint<D, V>::create() {
    if ((PlayerCheckpoint*(*)()){&$PlayerCheckpoint::create} != (PlayerCheckpoint*(*)()){&D::create})
        return reinterpret_cast<PlayerCheckpoint*(*)()>(m->getOriginal(base+0x7e8c0))();
    else return PlayerCheckpoint::create();
}


template<class D, void*** V>
$PlayerObject<D, V>::~$PlayerObject() {}

template<class D, void*** V>
$PlayerObject<D, V>::$PlayerObject() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($PlayerObject::*)()){&$PlayerObject::activateStreak} != (void(D::*)()){&D::activateStreak})
        m->registerHook(base+0x21aef0, extract((void(D::*)()){&D::activateStreak}));

    if ((void($PlayerObject::*)()){&$PlayerObject::addAllParticles} != (void(D::*)()){&D::addAllParticles})
        m->registerHook(base+0x2189b0, extract((void(D::*)()){&D::addAllParticles}));

    if ((void($PlayerObject::*)(GameObject*)){&$PlayerObject::addToTouchedRings} != (void(D::*)(GameObject*)){&D::addToTouchedRings})
        m->registerHook(base+0x22b800, extract((void(D::*)(GameObject*)){&D::addToTouchedRings}));

    if ((void($PlayerObject::*)(char const*)){&$PlayerObject::animationFinished} != (void(D::*)(char const*)){&D::animationFinished})
        m->registerHook(base+0x22e9d0, extract_virtual(V, (void(D::*)(char const*)){&D::animationFinished}));
    std::cout << "animationFinished: " << (void*)extract_virtual(V, (void(D::*)(char const*)){&D::animationFinished}) << std::endl;

    if ((void($PlayerObject::*)(float)){&$PlayerObject::boostPlayer} != (void(D::*)(float)){&D::boostPlayer})
        m->registerHook(base+0x21d6b0, extract((void(D::*)(float)){&D::boostPlayer}));

    if ((void($PlayerObject::*)(float, int)){&$PlayerObject::bumpPlayer} != (void(D::*)(float, int)){&D::bumpPlayer})
        m->registerHook(base+0x22d890, extract((void(D::*)(float, int)){&D::bumpPlayer}));

    if ((void($PlayerObject::*)(PlayerButton)){&$PlayerObject::buttonDown} != (void(D::*)(PlayerButton)){&D::buttonDown})
        m->registerHook(base+0x22b7e0, extract((void(D::*)(PlayerButton)){&D::buttonDown}));

    if ((void($PlayerObject::*)(GameObject*)){&$PlayerObject::checkSnapJumpToObject} != (void(D::*)(GameObject*)){&D::checkSnapJumpToObject})
        m->registerHook(base+0x2217f0, extract((void(D::*)(GameObject*)){&D::checkSnapJumpToObject}));

    if ((void($PlayerObject::*)(float, GameObject*)){&$PlayerObject::collidedWithObject} != (void(D::*)(float, GameObject*)){&D::collidedWithObject})
        m->registerHook(base+0x21d880, extract((void(D::*)(float, GameObject*)){&D::collidedWithObject}));

    if ((void($PlayerObject::*)(float, GameObject*, cocos2d::CCRect)){&$PlayerObject::collidedWithObject} != (void(D::*)(float, GameObject*, cocos2d::CCRect)){&D::collidedWithObject})
        m->registerHook(base+0x21f0b0, extract((void(D::*)(float, GameObject*, cocos2d::CCRect)){&D::collidedWithObject}));

    if ((void($PlayerObject::*)(float, GameObject*, bool)){&$PlayerObject::collidedWithSlope} != (void(D::*)(float, GameObject*, bool)){&D::collidedWithSlope})
        m->registerHook(base+0x21d8d0, extract((void(D::*)(float, GameObject*, bool)){&D::collidedWithSlope}));

    if ((void($PlayerObject::*)(float)){&$PlayerObject::convertToClosestRotation} != (void(D::*)(float)){&D::convertToClosestRotation})
        m->registerHook(base+0x21c860, extract((void(D::*)(float)){&D::convertToClosestRotation}));

    if ((void($PlayerObject::*)(PlayerObject*)){&$PlayerObject::copyAttributes} != (void(D::*)(PlayerObject*)){&D::copyAttributes})
        m->registerHook(base+0x22dc70, extract((void(D::*)(PlayerObject*)){&D::copyAttributes}));

    if ((PlayerObject*(*)(int, int, cocos2d::CCLayer*)){&$PlayerObject::create} != (PlayerObject*(*)(int, int, cocos2d::CCLayer*)){&D::create})
        m->registerHook(base+0x217260, (PlayerObject*(*)(int, int, cocos2d::CCLayer*)){&D::create});

    if ((void($PlayerObject::*)()){&$PlayerObject::deactivateParticle} != (void(D::*)()){&D::deactivateParticle})
        m->registerHook(base+0x21a540, extract((void(D::*)()){&D::deactivateParticle}));

    if ((void($PlayerObject::*)(bool)){&$PlayerObject::deactivateStreak} != (void(D::*)(bool)){&D::deactivateStreak})
        m->registerHook(base+0x218b30, extract((void(D::*)(bool)){&D::deactivateStreak}));

    if ((void($PlayerObject::*)(float)){&$PlayerObject::fadeOutStreak2} != (void(D::*)(float)){&D::fadeOutStreak2})
        m->registerHook(base+0x225890, extract((void(D::*)(float)){&D::fadeOutStreak2}));

    if ((void($PlayerObject::*)(float, float, cocos2d::_ccColor3B, cocos2d::_ccColor3B)){&$PlayerObject::flashPlayer} != (void(D::*)(float, float, cocos2d::_ccColor3B, cocos2d::_ccColor3B)){&D::flashPlayer})
        m->registerHook(base+0x221c80, extract((void(D::*)(float, float, cocos2d::_ccColor3B, cocos2d::_ccColor3B)){&D::flashPlayer}));

    if ((void($PlayerObject::*)(bool, bool)){&$PlayerObject::flipGravity} != (void(D::*)(bool, bool)){&D::flipGravity})
        m->registerHook(base+0x21c090, extract((void(D::*)(bool, bool)){&D::flipGravity}));

    if ((void($PlayerObject::*)()){&$PlayerObject::flipMod} != (void(D::*)()){&D::flipMod})
        m->registerHook(base+0x21a4c0, extract((void(D::*)()){&D::flipMod}));

    if ((void($PlayerObject::*)()){&$PlayerObject::getActiveMode} != (void(D::*)()){&D::getActiveMode})
        m->registerHook(base+0x22b950, extract((void(D::*)()){&D::getActiveMode}));

    if ((void($PlayerObject::*)()){&$PlayerObject::getModifiedSlopeYVel} != (void(D::*)()){&D::getModifiedSlopeYVel})
        m->registerHook(base+0x21bff0, extract((void(D::*)()){&D::getModifiedSlopeYVel}));

    if ((void($PlayerObject::*)(float)){&$PlayerObject::getOldPosition} != (void(D::*)(float)){&D::getOldPosition})
        m->registerHook(base+0x21a830, extract((void(D::*)(float)){&D::getOldPosition}));

    if ((void($PlayerObject::*)()){&$PlayerObject::getOrientedBox} != (void(D::*)()){&D::getOrientedBox})
        m->registerHook(base+0x22dee0, extract_virtual(V, (void(D::*)()){&D::getOrientedBox}));
    std::cout << "getOrientedBox: " << (void*)extract_virtual(V, (void(D::*)()){&D::getOrientedBox}) << std::endl;

    if ((void($PlayerObject::*)()){&$PlayerObject::getRealPosition} != (void(D::*)()){&D::getRealPosition})
        m->registerHook(base+0x22d5f0, extract_virtual(V, (void(D::*)()){&D::getRealPosition}));
    std::cout << "getRealPosition: " << (void*)extract_virtual(V, (void(D::*)()){&D::getRealPosition}) << std::endl;

    if ((void($PlayerObject::*)()){&$PlayerObject::getSecondColor} != (void(D::*)()){&D::getSecondColor})
        m->registerHook(base+0x22cee0, extract((void(D::*)()){&D::getSecondColor}));

    if ((void($PlayerObject::*)()){&$PlayerObject::gravityDown} != (void(D::*)()){&D::gravityDown})
        m->registerHook(base+0x22e930, extract((void(D::*)()){&D::gravityDown}));

    if ((void($PlayerObject::*)()){&$PlayerObject::gravityUp} != (void(D::*)()){&D::gravityUp})
        m->registerHook(base+0x22e900, extract((void(D::*)()){&D::gravityUp}));

    if ((void($PlayerObject::*)()){&$PlayerObject::hardFlipGravity} != (void(D::*)()){&D::hardFlipGravity})
        m->registerHook(base+0x22b860, extract((void(D::*)()){&D::hardFlipGravity}));

    if ((void($PlayerObject::*)(bool)){&$PlayerObject::hitGround} != (void(D::*)(bool)){&D::hitGround})
        m->registerHook(base+0x220a30, extract((void(D::*)(bool)){&D::hitGround}));

    if ((void($PlayerObject::*)()){&$PlayerObject::incrementJumps} != (void(D::*)()){&D::incrementJumps})
        m->registerHook(base+0x21c050, extract((void(D::*)()){&D::incrementJumps}));

    if ((bool($PlayerObject::*)(int, int, cocos2d::CCLayer*)){&$PlayerObject::init} != (bool(D::*)(int, int, cocos2d::CCLayer*)){&D::init})
        m->registerHook(base+0x2172e0, extract((bool(D::*)(int, int, cocos2d::CCLayer*)){&D::init}));

    if ((void($PlayerObject::*)(float)){&$PlayerObject::isBoostValid} != (void(D::*)(float)){&D::isBoostValid})
        m->registerHook(base+0x21d650, extract((void(D::*)(float)){&D::isBoostValid}));

    if ((void($PlayerObject::*)()){&$PlayerObject::isFlying} != (void(D::*)()){&D::isFlying})
        m->registerHook(base+0x21a4e0, extract((void(D::*)()){&D::isFlying}));

    if ((void($PlayerObject::*)(float)){&$PlayerObject::isSafeFlip} != (void(D::*)(float)){&D::isSafeFlip})
        m->registerHook(base+0x2209f0, extract((void(D::*)(float)){&D::isSafeFlip}));

    if ((void($PlayerObject::*)(float)){&$PlayerObject::isSafeMode} != (void(D::*)(float)){&D::isSafeMode})
        m->registerHook(base+0x2209b0, extract((void(D::*)(float)){&D::isSafeMode}));

    if ((void($PlayerObject::*)(float)){&$PlayerObject::isSafeSpiderFlip} != (void(D::*)(float)){&D::isSafeSpiderFlip})
        m->registerHook(base+0x221be0, extract((void(D::*)(float)){&D::isSafeSpiderFlip}));

    if ((void($PlayerObject::*)()){&$PlayerObject::levelFlipFinished} != (void(D::*)()){&D::levelFlipFinished})
        m->registerHook(base+0x21b060, extract((void(D::*)()){&D::levelFlipFinished}));

    if ((void($PlayerObject::*)()){&$PlayerObject::levelFlipping} != (void(D::*)()){&D::levelFlipping})
        m->registerHook(base+0x21a510, extract((void(D::*)()){&D::levelFlipping}));

    if ((void($PlayerObject::*)()){&$PlayerObject::levelWillFlip} != (void(D::*)()){&D::levelWillFlip})
        m->registerHook(base+0x21b020, extract((void(D::*)()){&D::levelWillFlip}));

    if ((void($PlayerObject::*)(PlayerCheckpoint*)){&$PlayerObject::loadFromCheckpoint} != (void(D::*)(PlayerCheckpoint*)){&D::loadFromCheckpoint})
        m->registerHook(base+0x22e420, extract((void(D::*)(PlayerCheckpoint*)){&D::loadFromCheckpoint}));

    if ((void($PlayerObject::*)()){&$PlayerObject::lockPlayer} != (void(D::*)()){&D::lockPlayer})
        m->registerHook(base+0x22d680, extract((void(D::*)()){&D::lockPlayer}));

    if ((void($PlayerObject::*)()){&$PlayerObject::logValues} != (void(D::*)()){&D::logValues})
        m->registerHook(base+0x221220, extract((void(D::*)()){&D::logValues}));

    if ((void($PlayerObject::*)()){&$PlayerObject::modeDidChange} != (void(D::*)()){&D::modeDidChange})
        m->registerHook(base+0x22bfd0, extract((void(D::*)()){&D::modeDidChange}));

    if ((void($PlayerObject::*)()){&$PlayerObject::placeStreakPoint} != (void(D::*)()){&D::placeStreakPoint})
        m->registerHook(base+0x21af90, extract((void(D::*)()){&D::placeStreakPoint}));

    if ((void($PlayerObject::*)()){&$PlayerObject::playBurstEffect} != (void(D::*)()){&D::playBurstEffect})
        m->registerHook(base+0x21c780, extract((void(D::*)()){&D::playBurstEffect}));

    if ((void($PlayerObject::*)()){&$PlayerObject::playDeathEffect} != (void(D::*)()){&D::playDeathEffect})
        m->registerHook(base+0x225930, extract((void(D::*)()){&D::playDeathEffect}));

    if ((void($PlayerObject::*)()){&$PlayerObject::playDynamicSpiderRun} != (void(D::*)()){&D::playDynamicSpiderRun})
        m->registerHook(base+0x222ec0, extract((void(D::*)()){&D::playDynamicSpiderRun}));

    if ((void($PlayerObject::*)(bool)){&$PlayerObject::playerDestroyed} != (void(D::*)(bool)){&D::playerDestroyed})
        m->registerHook(base+0x2256d0, extract((void(D::*)(bool)){&D::playerDestroyed}));

    if ((void($PlayerObject::*)()){&$PlayerObject::playerIsFalling} != (void(D::*)()){&D::playerIsFalling})
        m->registerHook(base+0x21c730, extract((void(D::*)()){&D::playerIsFalling}));

    if ((void($PlayerObject::*)()){&$PlayerObject::playerTeleported} != (void(D::*)()){&D::playerTeleported})
        m->registerHook(base+0x22b840, extract((void(D::*)()){&D::playerTeleported}));

    if ((void($PlayerObject::*)()){&$PlayerObject::playingEndEffect} != (void(D::*)()){&D::playingEndEffect})
        m->registerHook(base+0x22d7e0, extract((void(D::*)()){&D::playingEndEffect}));

    if ((void($PlayerObject::*)(float)){&$PlayerObject::postCollision} != (void(D::*)(float)){&D::postCollision})
        m->registerHook(base+0x21cd10, extract((void(D::*)(float)){&D::postCollision}));

    if ((void($PlayerObject::*)()){&$PlayerObject::preCollision} != (void(D::*)()){&D::preCollision})
        m->registerHook(base+0x21ccc0, extract((void(D::*)()){&D::preCollision}));

    if ((void($PlayerObject::*)(float, GameObject*)){&$PlayerObject::preSlopeCollision} != (void(D::*)(float, GameObject*)){&D::preSlopeCollision})
        m->registerHook(base+0x21ec80, extract((void(D::*)(float, GameObject*)){&D::preSlopeCollision}));

    if ((void($PlayerObject::*)(float)){&$PlayerObject::propellPlayer} != (void(D::*)(float)){&D::propellPlayer})
        m->registerHook(base+0x22d8e0, extract((void(D::*)(float)){&D::propellPlayer}));

    if ((void($PlayerObject::*)(PlayerButton)){&$PlayerObject::pushButton} != (void(D::*)(PlayerButton)){&D::pushButton})
        m->registerHook(base+0x22aa00, extract((void(D::*)(PlayerButton)){&D::pushButton}));

    if ((void($PlayerObject::*)()){&$PlayerObject::pushDown} != (void(D::*)()){&D::pushDown})
        m->registerHook(base+0x22dbd0, extract((void(D::*)()){&D::pushDown}));

    if ((void($PlayerObject::*)(float)){&$PlayerObject::pushPlayer} != (void(D::*)(float)){&D::pushPlayer})
        m->registerHook(base+0x22dbb0, extract((void(D::*)(float)){&D::pushPlayer}));

    if ((void($PlayerObject::*)(PlayerButton)){&$PlayerObject::releaseButton} != (void(D::*)(PlayerButton)){&D::releaseButton})
        m->registerHook(base+0x22b6f0, extract((void(D::*)(PlayerButton)){&D::releaseButton}));

    if ((void($PlayerObject::*)()){&$PlayerObject::removeAllParticles} != (void(D::*)()){&D::removeAllParticles})
        m->registerHook(base+0x218ac0, extract((void(D::*)()){&D::removeAllParticles}));

    if ((void($PlayerObject::*)()){&$PlayerObject::removePendingCheckpoint} != (void(D::*)()){&D::removePendingCheckpoint})
        m->registerHook(base+0x2237b0, extract((void(D::*)()){&D::removePendingCheckpoint}));

    if ((void($PlayerObject::*)()){&$PlayerObject::resetAllParticles} != (void(D::*)()){&D::resetAllParticles})
        m->registerHook(base+0x21adb0, extract((void(D::*)()){&D::resetAllParticles}));

    if ((void($PlayerObject::*)()){&$PlayerObject::resetCollisionLog} != (void(D::*)()){&D::resetCollisionLog})
        m->registerHook(base+0x21cc20, extract((void(D::*)()){&D::resetCollisionLog}));

    if ((void($PlayerObject::*)()){&$PlayerObject::resetObject} != (void(D::*)()){&D::resetObject})
        m->registerHook(base+0x223170, extract_virtual(V, (void(D::*)()){&D::resetObject}));
    std::cout << "resetObject: " << (void*)extract_virtual(V, (void(D::*)()){&D::resetObject}) << std::endl;

    if ((void($PlayerObject::*)()){&$PlayerObject::resetPlayerIcon} != (void(D::*)()){&D::resetPlayerIcon})
        m->registerHook(base+0x22be00, extract((void(D::*)()){&D::resetPlayerIcon}));

    if ((void($PlayerObject::*)()){&$PlayerObject::resetStateVariables} != (void(D::*)()){&D::resetStateVariables})
        m->registerHook(base+0x223760, extract((void(D::*)()){&D::resetStateVariables}));

    if ((void($PlayerObject::*)()){&$PlayerObject::resetStreak} != (void(D::*)()){&D::resetStreak})
        m->registerHook(base+0x21ae10, extract((void(D::*)()){&D::resetStreak}));

    if ((void($PlayerObject::*)(GameObject*)){&$PlayerObject::ringJump} != (void(D::*)(GameObject*)){&D::ringJump})
        m->registerHook(base+0x22abf0, extract((void(D::*)(GameObject*)){&D::ringJump}));

    if ((void($PlayerObject::*)(float)){&$PlayerObject::runBallRotation} != (void(D::*)(float)){&D::runBallRotation})
        m->registerHook(base+0x21ca10, extract((void(D::*)(float)){&D::runBallRotation}));

    if ((void($PlayerObject::*)()){&$PlayerObject::runBallRotation2} != (void(D::*)()){&D::runBallRotation2})
        m->registerHook(base+0x21cb10, extract((void(D::*)()){&D::runBallRotation2}));

    if ((void($PlayerObject::*)()){&$PlayerObject::runNormalRotation} != (void(D::*)()){&D::runNormalRotation})
        m->registerHook(base+0x21c960, extract((void(D::*)()){&D::runNormalRotation}));

    if ((void($PlayerObject::*)(bool)){&$PlayerObject::runRotateAction} != (void(D::*)(bool)){&D::runRotateAction})
        m->registerHook(base+0x21c570, extract((void(D::*)(bool)){&D::runRotateAction}));

    if ((void($PlayerObject::*)(PlayerCheckpoint*)){&$PlayerObject::saveToCheckpoint} != (void(D::*)(PlayerCheckpoint*)){&D::saveToCheckpoint})
        m->registerHook(base+0x22e2f0, extract((void(D::*)(PlayerCheckpoint*)){&D::saveToCheckpoint}));

    if ((void($PlayerObject::*)(cocos2d::_ccColor3B const&)){&$PlayerObject::setColor} != (void(D::*)(cocos2d::_ccColor3B const&)){&D::setColor})
        m->registerHook(base+0x22cdf0, extract_virtual(V, (void(D::*)(cocos2d::_ccColor3B const&)){&D::setColor}));
    std::cout << "setColor: " << (void*)extract_virtual(V, (void(D::*)(cocos2d::_ccColor3B const&)){&D::setColor}) << std::endl;

    if ((void($PlayerObject::*)(bool)){&$PlayerObject::setFlipX} != (void(D::*)(bool)){&D::setFlipX})
        m->registerHook(base+0x22e720, extract_virtual(V, (void(D::*)(bool)){&D::setFlipX}));
    std::cout << "setFlipX: " << (void*)extract_virtual(V, (void(D::*)(bool)){&D::setFlipX}) << std::endl;

    if ((void($PlayerObject::*)(bool)){&$PlayerObject::setFlipY} != (void(D::*)(bool)){&D::setFlipY})
        m->registerHook(base+0x22e7b0, extract_virtual(V, (void(D::*)(bool)){&D::setFlipY}));
    std::cout << "setFlipY: " << (void*)extract_virtual(V, (void(D::*)(bool)){&D::setFlipY}) << std::endl;

    if ((void($PlayerObject::*)(unsigned char)){&$PlayerObject::setOpacity} != (void(D::*)(unsigned char)){&D::setOpacity})
        m->registerHook(base+0x22d400, extract_virtual(V, (void(D::*)(unsigned char)){&D::setOpacity}));
    std::cout << "setOpacity: " << (void*)extract_virtual(V, (void(D::*)(unsigned char)){&D::setOpacity}) << std::endl;

    if ((void($PlayerObject::*)(cocos2d::CCPoint const&)){&$PlayerObject::setPosition} != (void(D::*)(cocos2d::CCPoint const&)){&D::setPosition})
        m->registerHook(base+0x22c8b0, extract_virtual(V, (void(D::*)(cocos2d::CCPoint const&)){&D::setPosition}));
    std::cout << "setPosition: " << (void*)extract_virtual(V, (void(D::*)(cocos2d::CCPoint const&)){&D::setPosition}) << std::endl;

    if ((void($PlayerObject::*)(float)){&$PlayerObject::setRotation} != (void(D::*)(float)){&D::setRotation})
        m->registerHook(base+0x22e6e0, extract_virtual(V, (void(D::*)(float)){&D::setRotation}));
    std::cout << "setRotation: " << (void*)extract_virtual(V, (void(D::*)(float)){&D::setRotation}) << std::endl;

    if ((void($PlayerObject::*)(float)){&$PlayerObject::setScale} != (void(D::*)(float)){&D::setScale})
        m->registerHook(base+0x22e870, extract_virtual(V, (void(D::*)(float)){&D::setScale}));
    std::cout << "setScale: " << (void*)extract_virtual(V, (void(D::*)(float)){&D::setScale}) << std::endl;

    if ((void($PlayerObject::*)(float)){&$PlayerObject::setScaleX} != (void(D::*)(float)){&D::setScaleX})
        m->registerHook(base+0x22e7f0, extract_virtual(V, (void(D::*)(float)){&D::setScaleX}));
    std::cout << "setScaleX: " << (void*)extract_virtual(V, (void(D::*)(float)){&D::setScaleX}) << std::endl;

    if ((void($PlayerObject::*)(float)){&$PlayerObject::setScaleY} != (void(D::*)(float)){&D::setScaleY})
        m->registerHook(base+0x22e830, extract_virtual(V, (void(D::*)(float)){&D::setScaleY}));
    std::cout << "setScaleY: " << (void*)extract_virtual(V, (void(D::*)(float)){&D::setScaleY}) << std::endl;

    if ((void($PlayerObject::*)(cocos2d::_ccColor3B const&)){&$PlayerObject::setSecondColor} != (void(D::*)(cocos2d::_ccColor3B const&)){&D::setSecondColor})
        m->registerHook(base+0x219610, extract((void(D::*)(cocos2d::_ccColor3B const&)){&D::setSecondColor}));

    if ((void($PlayerObject::*)(bool)){&$PlayerObject::setVisible} != (void(D::*)(bool)){&D::setVisible})
        m->registerHook(base+0x22e8b0, extract_virtual(V, (void(D::*)(bool)){&D::setVisible}));
    std::cout << "setVisible: " << (void*)extract_virtual(V, (void(D::*)(bool)){&D::setVisible}) << std::endl;

    if ((void($PlayerObject::*)()){&$PlayerObject::setupStreak} != (void(D::*)()){&D::setupStreak})
        m->registerHook(base+0x218720, extract((void(D::*)()){&D::setupStreak}));

    if ((void($PlayerObject::*)()){&$PlayerObject::spawnCircle} != (void(D::*)()){&D::spawnCircle})
        m->registerHook(base+0x225480, extract((void(D::*)()){&D::spawnCircle}));

    if ((void($PlayerObject::*)()){&$PlayerObject::spawnCircle2} != (void(D::*)()){&D::spawnCircle2})
        m->registerHook(base+0x2252a0, extract((void(D::*)()){&D::spawnCircle2}));

    if ((void($PlayerObject::*)()){&$PlayerObject::spawnDualCircle} != (void(D::*)()){&D::spawnDualCircle})
        m->registerHook(base+0x2255c0, extract((void(D::*)()){&D::spawnDualCircle}));

    if ((void($PlayerObject::*)(PlayerObject*)){&$PlayerObject::spawnFromPlayer} != (void(D::*)(PlayerObject*)){&D::spawnFromPlayer})
        m->registerHook(base+0x22dde0, extract((void(D::*)(PlayerObject*)){&D::spawnFromPlayer}));

    if ((void($PlayerObject::*)(cocos2d::_ccColor3B, float)){&$PlayerObject::spawnPortalCircle} != (void(D::*)(cocos2d::_ccColor3B, float)){&D::spawnPortalCircle})
        m->registerHook(base+0x225350, extract((void(D::*)(cocos2d::_ccColor3B, float)){&D::spawnPortalCircle}));

    if ((void($PlayerObject::*)()){&$PlayerObject::spawnScaleCircle} != (void(D::*)()){&D::spawnScaleCircle})
        m->registerHook(base+0x2251b0, extract((void(D::*)()){&D::spawnScaleCircle}));

    if ((void($PlayerObject::*)()){&$PlayerObject::specialGroundHit} != (void(D::*)()){&D::specialGroundHit})
        m->registerHook(base+0x22dbf0, extract((void(D::*)()){&D::specialGroundHit}));

    if ((void($PlayerObject::*)()){&$PlayerObject::speedDown} != (void(D::*)()){&D::speedDown})
        m->registerHook(base+0x22e970, extract((void(D::*)()){&D::speedDown}));

    if ((void($PlayerObject::*)()){&$PlayerObject::speedUp} != (void(D::*)()){&D::speedUp})
        m->registerHook(base+0x22e950, extract((void(D::*)()){&D::speedUp}));

    if ((void($PlayerObject::*)(bool)){&$PlayerObject::spiderTestJump} != (void(D::*)(bool)){&D::spiderTestJump})
        m->registerHook(base+0x21b160, extract((void(D::*)(bool)){&D::spiderTestJump}));

    if ((void($PlayerObject::*)(GameObject*)){&$PlayerObject::startDashing} != (void(D::*)(GameObject*)){&D::startDashing})
        m->registerHook(base+0x221d70, extract((void(D::*)(GameObject*)){&D::startDashing}));

    if ((void($PlayerObject::*)()){&$PlayerObject::stopBurstEffect} != (void(D::*)()){&D::stopBurstEffect})
        m->registerHook(base+0x22c680, extract((void(D::*)()){&D::stopBurstEffect}));

    if ((void($PlayerObject::*)()){&$PlayerObject::stopDashing} != (void(D::*)()){&D::stopDashing})
        m->registerHook(base+0x222990, extract((void(D::*)()){&D::stopDashing}));

    if ((void($PlayerObject::*)(bool)){&$PlayerObject::stopRotation} != (void(D::*)(bool)){&D::stopRotation})
        m->registerHook(base+0x21c830, extract((void(D::*)(bool)){&D::stopRotation}));

    if ((void($PlayerObject::*)(bool, int)){&$PlayerObject::storeCollision} != (void(D::*)(bool, int)){&D::storeCollision})
        m->registerHook(base+0x21cc60, extract((void(D::*)(bool, int)){&D::storeCollision}));

    if ((void($PlayerObject::*)(GameObjectType)){&$PlayerObject::switchedToMode} != (void(D::*)(GameObjectType)){&D::switchedToMode})
        m->registerHook(base+0x22b9a0, extract((void(D::*)(GameObjectType)){&D::switchedToMode}));

    if ((void($PlayerObject::*)(float, GameObject*)){&$PlayerObject::testForMoving} != (void(D::*)(float, GameObject*)){&D::testForMoving})
        m->registerHook(base+0x21eb70, extract((void(D::*)(float, GameObject*)){&D::testForMoving}));

    if ((void($PlayerObject::*)(bool)){&$PlayerObject::toggleBirdMode} != (void(D::*)(bool)){&D::toggleBirdMode})
        m->registerHook(base+0x224070, extract((void(D::*)(bool)){&D::toggleBirdMode}));

    if ((void($PlayerObject::*)(bool)){&$PlayerObject::toggleDartMode} != (void(D::*)(bool)){&D::toggleDartMode})
        m->registerHook(base+0x2243f0, extract((void(D::*)(bool)){&D::toggleDartMode}));

    if ((void($PlayerObject::*)(bool)){&$PlayerObject::toggleFlyMode} != (void(D::*)(bool)){&D::toggleFlyMode})
        m->registerHook(base+0x223820, extract((void(D::*)(bool)){&D::toggleFlyMode}));

    if ((void($PlayerObject::*)(GhostType)){&$PlayerObject::toggleGhostEffect} != (void(D::*)(GhostType)){&D::toggleGhostEffect})
        m->registerHook(base+0x225000, extract((void(D::*)(GhostType)){&D::toggleGhostEffect}));

    if ((void($PlayerObject::*)(bool)){&$PlayerObject::togglePlayerScale} != (void(D::*)(bool)){&D::togglePlayerScale})
        m->registerHook(base+0x224bd0, extract((void(D::*)(bool)){&D::togglePlayerScale}));

    if ((void($PlayerObject::*)(bool)){&$PlayerObject::toggleRobotMode} != (void(D::*)(bool)){&D::toggleRobotMode})
        m->registerHook(base+0x223c70, extract((void(D::*)(bool)){&D::toggleRobotMode}));

    if ((void($PlayerObject::*)(bool)){&$PlayerObject::toggleRollMode} != (void(D::*)(bool)){&D::toggleRollMode})
        m->registerHook(base+0x223b20, extract((void(D::*)(bool)){&D::toggleRollMode}));

    if ((void($PlayerObject::*)(bool)){&$PlayerObject::toggleSpiderMode} != (void(D::*)(bool)){&D::toggleSpiderMode})
        m->registerHook(base+0x224830, extract((void(D::*)(bool)){&D::toggleSpiderMode}));

    if ((void($PlayerObject::*)(bool)){&$PlayerObject::toggleVisibility} != (void(D::*)(bool)){&D::toggleVisibility})
        m->registerHook(base+0x21abf0, extract((void(D::*)(bool)){&D::toggleVisibility}));

    if ((void($PlayerObject::*)(GameObject*)){&$PlayerObject::touchedObject} != (void(D::*)(GameObject*)){&D::touchedObject})
        m->registerHook(base+0x22e660, extract((void(D::*)(GameObject*)){&D::touchedObject}));

    if ((void($PlayerObject::*)()){&$PlayerObject::tryPlaceCheckpoint} != (void(D::*)()){&D::tryPlaceCheckpoint})
        m->registerHook(base+0x21a950, extract((void(D::*)()){&D::tryPlaceCheckpoint}));

    if ((void($PlayerObject::*)(float)){&$PlayerObject::update} != (void(D::*)(float)){&D::update})
        m->registerHook(base+0x218bf0, extract_virtual(V, (void(D::*)(float)){&D::update}));
    std::cout << "update: " << (void*)extract_virtual(V, (void(D::*)(float)){&D::update}) << std::endl;

    if ((void($PlayerObject::*)(bool)){&$PlayerObject::updateCheckpointMode} != (void(D::*)(bool)){&D::updateCheckpointMode})
        m->registerHook(base+0x218980, extract((void(D::*)(bool)){&D::updateCheckpointMode}));

    if ((void($PlayerObject::*)()){&$PlayerObject::updateCheckpointTest} != (void(D::*)()){&D::updateCheckpointTest})
        m->registerHook(base+0x21a890, extract((void(D::*)()){&D::updateCheckpointTest}));

    if ((void($PlayerObject::*)(bool, int)){&$PlayerObject::updateCollide} != (void(D::*)(bool, int)){&D::updateCollide})
        m->registerHook(base+0x220f10, extract((void(D::*)(bool, int)){&D::updateCollide}));

    if ((void($PlayerObject::*)(float, int)){&$PlayerObject::updateCollideBottom} != (void(D::*)(float, int)){&D::updateCollideBottom})
        m->registerHook(base+0x221790, extract((void(D::*)(float, int)){&D::updateCollideBottom}));

    if ((void($PlayerObject::*)(float, int)){&$PlayerObject::updateCollideTop} != (void(D::*)(float, int)){&D::updateCollideTop})
        m->registerHook(base+0x221c20, extract((void(D::*)(float, int)){&D::updateCollideTop}));

    if ((void($PlayerObject::*)()){&$PlayerObject::updateDashAnimation} != (void(D::*)()){&D::updateDashAnimation})
        m->registerHook(base+0x21a570, extract((void(D::*)()){&D::updateDashAnimation}));

    if ((void($PlayerObject::*)()){&$PlayerObject::updateDashArt} != (void(D::*)()){&D::updateDashArt})
        m->registerHook(base+0x222520, extract((void(D::*)()){&D::updateDashArt}));

    if ((void($PlayerObject::*)()){&$PlayerObject::updateGlowColor} != (void(D::*)()){&D::updateGlowColor})
        m->registerHook(base+0x22cf10, extract((void(D::*)()){&D::updateGlowColor}));

    if ((void($PlayerObject::*)(float)){&$PlayerObject::updateJump} != (void(D::*)(float)){&D::updateJump})
        m->registerHook(base+0x219680, extract((void(D::*)(float)){&D::updateJump}));

    if ((void($PlayerObject::*)()){&$PlayerObject::updateJumpVariables} != (void(D::*)()){&D::updateJumpVariables})
        m->registerHook(base+0x21a740, extract((void(D::*)()){&D::updateJumpVariables}));

    if ((void($PlayerObject::*)(int)){&$PlayerObject::updatePlayerBirdFrame} != (void(D::*)(int)){&D::updatePlayerBirdFrame})
        m->registerHook(base+0x22bfe0, extract((void(D::*)(int)){&D::updatePlayerBirdFrame}));

    if ((void($PlayerObject::*)(int)){&$PlayerObject::updatePlayerDartFrame} != (void(D::*)(int)){&D::updatePlayerDartFrame})
        m->registerHook(base+0x22c260, extract((void(D::*)(int)){&D::updatePlayerDartFrame}));

    if ((void($PlayerObject::*)(int)){&$PlayerObject::updatePlayerFrame} != (void(D::*)(int)){&D::updatePlayerFrame})
        m->registerHook(base+0x22c470, extract((void(D::*)(int)){&D::updatePlayerFrame}));

    if ((void($PlayerObject::*)()){&$PlayerObject::updatePlayerGlow} != (void(D::*)()){&D::updatePlayerGlow})
        m->registerHook(base+0x22bc50, extract((void(D::*)()){&D::updatePlayerGlow}));

    if ((void($PlayerObject::*)(int)){&$PlayerObject::updatePlayerRobotFrame} != (void(D::*)(int)){&D::updatePlayerRobotFrame})
        m->registerHook(base+0x22d620, extract((void(D::*)(int)){&D::updatePlayerRobotFrame}));

    if ((void($PlayerObject::*)(int)){&$PlayerObject::updatePlayerRollFrame} != (void(D::*)(int)){&D::updatePlayerRollFrame})
        m->registerHook(base+0x22c6a0, extract((void(D::*)(int)){&D::updatePlayerRollFrame}));

    if ((void($PlayerObject::*)()){&$PlayerObject::updatePlayerScale} != (void(D::*)()){&D::updatePlayerScale})
        m->registerHook(base+0x22b8b0, extract((void(D::*)()){&D::updatePlayerScale}));

    if ((void($PlayerObject::*)(int)){&$PlayerObject::updatePlayerShipFrame} != (void(D::*)(int)){&D::updatePlayerShipFrame})
        m->registerHook(base+0x22ba40, extract((void(D::*)(int)){&D::updatePlayerShipFrame}));

    if ((void($PlayerObject::*)(int)){&$PlayerObject::updatePlayerSpiderFrame} != (void(D::*)(int)){&D::updatePlayerSpiderFrame})
        m->registerHook(base+0x22d650, extract((void(D::*)(int)){&D::updatePlayerSpiderFrame}));

    if ((void($PlayerObject::*)(std::string)){&$PlayerObject::updatePlayerSpriteExtra} != (void(D::*)(std::string)){&D::updatePlayerSpriteExtra})
        m->registerHook(base+0x218440, extract((void(D::*)(std::string)){&D::updatePlayerSpriteExtra}));

    if ((void($PlayerObject::*)()){&$PlayerObject::updateRobotAnimationSpeed} != (void(D::*)()){&D::updateRobotAnimationSpeed})
        m->registerHook(base+0x22df40, extract((void(D::*)()){&D::updateRobotAnimationSpeed}));

    if ((void($PlayerObject::*)(float)){&$PlayerObject::updateRotation} != (void(D::*)(float)){&D::updateRotation})
        m->registerHook(base+0x2214b0, extract((void(D::*)(float)){&D::updateRotation}));

    if ((void($PlayerObject::*)(float, float)){&$PlayerObject::updateRotation} != (void(D::*)(float, float)){&D::updateRotation})
        m->registerHook(base+0x221230, extract((void(D::*)(float, float)){&D::updateRotation}));

    if ((void($PlayerObject::*)(float)){&$PlayerObject::updateShipRotation} != (void(D::*)(float)){&D::updateShipRotation})
        m->registerHook(base+0x221310, extract((void(D::*)(float)){&D::updateShipRotation}));

    if ((void($PlayerObject::*)(std::string)){&$PlayerObject::updateShipSpriteExtra} != (void(D::*)(std::string)){&D::updateShipSpriteExtra})
        m->registerHook(base+0x218510, extract((void(D::*)(std::string)){&D::updateShipSpriteExtra}));

    if ((void($PlayerObject::*)(float)){&$PlayerObject::updateSlopeRotation} != (void(D::*)(float)){&D::updateSlopeRotation})
        m->registerHook(base+0x221030, extract((void(D::*)(float)){&D::updateSlopeRotation}));

    if ((void($PlayerObject::*)(float)){&$PlayerObject::updateSlopeYVelocity} != (void(D::*)(float)){&D::updateSlopeYVelocity})
        m->registerHook(base+0x22e920, extract((void(D::*)(float)){&D::updateSlopeYVelocity}));

    if ((void($PlayerObject::*)(float)){&$PlayerObject::updateSpecial} != (void(D::*)(float)){&D::updateSpecial})
        m->registerHook(base+0x21a790, extract((void(D::*)(float)){&D::updateSpecial}));

    if ((void($PlayerObject::*)()){&$PlayerObject::updateStateVariables} != (void(D::*)()){&D::updateStateVariables})
        m->registerHook(base+0x21a770, extract((void(D::*)()){&D::updateStateVariables}));

    if ((void($PlayerObject::*)(float)){&$PlayerObject::updateTimeMod} != (void(D::*)(float)){&D::updateTimeMod})
        m->registerHook(base+0x2185e0, extract((void(D::*)(float)){&D::updateTimeMod}));

    if ((void($PlayerObject::*)()){&$PlayerObject::usingWallLimitedMode} != (void(D::*)()){&D::usingWallLimitedMode})
        m->registerHook(base+0x22df00, extract((void(D::*)()){&D::usingWallLimitedMode}));

    if ((void($PlayerObject::*)()){&$PlayerObject::yStartDown} != (void(D::*)()){&D::yStartDown})
        m->registerHook(base+0x22e9b0, extract((void(D::*)()){&D::yStartDown}));

    if ((void($PlayerObject::*)()){&$PlayerObject::yStartUp} != (void(D::*)()){&D::yStartUp})
        m->registerHook(base+0x22e990, extract((void(D::*)()){&D::yStartUp}));
}

template<class D, void*** V>
void $PlayerObject<D, V>::activateStreak() {
    if ((void($PlayerObject::*)()){&$PlayerObject::activateStreak} != (void(D::*)()){&D::activateStreak})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x21aef0))(this);
    else return PlayerObject::activateStreak();
}

template<class D, void*** V>
void $PlayerObject<D, V>::addAllParticles() {
    if ((void($PlayerObject::*)()){&$PlayerObject::addAllParticles} != (void(D::*)()){&D::addAllParticles})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x2189b0))(this);
    else return PlayerObject::addAllParticles();
}

template<class D, void*** V>
void $PlayerObject<D, V>::addToTouchedRings(GameObject* p0) {
    if ((void($PlayerObject::*)(GameObject*)){&$PlayerObject::addToTouchedRings} != (void(D::*)(GameObject*)){&D::addToTouchedRings})
        return reinterpret_cast<void(*)(decltype(this), GameObject*)>(m->getOriginal(base+0x22b800))(this, p0);
    else return PlayerObject::addToTouchedRings(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::animationFinished(char const* p0) {
    if ((void($PlayerObject::*)(char const*)){&$PlayerObject::animationFinished} != (void(D::*)(char const*)){&D::animationFinished})
        return reinterpret_cast<void(*)(decltype(this), char const*)>(m->getOriginal(base+0x22e9d0))(this, p0);
    else return PlayerObject::animationFinished(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::boostPlayer(float p0) {
    if ((void($PlayerObject::*)(float)){&$PlayerObject::boostPlayer} != (void(D::*)(float)){&D::boostPlayer})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x21d6b0))(this, p0);
    else return PlayerObject::boostPlayer(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::bumpPlayer(float p0, int p1) {
    if ((void($PlayerObject::*)(float, int)){&$PlayerObject::bumpPlayer} != (void(D::*)(float, int)){&D::bumpPlayer})
        return reinterpret_cast<void(*)(decltype(this), float, int)>(m->getOriginal(base+0x22d890))(this, p0, p1);
    else return PlayerObject::bumpPlayer(p0, p1);
}

template<class D, void*** V>
void $PlayerObject<D, V>::buttonDown(PlayerButton p0) {
    if ((void($PlayerObject::*)(PlayerButton)){&$PlayerObject::buttonDown} != (void(D::*)(PlayerButton)){&D::buttonDown})
        return reinterpret_cast<void(*)(decltype(this), PlayerButton)>(m->getOriginal(base+0x22b7e0))(this, p0);
    else return PlayerObject::buttonDown(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::checkSnapJumpToObject(GameObject* p0) {
    if ((void($PlayerObject::*)(GameObject*)){&$PlayerObject::checkSnapJumpToObject} != (void(D::*)(GameObject*)){&D::checkSnapJumpToObject})
        return reinterpret_cast<void(*)(decltype(this), GameObject*)>(m->getOriginal(base+0x2217f0))(this, p0);
    else return PlayerObject::checkSnapJumpToObject(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::collidedWithObject(float p0, GameObject* p1) {
    if ((void($PlayerObject::*)(float, GameObject*)){&$PlayerObject::collidedWithObject} != (void(D::*)(float, GameObject*)){&D::collidedWithObject})
        return reinterpret_cast<void(*)(decltype(this), float, GameObject*)>(m->getOriginal(base+0x21d880))(this, p0, p1);
    else return PlayerObject::collidedWithObject(p0, p1);
}

template<class D, void*** V>
void $PlayerObject<D, V>::collidedWithObject(float p0, GameObject* p1, cocos2d::CCRect p2) {
    if ((void($PlayerObject::*)(float, GameObject*, cocos2d::CCRect)){&$PlayerObject::collidedWithObject} != (void(D::*)(float, GameObject*, cocos2d::CCRect)){&D::collidedWithObject})
        return reinterpret_cast<void(*)(decltype(this), float, GameObject*, cocos2d::CCRect)>(m->getOriginal(base+0x21f0b0))(this, p0, p1, p2);
    else return PlayerObject::collidedWithObject(p0, p1, p2);
}

template<class D, void*** V>
void $PlayerObject<D, V>::collidedWithSlope(float p0, GameObject* p1, bool p2) {
    if ((void($PlayerObject::*)(float, GameObject*, bool)){&$PlayerObject::collidedWithSlope} != (void(D::*)(float, GameObject*, bool)){&D::collidedWithSlope})
        return reinterpret_cast<void(*)(decltype(this), float, GameObject*, bool)>(m->getOriginal(base+0x21d8d0))(this, p0, p1, p2);
    else return PlayerObject::collidedWithSlope(p0, p1, p2);
}

template<class D, void*** V>
void $PlayerObject<D, V>::convertToClosestRotation(float p0) {
    if ((void($PlayerObject::*)(float)){&$PlayerObject::convertToClosestRotation} != (void(D::*)(float)){&D::convertToClosestRotation})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x21c860))(this, p0);
    else return PlayerObject::convertToClosestRotation(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::copyAttributes(PlayerObject* p0) {
    if ((void($PlayerObject::*)(PlayerObject*)){&$PlayerObject::copyAttributes} != (void(D::*)(PlayerObject*)){&D::copyAttributes})
        return reinterpret_cast<void(*)(decltype(this), PlayerObject*)>(m->getOriginal(base+0x22dc70))(this, p0);
    else return PlayerObject::copyAttributes(p0);
}

template<class D, void*** V>
PlayerObject* $PlayerObject<D, V>::create(int p0, int p1, cocos2d::CCLayer* p2) {
    if ((PlayerObject*(*)(int, int, cocos2d::CCLayer*)){&$PlayerObject::create} != (PlayerObject*(*)(int, int, cocos2d::CCLayer*)){&D::create})
        return reinterpret_cast<PlayerObject*(*)(int, int, cocos2d::CCLayer*)>(m->getOriginal(base+0x217260))(p0, p1, p2);
    else return PlayerObject::create(p0, p1, p2);
}

template<class D, void*** V>
void $PlayerObject<D, V>::deactivateParticle() {
    if ((void($PlayerObject::*)()){&$PlayerObject::deactivateParticle} != (void(D::*)()){&D::deactivateParticle})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x21a540))(this);
    else return PlayerObject::deactivateParticle();
}

template<class D, void*** V>
void $PlayerObject<D, V>::deactivateStreak(bool p0) {
    if ((void($PlayerObject::*)(bool)){&$PlayerObject::deactivateStreak} != (void(D::*)(bool)){&D::deactivateStreak})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x218b30))(this, p0);
    else return PlayerObject::deactivateStreak(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::fadeOutStreak2(float p0) {
    if ((void($PlayerObject::*)(float)){&$PlayerObject::fadeOutStreak2} != (void(D::*)(float)){&D::fadeOutStreak2})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x225890))(this, p0);
    else return PlayerObject::fadeOutStreak2(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::flashPlayer(float p0, float p1, cocos2d::_ccColor3B p2, cocos2d::_ccColor3B p3) {
    if ((void($PlayerObject::*)(float, float, cocos2d::_ccColor3B, cocos2d::_ccColor3B)){&$PlayerObject::flashPlayer} != (void(D::*)(float, float, cocos2d::_ccColor3B, cocos2d::_ccColor3B)){&D::flashPlayer})
        return reinterpret_cast<void(*)(decltype(this), float, float, cocos2d::_ccColor3B, cocos2d::_ccColor3B)>(m->getOriginal(base+0x221c80))(this, p0, p1, p2, p3);
    else return PlayerObject::flashPlayer(p0, p1, p2, p3);
}

template<class D, void*** V>
void $PlayerObject<D, V>::flipGravity(bool p0, bool p1) {
    if ((void($PlayerObject::*)(bool, bool)){&$PlayerObject::flipGravity} != (void(D::*)(bool, bool)){&D::flipGravity})
        return reinterpret_cast<void(*)(decltype(this), bool, bool)>(m->getOriginal(base+0x21c090))(this, p0, p1);
    else return PlayerObject::flipGravity(p0, p1);
}

template<class D, void*** V>
void $PlayerObject<D, V>::flipMod() {
    if ((void($PlayerObject::*)()){&$PlayerObject::flipMod} != (void(D::*)()){&D::flipMod})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x21a4c0))(this);
    else return PlayerObject::flipMod();
}

template<class D, void*** V>
void $PlayerObject<D, V>::getActiveMode() {
    if ((void($PlayerObject::*)()){&$PlayerObject::getActiveMode} != (void(D::*)()){&D::getActiveMode})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x22b950))(this);
    else return PlayerObject::getActiveMode();
}

template<class D, void*** V>
void $PlayerObject<D, V>::getModifiedSlopeYVel() {
    if ((void($PlayerObject::*)()){&$PlayerObject::getModifiedSlopeYVel} != (void(D::*)()){&D::getModifiedSlopeYVel})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x21bff0))(this);
    else return PlayerObject::getModifiedSlopeYVel();
}

template<class D, void*** V>
void $PlayerObject<D, V>::getOldPosition(float p0) {
    if ((void($PlayerObject::*)(float)){&$PlayerObject::getOldPosition} != (void(D::*)(float)){&D::getOldPosition})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x21a830))(this, p0);
    else return PlayerObject::getOldPosition(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::getOrientedBox() {
    if ((void($PlayerObject::*)()){&$PlayerObject::getOrientedBox} != (void(D::*)()){&D::getOrientedBox})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x22dee0))(this);
    else return PlayerObject::getOrientedBox();
}

template<class D, void*** V>
void $PlayerObject<D, V>::getRealPosition() {
    if ((void($PlayerObject::*)()){&$PlayerObject::getRealPosition} != (void(D::*)()){&D::getRealPosition})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x22d5f0))(this);
    else return PlayerObject::getRealPosition();
}

template<class D, void*** V>
void $PlayerObject<D, V>::getSecondColor() {
    if ((void($PlayerObject::*)()){&$PlayerObject::getSecondColor} != (void(D::*)()){&D::getSecondColor})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x22cee0))(this);
    else return PlayerObject::getSecondColor();
}

template<class D, void*** V>
void $PlayerObject<D, V>::gravityDown() {
    if ((void($PlayerObject::*)()){&$PlayerObject::gravityDown} != (void(D::*)()){&D::gravityDown})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x22e930))(this);
    else return PlayerObject::gravityDown();
}

template<class D, void*** V>
void $PlayerObject<D, V>::gravityUp() {
    if ((void($PlayerObject::*)()){&$PlayerObject::gravityUp} != (void(D::*)()){&D::gravityUp})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x22e900))(this);
    else return PlayerObject::gravityUp();
}

template<class D, void*** V>
void $PlayerObject<D, V>::hardFlipGravity() {
    if ((void($PlayerObject::*)()){&$PlayerObject::hardFlipGravity} != (void(D::*)()){&D::hardFlipGravity})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x22b860))(this);
    else return PlayerObject::hardFlipGravity();
}

template<class D, void*** V>
void $PlayerObject<D, V>::hitGround(bool p0) {
    if ((void($PlayerObject::*)(bool)){&$PlayerObject::hitGround} != (void(D::*)(bool)){&D::hitGround})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x220a30))(this, p0);
    else return PlayerObject::hitGround(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::incrementJumps() {
    if ((void($PlayerObject::*)()){&$PlayerObject::incrementJumps} != (void(D::*)()){&D::incrementJumps})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x21c050))(this);
    else return PlayerObject::incrementJumps();
}

template<class D, void*** V>
bool $PlayerObject<D, V>::init(int p0, int p1, cocos2d::CCLayer* p2) {
    if ((bool($PlayerObject::*)(int, int, cocos2d::CCLayer*)){&$PlayerObject::init} != (bool(D::*)(int, int, cocos2d::CCLayer*)){&D::init})
        return reinterpret_cast<bool(*)(decltype(this), int, int, cocos2d::CCLayer*)>(m->getOriginal(base+0x2172e0))(this, p0, p1, p2);
    else return PlayerObject::init(p0, p1, p2);
}

template<class D, void*** V>
void $PlayerObject<D, V>::isBoostValid(float p0) {
    if ((void($PlayerObject::*)(float)){&$PlayerObject::isBoostValid} != (void(D::*)(float)){&D::isBoostValid})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x21d650))(this, p0);
    else return PlayerObject::isBoostValid(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::isFlying() {
    if ((void($PlayerObject::*)()){&$PlayerObject::isFlying} != (void(D::*)()){&D::isFlying})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x21a4e0))(this);
    else return PlayerObject::isFlying();
}

template<class D, void*** V>
void $PlayerObject<D, V>::isSafeFlip(float p0) {
    if ((void($PlayerObject::*)(float)){&$PlayerObject::isSafeFlip} != (void(D::*)(float)){&D::isSafeFlip})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x2209f0))(this, p0);
    else return PlayerObject::isSafeFlip(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::isSafeMode(float p0) {
    if ((void($PlayerObject::*)(float)){&$PlayerObject::isSafeMode} != (void(D::*)(float)){&D::isSafeMode})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x2209b0))(this, p0);
    else return PlayerObject::isSafeMode(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::isSafeSpiderFlip(float p0) {
    if ((void($PlayerObject::*)(float)){&$PlayerObject::isSafeSpiderFlip} != (void(D::*)(float)){&D::isSafeSpiderFlip})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x221be0))(this, p0);
    else return PlayerObject::isSafeSpiderFlip(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::levelFlipFinished() {
    if ((void($PlayerObject::*)()){&$PlayerObject::levelFlipFinished} != (void(D::*)()){&D::levelFlipFinished})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x21b060))(this);
    else return PlayerObject::levelFlipFinished();
}

template<class D, void*** V>
void $PlayerObject<D, V>::levelFlipping() {
    if ((void($PlayerObject::*)()){&$PlayerObject::levelFlipping} != (void(D::*)()){&D::levelFlipping})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x21a510))(this);
    else return PlayerObject::levelFlipping();
}

template<class D, void*** V>
void $PlayerObject<D, V>::levelWillFlip() {
    if ((void($PlayerObject::*)()){&$PlayerObject::levelWillFlip} != (void(D::*)()){&D::levelWillFlip})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x21b020))(this);
    else return PlayerObject::levelWillFlip();
}

template<class D, void*** V>
void $PlayerObject<D, V>::loadFromCheckpoint(PlayerCheckpoint* p0) {
    if ((void($PlayerObject::*)(PlayerCheckpoint*)){&$PlayerObject::loadFromCheckpoint} != (void(D::*)(PlayerCheckpoint*)){&D::loadFromCheckpoint})
        return reinterpret_cast<void(*)(decltype(this), PlayerCheckpoint*)>(m->getOriginal(base+0x22e420))(this, p0);
    else return PlayerObject::loadFromCheckpoint(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::lockPlayer() {
    if ((void($PlayerObject::*)()){&$PlayerObject::lockPlayer} != (void(D::*)()){&D::lockPlayer})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x22d680))(this);
    else return PlayerObject::lockPlayer();
}

template<class D, void*** V>
void $PlayerObject<D, V>::logValues() {
    if ((void($PlayerObject::*)()){&$PlayerObject::logValues} != (void(D::*)()){&D::logValues})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x221220))(this);
    else return PlayerObject::logValues();
}

template<class D, void*** V>
void $PlayerObject<D, V>::modeDidChange() {
    if ((void($PlayerObject::*)()){&$PlayerObject::modeDidChange} != (void(D::*)()){&D::modeDidChange})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x22bfd0))(this);
    else return PlayerObject::modeDidChange();
}

template<class D, void*** V>
void $PlayerObject<D, V>::placeStreakPoint() {
    if ((void($PlayerObject::*)()){&$PlayerObject::placeStreakPoint} != (void(D::*)()){&D::placeStreakPoint})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x21af90))(this);
    else return PlayerObject::placeStreakPoint();
}

template<class D, void*** V>
void $PlayerObject<D, V>::playBurstEffect() {
    if ((void($PlayerObject::*)()){&$PlayerObject::playBurstEffect} != (void(D::*)()){&D::playBurstEffect})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x21c780))(this);
    else return PlayerObject::playBurstEffect();
}

template<class D, void*** V>
void $PlayerObject<D, V>::playDeathEffect() {
    if ((void($PlayerObject::*)()){&$PlayerObject::playDeathEffect} != (void(D::*)()){&D::playDeathEffect})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x225930))(this);
    else return PlayerObject::playDeathEffect();
}

template<class D, void*** V>
void $PlayerObject<D, V>::playDynamicSpiderRun() {
    if ((void($PlayerObject::*)()){&$PlayerObject::playDynamicSpiderRun} != (void(D::*)()){&D::playDynamicSpiderRun})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x222ec0))(this);
    else return PlayerObject::playDynamicSpiderRun();
}

template<class D, void*** V>
void $PlayerObject<D, V>::playerDestroyed(bool p0) {
    if ((void($PlayerObject::*)(bool)){&$PlayerObject::playerDestroyed} != (void(D::*)(bool)){&D::playerDestroyed})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x2256d0))(this, p0);
    else return PlayerObject::playerDestroyed(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::playerIsFalling() {
    if ((void($PlayerObject::*)()){&$PlayerObject::playerIsFalling} != (void(D::*)()){&D::playerIsFalling})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x21c730))(this);
    else return PlayerObject::playerIsFalling();
}

template<class D, void*** V>
void $PlayerObject<D, V>::playerTeleported() {
    if ((void($PlayerObject::*)()){&$PlayerObject::playerTeleported} != (void(D::*)()){&D::playerTeleported})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x22b840))(this);
    else return PlayerObject::playerTeleported();
}

template<class D, void*** V>
void $PlayerObject<D, V>::playingEndEffect() {
    if ((void($PlayerObject::*)()){&$PlayerObject::playingEndEffect} != (void(D::*)()){&D::playingEndEffect})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x22d7e0))(this);
    else return PlayerObject::playingEndEffect();
}

template<class D, void*** V>
void $PlayerObject<D, V>::postCollision(float p0) {
    if ((void($PlayerObject::*)(float)){&$PlayerObject::postCollision} != (void(D::*)(float)){&D::postCollision})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x21cd10))(this, p0);
    else return PlayerObject::postCollision(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::preCollision() {
    if ((void($PlayerObject::*)()){&$PlayerObject::preCollision} != (void(D::*)()){&D::preCollision})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x21ccc0))(this);
    else return PlayerObject::preCollision();
}

template<class D, void*** V>
void $PlayerObject<D, V>::preSlopeCollision(float p0, GameObject* p1) {
    if ((void($PlayerObject::*)(float, GameObject*)){&$PlayerObject::preSlopeCollision} != (void(D::*)(float, GameObject*)){&D::preSlopeCollision})
        return reinterpret_cast<void(*)(decltype(this), float, GameObject*)>(m->getOriginal(base+0x21ec80))(this, p0, p1);
    else return PlayerObject::preSlopeCollision(p0, p1);
}

template<class D, void*** V>
void $PlayerObject<D, V>::propellPlayer(float p0) {
    if ((void($PlayerObject::*)(float)){&$PlayerObject::propellPlayer} != (void(D::*)(float)){&D::propellPlayer})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x22d8e0))(this, p0);
    else return PlayerObject::propellPlayer(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::pushButton(PlayerButton p0) {
    if ((void($PlayerObject::*)(PlayerButton)){&$PlayerObject::pushButton} != (void(D::*)(PlayerButton)){&D::pushButton})
        return reinterpret_cast<void(*)(decltype(this), PlayerButton)>(m->getOriginal(base+0x22aa00))(this, p0);
    else return PlayerObject::pushButton(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::pushDown() {
    if ((void($PlayerObject::*)()){&$PlayerObject::pushDown} != (void(D::*)()){&D::pushDown})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x22dbd0))(this);
    else return PlayerObject::pushDown();
}

template<class D, void*** V>
void $PlayerObject<D, V>::pushPlayer(float p0) {
    if ((void($PlayerObject::*)(float)){&$PlayerObject::pushPlayer} != (void(D::*)(float)){&D::pushPlayer})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x22dbb0))(this, p0);
    else return PlayerObject::pushPlayer(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::releaseButton(PlayerButton p0) {
    if ((void($PlayerObject::*)(PlayerButton)){&$PlayerObject::releaseButton} != (void(D::*)(PlayerButton)){&D::releaseButton})
        return reinterpret_cast<void(*)(decltype(this), PlayerButton)>(m->getOriginal(base+0x22b6f0))(this, p0);
    else return PlayerObject::releaseButton(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::removeAllParticles() {
    if ((void($PlayerObject::*)()){&$PlayerObject::removeAllParticles} != (void(D::*)()){&D::removeAllParticles})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x218ac0))(this);
    else return PlayerObject::removeAllParticles();
}

template<class D, void*** V>
void $PlayerObject<D, V>::removePendingCheckpoint() {
    if ((void($PlayerObject::*)()){&$PlayerObject::removePendingCheckpoint} != (void(D::*)()){&D::removePendingCheckpoint})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x2237b0))(this);
    else return PlayerObject::removePendingCheckpoint();
}

template<class D, void*** V>
void $PlayerObject<D, V>::resetAllParticles() {
    if ((void($PlayerObject::*)()){&$PlayerObject::resetAllParticles} != (void(D::*)()){&D::resetAllParticles})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x21adb0))(this);
    else return PlayerObject::resetAllParticles();
}

template<class D, void*** V>
void $PlayerObject<D, V>::resetCollisionLog() {
    if ((void($PlayerObject::*)()){&$PlayerObject::resetCollisionLog} != (void(D::*)()){&D::resetCollisionLog})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x21cc20))(this);
    else return PlayerObject::resetCollisionLog();
}

template<class D, void*** V>
void $PlayerObject<D, V>::resetObject() {
    if ((void($PlayerObject::*)()){&$PlayerObject::resetObject} != (void(D::*)()){&D::resetObject})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x223170))(this);
    else return PlayerObject::resetObject();
}

template<class D, void*** V>
void $PlayerObject<D, V>::resetPlayerIcon() {
    if ((void($PlayerObject::*)()){&$PlayerObject::resetPlayerIcon} != (void(D::*)()){&D::resetPlayerIcon})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x22be00))(this);
    else return PlayerObject::resetPlayerIcon();
}

template<class D, void*** V>
void $PlayerObject<D, V>::resetStateVariables() {
    if ((void($PlayerObject::*)()){&$PlayerObject::resetStateVariables} != (void(D::*)()){&D::resetStateVariables})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x223760))(this);
    else return PlayerObject::resetStateVariables();
}

template<class D, void*** V>
void $PlayerObject<D, V>::resetStreak() {
    if ((void($PlayerObject::*)()){&$PlayerObject::resetStreak} != (void(D::*)()){&D::resetStreak})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x21ae10))(this);
    else return PlayerObject::resetStreak();
}

template<class D, void*** V>
void $PlayerObject<D, V>::ringJump(GameObject* p0) {
    if ((void($PlayerObject::*)(GameObject*)){&$PlayerObject::ringJump} != (void(D::*)(GameObject*)){&D::ringJump})
        return reinterpret_cast<void(*)(decltype(this), GameObject*)>(m->getOriginal(base+0x22abf0))(this, p0);
    else return PlayerObject::ringJump(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::runBallRotation(float p0) {
    if ((void($PlayerObject::*)(float)){&$PlayerObject::runBallRotation} != (void(D::*)(float)){&D::runBallRotation})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x21ca10))(this, p0);
    else return PlayerObject::runBallRotation(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::runBallRotation2() {
    if ((void($PlayerObject::*)()){&$PlayerObject::runBallRotation2} != (void(D::*)()){&D::runBallRotation2})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x21cb10))(this);
    else return PlayerObject::runBallRotation2();
}

template<class D, void*** V>
void $PlayerObject<D, V>::runNormalRotation() {
    if ((void($PlayerObject::*)()){&$PlayerObject::runNormalRotation} != (void(D::*)()){&D::runNormalRotation})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x21c960))(this);
    else return PlayerObject::runNormalRotation();
}

template<class D, void*** V>
void $PlayerObject<D, V>::runRotateAction(bool p0) {
    if ((void($PlayerObject::*)(bool)){&$PlayerObject::runRotateAction} != (void(D::*)(bool)){&D::runRotateAction})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x21c570))(this, p0);
    else return PlayerObject::runRotateAction(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::saveToCheckpoint(PlayerCheckpoint* p0) {
    if ((void($PlayerObject::*)(PlayerCheckpoint*)){&$PlayerObject::saveToCheckpoint} != (void(D::*)(PlayerCheckpoint*)){&D::saveToCheckpoint})
        return reinterpret_cast<void(*)(decltype(this), PlayerCheckpoint*)>(m->getOriginal(base+0x22e2f0))(this, p0);
    else return PlayerObject::saveToCheckpoint(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::setColor(cocos2d::_ccColor3B const& p0) {
    if ((void($PlayerObject::*)(cocos2d::_ccColor3B const&)){&$PlayerObject::setColor} != (void(D::*)(cocos2d::_ccColor3B const&)){&D::setColor})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::_ccColor3B const&)>(m->getOriginal(base+0x22cdf0))(this, p0);
    else return PlayerObject::setColor(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::setFlipX(bool p0) {
    if ((void($PlayerObject::*)(bool)){&$PlayerObject::setFlipX} != (void(D::*)(bool)){&D::setFlipX})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x22e720))(this, p0);
    else return PlayerObject::setFlipX(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::setFlipY(bool p0) {
    if ((void($PlayerObject::*)(bool)){&$PlayerObject::setFlipY} != (void(D::*)(bool)){&D::setFlipY})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x22e7b0))(this, p0);
    else return PlayerObject::setFlipY(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::setOpacity(unsigned char p0) {
    if ((void($PlayerObject::*)(unsigned char)){&$PlayerObject::setOpacity} != (void(D::*)(unsigned char)){&D::setOpacity})
        return reinterpret_cast<void(*)(decltype(this), unsigned char)>(m->getOriginal(base+0x22d400))(this, p0);
    else return PlayerObject::setOpacity(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::setPosition(cocos2d::CCPoint const& p0) {
    if ((void($PlayerObject::*)(cocos2d::CCPoint const&)){&$PlayerObject::setPosition} != (void(D::*)(cocos2d::CCPoint const&)){&D::setPosition})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCPoint const&)>(m->getOriginal(base+0x22c8b0))(this, p0);
    else return PlayerObject::setPosition(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::setRotation(float p0) {
    if ((void($PlayerObject::*)(float)){&$PlayerObject::setRotation} != (void(D::*)(float)){&D::setRotation})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x22e6e0))(this, p0);
    else return PlayerObject::setRotation(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::setScale(float p0) {
    if ((void($PlayerObject::*)(float)){&$PlayerObject::setScale} != (void(D::*)(float)){&D::setScale})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x22e870))(this, p0);
    else return PlayerObject::setScale(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::setScaleX(float p0) {
    if ((void($PlayerObject::*)(float)){&$PlayerObject::setScaleX} != (void(D::*)(float)){&D::setScaleX})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x22e7f0))(this, p0);
    else return PlayerObject::setScaleX(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::setScaleY(float p0) {
    if ((void($PlayerObject::*)(float)){&$PlayerObject::setScaleY} != (void(D::*)(float)){&D::setScaleY})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x22e830))(this, p0);
    else return PlayerObject::setScaleY(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::setSecondColor(cocos2d::_ccColor3B const& p0) {
    if ((void($PlayerObject::*)(cocos2d::_ccColor3B const&)){&$PlayerObject::setSecondColor} != (void(D::*)(cocos2d::_ccColor3B const&)){&D::setSecondColor})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::_ccColor3B const&)>(m->getOriginal(base+0x219610))(this, p0);
    else return PlayerObject::setSecondColor(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::setVisible(bool p0) {
    if ((void($PlayerObject::*)(bool)){&$PlayerObject::setVisible} != (void(D::*)(bool)){&D::setVisible})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x22e8b0))(this, p0);
    else return PlayerObject::setVisible(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::setupStreak() {
    if ((void($PlayerObject::*)()){&$PlayerObject::setupStreak} != (void(D::*)()){&D::setupStreak})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x218720))(this);
    else return PlayerObject::setupStreak();
}

template<class D, void*** V>
void $PlayerObject<D, V>::spawnCircle() {
    if ((void($PlayerObject::*)()){&$PlayerObject::spawnCircle} != (void(D::*)()){&D::spawnCircle})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x225480))(this);
    else return PlayerObject::spawnCircle();
}

template<class D, void*** V>
void $PlayerObject<D, V>::spawnCircle2() {
    if ((void($PlayerObject::*)()){&$PlayerObject::spawnCircle2} != (void(D::*)()){&D::spawnCircle2})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x2252a0))(this);
    else return PlayerObject::spawnCircle2();
}

template<class D, void*** V>
void $PlayerObject<D, V>::spawnDualCircle() {
    if ((void($PlayerObject::*)()){&$PlayerObject::spawnDualCircle} != (void(D::*)()){&D::spawnDualCircle})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x2255c0))(this);
    else return PlayerObject::spawnDualCircle();
}

template<class D, void*** V>
void $PlayerObject<D, V>::spawnFromPlayer(PlayerObject* p0) {
    if ((void($PlayerObject::*)(PlayerObject*)){&$PlayerObject::spawnFromPlayer} != (void(D::*)(PlayerObject*)){&D::spawnFromPlayer})
        return reinterpret_cast<void(*)(decltype(this), PlayerObject*)>(m->getOriginal(base+0x22dde0))(this, p0);
    else return PlayerObject::spawnFromPlayer(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::spawnPortalCircle(cocos2d::_ccColor3B p0, float p1) {
    if ((void($PlayerObject::*)(cocos2d::_ccColor3B, float)){&$PlayerObject::spawnPortalCircle} != (void(D::*)(cocos2d::_ccColor3B, float)){&D::spawnPortalCircle})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::_ccColor3B, float)>(m->getOriginal(base+0x225350))(this, p0, p1);
    else return PlayerObject::spawnPortalCircle(p0, p1);
}

template<class D, void*** V>
void $PlayerObject<D, V>::spawnScaleCircle() {
    if ((void($PlayerObject::*)()){&$PlayerObject::spawnScaleCircle} != (void(D::*)()){&D::spawnScaleCircle})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x2251b0))(this);
    else return PlayerObject::spawnScaleCircle();
}

template<class D, void*** V>
void $PlayerObject<D, V>::specialGroundHit() {
    if ((void($PlayerObject::*)()){&$PlayerObject::specialGroundHit} != (void(D::*)()){&D::specialGroundHit})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x22dbf0))(this);
    else return PlayerObject::specialGroundHit();
}

template<class D, void*** V>
void $PlayerObject<D, V>::speedDown() {
    if ((void($PlayerObject::*)()){&$PlayerObject::speedDown} != (void(D::*)()){&D::speedDown})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x22e970))(this);
    else return PlayerObject::speedDown();
}

template<class D, void*** V>
void $PlayerObject<D, V>::speedUp() {
    if ((void($PlayerObject::*)()){&$PlayerObject::speedUp} != (void(D::*)()){&D::speedUp})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x22e950))(this);
    else return PlayerObject::speedUp();
}

template<class D, void*** V>
void $PlayerObject<D, V>::spiderTestJump(bool p0) {
    if ((void($PlayerObject::*)(bool)){&$PlayerObject::spiderTestJump} != (void(D::*)(bool)){&D::spiderTestJump})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x21b160))(this, p0);
    else return PlayerObject::spiderTestJump(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::startDashing(GameObject* p0) {
    if ((void($PlayerObject::*)(GameObject*)){&$PlayerObject::startDashing} != (void(D::*)(GameObject*)){&D::startDashing})
        return reinterpret_cast<void(*)(decltype(this), GameObject*)>(m->getOriginal(base+0x221d70))(this, p0);
    else return PlayerObject::startDashing(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::stopBurstEffect() {
    if ((void($PlayerObject::*)()){&$PlayerObject::stopBurstEffect} != (void(D::*)()){&D::stopBurstEffect})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x22c680))(this);
    else return PlayerObject::stopBurstEffect();
}

template<class D, void*** V>
void $PlayerObject<D, V>::stopDashing() {
    if ((void($PlayerObject::*)()){&$PlayerObject::stopDashing} != (void(D::*)()){&D::stopDashing})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x222990))(this);
    else return PlayerObject::stopDashing();
}

template<class D, void*** V>
void $PlayerObject<D, V>::stopRotation(bool p0) {
    if ((void($PlayerObject::*)(bool)){&$PlayerObject::stopRotation} != (void(D::*)(bool)){&D::stopRotation})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x21c830))(this, p0);
    else return PlayerObject::stopRotation(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::storeCollision(bool p0, int p1) {
    if ((void($PlayerObject::*)(bool, int)){&$PlayerObject::storeCollision} != (void(D::*)(bool, int)){&D::storeCollision})
        return reinterpret_cast<void(*)(decltype(this), bool, int)>(m->getOriginal(base+0x21cc60))(this, p0, p1);
    else return PlayerObject::storeCollision(p0, p1);
}

template<class D, void*** V>
void $PlayerObject<D, V>::switchedToMode(GameObjectType p0) {
    if ((void($PlayerObject::*)(GameObjectType)){&$PlayerObject::switchedToMode} != (void(D::*)(GameObjectType)){&D::switchedToMode})
        return reinterpret_cast<void(*)(decltype(this), GameObjectType)>(m->getOriginal(base+0x22b9a0))(this, p0);
    else return PlayerObject::switchedToMode(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::testForMoving(float p0, GameObject* p1) {
    if ((void($PlayerObject::*)(float, GameObject*)){&$PlayerObject::testForMoving} != (void(D::*)(float, GameObject*)){&D::testForMoving})
        return reinterpret_cast<void(*)(decltype(this), float, GameObject*)>(m->getOriginal(base+0x21eb70))(this, p0, p1);
    else return PlayerObject::testForMoving(p0, p1);
}

template<class D, void*** V>
void $PlayerObject<D, V>::toggleBirdMode(bool p0) {
    if ((void($PlayerObject::*)(bool)){&$PlayerObject::toggleBirdMode} != (void(D::*)(bool)){&D::toggleBirdMode})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x224070))(this, p0);
    else return PlayerObject::toggleBirdMode(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::toggleDartMode(bool p0) {
    if ((void($PlayerObject::*)(bool)){&$PlayerObject::toggleDartMode} != (void(D::*)(bool)){&D::toggleDartMode})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x2243f0))(this, p0);
    else return PlayerObject::toggleDartMode(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::toggleFlyMode(bool p0) {
    if ((void($PlayerObject::*)(bool)){&$PlayerObject::toggleFlyMode} != (void(D::*)(bool)){&D::toggleFlyMode})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x223820))(this, p0);
    else return PlayerObject::toggleFlyMode(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::toggleGhostEffect(GhostType p0) {
    if ((void($PlayerObject::*)(GhostType)){&$PlayerObject::toggleGhostEffect} != (void(D::*)(GhostType)){&D::toggleGhostEffect})
        return reinterpret_cast<void(*)(decltype(this), GhostType)>(m->getOriginal(base+0x225000))(this, p0);
    else return PlayerObject::toggleGhostEffect(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::togglePlayerScale(bool p0) {
    if ((void($PlayerObject::*)(bool)){&$PlayerObject::togglePlayerScale} != (void(D::*)(bool)){&D::togglePlayerScale})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x224bd0))(this, p0);
    else return PlayerObject::togglePlayerScale(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::toggleRobotMode(bool p0) {
    if ((void($PlayerObject::*)(bool)){&$PlayerObject::toggleRobotMode} != (void(D::*)(bool)){&D::toggleRobotMode})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x223c70))(this, p0);
    else return PlayerObject::toggleRobotMode(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::toggleRollMode(bool p0) {
    if ((void($PlayerObject::*)(bool)){&$PlayerObject::toggleRollMode} != (void(D::*)(bool)){&D::toggleRollMode})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x223b20))(this, p0);
    else return PlayerObject::toggleRollMode(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::toggleSpiderMode(bool p0) {
    if ((void($PlayerObject::*)(bool)){&$PlayerObject::toggleSpiderMode} != (void(D::*)(bool)){&D::toggleSpiderMode})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x224830))(this, p0);
    else return PlayerObject::toggleSpiderMode(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::toggleVisibility(bool p0) {
    if ((void($PlayerObject::*)(bool)){&$PlayerObject::toggleVisibility} != (void(D::*)(bool)){&D::toggleVisibility})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x21abf0))(this, p0);
    else return PlayerObject::toggleVisibility(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::touchedObject(GameObject* p0) {
    if ((void($PlayerObject::*)(GameObject*)){&$PlayerObject::touchedObject} != (void(D::*)(GameObject*)){&D::touchedObject})
        return reinterpret_cast<void(*)(decltype(this), GameObject*)>(m->getOriginal(base+0x22e660))(this, p0);
    else return PlayerObject::touchedObject(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::tryPlaceCheckpoint() {
    if ((void($PlayerObject::*)()){&$PlayerObject::tryPlaceCheckpoint} != (void(D::*)()){&D::tryPlaceCheckpoint})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x21a950))(this);
    else return PlayerObject::tryPlaceCheckpoint();
}

template<class D, void*** V>
void $PlayerObject<D, V>::update(float p0) {
    if ((void($PlayerObject::*)(float)){&$PlayerObject::update} != (void(D::*)(float)){&D::update})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x218bf0))(this, p0);
    else return PlayerObject::update(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::updateCheckpointMode(bool p0) {
    if ((void($PlayerObject::*)(bool)){&$PlayerObject::updateCheckpointMode} != (void(D::*)(bool)){&D::updateCheckpointMode})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x218980))(this, p0);
    else return PlayerObject::updateCheckpointMode(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::updateCheckpointTest() {
    if ((void($PlayerObject::*)()){&$PlayerObject::updateCheckpointTest} != (void(D::*)()){&D::updateCheckpointTest})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x21a890))(this);
    else return PlayerObject::updateCheckpointTest();
}

template<class D, void*** V>
void $PlayerObject<D, V>::updateCollide(bool p0, int p1) {
    if ((void($PlayerObject::*)(bool, int)){&$PlayerObject::updateCollide} != (void(D::*)(bool, int)){&D::updateCollide})
        return reinterpret_cast<void(*)(decltype(this), bool, int)>(m->getOriginal(base+0x220f10))(this, p0, p1);
    else return PlayerObject::updateCollide(p0, p1);
}

template<class D, void*** V>
void $PlayerObject<D, V>::updateCollideBottom(float p0, int p1) {
    if ((void($PlayerObject::*)(float, int)){&$PlayerObject::updateCollideBottom} != (void(D::*)(float, int)){&D::updateCollideBottom})
        return reinterpret_cast<void(*)(decltype(this), float, int)>(m->getOriginal(base+0x221790))(this, p0, p1);
    else return PlayerObject::updateCollideBottom(p0, p1);
}

template<class D, void*** V>
void $PlayerObject<D, V>::updateCollideTop(float p0, int p1) {
    if ((void($PlayerObject::*)(float, int)){&$PlayerObject::updateCollideTop} != (void(D::*)(float, int)){&D::updateCollideTop})
        return reinterpret_cast<void(*)(decltype(this), float, int)>(m->getOriginal(base+0x221c20))(this, p0, p1);
    else return PlayerObject::updateCollideTop(p0, p1);
}

template<class D, void*** V>
void $PlayerObject<D, V>::updateDashAnimation() {
    if ((void($PlayerObject::*)()){&$PlayerObject::updateDashAnimation} != (void(D::*)()){&D::updateDashAnimation})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x21a570))(this);
    else return PlayerObject::updateDashAnimation();
}

template<class D, void*** V>
void $PlayerObject<D, V>::updateDashArt() {
    if ((void($PlayerObject::*)()){&$PlayerObject::updateDashArt} != (void(D::*)()){&D::updateDashArt})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x222520))(this);
    else return PlayerObject::updateDashArt();
}

template<class D, void*** V>
void $PlayerObject<D, V>::updateGlowColor() {
    if ((void($PlayerObject::*)()){&$PlayerObject::updateGlowColor} != (void(D::*)()){&D::updateGlowColor})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x22cf10))(this);
    else return PlayerObject::updateGlowColor();
}

template<class D, void*** V>
void $PlayerObject<D, V>::updateJump(float p0) {
    if ((void($PlayerObject::*)(float)){&$PlayerObject::updateJump} != (void(D::*)(float)){&D::updateJump})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x219680))(this, p0);
    else return PlayerObject::updateJump(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::updateJumpVariables() {
    if ((void($PlayerObject::*)()){&$PlayerObject::updateJumpVariables} != (void(D::*)()){&D::updateJumpVariables})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x21a740))(this);
    else return PlayerObject::updateJumpVariables();
}

template<class D, void*** V>
void $PlayerObject<D, V>::updatePlayerBirdFrame(int p0) {
    if ((void($PlayerObject::*)(int)){&$PlayerObject::updatePlayerBirdFrame} != (void(D::*)(int)){&D::updatePlayerBirdFrame})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x22bfe0))(this, p0);
    else return PlayerObject::updatePlayerBirdFrame(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::updatePlayerDartFrame(int p0) {
    if ((void($PlayerObject::*)(int)){&$PlayerObject::updatePlayerDartFrame} != (void(D::*)(int)){&D::updatePlayerDartFrame})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x22c260))(this, p0);
    else return PlayerObject::updatePlayerDartFrame(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::updatePlayerFrame(int p0) {
    if ((void($PlayerObject::*)(int)){&$PlayerObject::updatePlayerFrame} != (void(D::*)(int)){&D::updatePlayerFrame})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x22c470))(this, p0);
    else return PlayerObject::updatePlayerFrame(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::updatePlayerGlow() {
    if ((void($PlayerObject::*)()){&$PlayerObject::updatePlayerGlow} != (void(D::*)()){&D::updatePlayerGlow})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x22bc50))(this);
    else return PlayerObject::updatePlayerGlow();
}

template<class D, void*** V>
void $PlayerObject<D, V>::updatePlayerRobotFrame(int p0) {
    if ((void($PlayerObject::*)(int)){&$PlayerObject::updatePlayerRobotFrame} != (void(D::*)(int)){&D::updatePlayerRobotFrame})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x22d620))(this, p0);
    else return PlayerObject::updatePlayerRobotFrame(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::updatePlayerRollFrame(int p0) {
    if ((void($PlayerObject::*)(int)){&$PlayerObject::updatePlayerRollFrame} != (void(D::*)(int)){&D::updatePlayerRollFrame})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x22c6a0))(this, p0);
    else return PlayerObject::updatePlayerRollFrame(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::updatePlayerScale() {
    if ((void($PlayerObject::*)()){&$PlayerObject::updatePlayerScale} != (void(D::*)()){&D::updatePlayerScale})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x22b8b0))(this);
    else return PlayerObject::updatePlayerScale();
}

template<class D, void*** V>
void $PlayerObject<D, V>::updatePlayerShipFrame(int p0) {
    if ((void($PlayerObject::*)(int)){&$PlayerObject::updatePlayerShipFrame} != (void(D::*)(int)){&D::updatePlayerShipFrame})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x22ba40))(this, p0);
    else return PlayerObject::updatePlayerShipFrame(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::updatePlayerSpiderFrame(int p0) {
    if ((void($PlayerObject::*)(int)){&$PlayerObject::updatePlayerSpiderFrame} != (void(D::*)(int)){&D::updatePlayerSpiderFrame})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x22d650))(this, p0);
    else return PlayerObject::updatePlayerSpiderFrame(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::updatePlayerSpriteExtra(std::string p0) {
    if ((void($PlayerObject::*)(std::string)){&$PlayerObject::updatePlayerSpriteExtra} != (void(D::*)(std::string)){&D::updatePlayerSpriteExtra})
        return reinterpret_cast<void(*)(decltype(this), std::string)>(m->getOriginal(base+0x218440))(this, p0);
    else return PlayerObject::updatePlayerSpriteExtra(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::updateRobotAnimationSpeed() {
    if ((void($PlayerObject::*)()){&$PlayerObject::updateRobotAnimationSpeed} != (void(D::*)()){&D::updateRobotAnimationSpeed})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x22df40))(this);
    else return PlayerObject::updateRobotAnimationSpeed();
}

template<class D, void*** V>
void $PlayerObject<D, V>::updateRotation(float p0) {
    if ((void($PlayerObject::*)(float)){&$PlayerObject::updateRotation} != (void(D::*)(float)){&D::updateRotation})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x2214b0))(this, p0);
    else return PlayerObject::updateRotation(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::updateRotation(float p0, float p1) {
    if ((void($PlayerObject::*)(float, float)){&$PlayerObject::updateRotation} != (void(D::*)(float, float)){&D::updateRotation})
        return reinterpret_cast<void(*)(decltype(this), float, float)>(m->getOriginal(base+0x221230))(this, p0, p1);
    else return PlayerObject::updateRotation(p0, p1);
}

template<class D, void*** V>
void $PlayerObject<D, V>::updateShipRotation(float p0) {
    if ((void($PlayerObject::*)(float)){&$PlayerObject::updateShipRotation} != (void(D::*)(float)){&D::updateShipRotation})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x221310))(this, p0);
    else return PlayerObject::updateShipRotation(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::updateShipSpriteExtra(std::string p0) {
    if ((void($PlayerObject::*)(std::string)){&$PlayerObject::updateShipSpriteExtra} != (void(D::*)(std::string)){&D::updateShipSpriteExtra})
        return reinterpret_cast<void(*)(decltype(this), std::string)>(m->getOriginal(base+0x218510))(this, p0);
    else return PlayerObject::updateShipSpriteExtra(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::updateSlopeRotation(float p0) {
    if ((void($PlayerObject::*)(float)){&$PlayerObject::updateSlopeRotation} != (void(D::*)(float)){&D::updateSlopeRotation})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x221030))(this, p0);
    else return PlayerObject::updateSlopeRotation(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::updateSlopeYVelocity(float p0) {
    if ((void($PlayerObject::*)(float)){&$PlayerObject::updateSlopeYVelocity} != (void(D::*)(float)){&D::updateSlopeYVelocity})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x22e920))(this, p0);
    else return PlayerObject::updateSlopeYVelocity(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::updateSpecial(float p0) {
    if ((void($PlayerObject::*)(float)){&$PlayerObject::updateSpecial} != (void(D::*)(float)){&D::updateSpecial})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x21a790))(this, p0);
    else return PlayerObject::updateSpecial(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::updateStateVariables() {
    if ((void($PlayerObject::*)()){&$PlayerObject::updateStateVariables} != (void(D::*)()){&D::updateStateVariables})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x21a770))(this);
    else return PlayerObject::updateStateVariables();
}

template<class D, void*** V>
void $PlayerObject<D, V>::updateTimeMod(float p0) {
    if ((void($PlayerObject::*)(float)){&$PlayerObject::updateTimeMod} != (void(D::*)(float)){&D::updateTimeMod})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x2185e0))(this, p0);
    else return PlayerObject::updateTimeMod(p0);
}

template<class D, void*** V>
void $PlayerObject<D, V>::usingWallLimitedMode() {
    if ((void($PlayerObject::*)()){&$PlayerObject::usingWallLimitedMode} != (void(D::*)()){&D::usingWallLimitedMode})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x22df00))(this);
    else return PlayerObject::usingWallLimitedMode();
}

template<class D, void*** V>
void $PlayerObject<D, V>::yStartDown() {
    if ((void($PlayerObject::*)()){&$PlayerObject::yStartDown} != (void(D::*)()){&D::yStartDown})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x22e9b0))(this);
    else return PlayerObject::yStartDown();
}

template<class D, void*** V>
void $PlayerObject<D, V>::yStartUp() {
    if ((void($PlayerObject::*)()){&$PlayerObject::yStartUp} != (void(D::*)()){&D::yStartUp})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x22e990))(this);
    else return PlayerObject::yStartUp();
}


template<class D, void*** V>
$PulseEffectAction<D, V>::~$PulseEffectAction() {}

template<class D, void*** V>
$PulseEffectAction<D, V>::$PulseEffectAction() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((PulseEffectAction*(*)(std::string)){&$PulseEffectAction::createFromString} != (PulseEffectAction*(*)(std::string)){&D::createFromString})
        m->registerHook(base+0x179e90, (PulseEffectAction*(*)(std::string)){&D::createFromString});

    if ((void($PulseEffectAction::*)()){&$PulseEffectAction::getSaveString} != (void(D::*)()){&D::getSaveString})
        m->registerHook(base+0x17a850, extract((void(D::*)()){&D::getSaveString}));
}

template<class D, void*** V>
PulseEffectAction* $PulseEffectAction<D, V>::createFromString(std::string p0) {
    if ((PulseEffectAction*(*)(std::string)){&$PulseEffectAction::createFromString} != (PulseEffectAction*(*)(std::string)){&D::createFromString})
        return reinterpret_cast<PulseEffectAction*(*)(std::string)>(m->getOriginal(base+0x179e90))(p0);
    else return PulseEffectAction::createFromString(p0);
}

template<class D, void*** V>
void $PulseEffectAction<D, V>::getSaveString() {
    if ((void($PulseEffectAction::*)()){&$PulseEffectAction::getSaveString} != (void(D::*)()){&D::getSaveString})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x17a850))(this);
    else return PulseEffectAction::getSaveString();
}


template<class D, void*** V>
$RetryLevelLayer<D, V>::~$RetryLevelLayer() {}

template<class D, void*** V>
$RetryLevelLayer<D, V>::$RetryLevelLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((RetryLevelLayer*(*)()){&$RetryLevelLayer::create} != (RetryLevelLayer*(*)()){&D::create})
        m->registerHook(base+0x28dd60, (RetryLevelLayer*(*)()){&D::create});
}

template<class D, void*** V>
RetryLevelLayer* $RetryLevelLayer<D, V>::create() {
    if ((RetryLevelLayer*(*)()){&$RetryLevelLayer::create} != (RetryLevelLayer*(*)()){&D::create})
        return reinterpret_cast<RetryLevelLayer*(*)()>(m->getOriginal(base+0x28dd60))();
    else return RetryLevelLayer::create();
}


template<class D, void*** V>
$SetGroupIDLayer<D, V>::~$SetGroupIDLayer() {}

template<class D, void*** V>
$SetGroupIDLayer<D, V>::$SetGroupIDLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($SetGroupIDLayer::*)(cocos2d::CCObject*)){&$SetGroupIDLayer::onNextGroupID1} != (void(D::*)(cocos2d::CCObject*)){&D::onNextGroupID1})
        m->registerHook(base+0x1967a0, extract((void(D::*)(cocos2d::CCObject*)){&D::onNextGroupID1}));

    if ((void($SetGroupIDLayer::*)(CCTextInputNode*)){&$SetGroupIDLayer::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        m->registerHook(base+0x197af0, extract((void(D::*)(CCTextInputNode*)){&D::textChanged}));

    if ((void($SetGroupIDLayer::*)()){&$SetGroupIDLayer::updateGroupIDLabel} != (void(D::*)()){&D::updateGroupIDLabel})
        m->registerHook(base+0x197260, extract((void(D::*)()){&D::updateGroupIDLabel}));
}

template<class D, void*** V>
void $SetGroupIDLayer<D, V>::onNextGroupID1(cocos2d::CCObject* p0) {
    if ((void($SetGroupIDLayer::*)(cocos2d::CCObject*)){&$SetGroupIDLayer::onNextGroupID1} != (void(D::*)(cocos2d::CCObject*)){&D::onNextGroupID1})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x1967a0))(this, p0);
    else return SetGroupIDLayer::onNextGroupID1(p0);
}

template<class D, void*** V>
void $SetGroupIDLayer<D, V>::textChanged(CCTextInputNode* p0) {
    if ((void($SetGroupIDLayer::*)(CCTextInputNode*)){&$SetGroupIDLayer::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        return reinterpret_cast<void(*)(decltype(this), CCTextInputNode*)>(m->getOriginal(base+0x197af0))(this, p0);
    else return SetGroupIDLayer::textChanged(p0);
}

template<class D, void*** V>
void $SetGroupIDLayer<D, V>::updateGroupIDLabel() {
    if ((void($SetGroupIDLayer::*)()){&$SetGroupIDLayer::updateGroupIDLabel} != (void(D::*)()){&D::updateGroupIDLabel})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x197260))(this);
    else return SetGroupIDLayer::updateGroupIDLabel();
}


template<class D, void*** V>
$SetIDLayer<D, V>::~$SetIDLayer() {}

template<class D, void*** V>
$SetIDLayer<D, V>::$SetIDLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((SetIDLayer*(*)(GameObject*)){&$SetIDLayer::create} != (SetIDLayer*(*)(GameObject*)){&D::create})
        m->registerHook(base+0x168f20, (SetIDLayer*(*)(GameObject*)){&D::create});
}

template<class D, void*** V>
SetIDLayer* $SetIDLayer<D, V>::create(GameObject* p0) {
    if ((SetIDLayer*(*)(GameObject*)){&$SetIDLayer::create} != (SetIDLayer*(*)(GameObject*)){&D::create})
        return reinterpret_cast<SetIDLayer*(*)(GameObject*)>(m->getOriginal(base+0x168f20))(p0);
    else return SetIDLayer::create(p0);
}


template<class D, void*** V>
$SetIDPopup<D, V>::~$SetIDPopup() {}

template<class D, void*** V>
$SetIDPopup<D, V>::$SetIDPopup() {
    m->registerHook(extract_destructor(V), +[](){});
}


template<class D, void*** V>
$SetItemIDLayer<D, V>::~$SetItemIDLayer() {}

template<class D, void*** V>
$SetItemIDLayer<D, V>::$SetItemIDLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((SetItemIDLayer*(*)(EffectGameObject*, cocos2d::CCArray*)){&$SetItemIDLayer::create} != (SetItemIDLayer*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        m->registerHook(base+0x5a830, (SetItemIDLayer*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create});
}

template<class D, void*** V>
SetItemIDLayer* $SetItemIDLayer<D, V>::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    if ((SetItemIDLayer*(*)(EffectGameObject*, cocos2d::CCArray*)){&$SetItemIDLayer::create} != (SetItemIDLayer*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        return reinterpret_cast<SetItemIDLayer*(*)(EffectGameObject*, cocos2d::CCArray*)>(m->getOriginal(base+0x5a830))(p0, p1);
    else return SetItemIDLayer::create(p0, p1);
}


template<class D, void*** V>
$SetTargetIDLayer<D, V>::~$SetTargetIDLayer() {}

template<class D, void*** V>
$SetTargetIDLayer<D, V>::$SetTargetIDLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((SetTargetIDLayer*(*)(EffectGameObject*, cocos2d::CCArray*, std::string)){&$SetTargetIDLayer::create} != (SetTargetIDLayer*(*)(EffectGameObject*, cocos2d::CCArray*, std::string)){&D::create})
        m->registerHook(base+0x159d20, (SetTargetIDLayer*(*)(EffectGameObject*, cocos2d::CCArray*, std::string)){&D::create});

    if ((void($SetTargetIDLayer::*)(cocos2d::CCObject*)){&$SetTargetIDLayer::onTargetIDArrow} != (void(D::*)(cocos2d::CCObject*)){&D::onTargetIDArrow})
        m->registerHook(base+0x15aed0, extract((void(D::*)(cocos2d::CCObject*)){&D::onTargetIDArrow}));

    if ((void($SetTargetIDLayer::*)(CCTextInputNode*)){&$SetTargetIDLayer::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        m->registerHook(base+0x15b6c0, extract((void(D::*)(CCTextInputNode*)){&D::textChanged}));

    if ((void($SetTargetIDLayer::*)()){&$SetTargetIDLayer::updateTargetID} != (void(D::*)()){&D::updateTargetID})
        m->registerHook(base+0x15b4a0, extract((void(D::*)()){&D::updateTargetID}));
}

template<class D, void*** V>
SetTargetIDLayer* $SetTargetIDLayer<D, V>::create(EffectGameObject* p0, cocos2d::CCArray* p1, std::string p2) {
    if ((SetTargetIDLayer*(*)(EffectGameObject*, cocos2d::CCArray*, std::string)){&$SetTargetIDLayer::create} != (SetTargetIDLayer*(*)(EffectGameObject*, cocos2d::CCArray*, std::string)){&D::create})
        return reinterpret_cast<SetTargetIDLayer*(*)(EffectGameObject*, cocos2d::CCArray*, std::string)>(m->getOriginal(base+0x159d20))(p0, p1, p2);
    else return SetTargetIDLayer::create(p0, p1, p2);
}

template<class D, void*** V>
void $SetTargetIDLayer<D, V>::onTargetIDArrow(cocos2d::CCObject* p0) {
    if ((void($SetTargetIDLayer::*)(cocos2d::CCObject*)){&$SetTargetIDLayer::onTargetIDArrow} != (void(D::*)(cocos2d::CCObject*)){&D::onTargetIDArrow})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x15aed0))(this, p0);
    else return SetTargetIDLayer::onTargetIDArrow(p0);
}

template<class D, void*** V>
void $SetTargetIDLayer<D, V>::textChanged(CCTextInputNode* p0) {
    if ((void($SetTargetIDLayer::*)(CCTextInputNode*)){&$SetTargetIDLayer::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        return reinterpret_cast<void(*)(decltype(this), CCTextInputNode*)>(m->getOriginal(base+0x15b6c0))(this, p0);
    else return SetTargetIDLayer::textChanged(p0);
}

template<class D, void*** V>
void $SetTargetIDLayer<D, V>::updateTargetID() {
    if ((void($SetTargetIDLayer::*)()){&$SetTargetIDLayer::updateTargetID} != (void(D::*)()){&D::updateTargetID})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x15b4a0))(this);
    else return SetTargetIDLayer::updateTargetID();
}


template<class D, void*** V>
$SetupAnimationPopup<D, V>::~$SetupAnimationPopup() {}

template<class D, void*** V>
$SetupAnimationPopup<D, V>::$SetupAnimationPopup() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((SetupAnimationPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&$SetupAnimationPopup::create} != (SetupAnimationPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        m->registerHook(base+0x208b70, (SetupAnimationPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create});

    if ((void($SetupAnimationPopup::*)(cocos2d::CCObject*)){&$SetupAnimationPopup::onTargetIDArrow} != (void(D::*)(cocos2d::CCObject*)){&D::onTargetIDArrow})
        m->registerHook(base+0x209fc0, extract((void(D::*)(cocos2d::CCObject*)){&D::onTargetIDArrow}));

    if ((void($SetupAnimationPopup::*)(CCTextInputNode*)){&$SetupAnimationPopup::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        m->registerHook(base+0x20ab30, extract((void(D::*)(CCTextInputNode*)){&D::textChanged}));

    if ((void($SetupAnimationPopup::*)()){&$SetupAnimationPopup::updateTargetID} != (void(D::*)()){&D::updateTargetID})
        m->registerHook(base+0x20a910, extract((void(D::*)()){&D::updateTargetID}));
}

template<class D, void*** V>
SetupAnimationPopup* $SetupAnimationPopup<D, V>::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    if ((SetupAnimationPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&$SetupAnimationPopup::create} != (SetupAnimationPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        return reinterpret_cast<SetupAnimationPopup*(*)(EffectGameObject*, cocos2d::CCArray*)>(m->getOriginal(base+0x208b70))(p0, p1);
    else return SetupAnimationPopup::create(p0, p1);
}

template<class D, void*** V>
void $SetupAnimationPopup<D, V>::onTargetIDArrow(cocos2d::CCObject* p0) {
    if ((void($SetupAnimationPopup::*)(cocos2d::CCObject*)){&$SetupAnimationPopup::onTargetIDArrow} != (void(D::*)(cocos2d::CCObject*)){&D::onTargetIDArrow})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x209fc0))(this, p0);
    else return SetupAnimationPopup::onTargetIDArrow(p0);
}

template<class D, void*** V>
void $SetupAnimationPopup<D, V>::textChanged(CCTextInputNode* p0) {
    if ((void($SetupAnimationPopup::*)(CCTextInputNode*)){&$SetupAnimationPopup::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        return reinterpret_cast<void(*)(decltype(this), CCTextInputNode*)>(m->getOriginal(base+0x20ab30))(this, p0);
    else return SetupAnimationPopup::textChanged(p0);
}

template<class D, void*** V>
void $SetupAnimationPopup<D, V>::updateTargetID() {
    if ((void($SetupAnimationPopup::*)()){&$SetupAnimationPopup::updateTargetID} != (void(D::*)()){&D::updateTargetID})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x20a910))(this);
    else return SetupAnimationPopup::updateTargetID();
}


template<class D, void*** V>
$SetupCollisionTriggerPopup<D, V>::~$SetupCollisionTriggerPopup() {}

template<class D, void*** V>
$SetupCollisionTriggerPopup<D, V>::$SetupCollisionTriggerPopup() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((SetupCollisionTriggerPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&$SetupCollisionTriggerPopup::create} != (SetupCollisionTriggerPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        m->registerHook(base+0x1d6120, (SetupCollisionTriggerPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create});

    if ((void($SetupCollisionTriggerPopup::*)(cocos2d::CCObject*)){&$SetupCollisionTriggerPopup::onTargetIDArrow} != (void(D::*)(cocos2d::CCObject*)){&D::onTargetIDArrow})
        m->registerHook(base+0x1d77b0, extract((void(D::*)(cocos2d::CCObject*)){&D::onTargetIDArrow}));

    if ((void($SetupCollisionTriggerPopup::*)(CCTextInputNode*)){&$SetupCollisionTriggerPopup::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        m->registerHook(base+0x1d84d0, extract((void(D::*)(CCTextInputNode*)){&D::textChanged}));

    if ((void($SetupCollisionTriggerPopup::*)()){&$SetupCollisionTriggerPopup::updateTargetID} != (void(D::*)()){&D::updateTargetID})
        m->registerHook(base+0x1d82b0, extract((void(D::*)()){&D::updateTargetID}));
}

template<class D, void*** V>
SetupCollisionTriggerPopup* $SetupCollisionTriggerPopup<D, V>::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    if ((SetupCollisionTriggerPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&$SetupCollisionTriggerPopup::create} != (SetupCollisionTriggerPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        return reinterpret_cast<SetupCollisionTriggerPopup*(*)(EffectGameObject*, cocos2d::CCArray*)>(m->getOriginal(base+0x1d6120))(p0, p1);
    else return SetupCollisionTriggerPopup::create(p0, p1);
}

template<class D, void*** V>
void $SetupCollisionTriggerPopup<D, V>::onTargetIDArrow(cocos2d::CCObject* p0) {
    if ((void($SetupCollisionTriggerPopup::*)(cocos2d::CCObject*)){&$SetupCollisionTriggerPopup::onTargetIDArrow} != (void(D::*)(cocos2d::CCObject*)){&D::onTargetIDArrow})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x1d77b0))(this, p0);
    else return SetupCollisionTriggerPopup::onTargetIDArrow(p0);
}

template<class D, void*** V>
void $SetupCollisionTriggerPopup<D, V>::textChanged(CCTextInputNode* p0) {
    if ((void($SetupCollisionTriggerPopup::*)(CCTextInputNode*)){&$SetupCollisionTriggerPopup::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        return reinterpret_cast<void(*)(decltype(this), CCTextInputNode*)>(m->getOriginal(base+0x1d84d0))(this, p0);
    else return SetupCollisionTriggerPopup::textChanged(p0);
}

template<class D, void*** V>
void $SetupCollisionTriggerPopup<D, V>::updateTargetID() {
    if ((void($SetupCollisionTriggerPopup::*)()){&$SetupCollisionTriggerPopup::updateTargetID} != (void(D::*)()){&D::updateTargetID})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x1d82b0))(this);
    else return SetupCollisionTriggerPopup::updateTargetID();
}


template<class D, void*** V>
$SetupCountTriggerPopup<D, V>::~$SetupCountTriggerPopup() {}

template<class D, void*** V>
$SetupCountTriggerPopup<D, V>::$SetupCountTriggerPopup() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((SetupCountTriggerPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&$SetupCountTriggerPopup::create} != (SetupCountTriggerPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        m->registerHook(base+0x15c6c0, (SetupCountTriggerPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create});

    if ((void($SetupCountTriggerPopup::*)(cocos2d::CCObject*)){&$SetupCountTriggerPopup::onTargetIDArrow} != (void(D::*)(cocos2d::CCObject*)){&D::onTargetIDArrow})
        m->registerHook(base+0x15dd40, extract((void(D::*)(cocos2d::CCObject*)){&D::onTargetIDArrow}));

    if ((void($SetupCountTriggerPopup::*)(CCTextInputNode*)){&$SetupCountTriggerPopup::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        m->registerHook(base+0x15e9a0, extract((void(D::*)(CCTextInputNode*)){&D::textChanged}));

    if ((void($SetupCountTriggerPopup::*)()){&$SetupCountTriggerPopup::updateTargetID} != (void(D::*)()){&D::updateTargetID})
        m->registerHook(base+0x15e8a0, extract((void(D::*)()){&D::updateTargetID}));
}

template<class D, void*** V>
SetupCountTriggerPopup* $SetupCountTriggerPopup<D, V>::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    if ((SetupCountTriggerPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&$SetupCountTriggerPopup::create} != (SetupCountTriggerPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        return reinterpret_cast<SetupCountTriggerPopup*(*)(EffectGameObject*, cocos2d::CCArray*)>(m->getOriginal(base+0x15c6c0))(p0, p1);
    else return SetupCountTriggerPopup::create(p0, p1);
}

template<class D, void*** V>
void $SetupCountTriggerPopup<D, V>::onTargetIDArrow(cocos2d::CCObject* p0) {
    if ((void($SetupCountTriggerPopup::*)(cocos2d::CCObject*)){&$SetupCountTriggerPopup::onTargetIDArrow} != (void(D::*)(cocos2d::CCObject*)){&D::onTargetIDArrow})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x15dd40))(this, p0);
    else return SetupCountTriggerPopup::onTargetIDArrow(p0);
}

template<class D, void*** V>
void $SetupCountTriggerPopup<D, V>::textChanged(CCTextInputNode* p0) {
    if ((void($SetupCountTriggerPopup::*)(CCTextInputNode*)){&$SetupCountTriggerPopup::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        return reinterpret_cast<void(*)(decltype(this), CCTextInputNode*)>(m->getOriginal(base+0x15e9a0))(this, p0);
    else return SetupCountTriggerPopup::textChanged(p0);
}

template<class D, void*** V>
void $SetupCountTriggerPopup<D, V>::updateTargetID() {
    if ((void($SetupCountTriggerPopup::*)()){&$SetupCountTriggerPopup::updateTargetID} != (void(D::*)()){&D::updateTargetID})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x15e8a0))(this);
    else return SetupCountTriggerPopup::updateTargetID();
}


template<class D, void*** V>
$SetupInstantCountPopup<D, V>::~$SetupInstantCountPopup() {}

template<class D, void*** V>
$SetupInstantCountPopup<D, V>::$SetupInstantCountPopup() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((SetupInstantCountPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&$SetupInstantCountPopup::create} != (SetupInstantCountPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        m->registerHook(base+0x352c10, (SetupInstantCountPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create});

    if ((void($SetupInstantCountPopup::*)(cocos2d::CCObject*)){&$SetupInstantCountPopup::onTargetIDArrow} != (void(D::*)(cocos2d::CCObject*)){&D::onTargetIDArrow})
        m->registerHook(base+0x354520, extract((void(D::*)(cocos2d::CCObject*)){&D::onTargetIDArrow}));

    if ((void($SetupInstantCountPopup::*)(CCTextInputNode*)){&$SetupInstantCountPopup::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        m->registerHook(base+0x355270, extract((void(D::*)(CCTextInputNode*)){&D::textChanged}));

    if ((void($SetupInstantCountPopup::*)()){&$SetupInstantCountPopup::updateTargetID} != (void(D::*)()){&D::updateTargetID})
        m->registerHook(base+0x355170, extract((void(D::*)()){&D::updateTargetID}));
}

template<class D, void*** V>
SetupInstantCountPopup* $SetupInstantCountPopup<D, V>::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    if ((SetupInstantCountPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&$SetupInstantCountPopup::create} != (SetupInstantCountPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        return reinterpret_cast<SetupInstantCountPopup*(*)(EffectGameObject*, cocos2d::CCArray*)>(m->getOriginal(base+0x352c10))(p0, p1);
    else return SetupInstantCountPopup::create(p0, p1);
}

template<class D, void*** V>
void $SetupInstantCountPopup<D, V>::onTargetIDArrow(cocos2d::CCObject* p0) {
    if ((void($SetupInstantCountPopup::*)(cocos2d::CCObject*)){&$SetupInstantCountPopup::onTargetIDArrow} != (void(D::*)(cocos2d::CCObject*)){&D::onTargetIDArrow})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x354520))(this, p0);
    else return SetupInstantCountPopup::onTargetIDArrow(p0);
}

template<class D, void*** V>
void $SetupInstantCountPopup<D, V>::textChanged(CCTextInputNode* p0) {
    if ((void($SetupInstantCountPopup::*)(CCTextInputNode*)){&$SetupInstantCountPopup::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        return reinterpret_cast<void(*)(decltype(this), CCTextInputNode*)>(m->getOriginal(base+0x355270))(this, p0);
    else return SetupInstantCountPopup::textChanged(p0);
}

template<class D, void*** V>
void $SetupInstantCountPopup<D, V>::updateTargetID() {
    if ((void($SetupInstantCountPopup::*)()){&$SetupInstantCountPopup::updateTargetID} != (void(D::*)()){&D::updateTargetID})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x355170))(this);
    else return SetupInstantCountPopup::updateTargetID();
}


template<class D, void*** V>
$SetupInteractObjectPopup<D, V>::~$SetupInteractObjectPopup() {}

template<class D, void*** V>
$SetupInteractObjectPopup<D, V>::$SetupInteractObjectPopup() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((SetupInteractObjectPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&$SetupInteractObjectPopup::create} != (SetupInteractObjectPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        m->registerHook(base+0x29a400, (SetupInteractObjectPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create});

    if ((void($SetupInteractObjectPopup::*)(cocos2d::CCObject*)){&$SetupInteractObjectPopup::onTargetIDArrow} != (void(D::*)(cocos2d::CCObject*)){&D::onTargetIDArrow})
        m->registerHook(base+0x29bbc0, extract((void(D::*)(cocos2d::CCObject*)){&D::onTargetIDArrow}));

    if ((void($SetupInteractObjectPopup::*)(CCTextInputNode*)){&$SetupInteractObjectPopup::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        m->registerHook(base+0x29c2b0, extract((void(D::*)(CCTextInputNode*)){&D::textChanged}));

    if ((void($SetupInteractObjectPopup::*)()){&$SetupInteractObjectPopup::updateTargetID} != (void(D::*)()){&D::updateTargetID})
        m->registerHook(base+0x29c120, extract((void(D::*)()){&D::updateTargetID}));
}

template<class D, void*** V>
SetupInteractObjectPopup* $SetupInteractObjectPopup<D, V>::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    if ((SetupInteractObjectPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&$SetupInteractObjectPopup::create} != (SetupInteractObjectPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        return reinterpret_cast<SetupInteractObjectPopup*(*)(EffectGameObject*, cocos2d::CCArray*)>(m->getOriginal(base+0x29a400))(p0, p1);
    else return SetupInteractObjectPopup::create(p0, p1);
}

template<class D, void*** V>
void $SetupInteractObjectPopup<D, V>::onTargetIDArrow(cocos2d::CCObject* p0) {
    if ((void($SetupInteractObjectPopup::*)(cocos2d::CCObject*)){&$SetupInteractObjectPopup::onTargetIDArrow} != (void(D::*)(cocos2d::CCObject*)){&D::onTargetIDArrow})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x29bbc0))(this, p0);
    else return SetupInteractObjectPopup::onTargetIDArrow(p0);
}

template<class D, void*** V>
void $SetupInteractObjectPopup<D, V>::textChanged(CCTextInputNode* p0) {
    if ((void($SetupInteractObjectPopup::*)(CCTextInputNode*)){&$SetupInteractObjectPopup::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        return reinterpret_cast<void(*)(decltype(this), CCTextInputNode*)>(m->getOriginal(base+0x29c2b0))(this, p0);
    else return SetupInteractObjectPopup::textChanged(p0);
}

template<class D, void*** V>
void $SetupInteractObjectPopup<D, V>::updateTargetID() {
    if ((void($SetupInteractObjectPopup::*)()){&$SetupInteractObjectPopup::updateTargetID} != (void(D::*)()){&D::updateTargetID})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x29c120))(this);
    else return SetupInteractObjectPopup::updateTargetID();
}


template<class D, void*** V>
$SetupObjectTogglePopup<D, V>::~$SetupObjectTogglePopup() {}

template<class D, void*** V>
$SetupObjectTogglePopup<D, V>::$SetupObjectTogglePopup() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((SetupObjectTogglePopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&$SetupObjectTogglePopup::create} != (SetupObjectTogglePopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        m->registerHook(base+0x1c0860, (SetupObjectTogglePopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create});

    if ((bool($SetupObjectTogglePopup::*)(EffectGameObject*, cocos2d::CCArray*)){&$SetupObjectTogglePopup::init} != (bool(D::*)(EffectGameObject*, cocos2d::CCArray*)){&D::init})
        m->registerHook(base+0x1c0a40, extract((bool(D::*)(EffectGameObject*, cocos2d::CCArray*)){&D::init}));

    if ((void($SetupObjectTogglePopup::*)(cocos2d::CCObject*)){&$SetupObjectTogglePopup::onTargetIDArrow} != (void(D::*)(cocos2d::CCObject*)){&D::onTargetIDArrow})
        m->registerHook(base+0x1c1c40, extract((void(D::*)(cocos2d::CCObject*)){&D::onTargetIDArrow}));

    if ((void($SetupObjectTogglePopup::*)(CCTextInputNode*)){&$SetupObjectTogglePopup::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        m->registerHook(base+0x1c2660, extract((void(D::*)(CCTextInputNode*)){&D::textChanged}));

    if ((void($SetupObjectTogglePopup::*)()){&$SetupObjectTogglePopup::updateTargetID} != (void(D::*)()){&D::updateTargetID})
        m->registerHook(base+0x1c2440, extract((void(D::*)()){&D::updateTargetID}));
}

template<class D, void*** V>
SetupObjectTogglePopup* $SetupObjectTogglePopup<D, V>::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    if ((SetupObjectTogglePopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&$SetupObjectTogglePopup::create} != (SetupObjectTogglePopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        return reinterpret_cast<SetupObjectTogglePopup*(*)(EffectGameObject*, cocos2d::CCArray*)>(m->getOriginal(base+0x1c0860))(p0, p1);
    else return SetupObjectTogglePopup::create(p0, p1);
}

template<class D, void*** V>
bool $SetupObjectTogglePopup<D, V>::init(EffectGameObject* p0, cocos2d::CCArray* p1) {
    if ((bool($SetupObjectTogglePopup::*)(EffectGameObject*, cocos2d::CCArray*)){&$SetupObjectTogglePopup::init} != (bool(D::*)(EffectGameObject*, cocos2d::CCArray*)){&D::init})
        return reinterpret_cast<bool(*)(decltype(this), EffectGameObject*, cocos2d::CCArray*)>(m->getOriginal(base+0x1c0a40))(this, p0, p1);
    else return SetupObjectTogglePopup::init(p0, p1);
}

template<class D, void*** V>
void $SetupObjectTogglePopup<D, V>::onTargetIDArrow(cocos2d::CCObject* p0) {
    if ((void($SetupObjectTogglePopup::*)(cocos2d::CCObject*)){&$SetupObjectTogglePopup::onTargetIDArrow} != (void(D::*)(cocos2d::CCObject*)){&D::onTargetIDArrow})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x1c1c40))(this, p0);
    else return SetupObjectTogglePopup::onTargetIDArrow(p0);
}

template<class D, void*** V>
void $SetupObjectTogglePopup<D, V>::textChanged(CCTextInputNode* p0) {
    if ((void($SetupObjectTogglePopup::*)(CCTextInputNode*)){&$SetupObjectTogglePopup::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        return reinterpret_cast<void(*)(decltype(this), CCTextInputNode*)>(m->getOriginal(base+0x1c2660))(this, p0);
    else return SetupObjectTogglePopup::textChanged(p0);
}

template<class D, void*** V>
void $SetupObjectTogglePopup<D, V>::updateTargetID() {
    if ((void($SetupObjectTogglePopup::*)()){&$SetupObjectTogglePopup::updateTargetID} != (void(D::*)()){&D::updateTargetID})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x1c2440))(this);
    else return SetupObjectTogglePopup::updateTargetID();
}


template<class D, void*** V>
$SetupOpacityPopup<D, V>::~$SetupOpacityPopup() {}

template<class D, void*** V>
$SetupOpacityPopup<D, V>::$SetupOpacityPopup() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((SetupOpacityPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&$SetupOpacityPopup::create} != (SetupOpacityPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        m->registerHook(base+0x32b70, (SetupOpacityPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create});

    if ((void($SetupOpacityPopup::*)(cocos2d::CCObject*)){&$SetupOpacityPopup::onTargetIDArrow} != (void(D::*)(cocos2d::CCObject*)){&D::onTargetIDArrow})
        m->registerHook(base+0x340a0, extract((void(D::*)(cocos2d::CCObject*)){&D::onTargetIDArrow}));

    if ((void($SetupOpacityPopup::*)(CCTextInputNode*)){&$SetupOpacityPopup::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        m->registerHook(base+0x34a60, extract((void(D::*)(CCTextInputNode*)){&D::textChanged}));

    if ((void($SetupOpacityPopup::*)()){&$SetupOpacityPopup::updateTargetID} != (void(D::*)()){&D::updateTargetID})
        m->registerHook(base+0x34760, extract((void(D::*)()){&D::updateTargetID}));
}

template<class D, void*** V>
SetupOpacityPopup* $SetupOpacityPopup<D, V>::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    if ((SetupOpacityPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&$SetupOpacityPopup::create} != (SetupOpacityPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        return reinterpret_cast<SetupOpacityPopup*(*)(EffectGameObject*, cocos2d::CCArray*)>(m->getOriginal(base+0x32b70))(p0, p1);
    else return SetupOpacityPopup::create(p0, p1);
}

template<class D, void*** V>
void $SetupOpacityPopup<D, V>::onTargetIDArrow(cocos2d::CCObject* p0) {
    if ((void($SetupOpacityPopup::*)(cocos2d::CCObject*)){&$SetupOpacityPopup::onTargetIDArrow} != (void(D::*)(cocos2d::CCObject*)){&D::onTargetIDArrow})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x340a0))(this, p0);
    else return SetupOpacityPopup::onTargetIDArrow(p0);
}

template<class D, void*** V>
void $SetupOpacityPopup<D, V>::textChanged(CCTextInputNode* p0) {
    if ((void($SetupOpacityPopup::*)(CCTextInputNode*)){&$SetupOpacityPopup::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        return reinterpret_cast<void(*)(decltype(this), CCTextInputNode*)>(m->getOriginal(base+0x34a60))(this, p0);
    else return SetupOpacityPopup::textChanged(p0);
}

template<class D, void*** V>
void $SetupOpacityPopup<D, V>::updateTargetID() {
    if ((void($SetupOpacityPopup::*)()){&$SetupOpacityPopup::updateTargetID} != (void(D::*)()){&D::updateTargetID})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x34760))(this);
    else return SetupOpacityPopup::updateTargetID();
}


template<class D, void*** V>
$SetupPickupTriggerPopup<D, V>::~$SetupPickupTriggerPopup() {}

template<class D, void*** V>
$SetupPickupTriggerPopup<D, V>::$SetupPickupTriggerPopup() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((SetupPickupTriggerPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&$SetupPickupTriggerPopup::create} != (SetupPickupTriggerPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        m->registerHook(base+0x35e70, (SetupPickupTriggerPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create});

    if ((void($SetupPickupTriggerPopup::*)(cocos2d::CCObject*)){&$SetupPickupTriggerPopup::onItemIDArrow} != (void(D::*)(cocos2d::CCObject*)){&D::onItemIDArrow})
        m->registerHook(base+0x37100, extract((void(D::*)(cocos2d::CCObject*)){&D::onItemIDArrow}));

    if ((void($SetupPickupTriggerPopup::*)(cocos2d::CCObject*)){&$SetupPickupTriggerPopup::onNextItemID} != (void(D::*)(cocos2d::CCObject*)){&D::onNextItemID})
        m->registerHook(base+0x37260, extract((void(D::*)(cocos2d::CCObject*)){&D::onNextItemID}));

    if ((void($SetupPickupTriggerPopup::*)(CCTextInputNode*)){&$SetupPickupTriggerPopup::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        m->registerHook(base+0x37ca0, extract((void(D::*)(CCTextInputNode*)){&D::textChanged}));

    if ((void($SetupPickupTriggerPopup::*)()){&$SetupPickupTriggerPopup::updateItemID} != (void(D::*)()){&D::updateItemID})
        m->registerHook(base+0x37ab0, extract((void(D::*)()){&D::updateItemID}));
}

template<class D, void*** V>
SetupPickupTriggerPopup* $SetupPickupTriggerPopup<D, V>::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    if ((SetupPickupTriggerPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&$SetupPickupTriggerPopup::create} != (SetupPickupTriggerPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        return reinterpret_cast<SetupPickupTriggerPopup*(*)(EffectGameObject*, cocos2d::CCArray*)>(m->getOriginal(base+0x35e70))(p0, p1);
    else return SetupPickupTriggerPopup::create(p0, p1);
}

template<class D, void*** V>
void $SetupPickupTriggerPopup<D, V>::onItemIDArrow(cocos2d::CCObject* p0) {
    if ((void($SetupPickupTriggerPopup::*)(cocos2d::CCObject*)){&$SetupPickupTriggerPopup::onItemIDArrow} != (void(D::*)(cocos2d::CCObject*)){&D::onItemIDArrow})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x37100))(this, p0);
    else return SetupPickupTriggerPopup::onItemIDArrow(p0);
}

template<class D, void*** V>
void $SetupPickupTriggerPopup<D, V>::onNextItemID(cocos2d::CCObject* p0) {
    if ((void($SetupPickupTriggerPopup::*)(cocos2d::CCObject*)){&$SetupPickupTriggerPopup::onNextItemID} != (void(D::*)(cocos2d::CCObject*)){&D::onNextItemID})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x37260))(this, p0);
    else return SetupPickupTriggerPopup::onNextItemID(p0);
}

template<class D, void*** V>
void $SetupPickupTriggerPopup<D, V>::textChanged(CCTextInputNode* p0) {
    if ((void($SetupPickupTriggerPopup::*)(CCTextInputNode*)){&$SetupPickupTriggerPopup::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        return reinterpret_cast<void(*)(decltype(this), CCTextInputNode*)>(m->getOriginal(base+0x37ca0))(this, p0);
    else return SetupPickupTriggerPopup::textChanged(p0);
}

template<class D, void*** V>
void $SetupPickupTriggerPopup<D, V>::updateItemID() {
    if ((void($SetupPickupTriggerPopup::*)()){&$SetupPickupTriggerPopup::updateItemID} != (void(D::*)()){&D::updateItemID})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x37ab0))(this);
    else return SetupPickupTriggerPopup::updateItemID();
}


template<class D, void*** V>
$SetupShakePopup<D, V>::~$SetupShakePopup() {}

template<class D, void*** V>
$SetupShakePopup<D, V>::$SetupShakePopup() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((SetupShakePopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&$SetupShakePopup::create} != (SetupShakePopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        m->registerHook(base+0x3adc00, (SetupShakePopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create});
}

template<class D, void*** V>
SetupShakePopup* $SetupShakePopup<D, V>::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    if ((SetupShakePopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&$SetupShakePopup::create} != (SetupShakePopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        return reinterpret_cast<SetupShakePopup*(*)(EffectGameObject*, cocos2d::CCArray*)>(m->getOriginal(base+0x3adc00))(p0, p1);
    else return SetupShakePopup::create(p0, p1);
}


template<class D, void*** V>
$SetupSpawnPopup<D, V>::~$SetupSpawnPopup() {}

template<class D, void*** V>
$SetupSpawnPopup<D, V>::$SetupSpawnPopup() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((SetupSpawnPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&$SetupSpawnPopup::create} != (SetupSpawnPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        m->registerHook(base+0x139790, (SetupSpawnPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create});

    if ((void($SetupSpawnPopup::*)(std::string, cocos2d::SEL_CallFuncO, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCArray*)){&$SetupSpawnPopup::createToggleButton} != (void(D::*)(std::string, cocos2d::SEL_CallFuncO, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCArray*)){&D::createToggleButton})
        m->registerHook(base+0x13b0e0, extract((void(D::*)(std::string, cocos2d::SEL_CallFuncO, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCArray*)){&D::createToggleButton}));

    if ((void($SetupSpawnPopup::*)(cocos2d::CCObject*)){&$SetupSpawnPopup::onTargetIDArrow} != (void(D::*)(cocos2d::CCObject*)){&D::onTargetIDArrow})
        m->registerHook(base+0x13ad80, extract((void(D::*)(cocos2d::CCObject*)){&D::onTargetIDArrow}));

    if ((void($SetupSpawnPopup::*)(CCTextInputNode*)){&$SetupSpawnPopup::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        m->registerHook(base+0x13b990, extract((void(D::*)(CCTextInputNode*)){&D::textChanged}));

    if ((void($SetupSpawnPopup::*)()){&$SetupSpawnPopup::updateTargetID} != (void(D::*)()){&D::updateTargetID})
        m->registerHook(base+0x13b770, extract((void(D::*)()){&D::updateTargetID}));
}

template<class D, void*** V>
SetupSpawnPopup* $SetupSpawnPopup<D, V>::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    if ((SetupSpawnPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&$SetupSpawnPopup::create} != (SetupSpawnPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        return reinterpret_cast<SetupSpawnPopup*(*)(EffectGameObject*, cocos2d::CCArray*)>(m->getOriginal(base+0x139790))(p0, p1);
    else return SetupSpawnPopup::create(p0, p1);
}

template<class D, void*** V>
void $SetupSpawnPopup<D, V>::createToggleButton(std::string p0, cocos2d::SEL_CallFuncO p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, cocos2d::CCArray* p5) {
    if ((void($SetupSpawnPopup::*)(std::string, cocos2d::SEL_CallFuncO, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCArray*)){&$SetupSpawnPopup::createToggleButton} != (void(D::*)(std::string, cocos2d::SEL_CallFuncO, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCArray*)){&D::createToggleButton})
        return reinterpret_cast<void(*)(decltype(this), std::string, cocos2d::SEL_CallFuncO, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCArray*)>(m->getOriginal(base+0x13b0e0))(this, p0, p1, p2, p3, p4, p5);
    else return SetupSpawnPopup::createToggleButton(p0, p1, p2, p3, p4, p5);
}

template<class D, void*** V>
void $SetupSpawnPopup<D, V>::onTargetIDArrow(cocos2d::CCObject* p0) {
    if ((void($SetupSpawnPopup::*)(cocos2d::CCObject*)){&$SetupSpawnPopup::onTargetIDArrow} != (void(D::*)(cocos2d::CCObject*)){&D::onTargetIDArrow})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x13ad80))(this, p0);
    else return SetupSpawnPopup::onTargetIDArrow(p0);
}

template<class D, void*** V>
void $SetupSpawnPopup<D, V>::textChanged(CCTextInputNode* p0) {
    if ((void($SetupSpawnPopup::*)(CCTextInputNode*)){&$SetupSpawnPopup::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        return reinterpret_cast<void(*)(decltype(this), CCTextInputNode*)>(m->getOriginal(base+0x13b990))(this, p0);
    else return SetupSpawnPopup::textChanged(p0);
}

template<class D, void*** V>
void $SetupSpawnPopup<D, V>::updateTargetID() {
    if ((void($SetupSpawnPopup::*)()){&$SetupSpawnPopup::updateTargetID} != (void(D::*)()){&D::updateTargetID})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x13b770))(this);
    else return SetupSpawnPopup::updateTargetID();
}


template<class D, void*** V>
$SetupTouchTogglePopup<D, V>::~$SetupTouchTogglePopup() {}

template<class D, void*** V>
$SetupTouchTogglePopup<D, V>::$SetupTouchTogglePopup() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((SetupTouchTogglePopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&$SetupTouchTogglePopup::create} != (SetupTouchTogglePopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        m->registerHook(base+0x1576a0, (SetupTouchTogglePopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create});

    if ((void($SetupTouchTogglePopup::*)(cocos2d::CCObject*)){&$SetupTouchTogglePopup::onTargetIDArrow} != (void(D::*)(cocos2d::CCObject*)){&D::onTargetIDArrow})
        m->registerHook(base+0x158b60, extract((void(D::*)(cocos2d::CCObject*)){&D::onTargetIDArrow}));

    if ((void($SetupTouchTogglePopup::*)(CCTextInputNode*)){&$SetupTouchTogglePopup::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        m->registerHook(base+0x1596a0, extract((void(D::*)(CCTextInputNode*)){&D::textChanged}));

    if ((void($SetupTouchTogglePopup::*)()){&$SetupTouchTogglePopup::updateTargetID} != (void(D::*)()){&D::updateTargetID})
        m->registerHook(base+0x159480, extract((void(D::*)()){&D::updateTargetID}));
}

template<class D, void*** V>
SetupTouchTogglePopup* $SetupTouchTogglePopup<D, V>::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    if ((SetupTouchTogglePopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&$SetupTouchTogglePopup::create} != (SetupTouchTogglePopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        return reinterpret_cast<SetupTouchTogglePopup*(*)(EffectGameObject*, cocos2d::CCArray*)>(m->getOriginal(base+0x1576a0))(p0, p1);
    else return SetupTouchTogglePopup::create(p0, p1);
}

template<class D, void*** V>
void $SetupTouchTogglePopup<D, V>::onTargetIDArrow(cocos2d::CCObject* p0) {
    if ((void($SetupTouchTogglePopup::*)(cocos2d::CCObject*)){&$SetupTouchTogglePopup::onTargetIDArrow} != (void(D::*)(cocos2d::CCObject*)){&D::onTargetIDArrow})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x158b60))(this, p0);
    else return SetupTouchTogglePopup::onTargetIDArrow(p0);
}

template<class D, void*** V>
void $SetupTouchTogglePopup<D, V>::textChanged(CCTextInputNode* p0) {
    if ((void($SetupTouchTogglePopup::*)(CCTextInputNode*)){&$SetupTouchTogglePopup::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        return reinterpret_cast<void(*)(decltype(this), CCTextInputNode*)>(m->getOriginal(base+0x1596a0))(this, p0);
    else return SetupTouchTogglePopup::textChanged(p0);
}

template<class D, void*** V>
void $SetupTouchTogglePopup<D, V>::updateTargetID() {
    if ((void($SetupTouchTogglePopup::*)()){&$SetupTouchTogglePopup::updateTargetID} != (void(D::*)()){&D::updateTargetID})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x159480))(this);
    else return SetupTouchTogglePopup::updateTargetID();
}


template<class D, void*** V>
$SimplePlayer<D, V>::~$SimplePlayer() {}

template<class D, void*** V>
$SimplePlayer<D, V>::$SimplePlayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((SimplePlayer*(*)(int)){&$SimplePlayer::create} != (SimplePlayer*(*)(int)){&D::create})
        m->registerHook(base+0x1b6140, (SimplePlayer*(*)(int)){&D::create});

    if ((void($SimplePlayer::*)(cocos2d::_ccColor3B const&)){&$SimplePlayer::setSecondColor} != (void(D::*)(cocos2d::_ccColor3B const&)){&D::setSecondColor})
        m->registerHook(base+0x1bace0, extract((void(D::*)(cocos2d::_ccColor3B const&)){&D::setSecondColor}));

    if ((void($SimplePlayer::*)()){&$SimplePlayer::updateColors} != (void(D::*)()){&D::updateColors})
        m->registerHook(base+0x1ba1f0, extract((void(D::*)()){&D::updateColors}));

    if ((void($SimplePlayer::*)(int, IconType)){&$SimplePlayer::updatePlayerFrame} != (void(D::*)(int, IconType)){&D::updatePlayerFrame})
        m->registerHook(base+0x1b62f0, extract((void(D::*)(int, IconType)){&D::updatePlayerFrame}));
}

template<class D, void*** V>
SimplePlayer* $SimplePlayer<D, V>::create(int p0) {
    if ((SimplePlayer*(*)(int)){&$SimplePlayer::create} != (SimplePlayer*(*)(int)){&D::create})
        return reinterpret_cast<SimplePlayer*(*)(int)>(m->getOriginal(base+0x1b6140))(p0);
    else return SimplePlayer::create(p0);
}

template<class D, void*** V>
void $SimplePlayer<D, V>::setSecondColor(cocos2d::_ccColor3B const& p0) {
    if ((void($SimplePlayer::*)(cocos2d::_ccColor3B const&)){&$SimplePlayer::setSecondColor} != (void(D::*)(cocos2d::_ccColor3B const&)){&D::setSecondColor})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::_ccColor3B const&)>(m->getOriginal(base+0x1bace0))(this, p0);
    else return SimplePlayer::setSecondColor(p0);
}

template<class D, void*** V>
void $SimplePlayer<D, V>::updateColors() {
    if ((void($SimplePlayer::*)()){&$SimplePlayer::updateColors} != (void(D::*)()){&D::updateColors})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x1ba1f0))(this);
    else return SimplePlayer::updateColors();
}

template<class D, void*** V>
void $SimplePlayer<D, V>::updatePlayerFrame(int p0, IconType p1) {
    if ((void($SimplePlayer::*)(int, IconType)){&$SimplePlayer::updatePlayerFrame} != (void(D::*)(int, IconType)){&D::updatePlayerFrame})
        return reinterpret_cast<void(*)(decltype(this), int, IconType)>(m->getOriginal(base+0x1b62f0))(this, p0, p1);
    else return SimplePlayer::updatePlayerFrame(p0, p1);
}


template<class D, void*** V>
$Slider<D, V>::~$Slider() {}

template<class D, void*** V>
$Slider<D, V>::$Slider() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((Slider*(*)(cocos2d::CCNode*, cocos2d::SEL_CallFuncO, char const*, char const*, char const*, char const*, float)){&$Slider::create} != (Slider*(*)(cocos2d::CCNode*, cocos2d::SEL_CallFuncO, char const*, char const*, char const*, char const*, float)){&D::create})
        m->registerHook(base+0x18dd80, (Slider*(*)(cocos2d::CCNode*, cocos2d::SEL_CallFuncO, char const*, char const*, char const*, char const*, float)){&D::create});

    if ((Slider*(*)(cocos2d::CCNode*, cocos2d::SEL_CallFuncO, float)){&$Slider::create} != (Slider*(*)(cocos2d::CCNode*, cocos2d::SEL_CallFuncO, float)){&D::create})
        m->registerHook(base+0x18dc40, (Slider*(*)(cocos2d::CCNode*, cocos2d::SEL_CallFuncO, float)){&D::create});

    if ((void($Slider::*)()){&$Slider::getValue} != (void(D::*)()){&D::getValue})
        m->registerHook(base+0x18e0c0, extract((void(D::*)()){&D::getValue}));

    if ((void($Slider::*)(bool)){&$Slider::setBarVisibility} != (void(D::*)(bool)){&D::setBarVisibility})
        m->registerHook(base+0x18e280, extract((void(D::*)(bool)){&D::setBarVisibility}));

    if ((void($Slider::*)(float)){&$Slider::setValue} != (void(D::*)(float)){&D::setValue})
        m->registerHook(base+0x18e170, extract((void(D::*)(float)){&D::setValue}));
}

template<class D, void*** V>
Slider* $Slider<D, V>::create(cocos2d::CCNode* p0, cocos2d::SEL_CallFuncO p1, char const* p2, char const* p3, char const* p4, char const* p5, float p6) {
    if ((Slider*(*)(cocos2d::CCNode*, cocos2d::SEL_CallFuncO, char const*, char const*, char const*, char const*, float)){&$Slider::create} != (Slider*(*)(cocos2d::CCNode*, cocos2d::SEL_CallFuncO, char const*, char const*, char const*, char const*, float)){&D::create})
        return reinterpret_cast<Slider*(*)(cocos2d::CCNode*, cocos2d::SEL_CallFuncO, char const*, char const*, char const*, char const*, float)>(m->getOriginal(base+0x18dd80))(p0, p1, p2, p3, p4, p5, p6);
    else return Slider::create(p0, p1, p2, p3, p4, p5, p6);
}

template<class D, void*** V>
Slider* $Slider<D, V>::create(cocos2d::CCNode* p0, cocos2d::SEL_CallFuncO p1, float p2) {
    if ((Slider*(*)(cocos2d::CCNode*, cocos2d::SEL_CallFuncO, float)){&$Slider::create} != (Slider*(*)(cocos2d::CCNode*, cocos2d::SEL_CallFuncO, float)){&D::create})
        return reinterpret_cast<Slider*(*)(cocos2d::CCNode*, cocos2d::SEL_CallFuncO, float)>(m->getOriginal(base+0x18dc40))(p0, p1, p2);
    else return Slider::create(p0, p1, p2);
}

template<class D, void*** V>
void $Slider<D, V>::getValue() {
    if ((void($Slider::*)()){&$Slider::getValue} != (void(D::*)()){&D::getValue})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x18e0c0))(this);
    else return Slider::getValue();
}

template<class D, void*** V>
void $Slider<D, V>::setBarVisibility(bool p0) {
    if ((void($Slider::*)(bool)){&$Slider::setBarVisibility} != (void(D::*)(bool)){&D::setBarVisibility})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x18e280))(this, p0);
    else return Slider::setBarVisibility(p0);
}

template<class D, void*** V>
void $Slider<D, V>::setValue(float p0) {
    if ((void($Slider::*)(float)){&$Slider::setValue} != (void(D::*)(float)){&D::setValue})
        return reinterpret_cast<void(*)(decltype(this), float)>(m->getOriginal(base+0x18e170))(this, p0);
    else return Slider::setValue(p0);
}


template<class D, void*** V>
$SliderThumb<D, V>::~$SliderThumb() {}

template<class D, void*** V>
$SliderThumb<D, V>::$SliderThumb() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($SliderThumb::*)()){&$SliderThumb::getValue} != (void(D::*)()){&D::getValue})
        m->registerHook(base+0x18ce80, extract((void(D::*)()){&D::getValue}));
}

template<class D, void*** V>
void $SliderThumb<D, V>::getValue() {
    if ((void($SliderThumb::*)()){&$SliderThumb::getValue} != (void(D::*)()){&D::getValue})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x18ce80))(this);
    else return SliderThumb::getValue();
}


template<class D, void*** V>
$SpawnTriggerAction<D, V>::~$SpawnTriggerAction() {}

template<class D, void*** V>
$SpawnTriggerAction<D, V>::$SpawnTriggerAction() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((SpawnTriggerAction*(*)(std::string)){&$SpawnTriggerAction::createFromString} != (SpawnTriggerAction*(*)(std::string)){&D::createFromString})
        m->registerHook(base+0x17bf50, (SpawnTriggerAction*(*)(std::string)){&D::createFromString});
}

template<class D, void*** V>
SpawnTriggerAction* $SpawnTriggerAction<D, V>::createFromString(std::string p0) {
    if ((SpawnTriggerAction*(*)(std::string)){&$SpawnTriggerAction::createFromString} != (SpawnTriggerAction*(*)(std::string)){&D::createFromString})
        return reinterpret_cast<SpawnTriggerAction*(*)(std::string)>(m->getOriginal(base+0x17bf50))(p0);
    else return SpawnTriggerAction::createFromString(p0);
}


template<class D, void*** V>
$SpeedObject<D, V>::~$SpeedObject() {}

template<class D, void*** V>
$SpeedObject<D, V>::$SpeedObject() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((SpeedObject*(*)(GameObject*, int, float)){&$SpeedObject::create} != (SpeedObject*(*)(GameObject*, int, float)){&D::create})
        m->registerHook(base+0x77450, (SpeedObject*(*)(GameObject*, int, float)){&D::create});

    if ((bool($SpeedObject::*)(GameObject*, int, float)){&$SpeedObject::init} != (bool(D::*)(GameObject*, int, float)){&D::init})
        m->registerHook(base+0x77400, extract((bool(D::*)(GameObject*, int, float)){&D::init}));
}

template<class D, void*** V>
SpeedObject* $SpeedObject<D, V>::create(GameObject* p0, int p1, float p2) {
    if ((SpeedObject*(*)(GameObject*, int, float)){&$SpeedObject::create} != (SpeedObject*(*)(GameObject*, int, float)){&D::create})
        return reinterpret_cast<SpeedObject*(*)(GameObject*, int, float)>(m->getOriginal(base+0x77450))(p0, p1, p2);
    else return SpeedObject::create(p0, p1, p2);
}

template<class D, void*** V>
bool $SpeedObject<D, V>::init(GameObject* p0, int p1, float p2) {
    if ((bool($SpeedObject::*)(GameObject*, int, float)){&$SpeedObject::init} != (bool(D::*)(GameObject*, int, float)){&D::init})
        return reinterpret_cast<bool(*)(decltype(this), GameObject*, int, float)>(m->getOriginal(base+0x77400))(this, p0, p1, p2);
    else return SpeedObject::init(p0, p1, p2);
}


template<class D, void*** V>
$TeleportPortalObject<D, V>::~$TeleportPortalObject() {}

template<class D, void*** V>
$TeleportPortalObject<D, V>::$TeleportPortalObject() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((TeleportPortalObject*(*)(char const*)){&$TeleportPortalObject::create} != (TeleportPortalObject*(*)(char const*)){&D::create})
        m->registerHook(base+0xdaa50, (TeleportPortalObject*(*)(char const*)){&D::create});

    if ((void($TeleportPortalObject::*)(cocos2d::CCNode*)){&$TeleportPortalObject::getTeleportXOff} != (void(D::*)(cocos2d::CCNode*)){&D::getTeleportXOff})
        m->registerHook(base+0xdac20, extract((void(D::*)(cocos2d::CCNode*)){&D::getTeleportXOff}));
}

template<class D, void*** V>
TeleportPortalObject* $TeleportPortalObject<D, V>::create(char const* p0) {
    if ((TeleportPortalObject*(*)(char const*)){&$TeleportPortalObject::create} != (TeleportPortalObject*(*)(char const*)){&D::create})
        return reinterpret_cast<TeleportPortalObject*(*)(char const*)>(m->getOriginal(base+0xdaa50))(p0);
    else return TeleportPortalObject::create(p0);
}

template<class D, void*** V>
void $TeleportPortalObject<D, V>::getTeleportXOff(cocos2d::CCNode* p0) {
    if ((void($TeleportPortalObject::*)(cocos2d::CCNode*)){&$TeleportPortalObject::getTeleportXOff} != (void(D::*)(cocos2d::CCNode*)){&D::getTeleportXOff})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCNode*)>(m->getOriginal(base+0xdac20))(this, p0);
    else return TeleportPortalObject::getTeleportXOff(p0);
}


template<class D, void*** V>
$TextArea<D, V>::~$TextArea() {}

template<class D, void*** V>
$TextArea<D, V>::$TextArea() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((TextArea*(*)(std::string, char const*, float, float, cocos2d::CCPoint, float, bool)){&$TextArea::create} != (TextArea*(*)(std::string, char const*, float, float, cocos2d::CCPoint, float, bool)){&D::create})
        m->registerHook(base+0x19eb40, (TextArea*(*)(std::string, char const*, float, float, cocos2d::CCPoint, float, bool)){&D::create});
}

template<class D, void*** V>
TextArea* $TextArea<D, V>::create(std::string p0, char const* p1, float p2, float p3, cocos2d::CCPoint p4, float p5, bool p6) {
    if ((TextArea*(*)(std::string, char const*, float, float, cocos2d::CCPoint, float, bool)){&$TextArea::create} != (TextArea*(*)(std::string, char const*, float, float, cocos2d::CCPoint, float, bool)){&D::create})
        return reinterpret_cast<TextArea*(*)(std::string, char const*, float, float, cocos2d::CCPoint, float, bool)>(m->getOriginal(base+0x19eb40))(p0, p1, p2, p3, p4, p5, p6);
    else return TextArea::create(p0, p1, p2, p3, p4, p5, p6);
}


template<class D, void*** V>
$TextInputDelegate<D, V>::~$TextInputDelegate() {}

template<class D, void*** V>
$TextInputDelegate<D, V>::$TextInputDelegate() {
    m->registerHook(extract_destructor(V), +[](){});
}


template<class D, void*** V>
$ToggleTriggerAction<D, V>::~$ToggleTriggerAction() {}

template<class D, void*** V>
$ToggleTriggerAction<D, V>::$ToggleTriggerAction() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((ToggleTriggerAction*(*)(std::string)){&$ToggleTriggerAction::createFromString} != (ToggleTriggerAction*(*)(std::string)){&D::createFromString})
        m->registerHook(base+0x1765e0, (ToggleTriggerAction*(*)(std::string)){&D::createFromString});
}

template<class D, void*** V>
ToggleTriggerAction* $ToggleTriggerAction<D, V>::createFromString(std::string p0) {
    if ((ToggleTriggerAction*(*)(std::string)){&$ToggleTriggerAction::createFromString} != (ToggleTriggerAction*(*)(std::string)){&D::createFromString})
        return reinterpret_cast<ToggleTriggerAction*(*)(std::string)>(m->getOriginal(base+0x1765e0))(p0);
    else return ToggleTriggerAction::createFromString(p0);
}


template<class D, void*** V>
$GJCommentListLayer<D, V>::~$GJCommentListLayer() {}

template<class D, void*** V>
$GJCommentListLayer<D, V>::$GJCommentListLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((GJCommentListLayer*(*)(BoomListView*, char const*, cocos2d::_ccColor4B, float, float, bool)){&$GJCommentListLayer::create} != (GJCommentListLayer*(*)(BoomListView*, char const*, cocos2d::_ccColor4B, float, float, bool)){&D::create})
        m->registerHook(base+0x147d00, (GJCommentListLayer*(*)(BoomListView*, char const*, cocos2d::_ccColor4B, float, float, bool)){&D::create});
}

template<class D, void*** V>
GJCommentListLayer* $GJCommentListLayer<D, V>::create(BoomListView* p0, char const* p1, cocos2d::_ccColor4B p2, float p3, float p4, bool p5) {
    if ((GJCommentListLayer*(*)(BoomListView*, char const*, cocos2d::_ccColor4B, float, float, bool)){&$GJCommentListLayer::create} != (GJCommentListLayer*(*)(BoomListView*, char const*, cocos2d::_ccColor4B, float, float, bool)){&D::create})
        return reinterpret_cast<GJCommentListLayer*(*)(BoomListView*, char const*, cocos2d::_ccColor4B, float, float, bool)>(m->getOriginal(base+0x147d00))(p0, p1, p2, p3, p4, p5);
    else return GJCommentListLayer::create(p0, p1, p2, p3, p4, p5);
}


template<class D, void*** V>
$TopArtistsLayer<D, V>::~$TopArtistsLayer() {}

template<class D, void*** V>
$TopArtistsLayer<D, V>::$TopArtistsLayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((TopArtistsLayer*(*)()){&$TopArtistsLayer::create} != (TopArtistsLayer*(*)()){&D::create})
        m->registerHook(base+0x192a90, (TopArtistsLayer*(*)()){&D::create});

    if ((void($TopArtistsLayer::*)(cocos2d::CCArray*)){&$TopArtistsLayer::setupLeaderboard} != (void(D::*)(cocos2d::CCArray*)){&D::setupLeaderboard})
        m->registerHook(base+0x193420, extract((void(D::*)(cocos2d::CCArray*)){&D::setupLeaderboard}));

    if ((bool($TopArtistsLayer::*)()){&$TopArtistsLayer::init} != (bool(D::*)()){&D::init})
        m->registerHook(base+0x192c30, extract_virtual(V, (bool(D::*)()){&D::init}));
    std::cout << "init: " << (void*)extract_virtual(V, (bool(D::*)()){&D::init}) << std::endl;

    if ((void($TopArtistsLayer::*)(int)){&$TopArtistsLayer::loadPage} != (void(D::*)(int)){&D::loadPage})
        m->registerHook(base+0x193b60, extract((void(D::*)(int)){&D::loadPage}));

    if ((void($TopArtistsLayer::*)(std::string, char const*)){&$TopArtistsLayer::setupPageInfo} != (void(D::*)(std::string, char const*)){&D::setupPageInfo})
        m->registerHook(base+0x193730, extract((void(D::*)(std::string, char const*)){&D::setupPageInfo}));
}

template<class D, void*** V>
TopArtistsLayer* $TopArtistsLayer<D, V>::create() {
    if ((TopArtistsLayer*(*)()){&$TopArtistsLayer::create} != (TopArtistsLayer*(*)()){&D::create})
        return reinterpret_cast<TopArtistsLayer*(*)()>(m->getOriginal(base+0x192a90))();
    else return TopArtistsLayer::create();
}

template<class D, void*** V>
void $TopArtistsLayer<D, V>::setupLeaderboard(cocos2d::CCArray* p0) {
    if ((void($TopArtistsLayer::*)(cocos2d::CCArray*)){&$TopArtistsLayer::setupLeaderboard} != (void(D::*)(cocos2d::CCArray*)){&D::setupLeaderboard})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCArray*)>(m->getOriginal(base+0x193420))(this, p0);
    else return TopArtistsLayer::setupLeaderboard(p0);
}

template<class D, void*** V>
bool $TopArtistsLayer<D, V>::init() {
    if ((bool($TopArtistsLayer::*)()){&$TopArtistsLayer::init} != (bool(D::*)()){&D::init})
        return reinterpret_cast<bool(*)(decltype(this))>(m->getOriginal(base+0x192c30))(this);
    else return TopArtistsLayer::init();
}

template<class D, void*** V>
void $TopArtistsLayer<D, V>::loadPage(int p0) {
    if ((void($TopArtistsLayer::*)(int)){&$TopArtistsLayer::loadPage} != (void(D::*)(int)){&D::loadPage})
        return reinterpret_cast<void(*)(decltype(this), int)>(m->getOriginal(base+0x193b60))(this, p0);
    else return TopArtistsLayer::loadPage(p0);
}

template<class D, void*** V>
void $TopArtistsLayer<D, V>::setupPageInfo(std::string p0, char const* p1) {
    if ((void($TopArtistsLayer::*)(std::string, char const*)){&$TopArtistsLayer::setupPageInfo} != (void(D::*)(std::string, char const*)){&D::setupPageInfo})
        return reinterpret_cast<void(*)(decltype(this), std::string, char const*)>(m->getOriginal(base+0x193730))(this, p0, p1);
    else return TopArtistsLayer::setupPageInfo(p0, p1);
}


template<class D, void*** V>
$TouchToggleAction<D, V>::~$TouchToggleAction() {}

template<class D, void*** V>
$TouchToggleAction<D, V>::$TouchToggleAction() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((TouchToggleAction*(*)(std::string)){&$TouchToggleAction::createFromString} != (TouchToggleAction*(*)(std::string)){&D::createFromString})
        m->registerHook(base+0x177e10, (TouchToggleAction*(*)(std::string)){&D::createFromString});
}

template<class D, void*** V>
TouchToggleAction* $TouchToggleAction<D, V>::createFromString(std::string p0) {
    if ((TouchToggleAction*(*)(std::string)){&$TouchToggleAction::createFromString} != (TouchToggleAction*(*)(std::string)){&D::createFromString})
        return reinterpret_cast<TouchToggleAction*(*)(std::string)>(m->getOriginal(base+0x177e10))(p0);
    else return TouchToggleAction::createFromString(p0);
}


template<class D, void*** V>
$UILayer<D, V>::~$UILayer() {}

template<class D, void*** V>
$UILayer<D, V>::$UILayer() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((UILayer*(*)()){&$UILayer::create} != (UILayer*(*)()){&D::create})
        m->registerHook(base+0x27fd10, (UILayer*(*)()){&D::create});

    if ((void($UILayer::*)()){&$UILayer::disableMenu} != (void(D::*)()){&D::disableMenu})
        m->registerHook(base+0x280960, extract((void(D::*)()){&D::disableMenu}));

    if ((void($UILayer::*)()){&$UILayer::enableMenu} != (void(D::*)()){&D::enableMenu})
        m->registerHook(base+0x280940, extract((void(D::*)()){&D::enableMenu}));

    if ((void($UILayer::*)(cocos2d::CCNode*)){&$UILayer::pCommand} != (void(D::*)(cocos2d::CCNode*)){&D::pCommand})
        m->registerHook(base+0x280830, extract((void(D::*)(cocos2d::CCNode*)){&D::pCommand}));

    if ((void($UILayer::*)(bool)){&$UILayer::toggleCheckpointsMenu} != (void(D::*)(bool)){&D::toggleCheckpointsMenu})
        m->registerHook(base+0x280430, extract((void(D::*)(bool)){&D::toggleCheckpointsMenu}));
}

template<class D, void*** V>
UILayer* $UILayer<D, V>::create() {
    if ((UILayer*(*)()){&$UILayer::create} != (UILayer*(*)()){&D::create})
        return reinterpret_cast<UILayer*(*)()>(m->getOriginal(base+0x27fd10))();
    else return UILayer::create();
}

template<class D, void*** V>
void $UILayer<D, V>::disableMenu() {
    if ((void($UILayer::*)()){&$UILayer::disableMenu} != (void(D::*)()){&D::disableMenu})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x280960))(this);
    else return UILayer::disableMenu();
}

template<class D, void*** V>
void $UILayer<D, V>::enableMenu() {
    if ((void($UILayer::*)()){&$UILayer::enableMenu} != (void(D::*)()){&D::enableMenu})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x280940))(this);
    else return UILayer::enableMenu();
}

template<class D, void*** V>
void $UILayer<D, V>::pCommand(cocos2d::CCNode* p0) {
    if ((void($UILayer::*)(cocos2d::CCNode*)){&$UILayer::pCommand} != (void(D::*)(cocos2d::CCNode*)){&D::pCommand})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCNode*)>(m->getOriginal(base+0x280830))(this, p0);
    else return UILayer::pCommand(p0);
}

template<class D, void*** V>
void $UILayer<D, V>::toggleCheckpointsMenu(bool p0) {
    if ((void($UILayer::*)(bool)){&$UILayer::toggleCheckpointsMenu} != (void(D::*)(bool)){&D::toggleCheckpointsMenu})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x280430))(this, p0);
    else return UILayer::toggleCheckpointsMenu(p0);
}


template<class D, void*** V>
$UndoCommand<D, V>::~$UndoCommand() {}

template<class D, void*** V>
$UndoCommand<D, V>::$UndoCommand() {
    m->registerHook(extract_destructor(V), +[](){});
}


template<class D, void*** V>
$UndoObject<D, V>::~$UndoObject() {}

template<class D, void*** V>
$UndoObject<D, V>::$UndoObject() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((UndoObject*(*)(GameObject*, UndoCommand)){&$UndoObject::create} != (UndoObject*(*)(GameObject*, UndoCommand)){&D::create})
        m->registerHook(base+0x94ea0, (UndoObject*(*)(GameObject*, UndoCommand)){&D::create});

    if ((UndoObject*(*)(cocos2d::CCArray*, UndoCommand)){&$UndoObject::createWithArray} != (UndoObject*(*)(cocos2d::CCArray*, UndoCommand)){&D::createWithArray})
        m->registerHook(base+0x96ee0, (UndoObject*(*)(cocos2d::CCArray*, UndoCommand)){&D::createWithArray});
}

template<class D, void*** V>
UndoObject* $UndoObject<D, V>::create(GameObject* p0, UndoCommand p1) {
    if ((UndoObject*(*)(GameObject*, UndoCommand)){&$UndoObject::create} != (UndoObject*(*)(GameObject*, UndoCommand)){&D::create})
        return reinterpret_cast<UndoObject*(*)(GameObject*, UndoCommand)>(m->getOriginal(base+0x94ea0))(p0, p1);
    else return UndoObject::create(p0, p1);
}

template<class D, void*** V>
UndoObject* $UndoObject<D, V>::createWithArray(cocos2d::CCArray* p0, UndoCommand p1) {
    if ((UndoObject*(*)(cocos2d::CCArray*, UndoCommand)){&$UndoObject::createWithArray} != (UndoObject*(*)(cocos2d::CCArray*, UndoCommand)){&D::createWithArray})
        return reinterpret_cast<UndoObject*(*)(cocos2d::CCArray*, UndoCommand)>(m->getOriginal(base+0x96ee0))(p0, p1);
    else return UndoObject::createWithArray(p0, p1);
}


template<class D, void*** V>
$ColorSelectPopup<D, V>::~$ColorSelectPopup() {}

template<class D, void*** V>
$ColorSelectPopup<D, V>::$ColorSelectPopup() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($ColorSelectPopup::*)(cocos2d::_ccColor3B)){&$ColorSelectPopup::colorValueChanged} != (void(D::*)(cocos2d::_ccColor3B)){&D::colorValueChanged})
        m->registerHook(base+0x423320, extract((void(D::*)(cocos2d::_ccColor3B)){&D::colorValueChanged}));

    if ((ColorSelectPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&$ColorSelectPopup::create} != (ColorSelectPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        m->registerHook(base+0x41eb70, (ColorSelectPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create});

    if ((bool($ColorSelectPopup::*)(EffectGameObject*, cocos2d::CCArray*, ColorAction*)){&$ColorSelectPopup::init} != (bool(D::*)(EffectGameObject*, cocos2d::CCArray*, ColorAction*)){&D::init})
        m->registerHook(base+0x41ee70, extract_virtual(V, (bool(D::*)(EffectGameObject*, cocos2d::CCArray*, ColorAction*)){&D::init}));
    std::cout << "init: " << (void*)extract_virtual(V, (bool(D::*)(EffectGameObject*, cocos2d::CCArray*, ColorAction*)){&D::init}) << std::endl;

    if ((void($ColorSelectPopup::*)(cocos2d::CCObject*)){&$ColorSelectPopup::onDefault} != (void(D::*)(cocos2d::CCObject*)){&D::onDefault})
        m->registerHook(base+0x4220e0, extract((void(D::*)(cocos2d::CCObject*)){&D::onDefault}));

    if ((void($ColorSelectPopup::*)(cocos2d::CCObject*)){&$ColorSelectPopup::onMultiTrigger} != (void(D::*)(cocos2d::CCObject*)){&D::onMultiTrigger})
        m->registerHook(base+0x422680, extract((void(D::*)(cocos2d::CCObject*)){&D::onMultiTrigger}));

    if ((void($ColorSelectPopup::*)(cocos2d::CCObject*)){&$ColorSelectPopup::onPlayerColor1} != (void(D::*)(cocos2d::CCObject*)){&D::onPlayerColor1})
        m->registerHook(base+0x422500, extract((void(D::*)(cocos2d::CCObject*)){&D::onPlayerColor1}));

    if ((void($ColorSelectPopup::*)(cocos2d::CCObject*)){&$ColorSelectPopup::onPlayerColor2} != (void(D::*)(cocos2d::CCObject*)){&D::onPlayerColor2})
        m->registerHook(base+0x4225c0, extract((void(D::*)(cocos2d::CCObject*)){&D::onPlayerColor2}));

    if ((void($ColorSelectPopup::*)(cocos2d::CCObject*)){&$ColorSelectPopup::onSpawnedByTrigger} != (void(D::*)(cocos2d::CCObject*)){&D::onSpawnedByTrigger})
        m->registerHook(base+0x4227f0, extract((void(D::*)(cocos2d::CCObject*)){&D::onSpawnedByTrigger}));

    if ((void($ColorSelectPopup::*)(cocos2d::CCObject*)){&$ColorSelectPopup::onToggleHSVMode} != (void(D::*)(cocos2d::CCObject*)){&D::onToggleHSVMode})
        m->registerHook(base+0x4227b0, extract((void(D::*)(cocos2d::CCObject*)){&D::onToggleHSVMode}));

    if ((void($ColorSelectPopup::*)(cocos2d::CCObject*)){&$ColorSelectPopup::onTouchTriggered} != (void(D::*)(cocos2d::CCObject*)){&D::onTouchTriggered})
        m->registerHook(base+0x4228b0, extract((void(D::*)(cocos2d::CCObject*)){&D::onTouchTriggered}));

    if ((void($ColorSelectPopup::*)()){&$ColorSelectPopup::show} != (void(D::*)()){&D::show})
        m->registerHook(base+0x423570, extract_virtual(V, (void(D::*)()){&D::show}));
    std::cout << "show: " << (void*)extract_virtual(V, (void(D::*)()){&D::show}) << std::endl;

    if ((void($ColorSelectPopup::*)(cocos2d::CCObject*)){&$ColorSelectPopup::sliderChanged} != (void(D::*)(cocos2d::CCObject*)){&D::sliderChanged})
        m->registerHook(base+0x421ca0, extract((void(D::*)(cocos2d::CCObject*)){&D::sliderChanged}));

    if ((void($ColorSelectPopup::*)()){&$ColorSelectPopup::updateCopyColor} != (void(D::*)()){&D::updateCopyColor})
        m->registerHook(base+0x423b70, extract((void(D::*)()){&D::updateCopyColor}));

    if ((void($ColorSelectPopup::*)()){&$ColorSelectPopup::updateCopyColorTextInputLabel} != (void(D::*)()){&D::updateCopyColorTextInputLabel})
        m->registerHook(base+0x422ed0, extract((void(D::*)()){&D::updateCopyColorTextInputLabel}));

    if ((void($ColorSelectPopup::*)()){&$ColorSelectPopup::updateDurLabel} != (void(D::*)()){&D::updateDurLabel})
        m->registerHook(base+0x421eb0, extract((void(D::*)()){&D::updateDurLabel}));

    if ((void($ColorSelectPopup::*)()){&$ColorSelectPopup::updateHSVMode} != (void(D::*)()){&D::updateHSVMode})
        m->registerHook(base+0x422e00, extract((void(D::*)()){&D::updateHSVMode}));

    if ((void($ColorSelectPopup::*)()){&$ColorSelectPopup::updateOpacityLabel} != (void(D::*)()){&D::updateOpacityLabel})
        m->registerHook(base+0x422000, extract((void(D::*)()){&D::updateOpacityLabel}));

    if ((void($ColorSelectPopup::*)()){&$ColorSelectPopup::updateTouchTriggered} != (void(D::*)()){&D::updateTouchTriggered})
        m->registerHook(base+0x423020, extract((void(D::*)()){&D::updateTouchTriggered}));
}

template<class D, void*** V>
void $ColorSelectPopup<D, V>::colorValueChanged(cocos2d::_ccColor3B p0) {
    if ((void($ColorSelectPopup::*)(cocos2d::_ccColor3B)){&$ColorSelectPopup::colorValueChanged} != (void(D::*)(cocos2d::_ccColor3B)){&D::colorValueChanged})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::_ccColor3B)>(m->getOriginal(base+0x423320))(this, p0);
    else return ColorSelectPopup::colorValueChanged(p0);
}

template<class D, void*** V>
ColorSelectPopup* $ColorSelectPopup<D, V>::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    if ((ColorSelectPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&$ColorSelectPopup::create} != (ColorSelectPopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        return reinterpret_cast<ColorSelectPopup*(*)(EffectGameObject*, cocos2d::CCArray*)>(m->getOriginal(base+0x41eb70))(p0, p1);
    else return ColorSelectPopup::create(p0, p1);
}

template<class D, void*** V>
bool $ColorSelectPopup<D, V>::init(EffectGameObject* p0, cocos2d::CCArray* p1, ColorAction* p2) {
    if ((bool($ColorSelectPopup::*)(EffectGameObject*, cocos2d::CCArray*, ColorAction*)){&$ColorSelectPopup::init} != (bool(D::*)(EffectGameObject*, cocos2d::CCArray*, ColorAction*)){&D::init})
        return reinterpret_cast<bool(*)(decltype(this), EffectGameObject*, cocos2d::CCArray*, ColorAction*)>(m->getOriginal(base+0x41ee70))(this, p0, p1, p2);
    else return ColorSelectPopup::init(p0, p1, p2);
}

template<class D, void*** V>
void $ColorSelectPopup<D, V>::onDefault(cocos2d::CCObject* p0) {
    if ((void($ColorSelectPopup::*)(cocos2d::CCObject*)){&$ColorSelectPopup::onDefault} != (void(D::*)(cocos2d::CCObject*)){&D::onDefault})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x4220e0))(this, p0);
    else return ColorSelectPopup::onDefault(p0);
}

template<class D, void*** V>
void $ColorSelectPopup<D, V>::onMultiTrigger(cocos2d::CCObject* p0) {
    if ((void($ColorSelectPopup::*)(cocos2d::CCObject*)){&$ColorSelectPopup::onMultiTrigger} != (void(D::*)(cocos2d::CCObject*)){&D::onMultiTrigger})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x422680))(this, p0);
    else return ColorSelectPopup::onMultiTrigger(p0);
}

template<class D, void*** V>
void $ColorSelectPopup<D, V>::onPlayerColor1(cocos2d::CCObject* p0) {
    if ((void($ColorSelectPopup::*)(cocos2d::CCObject*)){&$ColorSelectPopup::onPlayerColor1} != (void(D::*)(cocos2d::CCObject*)){&D::onPlayerColor1})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x422500))(this, p0);
    else return ColorSelectPopup::onPlayerColor1(p0);
}

template<class D, void*** V>
void $ColorSelectPopup<D, V>::onPlayerColor2(cocos2d::CCObject* p0) {
    if ((void($ColorSelectPopup::*)(cocos2d::CCObject*)){&$ColorSelectPopup::onPlayerColor2} != (void(D::*)(cocos2d::CCObject*)){&D::onPlayerColor2})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x4225c0))(this, p0);
    else return ColorSelectPopup::onPlayerColor2(p0);
}

template<class D, void*** V>
void $ColorSelectPopup<D, V>::onSpawnedByTrigger(cocos2d::CCObject* p0) {
    if ((void($ColorSelectPopup::*)(cocos2d::CCObject*)){&$ColorSelectPopup::onSpawnedByTrigger} != (void(D::*)(cocos2d::CCObject*)){&D::onSpawnedByTrigger})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x4227f0))(this, p0);
    else return ColorSelectPopup::onSpawnedByTrigger(p0);
}

template<class D, void*** V>
void $ColorSelectPopup<D, V>::onToggleHSVMode(cocos2d::CCObject* p0) {
    if ((void($ColorSelectPopup::*)(cocos2d::CCObject*)){&$ColorSelectPopup::onToggleHSVMode} != (void(D::*)(cocos2d::CCObject*)){&D::onToggleHSVMode})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x4227b0))(this, p0);
    else return ColorSelectPopup::onToggleHSVMode(p0);
}

template<class D, void*** V>
void $ColorSelectPopup<D, V>::onTouchTriggered(cocos2d::CCObject* p0) {
    if ((void($ColorSelectPopup::*)(cocos2d::CCObject*)){&$ColorSelectPopup::onTouchTriggered} != (void(D::*)(cocos2d::CCObject*)){&D::onTouchTriggered})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x4228b0))(this, p0);
    else return ColorSelectPopup::onTouchTriggered(p0);
}

template<class D, void*** V>
void $ColorSelectPopup<D, V>::show() {
    if ((void($ColorSelectPopup::*)()){&$ColorSelectPopup::show} != (void(D::*)()){&D::show})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x423570))(this);
    else return ColorSelectPopup::show();
}

template<class D, void*** V>
void $ColorSelectPopup<D, V>::sliderChanged(cocos2d::CCObject* p0) {
    if ((void($ColorSelectPopup::*)(cocos2d::CCObject*)){&$ColorSelectPopup::sliderChanged} != (void(D::*)(cocos2d::CCObject*)){&D::sliderChanged})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x421ca0))(this, p0);
    else return ColorSelectPopup::sliderChanged(p0);
}

template<class D, void*** V>
void $ColorSelectPopup<D, V>::updateCopyColor() {
    if ((void($ColorSelectPopup::*)()){&$ColorSelectPopup::updateCopyColor} != (void(D::*)()){&D::updateCopyColor})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x423b70))(this);
    else return ColorSelectPopup::updateCopyColor();
}

template<class D, void*** V>
void $ColorSelectPopup<D, V>::updateCopyColorTextInputLabel() {
    if ((void($ColorSelectPopup::*)()){&$ColorSelectPopup::updateCopyColorTextInputLabel} != (void(D::*)()){&D::updateCopyColorTextInputLabel})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x422ed0))(this);
    else return ColorSelectPopup::updateCopyColorTextInputLabel();
}

template<class D, void*** V>
void $ColorSelectPopup<D, V>::updateDurLabel() {
    if ((void($ColorSelectPopup::*)()){&$ColorSelectPopup::updateDurLabel} != (void(D::*)()){&D::updateDurLabel})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x421eb0))(this);
    else return ColorSelectPopup::updateDurLabel();
}

template<class D, void*** V>
void $ColorSelectPopup<D, V>::updateHSVMode() {
    if ((void($ColorSelectPopup::*)()){&$ColorSelectPopup::updateHSVMode} != (void(D::*)()){&D::updateHSVMode})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x422e00))(this);
    else return ColorSelectPopup::updateHSVMode();
}

template<class D, void*** V>
void $ColorSelectPopup<D, V>::updateOpacityLabel() {
    if ((void($ColorSelectPopup::*)()){&$ColorSelectPopup::updateOpacityLabel} != (void(D::*)()){&D::updateOpacityLabel})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x422000))(this);
    else return ColorSelectPopup::updateOpacityLabel();
}

template<class D, void*** V>
void $ColorSelectPopup<D, V>::updateTouchTriggered() {
    if ((void($ColorSelectPopup::*)()){&$ColorSelectPopup::updateTouchTriggered} != (void(D::*)()){&D::updateTouchTriggered})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x423020))(this);
    else return ColorSelectPopup::updateTouchTriggered();
}


template<class D, void*** V>
$SetupPulsePopup<D, V>::~$SetupPulsePopup() {}

template<class D, void*** V>
$SetupPulsePopup<D, V>::$SetupPulsePopup() {
    m->registerHook(extract_destructor(V), +[](){});

    if ((void($SetupPulsePopup::*)(cocos2d::_ccColor3B)){&$SetupPulsePopup::colorValueChanged} != (void(D::*)(cocos2d::_ccColor3B)){&D::colorValueChanged})
        m->registerHook(base+0x1ec680, extract((void(D::*)(cocos2d::_ccColor3B)){&D::colorValueChanged}));

    if ((SetupPulsePopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&$SetupPulsePopup::create} != (SetupPulsePopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        m->registerHook(base+0x1e6d40, (SetupPulsePopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create});

    if ((bool($SetupPulsePopup::*)(EffectGameObject*, cocos2d::CCArray*)){&$SetupPulsePopup::init} != (bool(D::*)(EffectGameObject*, cocos2d::CCArray*)){&D::init})
        m->registerHook(base+0x1e7010, extract_virtual(V, (bool(D::*)(EffectGameObject*, cocos2d::CCArray*)){&D::init}));
    std::cout << "init: " << (void*)extract_virtual(V, (bool(D::*)(EffectGameObject*, cocos2d::CCArray*)){&D::init}) << std::endl;

    if ((void($SetupPulsePopup::*)(cocos2d::CCObject*)){&$SetupPulsePopup::onSelectPulseMode} != (void(D::*)(cocos2d::CCObject*)){&D::onSelectPulseMode})
        m->registerHook(base+0x1eb020, extract((void(D::*)(cocos2d::CCObject*)){&D::onSelectPulseMode}));

    if ((void($SetupPulsePopup::*)(cocos2d::CCObject*)){&$SetupPulsePopup::onSelectTargetMode} != (void(D::*)(cocos2d::CCObject*)){&D::onSelectTargetMode})
        m->registerHook(base+0x1eac30, extract((void(D::*)(cocos2d::CCObject*)){&D::onSelectTargetMode}));

    if ((void($SetupPulsePopup::*)(cocos2d::CCObject*)){&$SetupPulsePopup::onUpdateCustomColor} != (void(D::*)(cocos2d::CCObject*)){&D::onUpdateCustomColor})
        m->registerHook(base+0x1eaef0, extract((void(D::*)(cocos2d::CCObject*)){&D::onUpdateCustomColor}));

    if ((void($SetupPulsePopup::*)(CCTextInputNode*)){&$SetupPulsePopup::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        m->registerHook(base+0x1ec960, extract_virtual(V, (void(D::*)(CCTextInputNode*)){&D::textChanged}));
    std::cout << "textChanged: " << (void*)extract_virtual(V, (void(D::*)(CCTextInputNode*)){&D::textChanged}) << std::endl;

    if ((void($SetupPulsePopup::*)()){&$SetupPulsePopup::updateCopyColorTextInputLabel} != (void(D::*)()){&D::updateCopyColorTextInputLabel})
        m->registerHook(base+0x1ebf20, extract((void(D::*)()){&D::updateCopyColorTextInputLabel}));

    if ((void($SetupPulsePopup::*)()){&$SetupPulsePopup::updateEditorLabel} != (void(D::*)()){&D::updateEditorLabel})
        m->registerHook(base+0x1ec310, extract((void(D::*)()){&D::updateEditorLabel}));

    if ((void($SetupPulsePopup::*)(bool)){&$SetupPulsePopup::updateFadeOutLabel} != (void(D::*)(bool)){&D::updateFadeOutLabel})
        m->registerHook(base+0x1eba20, extract((void(D::*)(bool)){&D::updateFadeOutLabel}));

    if ((void($SetupPulsePopup::*)()){&$SetupPulsePopup::updateTargetID} != (void(D::*)()){&D::updateTargetID})
        m->registerHook(base+0x1ebbe0, extract((void(D::*)()){&D::updateTargetID}));

    if ((void($SetupPulsePopup::*)()){&$SetupPulsePopup::updateTextInputLabel} != (void(D::*)()){&D::updateTextInputLabel})
        m->registerHook(base+0x1eb8d0, extract((void(D::*)()){&D::updateTextInputLabel}));
}

template<class D, void*** V>
void $SetupPulsePopup<D, V>::colorValueChanged(cocos2d::_ccColor3B p0) {
    if ((void($SetupPulsePopup::*)(cocos2d::_ccColor3B)){&$SetupPulsePopup::colorValueChanged} != (void(D::*)(cocos2d::_ccColor3B)){&D::colorValueChanged})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::_ccColor3B)>(m->getOriginal(base+0x1ec680))(this, p0);
    else return SetupPulsePopup::colorValueChanged(p0);
}

template<class D, void*** V>
SetupPulsePopup* $SetupPulsePopup<D, V>::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    if ((SetupPulsePopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&$SetupPulsePopup::create} != (SetupPulsePopup*(*)(EffectGameObject*, cocos2d::CCArray*)){&D::create})
        return reinterpret_cast<SetupPulsePopup*(*)(EffectGameObject*, cocos2d::CCArray*)>(m->getOriginal(base+0x1e6d40))(p0, p1);
    else return SetupPulsePopup::create(p0, p1);
}

template<class D, void*** V>
bool $SetupPulsePopup<D, V>::init(EffectGameObject* p0, cocos2d::CCArray* p1) {
    if ((bool($SetupPulsePopup::*)(EffectGameObject*, cocos2d::CCArray*)){&$SetupPulsePopup::init} != (bool(D::*)(EffectGameObject*, cocos2d::CCArray*)){&D::init})
        return reinterpret_cast<bool(*)(decltype(this), EffectGameObject*, cocos2d::CCArray*)>(m->getOriginal(base+0x1e7010))(this, p0, p1);
    else return SetupPulsePopup::init(p0, p1);
}

template<class D, void*** V>
void $SetupPulsePopup<D, V>::onSelectPulseMode(cocos2d::CCObject* p0) {
    if ((void($SetupPulsePopup::*)(cocos2d::CCObject*)){&$SetupPulsePopup::onSelectPulseMode} != (void(D::*)(cocos2d::CCObject*)){&D::onSelectPulseMode})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x1eb020))(this, p0);
    else return SetupPulsePopup::onSelectPulseMode(p0);
}

template<class D, void*** V>
void $SetupPulsePopup<D, V>::onSelectTargetMode(cocos2d::CCObject* p0) {
    if ((void($SetupPulsePopup::*)(cocos2d::CCObject*)){&$SetupPulsePopup::onSelectTargetMode} != (void(D::*)(cocos2d::CCObject*)){&D::onSelectTargetMode})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x1eac30))(this, p0);
    else return SetupPulsePopup::onSelectTargetMode(p0);
}

template<class D, void*** V>
void $SetupPulsePopup<D, V>::onUpdateCustomColor(cocos2d::CCObject* p0) {
    if ((void($SetupPulsePopup::*)(cocos2d::CCObject*)){&$SetupPulsePopup::onUpdateCustomColor} != (void(D::*)(cocos2d::CCObject*)){&D::onUpdateCustomColor})
        return reinterpret_cast<void(*)(decltype(this), cocos2d::CCObject*)>(m->getOriginal(base+0x1eaef0))(this, p0);
    else return SetupPulsePopup::onUpdateCustomColor(p0);
}

template<class D, void*** V>
void $SetupPulsePopup<D, V>::textChanged(CCTextInputNode* p0) {
    if ((void($SetupPulsePopup::*)(CCTextInputNode*)){&$SetupPulsePopup::textChanged} != (void(D::*)(CCTextInputNode*)){&D::textChanged})
        return reinterpret_cast<void(*)(decltype(this), CCTextInputNode*)>(m->getOriginal(base+0x1ec960))(this, p0);
    else return SetupPulsePopup::textChanged(p0);
}

template<class D, void*** V>
void $SetupPulsePopup<D, V>::updateCopyColorTextInputLabel() {
    if ((void($SetupPulsePopup::*)()){&$SetupPulsePopup::updateCopyColorTextInputLabel} != (void(D::*)()){&D::updateCopyColorTextInputLabel})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x1ebf20))(this);
    else return SetupPulsePopup::updateCopyColorTextInputLabel();
}

template<class D, void*** V>
void $SetupPulsePopup<D, V>::updateEditorLabel() {
    if ((void($SetupPulsePopup::*)()){&$SetupPulsePopup::updateEditorLabel} != (void(D::*)()){&D::updateEditorLabel})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x1ec310))(this);
    else return SetupPulsePopup::updateEditorLabel();
}

template<class D, void*** V>
void $SetupPulsePopup<D, V>::updateFadeOutLabel(bool p0) {
    if ((void($SetupPulsePopup::*)(bool)){&$SetupPulsePopup::updateFadeOutLabel} != (void(D::*)(bool)){&D::updateFadeOutLabel})
        return reinterpret_cast<void(*)(decltype(this), bool)>(m->getOriginal(base+0x1eba20))(this, p0);
    else return SetupPulsePopup::updateFadeOutLabel(p0);
}

template<class D, void*** V>
void $SetupPulsePopup<D, V>::updateTargetID() {
    if ((void($SetupPulsePopup::*)()){&$SetupPulsePopup::updateTargetID} != (void(D::*)()){&D::updateTargetID})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x1ebbe0))(this);
    else return SetupPulsePopup::updateTargetID();
}

template<class D, void*** V>
void $SetupPulsePopup<D, V>::updateTextInputLabel() {
    if ((void($SetupPulsePopup::*)()){&$SetupPulsePopup::updateTextInputLabel} != (void(D::*)()){&D::updateTextInputLabel})
        return reinterpret_cast<void(*)(decltype(this))>(m->getOriginal(base+0x1eb8d0))(this);
    else return SetupPulsePopup::updateTextInputLabel();
}
