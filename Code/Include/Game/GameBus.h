
#pragma once

#include <AzCore/EBus/EBus.h>
#include <AzCore/Interface/Interface.h>

namespace Game
{
    class GameRequests
    {
    public:
        AZ_RTTI(GameRequests, "{98723945-f4c7-4380-976b-5a9068da35ff}");
        virtual ~GameRequests() = default;
        // Put your public methods here
    };
    
    class GameBusTraits
        : public AZ::EBusTraits
    {
    public:
        //////////////////////////////////////////////////////////////////////////
        // EBusTraits overrides
        static constexpr AZ::EBusHandlerPolicy HandlerPolicy = AZ::EBusHandlerPolicy::Single;
        static constexpr AZ::EBusAddressPolicy AddressPolicy = AZ::EBusAddressPolicy::Single;
        //////////////////////////////////////////////////////////////////////////
    };

    using GameRequestBus = AZ::EBus<GameRequests, GameBusTraits>;
    using GameInterface = AZ::Interface<GameRequests>;

} // namespace Game
