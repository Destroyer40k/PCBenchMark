// All code is property of Spudro Sprölö Games Inc.(TM)

using UnrealBuildTool;
using System.Collections.Generic;

public class PCBenchMarkEditorTarget : TargetRules
{
	public PCBenchMarkEditorTarget(TargetInfo Target)
	{
		Type = TargetType.Editor;
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
