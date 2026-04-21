// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SpaceDungeons : ModuleRules
{
	public SpaceDungeons(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "AssetRegistry", "PhysicsCore", "ProceduralMeshComponent" });

    }
}
