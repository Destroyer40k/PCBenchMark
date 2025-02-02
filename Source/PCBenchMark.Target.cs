// All code is property of Spudro Sprölö Games Inc.(TM)

using UnrealBuildTool;
using System.Collections.Generic;

public class PCBenchMarkTarget : TargetRules
{
	public PCBenchMarkTarget(TargetInfo Target)
	{
		Type = TargetType.Game;
	}

	//
	// TargetRules interface.
	//

	public override void SetupBinaries(
		TargetInfo Target,
		ref List<UEBuildBinaryConfiguration> OutBuildBinaryConfigurations,
		ref List<string> OutExtraModuleNames
		)
	{
		OutExtraModuleNames.AddRange( new string[] { "PCBenchMark" } );
	}
}
