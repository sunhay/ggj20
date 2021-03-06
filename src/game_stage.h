#pragma once

#include <halley.hpp>
#include "services/painter_service.h"
#include "services/input_service.h"
#include "services/rhythm_service.h"
#include "services/item_service.h"
using namespace Halley;

class GameStage : public EntityStage {
public:
	explicit GameStage(std::shared_ptr<ItemService> itemService);
	void init() override;

	void onVariableUpdate(Time) override;
	void onRender(RenderContext&) const override;

private:
	std::shared_ptr<PainterService> painterService;
	std::shared_ptr<RhythmService> rhythmService;
	std::shared_ptr<ItemService> itemService;
	
	std::shared_ptr<World> world;
};
