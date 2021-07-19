
#include <AzCore/Memory/SystemAllocator.h>
#include <AzCore/Module/Module.h>

#include "GameSystemComponent.h"

namespace Game
{
    class GameModule
        : public AZ::Module
    {
    public:
        AZ_RTTI(GameModule, "{d05515ea-bc09-47e4-b933-8dcf87d2315b}", AZ::Module);
        AZ_CLASS_ALLOCATOR(GameModule, AZ::SystemAllocator, 0);

        GameModule()
            : AZ::Module()
        {
            // Push results of [MyComponent]::CreateDescriptor() into m_descriptors here.
            m_descriptors.insert(m_descriptors.end(), {
                GameSystemComponent::CreateDescriptor(),
            });
        }

        /**
         * Add required SystemComponents to the SystemEntity.
         */
        AZ::ComponentTypeList GetRequiredSystemComponents() const override
        {
            return AZ::ComponentTypeList{
                azrtti_typeid<GameSystemComponent>(),
            };
        }
    };
}// namespace Game

AZ_DECLARE_MODULE_CLASS(Gem_Game, Game::GameModule)
