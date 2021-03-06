#pragma once

#include "KingSystem/ActorSystem/actAiAi.h"

namespace uking::ai {

class LastBossDemoWarpRoot : public ksys::act::ai::Ai {
    SEAD_RTTI_OVERRIDE(LastBossDemoWarpRoot, ksys::act::ai::Ai)
public:
    explicit LastBossDemoWarpRoot(const InitArg& arg);
    ~LastBossDemoWarpRoot() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    // static_param at offset 0x38
    const bool* mIsPartsActorTgOn_s{};
};

}  // namespace uking::ai
