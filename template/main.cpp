#include <CacKit>

CAC_HOOKS
// TODO: add working example
class: public $MenuLayer {
	void onMoreGames(CCObject* ob) override {
		FLAlertLayer::create("Cacao", "Hello from custom mod!", "OK")->show();
	}
} MyMod;

END_CAC_HOOKS
