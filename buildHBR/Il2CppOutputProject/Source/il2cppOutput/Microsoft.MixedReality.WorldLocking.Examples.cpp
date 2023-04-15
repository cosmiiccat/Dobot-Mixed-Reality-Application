#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Comparer`1<Microsoft.MixedReality.WorldLocking.Core.AnchorEdge>
struct Comparer_1_t5EAAEEF309FA16965DE84A00A205BD3F1834E7A8;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.WorldLocking.Core.FragmentId,Microsoft.MixedReality.WorldLocking.Tools.FrameVisual>
struct Dictionary_2_t4C88CA1F3A9BD2968AAE9B46AB58FA12C1A5DA39;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.WorldLocking.Tools.FrozenSpatialMapping/SurfaceEntry>
struct Dictionary_2_tD55D00DB4EB3675CD3B728361B2FA38BC666A034;
// System.Collections.Generic.Dictionary`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService>
struct Dictionary_2_tB10C9808D23DAC9AE2AFAC3E40D119A2B74751AC;
// System.Collections.Generic.Dictionary`2<System.UInt32,Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/PointerData>
struct Dictionary_2_t9E5E3CB476248220F91250CBDC69EE2CB1170624;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>
struct HashSet_1_t2FA1E1D55BEABC44A1D48B3609F04EDF8AD396A9;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct IEqualityComparer_1_t3602EB87E54E9A6A0550C4DF80EC5DC1FDE1194D;
// System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.Core.ResourceMirrorHelper.IdPair`2<Microsoft.MixedReality.WorldLocking.Core.AnchorEdge,Microsoft.MixedReality.WorldLocking.Tools.ConnectingLine>>
struct List_1_t09A8682D5A26A44AEDD0F30C2A1CCEC1105AA5E3;
// System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.Core.ResourceMirrorHelper.IdPair`2<Microsoft.MixedReality.WorldLocking.Core.AnchorId,Microsoft.MixedReality.WorldLocking.Tools.ConnectingLine>>
struct List_1_t004A993135700EAC130D72AA134D65E93E9227AD;
// System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.Core.ResourceMirrorHelper.IdPair`2<Microsoft.MixedReality.WorldLocking.Core.AnchorId,Microsoft.MixedReality.WorldLocking.Tools.FrozenAnchorVisual>>
struct List_1_t624F7A61932E0FFDC051E667E85BF1D3FE6D887B;
// System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.Core.ResourceMirrorHelper.IdPair`2<Microsoft.MixedReality.WorldLocking.Core.AnchorId,Microsoft.MixedReality.WorldLocking.Tools.SpongyAnchorVisual>>
struct List_1_tFC0E147DAF8196F5FB4F0B0542195B94C4FA5205;
// System.Collections.Generic.List`1<System.Tuple`2<System.Int32,Microsoft.MixedReality.Toolkit.UI.InteractableThemeBase>>
struct List_1_tCFC343311AB2FDFBB584DCF49A164B4CB5474080;
// System.Collections.Generic.List`1<System.Tuple`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService>>
struct List_1_t5C19375E34F2E589D0BB652CD57BE3C9DC0CEDE5;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.IInteractableHandler>
struct List_1_t1F2536855F349330D7505A2620F64B728A2FE01B;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct List_1_t334A197C1C5E943F4780B2EFB5984089C7C5E3A8;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct List_1_t6E9BDFABC524233989C30EA91E7A597DB4547051;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>
struct List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E;
// System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.Core.IOrientable>
struct List_1_t7E7808B5AD7452DC8D5282C96CF699B2A94E5E26;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.InteractableEvent>
struct List_1_t2C8C60D0C9D4D28E9D7661EEB82AE66755444A6F;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.InteractableProfileItem>
struct List_1_t4E6370BF1C6C7069DEDEC9B47B49BBACB5D69649;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.InteractableThemeBase>
struct List_1_t313C850ADBDD50943181E702F9EAEDBA741F885E;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.MixedRealityToolkit>
struct List_1_t9A515F799E0BF2C22F0A5126C6218D126A8A5D67;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct List_1_tB73BF10E0869BDB4D391E61BA46B75BECA4DCDBE;
// System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.Core.SpacePin>
struct List_1_t53D1C24FA77D2E5EC126BEE9A8EFEE7D081BF037;
// System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.Core.SpacePinOrientable>
struct List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0;
// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction>
struct List_1_t9773BFFC622DE41C9A419069B77965E00FA4C729;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.BoundingBox/Handle>
struct List_1_t83E71016ABDACC541489F5FBBEF4C3570033D7E9;
// System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.Core.Orienter/WeightedRotation>
struct List_1_t2F3BEA23C0D290396EEDC55DC6FDEDF33779F76C;
// UnityEngine.Events.UnityAction`1<Microsoft.MixedReality.Toolkit.UI.ManipulationEventData>
struct UnityAction_1_t73174C87AEE037BF43DD95B66D00BCD7F7A7B4E1;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A;
// UnityEngine.Events.UnityEvent`1<Microsoft.MixedReality.Toolkit.UI.ManipulationEventData>
struct UnityEvent_1_tF8B59F7F477A2B1293FA0D6FAB06D68701BBEBE8;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// System.Collections.Generic.HashSet`1/Slot<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>[]
struct SlotU5BU5D_t90FB981A92704ECB53C1F7AEF092199CF3646D2D;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Microsoft.MixedReality.Toolkit.UI.Interactable[]
struct InteractableU5BU5D_t8E07F182720E15C808FBFE54E7DFE1330D00408C;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Microsoft.MixedReality.WorldLocking.Core.SpacePin[]
struct SpacePinU5BU5D_t1183303575622F5447FEFA6D91C9FEF2F76C5C75;
// Microsoft.MixedReality.WorldLocking.Core.SpacePinOrientable[]
struct SpacePinOrientableU5BU5D_t99066FA1FA5B9454FE1B25B7BDC67DEF9F3D273D;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Microsoft.MixedReality.Toolkit.UI.BoundingBox/CardinalAxisType[]
struct CardinalAxisTypeU5BU5D_t3380B4620B2588C02B8ADB9E5E94DF17ABA6A375;
// Microsoft.MixedReality.WorldLocking.Tools.AdjusterFixed
struct AdjusterFixed_tA49EDC9CBDAFEBD3F101CBEB45425FA4F2865E7E;
// Microsoft.MixedReality.WorldLocking.Tools.AdjusterMoving
struct AdjusterMoving_t656CFCAD82441648E53F023C66612D9F7FBE0683;
// Microsoft.MixedReality.WorldLocking.Examples.AlignmentControl
struct AlignmentControl_tA708D3B02421046D0C7B55F07628626D1472D893;
// Microsoft.MixedReality.WorldLocking.Tools.AnchorGraphVisual
struct AnchorGraphVisual_tD55799591BF2B332DDC5DBFF1E79CE20B7A42926;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// Microsoft.MixedReality.Toolkit.UI.BoundingBox
struct BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1;
// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// Microsoft.MixedReality.WorldLocking.Examples.CircleCam
struct CircleCam_t40F5AF87A6CE410B5C787E2AC36BAD0D850C52EF;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Microsoft.MixedReality.Toolkit.UI.ConstraintManager
struct ConstraintManager_tDEC458FB4546BE535EF6332CEAF94ACD633FF5A9;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand
struct DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19;
// DashboardTagalong
struct DashboardTagalong_t512CB53559A431CDDAE81E9A0725BF9E885CEA5A;
// Microsoft.MixedReality.WorldLocking.Examples.DashboardUI
struct DashboardUI_t5FF56233F29A77F17392EE883CD15F1F90635EFE;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.MixedReality.WorldLocking.Core.Diagnostics
struct Diagnostics_t1E837DAC7BB3D8F92EE1BC7F6359A27B0F583BA4;
// Microsoft.MixedReality.Toolkit.Experimental.Physics.ElasticsManager
struct ElasticsManager_t425F8E2536C8872A95BFEB00BDC361AC376FE9D8;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// System.Exception
struct Exception_t;
// Microsoft.MixedReality.WorldLocking.Examples.FallOut
struct FallOut_t2D5A2E64A1587E18E8602B5982785629786D8B4A;
// Microsoft.MixedReality.Toolkit.UI.FixedRotationToWorldConstraint
struct FixedRotationToWorldConstraint_t6E679FB9DA77F87B06F34E9824A85A73354CBEAB;
// Microsoft.MixedReality.WorldLocking.Tools.FrameVisual
struct FrameVisual_tB453D401B34D36501814CED5379D9180505EA532;
// Microsoft.MixedReality.WorldLocking.Tools.FrozenAnchorVisual
struct FrozenAnchorVisual_t44D06A314D6C08D25381C108F43C035FE44448D5;
// Microsoft.MixedReality.WorldLocking.Tools.FrozenSpatialMapping
struct FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.WorldLocking.Core.IAlignmentManager
struct IAlignmentManager_tFD04FC1FBCB5DFC33D0A385FB7C7B4E7224FF106;
// Microsoft.MixedReality.WorldLocking.Core.IAnchorManager
struct IAnchorManager_tB1FFFF700C45A94CE8729186EF82591176412F41;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Microsoft.MixedReality.WorldLocking.Core.IAttachmentPoint
struct IAttachmentPoint_tB76B402CE1F87B3CB7F12992530782C1E07F1322;
// Microsoft.MixedReality.WorldLocking.Core.IAttachmentPointManager
struct IAttachmentPointManager_tE0705392F0E62EBE38E1F3EDF8592467C84F9655;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Microsoft.MixedReality.WorldLocking.Core.IFragmentManager
struct IFragmentManager_t3EDCE810CF030A6E0896FD6F6B10FF8645B94E11;
// Microsoft.MixedReality.WorldLocking.Core.IHeadPoseTracker
struct IHeadPoseTracker_t75693F813C6002061E2B35E8791F4DBE21814958;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider
struct IMixedRealityEyeGazeProvider_tA854FE94B4C220F8742E193148C51A8C30744627;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_tD261D929DA8A0944B1219F9D547B6A242AFF7FA2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_t7F0507B7CE0C9CDF14089C77B4F5A079AE031B4D;
// Microsoft.MixedReality.WorldLocking.Core.IOrienter
struct IOrienter_t986D0EDBABD089F50E550920DF010E39D5175B35;
// Microsoft.MixedReality.WorldLocking.Core.IPlugin
struct IPlugin_t50E7AAF4782BCDAE818065C4AB020FB1B1A62E4D;
// Microsoft.MixedReality.Toolkit.Input.IPointerResult
struct IPointerResult_t016B5E61BBA35FC618DEF7E4030088A1324DEE06;
// Microsoft.MixedReality.Toolkit.Utilities.ITransformSmoothingLogic
struct ITransformSmoothingLogic_t750FEF9D60B077DECA3D771CA0A9CC9435C5C09C;
// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener
struct InputSystemGlobalHandlerListener_tD6CD2BA60230DF5BC4CBF7CD51B7BFA66074CFB2;
// Microsoft.MixedReality.Toolkit.UI.Interactable
struct Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2;
// Microsoft.MixedReality.Toolkit.UI.InteractableStates
struct InteractableStates_t2A6C503CC23E0814B06888151B77B479260377F8;
// Microsoft.MixedReality.Toolkit.UI.InteractableToggleCollection
struct InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967;
// Microsoft.MixedReality.WorldLocking.Examples.ManipulationEndedDelegate
struct ManipulationEndedDelegate_t3F667BDD0876A1CE0E97765F48B4A6E64F182967;
// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent
struct ManipulationEvent_t72B794DBAD271C9FE714E404CD610357353EA7C6;
// Microsoft.MixedReality.Toolkit.UI.ManipulationEventData
struct ManipulationEventData_t40C9E288184423B4BFB40876DF3F9C8F6565FB12;
// Microsoft.MixedReality.Toolkit.Physics.ManipulationMoveLogic
struct ManipulationMoveLogic_t7CF7B008A0245A65C6D2FA6FE5FAD15ABCA0B450;
// Microsoft.MixedReality.WorldLocking.Examples.ManipulationStartedDelegate
struct ManipulationStartedDelegate_tDE21ED8C580CF3E861222CBD24EC9E94B925A811;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint
struct MinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B;
// Microsoft.MixedReality.Toolkit.MixedRealityToolkit
struct MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE;
// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile
struct MixedRealityToolkitConfigurationProfile_tE122C3244D03B3CF31BF4FF1296889A4AC1722EF;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable
struct NearInteractionGrabbable_tC638302907B386074B3B1B65568C18097BF1BCEF;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator
struct ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A;
// Microsoft.MixedReality.WorldLocking.Core.Orienter
struct Orienter_t1D850D1887AD89DD2EFDB94F24D1E9C57FA074E8;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample
struct PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802;
// Microsoft.MixedReality.WorldLocking.Examples.PinManipulator
struct PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60;
// Microsoft.MixedReality.WorldLocking.Examples.RayPins
struct RayPins_t80A83EA4F8A476C390F6A49E857652EB74E15575;
// RemovableGroup
struct RemovableGroup_tB747F0765FAC888AA3C06D726D6186EAFE9778CF;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// Microsoft.MixedReality.Toolkit.UI.RotationAxisConstraint
struct RotationAxisConstraint_t3D65F29C05CD4E1C12723D07A3E026C45825302E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// Microsoft.MixedReality.WorldLocking.Core.SharedManagerSettings
struct SharedManagerSettings_t1D91D029A5B9B180E6C3C3AD184A8BEFB684AF5D;
// Microsoft.MixedReality.WorldLocking.Core.SpacePin
struct SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C;
// Microsoft.MixedReality.WorldLocking.Examples.SpacePinManipulation
struct SpacePinManipulation_tA67D55B37A96758AE9CE68C4A5792382C5353A79;
// Microsoft.MixedReality.WorldLocking.Core.SpacePinOrientable
struct SpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA;
// Microsoft.MixedReality.WorldLocking.Examples.SpacePinOrientableManipulation
struct SpacePinOrientableManipulation_t63D9969EF984ADC57612A9E05072AE2C9ED0A107;
// Microsoft.MixedReality.WorldLocking.Tools.SpongyAnchorVisual
struct SpongyAnchorVisual_tCE8B26DB799E90D4E2881343CDB18E9B3EC09ECA;
// Microsoft.MixedReality.Toolkit.UI.State
struct State_t8BC3593EACE0EB077EF575219685CFDB44245AB4;
// Microsoft.MixedReality.Toolkit.UI.States
struct States_t3A0D2F08B56A510830163C429CC0A03519958BBE;
// Microsoft.MixedReality.WorldLocking.Tools.StatusToText
struct StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B;
// System.String
struct String_t;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t8D2323983B85594F1037C020D3497109700B78DF;
// UnityEngine.TextMesh
struct TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273;
// Microsoft.MixedReality.WorldLocking.Tools.ToggleWorldAnchor
struct ToggleWorldAnchor_t1B1167AAE4D649411357DCAC4BBEA35B598EB09B;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// Microsoft.MixedReality.Toolkit.UI.TransformConstraint
struct TransformConstraint_tC42A2968CDB77EF526D991D93F93C20FD661454B;
// Microsoft.MixedReality.Toolkit.Physics.TwoHandRotateLogic
struct TwoHandRotateLogic_t72924E0C1332D49B8A5669D566A3E08ABAD9FAEB;
// Microsoft.MixedReality.Toolkit.Physics.TwoHandScaleLogic
struct TwoHandScaleLogic_t39639034614D47F1DAA4093B289FD5724B0F6F6D;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager
struct WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Microsoft.MixedReality.WorldLocking.Tools.StatusToText/FramerateSmoother
struct FramerateSmoother_t22924DE11C116F7E83019A3D6B7FE10D71CD8239;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAlignmentManager_tFD04FC1FBCB5DFC33D0A385FB7C7B4E7224FF106_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFragmentManager_t3EDCE810CF030A6E0896FD6F6B10FF8645B94E11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSource_tD261D929DA8A0944B1219F9D547B6A242AFF7FA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityPointer_t7F0507B7CE0C9CDF14089C77B4F5A079AE031B4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPointerResult_t016B5E61BBA35FC618DEF7E4030088A1324DEE06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t53D1C24FA77D2E5EC126BEE9A8EFEE7D081BF037_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManipulationEndedDelegate_t3F667BDD0876A1CE0E97765F48B4A6E64F182967_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManipulationStartedDelegate_tDE21ED8C580CF3E861222CBD24EC9E94B925A811_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t73174C87AEE037BF43DD95B66D00BCD7F7A7B4E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral123310CAF52783972279A2C3BC30A06F5CBA39DB;
IL2CPP_EXTERN_C String_t* _stringLiteral2BAE22936E965B20132F77887CB50103E66384EB;
IL2CPP_EXTERN_C String_t* _stringLiteral437971DC3A715448465019A0FE8EE437F82C405A;
IL2CPP_EXTERN_C String_t* _stringLiteral5E13FD80AE156319733518F967D5FCCF61262015;
IL2CPP_EXTERN_C String_t* _stringLiteral5E23F63B627BF05B2FE4783B4642D80FB13ADAAE;
IL2CPP_EXTERN_C String_t* _stringLiteral71AADFF9114252C5299242960C0AD7C5778B2AF6;
IL2CPP_EXTERN_C String_t* _stringLiteral7B82B18AD1782E13583CFEE352CDD28F31D8679B;
IL2CPP_EXTERN_C String_t* _stringLiteral8A9D731F99D122FA5CB582F5991B8AD990BE70E7;
IL2CPP_EXTERN_C String_t* _stringLiteralB67505E7C73A4510B3B2D790BCB4185A91253C89;
IL2CPP_EXTERN_C String_t* _stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F;
IL2CPP_EXTERN_C String_t* _stringLiteralCA6A4D943C42DF6E91CE1FAA4D2A1735BE77C53A;
IL2CPP_EXTERN_C String_t* _stringLiteralE1163672BDA87F0D7E57DC697ABFD6BE20B56C2C;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A_m709576930557497FED624473DFA5CBFAB9FFFD05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DashboardUI_Start_m0C31D6ABCA754BBB12BD9B77C602CDEE261FC83C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8BD89A610860F51ACE6A506C5A08FE6985B52F28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m573A880FC0E7571C5CA76ED316166EA2D4EF4C5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mEA6E4D9F75E5071D43A8E01F751ADC4BDF95E54C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAdjusterFixed_tA49EDC9CBDAFEBD3F101CBEB45425FA4F2865E7E_m16FFB7FEC5E38A1EA9C695F7C356086B435A22FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAdjusterMoving_t656CFCAD82441648E53F023C66612D9F7FBE0683_mEA354BE90AE2D592090267870390B4A4BBB6B47E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisBoundingBox_tA8279F2A60922226778FBAE32762501395F477A1_m63FD6B1F77791B5142173669B0766859FBADB58A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisFixedRotationToWorldConstraint_t6E679FB9DA77F87B06F34E9824A85A73354CBEAB_m5C7DE39BF227B2457097A37DAA985181A6366DCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mDBF1085005984D110DBAB1A2051888DC0AAC10B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A_m94BE0BF48B4D50E5DB4731F254654647CFFC6725_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisNearInteractionGrabbable_tC638302907B386074B3B1B65568C18097BF1BCEF_m6F533CF22B0474A04C2B1A98CDF63CC0A4405632_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A_m33727D702B5BFB1E887C61522683758C62F86027_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisOrienter_t1D850D1887AD89DD2EFDB94F24D1E9C57FA074E8_m7E43895EC882942C1B5968A0ED85181A8CBD96C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRotationAxisConstraint_t3D65F29C05CD4E1C12723D07A3E026C45825302E_m65B8ECE1671815BA392AAF8A6CC3744A1BCFEC37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA_m34AC37F82442D467745DA9AA267BDEC17EC8A48D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisToggleWorldAnchor_t1B1167AAE4D649411357DCAC4BBEA35B598EB09B_m0D1B8B398B187CC3C580F8FA6979E6BF6D401B96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisInteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3_mFF4B3B02955DD127EBFD08074FDEB8454B220CE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInParent_TisRemovableGroup_tB747F0765FAC888AA3C06D726D6186EAFE9778CF_m8D9BD2AEE08637025C6D9942A72F571522FA8F5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisInteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3_m3A8BBDA4A6AF0F54B542138B15B016407A04E908_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m65BF4DCFFA4B50A7750E9C10FAB56E8F8DF7D5CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_RegisterHandler_TisIMixedRealityPointerHandler_t4AA3CD5AE323E36508E2F319C9D03C7E3F9DAA99_m4EC12F6AF105651978448E47AE0B2D0A295B3483_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealityPointerHandler_t4AA3CD5AE323E36508E2F319C9D03C7E3F9DAA99_m4E98E9CC54DD1412E31FFA6243F9BF857FAA1797_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0119A1E59498B6B1FA0BC59434091CEB3CD6FD36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC71E73709B0A23EAA2DDFEFA2B0BDE676B33BC42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mB3208B95CDCA713484F19943EA3416DBB458A782_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5F03E31D78BD2456C712D2A3B88EE7F7C0BDFA24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mED46D392961B69BB966471AEFF096B9FD6351057_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mFA3D6FC02C5D3E8D60430F40FD47778E33A7B912_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m19771EC4BDF52DDFD8BC1D6856D05C8D5482F2C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1A6C15CD0C7CDDAB010D34F34754D7246E86FC93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mEA79704C82B87831C3E1F520F7383F66EBF9136D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2E145695A7EEFF3435C01F08773CC6405908B713_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m321A0F9B2CBFB4475A0D7369774E6E65A0ED105F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD3A9CB8A7FBD13AE79C7AEBF6B32368A750F2637_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityToolkit_GetService_TisIMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_m330D38E8B3326095CEBD76787F0985C8F6A82D39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PinManipulator_BeginManipulation_m2C9E76E9FAEC239D823F25B2636910EB3865B821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PinManipulator_BeginManipulation_m5694015069A458F5BDFDDDD18A49F03EBE1123A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PinManipulator_FinishManipulation_m6918B71B9F0CEC66354348B19B2E8FCF6E648810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PinManipulator_FinishManipulation_m89776A45DF924FC62F61282A1DBDD1BED49A78B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_m4F277527BC123D3B17B4AD12E6E9F5A10FBFE14C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mE5431134F630389C71A303A726B8813D541C5139_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct RayStepU5BU5D_t5B0462BE188D5AF7E8FE020DC4C618AA1F4BABE0;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t736A4A9F4E4E93CB7B699B2D7F939CACEECAA7F1 
{
public:

public:
};


// System.Object


// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t90FB981A92704ECB53C1F7AEF092199CF3646D2D* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944, ____slots_8)); }
	inline SlotU5BU5D_t90FB981A92704ECB53C1F7AEF092199CF3646D2D* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t90FB981A92704ECB53C1F7AEF092199CF3646D2D** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t90FB981A92704ECB53C1F7AEF092199CF3646D2D* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>
struct List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E, ____items_1)); }
	inline IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F* get__items_1() const { return ____items_1; }
	inline IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E_StaticFields, ____emptyArray_5)); }
	inline IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.Core.SpacePin>
struct List_1_t53D1C24FA77D2E5EC126BEE9A8EFEE7D081BF037  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SpacePinU5BU5D_t1183303575622F5447FEFA6D91C9FEF2F76C5C75* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t53D1C24FA77D2E5EC126BEE9A8EFEE7D081BF037, ____items_1)); }
	inline SpacePinU5BU5D_t1183303575622F5447FEFA6D91C9FEF2F76C5C75* get__items_1() const { return ____items_1; }
	inline SpacePinU5BU5D_t1183303575622F5447FEFA6D91C9FEF2F76C5C75** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SpacePinU5BU5D_t1183303575622F5447FEFA6D91C9FEF2F76C5C75* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t53D1C24FA77D2E5EC126BEE9A8EFEE7D081BF037, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t53D1C24FA77D2E5EC126BEE9A8EFEE7D081BF037, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t53D1C24FA77D2E5EC126BEE9A8EFEE7D081BF037, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t53D1C24FA77D2E5EC126BEE9A8EFEE7D081BF037_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SpacePinU5BU5D_t1183303575622F5447FEFA6D91C9FEF2F76C5C75* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t53D1C24FA77D2E5EC126BEE9A8EFEE7D081BF037_StaticFields, ____emptyArray_5)); }
	inline SpacePinU5BU5D_t1183303575622F5447FEFA6D91C9FEF2F76C5C75* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SpacePinU5BU5D_t1183303575622F5447FEFA6D91C9FEF2F76C5C75** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SpacePinU5BU5D_t1183303575622F5447FEFA6D91C9FEF2F76C5C75* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.Core.SpacePinOrientable>
struct List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SpacePinOrientableU5BU5D_t99066FA1FA5B9454FE1B25B7BDC67DEF9F3D273D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56, ____items_1)); }
	inline SpacePinOrientableU5BU5D_t99066FA1FA5B9454FE1B25B7BDC67DEF9F3D273D* get__items_1() const { return ____items_1; }
	inline SpacePinOrientableU5BU5D_t99066FA1FA5B9454FE1B25B7BDC67DEF9F3D273D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SpacePinOrientableU5BU5D_t99066FA1FA5B9454FE1B25B7BDC67DEF9F3D273D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SpacePinOrientableU5BU5D_t99066FA1FA5B9454FE1B25B7BDC67DEF9F3D273D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56_StaticFields, ____emptyArray_5)); }
	inline SpacePinOrientableU5BU5D_t99066FA1FA5B9454FE1B25B7BDC67DEF9F3D273D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SpacePinOrientableU5BU5D_t99066FA1FA5B9454FE1B25B7BDC67DEF9F3D273D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SpacePinOrientableU5BU5D_t99066FA1FA5B9454FE1B25B7BDC67DEF9F3D273D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____items_1)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_StaticFields, ____emptyArray_5)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// Microsoft.MixedReality.WorldLocking.Examples.PinManipulator
struct PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60  : public RuntimeObject
{
public:
	// System.Boolean Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::userOriented
	bool ___userOriented_0;
	// UnityEngine.Transform Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::owner
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___owner_1;
	// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::prefabFeelerRay
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefabFeelerRay_2;
	// Microsoft.MixedReality.WorldLocking.Examples.ManipulationStartedDelegate Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::manipulationStarted
	ManipulationStartedDelegate_tDE21ED8C580CF3E861222CBD24EC9E94B925A811 * ___manipulationStarted_3;
	// Microsoft.MixedReality.WorldLocking.Examples.ManipulationEndedDelegate Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::manipulationEnded
	ManipulationEndedDelegate_t3F667BDD0876A1CE0E97765F48B4A6E64F182967 * ___manipulationEnded_4;
	// Microsoft.MixedReality.Toolkit.UI.BoundingBox Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::boundingBox
	BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1 * ___boundingBox_5;
	// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::manipulationHandler
	ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A * ___manipulationHandler_6;
	// Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::nearGrabbable
	NearInteractionGrabbable_tC638302907B386074B3B1B65568C18097BF1BCEF * ___nearGrabbable_7;
	// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::feelerRays
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___feelerRays_8;

public:
	inline static int32_t get_offset_of_userOriented_0() { return static_cast<int32_t>(offsetof(PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60, ___userOriented_0)); }
	inline bool get_userOriented_0() const { return ___userOriented_0; }
	inline bool* get_address_of_userOriented_0() { return &___userOriented_0; }
	inline void set_userOriented_0(bool value)
	{
		___userOriented_0 = value;
	}

	inline static int32_t get_offset_of_owner_1() { return static_cast<int32_t>(offsetof(PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60, ___owner_1)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_owner_1() const { return ___owner_1; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_owner_1() { return &___owner_1; }
	inline void set_owner_1(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___owner_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___owner_1), (void*)value);
	}

	inline static int32_t get_offset_of_prefabFeelerRay_2() { return static_cast<int32_t>(offsetof(PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60, ___prefabFeelerRay_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_prefabFeelerRay_2() const { return ___prefabFeelerRay_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_prefabFeelerRay_2() { return &___prefabFeelerRay_2; }
	inline void set_prefabFeelerRay_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___prefabFeelerRay_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefabFeelerRay_2), (void*)value);
	}

	inline static int32_t get_offset_of_manipulationStarted_3() { return static_cast<int32_t>(offsetof(PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60, ___manipulationStarted_3)); }
	inline ManipulationStartedDelegate_tDE21ED8C580CF3E861222CBD24EC9E94B925A811 * get_manipulationStarted_3() const { return ___manipulationStarted_3; }
	inline ManipulationStartedDelegate_tDE21ED8C580CF3E861222CBD24EC9E94B925A811 ** get_address_of_manipulationStarted_3() { return &___manipulationStarted_3; }
	inline void set_manipulationStarted_3(ManipulationStartedDelegate_tDE21ED8C580CF3E861222CBD24EC9E94B925A811 * value)
	{
		___manipulationStarted_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___manipulationStarted_3), (void*)value);
	}

	inline static int32_t get_offset_of_manipulationEnded_4() { return static_cast<int32_t>(offsetof(PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60, ___manipulationEnded_4)); }
	inline ManipulationEndedDelegate_t3F667BDD0876A1CE0E97765F48B4A6E64F182967 * get_manipulationEnded_4() const { return ___manipulationEnded_4; }
	inline ManipulationEndedDelegate_t3F667BDD0876A1CE0E97765F48B4A6E64F182967 ** get_address_of_manipulationEnded_4() { return &___manipulationEnded_4; }
	inline void set_manipulationEnded_4(ManipulationEndedDelegate_t3F667BDD0876A1CE0E97765F48B4A6E64F182967 * value)
	{
		___manipulationEnded_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___manipulationEnded_4), (void*)value);
	}

	inline static int32_t get_offset_of_boundingBox_5() { return static_cast<int32_t>(offsetof(PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60, ___boundingBox_5)); }
	inline BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1 * get_boundingBox_5() const { return ___boundingBox_5; }
	inline BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1 ** get_address_of_boundingBox_5() { return &___boundingBox_5; }
	inline void set_boundingBox_5(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1 * value)
	{
		___boundingBox_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundingBox_5), (void*)value);
	}

	inline static int32_t get_offset_of_manipulationHandler_6() { return static_cast<int32_t>(offsetof(PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60, ___manipulationHandler_6)); }
	inline ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A * get_manipulationHandler_6() const { return ___manipulationHandler_6; }
	inline ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A ** get_address_of_manipulationHandler_6() { return &___manipulationHandler_6; }
	inline void set_manipulationHandler_6(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A * value)
	{
		___manipulationHandler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___manipulationHandler_6), (void*)value);
	}

	inline static int32_t get_offset_of_nearGrabbable_7() { return static_cast<int32_t>(offsetof(PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60, ___nearGrabbable_7)); }
	inline NearInteractionGrabbable_tC638302907B386074B3B1B65568C18097BF1BCEF * get_nearGrabbable_7() const { return ___nearGrabbable_7; }
	inline NearInteractionGrabbable_tC638302907B386074B3B1B65568C18097BF1BCEF ** get_address_of_nearGrabbable_7() { return &___nearGrabbable_7; }
	inline void set_nearGrabbable_7(NearInteractionGrabbable_tC638302907B386074B3B1B65568C18097BF1BCEF * value)
	{
		___nearGrabbable_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nearGrabbable_7), (void*)value);
	}

	inline static int32_t get_offset_of_feelerRays_8() { return static_cast<int32_t>(offsetof(PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60, ___feelerRays_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_feelerRays_8() const { return ___feelerRays_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_feelerRays_8() { return &___feelerRays_8; }
	inline void set_feelerRays_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___feelerRays_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___feelerRays_8), (void*)value);
	}
};

struct PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_StaticFields
{
public:
	// UnityEngine.Transform Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::feelerRayParent
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___feelerRayParent_9;

public:
	inline static int32_t get_offset_of_feelerRayParent_9() { return static_cast<int32_t>(offsetof(PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_StaticFields, ___feelerRayParent_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_feelerRayParent_9() const { return ___feelerRayParent_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_feelerRayParent_9() { return &___feelerRayParent_9; }
	inline void set_feelerRayParent_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___feelerRayParent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___feelerRayParent_9), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct Enumerator_t25AA8A27379794BCEB27B5E997A36A120A989886 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t25AA8A27379794BCEB27B5E997A36A120A989886, ____set_0)); }
	inline HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 * get__set_0() const { return ____set_0; }
	inline HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t25AA8A27379794BCEB27B5E997A36A120A989886, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t25AA8A27379794BCEB27B5E997A36A120A989886, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t25AA8A27379794BCEB27B5E997A36A120A989886, ____current_3)); }
	inline RuntimeObject* get__current_3() const { return ____current_3; }
	inline RuntimeObject** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject* value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject * ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____set_0)); }
	inline HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * get__set_0() const { return ____set_0; }
	inline HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____current_3)); }
	inline RuntimeObject * get__current_3() const { return ____current_3; }
	inline RuntimeObject ** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject * value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<Microsoft.MixedReality.Toolkit.UI.ManipulationEventData>
struct UnityEvent_1_tF8B59F7F477A2B1293FA0D6FAB06D68701BBEBE8  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tF8B59F7F477A2B1293FA0D6FAB06D68701BBEBE8, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// Microsoft.MixedReality.WorldLocking.Core.ManagerSettings
struct ManagerSettings_t6EEBD6C5F66E722A7D437D19F89E1766A66DDF3D 
{
public:
	// System.Boolean Microsoft.MixedReality.WorldLocking.Core.ManagerSettings::useDefaults
	bool ___useDefaults_0;
	// System.Boolean Microsoft.MixedReality.WorldLocking.Core.ManagerSettings::Enabled
	bool ___Enabled_1;
	// System.Boolean Microsoft.MixedReality.WorldLocking.Core.ManagerSettings::AutoMerge
	bool ___AutoMerge_2;
	// System.Boolean Microsoft.MixedReality.WorldLocking.Core.ManagerSettings::AutoRefreeze
	bool ___AutoRefreeze_3;
	// System.Boolean Microsoft.MixedReality.WorldLocking.Core.ManagerSettings::AutoLoad
	bool ___AutoLoad_4;
	// System.Boolean Microsoft.MixedReality.WorldLocking.Core.ManagerSettings::AutoSave
	bool ___AutoSave_5;

public:
	inline static int32_t get_offset_of_useDefaults_0() { return static_cast<int32_t>(offsetof(ManagerSettings_t6EEBD6C5F66E722A7D437D19F89E1766A66DDF3D, ___useDefaults_0)); }
	inline bool get_useDefaults_0() const { return ___useDefaults_0; }
	inline bool* get_address_of_useDefaults_0() { return &___useDefaults_0; }
	inline void set_useDefaults_0(bool value)
	{
		___useDefaults_0 = value;
	}

	inline static int32_t get_offset_of_Enabled_1() { return static_cast<int32_t>(offsetof(ManagerSettings_t6EEBD6C5F66E722A7D437D19F89E1766A66DDF3D, ___Enabled_1)); }
	inline bool get_Enabled_1() const { return ___Enabled_1; }
	inline bool* get_address_of_Enabled_1() { return &___Enabled_1; }
	inline void set_Enabled_1(bool value)
	{
		___Enabled_1 = value;
	}

	inline static int32_t get_offset_of_AutoMerge_2() { return static_cast<int32_t>(offsetof(ManagerSettings_t6EEBD6C5F66E722A7D437D19F89E1766A66DDF3D, ___AutoMerge_2)); }
	inline bool get_AutoMerge_2() const { return ___AutoMerge_2; }
	inline bool* get_address_of_AutoMerge_2() { return &___AutoMerge_2; }
	inline void set_AutoMerge_2(bool value)
	{
		___AutoMerge_2 = value;
	}

	inline static int32_t get_offset_of_AutoRefreeze_3() { return static_cast<int32_t>(offsetof(ManagerSettings_t6EEBD6C5F66E722A7D437D19F89E1766A66DDF3D, ___AutoRefreeze_3)); }
	inline bool get_AutoRefreeze_3() const { return ___AutoRefreeze_3; }
	inline bool* get_address_of_AutoRefreeze_3() { return &___AutoRefreeze_3; }
	inline void set_AutoRefreeze_3(bool value)
	{
		___AutoRefreeze_3 = value;
	}

	inline static int32_t get_offset_of_AutoLoad_4() { return static_cast<int32_t>(offsetof(ManagerSettings_t6EEBD6C5F66E722A7D437D19F89E1766A66DDF3D, ___AutoLoad_4)); }
	inline bool get_AutoLoad_4() const { return ___AutoLoad_4; }
	inline bool* get_address_of_AutoLoad_4() { return &___AutoLoad_4; }
	inline void set_AutoLoad_4(bool value)
	{
		___AutoLoad_4 = value;
	}

	inline static int32_t get_offset_of_AutoSave_5() { return static_cast<int32_t>(offsetof(ManagerSettings_t6EEBD6C5F66E722A7D437D19F89E1766A66DDF3D, ___AutoSave_5)); }
	inline bool get_AutoSave_5() const { return ___AutoSave_5; }
	inline bool* get_address_of_AutoSave_5() { return &___AutoSave_5; }
	inline void set_AutoSave_5(bool value)
	{
		___AutoSave_5 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.WorldLocking.Core.ManagerSettings
struct ManagerSettings_t6EEBD6C5F66E722A7D437D19F89E1766A66DDF3D_marshaled_pinvoke
{
	int32_t ___useDefaults_0;
	int32_t ___Enabled_1;
	int32_t ___AutoMerge_2;
	int32_t ___AutoRefreeze_3;
	int32_t ___AutoLoad_4;
	int32_t ___AutoSave_5;
};
// Native definition for COM marshalling of Microsoft.MixedReality.WorldLocking.Core.ManagerSettings
struct ManagerSettings_t6EEBD6C5F66E722A7D437D19F89E1766A66DDF3D_marshaled_com
{
	int32_t ___useDefaults_0;
	int32_t ___Enabled_1;
	int32_t ___AutoMerge_2;
	int32_t ___AutoRefreeze_3;
	int32_t ___AutoLoad_4;
	int32_t ___AutoSave_5;
};

// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 
{
public:
	// T System.Nullable`1::value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___value_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_value_0() const { return ___value_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AxisFlags
struct AxisFlags_t959237216BA91C79455FAA8394721C20908ED31A 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisFlags_t959237216BA91C79455FAA8394721C20908ED31A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct AxisType_tFA382360CBEDF34BB549410E81A1B1D1FA76A459 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_tFA382360CBEDF34BB549410E81A1B1D1FA76A459, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.ForceMode
struct ForceMode_t7778317A4C46140D50D98811D65A7B22E38163D5 
{
public:
	// System.Int32 UnityEngine.ForceMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ForceMode_t7778317A4C46140D50D98811D65A7B22E38163D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct Handedness_t1B5FD9A7BE51F5D347A4366FD841FBFC26B7BD21 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t1B5FD9A7BE51F5D347A4366FD841FBFC26B7BD21, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent
struct ManipulationEvent_t72B794DBAD271C9FE714E404CD610357353EA7C6  : public UnityEvent_1_tF8B59F7F477A2B1293FA0D6FAB06D68701BBEBE8
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.UI.ManipulationEventData
struct ManipulationEventData_t40C9E288184423B4BFB40876DF3F9C8F6565FB12  : public RuntimeObject
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.ManipulationEventData::<ManipulationSource>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CManipulationSourceU3Ek__BackingField_0;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.UI.ManipulationEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ManipulationEventData::<IsNearInteraction>k__BackingField
	bool ___U3CIsNearInteractionU3Ek__BackingField_2;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.ManipulationEventData::<PointerCentroid>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointerCentroidU3Ek__BackingField_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.ManipulationEventData::<PointerVelocity>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointerVelocityU3Ek__BackingField_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.ManipulationEventData::<PointerAngularVelocity>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointerAngularVelocityU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CManipulationSourceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ManipulationEventData_t40C9E288184423B4BFB40876DF3F9C8F6565FB12, ___U3CManipulationSourceU3Ek__BackingField_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CManipulationSourceU3Ek__BackingField_0() const { return ___U3CManipulationSourceU3Ek__BackingField_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CManipulationSourceU3Ek__BackingField_0() { return &___U3CManipulationSourceU3Ek__BackingField_0; }
	inline void set_U3CManipulationSourceU3Ek__BackingField_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CManipulationSourceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CManipulationSourceU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ManipulationEventData_t40C9E288184423B4BFB40876DF3F9C8F6565FB12, ___U3CPointerU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_1() const { return ___U3CPointerU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_1() { return &___U3CPointerU3Ek__BackingField_1; }
	inline void set_U3CPointerU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsNearInteractionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ManipulationEventData_t40C9E288184423B4BFB40876DF3F9C8F6565FB12, ___U3CIsNearInteractionU3Ek__BackingField_2)); }
	inline bool get_U3CIsNearInteractionU3Ek__BackingField_2() const { return ___U3CIsNearInteractionU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsNearInteractionU3Ek__BackingField_2() { return &___U3CIsNearInteractionU3Ek__BackingField_2; }
	inline void set_U3CIsNearInteractionU3Ek__BackingField_2(bool value)
	{
		___U3CIsNearInteractionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CPointerCentroidU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ManipulationEventData_t40C9E288184423B4BFB40876DF3F9C8F6565FB12, ___U3CPointerCentroidU3Ek__BackingField_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CPointerCentroidU3Ek__BackingField_3() const { return ___U3CPointerCentroidU3Ek__BackingField_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CPointerCentroidU3Ek__BackingField_3() { return &___U3CPointerCentroidU3Ek__BackingField_3; }
	inline void set_U3CPointerCentroidU3Ek__BackingField_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CPointerCentroidU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CPointerVelocityU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ManipulationEventData_t40C9E288184423B4BFB40876DF3F9C8F6565FB12, ___U3CPointerVelocityU3Ek__BackingField_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CPointerVelocityU3Ek__BackingField_4() const { return ___U3CPointerVelocityU3Ek__BackingField_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CPointerVelocityU3Ek__BackingField_4() { return &___U3CPointerVelocityU3Ek__BackingField_4; }
	inline void set_U3CPointerVelocityU3Ek__BackingField_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CPointerVelocityU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CPointerAngularVelocityU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ManipulationEventData_t40C9E288184423B4BFB40876DF3F9C8F6565FB12, ___U3CPointerAngularVelocityU3Ek__BackingField_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CPointerAngularVelocityU3Ek__BackingField_5() const { return ___U3CPointerAngularVelocityU3Ek__BackingField_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CPointerAngularVelocityU3Ek__BackingField_5() { return &___U3CPointerAngularVelocityU3Ek__BackingField_5; }
	inline void set_U3CPointerAngularVelocityU3Ek__BackingField_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CPointerAngularVelocityU3Ek__BackingField_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.ManipulationHandFlags
struct ManipulationHandFlags_t21E9A13AAD886D3FFCA949D4873DBDBB9FC58024 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ManipulationHandFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ManipulationHandFlags_t21E9A13AAD886D3FFCA949D4873DBDBB9FC58024, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.ManipulationProximityFlags
struct ManipulationProximityFlags_t532FD5B2F322C44B21D1903E7394E7DE0040B1B6 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ManipulationProximityFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ManipulationProximityFlags_t532FD5B2F322C44B21D1903E7394E7DE0040B1B6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99, ___position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_1() const { return ___position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99, ___rotation_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::barycentricCoordinate
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___barycentricCoordinate_2;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::distance
	float ___distance_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::triangleIndex
	int32_t ___triangleIndex_4;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::textureCoord
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord_5;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::textureCoord2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord2_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_7;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::lightmapCoord
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lightmapCoord_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::raycastValid
	bool ___raycastValid_9;
	// UnityEngine.Collider Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collider_10;

public:
	inline static int32_t get_offset_of_point_0() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_point_0() const { return ___point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_point_0() { return &___point_0; }
	inline void set_point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___point_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_normal_1() const { return ___normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_barycentricCoordinate_2() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___barycentricCoordinate_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_barycentricCoordinate_2() const { return ___barycentricCoordinate_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_barycentricCoordinate_2() { return &___barycentricCoordinate_2; }
	inline void set_barycentricCoordinate_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___barycentricCoordinate_2 = value;
	}

	inline static int32_t get_offset_of_distance_3() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___distance_3)); }
	inline float get_distance_3() const { return ___distance_3; }
	inline float* get_address_of_distance_3() { return &___distance_3; }
	inline void set_distance_3(float value)
	{
		___distance_3 = value;
	}

	inline static int32_t get_offset_of_triangleIndex_4() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___triangleIndex_4)); }
	inline int32_t get_triangleIndex_4() const { return ___triangleIndex_4; }
	inline int32_t* get_address_of_triangleIndex_4() { return &___triangleIndex_4; }
	inline void set_triangleIndex_4(int32_t value)
	{
		___triangleIndex_4 = value;
	}

	inline static int32_t get_offset_of_textureCoord_5() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___textureCoord_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_textureCoord_5() const { return ___textureCoord_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_textureCoord_5() { return &___textureCoord_5; }
	inline void set_textureCoord_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___textureCoord_5 = value;
	}

	inline static int32_t get_offset_of_textureCoord2_6() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___textureCoord2_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_textureCoord2_6() const { return ___textureCoord2_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_textureCoord2_6() { return &___textureCoord2_6; }
	inline void set_textureCoord2_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___textureCoord2_6 = value;
	}

	inline static int32_t get_offset_of_transform_7() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___transform_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_transform_7() const { return ___transform_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_transform_7() { return &___transform_7; }
	inline void set_transform_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___transform_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transform_7), (void*)value);
	}

	inline static int32_t get_offset_of_lightmapCoord_8() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___lightmapCoord_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_lightmapCoord_8() const { return ___lightmapCoord_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_lightmapCoord_8() { return &___lightmapCoord_8; }
	inline void set_lightmapCoord_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___lightmapCoord_8 = value;
	}

	inline static int32_t get_offset_of_raycastValid_9() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___raycastValid_9)); }
	inline bool get_raycastValid_9() const { return ___raycastValid_9; }
	inline bool* get_address_of_raycastValid_9() { return &___raycastValid_9; }
	inline void set_raycastValid_9(bool value)
	{
		___raycastValid_9 = value;
	}

	inline static int32_t get_offset_of_collider_10() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4, ___collider_10)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_collider_10() const { return ___collider_10; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_collider_10() { return &___collider_10; }
	inline void set_collider_10(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___collider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collider_10), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___barycentricCoordinate_2;
	float ___distance_3;
	int32_t ___triangleIndex_4;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord_5;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord2_6;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_7;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lightmapCoord_8;
	int32_t ___raycastValid_9;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collider_10;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___barycentricCoordinate_2;
	float ___distance_3;
	int32_t ___triangleIndex_4;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord_5;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord2_6;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_7;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lightmapCoord_8;
	int32_t ___raycastValid_9;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collider_10;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Physics.RayStep
struct RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Origin>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3COriginU3Ek__BackingField_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Terminus>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CTerminusU3Ek__BackingField_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Direction>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CDirectionU3Ek__BackingField_5;
	// System.Single Microsoft.MixedReality.Toolkit.Physics.RayStep::<Length>k__BackingField
	float ___U3CLengthU3Ek__BackingField_6;
	// System.Single Microsoft.MixedReality.Toolkit.Physics.RayStep::epsilon
	float ___epsilon_7;

public:
	inline static int32_t get_offset_of_U3COriginU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399, ___U3COriginU3Ek__BackingField_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3COriginU3Ek__BackingField_3() const { return ___U3COriginU3Ek__BackingField_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3COriginU3Ek__BackingField_3() { return &___U3COriginU3Ek__BackingField_3; }
	inline void set_U3COriginU3Ek__BackingField_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3COriginU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTerminusU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399, ___U3CTerminusU3Ek__BackingField_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CTerminusU3Ek__BackingField_4() const { return ___U3CTerminusU3Ek__BackingField_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CTerminusU3Ek__BackingField_4() { return &___U3CTerminusU3Ek__BackingField_4; }
	inline void set_U3CTerminusU3Ek__BackingField_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CTerminusU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CDirectionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399, ___U3CDirectionU3Ek__BackingField_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CDirectionU3Ek__BackingField_5() const { return ___U3CDirectionU3Ek__BackingField_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CDirectionU3Ek__BackingField_5() { return &___U3CDirectionU3Ek__BackingField_5; }
	inline void set_U3CDirectionU3Ek__BackingField_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CDirectionU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399, ___U3CLengthU3Ek__BackingField_6)); }
	inline float get_U3CLengthU3Ek__BackingField_6() const { return ___U3CLengthU3Ek__BackingField_6; }
	inline float* get_address_of_U3CLengthU3Ek__BackingField_6() { return &___U3CLengthU3Ek__BackingField_6; }
	inline void set_U3CLengthU3Ek__BackingField_6(float value)
	{
		___U3CLengthU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_epsilon_7() { return static_cast<int32_t>(offsetof(RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399, ___epsilon_7)); }
	inline float get_epsilon_7() const { return ___epsilon_7; }
	inline float* get_address_of_epsilon_7() { return &___epsilon_7; }
	inline void set_epsilon_7(float value)
	{
		___epsilon_7 = value;
	}
};

struct RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399_StaticFields
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::dist
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dist_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::dir
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dir_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::pos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos_2;

public:
	inline static int32_t get_offset_of_dist_0() { return static_cast<int32_t>(offsetof(RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399_StaticFields, ___dist_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_dist_0() const { return ___dist_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_dist_0() { return &___dist_0; }
	inline void set_dist_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___dist_0 = value;
	}

	inline static int32_t get_offset_of_dir_1() { return static_cast<int32_t>(offsetof(RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399_StaticFields, ___dir_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_dir_1() const { return ___dir_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_dir_1() { return &___dir_1; }
	inline void set_dir_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___dir_1 = value;
	}

	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399_StaticFields, ___pos_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_pos_2() const { return ___pos_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___pos_2 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// Microsoft.MixedReality.Toolkit.Utilities.TransformFlags
struct TransformFlags_t84F125F9792E76BD88C70BF5A85ED4FAC5D411BB 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TransformFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TransformFlags_t84F125F9792E76BD88C70BF5A85ED4FAC5D411BB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.BoundingBox/BoundingBoxActivationType
struct BoundingBoxActivationType_t84A59B2AB6C58FB2C43054323908149CDA6EEA7A 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.BoundingBox/BoundingBoxActivationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BoundingBoxActivationType_t84A59B2AB6C58FB2C43054323908149CDA6EEA7A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.BoundingBox/BoundsCalculationMethod
struct BoundsCalculationMethod_tCE30EA177A6576E1395E4A1C3E9D82633BF014C0 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.BoundingBox/BoundsCalculationMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BoundsCalculationMethod_tCE30EA177A6576E1395E4A1C3E9D82633BF014C0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.BoundingBox/FlattenModeType
struct FlattenModeType_tB050308B1026AB19D0C4771593FFEA351F5E11B5 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.BoundingBox/FlattenModeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FlattenModeType_tB050308B1026AB19D0C4771593FFEA351F5E11B5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.BoundingBox/HandleType
struct HandleType_t131E94615EAC877AE13E8CAA147840DCA5DE0D00 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.BoundingBox/HandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandleType_t131E94615EAC877AE13E8CAA147840DCA5DE0D00, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.BoundingBox/RotationHandlePrefabCollider
struct RotationHandlePrefabCollider_t96EE5E47D78EDACA61C5EF0F82E297D9D33537F1 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.BoundingBox/RotationHandlePrefabCollider::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RotationHandlePrefabCollider_t96EE5E47D78EDACA61C5EF0F82E297D9D33537F1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.BoundingBox/WireframeType
struct WireframeType_t697BF38E4C81F8CE8A7AF59D741E8DCD4A298CD3 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.BoundingBox/WireframeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WireframeType_t697BF38E4C81F8CE8A7AF59D741E8DCD4A298CD3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.WorldLocking.Tools.FrozenSpatialMapping/QualityType
struct QualityType_t373361B17CEB2A640A2D979E5F40AC8E9D65BDCA 
{
public:
	// System.Int32 Microsoft.MixedReality.WorldLocking.Tools.FrozenSpatialMapping/QualityType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QualityType_t373361B17CEB2A640A2D979E5F40AC8E9D65BDCA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/ReleaseBehaviorType
struct ReleaseBehaviorType_t4F4D3B13F25EE3C699E92CB82F4A7152EC767059 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/ReleaseBehaviorType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReleaseBehaviorType_t4F4D3B13F25EE3C699E92CB82F4A7152EC767059, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/RotateInOneHandType
struct RotateInOneHandType_t8D5A4D19721F5095E24E524FC839AC184A8381A4 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/RotateInOneHandType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RotateInOneHandType_t8D5A4D19721F5095E24E524FC839AC184A8381A4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/BuildMode
struct BuildMode_t28B1CB4D2B2046CFE8D7DB811FA6689BFFC5DA14 
{
public:
	// System.Int32 Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/BuildMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BuildMode_t28B1CB4D2B2046CFE8D7DB811FA6689BFFC5DA14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/RayHit
struct RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/RayHit::rayStart
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rayStart_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/RayHit::hitPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitPosition_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/RayHit::hitNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitNormal_2;
	// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/RayHit::gameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject_3;

public:
	inline static int32_t get_offset_of_rayStart_0() { return static_cast<int32_t>(offsetof(RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338, ___rayStart_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rayStart_0() const { return ___rayStart_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rayStart_0() { return &___rayStart_0; }
	inline void set_rayStart_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rayStart_0 = value;
	}

	inline static int32_t get_offset_of_hitPosition_1() { return static_cast<int32_t>(offsetof(RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338, ___hitPosition_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_hitPosition_1() const { return ___hitPosition_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_hitPosition_1() { return &___hitPosition_1; }
	inline void set_hitPosition_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___hitPosition_1 = value;
	}

	inline static int32_t get_offset_of_hitNormal_2() { return static_cast<int32_t>(offsetof(RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338, ___hitNormal_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_hitNormal_2() const { return ___hitNormal_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_hitNormal_2() { return &___hitNormal_2; }
	inline void set_hitNormal_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___hitNormal_2 = value;
	}

	inline static int32_t get_offset_of_gameObject_3() { return static_cast<int32_t>(offsetof(RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338, ___gameObject_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameObject_3() const { return ___gameObject_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameObject_3() { return &___gameObject_3; }
	inline void set_gameObject_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/RayHit
struct RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rayStart_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitPosition_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitNormal_2;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/RayHit
struct RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rayStart_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitPosition_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitNormal_2;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject_3;
};

// Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/VelocityTime
struct VelocityTime_t8F44324796F4B7FF1B951924D34F7B4FA33FF326 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/VelocityTime::v
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v_0;
	// System.Single Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/VelocityTime::t
	float ___t_1;

public:
	inline static int32_t get_offset_of_v_0() { return static_cast<int32_t>(offsetof(VelocityTime_t8F44324796F4B7FF1B951924D34F7B4FA33FF326, ___v_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_v_0() const { return ___v_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_v_0() { return &___v_0; }
	inline void set_v_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___v_0 = value;
	}

	inline static int32_t get_offset_of_t_1() { return static_cast<int32_t>(offsetof(VelocityTime_t8F44324796F4B7FF1B951924D34F7B4FA33FF326, ___t_1)); }
	inline float get_t_1() const { return ___t_1; }
	inline float* get_address_of_t_1() { return &___t_1; }
	inline void set_t_1(float value)
	{
		___t_1 = value;
	}
};


// Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/WorldLockType
struct WorldLockType_t6278B2300781CF7DB6CADF566BB13BF7DF4EDBAE 
{
public:
	// System.Int32 Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/WorldLockType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WorldLockType_t6278B2300781CF7DB6CADF566BB13BF7DF4EDBAE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.WorldLocking.Examples.RayPins/RayHit
struct RayHit_tD3531714B864673B28BD5395D21F090D44267DC6 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.WorldLocking.Examples.RayPins/RayHit::rayStart
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rayStart_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.WorldLocking.Examples.RayPins/RayHit::hitPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitPosition_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.WorldLocking.Examples.RayPins/RayHit::hitNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitNormal_2;
	// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.RayPins/RayHit::gameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject_3;

public:
	inline static int32_t get_offset_of_rayStart_0() { return static_cast<int32_t>(offsetof(RayHit_tD3531714B864673B28BD5395D21F090D44267DC6, ___rayStart_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rayStart_0() const { return ___rayStart_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rayStart_0() { return &___rayStart_0; }
	inline void set_rayStart_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rayStart_0 = value;
	}

	inline static int32_t get_offset_of_hitPosition_1() { return static_cast<int32_t>(offsetof(RayHit_tD3531714B864673B28BD5395D21F090D44267DC6, ___hitPosition_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_hitPosition_1() const { return ___hitPosition_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_hitPosition_1() { return &___hitPosition_1; }
	inline void set_hitPosition_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___hitPosition_1 = value;
	}

	inline static int32_t get_offset_of_hitNormal_2() { return static_cast<int32_t>(offsetof(RayHit_tD3531714B864673B28BD5395D21F090D44267DC6, ___hitNormal_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_hitNormal_2() const { return ___hitNormal_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_hitNormal_2() { return &___hitNormal_2; }
	inline void set_hitNormal_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___hitNormal_2 = value;
	}

	inline static int32_t get_offset_of_gameObject_3() { return static_cast<int32_t>(offsetof(RayHit_tD3531714B864673B28BD5395D21F090D44267DC6, ___gameObject_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameObject_3() const { return ___gameObject_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameObject_3() { return &___gameObject_3; }
	inline void set_gameObject_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.WorldLocking.Examples.RayPins/RayHit
struct RayHit_tD3531714B864673B28BD5395D21F090D44267DC6_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rayStart_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitPosition_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitNormal_2;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.WorldLocking.Examples.RayPins/RayHit
struct RayHit_tD3531714B864673B28BD5395D21F090D44267DC6_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rayStart_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitPosition_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitNormal_2;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject_3;
};

// Microsoft.MixedReality.WorldLocking.Core.SpacePin/ModelPositionSourceEnum
struct ModelPositionSourceEnum_tC2F1A45376DE52090F4AC22FE6B279BF192972CA 
{
public:
	// System.Int32 Microsoft.MixedReality.WorldLocking.Core.SpacePin/ModelPositionSourceEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ModelPositionSourceEnum_tC2F1A45376DE52090F4AC22FE6B279BF192972CA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager/InitializationState
struct InitializationState_tEEF71B6591DC6E3CBADFF8E19B2BD43E42F095A6 
{
public:
	// System.Int32 Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager/InitializationState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitializationState_tEEF71B6591DC6E3CBADFF8E19B2BD43E42F095A6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7 
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<RayDistance>k__BackingField
	float ___U3CRayDistanceU3Ek__BackingField_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Point>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointU3Ek__BackingField_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Normal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalU3Ek__BackingField_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Object>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CObjectU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<LastRaycastHit>k__BackingField
	MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4  ___U3CLastRaycastHitU3Ek__BackingField_4;
	// UnityEngine.EventSystems.RaycastResult Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<LastGraphicsRaycastResult>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<PointLocalSpace>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointLocalSpaceU3Ek__BackingField_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<NormalLocalSpace>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalLocalSpaceU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CRayDistanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7, ___U3CRayDistanceU3Ek__BackingField_0)); }
	inline float get_U3CRayDistanceU3Ek__BackingField_0() const { return ___U3CRayDistanceU3Ek__BackingField_0; }
	inline float* get_address_of_U3CRayDistanceU3Ek__BackingField_0() { return &___U3CRayDistanceU3Ek__BackingField_0; }
	inline void set_U3CRayDistanceU3Ek__BackingField_0(float value)
	{
		___U3CRayDistanceU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CPointU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7, ___U3CPointU3Ek__BackingField_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CPointU3Ek__BackingField_1() const { return ___U3CPointU3Ek__BackingField_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CPointU3Ek__BackingField_1() { return &___U3CPointU3Ek__BackingField_1; }
	inline void set_U3CPointU3Ek__BackingField_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CPointU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CNormalU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7, ___U3CNormalU3Ek__BackingField_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CNormalU3Ek__BackingField_2() const { return ___U3CNormalU3Ek__BackingField_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CNormalU3Ek__BackingField_2() { return &___U3CNormalU3Ek__BackingField_2; }
	inline void set_U3CNormalU3Ek__BackingField_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CNormalU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CObjectU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7, ___U3CObjectU3Ek__BackingField_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CObjectU3Ek__BackingField_3() const { return ___U3CObjectU3Ek__BackingField_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CObjectU3Ek__BackingField_3() { return &___U3CObjectU3Ek__BackingField_3; }
	inline void set_U3CObjectU3Ek__BackingField_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CObjectU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CObjectU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLastRaycastHitU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7, ___U3CLastRaycastHitU3Ek__BackingField_4)); }
	inline MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4  get_U3CLastRaycastHitU3Ek__BackingField_4() const { return ___U3CLastRaycastHitU3Ek__BackingField_4; }
	inline MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4 * get_address_of_U3CLastRaycastHitU3Ek__BackingField_4() { return &___U3CLastRaycastHitU3Ek__BackingField_4; }
	inline void set_U3CLastRaycastHitU3Ek__BackingField_4(MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4  value)
	{
		___U3CLastRaycastHitU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CLastRaycastHitU3Ek__BackingField_4))->___transform_7), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CLastRaycastHitU3Ek__BackingField_4))->___collider_10), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CLastGraphicsRaycastResultU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7, ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CLastGraphicsRaycastResultU3Ek__BackingField_5() const { return ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CLastGraphicsRaycastResultU3Ek__BackingField_5() { return &___U3CLastGraphicsRaycastResultU3Ek__BackingField_5; }
	inline void set_U3CLastGraphicsRaycastResultU3Ek__BackingField_5(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CLastGraphicsRaycastResultU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CLastGraphicsRaycastResultU3Ek__BackingField_5))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CLastGraphicsRaycastResultU3Ek__BackingField_5))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CPointLocalSpaceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7, ___U3CPointLocalSpaceU3Ek__BackingField_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CPointLocalSpaceU3Ek__BackingField_6() const { return ___U3CPointLocalSpaceU3Ek__BackingField_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CPointLocalSpaceU3Ek__BackingField_6() { return &___U3CPointLocalSpaceU3Ek__BackingField_6; }
	inline void set_U3CPointLocalSpaceU3Ek__BackingField_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CPointLocalSpaceU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CNormalLocalSpaceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7, ___U3CNormalLocalSpaceU3Ek__BackingField_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CNormalLocalSpaceU3Ek__BackingField_7() const { return ___U3CNormalLocalSpaceU3Ek__BackingField_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CNormalLocalSpaceU3Ek__BackingField_7() { return &___U3CNormalLocalSpaceU3Ek__BackingField_7; }
	inline void set_U3CNormalLocalSpaceU3Ek__BackingField_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CNormalLocalSpaceU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7_marshaled_pinvoke
{
	float ___U3CRayDistanceU3Ek__BackingField_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointU3Ek__BackingField_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalU3Ek__BackingField_2;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CObjectU3Ek__BackingField_3;
	MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4_marshaled_pinvoke ___U3CLastRaycastHitU3Ek__BackingField_4;
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointLocalSpaceU3Ek__BackingField_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalLocalSpaceU3Ek__BackingField_7;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7_marshaled_com
{
	float ___U3CRayDistanceU3Ek__BackingField_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointU3Ek__BackingField_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalU3Ek__BackingField_2;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CObjectU3Ek__BackingField_3;
	MixedRealityRaycastHit_t1EEC2F86493E83839DB438C262DFEDD63AE1A4B4_marshaled_com ___U3CLastRaycastHitU3Ek__BackingField_4;
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointLocalSpaceU3Ek__BackingField_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalLocalSpaceU3Ek__BackingField_7;
};

// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform
struct MixedRealityTransform_tC17D467055C7F5291C92E34F136742BBA4C50732 
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform::pose
	MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  ___pose_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform::scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale_2;

public:
	inline static int32_t get_offset_of_pose_1() { return static_cast<int32_t>(offsetof(MixedRealityTransform_tC17D467055C7F5291C92E34F136742BBA4C50732, ___pose_1)); }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  get_pose_1() const { return ___pose_1; }
	inline MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99 * get_address_of_pose_1() { return &___pose_1; }
	inline void set_pose_1(MixedRealityPose_tD9E4CD532EF579179E6440FDD469FDE05B136A99  value)
	{
		___pose_1 = value;
	}

	inline static int32_t get_offset_of_scale_2() { return static_cast<int32_t>(offsetof(MixedRealityTransform_tC17D467055C7F5291C92E34F136742BBA4C50732, ___scale_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_scale_2() const { return ___scale_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_scale_2() { return &___scale_2; }
	inline void set_scale_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___scale_2 = value;
	}
};

struct MixedRealityTransform_tC17D467055C7F5291C92E34F136742BBA4C50732_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform::<Identity>k__BackingField
	MixedRealityTransform_tC17D467055C7F5291C92E34F136742BBA4C50732  ___U3CIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityTransform_tC17D467055C7F5291C92E34F136742BBA4C50732_StaticFields, ___U3CIdentityU3Ek__BackingField_0)); }
	inline MixedRealityTransform_tC17D467055C7F5291C92E34F136742BBA4C50732  get_U3CIdentityU3Ek__BackingField_0() const { return ___U3CIdentityU3Ek__BackingField_0; }
	inline MixedRealityTransform_tC17D467055C7F5291C92E34F136742BBA4C50732 * get_address_of_U3CIdentityU3Ek__BackingField_0() { return &___U3CIdentityU3Ek__BackingField_0; }
	inline void set_U3CIdentityU3Ek__BackingField_0(MixedRealityTransform_tC17D467055C7F5291C92E34F136742BBA4C50732  value)
	{
		___U3CIdentityU3Ek__BackingField_0 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager
struct WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.WorldLocking.Core.SharedManagerSettings Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::shared
	SharedManagerSettings_t1D91D029A5B9B180E6C3C3AD184A8BEFB684AF5D * ___shared_0;
	// UnityEngine.Transform Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::<AdjustmentFrame>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CAdjustmentFrameU3Ek__BackingField_1;
	// UnityEngine.Transform Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::<CameraParent>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CCameraParentU3Ek__BackingField_2;
	// Microsoft.MixedReality.WorldLocking.Core.IPlugin Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::Plugin
	RuntimeObject* ___Plugin_3;
	// Microsoft.MixedReality.WorldLocking.Core.IHeadPoseTracker Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::headPoseTracker
	RuntimeObject* ___headPoseTracker_4;
	// Microsoft.MixedReality.WorldLocking.Core.IAnchorManager Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::anchorManager
	RuntimeObject* ___anchorManager_5;
	// Microsoft.MixedReality.WorldLocking.Core.IFragmentManager Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::fragmentManager
	RuntimeObject* ___fragmentManager_6;
	// Microsoft.MixedReality.WorldLocking.Core.IAttachmentPointManager Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::attachmentPointManager
	RuntimeObject* ___attachmentPointManager_7;
	// Microsoft.MixedReality.WorldLocking.Core.IAlignmentManager Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::alignmentManager
	RuntimeObject* ___alignmentManager_8;
	// System.String Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::<ErrorStatus>k__BackingField
	String_t* ___U3CErrorStatusU3Ek__BackingField_9;
	// UnityEngine.Pose Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::<PinnedFromLocked>k__BackingField
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___U3CPinnedFromLockedU3Ek__BackingField_10;
	// UnityEngine.Pose Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::<LockedFromPlayspace>k__BackingField
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___U3CLockedFromPlayspaceU3Ek__BackingField_11;
	// UnityEngine.Pose Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::<SpongyFromCamera>k__BackingField
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___U3CSpongyFromCameraU3Ek__BackingField_12;
	// System.Boolean Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::hasPendingLoadTask
	bool ___hasPendingLoadTask_13;
	// System.Boolean Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::hasPendingSaveTask
	bool ___hasPendingSaveTask_14;
	// Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager/InitializationState Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::initializationState
	int32_t ___initializationState_15;
	// Microsoft.MixedReality.WorldLocking.Core.Diagnostics Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::DiagnosticRecordings
	Diagnostics_t1E837DAC7BB3D8F92EE1BC7F6359A27B0F583BA4 * ___DiagnosticRecordings_16;
	// System.String Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::frozenWorldFile
	String_t* ___frozenWorldFile_19;
	// System.Single Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::lastSavingTime
	float ___lastSavingTime_20;

public:
	inline static int32_t get_offset_of_shared_0() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___shared_0)); }
	inline SharedManagerSettings_t1D91D029A5B9B180E6C3C3AD184A8BEFB684AF5D * get_shared_0() const { return ___shared_0; }
	inline SharedManagerSettings_t1D91D029A5B9B180E6C3C3AD184A8BEFB684AF5D ** get_address_of_shared_0() { return &___shared_0; }
	inline void set_shared_0(SharedManagerSettings_t1D91D029A5B9B180E6C3C3AD184A8BEFB684AF5D * value)
	{
		___shared_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAdjustmentFrameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___U3CAdjustmentFrameU3Ek__BackingField_1)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CAdjustmentFrameU3Ek__BackingField_1() const { return ___U3CAdjustmentFrameU3Ek__BackingField_1; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CAdjustmentFrameU3Ek__BackingField_1() { return &___U3CAdjustmentFrameU3Ek__BackingField_1; }
	inline void set_U3CAdjustmentFrameU3Ek__BackingField_1(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CAdjustmentFrameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdjustmentFrameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCameraParentU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___U3CCameraParentU3Ek__BackingField_2)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CCameraParentU3Ek__BackingField_2() const { return ___U3CCameraParentU3Ek__BackingField_2; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CCameraParentU3Ek__BackingField_2() { return &___U3CCameraParentU3Ek__BackingField_2; }
	inline void set_U3CCameraParentU3Ek__BackingField_2(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CCameraParentU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCameraParentU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_Plugin_3() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___Plugin_3)); }
	inline RuntimeObject* get_Plugin_3() const { return ___Plugin_3; }
	inline RuntimeObject** get_address_of_Plugin_3() { return &___Plugin_3; }
	inline void set_Plugin_3(RuntimeObject* value)
	{
		___Plugin_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Plugin_3), (void*)value);
	}

	inline static int32_t get_offset_of_headPoseTracker_4() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___headPoseTracker_4)); }
	inline RuntimeObject* get_headPoseTracker_4() const { return ___headPoseTracker_4; }
	inline RuntimeObject** get_address_of_headPoseTracker_4() { return &___headPoseTracker_4; }
	inline void set_headPoseTracker_4(RuntimeObject* value)
	{
		___headPoseTracker_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headPoseTracker_4), (void*)value);
	}

	inline static int32_t get_offset_of_anchorManager_5() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___anchorManager_5)); }
	inline RuntimeObject* get_anchorManager_5() const { return ___anchorManager_5; }
	inline RuntimeObject** get_address_of_anchorManager_5() { return &___anchorManager_5; }
	inline void set_anchorManager_5(RuntimeObject* value)
	{
		___anchorManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anchorManager_5), (void*)value);
	}

	inline static int32_t get_offset_of_fragmentManager_6() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___fragmentManager_6)); }
	inline RuntimeObject* get_fragmentManager_6() const { return ___fragmentManager_6; }
	inline RuntimeObject** get_address_of_fragmentManager_6() { return &___fragmentManager_6; }
	inline void set_fragmentManager_6(RuntimeObject* value)
	{
		___fragmentManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fragmentManager_6), (void*)value);
	}

	inline static int32_t get_offset_of_attachmentPointManager_7() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___attachmentPointManager_7)); }
	inline RuntimeObject* get_attachmentPointManager_7() const { return ___attachmentPointManager_7; }
	inline RuntimeObject** get_address_of_attachmentPointManager_7() { return &___attachmentPointManager_7; }
	inline void set_attachmentPointManager_7(RuntimeObject* value)
	{
		___attachmentPointManager_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attachmentPointManager_7), (void*)value);
	}

	inline static int32_t get_offset_of_alignmentManager_8() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___alignmentManager_8)); }
	inline RuntimeObject* get_alignmentManager_8() const { return ___alignmentManager_8; }
	inline RuntimeObject** get_address_of_alignmentManager_8() { return &___alignmentManager_8; }
	inline void set_alignmentManager_8(RuntimeObject* value)
	{
		___alignmentManager_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___alignmentManager_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CErrorStatusU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___U3CErrorStatusU3Ek__BackingField_9)); }
	inline String_t* get_U3CErrorStatusU3Ek__BackingField_9() const { return ___U3CErrorStatusU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CErrorStatusU3Ek__BackingField_9() { return &___U3CErrorStatusU3Ek__BackingField_9; }
	inline void set_U3CErrorStatusU3Ek__BackingField_9(String_t* value)
	{
		___U3CErrorStatusU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorStatusU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPinnedFromLockedU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___U3CPinnedFromLockedU3Ek__BackingField_10)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_U3CPinnedFromLockedU3Ek__BackingField_10() const { return ___U3CPinnedFromLockedU3Ek__BackingField_10; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_U3CPinnedFromLockedU3Ek__BackingField_10() { return &___U3CPinnedFromLockedU3Ek__BackingField_10; }
	inline void set_U3CPinnedFromLockedU3Ek__BackingField_10(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___U3CPinnedFromLockedU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CLockedFromPlayspaceU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___U3CLockedFromPlayspaceU3Ek__BackingField_11)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_U3CLockedFromPlayspaceU3Ek__BackingField_11() const { return ___U3CLockedFromPlayspaceU3Ek__BackingField_11; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_U3CLockedFromPlayspaceU3Ek__BackingField_11() { return &___U3CLockedFromPlayspaceU3Ek__BackingField_11; }
	inline void set_U3CLockedFromPlayspaceU3Ek__BackingField_11(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___U3CLockedFromPlayspaceU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CSpongyFromCameraU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___U3CSpongyFromCameraU3Ek__BackingField_12)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_U3CSpongyFromCameraU3Ek__BackingField_12() const { return ___U3CSpongyFromCameraU3Ek__BackingField_12; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_U3CSpongyFromCameraU3Ek__BackingField_12() { return &___U3CSpongyFromCameraU3Ek__BackingField_12; }
	inline void set_U3CSpongyFromCameraU3Ek__BackingField_12(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___U3CSpongyFromCameraU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_hasPendingLoadTask_13() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___hasPendingLoadTask_13)); }
	inline bool get_hasPendingLoadTask_13() const { return ___hasPendingLoadTask_13; }
	inline bool* get_address_of_hasPendingLoadTask_13() { return &___hasPendingLoadTask_13; }
	inline void set_hasPendingLoadTask_13(bool value)
	{
		___hasPendingLoadTask_13 = value;
	}

	inline static int32_t get_offset_of_hasPendingSaveTask_14() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___hasPendingSaveTask_14)); }
	inline bool get_hasPendingSaveTask_14() const { return ___hasPendingSaveTask_14; }
	inline bool* get_address_of_hasPendingSaveTask_14() { return &___hasPendingSaveTask_14; }
	inline void set_hasPendingSaveTask_14(bool value)
	{
		___hasPendingSaveTask_14 = value;
	}

	inline static int32_t get_offset_of_initializationState_15() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___initializationState_15)); }
	inline int32_t get_initializationState_15() const { return ___initializationState_15; }
	inline int32_t* get_address_of_initializationState_15() { return &___initializationState_15; }
	inline void set_initializationState_15(int32_t value)
	{
		___initializationState_15 = value;
	}

	inline static int32_t get_offset_of_DiagnosticRecordings_16() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___DiagnosticRecordings_16)); }
	inline Diagnostics_t1E837DAC7BB3D8F92EE1BC7F6359A27B0F583BA4 * get_DiagnosticRecordings_16() const { return ___DiagnosticRecordings_16; }
	inline Diagnostics_t1E837DAC7BB3D8F92EE1BC7F6359A27B0F583BA4 ** get_address_of_DiagnosticRecordings_16() { return &___DiagnosticRecordings_16; }
	inline void set_DiagnosticRecordings_16(Diagnostics_t1E837DAC7BB3D8F92EE1BC7F6359A27B0F583BA4 * value)
	{
		___DiagnosticRecordings_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DiagnosticRecordings_16), (void*)value);
	}

	inline static int32_t get_offset_of_frozenWorldFile_19() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___frozenWorldFile_19)); }
	inline String_t* get_frozenWorldFile_19() const { return ___frozenWorldFile_19; }
	inline String_t** get_address_of_frozenWorldFile_19() { return &___frozenWorldFile_19; }
	inline void set_frozenWorldFile_19(String_t* value)
	{
		___frozenWorldFile_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frozenWorldFile_19), (void*)value);
	}

	inline static int32_t get_offset_of_lastSavingTime_20() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___lastSavingTime_20)); }
	inline float get_lastSavingTime_20() const { return ___lastSavingTime_20; }
	inline float* get_address_of_lastSavingTime_20() { return &___lastSavingTime_20; }
	inline void set_lastSavingTime_20(float value)
	{
		___lastSavingTime_20 = value;
	}
};

struct WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31_StaticFields
{
public:
	// Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::managerInstance
	WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * ___managerInstance_17;
	// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::updateProxyNode
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___updateProxyNode_18;

public:
	inline static int32_t get_offset_of_managerInstance_17() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31_StaticFields, ___managerInstance_17)); }
	inline WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * get_managerInstance_17() const { return ___managerInstance_17; }
	inline WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 ** get_address_of_managerInstance_17() { return &___managerInstance_17; }
	inline void set_managerInstance_17(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * value)
	{
		___managerInstance_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___managerInstance_17), (void*)value);
	}

	inline static int32_t get_offset_of_updateProxyNode_18() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31_StaticFields, ___updateProxyNode_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_updateProxyNode_18() const { return ___updateProxyNode_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_updateProxyNode_18() { return &___updateProxyNode_18; }
	inline void set_updateProxyNode_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___updateProxyNode_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updateProxyNode_18), (void*)value);
	}
};


// UnityEngine.Events.UnityAction`1<Microsoft.MixedReality.Toolkit.UI.ManipulationEventData>
struct UnityAction_1_t73174C87AEE037BF43DD95B66D00BCD7F7A7B4E1  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputEventData
struct BaseInputEventData_t73E274B4C1E45B2C78E09ED200592A58EC1AA7C4  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<EventTime>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CEventTimeU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<MixedRealityInputAction>k__BackingField
	MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  ___U3CMixedRealityInputActionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseInputEventData_t73E274B4C1E45B2C78E09ED200592A58EC1AA7C4, ___U3CEventTimeU3Ek__BackingField_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CEventTimeU3Ek__BackingField_2() const { return ___U3CEventTimeU3Ek__BackingField_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CEventTimeU3Ek__BackingField_2() { return &___U3CEventTimeU3Ek__BackingField_2; }
	inline void set_U3CEventTimeU3Ek__BackingField_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CEventTimeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseInputEventData_t73E274B4C1E45B2C78E09ED200592A58EC1AA7C4, ___U3CInputSourceU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_3() const { return ___U3CInputSourceU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_3() { return &___U3CInputSourceU3Ek__BackingField_3; }
	inline void set_U3CInputSourceU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMixedRealityInputActionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseInputEventData_t73E274B4C1E45B2C78E09ED200592A58EC1AA7C4, ___U3CMixedRealityInputActionU3Ek__BackingField_4)); }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  get_U3CMixedRealityInputActionU3Ek__BackingField_4() const { return ___U3CMixedRealityInputActionU3Ek__BackingField_4; }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 * get_address_of_U3CMixedRealityInputActionU3Ek__BackingField_4() { return &___U3CMixedRealityInputActionU3Ek__BackingField_4; }
	inline void set_U3CMixedRealityInputActionU3Ek__BackingField_4(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  value)
	{
		___U3CMixedRealityInputActionU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CMixedRealityInputActionU3Ek__BackingField_4))->___description_2), (void*)NULL);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.MixedReality.WorldLocking.Examples.ManipulationEndedDelegate
struct ManipulationEndedDelegate_t3F667BDD0876A1CE0E97765F48B4A6E64F182967  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.WorldLocking.Examples.ManipulationStartedDelegate
struct ManipulationStartedDelegate_tDE21ED8C580CF3E861222CBD24EC9E94B925A811  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9  : public BaseInputEventData_t73E274B4C1E45B2C78E09ED200592A58EC1AA7C4
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.InputEventData::<Handedness>k__BackingField
	uint8_t ___U3CHandednessU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CHandednessU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9, ___U3CHandednessU3Ek__BackingField_5)); }
	inline uint8_t get_U3CHandednessU3Ek__BackingField_5() const { return ___U3CHandednessU3Ek__BackingField_5; }
	inline uint8_t* get_address_of_U3CHandednessU3Ek__BackingField_5() { return &___U3CHandednessU3Ek__BackingField_5; }
	inline void set_U3CHandednessU3Ek__BackingField_5(uint8_t value)
	{
		___U3CHandednessU3Ek__BackingField_5 = value;
	}
};


// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Microsoft.MixedReality.WorldLocking.Tools.AdjusterBase
struct AdjusterBase_tAB4E9B66BE413CF82FAFA2E7001E4F973449862D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Microsoft.MixedReality.WorldLocking.Examples.AlignmentControl
struct AlignmentControl_tA708D3B02421046D0C7B55F07628626D1472D893  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.Core.SpacePin> Microsoft.MixedReality.WorldLocking.Examples.AlignmentControl::spacePins
	List_1_t53D1C24FA77D2E5EC126BEE9A8EFEE7D081BF037 * ___spacePins_4;

public:
	inline static int32_t get_offset_of_spacePins_4() { return static_cast<int32_t>(offsetof(AlignmentControl_tA708D3B02421046D0C7B55F07628626D1472D893, ___spacePins_4)); }
	inline List_1_t53D1C24FA77D2E5EC126BEE9A8EFEE7D081BF037 * get_spacePins_4() const { return ___spacePins_4; }
	inline List_1_t53D1C24FA77D2E5EC126BEE9A8EFEE7D081BF037 ** get_address_of_spacePins_4() { return &___spacePins_4; }
	inline void set_spacePins_4(List_1_t53D1C24FA77D2E5EC126BEE9A8EFEE7D081BF037 * value)
	{
		___spacePins_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spacePins_4), (void*)value);
	}
};


// Microsoft.MixedReality.WorldLocking.Tools.AnchorGraphVisual
struct AnchorGraphVisual_tD55799591BF2B332DDC5DBFF1E79CE20B7A42926  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.WorldLocking.Tools.FrameVisual Microsoft.MixedReality.WorldLocking.Tools.AnchorGraphVisual::Prefab_FrameViz
	FrameVisual_tB453D401B34D36501814CED5379D9180505EA532 * ___Prefab_FrameViz_4;
	// Microsoft.MixedReality.WorldLocking.Tools.SpongyAnchorVisual Microsoft.MixedReality.WorldLocking.Tools.AnchorGraphVisual::Prefab_SpongyAnchorViz
	SpongyAnchorVisual_tCE8B26DB799E90D4E2881343CDB18E9B3EC09ECA * ___Prefab_SpongyAnchorViz_5;
	// Microsoft.MixedReality.WorldLocking.Tools.FrozenAnchorVisual Microsoft.MixedReality.WorldLocking.Tools.AnchorGraphVisual::Prefab_FrozenAnchorViz
	FrozenAnchorVisual_t44D06A314D6C08D25381C108F43C035FE44448D5 * ___Prefab_FrozenAnchorViz_6;
	// UnityEngine.Material Microsoft.MixedReality.WorldLocking.Tools.AnchorGraphVisual::connectingLine
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___connectingLine_7;
	// System.Single Microsoft.MixedReality.WorldLocking.Tools.AnchorGraphVisual::verticalDisplacement
	float ___verticalDisplacement_8;
	// Microsoft.MixedReality.WorldLocking.Tools.FrameVisual Microsoft.MixedReality.WorldLocking.Tools.AnchorGraphVisual::spongyWorldViz
	FrameVisual_tB453D401B34D36501814CED5379D9180505EA532 * ___spongyWorldViz_9;
	// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Tools.AnchorGraphVisual::worldLockingVizRoot
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___worldLockingVizRoot_10;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.WorldLocking.Core.FragmentId,Microsoft.MixedReality.WorldLocking.Tools.FrameVisual> Microsoft.MixedReality.WorldLocking.Tools.AnchorGraphVisual::frozenFragmentVizs
	Dictionary_2_t4C88CA1F3A9BD2968AAE9B46AB58FA12C1A5DA39 * ___frozenFragmentVizs_11;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.Core.ResourceMirrorHelper.IdPair`2<Microsoft.MixedReality.WorldLocking.Core.AnchorId,Microsoft.MixedReality.WorldLocking.Tools.SpongyAnchorVisual>> Microsoft.MixedReality.WorldLocking.Tools.AnchorGraphVisual::spongyResources
	List_1_tFC0E147DAF8196F5FB4F0B0542195B94C4FA5205 * ___spongyResources_12;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.Core.ResourceMirrorHelper.IdPair`2<Microsoft.MixedReality.WorldLocking.Core.AnchorId,Microsoft.MixedReality.WorldLocking.Tools.FrozenAnchorVisual>> Microsoft.MixedReality.WorldLocking.Tools.AnchorGraphVisual::frozenResources
	List_1_t624F7A61932E0FFDC051E667E85BF1D3FE6D887B * ___frozenResources_13;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.Core.ResourceMirrorHelper.IdPair`2<Microsoft.MixedReality.WorldLocking.Core.AnchorEdge,Microsoft.MixedReality.WorldLocking.Tools.ConnectingLine>> Microsoft.MixedReality.WorldLocking.Tools.AnchorGraphVisual::edgeResources
	List_1_t09A8682D5A26A44AEDD0F30C2A1CCEC1105AA5E3 * ___edgeResources_14;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.Core.ResourceMirrorHelper.IdPair`2<Microsoft.MixedReality.WorldLocking.Core.AnchorId,Microsoft.MixedReality.WorldLocking.Tools.ConnectingLine>> Microsoft.MixedReality.WorldLocking.Tools.AnchorGraphVisual::displacementResources
	List_1_t004A993135700EAC130D72AA134D65E93E9227AD * ___displacementResources_15;
	// System.Collections.Generic.Comparer`1<Microsoft.MixedReality.WorldLocking.Core.AnchorEdge> Microsoft.MixedReality.WorldLocking.Tools.AnchorGraphVisual::anchorEdgeComparer
	Comparer_1_t5EAAEEF309FA16965DE84A00A205BD3F1834E7A8 * ___anchorEdgeComparer_16;

public:
	inline static int32_t get_offset_of_Prefab_FrameViz_4() { return static_cast<int32_t>(offsetof(AnchorGraphVisual_tD55799591BF2B332DDC5DBFF1E79CE20B7A42926, ___Prefab_FrameViz_4)); }
	inline FrameVisual_tB453D401B34D36501814CED5379D9180505EA532 * get_Prefab_FrameViz_4() const { return ___Prefab_FrameViz_4; }
	inline FrameVisual_tB453D401B34D36501814CED5379D9180505EA532 ** get_address_of_Prefab_FrameViz_4() { return &___Prefab_FrameViz_4; }
	inline void set_Prefab_FrameViz_4(FrameVisual_tB453D401B34D36501814CED5379D9180505EA532 * value)
	{
		___Prefab_FrameViz_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Prefab_FrameViz_4), (void*)value);
	}

	inline static int32_t get_offset_of_Prefab_SpongyAnchorViz_5() { return static_cast<int32_t>(offsetof(AnchorGraphVisual_tD55799591BF2B332DDC5DBFF1E79CE20B7A42926, ___Prefab_SpongyAnchorViz_5)); }
	inline SpongyAnchorVisual_tCE8B26DB799E90D4E2881343CDB18E9B3EC09ECA * get_Prefab_SpongyAnchorViz_5() const { return ___Prefab_SpongyAnchorViz_5; }
	inline SpongyAnchorVisual_tCE8B26DB799E90D4E2881343CDB18E9B3EC09ECA ** get_address_of_Prefab_SpongyAnchorViz_5() { return &___Prefab_SpongyAnchorViz_5; }
	inline void set_Prefab_SpongyAnchorViz_5(SpongyAnchorVisual_tCE8B26DB799E90D4E2881343CDB18E9B3EC09ECA * value)
	{
		___Prefab_SpongyAnchorViz_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Prefab_SpongyAnchorViz_5), (void*)value);
	}

	inline static int32_t get_offset_of_Prefab_FrozenAnchorViz_6() { return static_cast<int32_t>(offsetof(AnchorGraphVisual_tD55799591BF2B332DDC5DBFF1E79CE20B7A42926, ___Prefab_FrozenAnchorViz_6)); }
	inline FrozenAnchorVisual_t44D06A314D6C08D25381C108F43C035FE44448D5 * get_Prefab_FrozenAnchorViz_6() const { return ___Prefab_FrozenAnchorViz_6; }
	inline FrozenAnchorVisual_t44D06A314D6C08D25381C108F43C035FE44448D5 ** get_address_of_Prefab_FrozenAnchorViz_6() { return &___Prefab_FrozenAnchorViz_6; }
	inline void set_Prefab_FrozenAnchorViz_6(FrozenAnchorVisual_t44D06A314D6C08D25381C108F43C035FE44448D5 * value)
	{
		___Prefab_FrozenAnchorViz_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Prefab_FrozenAnchorViz_6), (void*)value);
	}

	inline static int32_t get_offset_of_connectingLine_7() { return static_cast<int32_t>(offsetof(AnchorGraphVisual_tD55799591BF2B332DDC5DBFF1E79CE20B7A42926, ___connectingLine_7)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_connectingLine_7() const { return ___connectingLine_7; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_connectingLine_7() { return &___connectingLine_7; }
	inline void set_connectingLine_7(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___connectingLine_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connectingLine_7), (void*)value);
	}

	inline static int32_t get_offset_of_verticalDisplacement_8() { return static_cast<int32_t>(offsetof(AnchorGraphVisual_tD55799591BF2B332DDC5DBFF1E79CE20B7A42926, ___verticalDisplacement_8)); }
	inline float get_verticalDisplacement_8() const { return ___verticalDisplacement_8; }
	inline float* get_address_of_verticalDisplacement_8() { return &___verticalDisplacement_8; }
	inline void set_verticalDisplacement_8(float value)
	{
		___verticalDisplacement_8 = value;
	}

	inline static int32_t get_offset_of_spongyWorldViz_9() { return static_cast<int32_t>(offsetof(AnchorGraphVisual_tD55799591BF2B332DDC5DBFF1E79CE20B7A42926, ___spongyWorldViz_9)); }
	inline FrameVisual_tB453D401B34D36501814CED5379D9180505EA532 * get_spongyWorldViz_9() const { return ___spongyWorldViz_9; }
	inline FrameVisual_tB453D401B34D36501814CED5379D9180505EA532 ** get_address_of_spongyWorldViz_9() { return &___spongyWorldViz_9; }
	inline void set_spongyWorldViz_9(FrameVisual_tB453D401B34D36501814CED5379D9180505EA532 * value)
	{
		___spongyWorldViz_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spongyWorldViz_9), (void*)value);
	}

	inline static int32_t get_offset_of_worldLockingVizRoot_10() { return static_cast<int32_t>(offsetof(AnchorGraphVisual_tD55799591BF2B332DDC5DBFF1E79CE20B7A42926, ___worldLockingVizRoot_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_worldLockingVizRoot_10() const { return ___worldLockingVizRoot_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_worldLockingVizRoot_10() { return &___worldLockingVizRoot_10; }
	inline void set_worldLockingVizRoot_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___worldLockingVizRoot_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___worldLockingVizRoot_10), (void*)value);
	}

	inline static int32_t get_offset_of_frozenFragmentVizs_11() { return static_cast<int32_t>(offsetof(AnchorGraphVisual_tD55799591BF2B332DDC5DBFF1E79CE20B7A42926, ___frozenFragmentVizs_11)); }
	inline Dictionary_2_t4C88CA1F3A9BD2968AAE9B46AB58FA12C1A5DA39 * get_frozenFragmentVizs_11() const { return ___frozenFragmentVizs_11; }
	inline Dictionary_2_t4C88CA1F3A9BD2968AAE9B46AB58FA12C1A5DA39 ** get_address_of_frozenFragmentVizs_11() { return &___frozenFragmentVizs_11; }
	inline void set_frozenFragmentVizs_11(Dictionary_2_t4C88CA1F3A9BD2968AAE9B46AB58FA12C1A5DA39 * value)
	{
		___frozenFragmentVizs_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frozenFragmentVizs_11), (void*)value);
	}

	inline static int32_t get_offset_of_spongyResources_12() { return static_cast<int32_t>(offsetof(AnchorGraphVisual_tD55799591BF2B332DDC5DBFF1E79CE20B7A42926, ___spongyResources_12)); }
	inline List_1_tFC0E147DAF8196F5FB4F0B0542195B94C4FA5205 * get_spongyResources_12() const { return ___spongyResources_12; }
	inline List_1_tFC0E147DAF8196F5FB4F0B0542195B94C4FA5205 ** get_address_of_spongyResources_12() { return &___spongyResources_12; }
	inline void set_spongyResources_12(List_1_tFC0E147DAF8196F5FB4F0B0542195B94C4FA5205 * value)
	{
		___spongyResources_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spongyResources_12), (void*)value);
	}

	inline static int32_t get_offset_of_frozenResources_13() { return static_cast<int32_t>(offsetof(AnchorGraphVisual_tD55799591BF2B332DDC5DBFF1E79CE20B7A42926, ___frozenResources_13)); }
	inline List_1_t624F7A61932E0FFDC051E667E85BF1D3FE6D887B * get_frozenResources_13() const { return ___frozenResources_13; }
	inline List_1_t624F7A61932E0FFDC051E667E85BF1D3FE6D887B ** get_address_of_frozenResources_13() { return &___frozenResources_13; }
	inline void set_frozenResources_13(List_1_t624F7A61932E0FFDC051E667E85BF1D3FE6D887B * value)
	{
		___frozenResources_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frozenResources_13), (void*)value);
	}

	inline static int32_t get_offset_of_edgeResources_14() { return static_cast<int32_t>(offsetof(AnchorGraphVisual_tD55799591BF2B332DDC5DBFF1E79CE20B7A42926, ___edgeResources_14)); }
	inline List_1_t09A8682D5A26A44AEDD0F30C2A1CCEC1105AA5E3 * get_edgeResources_14() const { return ___edgeResources_14; }
	inline List_1_t09A8682D5A26A44AEDD0F30C2A1CCEC1105AA5E3 ** get_address_of_edgeResources_14() { return &___edgeResources_14; }
	inline void set_edgeResources_14(List_1_t09A8682D5A26A44AEDD0F30C2A1CCEC1105AA5E3 * value)
	{
		___edgeResources_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___edgeResources_14), (void*)value);
	}

	inline static int32_t get_offset_of_displacementResources_15() { return static_cast<int32_t>(offsetof(AnchorGraphVisual_tD55799591BF2B332DDC5DBFF1E79CE20B7A42926, ___displacementResources_15)); }
	inline List_1_t004A993135700EAC130D72AA134D65E93E9227AD * get_displacementResources_15() const { return ___displacementResources_15; }
	inline List_1_t004A993135700EAC130D72AA134D65E93E9227AD ** get_address_of_displacementResources_15() { return &___displacementResources_15; }
	inline void set_displacementResources_15(List_1_t004A993135700EAC130D72AA134D65E93E9227AD * value)
	{
		___displacementResources_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displacementResources_15), (void*)value);
	}

	inline static int32_t get_offset_of_anchorEdgeComparer_16() { return static_cast<int32_t>(offsetof(AnchorGraphVisual_tD55799591BF2B332DDC5DBFF1E79CE20B7A42926, ___anchorEdgeComparer_16)); }
	inline Comparer_1_t5EAAEEF309FA16965DE84A00A205BD3F1834E7A8 * get_anchorEdgeComparer_16() const { return ___anchorEdgeComparer_16; }
	inline Comparer_1_t5EAAEEF309FA16965DE84A00A205BD3F1834E7A8 ** get_address_of_anchorEdgeComparer_16() { return &___anchorEdgeComparer_16; }
	inline void set_anchorEdgeComparer_16(Comparer_1_t5EAAEEF309FA16965DE84A00A205BD3F1834E7A8 * value)
	{
		___anchorEdgeComparer_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anchorEdgeComparer_16), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.BoundingBox
struct BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.BoundingBox::targetObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___targetObject_4;
	// UnityEngine.BoxCollider Microsoft.MixedReality.Toolkit.UI.BoundingBox::boundsOverride
	BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * ___boundsOverride_5;
	// Microsoft.MixedReality.Toolkit.UI.BoundingBox/BoundsCalculationMethod Microsoft.MixedReality.Toolkit.UI.BoundingBox::boundsCalculationMethod
	int32_t ___boundsCalculationMethod_6;
	// Microsoft.MixedReality.Toolkit.UI.BoundingBox/BoundingBoxActivationType Microsoft.MixedReality.Toolkit.UI.BoundingBox::activation
	int32_t ___activation_7;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundingBox::scaleMinimum
	float ___scaleMinimum_8;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundingBox::scaleMaximum
	float ___scaleMaximum_9;
	// Microsoft.MixedReality.Toolkit.UI.BoundingBox/FlattenModeType Microsoft.MixedReality.Toolkit.UI.BoundingBox::flattenAxis
	int32_t ___flattenAxis_10;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundingBox::flattenAxisDisplayScale
	float ___flattenAxisDisplayScale_11;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundingBox::boxPadding
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___boxPadding_12;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.UI.BoundingBox::boxMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___boxMaterial_13;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.UI.BoundingBox::boxGrabbedMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___boxGrabbedMaterial_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundingBox::showWireframe
	bool ___showWireframe_15;
	// Microsoft.MixedReality.Toolkit.UI.BoundingBox/WireframeType Microsoft.MixedReality.Toolkit.UI.BoundingBox::wireframeShape
	int32_t ___wireframeShape_16;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.UI.BoundingBox::wireframeMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___wireframeMaterial_17;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundingBox::wireframeEdgeRadius
	float ___wireframeEdgeRadius_18;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.UI.BoundingBox::handleMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___handleMaterial_19;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.UI.BoundingBox::handleGrabbedMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___handleGrabbedMaterial_20;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.BoundingBox::scaleHandlePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___scaleHandlePrefab_21;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.BoundingBox::scaleHandleSlatePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___scaleHandleSlatePrefab_22;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundingBox::scaleHandleSize
	float ___scaleHandleSize_23;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundingBox::scaleHandleColliderPadding
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scaleHandleColliderPadding_24;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.BoundingBox::rotationHandlePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___rotationHandlePrefab_25;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundingBox::rotationHandleSize
	float ___rotationHandleSize_26;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundingBox::rotateHandleColliderPadding
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rotateHandleColliderPadding_27;
	// Microsoft.MixedReality.Toolkit.UI.BoundingBox/RotationHandlePrefabCollider Microsoft.MixedReality.Toolkit.UI.BoundingBox::rotationHandlePrefabColliderType
	int32_t ___rotationHandlePrefabColliderType_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundingBox::showScaleHandles
	bool ___showScaleHandles_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundingBox::showRotationHandleForX
	bool ___showRotationHandleForX_30;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundingBox::showRotationHandleForY
	bool ___showRotationHandleForY_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundingBox::showRotationHandleForZ
	bool ___showRotationHandleForZ_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundingBox::drawTetherWhenManipulating
	bool ___drawTetherWhenManipulating_33;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundingBox::proximityEffectActive
	bool ___proximityEffectActive_34;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundingBox::handleMediumProximity
	float ___handleMediumProximity_35;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundingBox::handleCloseProximity
	float ___handleCloseProximity_36;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundingBox::farScale
	float ___farScale_37;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundingBox::mediumScale
	float ___mediumScale_38;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundingBox::closeScale
	float ___closeScale_39;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundingBox::farGrowRate
	float ___farGrowRate_40;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundingBox::mediumGrowRate
	float ___mediumGrowRate_41;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundingBox::closeGrowRate
	float ___closeGrowRate_42;
	// UnityEngine.Collider Microsoft.MixedReality.Toolkit.UI.BoundingBox::handlesIgnoreCollider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___handlesIgnoreCollider_43;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.UI.BoundingBox::debugText
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___debugText_44;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundingBox::hideElementsInInspector
	bool ___hideElementsInInspector_45;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.BoundingBox::RotateStarted
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___RotateStarted_46;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.BoundingBox::RotateStopped
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___RotateStopped_47;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.BoundingBox::ScaleStarted
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___ScaleStarted_48;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.BoundingBox::ScaleStopped
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___ScaleStopped_49;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundingBox::wireframeOnly
	bool ___wireframeOnly_50;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.UI.BoundingBox::currentPointer
	RuntimeObject* ___currentPointer_51;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.UI.BoundingBox::rigRoot
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___rigRoot_52;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.BoundingBox::boxDisplay
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___boxDisplay_53;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.UI.BoundingBox::boundsCorners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___boundsCorners_54;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundingBox::currentBoundsExtents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentBoundsExtents_55;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider Microsoft.MixedReality.Toolkit.UI.BoundingBox::eyeTrackingProvider
	RuntimeObject* ___eyeTrackingProvider_56;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource> Microsoft.MixedReality.Toolkit.UI.BoundingBox::touchingSources
	List_1_t6E9BDFABC524233989C30EA91E7A597DB4547051 * ___touchingSources_57;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.UI.BoundingBox::links
	List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * ___links_58;
	// System.Collections.Generic.List`1<UnityEngine.Renderer> Microsoft.MixedReality.Toolkit.UI.BoundingBox::linkRenderers
	List_1_tB73BF10E0869BDB4D391E61BA46B75BECA4DCDBE * ___linkRenderers_59;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController> Microsoft.MixedReality.Toolkit.UI.BoundingBox::sourcesDetected
	List_1_t334A197C1C5E943F4780B2EFB5984089C7C5E3A8 * ___sourcesDetected_60;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.UI.BoundingBox::edgeCenters
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___edgeCenters_61;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundingBox::currentRotationAxis
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentRotationAxis_62;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundingBox::initialScaleOnGrabStart
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___initialScaleOnGrabStart_63;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundingBox::initialPositionOnGrabStart
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___initialPositionOnGrabStart_64;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundingBox::initialGrabPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___initialGrabPoint_65;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundingBox::currentGrabPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentGrabPoint_66;
	// Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint Microsoft.MixedReality.Toolkit.UI.BoundingBox::scaleConstraint
	MinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A * ___scaleConstraint_67;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundingBox::grabPointInPointer
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___grabPointInPointer_68;
	// Microsoft.MixedReality.Toolkit.UI.BoundingBox/CardinalAxisType[] Microsoft.MixedReality.Toolkit.UI.BoundingBox::edgeAxes
	CardinalAxisTypeU5BU5D_t3380B4620B2588C02B8ADB9E5E94DF17ABA6A375* ___edgeAxes_69;
	// System.Int32[] Microsoft.MixedReality.Toolkit.UI.BoundingBox::flattenedHandles
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___flattenedHandles_70;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundingBox::oppositeCorner
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oppositeCorner_71;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundingBox::diagonalDir
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___diagonalDir_72;
	// Microsoft.MixedReality.Toolkit.UI.BoundingBox/HandleType Microsoft.MixedReality.Toolkit.UI.BoundingBox::currentHandleType
	int32_t ___currentHandleType_73;
	// UnityEngine.Bounds Microsoft.MixedReality.Toolkit.UI.BoundingBox::prevBoundsOverride
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___prevBoundsOverride_74;
	// System.Nullable`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.UI.BoundingBox::initialBoundsOverrideSize
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___initialBoundsOverrideSize_75;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundingBox::isChildOfTarget
	bool ___isChildOfTarget_76;
	// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer> Microsoft.MixedReality.Toolkit.UI.BoundingBox::proximityPointers
	HashSet_1_t2FA1E1D55BEABC44A1D48B3609F04EDF8AD396A9 * ___proximityPointers_79;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.UI.BoundingBox::proximityPoints
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___proximityPoints_80;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundingBox::active
	bool ___active_81;
	// UnityEngine.BoxCollider Microsoft.MixedReality.Toolkit.UI.BoundingBox::<TargetBounds>k__BackingField
	BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * ___U3CTargetBoundsU3Ek__BackingField_82;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.BoundingBox/Handle> Microsoft.MixedReality.Toolkit.UI.BoundingBox::handles
	List_1_t83E71016ABDACC541489F5FBBEF4C3570033D7E9 * ___handles_83;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.UI.BoundingBox::corners
	List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * ___corners_84;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.UI.BoundingBox::balls
	List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * ___balls_85;

public:
	inline static int32_t get_offset_of_targetObject_4() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___targetObject_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_targetObject_4() const { return ___targetObject_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_targetObject_4() { return &___targetObject_4; }
	inline void set_targetObject_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___targetObject_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetObject_4), (void*)value);
	}

	inline static int32_t get_offset_of_boundsOverride_5() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___boundsOverride_5)); }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * get_boundsOverride_5() const { return ___boundsOverride_5; }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 ** get_address_of_boundsOverride_5() { return &___boundsOverride_5; }
	inline void set_boundsOverride_5(BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * value)
	{
		___boundsOverride_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundsOverride_5), (void*)value);
	}

	inline static int32_t get_offset_of_boundsCalculationMethod_6() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___boundsCalculationMethod_6)); }
	inline int32_t get_boundsCalculationMethod_6() const { return ___boundsCalculationMethod_6; }
	inline int32_t* get_address_of_boundsCalculationMethod_6() { return &___boundsCalculationMethod_6; }
	inline void set_boundsCalculationMethod_6(int32_t value)
	{
		___boundsCalculationMethod_6 = value;
	}

	inline static int32_t get_offset_of_activation_7() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___activation_7)); }
	inline int32_t get_activation_7() const { return ___activation_7; }
	inline int32_t* get_address_of_activation_7() { return &___activation_7; }
	inline void set_activation_7(int32_t value)
	{
		___activation_7 = value;
	}

	inline static int32_t get_offset_of_scaleMinimum_8() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___scaleMinimum_8)); }
	inline float get_scaleMinimum_8() const { return ___scaleMinimum_8; }
	inline float* get_address_of_scaleMinimum_8() { return &___scaleMinimum_8; }
	inline void set_scaleMinimum_8(float value)
	{
		___scaleMinimum_8 = value;
	}

	inline static int32_t get_offset_of_scaleMaximum_9() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___scaleMaximum_9)); }
	inline float get_scaleMaximum_9() const { return ___scaleMaximum_9; }
	inline float* get_address_of_scaleMaximum_9() { return &___scaleMaximum_9; }
	inline void set_scaleMaximum_9(float value)
	{
		___scaleMaximum_9 = value;
	}

	inline static int32_t get_offset_of_flattenAxis_10() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___flattenAxis_10)); }
	inline int32_t get_flattenAxis_10() const { return ___flattenAxis_10; }
	inline int32_t* get_address_of_flattenAxis_10() { return &___flattenAxis_10; }
	inline void set_flattenAxis_10(int32_t value)
	{
		___flattenAxis_10 = value;
	}

	inline static int32_t get_offset_of_flattenAxisDisplayScale_11() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___flattenAxisDisplayScale_11)); }
	inline float get_flattenAxisDisplayScale_11() const { return ___flattenAxisDisplayScale_11; }
	inline float* get_address_of_flattenAxisDisplayScale_11() { return &___flattenAxisDisplayScale_11; }
	inline void set_flattenAxisDisplayScale_11(float value)
	{
		___flattenAxisDisplayScale_11 = value;
	}

	inline static int32_t get_offset_of_boxPadding_12() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___boxPadding_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_boxPadding_12() const { return ___boxPadding_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_boxPadding_12() { return &___boxPadding_12; }
	inline void set_boxPadding_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___boxPadding_12 = value;
	}

	inline static int32_t get_offset_of_boxMaterial_13() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___boxMaterial_13)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_boxMaterial_13() const { return ___boxMaterial_13; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_boxMaterial_13() { return &___boxMaterial_13; }
	inline void set_boxMaterial_13(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___boxMaterial_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boxMaterial_13), (void*)value);
	}

	inline static int32_t get_offset_of_boxGrabbedMaterial_14() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___boxGrabbedMaterial_14)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_boxGrabbedMaterial_14() const { return ___boxGrabbedMaterial_14; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_boxGrabbedMaterial_14() { return &___boxGrabbedMaterial_14; }
	inline void set_boxGrabbedMaterial_14(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___boxGrabbedMaterial_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boxGrabbedMaterial_14), (void*)value);
	}

	inline static int32_t get_offset_of_showWireframe_15() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___showWireframe_15)); }
	inline bool get_showWireframe_15() const { return ___showWireframe_15; }
	inline bool* get_address_of_showWireframe_15() { return &___showWireframe_15; }
	inline void set_showWireframe_15(bool value)
	{
		___showWireframe_15 = value;
	}

	inline static int32_t get_offset_of_wireframeShape_16() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___wireframeShape_16)); }
	inline int32_t get_wireframeShape_16() const { return ___wireframeShape_16; }
	inline int32_t* get_address_of_wireframeShape_16() { return &___wireframeShape_16; }
	inline void set_wireframeShape_16(int32_t value)
	{
		___wireframeShape_16 = value;
	}

	inline static int32_t get_offset_of_wireframeMaterial_17() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___wireframeMaterial_17)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_wireframeMaterial_17() const { return ___wireframeMaterial_17; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_wireframeMaterial_17() { return &___wireframeMaterial_17; }
	inline void set_wireframeMaterial_17(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___wireframeMaterial_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wireframeMaterial_17), (void*)value);
	}

	inline static int32_t get_offset_of_wireframeEdgeRadius_18() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___wireframeEdgeRadius_18)); }
	inline float get_wireframeEdgeRadius_18() const { return ___wireframeEdgeRadius_18; }
	inline float* get_address_of_wireframeEdgeRadius_18() { return &___wireframeEdgeRadius_18; }
	inline void set_wireframeEdgeRadius_18(float value)
	{
		___wireframeEdgeRadius_18 = value;
	}

	inline static int32_t get_offset_of_handleMaterial_19() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___handleMaterial_19)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_handleMaterial_19() const { return ___handleMaterial_19; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_handleMaterial_19() { return &___handleMaterial_19; }
	inline void set_handleMaterial_19(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___handleMaterial_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handleMaterial_19), (void*)value);
	}

	inline static int32_t get_offset_of_handleGrabbedMaterial_20() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___handleGrabbedMaterial_20)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_handleGrabbedMaterial_20() const { return ___handleGrabbedMaterial_20; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_handleGrabbedMaterial_20() { return &___handleGrabbedMaterial_20; }
	inline void set_handleGrabbedMaterial_20(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___handleGrabbedMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handleGrabbedMaterial_20), (void*)value);
	}

	inline static int32_t get_offset_of_scaleHandlePrefab_21() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___scaleHandlePrefab_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_scaleHandlePrefab_21() const { return ___scaleHandlePrefab_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_scaleHandlePrefab_21() { return &___scaleHandlePrefab_21; }
	inline void set_scaleHandlePrefab_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___scaleHandlePrefab_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scaleHandlePrefab_21), (void*)value);
	}

	inline static int32_t get_offset_of_scaleHandleSlatePrefab_22() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___scaleHandleSlatePrefab_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_scaleHandleSlatePrefab_22() const { return ___scaleHandleSlatePrefab_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_scaleHandleSlatePrefab_22() { return &___scaleHandleSlatePrefab_22; }
	inline void set_scaleHandleSlatePrefab_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___scaleHandleSlatePrefab_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scaleHandleSlatePrefab_22), (void*)value);
	}

	inline static int32_t get_offset_of_scaleHandleSize_23() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___scaleHandleSize_23)); }
	inline float get_scaleHandleSize_23() const { return ___scaleHandleSize_23; }
	inline float* get_address_of_scaleHandleSize_23() { return &___scaleHandleSize_23; }
	inline void set_scaleHandleSize_23(float value)
	{
		___scaleHandleSize_23 = value;
	}

	inline static int32_t get_offset_of_scaleHandleColliderPadding_24() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___scaleHandleColliderPadding_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_scaleHandleColliderPadding_24() const { return ___scaleHandleColliderPadding_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_scaleHandleColliderPadding_24() { return &___scaleHandleColliderPadding_24; }
	inline void set_scaleHandleColliderPadding_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___scaleHandleColliderPadding_24 = value;
	}

	inline static int32_t get_offset_of_rotationHandlePrefab_25() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___rotationHandlePrefab_25)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_rotationHandlePrefab_25() const { return ___rotationHandlePrefab_25; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_rotationHandlePrefab_25() { return &___rotationHandlePrefab_25; }
	inline void set_rotationHandlePrefab_25(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___rotationHandlePrefab_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotationHandlePrefab_25), (void*)value);
	}

	inline static int32_t get_offset_of_rotationHandleSize_26() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___rotationHandleSize_26)); }
	inline float get_rotationHandleSize_26() const { return ___rotationHandleSize_26; }
	inline float* get_address_of_rotationHandleSize_26() { return &___rotationHandleSize_26; }
	inline void set_rotationHandleSize_26(float value)
	{
		___rotationHandleSize_26 = value;
	}

	inline static int32_t get_offset_of_rotateHandleColliderPadding_27() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___rotateHandleColliderPadding_27)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rotateHandleColliderPadding_27() const { return ___rotateHandleColliderPadding_27; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rotateHandleColliderPadding_27() { return &___rotateHandleColliderPadding_27; }
	inline void set_rotateHandleColliderPadding_27(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rotateHandleColliderPadding_27 = value;
	}

	inline static int32_t get_offset_of_rotationHandlePrefabColliderType_28() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___rotationHandlePrefabColliderType_28)); }
	inline int32_t get_rotationHandlePrefabColliderType_28() const { return ___rotationHandlePrefabColliderType_28; }
	inline int32_t* get_address_of_rotationHandlePrefabColliderType_28() { return &___rotationHandlePrefabColliderType_28; }
	inline void set_rotationHandlePrefabColliderType_28(int32_t value)
	{
		___rotationHandlePrefabColliderType_28 = value;
	}

	inline static int32_t get_offset_of_showScaleHandles_29() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___showScaleHandles_29)); }
	inline bool get_showScaleHandles_29() const { return ___showScaleHandles_29; }
	inline bool* get_address_of_showScaleHandles_29() { return &___showScaleHandles_29; }
	inline void set_showScaleHandles_29(bool value)
	{
		___showScaleHandles_29 = value;
	}

	inline static int32_t get_offset_of_showRotationHandleForX_30() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___showRotationHandleForX_30)); }
	inline bool get_showRotationHandleForX_30() const { return ___showRotationHandleForX_30; }
	inline bool* get_address_of_showRotationHandleForX_30() { return &___showRotationHandleForX_30; }
	inline void set_showRotationHandleForX_30(bool value)
	{
		___showRotationHandleForX_30 = value;
	}

	inline static int32_t get_offset_of_showRotationHandleForY_31() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___showRotationHandleForY_31)); }
	inline bool get_showRotationHandleForY_31() const { return ___showRotationHandleForY_31; }
	inline bool* get_address_of_showRotationHandleForY_31() { return &___showRotationHandleForY_31; }
	inline void set_showRotationHandleForY_31(bool value)
	{
		___showRotationHandleForY_31 = value;
	}

	inline static int32_t get_offset_of_showRotationHandleForZ_32() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___showRotationHandleForZ_32)); }
	inline bool get_showRotationHandleForZ_32() const { return ___showRotationHandleForZ_32; }
	inline bool* get_address_of_showRotationHandleForZ_32() { return &___showRotationHandleForZ_32; }
	inline void set_showRotationHandleForZ_32(bool value)
	{
		___showRotationHandleForZ_32 = value;
	}

	inline static int32_t get_offset_of_drawTetherWhenManipulating_33() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___drawTetherWhenManipulating_33)); }
	inline bool get_drawTetherWhenManipulating_33() const { return ___drawTetherWhenManipulating_33; }
	inline bool* get_address_of_drawTetherWhenManipulating_33() { return &___drawTetherWhenManipulating_33; }
	inline void set_drawTetherWhenManipulating_33(bool value)
	{
		___drawTetherWhenManipulating_33 = value;
	}

	inline static int32_t get_offset_of_proximityEffectActive_34() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___proximityEffectActive_34)); }
	inline bool get_proximityEffectActive_34() const { return ___proximityEffectActive_34; }
	inline bool* get_address_of_proximityEffectActive_34() { return &___proximityEffectActive_34; }
	inline void set_proximityEffectActive_34(bool value)
	{
		___proximityEffectActive_34 = value;
	}

	inline static int32_t get_offset_of_handleMediumProximity_35() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___handleMediumProximity_35)); }
	inline float get_handleMediumProximity_35() const { return ___handleMediumProximity_35; }
	inline float* get_address_of_handleMediumProximity_35() { return &___handleMediumProximity_35; }
	inline void set_handleMediumProximity_35(float value)
	{
		___handleMediumProximity_35 = value;
	}

	inline static int32_t get_offset_of_handleCloseProximity_36() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___handleCloseProximity_36)); }
	inline float get_handleCloseProximity_36() const { return ___handleCloseProximity_36; }
	inline float* get_address_of_handleCloseProximity_36() { return &___handleCloseProximity_36; }
	inline void set_handleCloseProximity_36(float value)
	{
		___handleCloseProximity_36 = value;
	}

	inline static int32_t get_offset_of_farScale_37() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___farScale_37)); }
	inline float get_farScale_37() const { return ___farScale_37; }
	inline float* get_address_of_farScale_37() { return &___farScale_37; }
	inline void set_farScale_37(float value)
	{
		___farScale_37 = value;
	}

	inline static int32_t get_offset_of_mediumScale_38() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___mediumScale_38)); }
	inline float get_mediumScale_38() const { return ___mediumScale_38; }
	inline float* get_address_of_mediumScale_38() { return &___mediumScale_38; }
	inline void set_mediumScale_38(float value)
	{
		___mediumScale_38 = value;
	}

	inline static int32_t get_offset_of_closeScale_39() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___closeScale_39)); }
	inline float get_closeScale_39() const { return ___closeScale_39; }
	inline float* get_address_of_closeScale_39() { return &___closeScale_39; }
	inline void set_closeScale_39(float value)
	{
		___closeScale_39 = value;
	}

	inline static int32_t get_offset_of_farGrowRate_40() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___farGrowRate_40)); }
	inline float get_farGrowRate_40() const { return ___farGrowRate_40; }
	inline float* get_address_of_farGrowRate_40() { return &___farGrowRate_40; }
	inline void set_farGrowRate_40(float value)
	{
		___farGrowRate_40 = value;
	}

	inline static int32_t get_offset_of_mediumGrowRate_41() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___mediumGrowRate_41)); }
	inline float get_mediumGrowRate_41() const { return ___mediumGrowRate_41; }
	inline float* get_address_of_mediumGrowRate_41() { return &___mediumGrowRate_41; }
	inline void set_mediumGrowRate_41(float value)
	{
		___mediumGrowRate_41 = value;
	}

	inline static int32_t get_offset_of_closeGrowRate_42() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___closeGrowRate_42)); }
	inline float get_closeGrowRate_42() const { return ___closeGrowRate_42; }
	inline float* get_address_of_closeGrowRate_42() { return &___closeGrowRate_42; }
	inline void set_closeGrowRate_42(float value)
	{
		___closeGrowRate_42 = value;
	}

	inline static int32_t get_offset_of_handlesIgnoreCollider_43() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___handlesIgnoreCollider_43)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_handlesIgnoreCollider_43() const { return ___handlesIgnoreCollider_43; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_handlesIgnoreCollider_43() { return &___handlesIgnoreCollider_43; }
	inline void set_handlesIgnoreCollider_43(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___handlesIgnoreCollider_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handlesIgnoreCollider_43), (void*)value);
	}

	inline static int32_t get_offset_of_debugText_44() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___debugText_44)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_debugText_44() const { return ___debugText_44; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_debugText_44() { return &___debugText_44; }
	inline void set_debugText_44(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___debugText_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debugText_44), (void*)value);
	}

	inline static int32_t get_offset_of_hideElementsInInspector_45() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___hideElementsInInspector_45)); }
	inline bool get_hideElementsInInspector_45() const { return ___hideElementsInInspector_45; }
	inline bool* get_address_of_hideElementsInInspector_45() { return &___hideElementsInInspector_45; }
	inline void set_hideElementsInInspector_45(bool value)
	{
		___hideElementsInInspector_45 = value;
	}

	inline static int32_t get_offset_of_RotateStarted_46() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___RotateStarted_46)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_RotateStarted_46() const { return ___RotateStarted_46; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_RotateStarted_46() { return &___RotateStarted_46; }
	inline void set_RotateStarted_46(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___RotateStarted_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RotateStarted_46), (void*)value);
	}

	inline static int32_t get_offset_of_RotateStopped_47() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___RotateStopped_47)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_RotateStopped_47() const { return ___RotateStopped_47; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_RotateStopped_47() { return &___RotateStopped_47; }
	inline void set_RotateStopped_47(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___RotateStopped_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RotateStopped_47), (void*)value);
	}

	inline static int32_t get_offset_of_ScaleStarted_48() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___ScaleStarted_48)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_ScaleStarted_48() const { return ___ScaleStarted_48; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_ScaleStarted_48() { return &___ScaleStarted_48; }
	inline void set_ScaleStarted_48(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___ScaleStarted_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ScaleStarted_48), (void*)value);
	}

	inline static int32_t get_offset_of_ScaleStopped_49() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___ScaleStopped_49)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_ScaleStopped_49() const { return ___ScaleStopped_49; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_ScaleStopped_49() { return &___ScaleStopped_49; }
	inline void set_ScaleStopped_49(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___ScaleStopped_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ScaleStopped_49), (void*)value);
	}

	inline static int32_t get_offset_of_wireframeOnly_50() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___wireframeOnly_50)); }
	inline bool get_wireframeOnly_50() const { return ___wireframeOnly_50; }
	inline bool* get_address_of_wireframeOnly_50() { return &___wireframeOnly_50; }
	inline void set_wireframeOnly_50(bool value)
	{
		___wireframeOnly_50 = value;
	}

	inline static int32_t get_offset_of_currentPointer_51() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___currentPointer_51)); }
	inline RuntimeObject* get_currentPointer_51() const { return ___currentPointer_51; }
	inline RuntimeObject** get_address_of_currentPointer_51() { return &___currentPointer_51; }
	inline void set_currentPointer_51(RuntimeObject* value)
	{
		___currentPointer_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentPointer_51), (void*)value);
	}

	inline static int32_t get_offset_of_rigRoot_52() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___rigRoot_52)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_rigRoot_52() const { return ___rigRoot_52; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_rigRoot_52() { return &___rigRoot_52; }
	inline void set_rigRoot_52(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___rigRoot_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigRoot_52), (void*)value);
	}

	inline static int32_t get_offset_of_boxDisplay_53() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___boxDisplay_53)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_boxDisplay_53() const { return ___boxDisplay_53; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_boxDisplay_53() { return &___boxDisplay_53; }
	inline void set_boxDisplay_53(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___boxDisplay_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boxDisplay_53), (void*)value);
	}

	inline static int32_t get_offset_of_boundsCorners_54() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___boundsCorners_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_boundsCorners_54() const { return ___boundsCorners_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_boundsCorners_54() { return &___boundsCorners_54; }
	inline void set_boundsCorners_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___boundsCorners_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundsCorners_54), (void*)value);
	}

	inline static int32_t get_offset_of_currentBoundsExtents_55() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___currentBoundsExtents_55)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currentBoundsExtents_55() const { return ___currentBoundsExtents_55; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currentBoundsExtents_55() { return &___currentBoundsExtents_55; }
	inline void set_currentBoundsExtents_55(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currentBoundsExtents_55 = value;
	}

	inline static int32_t get_offset_of_eyeTrackingProvider_56() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___eyeTrackingProvider_56)); }
	inline RuntimeObject* get_eyeTrackingProvider_56() const { return ___eyeTrackingProvider_56; }
	inline RuntimeObject** get_address_of_eyeTrackingProvider_56() { return &___eyeTrackingProvider_56; }
	inline void set_eyeTrackingProvider_56(RuntimeObject* value)
	{
		___eyeTrackingProvider_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eyeTrackingProvider_56), (void*)value);
	}

	inline static int32_t get_offset_of_touchingSources_57() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___touchingSources_57)); }
	inline List_1_t6E9BDFABC524233989C30EA91E7A597DB4547051 * get_touchingSources_57() const { return ___touchingSources_57; }
	inline List_1_t6E9BDFABC524233989C30EA91E7A597DB4547051 ** get_address_of_touchingSources_57() { return &___touchingSources_57; }
	inline void set_touchingSources_57(List_1_t6E9BDFABC524233989C30EA91E7A597DB4547051 * value)
	{
		___touchingSources_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___touchingSources_57), (void*)value);
	}

	inline static int32_t get_offset_of_links_58() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___links_58)); }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * get_links_58() const { return ___links_58; }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 ** get_address_of_links_58() { return &___links_58; }
	inline void set_links_58(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * value)
	{
		___links_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___links_58), (void*)value);
	}

	inline static int32_t get_offset_of_linkRenderers_59() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___linkRenderers_59)); }
	inline List_1_tB73BF10E0869BDB4D391E61BA46B75BECA4DCDBE * get_linkRenderers_59() const { return ___linkRenderers_59; }
	inline List_1_tB73BF10E0869BDB4D391E61BA46B75BECA4DCDBE ** get_address_of_linkRenderers_59() { return &___linkRenderers_59; }
	inline void set_linkRenderers_59(List_1_tB73BF10E0869BDB4D391E61BA46B75BECA4DCDBE * value)
	{
		___linkRenderers_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linkRenderers_59), (void*)value);
	}

	inline static int32_t get_offset_of_sourcesDetected_60() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___sourcesDetected_60)); }
	inline List_1_t334A197C1C5E943F4780B2EFB5984089C7C5E3A8 * get_sourcesDetected_60() const { return ___sourcesDetected_60; }
	inline List_1_t334A197C1C5E943F4780B2EFB5984089C7C5E3A8 ** get_address_of_sourcesDetected_60() { return &___sourcesDetected_60; }
	inline void set_sourcesDetected_60(List_1_t334A197C1C5E943F4780B2EFB5984089C7C5E3A8 * value)
	{
		___sourcesDetected_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourcesDetected_60), (void*)value);
	}

	inline static int32_t get_offset_of_edgeCenters_61() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___edgeCenters_61)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_edgeCenters_61() const { return ___edgeCenters_61; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_edgeCenters_61() { return &___edgeCenters_61; }
	inline void set_edgeCenters_61(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___edgeCenters_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___edgeCenters_61), (void*)value);
	}

	inline static int32_t get_offset_of_currentRotationAxis_62() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___currentRotationAxis_62)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currentRotationAxis_62() const { return ___currentRotationAxis_62; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currentRotationAxis_62() { return &___currentRotationAxis_62; }
	inline void set_currentRotationAxis_62(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currentRotationAxis_62 = value;
	}

	inline static int32_t get_offset_of_initialScaleOnGrabStart_63() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___initialScaleOnGrabStart_63)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_initialScaleOnGrabStart_63() const { return ___initialScaleOnGrabStart_63; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_initialScaleOnGrabStart_63() { return &___initialScaleOnGrabStart_63; }
	inline void set_initialScaleOnGrabStart_63(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___initialScaleOnGrabStart_63 = value;
	}

	inline static int32_t get_offset_of_initialPositionOnGrabStart_64() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___initialPositionOnGrabStart_64)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_initialPositionOnGrabStart_64() const { return ___initialPositionOnGrabStart_64; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_initialPositionOnGrabStart_64() { return &___initialPositionOnGrabStart_64; }
	inline void set_initialPositionOnGrabStart_64(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___initialPositionOnGrabStart_64 = value;
	}

	inline static int32_t get_offset_of_initialGrabPoint_65() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___initialGrabPoint_65)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_initialGrabPoint_65() const { return ___initialGrabPoint_65; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_initialGrabPoint_65() { return &___initialGrabPoint_65; }
	inline void set_initialGrabPoint_65(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___initialGrabPoint_65 = value;
	}

	inline static int32_t get_offset_of_currentGrabPoint_66() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___currentGrabPoint_66)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currentGrabPoint_66() const { return ___currentGrabPoint_66; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currentGrabPoint_66() { return &___currentGrabPoint_66; }
	inline void set_currentGrabPoint_66(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currentGrabPoint_66 = value;
	}

	inline static int32_t get_offset_of_scaleConstraint_67() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___scaleConstraint_67)); }
	inline MinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A * get_scaleConstraint_67() const { return ___scaleConstraint_67; }
	inline MinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A ** get_address_of_scaleConstraint_67() { return &___scaleConstraint_67; }
	inline void set_scaleConstraint_67(MinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A * value)
	{
		___scaleConstraint_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scaleConstraint_67), (void*)value);
	}

	inline static int32_t get_offset_of_grabPointInPointer_68() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___grabPointInPointer_68)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_grabPointInPointer_68() const { return ___grabPointInPointer_68; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_grabPointInPointer_68() { return &___grabPointInPointer_68; }
	inline void set_grabPointInPointer_68(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___grabPointInPointer_68 = value;
	}

	inline static int32_t get_offset_of_edgeAxes_69() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___edgeAxes_69)); }
	inline CardinalAxisTypeU5BU5D_t3380B4620B2588C02B8ADB9E5E94DF17ABA6A375* get_edgeAxes_69() const { return ___edgeAxes_69; }
	inline CardinalAxisTypeU5BU5D_t3380B4620B2588C02B8ADB9E5E94DF17ABA6A375** get_address_of_edgeAxes_69() { return &___edgeAxes_69; }
	inline void set_edgeAxes_69(CardinalAxisTypeU5BU5D_t3380B4620B2588C02B8ADB9E5E94DF17ABA6A375* value)
	{
		___edgeAxes_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___edgeAxes_69), (void*)value);
	}

	inline static int32_t get_offset_of_flattenedHandles_70() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___flattenedHandles_70)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_flattenedHandles_70() const { return ___flattenedHandles_70; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_flattenedHandles_70() { return &___flattenedHandles_70; }
	inline void set_flattenedHandles_70(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___flattenedHandles_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___flattenedHandles_70), (void*)value);
	}

	inline static int32_t get_offset_of_oppositeCorner_71() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___oppositeCorner_71)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oppositeCorner_71() const { return ___oppositeCorner_71; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oppositeCorner_71() { return &___oppositeCorner_71; }
	inline void set_oppositeCorner_71(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oppositeCorner_71 = value;
	}

	inline static int32_t get_offset_of_diagonalDir_72() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___diagonalDir_72)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_diagonalDir_72() const { return ___diagonalDir_72; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_diagonalDir_72() { return &___diagonalDir_72; }
	inline void set_diagonalDir_72(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___diagonalDir_72 = value;
	}

	inline static int32_t get_offset_of_currentHandleType_73() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___currentHandleType_73)); }
	inline int32_t get_currentHandleType_73() const { return ___currentHandleType_73; }
	inline int32_t* get_address_of_currentHandleType_73() { return &___currentHandleType_73; }
	inline void set_currentHandleType_73(int32_t value)
	{
		___currentHandleType_73 = value;
	}

	inline static int32_t get_offset_of_prevBoundsOverride_74() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___prevBoundsOverride_74)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_prevBoundsOverride_74() const { return ___prevBoundsOverride_74; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_prevBoundsOverride_74() { return &___prevBoundsOverride_74; }
	inline void set_prevBoundsOverride_74(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___prevBoundsOverride_74 = value;
	}

	inline static int32_t get_offset_of_initialBoundsOverrideSize_75() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___initialBoundsOverrideSize_75)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_initialBoundsOverrideSize_75() const { return ___initialBoundsOverrideSize_75; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_initialBoundsOverrideSize_75() { return &___initialBoundsOverrideSize_75; }
	inline void set_initialBoundsOverrideSize_75(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___initialBoundsOverrideSize_75 = value;
	}

	inline static int32_t get_offset_of_isChildOfTarget_76() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___isChildOfTarget_76)); }
	inline bool get_isChildOfTarget_76() const { return ___isChildOfTarget_76; }
	inline bool* get_address_of_isChildOfTarget_76() { return &___isChildOfTarget_76; }
	inline void set_isChildOfTarget_76(bool value)
	{
		___isChildOfTarget_76 = value;
	}

	inline static int32_t get_offset_of_proximityPointers_79() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___proximityPointers_79)); }
	inline HashSet_1_t2FA1E1D55BEABC44A1D48B3609F04EDF8AD396A9 * get_proximityPointers_79() const { return ___proximityPointers_79; }
	inline HashSet_1_t2FA1E1D55BEABC44A1D48B3609F04EDF8AD396A9 ** get_address_of_proximityPointers_79() { return &___proximityPointers_79; }
	inline void set_proximityPointers_79(HashSet_1_t2FA1E1D55BEABC44A1D48B3609F04EDF8AD396A9 * value)
	{
		___proximityPointers_79 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___proximityPointers_79), (void*)value);
	}

	inline static int32_t get_offset_of_proximityPoints_80() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___proximityPoints_80)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_proximityPoints_80() const { return ___proximityPoints_80; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_proximityPoints_80() { return &___proximityPoints_80; }
	inline void set_proximityPoints_80(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___proximityPoints_80 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___proximityPoints_80), (void*)value);
	}

	inline static int32_t get_offset_of_active_81() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___active_81)); }
	inline bool get_active_81() const { return ___active_81; }
	inline bool* get_address_of_active_81() { return &___active_81; }
	inline void set_active_81(bool value)
	{
		___active_81 = value;
	}

	inline static int32_t get_offset_of_U3CTargetBoundsU3Ek__BackingField_82() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___U3CTargetBoundsU3Ek__BackingField_82)); }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * get_U3CTargetBoundsU3Ek__BackingField_82() const { return ___U3CTargetBoundsU3Ek__BackingField_82; }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 ** get_address_of_U3CTargetBoundsU3Ek__BackingField_82() { return &___U3CTargetBoundsU3Ek__BackingField_82; }
	inline void set_U3CTargetBoundsU3Ek__BackingField_82(BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * value)
	{
		___U3CTargetBoundsU3Ek__BackingField_82 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTargetBoundsU3Ek__BackingField_82), (void*)value);
	}

	inline static int32_t get_offset_of_handles_83() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___handles_83)); }
	inline List_1_t83E71016ABDACC541489F5FBBEF4C3570033D7E9 * get_handles_83() const { return ___handles_83; }
	inline List_1_t83E71016ABDACC541489F5FBBEF4C3570033D7E9 ** get_address_of_handles_83() { return &___handles_83; }
	inline void set_handles_83(List_1_t83E71016ABDACC541489F5FBBEF4C3570033D7E9 * value)
	{
		___handles_83 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handles_83), (void*)value);
	}

	inline static int32_t get_offset_of_corners_84() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___corners_84)); }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * get_corners_84() const { return ___corners_84; }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 ** get_address_of_corners_84() { return &___corners_84; }
	inline void set_corners_84(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * value)
	{
		___corners_84 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___corners_84), (void*)value);
	}

	inline static int32_t get_offset_of_balls_85() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1, ___balls_85)); }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * get_balls_85() const { return ___balls_85; }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 ** get_address_of_balls_85() { return &___balls_85; }
	inline void set_balls_85(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * value)
	{
		___balls_85 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___balls_85), (void*)value);
	}
};

struct BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.UI.BoundingBox::TotalBoundsCorners
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___TotalBoundsCorners_78;

public:
	inline static int32_t get_offset_of_TotalBoundsCorners_78() { return static_cast<int32_t>(offsetof(BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1_StaticFields, ___TotalBoundsCorners_78)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_TotalBoundsCorners_78() const { return ___TotalBoundsCorners_78; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_TotalBoundsCorners_78() { return &___TotalBoundsCorners_78; }
	inline void set_TotalBoundsCorners_78(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___TotalBoundsCorners_78 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TotalBoundsCorners_78), (void*)value);
	}
};


// Microsoft.MixedReality.WorldLocking.Examples.CircleCam
struct CircleCam_t40F5AF87A6CE410B5C787E2AC36BAD0D850C52EF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Microsoft.MixedReality.WorldLocking.Examples.CircleCam::rpm
	float ___rpm_4;
	// System.Single Microsoft.MixedReality.WorldLocking.Examples.CircleCam::distance
	float ___distance_5;
	// System.Single Microsoft.MixedReality.WorldLocking.Examples.CircleCam::lookAngle
	float ___lookAngle_6;
	// System.Single Microsoft.MixedReality.WorldLocking.Examples.CircleCam::revolutions
	float ___revolutions_7;

public:
	inline static int32_t get_offset_of_rpm_4() { return static_cast<int32_t>(offsetof(CircleCam_t40F5AF87A6CE410B5C787E2AC36BAD0D850C52EF, ___rpm_4)); }
	inline float get_rpm_4() const { return ___rpm_4; }
	inline float* get_address_of_rpm_4() { return &___rpm_4; }
	inline void set_rpm_4(float value)
	{
		___rpm_4 = value;
	}

	inline static int32_t get_offset_of_distance_5() { return static_cast<int32_t>(offsetof(CircleCam_t40F5AF87A6CE410B5C787E2AC36BAD0D850C52EF, ___distance_5)); }
	inline float get_distance_5() const { return ___distance_5; }
	inline float* get_address_of_distance_5() { return &___distance_5; }
	inline void set_distance_5(float value)
	{
		___distance_5 = value;
	}

	inline static int32_t get_offset_of_lookAngle_6() { return static_cast<int32_t>(offsetof(CircleCam_t40F5AF87A6CE410B5C787E2AC36BAD0D850C52EF, ___lookAngle_6)); }
	inline float get_lookAngle_6() const { return ___lookAngle_6; }
	inline float* get_address_of_lookAngle_6() { return &___lookAngle_6; }
	inline void set_lookAngle_6(float value)
	{
		___lookAngle_6 = value;
	}

	inline static int32_t get_offset_of_revolutions_7() { return static_cast<int32_t>(offsetof(CircleCam_t40F5AF87A6CE410B5C787E2AC36BAD0D850C52EF, ___revolutions_7)); }
	inline float get_revolutions_7() const { return ___revolutions_7; }
	inline float* get_address_of_revolutions_7() { return &___revolutions_7; }
	inline void set_revolutions_7(float value)
	{
		___revolutions_7 = value;
	}
};


// Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand
struct DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.WorldLocking.Tools.StatusToText Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::textManager
	StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B * ___textManager_4;
	// Microsoft.MixedReality.WorldLocking.Tools.AnchorGraphVisual Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::anchorVisualizer
	AnchorGraphVisual_tD55799591BF2B332DDC5DBFF1E79CE20B7A42926 * ___anchorVisualizer_5;
	// Microsoft.MixedReality.WorldLocking.Tools.FrozenSpatialMapping Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::spatialMapping
	FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E * ___spatialMapping_6;
	// UnityEngine.Transform Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::guiRoot
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___guiRoot_7;

public:
	inline static int32_t get_offset_of_textManager_4() { return static_cast<int32_t>(offsetof(DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19, ___textManager_4)); }
	inline StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B * get_textManager_4() const { return ___textManager_4; }
	inline StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B ** get_address_of_textManager_4() { return &___textManager_4; }
	inline void set_textManager_4(StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B * value)
	{
		___textManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_anchorVisualizer_5() { return static_cast<int32_t>(offsetof(DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19, ___anchorVisualizer_5)); }
	inline AnchorGraphVisual_tD55799591BF2B332DDC5DBFF1E79CE20B7A42926 * get_anchorVisualizer_5() const { return ___anchorVisualizer_5; }
	inline AnchorGraphVisual_tD55799591BF2B332DDC5DBFF1E79CE20B7A42926 ** get_address_of_anchorVisualizer_5() { return &___anchorVisualizer_5; }
	inline void set_anchorVisualizer_5(AnchorGraphVisual_tD55799591BF2B332DDC5DBFF1E79CE20B7A42926 * value)
	{
		___anchorVisualizer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anchorVisualizer_5), (void*)value);
	}

	inline static int32_t get_offset_of_spatialMapping_6() { return static_cast<int32_t>(offsetof(DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19, ___spatialMapping_6)); }
	inline FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E * get_spatialMapping_6() const { return ___spatialMapping_6; }
	inline FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E ** get_address_of_spatialMapping_6() { return &___spatialMapping_6; }
	inline void set_spatialMapping_6(FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E * value)
	{
		___spatialMapping_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialMapping_6), (void*)value);
	}

	inline static int32_t get_offset_of_guiRoot_7() { return static_cast<int32_t>(offsetof(DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19, ___guiRoot_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_guiRoot_7() const { return ___guiRoot_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_guiRoot_7() { return &___guiRoot_7; }
	inline void set_guiRoot_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___guiRoot_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___guiRoot_7), (void*)value);
	}
};


// DashboardTagalong
struct DashboardTagalong_t512CB53559A431CDDAE81E9A0725BF9E885CEA5A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single DashboardTagalong::maxAngle
	float ___maxAngle_4;
	// System.Single DashboardTagalong::lerpTime
	float ___lerpTime_5;
	// UnityEngine.Vector3 DashboardTagalong::originalPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___originalPosition_6;
	// UnityEngine.Quaternion DashboardTagalong::originalRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___originalRotation_7;
	// UnityEngine.Quaternion DashboardTagalong::currentRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___currentRotation_8;

public:
	inline static int32_t get_offset_of_maxAngle_4() { return static_cast<int32_t>(offsetof(DashboardTagalong_t512CB53559A431CDDAE81E9A0725BF9E885CEA5A, ___maxAngle_4)); }
	inline float get_maxAngle_4() const { return ___maxAngle_4; }
	inline float* get_address_of_maxAngle_4() { return &___maxAngle_4; }
	inline void set_maxAngle_4(float value)
	{
		___maxAngle_4 = value;
	}

	inline static int32_t get_offset_of_lerpTime_5() { return static_cast<int32_t>(offsetof(DashboardTagalong_t512CB53559A431CDDAE81E9A0725BF9E885CEA5A, ___lerpTime_5)); }
	inline float get_lerpTime_5() const { return ___lerpTime_5; }
	inline float* get_address_of_lerpTime_5() { return &___lerpTime_5; }
	inline void set_lerpTime_5(float value)
	{
		___lerpTime_5 = value;
	}

	inline static int32_t get_offset_of_originalPosition_6() { return static_cast<int32_t>(offsetof(DashboardTagalong_t512CB53559A431CDDAE81E9A0725BF9E885CEA5A, ___originalPosition_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_originalPosition_6() const { return ___originalPosition_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_originalPosition_6() { return &___originalPosition_6; }
	inline void set_originalPosition_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___originalPosition_6 = value;
	}

	inline static int32_t get_offset_of_originalRotation_7() { return static_cast<int32_t>(offsetof(DashboardTagalong_t512CB53559A431CDDAE81E9A0725BF9E885CEA5A, ___originalRotation_7)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_originalRotation_7() const { return ___originalRotation_7; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_originalRotation_7() { return &___originalRotation_7; }
	inline void set_originalRotation_7(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___originalRotation_7 = value;
	}

	inline static int32_t get_offset_of_currentRotation_8() { return static_cast<int32_t>(offsetof(DashboardTagalong_t512CB53559A431CDDAE81E9A0725BF9E885CEA5A, ___currentRotation_8)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_currentRotation_8() const { return ___currentRotation_8; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_currentRotation_8() { return &___currentRotation_8; }
	inline void set_currentRotation_8(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___currentRotation_8 = value;
	}
};


// Microsoft.MixedReality.WorldLocking.Examples.DashboardUI
struct DashboardUI_t5FF56233F29A77F17392EE883CD15F1F90635EFE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand Microsoft.MixedReality.WorldLocking.Examples.DashboardUI::dashboardCommand
	DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * ___dashboardCommand_4;
	// Microsoft.MixedReality.Toolkit.UI.Interactable Microsoft.MixedReality.WorldLocking.Examples.DashboardUI::ButtonRefreeze
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * ___ButtonRefreeze_5;
	// Microsoft.MixedReality.Toolkit.UI.Interactable Microsoft.MixedReality.WorldLocking.Examples.DashboardUI::ButtonMerge
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * ___ButtonMerge_6;
	// Microsoft.MixedReality.Toolkit.UI.Interactable Microsoft.MixedReality.WorldLocking.Examples.DashboardUI::CheckBoxShowAnchors
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * ___CheckBoxShowAnchors_7;
	// Microsoft.MixedReality.Toolkit.UI.Interactable Microsoft.MixedReality.WorldLocking.Examples.DashboardUI::CheckBoxShowInfo
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * ___CheckBoxShowInfo_8;
	// Microsoft.MixedReality.Toolkit.UI.Interactable Microsoft.MixedReality.WorldLocking.Examples.DashboardUI::CheckBoxShowMetrics
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * ___CheckBoxShowMetrics_9;
	// Microsoft.MixedReality.Toolkit.UI.Interactable Microsoft.MixedReality.WorldLocking.Examples.DashboardUI::CheckBoxShowSpatMap
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * ___CheckBoxShowSpatMap_10;
	// Microsoft.MixedReality.Toolkit.UI.Interactable Microsoft.MixedReality.WorldLocking.Examples.DashboardUI::CheckBoxManagerEnabled
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * ___CheckBoxManagerEnabled_11;
	// Microsoft.MixedReality.Toolkit.UI.Interactable Microsoft.MixedReality.WorldLocking.Examples.DashboardUI::CheckBoxAutoMerge
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * ___CheckBoxAutoMerge_12;
	// Microsoft.MixedReality.Toolkit.UI.Interactable Microsoft.MixedReality.WorldLocking.Examples.DashboardUI::CheckBoxAutoSave
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * ___CheckBoxAutoSave_13;
	// Microsoft.MixedReality.Toolkit.UI.Interactable Microsoft.MixedReality.WorldLocking.Examples.DashboardUI::CheckBoxAutoRefreeze
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * ___CheckBoxAutoRefreeze_14;
	// Microsoft.MixedReality.Toolkit.UI.Interactable Microsoft.MixedReality.WorldLocking.Examples.DashboardUI::ButtonSave
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * ___ButtonSave_15;
	// Microsoft.MixedReality.Toolkit.UI.Interactable Microsoft.MixedReality.WorldLocking.Examples.DashboardUI::ButtonLoad
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * ___ButtonLoad_16;

public:
	inline static int32_t get_offset_of_dashboardCommand_4() { return static_cast<int32_t>(offsetof(DashboardUI_t5FF56233F29A77F17392EE883CD15F1F90635EFE, ___dashboardCommand_4)); }
	inline DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * get_dashboardCommand_4() const { return ___dashboardCommand_4; }
	inline DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 ** get_address_of_dashboardCommand_4() { return &___dashboardCommand_4; }
	inline void set_dashboardCommand_4(DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * value)
	{
		___dashboardCommand_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dashboardCommand_4), (void*)value);
	}

	inline static int32_t get_offset_of_ButtonRefreeze_5() { return static_cast<int32_t>(offsetof(DashboardUI_t5FF56233F29A77F17392EE883CD15F1F90635EFE, ___ButtonRefreeze_5)); }
	inline Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * get_ButtonRefreeze_5() const { return ___ButtonRefreeze_5; }
	inline Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 ** get_address_of_ButtonRefreeze_5() { return &___ButtonRefreeze_5; }
	inline void set_ButtonRefreeze_5(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * value)
	{
		___ButtonRefreeze_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ButtonRefreeze_5), (void*)value);
	}

	inline static int32_t get_offset_of_ButtonMerge_6() { return static_cast<int32_t>(offsetof(DashboardUI_t5FF56233F29A77F17392EE883CD15F1F90635EFE, ___ButtonMerge_6)); }
	inline Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * get_ButtonMerge_6() const { return ___ButtonMerge_6; }
	inline Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 ** get_address_of_ButtonMerge_6() { return &___ButtonMerge_6; }
	inline void set_ButtonMerge_6(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * value)
	{
		___ButtonMerge_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ButtonMerge_6), (void*)value);
	}

	inline static int32_t get_offset_of_CheckBoxShowAnchors_7() { return static_cast<int32_t>(offsetof(DashboardUI_t5FF56233F29A77F17392EE883CD15F1F90635EFE, ___CheckBoxShowAnchors_7)); }
	inline Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * get_CheckBoxShowAnchors_7() const { return ___CheckBoxShowAnchors_7; }
	inline Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 ** get_address_of_CheckBoxShowAnchors_7() { return &___CheckBoxShowAnchors_7; }
	inline void set_CheckBoxShowAnchors_7(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * value)
	{
		___CheckBoxShowAnchors_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckBoxShowAnchors_7), (void*)value);
	}

	inline static int32_t get_offset_of_CheckBoxShowInfo_8() { return static_cast<int32_t>(offsetof(DashboardUI_t5FF56233F29A77F17392EE883CD15F1F90635EFE, ___CheckBoxShowInfo_8)); }
	inline Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * get_CheckBoxShowInfo_8() const { return ___CheckBoxShowInfo_8; }
	inline Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 ** get_address_of_CheckBoxShowInfo_8() { return &___CheckBoxShowInfo_8; }
	inline void set_CheckBoxShowInfo_8(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * value)
	{
		___CheckBoxShowInfo_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckBoxShowInfo_8), (void*)value);
	}

	inline static int32_t get_offset_of_CheckBoxShowMetrics_9() { return static_cast<int32_t>(offsetof(DashboardUI_t5FF56233F29A77F17392EE883CD15F1F90635EFE, ___CheckBoxShowMetrics_9)); }
	inline Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * get_CheckBoxShowMetrics_9() const { return ___CheckBoxShowMetrics_9; }
	inline Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 ** get_address_of_CheckBoxShowMetrics_9() { return &___CheckBoxShowMetrics_9; }
	inline void set_CheckBoxShowMetrics_9(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * value)
	{
		___CheckBoxShowMetrics_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckBoxShowMetrics_9), (void*)value);
	}

	inline static int32_t get_offset_of_CheckBoxShowSpatMap_10() { return static_cast<int32_t>(offsetof(DashboardUI_t5FF56233F29A77F17392EE883CD15F1F90635EFE, ___CheckBoxShowSpatMap_10)); }
	inline Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * get_CheckBoxShowSpatMap_10() const { return ___CheckBoxShowSpatMap_10; }
	inline Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 ** get_address_of_CheckBoxShowSpatMap_10() { return &___CheckBoxShowSpatMap_10; }
	inline void set_CheckBoxShowSpatMap_10(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * value)
	{
		___CheckBoxShowSpatMap_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckBoxShowSpatMap_10), (void*)value);
	}

	inline static int32_t get_offset_of_CheckBoxManagerEnabled_11() { return static_cast<int32_t>(offsetof(DashboardUI_t5FF56233F29A77F17392EE883CD15F1F90635EFE, ___CheckBoxManagerEnabled_11)); }
	inline Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * get_CheckBoxManagerEnabled_11() const { return ___CheckBoxManagerEnabled_11; }
	inline Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 ** get_address_of_CheckBoxManagerEnabled_11() { return &___CheckBoxManagerEnabled_11; }
	inline void set_CheckBoxManagerEnabled_11(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * value)
	{
		___CheckBoxManagerEnabled_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckBoxManagerEnabled_11), (void*)value);
	}

	inline static int32_t get_offset_of_CheckBoxAutoMerge_12() { return static_cast<int32_t>(offsetof(DashboardUI_t5FF56233F29A77F17392EE883CD15F1F90635EFE, ___CheckBoxAutoMerge_12)); }
	inline Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * get_CheckBoxAutoMerge_12() const { return ___CheckBoxAutoMerge_12; }
	inline Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 ** get_address_of_CheckBoxAutoMerge_12() { return &___CheckBoxAutoMerge_12; }
	inline void set_CheckBoxAutoMerge_12(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * value)
	{
		___CheckBoxAutoMerge_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckBoxAutoMerge_12), (void*)value);
	}

	inline static int32_t get_offset_of_CheckBoxAutoSave_13() { return static_cast<int32_t>(offsetof(DashboardUI_t5FF56233F29A77F17392EE883CD15F1F90635EFE, ___CheckBoxAutoSave_13)); }
	inline Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * get_CheckBoxAutoSave_13() const { return ___CheckBoxAutoSave_13; }
	inline Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 ** get_address_of_CheckBoxAutoSave_13() { return &___CheckBoxAutoSave_13; }
	inline void set_CheckBoxAutoSave_13(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * value)
	{
		___CheckBoxAutoSave_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckBoxAutoSave_13), (void*)value);
	}

	inline static int32_t get_offset_of_CheckBoxAutoRefreeze_14() { return static_cast<int32_t>(offsetof(DashboardUI_t5FF56233F29A77F17392EE883CD15F1F90635EFE, ___CheckBoxAutoRefreeze_14)); }
	inline Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * get_CheckBoxAutoRefreeze_14() const { return ___CheckBoxAutoRefreeze_14; }
	inline Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 ** get_address_of_CheckBoxAutoRefreeze_14() { return &___CheckBoxAutoRefreeze_14; }
	inline void set_CheckBoxAutoRefreeze_14(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * value)
	{
		___CheckBoxAutoRefreeze_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckBoxAutoRefreeze_14), (void*)value);
	}

	inline static int32_t get_offset_of_ButtonSave_15() { return static_cast<int32_t>(offsetof(DashboardUI_t5FF56233F29A77F17392EE883CD15F1F90635EFE, ___ButtonSave_15)); }
	inline Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * get_ButtonSave_15() const { return ___ButtonSave_15; }
	inline Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 ** get_address_of_ButtonSave_15() { return &___ButtonSave_15; }
	inline void set_ButtonSave_15(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * value)
	{
		___ButtonSave_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ButtonSave_15), (void*)value);
	}

	inline static int32_t get_offset_of_ButtonLoad_16() { return static_cast<int32_t>(offsetof(DashboardUI_t5FF56233F29A77F17392EE883CD15F1F90635EFE, ___ButtonLoad_16)); }
	inline Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * get_ButtonLoad_16() const { return ___ButtonLoad_16; }
	inline Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 ** get_address_of_ButtonLoad_16() { return &___ButtonLoad_16; }
	inline void set_ButtonLoad_16(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * value)
	{
		___ButtonLoad_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ButtonLoad_16), (void*)value);
	}
};


// Microsoft.MixedReality.WorldLocking.Examples.FallOut
struct FallOut_t2D5A2E64A1587E18E8602B5982785629786D8B4A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Microsoft.MixedReality.WorldLocking.Examples.FallOut::KillHeight
	float ___KillHeight_4;

public:
	inline static int32_t get_offset_of_KillHeight_4() { return static_cast<int32_t>(offsetof(FallOut_t2D5A2E64A1587E18E8602B5982785629786D8B4A, ___KillHeight_4)); }
	inline float get_KillHeight_4() const { return ___KillHeight_4; }
	inline float* get_address_of_KillHeight_4() { return &___KillHeight_4; }
	inline void set_KillHeight_4(float value)
	{
		___KillHeight_4 = value;
	}
};


// Microsoft.MixedReality.WorldLocking.Tools.FrozenSpatialMapping
struct FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.WorldLocking.Tools.FrozenSpatialMapping/SurfaceEntry> Microsoft.MixedReality.WorldLocking.Tools.FrozenSpatialMapping::surfaces
	Dictionary_2_tD55D00DB4EB3675CD3B728361B2FA38BC666A034 * ___surfaces_4;
	// System.Boolean Microsoft.MixedReality.WorldLocking.Tools.FrozenSpatialMapping::active
	bool ___active_5;
	// UnityEngine.Material Microsoft.MixedReality.WorldLocking.Tools.FrozenSpatialMapping::drawMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___drawMaterial_6;
	// System.Boolean Microsoft.MixedReality.WorldLocking.Tools.FrozenSpatialMapping::display
	bool ___display_7;
	// System.Boolean Microsoft.MixedReality.WorldLocking.Tools.FrozenSpatialMapping::collide
	bool ___collide_8;
	// UnityEngine.Transform Microsoft.MixedReality.WorldLocking.Tools.FrozenSpatialMapping::hangerObject
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___hangerObject_9;
	// UnityEngine.Transform Microsoft.MixedReality.WorldLocking.Tools.FrozenSpatialMapping::centerObject
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___centerObject_10;
	// System.Single Microsoft.MixedReality.WorldLocking.Tools.FrozenSpatialMapping::updatePeriod
	float ___updatePeriod_11;
	// System.Single Microsoft.MixedReality.WorldLocking.Tools.FrozenSpatialMapping::radius
	float ___radius_12;
	// Microsoft.MixedReality.WorldLocking.Tools.FrozenSpatialMapping/QualityType Microsoft.MixedReality.WorldLocking.Tools.FrozenSpatialMapping::quality
	int32_t ___quality_13;
	// System.Boolean Microsoft.MixedReality.WorldLocking.Tools.FrozenSpatialMapping::waitingForBake
	bool ___waitingForBake_14;
	// System.Single Microsoft.MixedReality.WorldLocking.Tools.FrozenSpatialMapping::updateCountdown
	float ___updateCountdown_15;
	// System.Int32 Microsoft.MixedReality.WorldLocking.Tools.FrozenSpatialMapping::spatialMappingLayer
	int32_t ___spatialMappingLayer_16;

public:
	inline static int32_t get_offset_of_surfaces_4() { return static_cast<int32_t>(offsetof(FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E, ___surfaces_4)); }
	inline Dictionary_2_tD55D00DB4EB3675CD3B728361B2FA38BC666A034 * get_surfaces_4() const { return ___surfaces_4; }
	inline Dictionary_2_tD55D00DB4EB3675CD3B728361B2FA38BC666A034 ** get_address_of_surfaces_4() { return &___surfaces_4; }
	inline void set_surfaces_4(Dictionary_2_tD55D00DB4EB3675CD3B728361B2FA38BC666A034 * value)
	{
		___surfaces_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___surfaces_4), (void*)value);
	}

	inline static int32_t get_offset_of_active_5() { return static_cast<int32_t>(offsetof(FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E, ___active_5)); }
	inline bool get_active_5() const { return ___active_5; }
	inline bool* get_address_of_active_5() { return &___active_5; }
	inline void set_active_5(bool value)
	{
		___active_5 = value;
	}

	inline static int32_t get_offset_of_drawMaterial_6() { return static_cast<int32_t>(offsetof(FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E, ___drawMaterial_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_drawMaterial_6() const { return ___drawMaterial_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_drawMaterial_6() { return &___drawMaterial_6; }
	inline void set_drawMaterial_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___drawMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___drawMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_display_7() { return static_cast<int32_t>(offsetof(FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E, ___display_7)); }
	inline bool get_display_7() const { return ___display_7; }
	inline bool* get_address_of_display_7() { return &___display_7; }
	inline void set_display_7(bool value)
	{
		___display_7 = value;
	}

	inline static int32_t get_offset_of_collide_8() { return static_cast<int32_t>(offsetof(FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E, ___collide_8)); }
	inline bool get_collide_8() const { return ___collide_8; }
	inline bool* get_address_of_collide_8() { return &___collide_8; }
	inline void set_collide_8(bool value)
	{
		___collide_8 = value;
	}

	inline static int32_t get_offset_of_hangerObject_9() { return static_cast<int32_t>(offsetof(FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E, ___hangerObject_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_hangerObject_9() const { return ___hangerObject_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_hangerObject_9() { return &___hangerObject_9; }
	inline void set_hangerObject_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___hangerObject_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hangerObject_9), (void*)value);
	}

	inline static int32_t get_offset_of_centerObject_10() { return static_cast<int32_t>(offsetof(FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E, ___centerObject_10)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_centerObject_10() const { return ___centerObject_10; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_centerObject_10() { return &___centerObject_10; }
	inline void set_centerObject_10(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___centerObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___centerObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_updatePeriod_11() { return static_cast<int32_t>(offsetof(FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E, ___updatePeriod_11)); }
	inline float get_updatePeriod_11() const { return ___updatePeriod_11; }
	inline float* get_address_of_updatePeriod_11() { return &___updatePeriod_11; }
	inline void set_updatePeriod_11(float value)
	{
		___updatePeriod_11 = value;
	}

	inline static int32_t get_offset_of_radius_12() { return static_cast<int32_t>(offsetof(FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E, ___radius_12)); }
	inline float get_radius_12() const { return ___radius_12; }
	inline float* get_address_of_radius_12() { return &___radius_12; }
	inline void set_radius_12(float value)
	{
		___radius_12 = value;
	}

	inline static int32_t get_offset_of_quality_13() { return static_cast<int32_t>(offsetof(FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E, ___quality_13)); }
	inline int32_t get_quality_13() const { return ___quality_13; }
	inline int32_t* get_address_of_quality_13() { return &___quality_13; }
	inline void set_quality_13(int32_t value)
	{
		___quality_13 = value;
	}

	inline static int32_t get_offset_of_waitingForBake_14() { return static_cast<int32_t>(offsetof(FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E, ___waitingForBake_14)); }
	inline bool get_waitingForBake_14() const { return ___waitingForBake_14; }
	inline bool* get_address_of_waitingForBake_14() { return &___waitingForBake_14; }
	inline void set_waitingForBake_14(bool value)
	{
		___waitingForBake_14 = value;
	}

	inline static int32_t get_offset_of_updateCountdown_15() { return static_cast<int32_t>(offsetof(FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E, ___updateCountdown_15)); }
	inline float get_updateCountdown_15() const { return ___updateCountdown_15; }
	inline float* get_address_of_updateCountdown_15() { return &___updateCountdown_15; }
	inline void set_updateCountdown_15(float value)
	{
		___updateCountdown_15 = value;
	}

	inline static int32_t get_offset_of_spatialMappingLayer_16() { return static_cast<int32_t>(offsetof(FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E, ___spatialMappingLayer_16)); }
	inline int32_t get_spatialMappingLayer_16() const { return ___spatialMappingLayer_16; }
	inline int32_t* get_address_of_spatialMappingLayer_16() { return &___spatialMappingLayer_16; }
	inline void set_spatialMappingLayer_16(int32_t value)
	{
		___spatialMappingLayer_16 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener
struct InputSystemGlobalHandlerListener_tD6CD2BA60230DF5BC4CBF7CD51B7BFA66074CFB2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::lateInitialize
	bool ___lateInitialize_4;

public:
	inline static int32_t get_offset_of_lateInitialize_4() { return static_cast<int32_t>(offsetof(InputSystemGlobalHandlerListener_tD6CD2BA60230DF5BC4CBF7CD51B7BFA66074CFB2, ___lateInitialize_4)); }
	inline bool get_lateInitialize_4() const { return ___lateInitialize_4; }
	inline bool* get_address_of_lateInitialize_4() { return &___lateInitialize_4; }
	inline void set_lateInitialize_4(bool value)
	{
		___lateInitialize_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.Interactable
struct Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer> Microsoft.MixedReality.Toolkit.UI.Interactable::focusingPointers
	List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E * ___focusingPointers_4;
	// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource> Microsoft.MixedReality.Toolkit.UI.Interactable::pressingInputSources
	HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 * ___pressingInputSources_5;
	// Microsoft.MixedReality.Toolkit.UI.States Microsoft.MixedReality.Toolkit.UI.Interactable::states
	States_t3A0D2F08B56A510830163C429CC0A03519958BBE * ___states_6;
	// Microsoft.MixedReality.Toolkit.UI.InteractableStates Microsoft.MixedReality.Toolkit.UI.Interactable::<StateManager>k__BackingField
	InteractableStates_t2A6C503CC23E0814B06888151B77B479260377F8 * ___U3CStateManagerU3Ek__BackingField_7;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.UI.Interactable::<InputAction>k__BackingField
	MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  ___U3CInputActionU3Ek__BackingField_8;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Interactable::InputActionId
	int32_t ___InputActionId_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.Interactable::isGlobal
	bool ___isGlobal_10;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Interactable::Dimensions
	int32_t ___Dimensions_11;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Interactable::dimensionIndex
	int32_t ___dimensionIndex_12;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Interactable::startDimensionIndex
	int32_t ___startDimensionIndex_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.Interactable::CanSelect
	bool ___CanSelect_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.Interactable::CanDeselect
	bool ___CanDeselect_15;
	// System.String Microsoft.MixedReality.Toolkit.UI.Interactable::VoiceCommand
	String_t* ___VoiceCommand_16;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.Interactable::voiceRequiresFocus
	bool ___voiceRequiresFocus_17;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.InteractableProfileItem> Microsoft.MixedReality.Toolkit.UI.Interactable::profiles
	List_1_t4E6370BF1C6C7069DEDEC9B47B49BBACB5D69649 * ___profiles_18;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.Interactable::OnClick
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnClick_19;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.InteractableEvent> Microsoft.MixedReality.Toolkit.UI.Interactable::Events
	List_1_t2C8C60D0C9D4D28E9D7661EEB82AE66755444A6F * ___Events_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.Interactable::resetOnDestroy
	bool ___resetOnDestroy_21;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.InteractableThemeBase> Microsoft.MixedReality.Toolkit.UI.Interactable::activeThemes
	List_1_t313C850ADBDD50943181E702F9EAEDBA741F885E * ___activeThemes_22;
	// System.Collections.Generic.List`1<System.Tuple`2<System.Int32,Microsoft.MixedReality.Toolkit.UI.InteractableThemeBase>> Microsoft.MixedReality.Toolkit.UI.Interactable::allThemeDimensionPairs
	List_1_tCFC343311AB2FDFBB584DCF49A164B4CB5474080 * ___allThemeDimensionPairs_23;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Interactable::<ClickCount>k__BackingField
	int32_t ___U3CClickCountU3Ek__BackingField_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.Interactable::enabledOnStart
	bool ___enabledOnStart_25;
	// Microsoft.MixedReality.Toolkit.UI.State Microsoft.MixedReality.Toolkit.UI.Interactable::lastState
	State_t8BC3593EACE0EB077EF575219685CFDB44245AB4 * ___lastState_26;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.Interactable::forceUpdate
	bool ___forceUpdate_27;
	// System.Single Microsoft.MixedReality.Toolkit.UI.Interactable::<RollOffTime>k__BackingField
	float ___U3CRollOffTimeU3Ek__BackingField_28;
	// System.Single Microsoft.MixedReality.Toolkit.UI.Interactable::rollOffTimer
	float ___rollOffTimer_29;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.IInteractableHandler> Microsoft.MixedReality.Toolkit.UI.Interactable::handlers
	List_1_t1F2536855F349330D7505A2620F64B728A2FE01B * ___handlers_30;
	// System.Single Microsoft.MixedReality.Toolkit.UI.Interactable::clickTime
	float ___clickTime_31;
	// UnityEngine.Coroutine Microsoft.MixedReality.Toolkit.UI.Interactable::clickValidTimer
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___clickValidTimer_32;
	// UnityEngine.Coroutine Microsoft.MixedReality.Toolkit.UI.Interactable::globalTimer
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___globalTimer_34;
	// System.Nullable`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.UI.Interactable::dragStartPosition
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___dragStartPosition_35;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.Interactable::isInitialized
	bool ___isInitialized_39;

public:
	inline static int32_t get_offset_of_focusingPointers_4() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___focusingPointers_4)); }
	inline List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E * get_focusingPointers_4() const { return ___focusingPointers_4; }
	inline List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E ** get_address_of_focusingPointers_4() { return &___focusingPointers_4; }
	inline void set_focusingPointers_4(List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E * value)
	{
		___focusingPointers_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___focusingPointers_4), (void*)value);
	}

	inline static int32_t get_offset_of_pressingInputSources_5() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___pressingInputSources_5)); }
	inline HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 * get_pressingInputSources_5() const { return ___pressingInputSources_5; }
	inline HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 ** get_address_of_pressingInputSources_5() { return &___pressingInputSources_5; }
	inline void set_pressingInputSources_5(HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 * value)
	{
		___pressingInputSources_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pressingInputSources_5), (void*)value);
	}

	inline static int32_t get_offset_of_states_6() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___states_6)); }
	inline States_t3A0D2F08B56A510830163C429CC0A03519958BBE * get_states_6() const { return ___states_6; }
	inline States_t3A0D2F08B56A510830163C429CC0A03519958BBE ** get_address_of_states_6() { return &___states_6; }
	inline void set_states_6(States_t3A0D2F08B56A510830163C429CC0A03519958BBE * value)
	{
		___states_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___states_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStateManagerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___U3CStateManagerU3Ek__BackingField_7)); }
	inline InteractableStates_t2A6C503CC23E0814B06888151B77B479260377F8 * get_U3CStateManagerU3Ek__BackingField_7() const { return ___U3CStateManagerU3Ek__BackingField_7; }
	inline InteractableStates_t2A6C503CC23E0814B06888151B77B479260377F8 ** get_address_of_U3CStateManagerU3Ek__BackingField_7() { return &___U3CStateManagerU3Ek__BackingField_7; }
	inline void set_U3CStateManagerU3Ek__BackingField_7(InteractableStates_t2A6C503CC23E0814B06888151B77B479260377F8 * value)
	{
		___U3CStateManagerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStateManagerU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInputActionU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___U3CInputActionU3Ek__BackingField_8)); }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  get_U3CInputActionU3Ek__BackingField_8() const { return ___U3CInputActionU3Ek__BackingField_8; }
	inline MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690 * get_address_of_U3CInputActionU3Ek__BackingField_8() { return &___U3CInputActionU3Ek__BackingField_8; }
	inline void set_U3CInputActionU3Ek__BackingField_8(MixedRealityInputAction_tF7F97EE20DEA505B55C4ACFDAE9DB4E9C27D2690  value)
	{
		___U3CInputActionU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CInputActionU3Ek__BackingField_8))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_InputActionId_9() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___InputActionId_9)); }
	inline int32_t get_InputActionId_9() const { return ___InputActionId_9; }
	inline int32_t* get_address_of_InputActionId_9() { return &___InputActionId_9; }
	inline void set_InputActionId_9(int32_t value)
	{
		___InputActionId_9 = value;
	}

	inline static int32_t get_offset_of_isGlobal_10() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___isGlobal_10)); }
	inline bool get_isGlobal_10() const { return ___isGlobal_10; }
	inline bool* get_address_of_isGlobal_10() { return &___isGlobal_10; }
	inline void set_isGlobal_10(bool value)
	{
		___isGlobal_10 = value;
	}

	inline static int32_t get_offset_of_Dimensions_11() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___Dimensions_11)); }
	inline int32_t get_Dimensions_11() const { return ___Dimensions_11; }
	inline int32_t* get_address_of_Dimensions_11() { return &___Dimensions_11; }
	inline void set_Dimensions_11(int32_t value)
	{
		___Dimensions_11 = value;
	}

	inline static int32_t get_offset_of_dimensionIndex_12() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___dimensionIndex_12)); }
	inline int32_t get_dimensionIndex_12() const { return ___dimensionIndex_12; }
	inline int32_t* get_address_of_dimensionIndex_12() { return &___dimensionIndex_12; }
	inline void set_dimensionIndex_12(int32_t value)
	{
		___dimensionIndex_12 = value;
	}

	inline static int32_t get_offset_of_startDimensionIndex_13() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___startDimensionIndex_13)); }
	inline int32_t get_startDimensionIndex_13() const { return ___startDimensionIndex_13; }
	inline int32_t* get_address_of_startDimensionIndex_13() { return &___startDimensionIndex_13; }
	inline void set_startDimensionIndex_13(int32_t value)
	{
		___startDimensionIndex_13 = value;
	}

	inline static int32_t get_offset_of_CanSelect_14() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___CanSelect_14)); }
	inline bool get_CanSelect_14() const { return ___CanSelect_14; }
	inline bool* get_address_of_CanSelect_14() { return &___CanSelect_14; }
	inline void set_CanSelect_14(bool value)
	{
		___CanSelect_14 = value;
	}

	inline static int32_t get_offset_of_CanDeselect_15() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___CanDeselect_15)); }
	inline bool get_CanDeselect_15() const { return ___CanDeselect_15; }
	inline bool* get_address_of_CanDeselect_15() { return &___CanDeselect_15; }
	inline void set_CanDeselect_15(bool value)
	{
		___CanDeselect_15 = value;
	}

	inline static int32_t get_offset_of_VoiceCommand_16() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___VoiceCommand_16)); }
	inline String_t* get_VoiceCommand_16() const { return ___VoiceCommand_16; }
	inline String_t** get_address_of_VoiceCommand_16() { return &___VoiceCommand_16; }
	inline void set_VoiceCommand_16(String_t* value)
	{
		___VoiceCommand_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VoiceCommand_16), (void*)value);
	}

	inline static int32_t get_offset_of_voiceRequiresFocus_17() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___voiceRequiresFocus_17)); }
	inline bool get_voiceRequiresFocus_17() const { return ___voiceRequiresFocus_17; }
	inline bool* get_address_of_voiceRequiresFocus_17() { return &___voiceRequiresFocus_17; }
	inline void set_voiceRequiresFocus_17(bool value)
	{
		___voiceRequiresFocus_17 = value;
	}

	inline static int32_t get_offset_of_profiles_18() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___profiles_18)); }
	inline List_1_t4E6370BF1C6C7069DEDEC9B47B49BBACB5D69649 * get_profiles_18() const { return ___profiles_18; }
	inline List_1_t4E6370BF1C6C7069DEDEC9B47B49BBACB5D69649 ** get_address_of_profiles_18() { return &___profiles_18; }
	inline void set_profiles_18(List_1_t4E6370BF1C6C7069DEDEC9B47B49BBACB5D69649 * value)
	{
		___profiles_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___profiles_18), (void*)value);
	}

	inline static int32_t get_offset_of_OnClick_19() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___OnClick_19)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnClick_19() const { return ___OnClick_19; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnClick_19() { return &___OnClick_19; }
	inline void set_OnClick_19(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnClick_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClick_19), (void*)value);
	}

	inline static int32_t get_offset_of_Events_20() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___Events_20)); }
	inline List_1_t2C8C60D0C9D4D28E9D7661EEB82AE66755444A6F * get_Events_20() const { return ___Events_20; }
	inline List_1_t2C8C60D0C9D4D28E9D7661EEB82AE66755444A6F ** get_address_of_Events_20() { return &___Events_20; }
	inline void set_Events_20(List_1_t2C8C60D0C9D4D28E9D7661EEB82AE66755444A6F * value)
	{
		___Events_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Events_20), (void*)value);
	}

	inline static int32_t get_offset_of_resetOnDestroy_21() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___resetOnDestroy_21)); }
	inline bool get_resetOnDestroy_21() const { return ___resetOnDestroy_21; }
	inline bool* get_address_of_resetOnDestroy_21() { return &___resetOnDestroy_21; }
	inline void set_resetOnDestroy_21(bool value)
	{
		___resetOnDestroy_21 = value;
	}

	inline static int32_t get_offset_of_activeThemes_22() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___activeThemes_22)); }
	inline List_1_t313C850ADBDD50943181E702F9EAEDBA741F885E * get_activeThemes_22() const { return ___activeThemes_22; }
	inline List_1_t313C850ADBDD50943181E702F9EAEDBA741F885E ** get_address_of_activeThemes_22() { return &___activeThemes_22; }
	inline void set_activeThemes_22(List_1_t313C850ADBDD50943181E702F9EAEDBA741F885E * value)
	{
		___activeThemes_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeThemes_22), (void*)value);
	}

	inline static int32_t get_offset_of_allThemeDimensionPairs_23() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___allThemeDimensionPairs_23)); }
	inline List_1_tCFC343311AB2FDFBB584DCF49A164B4CB5474080 * get_allThemeDimensionPairs_23() const { return ___allThemeDimensionPairs_23; }
	inline List_1_tCFC343311AB2FDFBB584DCF49A164B4CB5474080 ** get_address_of_allThemeDimensionPairs_23() { return &___allThemeDimensionPairs_23; }
	inline void set_allThemeDimensionPairs_23(List_1_tCFC343311AB2FDFBB584DCF49A164B4CB5474080 * value)
	{
		___allThemeDimensionPairs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allThemeDimensionPairs_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CClickCountU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___U3CClickCountU3Ek__BackingField_24)); }
	inline int32_t get_U3CClickCountU3Ek__BackingField_24() const { return ___U3CClickCountU3Ek__BackingField_24; }
	inline int32_t* get_address_of_U3CClickCountU3Ek__BackingField_24() { return &___U3CClickCountU3Ek__BackingField_24; }
	inline void set_U3CClickCountU3Ek__BackingField_24(int32_t value)
	{
		___U3CClickCountU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_enabledOnStart_25() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___enabledOnStart_25)); }
	inline bool get_enabledOnStart_25() const { return ___enabledOnStart_25; }
	inline bool* get_address_of_enabledOnStart_25() { return &___enabledOnStart_25; }
	inline void set_enabledOnStart_25(bool value)
	{
		___enabledOnStart_25 = value;
	}

	inline static int32_t get_offset_of_lastState_26() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___lastState_26)); }
	inline State_t8BC3593EACE0EB077EF575219685CFDB44245AB4 * get_lastState_26() const { return ___lastState_26; }
	inline State_t8BC3593EACE0EB077EF575219685CFDB44245AB4 ** get_address_of_lastState_26() { return &___lastState_26; }
	inline void set_lastState_26(State_t8BC3593EACE0EB077EF575219685CFDB44245AB4 * value)
	{
		___lastState_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastState_26), (void*)value);
	}

	inline static int32_t get_offset_of_forceUpdate_27() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___forceUpdate_27)); }
	inline bool get_forceUpdate_27() const { return ___forceUpdate_27; }
	inline bool* get_address_of_forceUpdate_27() { return &___forceUpdate_27; }
	inline void set_forceUpdate_27(bool value)
	{
		___forceUpdate_27 = value;
	}

	inline static int32_t get_offset_of_U3CRollOffTimeU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___U3CRollOffTimeU3Ek__BackingField_28)); }
	inline float get_U3CRollOffTimeU3Ek__BackingField_28() const { return ___U3CRollOffTimeU3Ek__BackingField_28; }
	inline float* get_address_of_U3CRollOffTimeU3Ek__BackingField_28() { return &___U3CRollOffTimeU3Ek__BackingField_28; }
	inline void set_U3CRollOffTimeU3Ek__BackingField_28(float value)
	{
		___U3CRollOffTimeU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_rollOffTimer_29() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___rollOffTimer_29)); }
	inline float get_rollOffTimer_29() const { return ___rollOffTimer_29; }
	inline float* get_address_of_rollOffTimer_29() { return &___rollOffTimer_29; }
	inline void set_rollOffTimer_29(float value)
	{
		___rollOffTimer_29 = value;
	}

	inline static int32_t get_offset_of_handlers_30() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___handlers_30)); }
	inline List_1_t1F2536855F349330D7505A2620F64B728A2FE01B * get_handlers_30() const { return ___handlers_30; }
	inline List_1_t1F2536855F349330D7505A2620F64B728A2FE01B ** get_address_of_handlers_30() { return &___handlers_30; }
	inline void set_handlers_30(List_1_t1F2536855F349330D7505A2620F64B728A2FE01B * value)
	{
		___handlers_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handlers_30), (void*)value);
	}

	inline static int32_t get_offset_of_clickTime_31() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___clickTime_31)); }
	inline float get_clickTime_31() const { return ___clickTime_31; }
	inline float* get_address_of_clickTime_31() { return &___clickTime_31; }
	inline void set_clickTime_31(float value)
	{
		___clickTime_31 = value;
	}

	inline static int32_t get_offset_of_clickValidTimer_32() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___clickValidTimer_32)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_clickValidTimer_32() const { return ___clickValidTimer_32; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_clickValidTimer_32() { return &___clickValidTimer_32; }
	inline void set_clickValidTimer_32(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___clickValidTimer_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clickValidTimer_32), (void*)value);
	}

	inline static int32_t get_offset_of_globalTimer_34() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___globalTimer_34)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_globalTimer_34() const { return ___globalTimer_34; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_globalTimer_34() { return &___globalTimer_34; }
	inline void set_globalTimer_34(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___globalTimer_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___globalTimer_34), (void*)value);
	}

	inline static int32_t get_offset_of_dragStartPosition_35() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___dragStartPosition_35)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_dragStartPosition_35() const { return ___dragStartPosition_35; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_dragStartPosition_35() { return &___dragStartPosition_35; }
	inline void set_dragStartPosition_35(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___dragStartPosition_35 = value;
	}

	inline static int32_t get_offset_of_isInitialized_39() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2, ___isInitialized_39)); }
	inline bool get_isInitialized_39() const { return ___isInitialized_39; }
	inline bool* get_address_of_isInitialized_39() { return &___isInitialized_39; }
	inline void set_isInitialized_39(bool value)
	{
		___isInitialized_39 = value;
	}
};

struct Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2_StaticFields
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.UI.Interactable::gestureStartThresholdVector2
	float ___gestureStartThresholdVector2_36;
	// System.Single Microsoft.MixedReality.Toolkit.UI.Interactable::gestureStartThresholdVector3
	float ___gestureStartThresholdVector3_37;
	// System.Single Microsoft.MixedReality.Toolkit.UI.Interactable::gestureStartThresholdMixedRealityPose
	float ___gestureStartThresholdMixedRealityPose_38;

public:
	inline static int32_t get_offset_of_gestureStartThresholdVector2_36() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2_StaticFields, ___gestureStartThresholdVector2_36)); }
	inline float get_gestureStartThresholdVector2_36() const { return ___gestureStartThresholdVector2_36; }
	inline float* get_address_of_gestureStartThresholdVector2_36() { return &___gestureStartThresholdVector2_36; }
	inline void set_gestureStartThresholdVector2_36(float value)
	{
		___gestureStartThresholdVector2_36 = value;
	}

	inline static int32_t get_offset_of_gestureStartThresholdVector3_37() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2_StaticFields, ___gestureStartThresholdVector3_37)); }
	inline float get_gestureStartThresholdVector3_37() const { return ___gestureStartThresholdVector3_37; }
	inline float* get_address_of_gestureStartThresholdVector3_37() { return &___gestureStartThresholdVector3_37; }
	inline void set_gestureStartThresholdVector3_37(float value)
	{
		___gestureStartThresholdVector3_37 = value;
	}

	inline static int32_t get_offset_of_gestureStartThresholdMixedRealityPose_38() { return static_cast<int32_t>(offsetof(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2_StaticFields, ___gestureStartThresholdMixedRealityPose_38)); }
	inline float get_gestureStartThresholdMixedRealityPose_38() const { return ___gestureStartThresholdMixedRealityPose_38; }
	inline float* get_address_of_gestureStartThresholdMixedRealityPose_38() { return &___gestureStartThresholdMixedRealityPose_38; }
	inline void set_gestureStartThresholdMixedRealityPose_38(float value)
	{
		___gestureStartThresholdMixedRealityPose_38 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.InteractableToggleCollection
struct InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.Toolkit.UI.Interactable[] Microsoft.MixedReality.Toolkit.UI.InteractableToggleCollection::toggleList
	InteractableU5BU5D_t8E07F182720E15C808FBFE54E7DFE1330D00408C* ___toggleList_4;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.InteractableToggleCollection::currentIndex
	int32_t ___currentIndex_5;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.InteractableToggleCollection::OnSelectionEvents
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnSelectionEvents_6;
	// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction> Microsoft.MixedReality.Toolkit.UI.InteractableToggleCollection::toggleActions
	List_1_t9773BFFC622DE41C9A419069B77965E00FA4C729 * ___toggleActions_7;

public:
	inline static int32_t get_offset_of_toggleList_4() { return static_cast<int32_t>(offsetof(InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3, ___toggleList_4)); }
	inline InteractableU5BU5D_t8E07F182720E15C808FBFE54E7DFE1330D00408C* get_toggleList_4() const { return ___toggleList_4; }
	inline InteractableU5BU5D_t8E07F182720E15C808FBFE54E7DFE1330D00408C** get_address_of_toggleList_4() { return &___toggleList_4; }
	inline void set_toggleList_4(InteractableU5BU5D_t8E07F182720E15C808FBFE54E7DFE1330D00408C* value)
	{
		___toggleList_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toggleList_4), (void*)value);
	}

	inline static int32_t get_offset_of_currentIndex_5() { return static_cast<int32_t>(offsetof(InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3, ___currentIndex_5)); }
	inline int32_t get_currentIndex_5() const { return ___currentIndex_5; }
	inline int32_t* get_address_of_currentIndex_5() { return &___currentIndex_5; }
	inline void set_currentIndex_5(int32_t value)
	{
		___currentIndex_5 = value;
	}

	inline static int32_t get_offset_of_OnSelectionEvents_6() { return static_cast<int32_t>(offsetof(InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3, ___OnSelectionEvents_6)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnSelectionEvents_6() const { return ___OnSelectionEvents_6; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnSelectionEvents_6() { return &___OnSelectionEvents_6; }
	inline void set_OnSelectionEvents_6(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnSelectionEvents_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSelectionEvents_6), (void*)value);
	}

	inline static int32_t get_offset_of_toggleActions_7() { return static_cast<int32_t>(offsetof(InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3, ___toggleActions_7)); }
	inline List_1_t9773BFFC622DE41C9A419069B77965E00FA4C729 * get_toggleActions_7() const { return ___toggleActions_7; }
	inline List_1_t9773BFFC622DE41C9A419069B77965E00FA4C729 ** get_address_of_toggleActions_7() { return &___toggleActions_7; }
	inline void set_toggleActions_7(List_1_t9773BFFC622DE41C9A419069B77965E00FA4C729 * value)
	{
		___toggleActions_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toggleActions_7), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B  : public InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B, ___U3CPointerU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_6() const { return ___U3CPointerU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_6() { return &___U3CPointerU3Ek__BackingField_6; }
	inline void set_U3CPointerU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B, ___U3CCountU3Ek__BackingField_7)); }
	inline int32_t get_U3CCountU3Ek__BackingField_7() const { return ___U3CCountU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_7() { return &___U3CCountU3Ek__BackingField_7; }
	inline void set_U3CCountU3Ek__BackingField_7(int32_t value)
	{
		___U3CCountU3Ek__BackingField_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.MixedRealityToolkit
struct MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::<IsProfileSwitching>k__BackingField
	bool ___U3CIsProfileSwitchingU3Ek__BackingField_8;
	// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkit::activeProfile
	MixedRealityToolkitConfigurationProfile_tE122C3244D03B3CF31BF4FF1296889A4AC1722EF * ___activeProfile_9;
	// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkit::newProfile
	MixedRealityToolkitConfigurationProfile_tE122C3244D03B3CF31BF4FF1296889A4AC1722EF * ___newProfile_10;

public:
	inline static int32_t get_offset_of_U3CIsProfileSwitchingU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE, ___U3CIsProfileSwitchingU3Ek__BackingField_8)); }
	inline bool get_U3CIsProfileSwitchingU3Ek__BackingField_8() const { return ___U3CIsProfileSwitchingU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsProfileSwitchingU3Ek__BackingField_8() { return &___U3CIsProfileSwitchingU3Ek__BackingField_8; }
	inline void set_U3CIsProfileSwitchingU3Ek__BackingField_8(bool value)
	{
		___U3CIsProfileSwitchingU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_activeProfile_9() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE, ___activeProfile_9)); }
	inline MixedRealityToolkitConfigurationProfile_tE122C3244D03B3CF31BF4FF1296889A4AC1722EF * get_activeProfile_9() const { return ___activeProfile_9; }
	inline MixedRealityToolkitConfigurationProfile_tE122C3244D03B3CF31BF4FF1296889A4AC1722EF ** get_address_of_activeProfile_9() { return &___activeProfile_9; }
	inline void set_activeProfile_9(MixedRealityToolkitConfigurationProfile_tE122C3244D03B3CF31BF4FF1296889A4AC1722EF * value)
	{
		___activeProfile_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeProfile_9), (void*)value);
	}

	inline static int32_t get_offset_of_newProfile_10() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE, ___newProfile_10)); }
	inline MixedRealityToolkitConfigurationProfile_tE122C3244D03B3CF31BF4FF1296889A4AC1722EF * get_newProfile_10() const { return ___newProfile_10; }
	inline MixedRealityToolkitConfigurationProfile_tE122C3244D03B3CF31BF4FF1296889A4AC1722EF ** get_address_of_newProfile_10() { return &___newProfile_10; }
	inline void set_newProfile_10(MixedRealityToolkitConfigurationProfile_tE122C3244D03B3CF31BF4FF1296889A4AC1722EF * value)
	{
		___newProfile_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newProfile_10), (void*)value);
	}
};

struct MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::isInitializing
	bool ___isInitializing_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::isApplicationQuitting
	bool ___isApplicationQuitting_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::internalShutdown
	bool ___internalShutdown_6;
	// System.Collections.Generic.Dictionary`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService> Microsoft.MixedReality.Toolkit.MixedRealityToolkit::activeSystems
	Dictionary_2_tB10C9808D23DAC9AE2AFAC3E40D119A2B74751AC * ___activeSystems_11;
	// System.Collections.Generic.List`1<System.Tuple`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService>> Microsoft.MixedReality.Toolkit.MixedRealityToolkit::registeredMixedRealityServices
	List_1_t5C19375E34F2E589D0BB652CD57BE3C9DC0CEDE5 * ___registeredMixedRealityServices_12;
	// Microsoft.MixedReality.Toolkit.MixedRealityToolkit Microsoft.MixedReality.Toolkit.MixedRealityToolkit::activeInstance
	MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE * ___activeInstance_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::newInstanceBeingInitialized
	bool ___newInstanceBeingInitialized_14;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.MixedRealityToolkit> Microsoft.MixedReality.Toolkit.MixedRealityToolkit::toolkitInstances
	List_1_t9A515F799E0BF2C22F0A5126C6218D126A8A5D67 * ___toolkitInstances_17;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.MixedRealityToolkit::UpdateAllServicesPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateAllServicesPerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.MixedRealityToolkit::LateUpdateAllServicesPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LateUpdateAllServicesPerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.MixedRealityToolkit::ExecuteOnAllServicesInOrderPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ExecuteOnAllServicesInOrderPerfMarker_20;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.MixedRealityToolkit::ExecuteOnAllServicesReverseOrderPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ExecuteOnAllServicesReverseOrderPerfMarker_21;

public:
	inline static int32_t get_offset_of_isInitializing_4() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_StaticFields, ___isInitializing_4)); }
	inline bool get_isInitializing_4() const { return ___isInitializing_4; }
	inline bool* get_address_of_isInitializing_4() { return &___isInitializing_4; }
	inline void set_isInitializing_4(bool value)
	{
		___isInitializing_4 = value;
	}

	inline static int32_t get_offset_of_isApplicationQuitting_5() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_StaticFields, ___isApplicationQuitting_5)); }
	inline bool get_isApplicationQuitting_5() const { return ___isApplicationQuitting_5; }
	inline bool* get_address_of_isApplicationQuitting_5() { return &___isApplicationQuitting_5; }
	inline void set_isApplicationQuitting_5(bool value)
	{
		___isApplicationQuitting_5 = value;
	}

	inline static int32_t get_offset_of_internalShutdown_6() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_StaticFields, ___internalShutdown_6)); }
	inline bool get_internalShutdown_6() const { return ___internalShutdown_6; }
	inline bool* get_address_of_internalShutdown_6() { return &___internalShutdown_6; }
	inline void set_internalShutdown_6(bool value)
	{
		___internalShutdown_6 = value;
	}

	inline static int32_t get_offset_of_activeSystems_11() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_StaticFields, ___activeSystems_11)); }
	inline Dictionary_2_tB10C9808D23DAC9AE2AFAC3E40D119A2B74751AC * get_activeSystems_11() const { return ___activeSystems_11; }
	inline Dictionary_2_tB10C9808D23DAC9AE2AFAC3E40D119A2B74751AC ** get_address_of_activeSystems_11() { return &___activeSystems_11; }
	inline void set_activeSystems_11(Dictionary_2_tB10C9808D23DAC9AE2AFAC3E40D119A2B74751AC * value)
	{
		___activeSystems_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeSystems_11), (void*)value);
	}

	inline static int32_t get_offset_of_registeredMixedRealityServices_12() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_StaticFields, ___registeredMixedRealityServices_12)); }
	inline List_1_t5C19375E34F2E589D0BB652CD57BE3C9DC0CEDE5 * get_registeredMixedRealityServices_12() const { return ___registeredMixedRealityServices_12; }
	inline List_1_t5C19375E34F2E589D0BB652CD57BE3C9DC0CEDE5 ** get_address_of_registeredMixedRealityServices_12() { return &___registeredMixedRealityServices_12; }
	inline void set_registeredMixedRealityServices_12(List_1_t5C19375E34F2E589D0BB652CD57BE3C9DC0CEDE5 * value)
	{
		___registeredMixedRealityServices_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___registeredMixedRealityServices_12), (void*)value);
	}

	inline static int32_t get_offset_of_activeInstance_13() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_StaticFields, ___activeInstance_13)); }
	inline MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE * get_activeInstance_13() const { return ___activeInstance_13; }
	inline MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE ** get_address_of_activeInstance_13() { return &___activeInstance_13; }
	inline void set_activeInstance_13(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE * value)
	{
		___activeInstance_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeInstance_13), (void*)value);
	}

	inline static int32_t get_offset_of_newInstanceBeingInitialized_14() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_StaticFields, ___newInstanceBeingInitialized_14)); }
	inline bool get_newInstanceBeingInitialized_14() const { return ___newInstanceBeingInitialized_14; }
	inline bool* get_address_of_newInstanceBeingInitialized_14() { return &___newInstanceBeingInitialized_14; }
	inline void set_newInstanceBeingInitialized_14(bool value)
	{
		___newInstanceBeingInitialized_14 = value;
	}

	inline static int32_t get_offset_of_toolkitInstances_17() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_StaticFields, ___toolkitInstances_17)); }
	inline List_1_t9A515F799E0BF2C22F0A5126C6218D126A8A5D67 * get_toolkitInstances_17() const { return ___toolkitInstances_17; }
	inline List_1_t9A515F799E0BF2C22F0A5126C6218D126A8A5D67 ** get_address_of_toolkitInstances_17() { return &___toolkitInstances_17; }
	inline void set_toolkitInstances_17(List_1_t9A515F799E0BF2C22F0A5126C6218D126A8A5D67 * value)
	{
		___toolkitInstances_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toolkitInstances_17), (void*)value);
	}

	inline static int32_t get_offset_of_UpdateAllServicesPerfMarker_18() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_StaticFields, ___UpdateAllServicesPerfMarker_18)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateAllServicesPerfMarker_18() const { return ___UpdateAllServicesPerfMarker_18; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateAllServicesPerfMarker_18() { return &___UpdateAllServicesPerfMarker_18; }
	inline void set_UpdateAllServicesPerfMarker_18(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateAllServicesPerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_LateUpdateAllServicesPerfMarker_19() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_StaticFields, ___LateUpdateAllServicesPerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LateUpdateAllServicesPerfMarker_19() const { return ___LateUpdateAllServicesPerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LateUpdateAllServicesPerfMarker_19() { return &___LateUpdateAllServicesPerfMarker_19; }
	inline void set_LateUpdateAllServicesPerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LateUpdateAllServicesPerfMarker_19 = value;
	}

	inline static int32_t get_offset_of_ExecuteOnAllServicesInOrderPerfMarker_20() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_StaticFields, ___ExecuteOnAllServicesInOrderPerfMarker_20)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ExecuteOnAllServicesInOrderPerfMarker_20() const { return ___ExecuteOnAllServicesInOrderPerfMarker_20; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ExecuteOnAllServicesInOrderPerfMarker_20() { return &___ExecuteOnAllServicesInOrderPerfMarker_20; }
	inline void set_ExecuteOnAllServicesInOrderPerfMarker_20(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ExecuteOnAllServicesInOrderPerfMarker_20 = value;
	}

	inline static int32_t get_offset_of_ExecuteOnAllServicesReverseOrderPerfMarker_21() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_StaticFields, ___ExecuteOnAllServicesReverseOrderPerfMarker_21)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ExecuteOnAllServicesReverseOrderPerfMarker_21() const { return ___ExecuteOnAllServicesReverseOrderPerfMarker_21; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ExecuteOnAllServicesReverseOrderPerfMarker_21() { return &___ExecuteOnAllServicesReverseOrderPerfMarker_21; }
	inline void set_ExecuteOnAllServicesReverseOrderPerfMarker_21(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ExecuteOnAllServicesReverseOrderPerfMarker_21 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable
struct NearInteractionGrabbable_tC638302907B386074B3B1B65568C18097BF1BCEF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable::ShowTetherWhenManipulating
	bool ___ShowTetherWhenManipulating_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable::IsBoundsHandles
	bool ___IsBoundsHandles_5;

public:
	inline static int32_t get_offset_of_ShowTetherWhenManipulating_4() { return static_cast<int32_t>(offsetof(NearInteractionGrabbable_tC638302907B386074B3B1B65568C18097BF1BCEF, ___ShowTetherWhenManipulating_4)); }
	inline bool get_ShowTetherWhenManipulating_4() const { return ___ShowTetherWhenManipulating_4; }
	inline bool* get_address_of_ShowTetherWhenManipulating_4() { return &___ShowTetherWhenManipulating_4; }
	inline void set_ShowTetherWhenManipulating_4(bool value)
	{
		___ShowTetherWhenManipulating_4 = value;
	}

	inline static int32_t get_offset_of_IsBoundsHandles_5() { return static_cast<int32_t>(offsetof(NearInteractionGrabbable_tC638302907B386074B3B1B65568C18097BF1BCEF, ___IsBoundsHandles_5)); }
	inline bool get_IsBoundsHandles_5() const { return ___IsBoundsHandles_5; }
	inline bool* get_address_of_IsBoundsHandles_5() { return &___IsBoundsHandles_5; }
	inline void set_IsBoundsHandles_5(bool value)
	{
		___IsBoundsHandles_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator
struct ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::hostTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___hostTransform_4;
	// Microsoft.MixedReality.Toolkit.Utilities.ManipulationHandFlags Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::manipulationType
	int32_t ___manipulationType_5;
	// Microsoft.MixedReality.Toolkit.Utilities.TransformFlags Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::twoHandedManipulationType
	int32_t ___twoHandedManipulationType_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::allowFarManipulation
	bool ___allowFarManipulation_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::useForcesForNearManipulation
	bool ___useForcesForNearManipulation_8;
	// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/RotateInOneHandType Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::oneHandRotationModeNear
	int32_t ___oneHandRotationModeNear_9;
	// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/RotateInOneHandType Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::oneHandRotationModeFar
	int32_t ___oneHandRotationModeFar_10;
	// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/ReleaseBehaviorType Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::releaseBehavior
	int32_t ___releaseBehavior_11;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::transformSmoothingLogicType
	SystemType_t8D2323983B85594F1037C020D3497109700B78DF * ___transformSmoothingLogicType_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::smoothingFar
	bool ___smoothingFar_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::smoothingNear
	bool ___smoothingNear_14;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::moveLerpTime
	float ___moveLerpTime_15;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::rotateLerpTime
	float ___rotateLerpTime_16;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::scaleLerpTime
	float ___scaleLerpTime_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::enableConstraints
	bool ___enableConstraints_18;
	// Microsoft.MixedReality.Toolkit.UI.ConstraintManager Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::constraintsManager
	ConstraintManager_tDEC458FB4546BE535EF6332CEAF94ACD633FF5A9 * ___constraintsManager_19;
	// Microsoft.MixedReality.Toolkit.Experimental.Physics.ElasticsManager Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::elasticsManager
	ElasticsManager_t425F8E2536C8872A95BFEB00BDC361AC376FE9D8 * ___elasticsManager_20;
	// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::onManipulationStarted
	ManipulationEvent_t72B794DBAD271C9FE714E404CD610357353EA7C6 * ___onManipulationStarted_21;
	// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::onManipulationEnded
	ManipulationEvent_t72B794DBAD271C9FE714E404CD610357353EA7C6 * ___onManipulationEnded_22;
	// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::onHoverEntered
	ManipulationEvent_t72B794DBAD271C9FE714E404CD610357353EA7C6 * ___onHoverEntered_23;
	// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::onHoverExited
	ManipulationEvent_t72B794DBAD271C9FE714E404CD610357353EA7C6 * ___onHoverExited_24;
	// Microsoft.MixedReality.Toolkit.Physics.ManipulationMoveLogic Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::moveLogic
	ManipulationMoveLogic_t7CF7B008A0245A65C6D2FA6FE5FAD15ABCA0B450 * ___moveLogic_25;
	// Microsoft.MixedReality.Toolkit.Physics.TwoHandScaleLogic Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::scaleLogic
	TwoHandScaleLogic_t39639034614D47F1DAA4093B289FD5724B0F6F6D * ___scaleLogic_26;
	// Microsoft.MixedReality.Toolkit.Physics.TwoHandRotateLogic Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::rotateLogic
	TwoHandRotateLogic_t72924E0C1332D49B8A5669D566A3E08ABAD9FAEB * ___rotateLogic_27;
	// Microsoft.MixedReality.Toolkit.Utilities.ITransformSmoothingLogic Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::smoothingLogic
	RuntimeObject* ___smoothingLogic_28;
	// System.Collections.Generic.Dictionary`2<System.UInt32,Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/PointerData> Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::pointerIdToPointerMap
	Dictionary_2_t9E5E3CB476248220F91250CBDC69EE2CB1170624 * ___pointerIdToPointerMap_29;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::objectToGripRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___objectToGripRotation_30;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::isNearManipulation
	bool ___isNearManipulation_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::isManipulationStarted
	bool ___isManipulationStarted_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::isSmoothing
	bool ___isSmoothing_33;
	// UnityEngine.Rigidbody Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::rigidBody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rigidBody_34;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::wasGravity
	bool ___wasGravity_35;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::wasKinematic
	bool ___wasKinematic_36;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::leftHandRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___leftHandRotation_37;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::rightHandRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rightHandRotation_38;

public:
	inline static int32_t get_offset_of_hostTransform_4() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___hostTransform_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_hostTransform_4() const { return ___hostTransform_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_hostTransform_4() { return &___hostTransform_4; }
	inline void set_hostTransform_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___hostTransform_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hostTransform_4), (void*)value);
	}

	inline static int32_t get_offset_of_manipulationType_5() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___manipulationType_5)); }
	inline int32_t get_manipulationType_5() const { return ___manipulationType_5; }
	inline int32_t* get_address_of_manipulationType_5() { return &___manipulationType_5; }
	inline void set_manipulationType_5(int32_t value)
	{
		___manipulationType_5 = value;
	}

	inline static int32_t get_offset_of_twoHandedManipulationType_6() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___twoHandedManipulationType_6)); }
	inline int32_t get_twoHandedManipulationType_6() const { return ___twoHandedManipulationType_6; }
	inline int32_t* get_address_of_twoHandedManipulationType_6() { return &___twoHandedManipulationType_6; }
	inline void set_twoHandedManipulationType_6(int32_t value)
	{
		___twoHandedManipulationType_6 = value;
	}

	inline static int32_t get_offset_of_allowFarManipulation_7() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___allowFarManipulation_7)); }
	inline bool get_allowFarManipulation_7() const { return ___allowFarManipulation_7; }
	inline bool* get_address_of_allowFarManipulation_7() { return &___allowFarManipulation_7; }
	inline void set_allowFarManipulation_7(bool value)
	{
		___allowFarManipulation_7 = value;
	}

	inline static int32_t get_offset_of_useForcesForNearManipulation_8() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___useForcesForNearManipulation_8)); }
	inline bool get_useForcesForNearManipulation_8() const { return ___useForcesForNearManipulation_8; }
	inline bool* get_address_of_useForcesForNearManipulation_8() { return &___useForcesForNearManipulation_8; }
	inline void set_useForcesForNearManipulation_8(bool value)
	{
		___useForcesForNearManipulation_8 = value;
	}

	inline static int32_t get_offset_of_oneHandRotationModeNear_9() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___oneHandRotationModeNear_9)); }
	inline int32_t get_oneHandRotationModeNear_9() const { return ___oneHandRotationModeNear_9; }
	inline int32_t* get_address_of_oneHandRotationModeNear_9() { return &___oneHandRotationModeNear_9; }
	inline void set_oneHandRotationModeNear_9(int32_t value)
	{
		___oneHandRotationModeNear_9 = value;
	}

	inline static int32_t get_offset_of_oneHandRotationModeFar_10() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___oneHandRotationModeFar_10)); }
	inline int32_t get_oneHandRotationModeFar_10() const { return ___oneHandRotationModeFar_10; }
	inline int32_t* get_address_of_oneHandRotationModeFar_10() { return &___oneHandRotationModeFar_10; }
	inline void set_oneHandRotationModeFar_10(int32_t value)
	{
		___oneHandRotationModeFar_10 = value;
	}

	inline static int32_t get_offset_of_releaseBehavior_11() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___releaseBehavior_11)); }
	inline int32_t get_releaseBehavior_11() const { return ___releaseBehavior_11; }
	inline int32_t* get_address_of_releaseBehavior_11() { return &___releaseBehavior_11; }
	inline void set_releaseBehavior_11(int32_t value)
	{
		___releaseBehavior_11 = value;
	}

	inline static int32_t get_offset_of_transformSmoothingLogicType_12() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___transformSmoothingLogicType_12)); }
	inline SystemType_t8D2323983B85594F1037C020D3497109700B78DF * get_transformSmoothingLogicType_12() const { return ___transformSmoothingLogicType_12; }
	inline SystemType_t8D2323983B85594F1037C020D3497109700B78DF ** get_address_of_transformSmoothingLogicType_12() { return &___transformSmoothingLogicType_12; }
	inline void set_transformSmoothingLogicType_12(SystemType_t8D2323983B85594F1037C020D3497109700B78DF * value)
	{
		___transformSmoothingLogicType_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transformSmoothingLogicType_12), (void*)value);
	}

	inline static int32_t get_offset_of_smoothingFar_13() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___smoothingFar_13)); }
	inline bool get_smoothingFar_13() const { return ___smoothingFar_13; }
	inline bool* get_address_of_smoothingFar_13() { return &___smoothingFar_13; }
	inline void set_smoothingFar_13(bool value)
	{
		___smoothingFar_13 = value;
	}

	inline static int32_t get_offset_of_smoothingNear_14() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___smoothingNear_14)); }
	inline bool get_smoothingNear_14() const { return ___smoothingNear_14; }
	inline bool* get_address_of_smoothingNear_14() { return &___smoothingNear_14; }
	inline void set_smoothingNear_14(bool value)
	{
		___smoothingNear_14 = value;
	}

	inline static int32_t get_offset_of_moveLerpTime_15() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___moveLerpTime_15)); }
	inline float get_moveLerpTime_15() const { return ___moveLerpTime_15; }
	inline float* get_address_of_moveLerpTime_15() { return &___moveLerpTime_15; }
	inline void set_moveLerpTime_15(float value)
	{
		___moveLerpTime_15 = value;
	}

	inline static int32_t get_offset_of_rotateLerpTime_16() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___rotateLerpTime_16)); }
	inline float get_rotateLerpTime_16() const { return ___rotateLerpTime_16; }
	inline float* get_address_of_rotateLerpTime_16() { return &___rotateLerpTime_16; }
	inline void set_rotateLerpTime_16(float value)
	{
		___rotateLerpTime_16 = value;
	}

	inline static int32_t get_offset_of_scaleLerpTime_17() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___scaleLerpTime_17)); }
	inline float get_scaleLerpTime_17() const { return ___scaleLerpTime_17; }
	inline float* get_address_of_scaleLerpTime_17() { return &___scaleLerpTime_17; }
	inline void set_scaleLerpTime_17(float value)
	{
		___scaleLerpTime_17 = value;
	}

	inline static int32_t get_offset_of_enableConstraints_18() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___enableConstraints_18)); }
	inline bool get_enableConstraints_18() const { return ___enableConstraints_18; }
	inline bool* get_address_of_enableConstraints_18() { return &___enableConstraints_18; }
	inline void set_enableConstraints_18(bool value)
	{
		___enableConstraints_18 = value;
	}

	inline static int32_t get_offset_of_constraintsManager_19() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___constraintsManager_19)); }
	inline ConstraintManager_tDEC458FB4546BE535EF6332CEAF94ACD633FF5A9 * get_constraintsManager_19() const { return ___constraintsManager_19; }
	inline ConstraintManager_tDEC458FB4546BE535EF6332CEAF94ACD633FF5A9 ** get_address_of_constraintsManager_19() { return &___constraintsManager_19; }
	inline void set_constraintsManager_19(ConstraintManager_tDEC458FB4546BE535EF6332CEAF94ACD633FF5A9 * value)
	{
		___constraintsManager_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___constraintsManager_19), (void*)value);
	}

	inline static int32_t get_offset_of_elasticsManager_20() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___elasticsManager_20)); }
	inline ElasticsManager_t425F8E2536C8872A95BFEB00BDC361AC376FE9D8 * get_elasticsManager_20() const { return ___elasticsManager_20; }
	inline ElasticsManager_t425F8E2536C8872A95BFEB00BDC361AC376FE9D8 ** get_address_of_elasticsManager_20() { return &___elasticsManager_20; }
	inline void set_elasticsManager_20(ElasticsManager_t425F8E2536C8872A95BFEB00BDC361AC376FE9D8 * value)
	{
		___elasticsManager_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elasticsManager_20), (void*)value);
	}

	inline static int32_t get_offset_of_onManipulationStarted_21() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___onManipulationStarted_21)); }
	inline ManipulationEvent_t72B794DBAD271C9FE714E404CD610357353EA7C6 * get_onManipulationStarted_21() const { return ___onManipulationStarted_21; }
	inline ManipulationEvent_t72B794DBAD271C9FE714E404CD610357353EA7C6 ** get_address_of_onManipulationStarted_21() { return &___onManipulationStarted_21; }
	inline void set_onManipulationStarted_21(ManipulationEvent_t72B794DBAD271C9FE714E404CD610357353EA7C6 * value)
	{
		___onManipulationStarted_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onManipulationStarted_21), (void*)value);
	}

	inline static int32_t get_offset_of_onManipulationEnded_22() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___onManipulationEnded_22)); }
	inline ManipulationEvent_t72B794DBAD271C9FE714E404CD610357353EA7C6 * get_onManipulationEnded_22() const { return ___onManipulationEnded_22; }
	inline ManipulationEvent_t72B794DBAD271C9FE714E404CD610357353EA7C6 ** get_address_of_onManipulationEnded_22() { return &___onManipulationEnded_22; }
	inline void set_onManipulationEnded_22(ManipulationEvent_t72B794DBAD271C9FE714E404CD610357353EA7C6 * value)
	{
		___onManipulationEnded_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onManipulationEnded_22), (void*)value);
	}

	inline static int32_t get_offset_of_onHoverEntered_23() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___onHoverEntered_23)); }
	inline ManipulationEvent_t72B794DBAD271C9FE714E404CD610357353EA7C6 * get_onHoverEntered_23() const { return ___onHoverEntered_23; }
	inline ManipulationEvent_t72B794DBAD271C9FE714E404CD610357353EA7C6 ** get_address_of_onHoverEntered_23() { return &___onHoverEntered_23; }
	inline void set_onHoverEntered_23(ManipulationEvent_t72B794DBAD271C9FE714E404CD610357353EA7C6 * value)
	{
		___onHoverEntered_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onHoverEntered_23), (void*)value);
	}

	inline static int32_t get_offset_of_onHoverExited_24() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___onHoverExited_24)); }
	inline ManipulationEvent_t72B794DBAD271C9FE714E404CD610357353EA7C6 * get_onHoverExited_24() const { return ___onHoverExited_24; }
	inline ManipulationEvent_t72B794DBAD271C9FE714E404CD610357353EA7C6 ** get_address_of_onHoverExited_24() { return &___onHoverExited_24; }
	inline void set_onHoverExited_24(ManipulationEvent_t72B794DBAD271C9FE714E404CD610357353EA7C6 * value)
	{
		___onHoverExited_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onHoverExited_24), (void*)value);
	}

	inline static int32_t get_offset_of_moveLogic_25() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___moveLogic_25)); }
	inline ManipulationMoveLogic_t7CF7B008A0245A65C6D2FA6FE5FAD15ABCA0B450 * get_moveLogic_25() const { return ___moveLogic_25; }
	inline ManipulationMoveLogic_t7CF7B008A0245A65C6D2FA6FE5FAD15ABCA0B450 ** get_address_of_moveLogic_25() { return &___moveLogic_25; }
	inline void set_moveLogic_25(ManipulationMoveLogic_t7CF7B008A0245A65C6D2FA6FE5FAD15ABCA0B450 * value)
	{
		___moveLogic_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveLogic_25), (void*)value);
	}

	inline static int32_t get_offset_of_scaleLogic_26() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___scaleLogic_26)); }
	inline TwoHandScaleLogic_t39639034614D47F1DAA4093B289FD5724B0F6F6D * get_scaleLogic_26() const { return ___scaleLogic_26; }
	inline TwoHandScaleLogic_t39639034614D47F1DAA4093B289FD5724B0F6F6D ** get_address_of_scaleLogic_26() { return &___scaleLogic_26; }
	inline void set_scaleLogic_26(TwoHandScaleLogic_t39639034614D47F1DAA4093B289FD5724B0F6F6D * value)
	{
		___scaleLogic_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scaleLogic_26), (void*)value);
	}

	inline static int32_t get_offset_of_rotateLogic_27() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___rotateLogic_27)); }
	inline TwoHandRotateLogic_t72924E0C1332D49B8A5669D566A3E08ABAD9FAEB * get_rotateLogic_27() const { return ___rotateLogic_27; }
	inline TwoHandRotateLogic_t72924E0C1332D49B8A5669D566A3E08ABAD9FAEB ** get_address_of_rotateLogic_27() { return &___rotateLogic_27; }
	inline void set_rotateLogic_27(TwoHandRotateLogic_t72924E0C1332D49B8A5669D566A3E08ABAD9FAEB * value)
	{
		___rotateLogic_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotateLogic_27), (void*)value);
	}

	inline static int32_t get_offset_of_smoothingLogic_28() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___smoothingLogic_28)); }
	inline RuntimeObject* get_smoothingLogic_28() const { return ___smoothingLogic_28; }
	inline RuntimeObject** get_address_of_smoothingLogic_28() { return &___smoothingLogic_28; }
	inline void set_smoothingLogic_28(RuntimeObject* value)
	{
		___smoothingLogic_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___smoothingLogic_28), (void*)value);
	}

	inline static int32_t get_offset_of_pointerIdToPointerMap_29() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___pointerIdToPointerMap_29)); }
	inline Dictionary_2_t9E5E3CB476248220F91250CBDC69EE2CB1170624 * get_pointerIdToPointerMap_29() const { return ___pointerIdToPointerMap_29; }
	inline Dictionary_2_t9E5E3CB476248220F91250CBDC69EE2CB1170624 ** get_address_of_pointerIdToPointerMap_29() { return &___pointerIdToPointerMap_29; }
	inline void set_pointerIdToPointerMap_29(Dictionary_2_t9E5E3CB476248220F91250CBDC69EE2CB1170624 * value)
	{
		___pointerIdToPointerMap_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerIdToPointerMap_29), (void*)value);
	}

	inline static int32_t get_offset_of_objectToGripRotation_30() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___objectToGripRotation_30)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_objectToGripRotation_30() const { return ___objectToGripRotation_30; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_objectToGripRotation_30() { return &___objectToGripRotation_30; }
	inline void set_objectToGripRotation_30(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___objectToGripRotation_30 = value;
	}

	inline static int32_t get_offset_of_isNearManipulation_31() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___isNearManipulation_31)); }
	inline bool get_isNearManipulation_31() const { return ___isNearManipulation_31; }
	inline bool* get_address_of_isNearManipulation_31() { return &___isNearManipulation_31; }
	inline void set_isNearManipulation_31(bool value)
	{
		___isNearManipulation_31 = value;
	}

	inline static int32_t get_offset_of_isManipulationStarted_32() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___isManipulationStarted_32)); }
	inline bool get_isManipulationStarted_32() const { return ___isManipulationStarted_32; }
	inline bool* get_address_of_isManipulationStarted_32() { return &___isManipulationStarted_32; }
	inline void set_isManipulationStarted_32(bool value)
	{
		___isManipulationStarted_32 = value;
	}

	inline static int32_t get_offset_of_isSmoothing_33() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___isSmoothing_33)); }
	inline bool get_isSmoothing_33() const { return ___isSmoothing_33; }
	inline bool* get_address_of_isSmoothing_33() { return &___isSmoothing_33; }
	inline void set_isSmoothing_33(bool value)
	{
		___isSmoothing_33 = value;
	}

	inline static int32_t get_offset_of_rigidBody_34() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___rigidBody_34)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rigidBody_34() const { return ___rigidBody_34; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rigidBody_34() { return &___rigidBody_34; }
	inline void set_rigidBody_34(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rigidBody_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigidBody_34), (void*)value);
	}

	inline static int32_t get_offset_of_wasGravity_35() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___wasGravity_35)); }
	inline bool get_wasGravity_35() const { return ___wasGravity_35; }
	inline bool* get_address_of_wasGravity_35() { return &___wasGravity_35; }
	inline void set_wasGravity_35(bool value)
	{
		___wasGravity_35 = value;
	}

	inline static int32_t get_offset_of_wasKinematic_36() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___wasKinematic_36)); }
	inline bool get_wasKinematic_36() const { return ___wasKinematic_36; }
	inline bool* get_address_of_wasKinematic_36() { return &___wasKinematic_36; }
	inline void set_wasKinematic_36(bool value)
	{
		___wasKinematic_36 = value;
	}

	inline static int32_t get_offset_of_leftHandRotation_37() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___leftHandRotation_37)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_leftHandRotation_37() const { return ___leftHandRotation_37; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_leftHandRotation_37() { return &___leftHandRotation_37; }
	inline void set_leftHandRotation_37(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___leftHandRotation_37 = value;
	}

	inline static int32_t get_offset_of_rightHandRotation_38() { return static_cast<int32_t>(offsetof(ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A, ___rightHandRotation_38)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rightHandRotation_38() const { return ___rightHandRotation_38; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rightHandRotation_38() { return &___rightHandRotation_38; }
	inline void set_rightHandRotation_38(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rightHandRotation_38 = value;
	}
};


// Microsoft.MixedReality.WorldLocking.Core.Orienter
struct Orienter_t1D850D1887AD89DD2EFDB94F24D1E9C57FA074E8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.Core.IOrientable> Microsoft.MixedReality.WorldLocking.Core.Orienter::orientables
	List_1_t7E7808B5AD7452DC8D5282C96CF699B2A94E5E26 * ___orientables_4;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.Core.Orienter/WeightedRotation> Microsoft.MixedReality.WorldLocking.Core.Orienter::actives
	List_1_t2F3BEA23C0D290396EEDC55DC6FDEDF33779F76C * ___actives_5;
	// Microsoft.MixedReality.WorldLocking.Core.IAlignmentManager Microsoft.MixedReality.WorldLocking.Core.Orienter::alignmentManager
	RuntimeObject* ___alignmentManager_6;

public:
	inline static int32_t get_offset_of_orientables_4() { return static_cast<int32_t>(offsetof(Orienter_t1D850D1887AD89DD2EFDB94F24D1E9C57FA074E8, ___orientables_4)); }
	inline List_1_t7E7808B5AD7452DC8D5282C96CF699B2A94E5E26 * get_orientables_4() const { return ___orientables_4; }
	inline List_1_t7E7808B5AD7452DC8D5282C96CF699B2A94E5E26 ** get_address_of_orientables_4() { return &___orientables_4; }
	inline void set_orientables_4(List_1_t7E7808B5AD7452DC8D5282C96CF699B2A94E5E26 * value)
	{
		___orientables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___orientables_4), (void*)value);
	}

	inline static int32_t get_offset_of_actives_5() { return static_cast<int32_t>(offsetof(Orienter_t1D850D1887AD89DD2EFDB94F24D1E9C57FA074E8, ___actives_5)); }
	inline List_1_t2F3BEA23C0D290396EEDC55DC6FDEDF33779F76C * get_actives_5() const { return ___actives_5; }
	inline List_1_t2F3BEA23C0D290396EEDC55DC6FDEDF33779F76C ** get_address_of_actives_5() { return &___actives_5; }
	inline void set_actives_5(List_1_t2F3BEA23C0D290396EEDC55DC6FDEDF33779F76C * value)
	{
		___actives_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actives_5), (void*)value);
	}

	inline static int32_t get_offset_of_alignmentManager_6() { return static_cast<int32_t>(offsetof(Orienter_t1D850D1887AD89DD2EFDB94F24D1E9C57FA074E8, ___alignmentManager_6)); }
	inline RuntimeObject* get_alignmentManager_6() const { return ___alignmentManager_6; }
	inline RuntimeObject** get_address_of_alignmentManager_6() { return &___alignmentManager_6; }
	inline void set_alignmentManager_6(RuntimeObject* value)
	{
		___alignmentManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___alignmentManager_6), (void*)value);
	}
};


// RemovableGroup
struct RemovableGroup_tB747F0765FAC888AA3C06D726D6186EAFE9778CF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Microsoft.MixedReality.WorldLocking.Core.SpacePin
struct SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.WorldLocking.Core.SpacePin/ModelPositionSourceEnum Microsoft.MixedReality.WorldLocking.Core.SpacePin::modelPositionSource
	int32_t ___modelPositionSource_4;
	// Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager Microsoft.MixedReality.WorldLocking.Core.SpacePin::manager
	WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * ___manager_5;
	// Microsoft.MixedReality.WorldLocking.Core.IAlignmentManager Microsoft.MixedReality.WorldLocking.Core.SpacePin::alignmentManager
	RuntimeObject* ___alignmentManager_6;
	// System.UInt64 Microsoft.MixedReality.WorldLocking.Core.SpacePin::ulAnchorId
	uint64_t ___ulAnchorId_7;
	// UnityEngine.Pose Microsoft.MixedReality.WorldLocking.Core.SpacePin::restorePoseLocal
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___restorePoseLocal_8;
	// UnityEngine.Pose Microsoft.MixedReality.WorldLocking.Core.SpacePin::modelingPoseParent
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___modelingPoseParent_9;
	// UnityEngine.Pose Microsoft.MixedReality.WorldLocking.Core.SpacePin::lockedPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___lockedPose_10;
	// Microsoft.MixedReality.WorldLocking.Core.IAttachmentPoint Microsoft.MixedReality.WorldLocking.Core.SpacePin::attachmentPoint
	RuntimeObject* ___attachmentPoint_11;

public:
	inline static int32_t get_offset_of_modelPositionSource_4() { return static_cast<int32_t>(offsetof(SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C, ___modelPositionSource_4)); }
	inline int32_t get_modelPositionSource_4() const { return ___modelPositionSource_4; }
	inline int32_t* get_address_of_modelPositionSource_4() { return &___modelPositionSource_4; }
	inline void set_modelPositionSource_4(int32_t value)
	{
		___modelPositionSource_4 = value;
	}

	inline static int32_t get_offset_of_manager_5() { return static_cast<int32_t>(offsetof(SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C, ___manager_5)); }
	inline WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * get_manager_5() const { return ___manager_5; }
	inline WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 ** get_address_of_manager_5() { return &___manager_5; }
	inline void set_manager_5(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * value)
	{
		___manager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___manager_5), (void*)value);
	}

	inline static int32_t get_offset_of_alignmentManager_6() { return static_cast<int32_t>(offsetof(SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C, ___alignmentManager_6)); }
	inline RuntimeObject* get_alignmentManager_6() const { return ___alignmentManager_6; }
	inline RuntimeObject** get_address_of_alignmentManager_6() { return &___alignmentManager_6; }
	inline void set_alignmentManager_6(RuntimeObject* value)
	{
		___alignmentManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___alignmentManager_6), (void*)value);
	}

	inline static int32_t get_offset_of_ulAnchorId_7() { return static_cast<int32_t>(offsetof(SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C, ___ulAnchorId_7)); }
	inline uint64_t get_ulAnchorId_7() const { return ___ulAnchorId_7; }
	inline uint64_t* get_address_of_ulAnchorId_7() { return &___ulAnchorId_7; }
	inline void set_ulAnchorId_7(uint64_t value)
	{
		___ulAnchorId_7 = value;
	}

	inline static int32_t get_offset_of_restorePoseLocal_8() { return static_cast<int32_t>(offsetof(SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C, ___restorePoseLocal_8)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_restorePoseLocal_8() const { return ___restorePoseLocal_8; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_restorePoseLocal_8() { return &___restorePoseLocal_8; }
	inline void set_restorePoseLocal_8(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___restorePoseLocal_8 = value;
	}

	inline static int32_t get_offset_of_modelingPoseParent_9() { return static_cast<int32_t>(offsetof(SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C, ___modelingPoseParent_9)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_modelingPoseParent_9() const { return ___modelingPoseParent_9; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_modelingPoseParent_9() { return &___modelingPoseParent_9; }
	inline void set_modelingPoseParent_9(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___modelingPoseParent_9 = value;
	}

	inline static int32_t get_offset_of_lockedPose_10() { return static_cast<int32_t>(offsetof(SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C, ___lockedPose_10)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_lockedPose_10() const { return ___lockedPose_10; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_lockedPose_10() { return &___lockedPose_10; }
	inline void set_lockedPose_10(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___lockedPose_10 = value;
	}

	inline static int32_t get_offset_of_attachmentPoint_11() { return static_cast<int32_t>(offsetof(SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C, ___attachmentPoint_11)); }
	inline RuntimeObject* get_attachmentPoint_11() const { return ___attachmentPoint_11; }
	inline RuntimeObject** get_address_of_attachmentPoint_11() { return &___attachmentPoint_11; }
	inline void set_attachmentPoint_11(RuntimeObject* value)
	{
		___attachmentPoint_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attachmentPoint_11), (void*)value);
	}
};


// Microsoft.MixedReality.WorldLocking.Tools.StatusToText
struct StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.TextMesh Microsoft.MixedReality.WorldLocking.Tools.StatusToText::textMeshVersionTimestamp
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___textMeshVersionTimestamp_4;
	// UnityEngine.TextMesh Microsoft.MixedReality.WorldLocking.Tools.StatusToText::textMeshErrorStatus
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___textMeshErrorStatus_5;
	// UnityEngine.TextMesh Microsoft.MixedReality.WorldLocking.Tools.StatusToText::textMeshStateIndicator
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___textMeshStateIndicator_6;
	// UnityEngine.TextMesh Microsoft.MixedReality.WorldLocking.Tools.StatusToText::textMeshInfo
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___textMeshInfo_7;
	// UnityEngine.TextMesh Microsoft.MixedReality.WorldLocking.Tools.StatusToText::textMeshMetrics
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___textMeshMetrics_8;
	// Microsoft.MixedReality.WorldLocking.Tools.StatusToText/FramerateSmoother Microsoft.MixedReality.WorldLocking.Tools.StatusToText::framerateSmoother
	FramerateSmoother_t22924DE11C116F7E83019A3D6B7FE10D71CD8239 * ___framerateSmoother_9;

public:
	inline static int32_t get_offset_of_textMeshVersionTimestamp_4() { return static_cast<int32_t>(offsetof(StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B, ___textMeshVersionTimestamp_4)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_textMeshVersionTimestamp_4() const { return ___textMeshVersionTimestamp_4; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_textMeshVersionTimestamp_4() { return &___textMeshVersionTimestamp_4; }
	inline void set_textMeshVersionTimestamp_4(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___textMeshVersionTimestamp_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textMeshVersionTimestamp_4), (void*)value);
	}

	inline static int32_t get_offset_of_textMeshErrorStatus_5() { return static_cast<int32_t>(offsetof(StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B, ___textMeshErrorStatus_5)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_textMeshErrorStatus_5() const { return ___textMeshErrorStatus_5; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_textMeshErrorStatus_5() { return &___textMeshErrorStatus_5; }
	inline void set_textMeshErrorStatus_5(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___textMeshErrorStatus_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textMeshErrorStatus_5), (void*)value);
	}

	inline static int32_t get_offset_of_textMeshStateIndicator_6() { return static_cast<int32_t>(offsetof(StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B, ___textMeshStateIndicator_6)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_textMeshStateIndicator_6() const { return ___textMeshStateIndicator_6; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_textMeshStateIndicator_6() { return &___textMeshStateIndicator_6; }
	inline void set_textMeshStateIndicator_6(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___textMeshStateIndicator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textMeshStateIndicator_6), (void*)value);
	}

	inline static int32_t get_offset_of_textMeshInfo_7() { return static_cast<int32_t>(offsetof(StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B, ___textMeshInfo_7)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_textMeshInfo_7() const { return ___textMeshInfo_7; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_textMeshInfo_7() { return &___textMeshInfo_7; }
	inline void set_textMeshInfo_7(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___textMeshInfo_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textMeshInfo_7), (void*)value);
	}

	inline static int32_t get_offset_of_textMeshMetrics_8() { return static_cast<int32_t>(offsetof(StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B, ___textMeshMetrics_8)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_textMeshMetrics_8() const { return ___textMeshMetrics_8; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_textMeshMetrics_8() { return &___textMeshMetrics_8; }
	inline void set_textMeshMetrics_8(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___textMeshMetrics_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textMeshMetrics_8), (void*)value);
	}

	inline static int32_t get_offset_of_framerateSmoother_9() { return static_cast<int32_t>(offsetof(StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B, ___framerateSmoother_9)); }
	inline FramerateSmoother_t22924DE11C116F7E83019A3D6B7FE10D71CD8239 * get_framerateSmoother_9() const { return ___framerateSmoother_9; }
	inline FramerateSmoother_t22924DE11C116F7E83019A3D6B7FE10D71CD8239 ** get_address_of_framerateSmoother_9() { return &___framerateSmoother_9; }
	inline void set_framerateSmoother_9(FramerateSmoother_t22924DE11C116F7E83019A3D6B7FE10D71CD8239 * value)
	{
		___framerateSmoother_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___framerateSmoother_9), (void*)value);
	}
};


// Microsoft.MixedReality.WorldLocking.Tools.ToggleWorldAnchor
struct ToggleWorldAnchor_t1B1167AAE4D649411357DCAC4BBEA35B598EB09B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.WorldLocking.Core.IAttachmentPoint Microsoft.MixedReality.WorldLocking.Tools.ToggleWorldAnchor::<AttachmentPoint>k__BackingField
	RuntimeObject* ___U3CAttachmentPointU3Ek__BackingField_4;
	// System.Boolean Microsoft.MixedReality.WorldLocking.Tools.ToggleWorldAnchor::frozenPoseIsSpongy
	bool ___frozenPoseIsSpongy_5;
	// UnityEngine.Pose Microsoft.MixedReality.WorldLocking.Tools.ToggleWorldAnchor::frozenPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___frozenPose_6;
	// System.Boolean Microsoft.MixedReality.WorldLocking.Tools.ToggleWorldAnchor::alwaysLock
	bool ___alwaysLock_7;

public:
	inline static int32_t get_offset_of_U3CAttachmentPointU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ToggleWorldAnchor_t1B1167AAE4D649411357DCAC4BBEA35B598EB09B, ___U3CAttachmentPointU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CAttachmentPointU3Ek__BackingField_4() const { return ___U3CAttachmentPointU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CAttachmentPointU3Ek__BackingField_4() { return &___U3CAttachmentPointU3Ek__BackingField_4; }
	inline void set_U3CAttachmentPointU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CAttachmentPointU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAttachmentPointU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_frozenPoseIsSpongy_5() { return static_cast<int32_t>(offsetof(ToggleWorldAnchor_t1B1167AAE4D649411357DCAC4BBEA35B598EB09B, ___frozenPoseIsSpongy_5)); }
	inline bool get_frozenPoseIsSpongy_5() const { return ___frozenPoseIsSpongy_5; }
	inline bool* get_address_of_frozenPoseIsSpongy_5() { return &___frozenPoseIsSpongy_5; }
	inline void set_frozenPoseIsSpongy_5(bool value)
	{
		___frozenPoseIsSpongy_5 = value;
	}

	inline static int32_t get_offset_of_frozenPose_6() { return static_cast<int32_t>(offsetof(ToggleWorldAnchor_t1B1167AAE4D649411357DCAC4BBEA35B598EB09B, ___frozenPose_6)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_frozenPose_6() const { return ___frozenPose_6; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_frozenPose_6() { return &___frozenPose_6; }
	inline void set_frozenPose_6(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___frozenPose_6 = value;
	}

	inline static int32_t get_offset_of_alwaysLock_7() { return static_cast<int32_t>(offsetof(ToggleWorldAnchor_t1B1167AAE4D649411357DCAC4BBEA35B598EB09B, ___alwaysLock_7)); }
	inline bool get_alwaysLock_7() const { return ___alwaysLock_7; }
	inline bool* get_address_of_alwaysLock_7() { return &___alwaysLock_7; }
	inline void set_alwaysLock_7(bool value)
	{
		___alwaysLock_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.TransformConstraint
struct TransformConstraint_tC42A2968CDB77EF526D991D93F93C20FD661454B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.ManipulationHandFlags Microsoft.MixedReality.Toolkit.UI.TransformConstraint::handType
	int32_t ___handType_4;
	// Microsoft.MixedReality.Toolkit.Utilities.ManipulationProximityFlags Microsoft.MixedReality.Toolkit.UI.TransformConstraint::proximityType
	int32_t ___proximityType_5;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform Microsoft.MixedReality.Toolkit.UI.TransformConstraint::worldPoseOnManipulationStart
	MixedRealityTransform_tC17D467055C7F5291C92E34F136742BBA4C50732  ___worldPoseOnManipulationStart_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.UI.TransformConstraint::<TargetTransform>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CTargetTransformU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_handType_4() { return static_cast<int32_t>(offsetof(TransformConstraint_tC42A2968CDB77EF526D991D93F93C20FD661454B, ___handType_4)); }
	inline int32_t get_handType_4() const { return ___handType_4; }
	inline int32_t* get_address_of_handType_4() { return &___handType_4; }
	inline void set_handType_4(int32_t value)
	{
		___handType_4 = value;
	}

	inline static int32_t get_offset_of_proximityType_5() { return static_cast<int32_t>(offsetof(TransformConstraint_tC42A2968CDB77EF526D991D93F93C20FD661454B, ___proximityType_5)); }
	inline int32_t get_proximityType_5() const { return ___proximityType_5; }
	inline int32_t* get_address_of_proximityType_5() { return &___proximityType_5; }
	inline void set_proximityType_5(int32_t value)
	{
		___proximityType_5 = value;
	}

	inline static int32_t get_offset_of_worldPoseOnManipulationStart_6() { return static_cast<int32_t>(offsetof(TransformConstraint_tC42A2968CDB77EF526D991D93F93C20FD661454B, ___worldPoseOnManipulationStart_6)); }
	inline MixedRealityTransform_tC17D467055C7F5291C92E34F136742BBA4C50732  get_worldPoseOnManipulationStart_6() const { return ___worldPoseOnManipulationStart_6; }
	inline MixedRealityTransform_tC17D467055C7F5291C92E34F136742BBA4C50732 * get_address_of_worldPoseOnManipulationStart_6() { return &___worldPoseOnManipulationStart_6; }
	inline void set_worldPoseOnManipulationStart_6(MixedRealityTransform_tC17D467055C7F5291C92E34F136742BBA4C50732  value)
	{
		___worldPoseOnManipulationStart_6 = value;
	}

	inline static int32_t get_offset_of_U3CTargetTransformU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(TransformConstraint_tC42A2968CDB77EF526D991D93F93C20FD661454B, ___U3CTargetTransformU3Ek__BackingField_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CTargetTransformU3Ek__BackingField_7() const { return ___U3CTargetTransformU3Ek__BackingField_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CTargetTransformU3Ek__BackingField_7() { return &___U3CTargetTransformU3Ek__BackingField_7; }
	inline void set_U3CTargetTransformU3Ek__BackingField_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CTargetTransformU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTargetTransformU3Ek__BackingField_7), (void*)value);
	}
};


// Microsoft.MixedReality.WorldLocking.Tools.AdjusterFixed
struct AdjusterFixed_tA49EDC9CBDAFEBD3F101CBEB45425FA4F2865E7E  : public AdjusterBase_tAB4E9B66BE413CF82FAFA2E7001E4F973449862D
{
public:
	// Microsoft.MixedReality.WorldLocking.Core.IAttachmentPoint Microsoft.MixedReality.WorldLocking.Tools.AdjusterFixed::<AttachmentPoint>k__BackingField
	RuntimeObject* ___U3CAttachmentPointU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CAttachmentPointU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AdjusterFixed_tA49EDC9CBDAFEBD3F101CBEB45425FA4F2865E7E, ___U3CAttachmentPointU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CAttachmentPointU3Ek__BackingField_4() const { return ___U3CAttachmentPointU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CAttachmentPointU3Ek__BackingField_4() { return &___U3CAttachmentPointU3Ek__BackingField_4; }
	inline void set_U3CAttachmentPointU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CAttachmentPointU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAttachmentPointU3Ek__BackingField_4), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.FixedRotationToWorldConstraint
struct FixedRotationToWorldConstraint_t6E679FB9DA77F87B06F34E9824A85A73354CBEAB  : public TransformConstraint_tC42A2968CDB77EF526D991D93F93C20FD661454B
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint
struct MinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A  : public TransformConstraint_tC42A2968CDB77EF526D991D93F93C20FD661454B
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint::scaleMinimum
	float ___scaleMinimum_8;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint::minimumScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___minimumScale_9;
	// System.Single Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint::scaleMaximum
	float ___scaleMaximum_10;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint::maximumScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___maximumScale_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint::relativeToInitialState
	bool ___relativeToInitialState_12;

public:
	inline static int32_t get_offset_of_scaleMinimum_8() { return static_cast<int32_t>(offsetof(MinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A, ___scaleMinimum_8)); }
	inline float get_scaleMinimum_8() const { return ___scaleMinimum_8; }
	inline float* get_address_of_scaleMinimum_8() { return &___scaleMinimum_8; }
	inline void set_scaleMinimum_8(float value)
	{
		___scaleMinimum_8 = value;
	}

	inline static int32_t get_offset_of_minimumScale_9() { return static_cast<int32_t>(offsetof(MinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A, ___minimumScale_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_minimumScale_9() const { return ___minimumScale_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_minimumScale_9() { return &___minimumScale_9; }
	inline void set_minimumScale_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___minimumScale_9 = value;
	}

	inline static int32_t get_offset_of_scaleMaximum_10() { return static_cast<int32_t>(offsetof(MinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A, ___scaleMaximum_10)); }
	inline float get_scaleMaximum_10() const { return ___scaleMaximum_10; }
	inline float* get_address_of_scaleMaximum_10() { return &___scaleMaximum_10; }
	inline void set_scaleMaximum_10(float value)
	{
		___scaleMaximum_10 = value;
	}

	inline static int32_t get_offset_of_maximumScale_11() { return static_cast<int32_t>(offsetof(MinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A, ___maximumScale_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_maximumScale_11() const { return ___maximumScale_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_maximumScale_11() { return &___maximumScale_11; }
	inline void set_maximumScale_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___maximumScale_11 = value;
	}

	inline static int32_t get_offset_of_relativeToInitialState_12() { return static_cast<int32_t>(offsetof(MinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A, ___relativeToInitialState_12)); }
	inline bool get_relativeToInitialState_12() const { return ___relativeToInitialState_12; }
	inline bool* get_address_of_relativeToInitialState_12() { return &___relativeToInitialState_12; }
	inline void set_relativeToInitialState_12(bool value)
	{
		___relativeToInitialState_12 = value;
	}
};


// Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample
struct PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802  : public InputSystemGlobalHandlerListener_tD6CD2BA60230DF5BC4CBF7CD51B7BFA66074CFB2
{
public:
	// UnityEngine.Transform Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::attachRoot
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___attachRoot_5;
	// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::prefabDart
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefabDart_6;
	// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::prefabPillarFixed
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefabPillarFixed_7;
	// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::prefabPillarDynamic
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefabPillarDynamic_8;
	// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::prefabBeam
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefabBeam_9;
	// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::prefabWorldLockedSphere
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefabWorldLockedSphere_10;
	// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::prefabUnlockedSphere
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefabUnlockedSphere_11;
	// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::prefabHybridLockedSphere
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefabHybridLockedSphere_12;
	// Microsoft.MixedReality.Toolkit.UI.InteractableToggleCollection Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::worldLockSelector
	InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3 * ___worldLockSelector_13;
	// UnityEngine.Material Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::lineMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___lineMaterial_14;
	// Microsoft.MixedReality.Toolkit.UI.InteractableToggleCollection Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::radioSet
	InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3 * ___radioSet_15;
	// Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/BuildMode Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::mode
	int32_t ___mode_16;
	// UnityEngine.Vector3 Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::beamStartPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___beamStartPosition_17;
	// UnityEngine.LineRenderer Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::lineRenderer
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___lineRenderer_18;
	// Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/WorldLockType Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::worldLock
	int32_t ___worldLock_19;

public:
	inline static int32_t get_offset_of_attachRoot_5() { return static_cast<int32_t>(offsetof(PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802, ___attachRoot_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_attachRoot_5() const { return ___attachRoot_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_attachRoot_5() { return &___attachRoot_5; }
	inline void set_attachRoot_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___attachRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attachRoot_5), (void*)value);
	}

	inline static int32_t get_offset_of_prefabDart_6() { return static_cast<int32_t>(offsetof(PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802, ___prefabDart_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_prefabDart_6() const { return ___prefabDart_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_prefabDart_6() { return &___prefabDart_6; }
	inline void set_prefabDart_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___prefabDart_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefabDart_6), (void*)value);
	}

	inline static int32_t get_offset_of_prefabPillarFixed_7() { return static_cast<int32_t>(offsetof(PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802, ___prefabPillarFixed_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_prefabPillarFixed_7() const { return ___prefabPillarFixed_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_prefabPillarFixed_7() { return &___prefabPillarFixed_7; }
	inline void set_prefabPillarFixed_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___prefabPillarFixed_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefabPillarFixed_7), (void*)value);
	}

	inline static int32_t get_offset_of_prefabPillarDynamic_8() { return static_cast<int32_t>(offsetof(PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802, ___prefabPillarDynamic_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_prefabPillarDynamic_8() const { return ___prefabPillarDynamic_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_prefabPillarDynamic_8() { return &___prefabPillarDynamic_8; }
	inline void set_prefabPillarDynamic_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___prefabPillarDynamic_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefabPillarDynamic_8), (void*)value);
	}

	inline static int32_t get_offset_of_prefabBeam_9() { return static_cast<int32_t>(offsetof(PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802, ___prefabBeam_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_prefabBeam_9() const { return ___prefabBeam_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_prefabBeam_9() { return &___prefabBeam_9; }
	inline void set_prefabBeam_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___prefabBeam_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefabBeam_9), (void*)value);
	}

	inline static int32_t get_offset_of_prefabWorldLockedSphere_10() { return static_cast<int32_t>(offsetof(PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802, ___prefabWorldLockedSphere_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_prefabWorldLockedSphere_10() const { return ___prefabWorldLockedSphere_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_prefabWorldLockedSphere_10() { return &___prefabWorldLockedSphere_10; }
	inline void set_prefabWorldLockedSphere_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___prefabWorldLockedSphere_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefabWorldLockedSphere_10), (void*)value);
	}

	inline static int32_t get_offset_of_prefabUnlockedSphere_11() { return static_cast<int32_t>(offsetof(PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802, ___prefabUnlockedSphere_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_prefabUnlockedSphere_11() const { return ___prefabUnlockedSphere_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_prefabUnlockedSphere_11() { return &___prefabUnlockedSphere_11; }
	inline void set_prefabUnlockedSphere_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___prefabUnlockedSphere_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefabUnlockedSphere_11), (void*)value);
	}

	inline static int32_t get_offset_of_prefabHybridLockedSphere_12() { return static_cast<int32_t>(offsetof(PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802, ___prefabHybridLockedSphere_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_prefabHybridLockedSphere_12() const { return ___prefabHybridLockedSphere_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_prefabHybridLockedSphere_12() { return &___prefabHybridLockedSphere_12; }
	inline void set_prefabHybridLockedSphere_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___prefabHybridLockedSphere_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefabHybridLockedSphere_12), (void*)value);
	}

	inline static int32_t get_offset_of_worldLockSelector_13() { return static_cast<int32_t>(offsetof(PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802, ___worldLockSelector_13)); }
	inline InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3 * get_worldLockSelector_13() const { return ___worldLockSelector_13; }
	inline InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3 ** get_address_of_worldLockSelector_13() { return &___worldLockSelector_13; }
	inline void set_worldLockSelector_13(InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3 * value)
	{
		___worldLockSelector_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___worldLockSelector_13), (void*)value);
	}

	inline static int32_t get_offset_of_lineMaterial_14() { return static_cast<int32_t>(offsetof(PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802, ___lineMaterial_14)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_lineMaterial_14() const { return ___lineMaterial_14; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_lineMaterial_14() { return &___lineMaterial_14; }
	inline void set_lineMaterial_14(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___lineMaterial_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineMaterial_14), (void*)value);
	}

	inline static int32_t get_offset_of_radioSet_15() { return static_cast<int32_t>(offsetof(PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802, ___radioSet_15)); }
	inline InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3 * get_radioSet_15() const { return ___radioSet_15; }
	inline InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3 ** get_address_of_radioSet_15() { return &___radioSet_15; }
	inline void set_radioSet_15(InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3 * value)
	{
		___radioSet_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___radioSet_15), (void*)value);
	}

	inline static int32_t get_offset_of_mode_16() { return static_cast<int32_t>(offsetof(PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802, ___mode_16)); }
	inline int32_t get_mode_16() const { return ___mode_16; }
	inline int32_t* get_address_of_mode_16() { return &___mode_16; }
	inline void set_mode_16(int32_t value)
	{
		___mode_16 = value;
	}

	inline static int32_t get_offset_of_beamStartPosition_17() { return static_cast<int32_t>(offsetof(PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802, ___beamStartPosition_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_beamStartPosition_17() const { return ___beamStartPosition_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_beamStartPosition_17() { return &___beamStartPosition_17; }
	inline void set_beamStartPosition_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___beamStartPosition_17 = value;
	}

	inline static int32_t get_offset_of_lineRenderer_18() { return static_cast<int32_t>(offsetof(PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802, ___lineRenderer_18)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_lineRenderer_18() const { return ___lineRenderer_18; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_lineRenderer_18() { return &___lineRenderer_18; }
	inline void set_lineRenderer_18(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___lineRenderer_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineRenderer_18), (void*)value);
	}

	inline static int32_t get_offset_of_worldLock_19() { return static_cast<int32_t>(offsetof(PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802, ___worldLock_19)); }
	inline int32_t get_worldLock_19() const { return ___worldLock_19; }
	inline int32_t* get_address_of_worldLock_19() { return &___worldLock_19; }
	inline void set_worldLock_19(int32_t value)
	{
		___worldLock_19 = value;
	}
};


// Microsoft.MixedReality.WorldLocking.Examples.RayPins
struct RayPins_t80A83EA4F8A476C390F6A49E857652EB74E15575  : public InputSystemGlobalHandlerListener_tD6CD2BA60230DF5BC4CBF7CD51B7BFA66074CFB2
{
public:
	// Microsoft.MixedReality.WorldLocking.Core.IOrienter Microsoft.MixedReality.WorldLocking.Examples.RayPins::orienter
	RuntimeObject* ___orienter_5;
	// Microsoft.MixedReality.Toolkit.UI.InteractableToggleCollection Microsoft.MixedReality.WorldLocking.Examples.RayPins::radioSet
	InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3 * ___radioSet_6;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.Core.SpacePinOrientable> Microsoft.MixedReality.WorldLocking.Examples.RayPins::spacePins
	List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56 * ___spacePins_7;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Microsoft.MixedReality.WorldLocking.Examples.RayPins::spacePinPoints
	List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * ___spacePinPoints_8;
	// System.Int32 Microsoft.MixedReality.WorldLocking.Examples.RayPins::activePin
	int32_t ___activePin_9;

public:
	inline static int32_t get_offset_of_orienter_5() { return static_cast<int32_t>(offsetof(RayPins_t80A83EA4F8A476C390F6A49E857652EB74E15575, ___orienter_5)); }
	inline RuntimeObject* get_orienter_5() const { return ___orienter_5; }
	inline RuntimeObject** get_address_of_orienter_5() { return &___orienter_5; }
	inline void set_orienter_5(RuntimeObject* value)
	{
		___orienter_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___orienter_5), (void*)value);
	}

	inline static int32_t get_offset_of_radioSet_6() { return static_cast<int32_t>(offsetof(RayPins_t80A83EA4F8A476C390F6A49E857652EB74E15575, ___radioSet_6)); }
	inline InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3 * get_radioSet_6() const { return ___radioSet_6; }
	inline InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3 ** get_address_of_radioSet_6() { return &___radioSet_6; }
	inline void set_radioSet_6(InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3 * value)
	{
		___radioSet_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___radioSet_6), (void*)value);
	}

	inline static int32_t get_offset_of_spacePins_7() { return static_cast<int32_t>(offsetof(RayPins_t80A83EA4F8A476C390F6A49E857652EB74E15575, ___spacePins_7)); }
	inline List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56 * get_spacePins_7() const { return ___spacePins_7; }
	inline List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56 ** get_address_of_spacePins_7() { return &___spacePins_7; }
	inline void set_spacePins_7(List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56 * value)
	{
		___spacePins_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spacePins_7), (void*)value);
	}

	inline static int32_t get_offset_of_spacePinPoints_8() { return static_cast<int32_t>(offsetof(RayPins_t80A83EA4F8A476C390F6A49E857652EB74E15575, ___spacePinPoints_8)); }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * get_spacePinPoints_8() const { return ___spacePinPoints_8; }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 ** get_address_of_spacePinPoints_8() { return &___spacePinPoints_8; }
	inline void set_spacePinPoints_8(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * value)
	{
		___spacePinPoints_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spacePinPoints_8), (void*)value);
	}

	inline static int32_t get_offset_of_activePin_9() { return static_cast<int32_t>(offsetof(RayPins_t80A83EA4F8A476C390F6A49E857652EB74E15575, ___activePin_9)); }
	inline int32_t get_activePin_9() const { return ___activePin_9; }
	inline int32_t* get_address_of_activePin_9() { return &___activePin_9; }
	inline void set_activePin_9(int32_t value)
	{
		___activePin_9 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.RotationAxisConstraint
struct RotationAxisConstraint_t3D65F29C05CD4E1C12723D07A3E026C45825302E  : public TransformConstraint_tC42A2968CDB77EF526D991D93F93C20FD661454B
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.AxisFlags Microsoft.MixedReality.Toolkit.UI.RotationAxisConstraint::constraintOnRotation
	int32_t ___constraintOnRotation_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.RotationAxisConstraint::useLocalSpaceForConstraint
	bool ___useLocalSpaceForConstraint_9;

public:
	inline static int32_t get_offset_of_constraintOnRotation_8() { return static_cast<int32_t>(offsetof(RotationAxisConstraint_t3D65F29C05CD4E1C12723D07A3E026C45825302E, ___constraintOnRotation_8)); }
	inline int32_t get_constraintOnRotation_8() const { return ___constraintOnRotation_8; }
	inline int32_t* get_address_of_constraintOnRotation_8() { return &___constraintOnRotation_8; }
	inline void set_constraintOnRotation_8(int32_t value)
	{
		___constraintOnRotation_8 = value;
	}

	inline static int32_t get_offset_of_useLocalSpaceForConstraint_9() { return static_cast<int32_t>(offsetof(RotationAxisConstraint_t3D65F29C05CD4E1C12723D07A3E026C45825302E, ___useLocalSpaceForConstraint_9)); }
	inline bool get_useLocalSpaceForConstraint_9() const { return ___useLocalSpaceForConstraint_9; }
	inline bool* get_address_of_useLocalSpaceForConstraint_9() { return &___useLocalSpaceForConstraint_9; }
	inline void set_useLocalSpaceForConstraint_9(bool value)
	{
		___useLocalSpaceForConstraint_9 = value;
	}
};


// Microsoft.MixedReality.WorldLocking.Examples.SpacePinManipulation
struct SpacePinManipulation_tA67D55B37A96758AE9CE68C4A5792382C5353A79  : public SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.SpacePinManipulation::prefab_FeelerRay
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab_FeelerRay_12;
	// Microsoft.MixedReality.WorldLocking.Examples.PinManipulator Microsoft.MixedReality.WorldLocking.Examples.SpacePinManipulation::pinManipulator
	PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * ___pinManipulator_13;

public:
	inline static int32_t get_offset_of_prefab_FeelerRay_12() { return static_cast<int32_t>(offsetof(SpacePinManipulation_tA67D55B37A96758AE9CE68C4A5792382C5353A79, ___prefab_FeelerRay_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_prefab_FeelerRay_12() const { return ___prefab_FeelerRay_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_prefab_FeelerRay_12() { return &___prefab_FeelerRay_12; }
	inline void set_prefab_FeelerRay_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___prefab_FeelerRay_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefab_FeelerRay_12), (void*)value);
	}

	inline static int32_t get_offset_of_pinManipulator_13() { return static_cast<int32_t>(offsetof(SpacePinManipulation_tA67D55B37A96758AE9CE68C4A5792382C5353A79, ___pinManipulator_13)); }
	inline PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * get_pinManipulator_13() const { return ___pinManipulator_13; }
	inline PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 ** get_address_of_pinManipulator_13() { return &___pinManipulator_13; }
	inline void set_pinManipulator_13(PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * value)
	{
		___pinManipulator_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pinManipulator_13), (void*)value);
	}
};


// Microsoft.MixedReality.WorldLocking.Core.SpacePinOrientable
struct SpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA  : public SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C
{
public:
	// Microsoft.MixedReality.WorldLocking.Core.Orienter Microsoft.MixedReality.WorldLocking.Core.SpacePinOrientable::orienter
	Orienter_t1D850D1887AD89DD2EFDB94F24D1E9C57FA074E8 * ___orienter_12;
	// Microsoft.MixedReality.WorldLocking.Core.IOrienter Microsoft.MixedReality.WorldLocking.Core.SpacePinOrientable::iorienter
	RuntimeObject* ___iorienter_13;

public:
	inline static int32_t get_offset_of_orienter_12() { return static_cast<int32_t>(offsetof(SpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA, ___orienter_12)); }
	inline Orienter_t1D850D1887AD89DD2EFDB94F24D1E9C57FA074E8 * get_orienter_12() const { return ___orienter_12; }
	inline Orienter_t1D850D1887AD89DD2EFDB94F24D1E9C57FA074E8 ** get_address_of_orienter_12() { return &___orienter_12; }
	inline void set_orienter_12(Orienter_t1D850D1887AD89DD2EFDB94F24D1E9C57FA074E8 * value)
	{
		___orienter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___orienter_12), (void*)value);
	}

	inline static int32_t get_offset_of_iorienter_13() { return static_cast<int32_t>(offsetof(SpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA, ___iorienter_13)); }
	inline RuntimeObject* get_iorienter_13() const { return ___iorienter_13; }
	inline RuntimeObject** get_address_of_iorienter_13() { return &___iorienter_13; }
	inline void set_iorienter_13(RuntimeObject* value)
	{
		___iorienter_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iorienter_13), (void*)value);
	}
};


// Microsoft.MixedReality.WorldLocking.Tools.AdjusterMoving
struct AdjusterMoving_t656CFCAD82441648E53F023C66612D9F7FBE0683  : public AdjusterFixed_tA49EDC9CBDAFEBD3F101CBEB45425FA4F2865E7E
{
public:

public:
};


// Microsoft.MixedReality.WorldLocking.Examples.SpacePinOrientableManipulation
struct SpacePinOrientableManipulation_t63D9969EF984ADC57612A9E05072AE2C9ED0A107  : public SpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.SpacePinOrientableManipulation::prefab_FeelerRay
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab_FeelerRay_14;
	// System.Boolean Microsoft.MixedReality.WorldLocking.Examples.SpacePinOrientableManipulation::allowRotation
	bool ___allowRotation_15;
	// Microsoft.MixedReality.WorldLocking.Examples.PinManipulator Microsoft.MixedReality.WorldLocking.Examples.SpacePinOrientableManipulation::pinManipulator
	PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * ___pinManipulator_16;

public:
	inline static int32_t get_offset_of_prefab_FeelerRay_14() { return static_cast<int32_t>(offsetof(SpacePinOrientableManipulation_t63D9969EF984ADC57612A9E05072AE2C9ED0A107, ___prefab_FeelerRay_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_prefab_FeelerRay_14() const { return ___prefab_FeelerRay_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_prefab_FeelerRay_14() { return &___prefab_FeelerRay_14; }
	inline void set_prefab_FeelerRay_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___prefab_FeelerRay_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefab_FeelerRay_14), (void*)value);
	}

	inline static int32_t get_offset_of_allowRotation_15() { return static_cast<int32_t>(offsetof(SpacePinOrientableManipulation_t63D9969EF984ADC57612A9E05072AE2C9ED0A107, ___allowRotation_15)); }
	inline bool get_allowRotation_15() const { return ___allowRotation_15; }
	inline bool* get_address_of_allowRotation_15() { return &___allowRotation_15; }
	inline void set_allowRotation_15(bool value)
	{
		___allowRotation_15 = value;
	}

	inline static int32_t get_offset_of_pinManipulator_16() { return static_cast<int32_t>(offsetof(SpacePinOrientableManipulation_t63D9969EF984ADC57612A9E05072AE2C9ED0A107, ___pinManipulator_16)); }
	inline PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * get_pinManipulator_16() const { return ___pinManipulator_16; }
	inline PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 ** get_address_of_pinManipulator_16() { return &___pinManipulator_16; }
	inline void set_pinManipulator_16(PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * value)
	{
		___pinManipulator_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pinManipulator_16), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Physics.RayStep[]
struct RayStepU5BU5D_t5B0462BE188D5AF7E8FE020DC4C618AA1F4BABE0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399  m_Items[1];

public:
	inline RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m7B696202BBB75B9EABAEA52D2D463236406A6302_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent3, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.MixedRealityToolkit::GetService<System.Object>(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MixedRealityToolkit_GetService_TisRuntimeObject_mC1AB212F213018D206783FAF7D723641175C97AD_gshared (MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE * __this, String_t* ___name0, bool ___showLogs1, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A  HashSet_1_GetEnumerator_m7B591DC586DE6ACF8918E1BC71FA731FB919603E_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD87CDEF3F60C047F21B9E6A48590E59D9D6621C9_gshared (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m8A225BA705CC2D5BA0A22FF58381EA1FDB37ED20_gshared (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInParent_TisRuntimeObject_m1CAE1DA88E1147164A44737BD03D5CB12DC73673_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___call0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// !0 System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.Core.SpacePin>::get_Item(System.Int32)
inline SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C * List_1_get_Item_m2E145695A7EEFF3435C01F08773CC6405908B713_inline (List_1_t53D1C24FA77D2E5EC126BEE9A8EFEE7D081BF037 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C * (*) (List_1_t53D1C24FA77D2E5EC126BEE9A8EFEE7D081BF037 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.Core.SpacePin>::get_Count()
inline int32_t List_1_get_Count_mEA79704C82B87831C3E1F520F7383F66EBF9136D_inline (List_1_t53D1C24FA77D2E5EC126BEE9A8EFEE7D081BF037 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t53D1C24FA77D2E5EC126BEE9A8EFEE7D081BF037 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * WorldLockingManager_GetInstance_m1A558A9E776F5A09360EE417191DF29163CE4B05 (const RuntimeMethod* method);
// Microsoft.MixedReality.WorldLocking.Core.IAlignmentManager Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::get_AlignmentManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WorldLockingManager_get_AlignmentManager_mFD1A8D1A0DD99104461065F60490243A4F900CA4_inline (WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.Core.SpacePin>::.ctor()
inline void List_1__ctor_mED46D392961B69BB966471AEFF096B9FD6351057 (List_1_t53D1C24FA77D2E5EC126BEE9A8EFEE7D081BF037 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t53D1C24FA77D2E5EC126BEE9A8EFEE7D081BF037 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upwards1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::get_worldLockingManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * DashboardCommand_get_worldLockingManager_m8EC90D4A67FE787C18EE6E64DB211E4CCC1AD3A9 (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.WorldLocking.Core.ManagerSettings Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::get_Settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ManagerSettings_t6EEBD6C5F66E722A7D437D19F89E1766A66DDF3D  WorldLockingManager_get_Settings_mEF05AC5F0675B6DF568BF4169312967E6F0242FA (WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::set_Settings(Microsoft.MixedReality.WorldLocking.Core.ManagerSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldLockingManager_set_Settings_m0154DBACB2439224DE4B6361D8369E4BAB86AB45 (WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * __this, ManagerSettings_t6EEBD6C5F66E722A7D437D19F89E1766A66DDF3D  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.WorldLocking.Tools.StatusToText::get_InfoEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StatusToText_get_InfoEnabled_m5E3799509CC39373C8B08CCC4059F0868564AAFB (StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Tools.StatusToText::set_InfoEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusToText_set_InfoEnabled_m57B5922760AA0E79567B8E36AA6CA1548907A5CF (StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.WorldLocking.Tools.StatusToText::get_MetricsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StatusToText_get_MetricsEnabled_m396D6DB424DF60A1F3D15B42BA3618551CD8B8B5 (StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Tools.StatusToText::set_MetricsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusToText_set_MetricsEnabled_m44F3B0A3CF3CBF114783A25108A4A1E0679B59D5 (StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.WorldLocking.Tools.StatusToText::get_ErrorStatusEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StatusToText_get_ErrorStatusEnabled_mDFDAE13665AC9ABDC57BE07053F0E4186FBC4022 (StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Tools.StatusToText::set_ErrorStatusEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusToText_set_ErrorStatusEnabled_mD2FF9ABA91423711FE369CB0EE2171022D692BCA (StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.WorldLocking.Tools.StatusToText::get_StateIndicatorEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StatusToText_get_StateIndicatorEnabled_mDAD5FC5F3079D4B5DF1C4E2FEC94238554B958CE (StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Tools.StatusToText::set_StateIndicatorEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusToText_set_StateIndicatorEnabled_mFFE7B54DAF1F46584DAD59F548686A8893447BBC (StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.WorldLocking.Tools.FrozenSpatialMapping::get_Display()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FrozenSpatialMapping_get_Display_mC982FA4EECDF673447FCCE59874F0796554F1754 (FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Tools.FrozenSpatialMapping::set_Display(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrozenSpatialMapping_set_Display_m86772B91E6514AF0383A97147B5C2FF11756FD53 (FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::get_Enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WorldLockingManager_get_Enabled_mAE1AFFFAC5BFA516301833F9446907C74FE13BEC (WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::get_AutoSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WorldLockingManager_get_AutoSave_mB3550A50FBB0771FBEC9EB04FB736CD77A00FBF8 (WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::get_AutoMerge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WorldLockingManager_get_AutoMerge_m643B979D5C56434DE8030F04D0867B15D789E7A5 (WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::get_AutoRefreeze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WorldLockingManager_get_AutoRefreeze_mBA5AFFE64E115A49F6F7F3A2B45D2FBF245B4E0C (WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.WorldLocking.Core.IFragmentManager Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::get_FragmentManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WorldLockingManager_get_FragmentManager_m53A595B9335BB6FEB3C272CF5C312E4BFA349A8E_inline (WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldLockingManager_Save_m8F298177AD345A22727519DB0BD5E0ECD55D8A4B (WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldLockingManager_Load_mF472D34FB2C2C16092A3A5A512EEE07FB1789354 (WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldLockingManager_Reset_mB018309D3E41EE23BE22D306999736D5C30719A7 (WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, const RuntimeMethod* method);
// System.Single System.Math::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Min_mED21323DC72FBF9A825FD4210D4B9D693CE87FCF (float ___val10, float ___val21, const RuntimeMethod* method);
// System.Single System.Math::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mEB87839DA28310AE4CB81A94D551874CFC2B1247 (float ___val10, float ___val21, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Physics::IgnoreLayerCollision(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics_IgnoreLayerCollision_mD8EE9AF6DAD4F6AC89455F4E015F51A19DC70B93 (int32_t ___layer10, int32_t ___layer21, bool ___ignore2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::get_HasSpatialMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DashboardCommand_get_HasSpatialMap_m7F67FFF1DF1E889C7F2F639ACF3210CADBB7E1DB (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::get_RefreezeIndicated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WorldLockingManager_get_RefreezeIndicated_mBE2B574CEEB43771FD1569A7B21E0B680993DB9B (WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::get_MergeIndicated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WorldLockingManager_get_MergeIndicated_m94F2E5F3B1EDC2EF793A6D2B944DCE874711514A (WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::get_AutoSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DashboardCommand_get_AutoSave_mB7636ACD2411724E2FEB5B0349B4D608610EEB5B (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::get_AnchorVisualization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DashboardCommand_get_AnchorVisualization_mBD4D03F05266D13A69816670177E6A906EF6126B (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.UI.Interactable::set_CurrentDimension(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interactable_set_CurrentDimension_mBD7C3BAEED6D77CC22359E96206B678F6BC6F941 (Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::get_InfoEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DashboardCommand_get_InfoEnabled_mD6F8279087DDC49654BF0819BD73377BF30D935D (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::get_MetricsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DashboardCommand_get_MetricsEnabled_m168A26182700D6559624406EC4ACDE2C2B905A28 (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::get_SpatialMapDisplayEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DashboardCommand_get_SpatialMapDisplayEnabled_m5342971311A3D69D034D6195A267249BED3E3977 (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::get_ManagerEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DashboardCommand_get_ManagerEnabled_m5C461A17814A86A607B33D87CC0715043A261AF4 (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::get_AutoMerge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DashboardCommand_get_AutoMerge_m9C7142C9E924AF3C9FA0BCC5841215646E3EDA4B (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::get_AutoRefreeze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DashboardCommand_get_AutoRefreeze_m5F542CE70D7E2C3468C7FF2A737E9267C6038FBE (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystemGlobalHandlerListener_Start_mB95BFCFEB3717C0CA1304E7FF18A1ED0C73D67BB (InputSystemGlobalHandlerListener_tD6CD2BA60230DF5BC4CBF7CD51B7BFA66074CFB2 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Microsoft.MixedReality.Toolkit.UI.InteractableToggleCollection>()
inline InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3 * GameObject_GetComponent_TisInteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3_m3A8BBDA4A6AF0F54B542138B15B016407A04E908 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::SetupLineRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_SetupLineRenderer_m474D0D78DEC25777BE2C6CA10F08503F8C91D072 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::SyncRadioSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_SyncRadioSet_m19878F05F81FB2924AFEF342ADC321ED6279CB46 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m6A2BBB60EC90F7EC48A6A91CA98149C547A04C0A (String_t* ___layerName0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::ShowBeam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_ShowBeam_m15DB022C9BB815BDB30E4B649C19A99749777F5D (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::ShowDartArc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_ShowDartArc_m0B70F977BFF24E82D8C96BDE883AC01A911B3166 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::ModeToIndex(Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/BuildMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhysicsBeamSample_ModeToIndex_m5FBD6E08A7FAA452A8669DCE25C8FCEA4519C4BD (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, int32_t ___mode0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.UI.InteractableToggleCollection::set_CurrentIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableToggleCollection_set_CurrentIndex_m18A9804577AE857F48A57F9FDA08C23F88FA43B1 (InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.UI.InteractableToggleCollection::get_CurrentIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InteractableToggleCollection_get_CurrentIndex_mF94561CF17520C86F574AA6A9F4189975A56540E_inline (InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.UI.InteractableToggleCollection::SetSelection(System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableToggleCollection_SetSelection_mD63AD809A40AD0CC9B2176FBF3D3F573B66CCC08 (InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3 * __this, int32_t ___index0, bool ___force1, bool ___fireOnClick2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::DropDart(Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/RayHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_DropDart_m7BA05CAA05F2BEC9BA012E0BF78E68F47CE3FADE (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  ___rayHit0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::DropPillar(Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/RayHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_DropPillar_m9CAD6B7F73900D20B3E2A74AC87CFF8EC05D1CF8 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  ___rayHit0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::StartBeam(Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/RayHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_StartBeam_mFD8F0B4A7D0749254FCD7DCE90BF09A15F44F278 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  ___rayHit0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::EndBeam(Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/RayHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_EndBeam_m947DF3655C0E627038CB6C3819F1A784A3714BED (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  ___rayHit0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::PinSphere(Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/RayHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_PinSphere_m1D08EEAA600950DCA7A1ACFCF78B30E3D160FDC9 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  ___rayHit0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::RemoveObject(Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/RayHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_RemoveObject_mA3F9D860EADA7FD1455AC3B57DBA83B7638C622F (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  ___rayHit0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::get_PrefabDart()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PhysicsBeamSample_get_PrefabDart_m2B7EC22C750F045B0291CD14C91640462B6470BB_inline (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/VelocityTime Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::ComputeArc(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VelocityTime_t8F44324796F4B7FF1B951924D34F7B4FA33FF326  PhysicsBeamSample_ComputeArc_m5B04DF37C13A3CAE22E52E39B19F7681301CBFBC (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::get_AttachRoot()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * PhysicsBeamSample_get_AttachRoot_m5C3E1BBFF968AD689DC3F818191D3A3AC7497CB1_inline (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent3, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m7B696202BBB75B9EABAEA52D2D463236406A6302_gshared)(___original0, ___position1, ___rotation2, ___parent3, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m78B9D94F505E19F3C63461362AD6DE7EA0836700 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, int32_t ___mode1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.WorldLocking.Tools.AdjusterMoving>()
inline AdjusterMoving_t656CFCAD82441648E53F023C66612D9F7FBE0683 * GameObject_AddComponent_TisAdjusterMoving_t656CFCAD82441648E53F023C66612D9F7FBE0683_mEA354BE90AE2D592090267870390B4A4BBB6B47E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AdjusterMoving_t656CFCAD82441648E53F023C66612D9F7FBE0683 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.WorldLocking.Tools.AdjusterFixed>()
inline AdjusterFixed_tA49EDC9CBDAFEBD3F101CBEB45425FA4F2865E7E * GameObject_AddComponent_TisAdjusterFixed_tA49EDC9CBDAFEBD3F101CBEB45425FA4F2865E7E_m16FFB7FEC5E38A1EA9C695F7C356086B435A22FC (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AdjusterFixed_tA49EDC9CBDAFEBD3F101CBEB45425FA4F2865E7E * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>::.ctor()
inline void List_1__ctor_mFA3D6FC02C5D3E8D60430F40FD47778E33A7B912 (List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.MixedRealityToolkit Microsoft.MixedReality.Toolkit.MixedRealityToolkit::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE * MixedRealityToolkit_get_Instance_m476E2053BA79D9D8A2F8941441AE2AE1D656B8F3_inline (const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.MixedRealityToolkit::GetService<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>(System.String,System.Boolean)
inline RuntimeObject* MixedRealityToolkit_GetService_TisIMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_m330D38E8B3326095CEBD76787F0985C8F6A82D39 (MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE * __this, String_t* ___name0, bool ___showLogs1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE *, String_t*, bool, const RuntimeMethod*))MixedRealityToolkit_GetService_TisRuntimeObject_mC1AB212F213018D206783FAF7D723641175C97AD_gshared)(__this, ___name0, ___showLogs1, method);
}
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>::GetEnumerator()
inline Enumerator_t25AA8A27379794BCEB27B5E997A36A120A989886  HashSet_1_GetEnumerator_m65BF4DCFFA4B50A7750E9C10FAB56E8F8DF7D5CB (HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t25AA8A27379794BCEB27B5E997A36A120A989886  (*) (HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 *, const RuntimeMethod*))HashSet_1_GetEnumerator_m7B591DC586DE6ACF8918E1BC71FA731FB919603E_gshared)(__this, method);
}
// !0 System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mEA6E4D9F75E5071D43A8E01F751ADC4BDF95E54C_inline (Enumerator_t25AA8A27379794BCEB27B5E997A36A120A989886 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t25AA8A27379794BCEB27B5E997A36A120A989886 *, const RuntimeMethod*))Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>::Add(!0)
inline void List_1_Add_mC71E73709B0A23EAA2DDFEFA2B0BDE676B33BC42 (List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E *, RuntimeObject*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>::MoveNext()
inline bool Enumerator_MoveNext_m573A880FC0E7571C5CA76ED316166EA2D4EF4C5E (Enumerator_t25AA8A27379794BCEB27B5E997A36A120A989886 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t25AA8A27379794BCEB27B5E997A36A120A989886 *, const RuntimeMethod*))Enumerator_MoveNext_mD87CDEF3F60C047F21B9E6A48590E59D9D6621C9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>::Dispose()
inline void Enumerator_Dispose_m8BD89A610860F51ACE6A506C5A08FE6985B52F28 (Enumerator_t25AA8A27379794BCEB27B5E997A36A120A989886 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t25AA8A27379794BCEB27B5E997A36A120A989886 *, const RuntimeMethod*))Enumerator_Dispose_m8A225BA705CC2D5BA0A22FF58381EA1FDB37ED20_gshared)(__this, method);
}
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer> Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::FindActivePointers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E * PhysicsBeamSample_FindActivePointers_m089845C86AD0DFD4041BA2B372D2E237167B9C6A (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>::get_Count()
inline int32_t List_1_get_Count_m19771EC4BDF52DDFD8BC1D6856D05C8D5482F2C1_inline (List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_mD3A9CB8A7FBD13AE79C7AEBF6B32368A750F2637_inline (List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 UnityEngine.LayerMask::GetMask(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_GetMask_m46D2185735D02C7DEE01E3BAAF4A39F2AB46F67F (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___layerNames0, const RuntimeMethod* method);
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Origin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Origin_m82A173C1E794696C462AA099BBA51DB4149AAE8D_inline (RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::get_Point()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FocusDetails_get_Point_m64928E75649D63E98441E757747B337430BD3BB3_inline (FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::ShowArc(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_ShowArc_m12E129AC5767A242A7E5410FFB180F2B056E5506 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPos0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startVel1, float ___maxAge2, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, bool ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Normalize_m7C9B0E84BCB84D54A16D1212F3DE5AB2A386FCD9 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Physics_get_gravity_m58D5D94276B1E7A04E9F7108EEAAB7AB786BA532 (const RuntimeMethod* method);
// System.Int32 UnityEngine.LineRenderer::get_positionCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LineRenderer_get_positionCount_m599A1E6BE97C3E5C88164D171628D38D86F09E01 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPositions_mD7F470FCD99805F1466E13B64C3F04825DFDBF91 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___positions0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::get_PrefabPillarFixed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PhysicsBeamSample_get_PrefabPillarFixed_mAD21584F8229E692A768AAB7FD01D2DEF1AE36E7_inline (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::get_PrefabPillarDynamic()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PhysicsBeamSample_get_PrefabPillarDynamic_m4CAE22DA6CE565AB8568B6145D58A7BE04172182_inline (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInParent<RemovableGroup>()
inline RemovableGroup_tB747F0765FAC888AA3C06D726D6186EAFE9778CF * GameObject_GetComponentInParent_TisRemovableGroup_tB747F0765FAC888AA3C06D726D6186EAFE9778CF_m8D9BD2AEE08637025C6D9942A72F571522FA8F5C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RemovableGroup_tB747F0765FAC888AA3C06D726D6186EAFE9778CF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentInParent_TisRuntimeObject_m1CAE1DA88E1147164A44737BD03D5CB12DC73673_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::get_PrefabBeam()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PhysicsBeamSample_get_PrefabBeam_mF3FEEDF2620641D4917DA28D16BA3CFB1741284A_inline (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.LineRenderer>()
inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * GameObject_AddComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mDBF1085005984D110DBAB1A2051888DC0AAC10B0 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_grey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_grey_mB2E29B47327F20233856F933DC00ACADEBFDBDFA (const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_startWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_startWidth_mD88B562DD413EE9861FB254963C7EDCB5199C1DF (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_endWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_endWidth_m3DCD4FFCC3944DD6DC0737C8AF8C7EDB5A6CF59A (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_useWorldSpace(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_useWorldSpace_m53AA0FE659EFB041647DB6A29826D20D52CBE148 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_startColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_startColor_m7C75698F11565606CEA049DD3AE0514BADBF6BB7 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686 (const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_endColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_endColor_mF9F043C0EE5E36AD5B36547A17171ECA6967CDE2 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, int32_t ___index0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/WorldLockType Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::get_WorldLock()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PhysicsBeamSample_get_WorldLock_m33D175FCF28BBF8EF77580FCD0E173731B55110E_inline (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::get_PrefabUnlockedSphere()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PhysicsBeamSample_get_PrefabUnlockedSphere_mD57552F92514EEC1295E0F819A1220365AF35CE8_inline (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::get_PrefabWorldLockedSphere()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PhysicsBeamSample_get_PrefabWorldLockedSphere_m5CF2CC286B202B3DFB85B584B9509FB77E17E667_inline (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.WorldLocking.Tools.ToggleWorldAnchor>()
inline ToggleWorldAnchor_t1B1167AAE4D649411357DCAC4BBEA35B598EB09B * GameObject_AddComponent_TisToggleWorldAnchor_t1B1167AAE4D649411357DCAC4BBEA35B598EB09B_m0D1B8B398B187CC3C580F8FA6979E6BF6D401B96 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ToggleWorldAnchor_t1B1167AAE4D649411357DCAC4BBEA35B598EB09B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.WorldLocking.Tools.ToggleWorldAnchor::set_AlwaysLock(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ToggleWorldAnchor_set_AlwaysLock_mE994FABF3BAAFBF1AAF3E4ACBC04DF8DB0476608_inline (ToggleWorldAnchor_t1B1167AAE4D649411357DCAC4BBEA35B598EB09B * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::get_PrefabHybridLockedSphere()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PhysicsBeamSample_get_PrefabHybridLockedSphere_mDA89D680C2E05DDB4D3AF23AB624238F23BF2934_inline (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::FinishCurrentAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_FinishCurrentAction_mA4D824EBDA75930F9ABDA0C1E440E5C53ACFB3E5 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::set_WorldLock(Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/WorldLockType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhysicsBeamSample_set_WorldLock_m7F42E8CD43B58946EE67EBF7AECF3CFCCFA56FC0_inline (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::SetupWorldLockSelect(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_SetupWorldLockSelect_m8DDC21C1A63870C2BC7C1E414F24AB4FF1EDB0E2 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, bool ___activate0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::get_Pointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MixedRealityPointerEventData_get_Pointer_m3A233E75C86D4B0B230A0242BB5ED9A8715F9B08_inline (MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/RayHit::.ctor(Microsoft.MixedReality.Toolkit.Input.IPointerResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayHit__ctor_m64432C2E16F60A50E597D4846BA5F0552D4EAD83 (RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338 * __this, RuntimeObject* ___pointerResult0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::HandleHit(Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/RayHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_HandleHit_m68DC4CCDCE205AC3A186981E5FFCC01A32CE2247 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  ___rayHit0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystemGlobalHandlerListener__ctor_m1DFA244E7E94A7AB4F2B8CF4E2A46D78E6118B48 (InputSystemGlobalHandlerListener_tD6CD2BA60230DF5BC4CBF7CD51B7BFA66074CFB2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::SetupManipulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManipulator_SetupManipulation_m7B2F624C219950A56C8203289876BA9B65F25563 (PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::.ctor(UnityEngine.Transform,UnityEngine.GameObject,Microsoft.MixedReality.WorldLocking.Examples.ManipulationStartedDelegate,Microsoft.MixedReality.WorldLocking.Examples.ManipulationEndedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManipulator__ctor_mB782A192BB79438DC8ADF07139FA8B0E644EAE9A (PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___owner0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab1, ManipulationStartedDelegate_tDE21ED8C580CF3E861222CBD24EC9E94B925A811 * ___started2, ManipulationEndedDelegate_t3F667BDD0876A1CE0E97765F48B4A6E64F182967 * ___ended3, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::SetupFeelerRays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManipulator_SetupFeelerRays_mCB0B827BD5BF49D954B74AA8335DDFD9A5AC0D64 (PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Pose Microsoft.MixedReality.WorldLocking.Core.TransformExtensions::GetGlobalPose(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  TransformExtensions_GetGlobalPose_m4FBC5E1D7A46F16B2129F97B406AA81762962C35 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Core.TransformExtensions::SetGlobalPose(UnityEngine.Transform,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformExtensions_SetGlobalPose_mFA74F73519542835BA146CFCC7546D700503D6B9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::TakeDownFeelerRays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManipulator_TakeDownFeelerRays_m69F4B4B2F1B29E8B7C6E20EA99E72BAF56C4D27A (PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::TakeDownManipulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManipulator_TakeDownManipulation_mD332EDD86D32DBA4B072298D5B73D407EB2B1A72 (PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * __this, const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::GetFeelerRayParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * PinManipulator_GetFeelerRayParent_mAC7A50F6453DB2F501CBC284CDD1F3273C65EDE1 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.UI.BoundingBox>()
inline BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1 * GameObject_AddComponent_TisBoundingBox_tA8279F2A60922226778FBAE32762501395F477A1_m63FD6B1F77791B5142173669B0766859FBADB58A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundingBox::set_HideElementsInInspector(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBox_set_HideElementsInInspector_mDC4C25576824AE103F8F82E99DC5F9333173CEE7 (BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundingBox::set_BoundingBoxActivation(Microsoft.MixedReality.Toolkit.UI.BoundingBox/BoundingBoxActivationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBox_set_BoundingBoxActivation_mAF1ECC76C4DA35BCB2D124549805AB3EA218E948 (BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint>()
inline MinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A * Component_GetComponent_TisMinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A_m709576930557497FED624473DFA5CBFAB9FFFD05 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint>()
inline MinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A * GameObject_AddComponent_TisMinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A_m94BE0BF48B4D50E5DB4731F254654647CFFC6725 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint::set_RelativeToInitialState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxScaleConstraint_set_RelativeToInitialState_m8AD825F9A583FE839B52860FFC4DA3D981D32873 (MinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint::set_ScaleMaximum(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxScaleConstraint_set_ScaleMaximum_mA5CB9483D2E5789735DEAC178DB14272EC492C35 (MinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A * __this, float ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint::set_ScaleMinimum(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxScaleConstraint_set_ScaleMinimum_m73E75D0F5813796247107F228778A7806C2B62C7 (MinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A * __this, float ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.UI.ObjectManipulator>()
inline ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A * GameObject_AddComponent_TisObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A_m33727D702B5BFB1E887C61522683758C62F86027 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.UI.RotationAxisConstraint>()
inline RotationAxisConstraint_t3D65F29C05CD4E1C12723D07A3E026C45825302E * GameObject_AddComponent_TisRotationAxisConstraint_t3D65F29C05CD4E1C12723D07A3E026C45825302E_m65B8ECE1671815BA392AAF8A6CC3744A1BCFEC37 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RotationAxisConstraint_t3D65F29C05CD4E1C12723D07A3E026C45825302E * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.UI.TransformConstraint::set_HandType(Microsoft.MixedReality.Toolkit.Utilities.ManipulationHandFlags)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TransformConstraint_set_HandType_m000BFAAE272AA7FC5BCF326A9CA8DD9E2C5AF63B_inline (TransformConstraint_tC42A2968CDB77EF526D991D93F93C20FD661454B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.UI.TransformConstraint::set_ProximityType(Microsoft.MixedReality.Toolkit.Utilities.ManipulationProximityFlags)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TransformConstraint_set_ProximityType_m5D2B986C13CEC2A385AAE028ED27CC863D9B3E37_inline (TransformConstraint_tC42A2968CDB77EF526D991D93F93C20FD661454B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.UI.RotationAxisConstraint::set_ConstraintOnRotation(Microsoft.MixedReality.Toolkit.Utilities.AxisFlags)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RotationAxisConstraint_set_ConstraintOnRotation_mC9E0A75D32B4975F1DBF7B5E5F359B338E10E442_inline (RotationAxisConstraint_t3D65F29C05CD4E1C12723D07A3E026C45825302E * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.UI.FixedRotationToWorldConstraint>()
inline FixedRotationToWorldConstraint_t6E679FB9DA77F87B06F34E9824A85A73354CBEAB * GameObject_AddComponent_TisFixedRotationToWorldConstraint_t6E679FB9DA77F87B06F34E9824A85A73354CBEAB_m5C7DE39BF227B2457097A37DAA985181A6366DCA (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  FixedRotationToWorldConstraint_t6E679FB9DA77F87B06F34E9824A85A73354CBEAB * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::get_OnManipulationStarted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ManipulationEvent_t72B794DBAD271C9FE714E404CD610357353EA7C6 * ObjectManipulator_get_OnManipulationStarted_m796BFAE1D5783E297BA16417F6F96BC213F6F779_inline (ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<Microsoft.MixedReality.Toolkit.UI.ManipulationEventData>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m4F277527BC123D3B17B4AD12E6E9F5A10FBFE14C (UnityAction_1_t73174C87AEE037BF43DD95B66D00BCD7F7A7B4E1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t73174C87AEE037BF43DD95B66D00BCD7F7A7B4E1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Microsoft.MixedReality.Toolkit.UI.ManipulationEventData>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_mE5431134F630389C71A303A726B8813D541C5139 (UnityEvent_1_tF8B59F7F477A2B1293FA0D6FAB06D68701BBEBE8 * __this, UnityAction_1_t73174C87AEE037BF43DD95B66D00BCD7F7A7B4E1 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tF8B59F7F477A2B1293FA0D6FAB06D68701BBEBE8 *, UnityAction_1_t73174C87AEE037BF43DD95B66D00BCD7F7A7B4E1 *, const RuntimeMethod*))UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared)(__this, ___call0, method);
}
// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::get_OnManipulationEnded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ManipulationEvent_t72B794DBAD271C9FE714E404CD610357353EA7C6 * ObjectManipulator_get_OnManipulationEnded_m156B80707C728553A7539AA77F3B7D2650F872A3_inline (ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable>()
inline NearInteractionGrabbable_tC638302907B386074B3B1B65568C18097BF1BCEF * GameObject_AddComponent_TisNearInteractionGrabbable_tC638302907B386074B3B1B65568C18097BF1BCEF_m6F533CF22B0474A04C2B1A98CDF63CC0A4405632 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  NearInteractionGrabbable_tC638302907B386074B3B1B65568C18097BF1BCEF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::ShowFeelerRays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManipulator_ShowFeelerRays_m2813F3286AC3F4EDE3D641595BBEDC553B13BDD2 (PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.ManipulationStartedDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationStartedDelegate_Invoke_m62C579A2C9B89D972B8CC7DE09A9132AA3D5A3E3 (ManipulationStartedDelegate_tDE21ED8C580CF3E861222CBD24EC9E94B925A811 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::BeginManipulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManipulator_BeginManipulation_m5694015069A458F5BDFDDDD18A49F03EBE1123A9 (PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::HideFeelerRays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManipulator_HideFeelerRays_m6B7E8C5AD8EE804EA99CCA9A249D20B43174A0F3 (PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.ManipulationEndedDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationEndedDelegate_Invoke_m88E3747EC407B560D63AE05A8366B75050AA12AC (ManipulationEndedDelegate_t3F667BDD0876A1CE0E97765F48B4A6E64F182967 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::FinishManipulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManipulator_FinishManipulation_m6918B71B9F0CEC66354348B19B2E8FCF6E648810 (PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.RayPins::set_ActivePin(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RayPins_set_ActivePin_m74F8B06490BD89EE6E4BA99E53E7677E82880187_inline (RayPins_t80A83EA4F8A476C390F6A49E857652EB74E15575 * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.WorldLocking.Core.Orienter>()
inline Orienter_t1D850D1887AD89DD2EFDB94F24D1E9C57FA074E8 * GameObject_AddComponent_TisOrienter_t1D850D1887AD89DD2EFDB94F24D1E9C57FA074E8_m7E43895EC882942C1B5968A0ED85181A8CBD96C2 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Orienter_t1D850D1887AD89DD2EFDB94F24D1E9C57FA074E8 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Boolean Microsoft.MixedReality.WorldLocking.Examples.RayPins::CreateSpacePins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RayPins_CreateSpacePins_mCECC686ABE6A810D43DFB7875D5EE6DBE3545687 (RayPins_t80A83EA4F8A476C390F6A49E857652EB74E15575 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<Microsoft.MixedReality.Toolkit.UI.InteractableToggleCollection>()
inline InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3 * GameObject_GetComponentInChildren_TisInteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3_mFF4B3B02955DD127EBFD08074FDEB8454B220CE3 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.RayPins::ClearAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayPins_ClearAll_m5AC3DFDE7C6483F0E9A360CA6491F77ABBA5641E (RayPins_t80A83EA4F8A476C390F6A49E857652EB74E15575 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.Core.SpacePinOrientable>::Clear()
inline void List_1_Clear_mB3208B95CDCA713484F19943EA3416DBB458A782 (List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_inline (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// Microsoft.MixedReality.WorldLocking.Core.SpacePinOrientable Microsoft.MixedReality.WorldLocking.Examples.RayPins::CreateSpacePin(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA * RayPins_CreateSpacePin_mF602FFBFB339793D9E99EEF478308C061A3142BA (RayPins_t80A83EA4F8A476C390F6A49E857652EB74E15575 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.Core.SpacePinOrientable>::Add(!0)
inline void List_1_Add_m0119A1E59498B6B1FA0BC59434091CEB3CD6FD36 (List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56 * __this, SpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56 *, SpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_inline (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.Core.SpacePinOrientable>::get_Count()
inline int32_t List_1_get_Count_m1A6C15CD0C7CDDAB010D34F34754D7246E86FC93_inline (List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.WorldLocking.Core.SpacePinOrientable>()
inline SpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA * GameObject_AddComponent_TisSpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA_m34AC37F82442D467745DA9AA267BDEC17EC8A48D (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.WorldLocking.Core.SpacePinOrientable::set_Orienter(Microsoft.MixedReality.WorldLocking.Core.IOrienter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacePinOrientable_set_Orienter_m019C749B29C6B6A3A7078F8759F623FC854B6DCE (SpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.Core.SpacePinOrientable>::get_Item(System.Int32)
inline SpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA * List_1_get_Item_m321A0F9B2CBFB4475A0D7369774E6E65A0ED105F_inline (List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  SpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA * (*) (List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void Microsoft.MixedReality.WorldLocking.Core.SpacePinOrientable::SetFrozenPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacePinOrientable_SetFrozenPosition_m6D8DCCD81FFC133D669B58175B46886FD9C797E8 (SpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___frozenPosition0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.RayPins/RayHit::.ctor(Microsoft.MixedReality.Toolkit.Input.IPointerResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayHit__ctor_m8305D5B2DA14178E55ED810927854BBA54C6F876 (RayHit_tD3531714B864673B28BD5395D21F090D44267DC6 * __this, RuntimeObject* ___pointerResult0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.RayPins::HandleHit(Microsoft.MixedReality.WorldLocking.Examples.RayPins/RayHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayPins_HandleHit_m62050BD09E6EF3903987915B45F2DD7FABB0D171 (RayPins_t80A83EA4F8A476C390F6A49E857652EB74E15575 * __this, RayHit_tD3531714B864673B28BD5395D21F090D44267DC6  ___rayHit0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.Core.SpacePinOrientable>::.ctor()
inline void List_1__ctor_m5F03E31D78BD2456C712D2A3B88EE7F7C0BDFA24 (List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.WorldLocking.Core.SpacePin::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacePin_Start_m13B8F11526D6BCFDB2D348A7B41BDA49020B09A9 (SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.SpacePinManipulation::get_Prefab_FeelerRay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * SpacePinManipulation_get_Prefab_FeelerRay_mE31116FD05A181875D5B309D9BBDD5E5BE678A87_inline (SpacePinManipulation_tA67D55B37A96758AE9CE68C4A5792382C5353A79 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.ManipulationStartedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationStartedDelegate__ctor_m8F68FF26F9547079FA57A33F1ECAD447FCDF2875 (ManipulationStartedDelegate_tDE21ED8C580CF3E861222CBD24EC9E94B925A811 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.ManipulationEndedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationEndedDelegate__ctor_m39F381E644BBB1853319CA77A3FA77F9808CE2CC (ManipulationEndedDelegate_t3F667BDD0876A1CE0E97765F48B4A6E64F182967 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::set_UserOriented(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManipulator_set_UserOriented_m57B51B39113F5F08A3A148AC024BB2B5EB2E485E (PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::Startup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManipulator_Startup_m6995A7D306B090B0D9F2249CF22221142E2CB351 (PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Core.SpacePin::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacePin_OnDestroy_mD2592616FE49528B791125BAF95F6188BBA7F8A6 (SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::get_ApplyAdjustment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WorldLockingManager_get_ApplyAdjustment_m698EDB0FDF547D9FB071235420129B83517B647F (WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * __this, const RuntimeMethod* method);
// UnityEngine.Pose Microsoft.MixedReality.WorldLocking.Core.SpacePin::ExtractModelPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  SpacePin_ExtractModelPose_mF6649CD52E1AA0992C347CD5FADA75C033323C46 (SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Core.SpacePin::SetFrozenPose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacePin_SetFrozenPose_mCDC5015CC8A3377FB8F08321BD3BB32ADE4D2D9F (SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___frozenPose0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Core.SpacePin::SetSpongyPose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacePin_SetSpongyPose_mCAF7BDAC5B814CFCF78CD49BA82B5CA5F131002A (SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___spongyPose0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Core.SpacePin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacePin__ctor_m8FCE9243F9698B6618D6BEA9D5E4642463F8318C (SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Core.SpacePinOrientable::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacePinOrientable_Start_m051F09F70F6BA03BE4634205B51A82418B19DE4E (SpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.SpacePinOrientableManipulation::get_Prefab_FeelerRay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * SpacePinOrientableManipulation_get_Prefab_FeelerRay_mA589644F3229D6D731CA280527CD92D9B79C919D_inline (SpacePinOrientableManipulation_t63D9969EF984ADC57612A9E05072AE2C9ED0A107 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.WorldLocking.Examples.SpacePinOrientableManipulation::get_AllowRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpacePinOrientableManipulation_get_AllowRotation_mDE9C380BE22EDE2DD00A7F1665F88F28E537C350_inline (SpacePinOrientableManipulation_t63D9969EF984ADC57612A9E05072AE2C9ED0A107 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Core.SpacePinOrientable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacePinOrientable__ctor_m747A2224830DD94A51A4C4B3B06861CC45427AC3 (SpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674 (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/RayHit::.ctor(UnityEngine.Vector3,UnityEngine.RaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayHit__ctor_mB6E914ECFECA6D242701477150CB3F8F6D5968E5 (RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rayStart0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___hitInfo1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::get_Normal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FocusDetails_get_Normal_mE4978EAE5D22593110AAAFA1C8B8A35A9B22912F_inline (FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.Examples.RayPins/RayHit::.ctor(UnityEngine.Vector3,UnityEngine.RaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayHit__ctor_mE191FAF09984D29DE064EF3B101FEEEA0A39DD01 (RayHit_tD3531714B864673B28BD5395D21F090D44267DC6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rayStart0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___hitInfo1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.WorldLocking.Examples.AlignmentControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AlignmentControl_Start_m92934757E72EE9E6CF8262F7EC9AF46DD741E035 (AlignmentControl_tA708D3B02421046D0C7B55F07628626D1472D893 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.AlignmentControl::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AlignmentControl_Clear_mA54FAB5B707B8147238D9FF8E4D3F53A601E6F6D (AlignmentControl_tA708D3B02421046D0C7B55F07628626D1472D893 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAlignmentManager_tFD04FC1FBCB5DFC33D0A385FB7C7B4E7224FF106_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEA79704C82B87831C3E1F520F7383F66EBF9136D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2E145695A7EEFF3435C01F08773CC6405908B713_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < spacePins.Count; ++i)
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		// spacePins[i].Reset();
		List_1_t53D1C24FA77D2E5EC126BEE9A8EFEE7D081BF037 * L_0 = __this->get_spacePins_4();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C * L_2;
		L_2 = List_1_get_Item_m2E145695A7EEFF3435C01F08773CC6405908B713_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m2E145695A7EEFF3435C01F08773CC6405908B713_RuntimeMethod_var);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(9 /* System.Void Microsoft.MixedReality.WorldLocking.Core.SpacePin::Reset() */, L_2);
		// for (int i = 0; i < spacePins.Count; ++i)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0019:
	{
		// for (int i = 0; i < spacePins.Count; ++i)
		int32_t L_4 = V_0;
		List_1_t53D1C24FA77D2E5EC126BEE9A8EFEE7D081BF037 * L_5 = __this->get_spacePins_4();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mEA79704C82B87831C3E1F520F7383F66EBF9136D_inline(L_5, /*hidden argument*/List_1_get_Count_mEA79704C82B87831C3E1F520F7383F66EBF9136D_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// WorldLockingManager.GetInstance().AlignmentManager.ClearAlignmentAnchors();
		WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_7;
		L_7 = WorldLockingManager_GetInstance_m1A558A9E776F5A09360EE417191DF29163CE4B05(/*hidden argument*/NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = WorldLockingManager_get_AlignmentManager_mFD1A8D1A0DD99104461065F60490243A4F900CA4_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		InterfaceActionInvoker0::Invoke(7 /* System.Void Microsoft.MixedReality.WorldLocking.Core.IAlignmentManager::ClearAlignmentAnchors() */, IAlignmentManager_tFD04FC1FBCB5DFC33D0A385FB7C7B4E7224FF106_il2cpp_TypeInfo_var, L_8);
		// WorldLockingManager.GetInstance().AlignmentManager.SendAlignmentAnchors();
		WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_9;
		L_9 = WorldLockingManager_GetInstance_m1A558A9E776F5A09360EE417191DF29163CE4B05(/*hidden argument*/NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = WorldLockingManager_get_AlignmentManager_mFD1A8D1A0DD99104461065F60490243A4F900CA4_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		InterfaceActionInvoker0::Invoke(8 /* System.Void Microsoft.MixedReality.WorldLocking.Core.IAlignmentManager::SendAlignmentAnchors() */, IAlignmentManager_tFD04FC1FBCB5DFC33D0A385FB7C7B4E7224FF106_il2cpp_TypeInfo_var, L_10);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.AlignmentControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AlignmentControl__ctor_m8E8FF78EF4B81AC7194FAC7E50E4A5518BF1BEBD (AlignmentControl_tA708D3B02421046D0C7B55F07628626D1472D893 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mED46D392961B69BB966471AEFF096B9FD6351057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t53D1C24FA77D2E5EC126BEE9A8EFEE7D081BF037_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<SpacePin> spacePins = new List<SpacePin>();
		List_1_t53D1C24FA77D2E5EC126BEE9A8EFEE7D081BF037 * L_0 = (List_1_t53D1C24FA77D2E5EC126BEE9A8EFEE7D081BF037 *)il2cpp_codegen_object_new(List_1_t53D1C24FA77D2E5EC126BEE9A8EFEE7D081BF037_il2cpp_TypeInfo_var);
		List_1__ctor_mED46D392961B69BB966471AEFF096B9FD6351057(L_0, /*hidden argument*/List_1__ctor_mED46D392961B69BB966471AEFF096B9FD6351057_RuntimeMethod_var);
		__this->set_spacePins_4(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.WorldLocking.Examples.CircleCam::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleCam_Start_mE797EFACB070ECE44D25EEB6C4859D087B585C05 (CircleCam_t40F5AF87A6CE410B5C787E2AC36BAD0D850C52EF * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.CircleCam::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleCam_Update_m41FE3574B2B44B461E7CB2085609AA076CC9A749 (CircleCam_t40F5AF87A6CE410B5C787E2AC36BAD0D850C52EF * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// float deltaSecs = Time.deltaTime;
		float L_0;
		L_0 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		// float deltaMinutes = deltaSecs / 60.0f;
		V_0 = ((float)((float)L_0/(float)(60.0f)));
		// revolutions += rpm * deltaMinutes;
		float L_1 = __this->get_revolutions_7();
		float L_2 = __this->get_rpm_4();
		float L_3 = V_0;
		__this->set_revolutions_7(((float)il2cpp_codegen_add((float)L_1, (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)))));
		// revolutions = (float)(revolutions - (int)revolutions);
		float L_4 = __this->get_revolutions_7();
		float L_5 = __this->get_revolutions_7();
		__this->set_revolutions_7(((float)((float)((float)il2cpp_codegen_subtract((float)L_4, (float)((float)((float)il2cpp_codegen_cast_double_to_int<int32_t>(L_5))))))));
		// float fracRevRads = revolutions * 2.0f * Mathf.PI; ;
		float L_6 = __this->get_revolutions_7();
		// float posX = Mathf.Cos(fracRevRads);
		float L_7 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_6, (float)(2.0f))), (float)(3.14159274f)));
		float L_8;
		L_8 = cosf(L_7);
		V_1 = L_8;
		// float posZ = Mathf.Sin(fracRevRads);
		float L_9;
		L_9 = sinf(L_7);
		V_2 = L_9;
		// Vector3 position = new Vector3(posX, 0.0f, posZ) * distance;
		float L_10 = V_1;
		float L_11 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), L_10, (0.0f), L_11, /*hidden argument*/NULL);
		float L_13 = __this->get_distance_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_12, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		// transform.position = position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_3;
		NullCheck(L_15);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_15, L_16, /*hidden argument*/NULL);
		// Vector3 forward = new Vector3(-posZ, 0.0f, posX);
		float L_17 = V_2;
		float L_18 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_19), ((-L_17)), (0.0f), L_18, /*hidden argument*/NULL);
		// Quaternion ahead = Quaternion.LookRotation(forward, Vector3.up);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_21;
		L_21 = Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1(L_19, L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		// Quaternion rotation = Quaternion.Euler(0.0f, -lookAngle, 0.0f);
		float L_22 = __this->get_lookAngle_6();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23;
		L_23 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), ((-L_22)), (0.0f), /*hidden argument*/NULL);
		V_5 = L_23;
		// transform.rotation = rotation * ahead;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_25 = V_5;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_26 = V_4;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_27;
		L_27 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_25, L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_24, L_27, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.CircleCam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleCam__ctor_mE17DB2D5EF68958D24B9585A580DCBCBD66F0A40 (CircleCam_t40F5AF87A6CE410B5C787E2AC36BAD0D850C52EF * __this, const RuntimeMethod* method)
{
	{
		// public float rpm = 10.0f;
		__this->set_rpm_4((10.0f));
		// public float distance = 5.0f;
		__this->set_distance_5((5.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::get_worldLockingManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * DashboardCommand_get_worldLockingManager_m8EC90D4A67FE787C18EE6E64DB211E4CCC1AD3A9 (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, const RuntimeMethod* method)
{
	{
		// private WorldLockingManager worldLockingManager { get { return WorldLockingManager.GetInstance(); } }
		WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_0;
		L_0 = WorldLockingManager_GetInstance_m1A558A9E776F5A09360EE417191DF29163CE4B05(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::ToggleGui()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DashboardCommand_ToggleGui_m2DA7E7D5AA02C4D2BAFB6C5703CE61F88AE46B36 (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (guiRoot != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_guiRoot_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		// guiRoot.gameObject.SetActive(!guiRoot.gameObject.activeSelf);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_guiRoot_7();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_guiRoot_7();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::ToggleManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DashboardCommand_ToggleManager_m6D95A908439F3D99E2B934F14C6822F3BD97BEA6 (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, const RuntimeMethod* method)
{
	ManagerSettings_t6EEBD6C5F66E722A7D437D19F89E1766A66DDF3D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var settings = worldLockingManager.Settings;
		WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_0;
		L_0 = DashboardCommand_get_worldLockingManager_m8EC90D4A67FE787C18EE6E64DB211E4CCC1AD3A9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ManagerSettings_t6EEBD6C5F66E722A7D437D19F89E1766A66DDF3D  L_1;
		L_1 = WorldLockingManager_get_Settings_mEF05AC5F0675B6DF568BF4169312967E6F0242FA(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// settings.Enabled = !settings.Enabled;
		ManagerSettings_t6EEBD6C5F66E722A7D437D19F89E1766A66DDF3D  L_2 = V_0;
		bool L_3 = L_2.get_Enabled_1();
		(&V_0)->set_Enabled_1((bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0));
		// worldLockingManager.Settings = settings;
		WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_4;
		L_4 = DashboardCommand_get_worldLockingManager_m8EC90D4A67FE787C18EE6E64DB211E4CCC1AD3A9(__this, /*hidden argument*/NULL);
		ManagerSettings_t6EEBD6C5F66E722A7D437D19F89E1766A66DDF3D  L_5 = V_0;
		NullCheck(L_4);
		WorldLockingManager_set_Settings_m0154DBACB2439224DE4B6361D8369E4BAB86AB45(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::get_AnchorVisualization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DashboardCommand_get_AnchorVisualization_mBD4D03F05266D13A69816670177E6A906EF6126B (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (anchorVisualizer != null)
		AnchorGraphVisual_tD55799591BF2B332DDC5DBFF1E79CE20B7A42926 * L_0 = __this->get_anchorVisualizer_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// return anchorVisualizer.enabled;
		AnchorGraphVisual_tD55799591BF2B332DDC5DBFF1E79CE20B7A42926 * L_2 = __this->get_anchorVisualizer_5();
		NullCheck(L_2);
		bool L_3;
		L_3 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::set_AnchorVisualization(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DashboardCommand_set_AnchorVisualization_m9998386A86F8DB248FEDB9C2185BA0CD1C7280D0 (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (anchorVisualizer != null)
		AnchorGraphVisual_tD55799591BF2B332DDC5DBFF1E79CE20B7A42926 * L_0 = __this->get_anchorVisualizer_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// anchorVisualizer.enabled = value;
		AnchorGraphVisual_tD55799591BF2B332DDC5DBFF1E79CE20B7A42926 * L_2 = __this->get_anchorVisualizer_5();
		bool L_3 = ___value0;
		NullCheck(L_2);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::get_InfoEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DashboardCommand_get_InfoEnabled_mD6F8279087DDC49654BF0819BD73377BF30D935D (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (textManager!= null)
		StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B * L_0 = __this->get_textManager_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// return textManager.InfoEnabled;
		StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B * L_2 = __this->get_textManager_4();
		NullCheck(L_2);
		bool L_3;
		L_3 = StatusToText_get_InfoEnabled_m5E3799509CC39373C8B08CCC4059F0868564AAFB(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::set_InfoEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DashboardCommand_set_InfoEnabled_m03B62C3507AD2840670D7B1ED63EEC9FB5B1EB4B (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (textManager != null)
		StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B * L_0 = __this->get_textManager_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// textManager.InfoEnabled = value;
		StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B * L_2 = __this->get_textManager_4();
		bool L_3 = ___value0;
		NullCheck(L_2);
		StatusToText_set_InfoEnabled_m57B5922760AA0E79567B8E36AA6CA1548907A5CF(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::get_MetricsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DashboardCommand_get_MetricsEnabled_m168A26182700D6559624406EC4ACDE2C2B905A28 (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (textManager != null)
		StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B * L_0 = __this->get_textManager_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// return textManager.MetricsEnabled;
		StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B * L_2 = __this->get_textManager_4();
		NullCheck(L_2);
		bool L_3;
		L_3 = StatusToText_get_MetricsEnabled_m396D6DB424DF60A1F3D15B42BA3618551CD8B8B5(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::set_MetricsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DashboardCommand_set_MetricsEnabled_m9640256461999CCEC06339ABF37CD7A193B18F5F (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (textManager != null)
		StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B * L_0 = __this->get_textManager_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// textManager.MetricsEnabled = value;
		StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B * L_2 = __this->get_textManager_4();
		bool L_3 = ___value0;
		NullCheck(L_2);
		StatusToText_set_MetricsEnabled_m44F3B0A3CF3CBF114783A25108A4A1E0679B59D5(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::get_StatusEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DashboardCommand_get_StatusEnabled_m9322400277A98E54D0E68AF1FAC41F10A8FB2CDC (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (textManager != null)
		StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B * L_0 = __this->get_textManager_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// return textManager.ErrorStatusEnabled;
		StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B * L_2 = __this->get_textManager_4();
		NullCheck(L_2);
		bool L_3;
		L_3 = StatusToText_get_ErrorStatusEnabled_mDFDAE13665AC9ABDC57BE07053F0E4186FBC4022(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::set_StatusEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DashboardCommand_set_StatusEnabled_m3E827A48E30D695F3E192551206643D1DDD360F5 (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (textManager != null)
		StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B * L_0 = __this->get_textManager_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// textManager.ErrorStatusEnabled = value;
		StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B * L_2 = __this->get_textManager_4();
		bool L_3 = ___value0;
		NullCheck(L_2);
		StatusToText_set_ErrorStatusEnabled_mD2FF9ABA91423711FE369CB0EE2171022D692BCA(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::get_StateEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DashboardCommand_get_StateEnabled_m54F2600FC7B5C9C91EF5C9291214590588904EC3 (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (textManager != null)
		StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B * L_0 = __this->get_textManager_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// return textManager.StateIndicatorEnabled;
		StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B * L_2 = __this->get_textManager_4();
		NullCheck(L_2);
		bool L_3;
		L_3 = StatusToText_get_StateIndicatorEnabled_mDAD5FC5F3079D4B5DF1C4E2FEC94238554B958CE(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::set_StateEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DashboardCommand_set_StateEnabled_m8498E758B263582B06435FDC0CF9E62ABFBB0CC1 (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (textManager != null)
		StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B * L_0 = __this->get_textManager_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// textManager.StateIndicatorEnabled = value;
		StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B * L_2 = __this->get_textManager_4();
		bool L_3 = ___value0;
		NullCheck(L_2);
		StatusToText_set_StateIndicatorEnabled_mFFE7B54DAF1F46584DAD59F548686A8893447BBC(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::get_SpatialMapDisplayEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DashboardCommand_get_SpatialMapDisplayEnabled_m5342971311A3D69D034D6195A267249BED3E3977 (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (spatialMapping != null)
		FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E * L_0 = __this->get_spatialMapping_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// return spatialMapping.Display;
		FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E * L_2 = __this->get_spatialMapping_6();
		NullCheck(L_2);
		bool L_3;
		L_3 = FrozenSpatialMapping_get_Display_mC982FA4EECDF673447FCCE59874F0796554F1754(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::set_SpatialMapDisplayEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DashboardCommand_set_SpatialMapDisplayEnabled_m92535BA60580F106DEEA5B92E40F0E18B338D0DF (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (spatialMapping != null)
		FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E * L_0 = __this->get_spatialMapping_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// spatialMapping.Display = value;
		FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E * L_2 = __this->get_spatialMapping_6();
		bool L_3 = ___value0;
		NullCheck(L_2);
		FrozenSpatialMapping_set_Display_m86772B91E6514AF0383A97147B5C2FF11756FD53(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::get_HasSpatialMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DashboardCommand_get_HasSpatialMap_m7F67FFF1DF1E889C7F2F639ACF3210CADBB7E1DB (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return spatialMapping != null;
		FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E * L_0 = __this->get_spatialMapping_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::get_ManagerEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DashboardCommand_get_ManagerEnabled_m5C461A17814A86A607B33D87CC0715043A261AF4 (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, const RuntimeMethod* method)
{
	{
		// return worldLockingManager.Enabled;
		WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_0;
		L_0 = DashboardCommand_get_worldLockingManager_m8EC90D4A67FE787C18EE6E64DB211E4CCC1AD3A9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = WorldLockingManager_get_Enabled_mAE1AFFFAC5BFA516301833F9446907C74FE13BEC(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::set_ManagerEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DashboardCommand_set_ManagerEnabled_m0AEDC2BEEECCE941F0AB433D94933EC7D916695B (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, bool ___value0, const RuntimeMethod* method)
{
	ManagerSettings_t6EEBD6C5F66E722A7D437D19F89E1766A66DDF3D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var config = worldLockingManager.Settings;
		WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_0;
		L_0 = DashboardCommand_get_worldLockingManager_m8EC90D4A67FE787C18EE6E64DB211E4CCC1AD3A9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ManagerSettings_t6EEBD6C5F66E722A7D437D19F89E1766A66DDF3D  L_1;
		L_1 = WorldLockingManager_get_Settings_mEF05AC5F0675B6DF568BF4169312967E6F0242FA(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// config.Enabled = value;
		bool L_2 = ___value0;
		(&V_0)->set_Enabled_1(L_2);
		// worldLockingManager.Settings = config;
		WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_3;
		L_3 = DashboardCommand_get_worldLockingManager_m8EC90D4A67FE787C18EE6E64DB211E4CCC1AD3A9(__this, /*hidden argument*/NULL);
		ManagerSettings_t6EEBD6C5F66E722A7D437D19F89E1766A66DDF3D  L_4 = V_0;
		NullCheck(L_3);
		WorldLockingManager_set_Settings_m0154DBACB2439224DE4B6361D8369E4BAB86AB45(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::get_AutoSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DashboardCommand_get_AutoSave_mB7636ACD2411724E2FEB5B0349B4D608610EEB5B (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, const RuntimeMethod* method)
{
	{
		// return worldLockingManager.AutoSave;
		WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_0;
		L_0 = DashboardCommand_get_worldLockingManager_m8EC90D4A67FE787C18EE6E64DB211E4CCC1AD3A9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = WorldLockingManager_get_AutoSave_mB3550A50FBB0771FBEC9EB04FB736CD77A00FBF8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::set_AutoSave(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DashboardCommand_set_AutoSave_m2DB1ABB6E0247993FE6DA2B24A46396264CB739F (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, bool ___value0, const RuntimeMethod* method)
{
	ManagerSettings_t6EEBD6C5F66E722A7D437D19F89E1766A66DDF3D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var config = worldLockingManager.Settings;
		WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_0;
		L_0 = DashboardCommand_get_worldLockingManager_m8EC90D4A67FE787C18EE6E64DB211E4CCC1AD3A9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ManagerSettings_t6EEBD6C5F66E722A7D437D19F89E1766A66DDF3D  L_1;
		L_1 = WorldLockingManager_get_Settings_mEF05AC5F0675B6DF568BF4169312967E6F0242FA(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// config.AutoSave = value;
		bool L_2 = ___value0;
		(&V_0)->set_AutoSave_5(L_2);
		// worldLockingManager.Settings = config;
		WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_3;
		L_3 = DashboardCommand_get_worldLockingManager_m8EC90D4A67FE787C18EE6E64DB211E4CCC1AD3A9(__this, /*hidden argument*/NULL);
		ManagerSettings_t6EEBD6C5F66E722A7D437D19F89E1766A66DDF3D  L_4 = V_0;
		NullCheck(L_3);
		WorldLockingManager_set_Settings_m0154DBACB2439224DE4B6361D8369E4BAB86AB45(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::get_AutoMerge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DashboardCommand_get_AutoMerge_m9C7142C9E924AF3C9FA0BCC5841215646E3EDA4B (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, const RuntimeMethod* method)
{
	{
		// return worldLockingManager.AutoMerge;
		WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_0;
		L_0 = DashboardCommand_get_worldLockingManager_m8EC90D4A67FE787C18EE6E64DB211E4CCC1AD3A9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = WorldLockingManager_get_AutoMerge_m643B979D5C56434DE8030F04D0867B15D789E7A5(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::set_AutoMerge(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DashboardCommand_set_AutoMerge_m39320D5E571AEF17ECA730A5FF37098957D6A01C (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, bool ___value0, const RuntimeMethod* method)
{
	ManagerSettings_t6EEBD6C5F66E722A7D437D19F89E1766A66DDF3D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var config = worldLockingManager.Settings;
		WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_0;
		L_0 = DashboardCommand_get_worldLockingManager_m8EC90D4A67FE787C18EE6E64DB211E4CCC1AD3A9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ManagerSettings_t6EEBD6C5F66E722A7D437D19F89E1766A66DDF3D  L_1;
		L_1 = WorldLockingManager_get_Settings_mEF05AC5F0675B6DF568BF4169312967E6F0242FA(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// config.AutoMerge = value;
		bool L_2 = ___value0;
		(&V_0)->set_AutoMerge_2(L_2);
		// worldLockingManager.Settings = config;
		WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_3;
		L_3 = DashboardCommand_get_worldLockingManager_m8EC90D4A67FE787C18EE6E64DB211E4CCC1AD3A9(__this, /*hidden argument*/NULL);
		ManagerSettings_t6EEBD6C5F66E722A7D437D19F89E1766A66DDF3D  L_4 = V_0;
		NullCheck(L_3);
		WorldLockingManager_set_Settings_m0154DBACB2439224DE4B6361D8369E4BAB86AB45(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::get_AutoRefreeze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DashboardCommand_get_AutoRefreeze_m5F542CE70D7E2C3468C7FF2A737E9267C6038FBE (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, const RuntimeMethod* method)
{
	{
		// return worldLockingManager.AutoRefreeze;
		WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_0;
		L_0 = DashboardCommand_get_worldLockingManager_m8EC90D4A67FE787C18EE6E64DB211E4CCC1AD3A9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = WorldLockingManager_get_AutoRefreeze_mBA5AFFE64E115A49F6F7F3A2B45D2FBF245B4E0C(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::set_AutoRefreeze(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DashboardCommand_set_AutoRefreeze_mDBF0F80BD4BD435F0D43E66A51093B41778B3AA1 (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, bool ___value0, const RuntimeMethod* method)
{
	ManagerSettings_t6EEBD6C5F66E722A7D437D19F89E1766A66DDF3D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var config = worldLockingManager.Settings;
		WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_0;
		L_0 = DashboardCommand_get_worldLockingManager_m8EC90D4A67FE787C18EE6E64DB211E4CCC1AD3A9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ManagerSettings_t6EEBD6C5F66E722A7D437D19F89E1766A66DDF3D  L_1;
		L_1 = WorldLockingManager_get_Settings_mEF05AC5F0675B6DF568BF4169312967E6F0242FA(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// config.AutoRefreeze = value;
		bool L_2 = ___value0;
		(&V_0)->set_AutoRefreeze_3(L_2);
		// worldLockingManager.Settings = config;
		WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_3;
		L_3 = DashboardCommand_get_worldLockingManager_m8EC90D4A67FE787C18EE6E64DB211E4CCC1AD3A9(__this, /*hidden argument*/NULL);
		ManagerSettings_t6EEBD6C5F66E722A7D437D19F89E1766A66DDF3D  L_4 = V_0;
		NullCheck(L_3);
		WorldLockingManager_set_Settings_m0154DBACB2439224DE4B6361D8369E4BAB86AB45(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::Refreeze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DashboardCommand_Refreeze_m79D581A6F689F3A716AA71CE6B2A78F7249D25C2 (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFragmentManager_t3EDCE810CF030A6E0896FD6F6B10FF8645B94E11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// worldLockingManager.FragmentManager.Refreeze();
		WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_0;
		L_0 = DashboardCommand_get_worldLockingManager_m8EC90D4A67FE787C18EE6E64DB211E4CCC1AD3A9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = WorldLockingManager_get_FragmentManager_m53A595B9335BB6FEB3C272CF5C312E4BFA349A8E_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(10 /* System.Boolean Microsoft.MixedReality.WorldLocking.Core.IFragmentManager::Refreeze() */, IFragmentManager_t3EDCE810CF030A6E0896FD6F6B10FF8645B94E11_il2cpp_TypeInfo_var, L_1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::Merge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DashboardCommand_Merge_m234840BF7D4FFEBCA27DE05CE739547A2C7C1161 (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFragmentManager_t3EDCE810CF030A6E0896FD6F6B10FF8645B94E11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// worldLockingManager.FragmentManager.Merge();
		WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_0;
		L_0 = DashboardCommand_get_worldLockingManager_m8EC90D4A67FE787C18EE6E64DB211E4CCC1AD3A9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = WorldLockingManager_get_FragmentManager_m53A595B9335BB6FEB3C272CF5C312E4BFA349A8E_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean Microsoft.MixedReality.WorldLocking.Core.IFragmentManager::Merge() */, IFragmentManager_t3EDCE810CF030A6E0896FD6F6B10FF8645B94E11_il2cpp_TypeInfo_var, L_1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DashboardCommand_Save_m163C9BADAE9D994930791D2702620CB2015220ED (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, const RuntimeMethod* method)
{
	{
		// worldLockingManager.Save();
		WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_0;
		L_0 = DashboardCommand_get_worldLockingManager_m8EC90D4A67FE787C18EE6E64DB211E4CCC1AD3A9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		WorldLockingManager_Save_m8F298177AD345A22727519DB0BD5E0ECD55D8A4B(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DashboardCommand_Load_mEC1DA7A44B5FEBD05EBEC9A16C13B4FD1D092F22 (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, const RuntimeMethod* method)
{
	{
		// worldLockingManager.Load();
		WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_0;
		L_0 = DashboardCommand_get_worldLockingManager_m8EC90D4A67FE787C18EE6E64DB211E4CCC1AD3A9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		WorldLockingManager_Load_mF472D34FB2C2C16092A3A5A512EEE07FB1789354(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DashboardCommand_Reset_mD142B98746B5C6A8CA4AF8B8EA375019430254DE (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, const RuntimeMethod* method)
{
	{
		// worldLockingManager.Reset();
		WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_0;
		L_0 = DashboardCommand_get_worldLockingManager_m8EC90D4A67FE787C18EE6E64DB211E4CCC1AD3A9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		WorldLockingManager_Reset_mB018309D3E41EE23BE22D306999736D5C30719A7(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.DashboardCommand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DashboardCommand__ctor_mE9CEC84B62559DDFEC89F6F7945946D3868C869E (DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DashboardTagalong::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DashboardTagalong_Start_mD9CF2127F462311EB96D4C166DF1C5EEDE489A3B (DashboardTagalong_t512CB53559A431CDDAE81E9A0725BF9E885CEA5A * __this, const RuntimeMethod* method)
{
	{
		// originalPosition = transform.localPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_0, /*hidden argument*/NULL);
		__this->set_originalPosition_6(L_1);
		// originalRotation = transform.localRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_2, /*hidden argument*/NULL);
		__this->set_originalRotation_7(L_3);
		// currentRotation = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		__this->set_currentRotation_8(L_4);
		// }
		return;
	}
}
// System.Void DashboardTagalong::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DashboardTagalong_Update_m5911120358E28B4128097EB1041EF88D84C82D9D (DashboardTagalong_t512CB53559A431CDDAE81E9A0725BF9E885CEA5A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// Vector3 camPosition = Camera.main.transform.position; // GazeManager.Instance.Stabilizer.StablePosition;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// Quaternion camRotation = Camera.main.transform.rotation; // GazeManager.Instance.Stabilizer.StableRotation;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3;
		L_3 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// float cameraAngle = camRotation.eulerAngles.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_1), /*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		V_2 = L_7;
		// float currentAngle = currentRotation.eulerAngles.y;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_8 = __this->get_address_of_currentRotation_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_y_3();
		// float diffAngle = currentAngle - cameraAngle;
		float L_11 = V_2;
		V_3 = ((float)il2cpp_codegen_subtract((float)L_10, (float)L_11));
		goto IL_004a;
	}

IL_0042:
	{
		// while (diffAngle > 180) diffAngle -= 360;
		float L_12 = V_3;
		V_3 = ((float)il2cpp_codegen_subtract((float)L_12, (float)(360.0f)));
	}

IL_004a:
	{
		// while (diffAngle > 180) diffAngle -= 360;
		float L_13 = V_3;
		if ((((float)L_13) > ((float)(180.0f))))
		{
			goto IL_0042;
		}
	}
	{
		goto IL_005c;
	}

IL_0054:
	{
		// while (diffAngle < -180) diffAngle += 360;
		float L_14 = V_3;
		V_3 = ((float)il2cpp_codegen_add((float)L_14, (float)(360.0f)));
	}

IL_005c:
	{
		// while (diffAngle < -180) diffAngle += 360;
		float L_15 = V_3;
		if ((((float)L_15) < ((float)(-180.0f))))
		{
			goto IL_0054;
		}
	}
	{
		// diffAngle = Math.Min(diffAngle, maxAngle);
		float L_16 = V_3;
		float L_17 = __this->get_maxAngle_4();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_18;
		L_18 = Math_Min_mED21323DC72FBF9A825FD4210D4B9D693CE87FCF(L_16, L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		// diffAngle = Math.Max(diffAngle, -maxAngle);
		float L_19 = V_3;
		float L_20 = __this->get_maxAngle_4();
		float L_21;
		L_21 = Math_Max_mEB87839DA28310AE4CB81A94D551874CFC2B1247(L_19, ((-L_20)), /*hidden argument*/NULL);
		V_3 = L_21;
		// float targetAngle = cameraAngle + diffAngle;
		float L_22 = V_2;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add((float)L_22, (float)L_23));
		// Quaternion targetRotation = Quaternion.Euler(0, targetAngle, 0);
		float L_24 = V_4;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_25;
		L_25 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), L_24, (0.0f), /*hidden argument*/NULL);
		V_5 = L_25;
		// currentRotation = Quaternion.Slerp(currentRotation, targetRotation, Time.unscaledDeltaTime / lerpTime);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_26 = __this->get_currentRotation_8();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_27 = V_5;
		float L_28;
		L_28 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84(/*hidden argument*/NULL);
		float L_29 = __this->get_lerpTime_5();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_30;
		L_30 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_26, L_27, ((float)((float)L_28/(float)L_29)), /*hidden argument*/NULL);
		__this->set_currentRotation_8(L_30);
		// transform.position = camPosition + currentRotation * originalPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_33 = __this->get_currentRotation_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = __this->get_originalPosition_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_33, L_34, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_32, L_35, /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_31, L_36, /*hidden argument*/NULL);
		// transform.rotation = currentRotation * originalRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_38 = __this->get_currentRotation_8();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_39 = __this->get_originalRotation_7();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_40;
		L_40 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_38, L_39, /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_37, L_40, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DashboardTagalong::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DashboardTagalong__ctor_m2FA5062570FB91C2A1FF2AB506E66F809D2B4EB8 (DashboardTagalong_t512CB53559A431CDDAE81E9A0725BF9E885CEA5A * __this, const RuntimeMethod* method)
{
	{
		// public float maxAngle = 20.0f;
		__this->set_maxAngle_4((20.0f));
		// public float lerpTime = 0.1f;
		__this->set_lerpTime_5((0.100000001f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.WorldLocking.Examples.DashboardUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DashboardUI_Start_m0C31D6ABCA754BBB12BD9B77C602CDEE261FC83C (DashboardUI_t5FF56233F29A77F17392EE883CD15F1F90635EFE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Physics.IgnoreLayerCollision(0, 5, true);
		Physics_IgnoreLayerCollision_mD8EE9AF6DAD4F6AC89455F4E015F51A19DC70B93(0, 5, (bool)1, /*hidden argument*/NULL);
		// if (dashboardCommand == null)
		DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * L_0 = __this->get_dashboardCommand_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// throw new System.Exception("DashboardUI missing required DashboardCommand");
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5E13FD80AE156319733518F967D5FCCF61262015)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DashboardUI_Start_m0C31D6ABCA754BBB12BD9B77C602CDEE261FC83C_RuntimeMethod_var)));
	}

IL_0021:
	{
		// if (WorldLockingManager.GetInstance() == null)
		WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_3;
		L_3 = WorldLockingManager_GetInstance_m1A558A9E776F5A09360EE417191DF29163CE4B05(/*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		// throw new System.Exception("DashboardUI missing required WorldLockingManager");
		Exception_t * L_4 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2BAE22936E965B20132F77887CB50103E66384EB)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DashboardUI_Start_m0C31D6ABCA754BBB12BD9B77C602CDEE261FC83C_RuntimeMethod_var)));
	}

IL_0033:
	{
		// if (!dashboardCommand.HasSpatialMap)
		DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * L_5 = __this->get_dashboardCommand_4();
		NullCheck(L_5);
		bool L_6;
		L_6 = DashboardCommand_get_HasSpatialMap_m7F67FFF1DF1E889C7F2F639ACF3210CADBB7E1DB(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0051;
		}
	}
	{
		// CheckBoxShowSpatMap.gameObject.SetActive(false);
		Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * L_7 = __this->get_CheckBoxShowSpatMap_10();
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.DashboardUI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DashboardUI_Update_m04E7A5B468EAE5FF5CCB4BADF5EA39CA90472413 (DashboardUI_t5FF56233F29A77F17392EE883CD15F1F90635EFE * __this, const RuntimeMethod* method)
{
	WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * V_0 = NULL;
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * G_B2_0 = NULL;
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * G_B3_1 = NULL;
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * G_B5_0 = NULL;
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * G_B6_1 = NULL;
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * G_B8_0 = NULL;
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * G_B9_1 = NULL;
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * G_B11_0 = NULL;
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * G_B12_1 = NULL;
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * G_B14_0 = NULL;
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * G_B15_1 = NULL;
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * G_B17_0 = NULL;
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * G_B18_1 = NULL;
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * G_B20_0 = NULL;
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * G_B19_0 = NULL;
	int32_t G_B21_0 = 0;
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * G_B21_1 = NULL;
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * G_B23_0 = NULL;
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * G_B24_1 = NULL;
	{
		// var worldLockingManager = WorldLockingManager.GetInstance();
		WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_0;
		L_0 = WorldLockingManager_GetInstance_m1A558A9E776F5A09360EE417191DF29163CE4B05(/*hidden argument*/NULL);
		V_0 = L_0;
		// ButtonRefreeze.IsEnabled = worldLockingManager.RefreezeIndicated;
		Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * L_1 = __this->get_ButtonRefreeze_5();
		WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = WorldLockingManager_get_RefreezeIndicated_mBE2B574CEEB43771FD1569A7B21E0B680993DB9B(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(18 /* System.Void Microsoft.MixedReality.Toolkit.UI.Interactable::set_IsEnabled(System.Boolean) */, L_1, L_3);
		// ButtonMerge.IsEnabled = worldLockingManager.MergeIndicated;
		Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * L_4 = __this->get_ButtonMerge_6();
		WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = WorldLockingManager_get_MergeIndicated_m94F2E5F3B1EDC2EF793A6D2B944DCE874711514A(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< bool >::Invoke(18 /* System.Void Microsoft.MixedReality.Toolkit.UI.Interactable::set_IsEnabled(System.Boolean) */, L_4, L_6);
		// ButtonSave.IsEnabled = !dashboardCommand.AutoSave;
		Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * L_7 = __this->get_ButtonSave_15();
		DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * L_8 = __this->get_dashboardCommand_4();
		NullCheck(L_8);
		bool L_9;
		L_9 = DashboardCommand_get_AutoSave_mB7636ACD2411724E2FEB5B0349B4D608610EEB5B(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< bool >::Invoke(18 /* System.Void Microsoft.MixedReality.Toolkit.UI.Interactable::set_IsEnabled(System.Boolean) */, L_7, (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0));
		// ButtonLoad.IsEnabled = !dashboardCommand.AutoSave;
		Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * L_10 = __this->get_ButtonLoad_16();
		DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * L_11 = __this->get_dashboardCommand_4();
		NullCheck(L_11);
		bool L_12;
		L_12 = DashboardCommand_get_AutoSave_mB7636ACD2411724E2FEB5B0349B4D608610EEB5B(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker1< bool >::Invoke(18 /* System.Void Microsoft.MixedReality.Toolkit.UI.Interactable::set_IsEnabled(System.Boolean) */, L_10, (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0));
		// CheckBoxShowAnchors.CurrentDimension = dashboardCommand.AnchorVisualization ? 1 : 0;
		Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * L_13 = __this->get_CheckBoxShowAnchors_7();
		DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * L_14 = __this->get_dashboardCommand_4();
		NullCheck(L_14);
		bool L_15;
		L_15 = DashboardCommand_get_AnchorVisualization_mBD4D03F05266D13A69816670177E6A906EF6126B(L_14, /*hidden argument*/NULL);
		G_B1_0 = L_13;
		if (L_15)
		{
			G_B2_0 = L_13;
			goto IL_0070;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0071;
	}

IL_0070:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0071:
	{
		NullCheck(G_B3_1);
		Interactable_set_CurrentDimension_mBD7C3BAEED6D77CC22359E96206B678F6BC6F941(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// CheckBoxShowInfo.CurrentDimension = dashboardCommand.InfoEnabled ? 1 : 0;
		Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * L_16 = __this->get_CheckBoxShowInfo_8();
		DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * L_17 = __this->get_dashboardCommand_4();
		NullCheck(L_17);
		bool L_18;
		L_18 = DashboardCommand_get_InfoEnabled_mD6F8279087DDC49654BF0819BD73377BF30D935D(L_17, /*hidden argument*/NULL);
		G_B4_0 = L_16;
		if (L_18)
		{
			G_B5_0 = L_16;
			goto IL_008c;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_008d;
	}

IL_008c:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_008d:
	{
		NullCheck(G_B6_1);
		Interactable_set_CurrentDimension_mBD7C3BAEED6D77CC22359E96206B678F6BC6F941(G_B6_1, G_B6_0, /*hidden argument*/NULL);
		// CheckBoxShowMetrics.CurrentDimension = dashboardCommand.MetricsEnabled ? 1 : 0;
		Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * L_19 = __this->get_CheckBoxShowMetrics_9();
		DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * L_20 = __this->get_dashboardCommand_4();
		NullCheck(L_20);
		bool L_21;
		L_21 = DashboardCommand_get_MetricsEnabled_m168A26182700D6559624406EC4ACDE2C2B905A28(L_20, /*hidden argument*/NULL);
		G_B7_0 = L_19;
		if (L_21)
		{
			G_B8_0 = L_19;
			goto IL_00a8;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_00a9:
	{
		NullCheck(G_B9_1);
		Interactable_set_CurrentDimension_mBD7C3BAEED6D77CC22359E96206B678F6BC6F941(G_B9_1, G_B9_0, /*hidden argument*/NULL);
		// CheckBoxShowSpatMap.CurrentDimension = dashboardCommand.SpatialMapDisplayEnabled ? 1 : 0;
		Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * L_22 = __this->get_CheckBoxShowSpatMap_10();
		DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * L_23 = __this->get_dashboardCommand_4();
		NullCheck(L_23);
		bool L_24;
		L_24 = DashboardCommand_get_SpatialMapDisplayEnabled_m5342971311A3D69D034D6195A267249BED3E3977(L_23, /*hidden argument*/NULL);
		G_B10_0 = L_22;
		if (L_24)
		{
			G_B11_0 = L_22;
			goto IL_00c4;
		}
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_0;
		goto IL_00c5;
	}

IL_00c4:
	{
		G_B12_0 = 1;
		G_B12_1 = G_B11_0;
	}

IL_00c5:
	{
		NullCheck(G_B12_1);
		Interactable_set_CurrentDimension_mBD7C3BAEED6D77CC22359E96206B678F6BC6F941(G_B12_1, G_B12_0, /*hidden argument*/NULL);
		// CheckBoxManagerEnabled.CurrentDimension = dashboardCommand.ManagerEnabled ? 1 : 0;
		Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * L_25 = __this->get_CheckBoxManagerEnabled_11();
		DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * L_26 = __this->get_dashboardCommand_4();
		NullCheck(L_26);
		bool L_27;
		L_27 = DashboardCommand_get_ManagerEnabled_m5C461A17814A86A607B33D87CC0715043A261AF4(L_26, /*hidden argument*/NULL);
		G_B13_0 = L_25;
		if (L_27)
		{
			G_B14_0 = L_25;
			goto IL_00e0;
		}
	}
	{
		G_B15_0 = 0;
		G_B15_1 = G_B13_0;
		goto IL_00e1;
	}

IL_00e0:
	{
		G_B15_0 = 1;
		G_B15_1 = G_B14_0;
	}

IL_00e1:
	{
		NullCheck(G_B15_1);
		Interactable_set_CurrentDimension_mBD7C3BAEED6D77CC22359E96206B678F6BC6F941(G_B15_1, G_B15_0, /*hidden argument*/NULL);
		// CheckBoxAutoMerge.CurrentDimension = dashboardCommand.AutoMerge ? 1 : 0;
		Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * L_28 = __this->get_CheckBoxAutoMerge_12();
		DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * L_29 = __this->get_dashboardCommand_4();
		NullCheck(L_29);
		bool L_30;
		L_30 = DashboardCommand_get_AutoMerge_m9C7142C9E924AF3C9FA0BCC5841215646E3EDA4B(L_29, /*hidden argument*/NULL);
		G_B16_0 = L_28;
		if (L_30)
		{
			G_B17_0 = L_28;
			goto IL_00fc;
		}
	}
	{
		G_B18_0 = 0;
		G_B18_1 = G_B16_0;
		goto IL_00fd;
	}

IL_00fc:
	{
		G_B18_0 = 1;
		G_B18_1 = G_B17_0;
	}

IL_00fd:
	{
		NullCheck(G_B18_1);
		Interactable_set_CurrentDimension_mBD7C3BAEED6D77CC22359E96206B678F6BC6F941(G_B18_1, G_B18_0, /*hidden argument*/NULL);
		// CheckBoxAutoSave.CurrentDimension = dashboardCommand.AutoSave ? 1 : 0;
		Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * L_31 = __this->get_CheckBoxAutoSave_13();
		DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * L_32 = __this->get_dashboardCommand_4();
		NullCheck(L_32);
		bool L_33;
		L_33 = DashboardCommand_get_AutoSave_mB7636ACD2411724E2FEB5B0349B4D608610EEB5B(L_32, /*hidden argument*/NULL);
		G_B19_0 = L_31;
		if (L_33)
		{
			G_B20_0 = L_31;
			goto IL_0118;
		}
	}
	{
		G_B21_0 = 0;
		G_B21_1 = G_B19_0;
		goto IL_0119;
	}

IL_0118:
	{
		G_B21_0 = 1;
		G_B21_1 = G_B20_0;
	}

IL_0119:
	{
		NullCheck(G_B21_1);
		Interactable_set_CurrentDimension_mBD7C3BAEED6D77CC22359E96206B678F6BC6F941(G_B21_1, G_B21_0, /*hidden argument*/NULL);
		// CheckBoxAutoRefreeze.CurrentDimension = dashboardCommand.AutoRefreeze ? 1 : 0;
		Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * L_34 = __this->get_CheckBoxAutoRefreeze_14();
		DashboardCommand_tA67ACCF95CEBF4C1A0F17C33A4BE3690004F0F19 * L_35 = __this->get_dashboardCommand_4();
		NullCheck(L_35);
		bool L_36;
		L_36 = DashboardCommand_get_AutoRefreeze_m5F542CE70D7E2C3468C7FF2A737E9267C6038FBE(L_35, /*hidden argument*/NULL);
		G_B22_0 = L_34;
		if (L_36)
		{
			G_B23_0 = L_34;
			goto IL_0134;
		}
	}
	{
		G_B24_0 = 0;
		G_B24_1 = G_B22_0;
		goto IL_0135;
	}

IL_0134:
	{
		G_B24_0 = 1;
		G_B24_1 = G_B23_0;
	}

IL_0135:
	{
		NullCheck(G_B24_1);
		Interactable_set_CurrentDimension_mBD7C3BAEED6D77CC22359E96206B678F6BC6F941(G_B24_1, G_B24_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.DashboardUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DashboardUI__ctor_mE356651C3DF7247098E07E30C0E6A4BB7A671826 (DashboardUI_t5FF56233F29A77F17392EE883CD15F1F90635EFE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.WorldLocking.Examples.FallOut::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FallOut_Update_mFB849729F87B784CE6B645A4EABA757B9776EE9F (FallOut_t2D5A2E64A1587E18E8602B5982785629786D8B4A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float objHeight = transform.position.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		// float camHeight = Camera.main.transform.position.y;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3;
		L_3 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_3();
		V_0 = L_6;
		// if (objHeight < camHeight + KillHeight)
		float L_7 = V_0;
		float L_8 = __this->get_KillHeight_4();
		if ((!(((float)L_2) < ((float)((float)il2cpp_codegen_add((float)L_7, (float)L_8))))))
		{
			goto IL_003a;
		}
	}
	{
		// GameObject.Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_9, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.FallOut::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FallOut__ctor_mFF244328EFCC336B15E63663313197BB59B2EA39 (FallOut_t2D5A2E64A1587E18E8602B5982785629786D8B4A * __this, const RuntimeMethod* method)
{
	{
		// public float KillHeight = -20.0f;
		__this->set_KillHeight_4((-20.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ManipulationEndedDelegate_t3F667BDD0876A1CE0E97765F48B4A6E64F182967 (ManipulationEndedDelegate_t3F667BDD0876A1CE0E97765F48B4A6E64F182967 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.ManipulationEndedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationEndedDelegate__ctor_m39F381E644BBB1853319CA77A3FA77F9808CE2CC (ManipulationEndedDelegate_t3F667BDD0876A1CE0E97765F48B4A6E64F182967 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.ManipulationEndedDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationEndedDelegate_Invoke_m88E3747EC407B560D63AE05A8366B75050AA12AC (ManipulationEndedDelegate_t3F667BDD0876A1CE0E97765F48B4A6E64F182967 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Microsoft.MixedReality.WorldLocking.Examples.ManipulationEndedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ManipulationEndedDelegate_BeginInvoke_mD102FA851FC521D67C73C0EEDE4032E35E02E283 (ManipulationEndedDelegate_t3F667BDD0876A1CE0E97765F48B4A6E64F182967 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.ManipulationEndedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationEndedDelegate_EndInvoke_m0B9FA41E6B68B13E1DCD332DC82F0B2CABFE30B6 (ManipulationEndedDelegate_t3F667BDD0876A1CE0E97765F48B4A6E64F182967 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ManipulationStartedDelegate_tDE21ED8C580CF3E861222CBD24EC9E94B925A811 (ManipulationStartedDelegate_tDE21ED8C580CF3E861222CBD24EC9E94B925A811 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.ManipulationStartedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationStartedDelegate__ctor_m8F68FF26F9547079FA57A33F1ECAD447FCDF2875 (ManipulationStartedDelegate_tDE21ED8C580CF3E861222CBD24EC9E94B925A811 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.ManipulationStartedDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationStartedDelegate_Invoke_m62C579A2C9B89D972B8CC7DE09A9132AA3D5A3E3 (ManipulationStartedDelegate_tDE21ED8C580CF3E861222CBD24EC9E94B925A811 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Microsoft.MixedReality.WorldLocking.Examples.ManipulationStartedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ManipulationStartedDelegate_BeginInvoke_m63A77784E07AD869CF1DA024CF49083F7768E2CA (ManipulationStartedDelegate_tDE21ED8C580CF3E861222CBD24EC9E94B925A811 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.ManipulationStartedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationStartedDelegate_EndInvoke_m9EF1429CE2CBF7FE1908D0C14E3B980B5956C5FA (ManipulationStartedDelegate_tDE21ED8C580CF3E861222CBD24EC9E94B925A811 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Transform Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::get_AttachRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * PhysicsBeamSample_get_AttachRoot_m5C3E1BBFF968AD689DC3F818191D3A3AC7497CB1 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	{
		// public Transform AttachRoot => attachRoot;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_attachRoot_5();
		return L_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::get_PrefabDart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PhysicsBeamSample_get_PrefabDart_m2B7EC22C750F045B0291CD14C91640462B6470BB (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject PrefabDart => prefabDart;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_prefabDart_6();
		return L_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::get_PrefabPillarFixed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PhysicsBeamSample_get_PrefabPillarFixed_mAD21584F8229E692A768AAB7FD01D2DEF1AE36E7 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject PrefabPillarFixed => prefabPillarFixed;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_prefabPillarFixed_7();
		return L_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::get_PrefabPillarDynamic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PhysicsBeamSample_get_PrefabPillarDynamic_m4CAE22DA6CE565AB8568B6145D58A7BE04172182 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject PrefabPillarDynamic => prefabPillarDynamic;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_prefabPillarDynamic_8();
		return L_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::get_PrefabBeam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PhysicsBeamSample_get_PrefabBeam_mF3FEEDF2620641D4917DA28D16BA3CFB1741284A (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject PrefabBeam => prefabBeam;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_prefabBeam_9();
		return L_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::get_PrefabWorldLockedSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PhysicsBeamSample_get_PrefabWorldLockedSphere_m5CF2CC286B202B3DFB85B584B9509FB77E17E667 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject PrefabWorldLockedSphere => prefabWorldLockedSphere;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_prefabWorldLockedSphere_10();
		return L_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::get_PrefabUnlockedSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PhysicsBeamSample_get_PrefabUnlockedSphere_mD57552F92514EEC1295E0F819A1220365AF35CE8 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject PrefabUnlockedSphere => prefabUnlockedSphere;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_prefabUnlockedSphere_11();
		return L_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::get_PrefabHybridLockedSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PhysicsBeamSample_get_PrefabHybridLockedSphere_mDA89D680C2E05DDB4D3AF23AB624238F23BF2934 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject PrefabHybridLockedSphere => prefabHybridLockedSphere;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_prefabHybridLockedSphere_12();
		return L_0;
	}
}
// UnityEngine.Material Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::get_LineMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * PhysicsBeamSample_get_LineMaterial_m759CCFF9E9BD2EB313B099A61AA0629D78873982 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	{
		// public Material LineMaterial => lineMaterial;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_lineMaterial_14();
		return L_0;
	}
}
// System.Int32 Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::ModeToIndex(Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/BuildMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhysicsBeamSample_ModeToIndex_m5FBD6E08A7FAA452A8669DCE25C8FCEA4519C4BD (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___mode0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0024;
			}
			case 1:
			{
				goto IL_0026;
			}
			case 2:
			{
				goto IL_0028;
			}
			case 3:
			{
				goto IL_002a;
			}
			case 4:
			{
				goto IL_002a;
			}
			case 5:
			{
				goto IL_002c;
			}
			case 6:
			{
				goto IL_002e;
			}
		}
	}
	{
		goto IL_0030;
	}

IL_0024:
	{
		// return 0;
		return 0;
	}

IL_0026:
	{
		// return 1;
		return 1;
	}

IL_0028:
	{
		// return 2;
		return 2;
	}

IL_002a:
	{
		// return 3;
		return 3;
	}

IL_002c:
	{
		// return 4;
		return 4;
	}

IL_002e:
	{
		// return 5;
		return 5;
	}

IL_0030:
	{
		// return 0;
		return 0;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_Start_m8B901301AB15F8B92CEDEE3FFB6E7F6EA5691B37 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3_m3A8BBDA4A6AF0F54B542138B15B016407A04E908_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E23F63B627BF05B2FE4783B4642D80FB13ADAAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71AADFF9114252C5299242960C0AD7C5778B2AF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A9D731F99D122FA5CB582F5991B8AD990BE70E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB67505E7C73A4510B3B2D790BCB4185A91253C89);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// base.Start();
		InputSystemGlobalHandlerListener_Start_mB95BFCFEB3717C0CA1304E7FF18A1ED0C73D67BB(__this, /*hidden argument*/NULL);
		// radioSet = gameObject.GetComponent<InteractableToggleCollection>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3 * L_1;
		L_1 = GameObject_GetComponent_TisInteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3_m3A8BBDA4A6AF0F54B542138B15B016407A04E908(L_0, /*hidden argument*/GameObject_GetComponent_TisInteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3_m3A8BBDA4A6AF0F54B542138B15B016407A04E908_RuntimeMethod_var);
		__this->set_radioSet_15(L_1);
		// SetupLineRenderer();
		PhysicsBeamSample_SetupLineRenderer_m474D0D78DEC25777BE2C6CA10F08503F8C91D072(__this, /*hidden argument*/NULL);
		// SyncRadioSet();
		PhysicsBeamSample_SyncRadioSet_m19878F05F81FB2924AFEF342ADC321ED6279CB46(__this, /*hidden argument*/NULL);
		// int pillarLayer = LayerMask.NameToLayer("Pillared");
		int32_t L_2;
		L_2 = LayerMask_NameToLayer_m6A2BBB60EC90F7EC48A6A91CA98149C547A04C0A(_stringLiteralB67505E7C73A4510B3B2D790BCB4185A91253C89, /*hidden argument*/NULL);
		V_0 = L_2;
		// int spatialMappingLayer = LayerMask.NameToLayer("SpatialMapping");
		int32_t L_3;
		L_3 = LayerMask_NameToLayer_m6A2BBB60EC90F7EC48A6A91CA98149C547A04C0A(_stringLiteral8A9D731F99D122FA5CB582F5991B8AD990BE70E7, /*hidden argument*/NULL);
		V_1 = L_3;
		// if (pillarLayer == -1)
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_0047;
		}
	}
	{
		// Debug.LogWarning("Undefined layer 'Pillared', spatial mapping objects might interfere with pillars and beams");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral5E23F63B627BF05B2FE4783B4642D80FB13ADAAE, /*hidden argument*/NULL);
	}

IL_0047:
	{
		// if (spatialMappingLayer == -1)
		int32_t L_5 = V_1;
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_0055;
		}
	}
	{
		// Debug.LogWarning("Undefined layer 'SpatialMapping', spatial mapping objects might interfere with pillars and beams");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral71AADFF9114252C5299242960C0AD7C5778B2AF6, /*hidden argument*/NULL);
	}

IL_0055:
	{
		// if (pillarLayer != -1 && spatialMappingLayer != -1)
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_0065;
		}
	}
	{
		// Physics.IgnoreLayerCollision(pillarLayer, spatialMappingLayer, true);
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		Physics_IgnoreLayerCollision_mD8EE9AF6DAD4F6AC89455F4E015F51A19DC70B93(L_8, L_9, (bool)1, /*hidden argument*/NULL);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_Update_m8A0F16C8DDEF0A8C98E35CF7740479A4C48E8EF2 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// switch (mode)
		int32_t L_0 = __this->get_mode_16();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_001c;
		}
	}
	{
		// ShowBeam();
		PhysicsBeamSample_ShowBeam_m15DB022C9BB815BDB30E4B649C19A99749777F5D(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0016:
	{
		// ShowDartArc();
		PhysicsBeamSample_ShowDartArc_m0B70F977BFF24E82D8C96BDE883AC01A911B3166(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::SyncRadioSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_SyncRadioSet_m19878F05F81FB2924AFEF342ADC321ED6279CB46 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	{
		// radioSet.CurrentIndex = ModeToIndex(mode);
		InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3 * L_0 = __this->get_radioSet_15();
		int32_t L_1 = __this->get_mode_16();
		int32_t L_2;
		L_2 = PhysicsBeamSample_ModeToIndex_m5FBD6E08A7FAA452A8669DCE25C8FCEA4519C4BD(__this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		InteractableToggleCollection_set_CurrentIndex_m18A9804577AE857F48A57F9FDA08C23F88FA43B1(L_0, L_2, /*hidden argument*/NULL);
		// radioSet.SetSelection(radioSet.CurrentIndex);
		InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3 * L_3 = __this->get_radioSet_15();
		InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3 * L_4 = __this->get_radioSet_15();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InteractableToggleCollection_get_CurrentIndex_mF94561CF17520C86F574AA6A9F4189975A56540E_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		InteractableToggleCollection_SetSelection_mD63AD809A40AD0CC9B2176FBF3D3F573B66CCC08(L_3, L_5, (bool)0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::HandleHit(Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/RayHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_HandleHit_m68DC4CCDCE205AC3A186981E5FFCC01A32CE2247 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  ___rayHit0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// switch (mode)
		int32_t L_0 = __this->get_mode_16();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0059;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_0032;
			}
			case 3:
			{
				goto IL_003a;
			}
			case 4:
			{
				goto IL_0042;
			}
			case 5:
			{
				goto IL_004a;
			}
			case 6:
			{
				goto IL_0052;
			}
		}
	}
	{
		return;
	}

IL_002a:
	{
		// DropDart(rayHit);
		RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  L_2 = ___rayHit0;
		PhysicsBeamSample_DropDart_m7BA05CAA05F2BEC9BA012E0BF78E68F47CE3FADE(__this, L_2, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0032:
	{
		// DropPillar(rayHit);
		RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  L_3 = ___rayHit0;
		PhysicsBeamSample_DropPillar_m9CAD6B7F73900D20B3E2A74AC87CFF8EC05D1CF8(__this, L_3, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_003a:
	{
		// StartBeam(rayHit);
		RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  L_4 = ___rayHit0;
		PhysicsBeamSample_StartBeam_mFD8F0B4A7D0749254FCD7DCE90BF09A15F44F278(__this, L_4, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0042:
	{
		// EndBeam(rayHit);
		RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  L_5 = ___rayHit0;
		PhysicsBeamSample_EndBeam_m947DF3655C0E627038CB6C3819F1A784A3714BED(__this, L_5, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_004a:
	{
		// PinSphere(rayHit);
		RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  L_6 = ___rayHit0;
		PhysicsBeamSample_PinSphere_m1D08EEAA600950DCA7A1ACFCF78B30E3D160FDC9(__this, L_6, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0052:
	{
		// RemoveObject(rayHit);
		RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  L_7 = ___rayHit0;
		PhysicsBeamSample_RemoveObject_mA3F9D860EADA7FD1455AC3B57DBA83B7638C622F(__this, L_7, /*hidden argument*/NULL);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::DropDart(Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/RayHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_DropDart_m7BA05CAA05F2BEC9BA012E0BF78E68F47CE3FADE (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  ___rayHit0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAdjusterFixed_tA49EDC9CBDAFEBD3F101CBEB45425FA4F2865E7E_m16FFB7FEC5E38A1EA9C695F7C356086B435A22FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAdjusterMoving_t656CFCAD82441648E53F023C66612D9F7FBE0683_mEA354BE90AE2D592090267870390B4A4BBB6B47E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_5;
	memset((&V_5), 0, sizeof(V_5));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_6 = NULL;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * V_7 = NULL;
	{
		// if (PrefabDart != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = PhysicsBeamSample_get_PrefabDart_m2B7EC22C750F045B0291CD14C91640462B6470BB_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00bf;
		}
	}
	{
		// Vector3 source = rayHit.rayStart;
		RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  L_2 = ___rayHit0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = L_2.get_rayStart_0();
		V_0 = L_3;
		// Vector3 target = rayHit.hitPosition;
		RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  L_4 = ___rayHit0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = L_4.get_hitPosition_1();
		V_1 = L_5;
		// VelocityTime vt = ComputeArc(source, target);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_1;
		VelocityTime_t8F44324796F4B7FF1B951924D34F7B4FA33FF326  L_8;
		L_8 = PhysicsBeamSample_ComputeArc_m5B04DF37C13A3CAE22E52E39B19F7681301CBFBC(__this, L_6, L_7, /*hidden argument*/NULL);
		// Vector3 velocity = vt.v;
		VelocityTime_t8F44324796F4B7FF1B951924D34F7B4FA33FF326  L_9 = L_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = L_9.get_v_0();
		V_2 = L_10;
		// float t = vt.t;
		float L_11 = L_9.get_t_1();
		// if (t > 0)
		if ((!(((float)L_11) > ((float)(0.0f)))))
		{
			goto IL_00bf;
		}
	}
	{
		// Vector3 startDir = target - source;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_12, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		// startDir.y = 0;
		(&V_3)->set_y_3((0.0f));
		// startDir.Normalize();
		Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), /*hidden argument*/NULL);
		// Vector3 right = Vector3.Cross(Vector3.up, startDir);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4(L_15, L_16, /*hidden argument*/NULL);
		V_4 = L_17;
		// Quaternion startRot = Quaternion.LookRotation(startDir, right);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_4;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20;
		L_20 = Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1(L_18, L_19, /*hidden argument*/NULL);
		V_5 = L_20;
		// var newObj = GameObject.Instantiate(PrefabDart, source, startRot, AttachRoot);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = PhysicsBeamSample_get_PrefabDart_m2B7EC22C750F045B0291CD14C91640462B6470BB_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23 = V_5;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = PhysicsBeamSample_get_AttachRoot_m5C3E1BBFF968AD689DC3F818191D3A3AC7497CB1_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_21, L_22, L_23, L_24, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		V_6 = L_25;
		// var rigidBody = newObj.GetComponent<Rigidbody>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = V_6;
		NullCheck(L_26);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_27;
		L_27 = GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354(L_26, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		V_7 = L_27;
		// if (rigidBody != null)
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_28 = V_7;
		bool L_29;
		L_29 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_28, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00aa;
		}
	}
	{
		// rigidBody.AddForce(velocity, ForceMode.VelocityChange);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_30 = V_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = V_2;
		NullCheck(L_30);
		Rigidbody_AddForce_m78B9D94F505E19F3C63461362AD6DE7EA0836700(L_30, L_31, 2, /*hidden argument*/NULL);
		// newObj.AddComponent<AdjusterMoving>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = V_6;
		NullCheck(L_32);
		AdjusterMoving_t656CFCAD82441648E53F023C66612D9F7FBE0683 * L_33;
		L_33 = GameObject_AddComponent_TisAdjusterMoving_t656CFCAD82441648E53F023C66612D9F7FBE0683_mEA354BE90AE2D592090267870390B4A4BBB6B47E(L_32, /*hidden argument*/GameObject_AddComponent_TisAdjusterMoving_t656CFCAD82441648E53F023C66612D9F7FBE0683_mEA354BE90AE2D592090267870390B4A4BBB6B47E_RuntimeMethod_var);
		// }
		return;
	}

IL_00aa:
	{
		// newObj.transform.position = target;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = V_6;
		NullCheck(L_34);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_34, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = V_1;
		NullCheck(L_35);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_35, L_36, /*hidden argument*/NULL);
		// newObj.AddComponent<AdjusterFixed>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = V_6;
		NullCheck(L_37);
		AdjusterFixed_tA49EDC9CBDAFEBD3F101CBEB45425FA4F2865E7E * L_38;
		L_38 = GameObject_AddComponent_TisAdjusterFixed_tA49EDC9CBDAFEBD3F101CBEB45425FA4F2865E7E_m16FFB7FEC5E38A1EA9C695F7C356086B435A22FC(L_37, /*hidden argument*/GameObject_AddComponent_TisAdjusterFixed_tA49EDC9CBDAFEBD3F101CBEB45425FA4F2865E7E_m16FFB7FEC5E38A1EA9C695F7C356086B435A22FC_RuntimeMethod_var);
	}

IL_00bf:
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer> Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::FindActivePointers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E * PhysicsBeamSample_FindActivePointers_m089845C86AD0DFD4041BA2B372D2E237167B9C6A (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8BD89A610860F51ACE6A506C5A08FE6985B52F28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m573A880FC0E7571C5CA76ED316166EA2D4EF4C5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mEA6E4D9F75E5071D43A8E01F751ADC4BDF95E54C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m65BF4DCFFA4B50A7750E9C10FAB56E8F8DF7D5CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSource_tD261D929DA8A0944B1219F9D547B6A242AFF7FA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_t7F0507B7CE0C9CDF14089C77B4F5A079AE031B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC71E73709B0A23EAA2DDFEFA2B0BDE676B33BC42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFA3D6FC02C5D3E8D60430F40FD47778E33A7B912_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkit_GetService_TisIMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_m330D38E8B3326095CEBD76787F0985C8F6A82D39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Enumerator_t25AA8A27379794BCEB27B5E997A36A120A989886  V_2;
	memset((&V_2), 0, sizeof(V_2));
	IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<IMixedRealityPointer> activePointers = new List<IMixedRealityPointer>();
		List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E * L_0 = (List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E *)il2cpp_codegen_object_new(List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E_il2cpp_TypeInfo_var);
		List_1__ctor_mFA3D6FC02C5D3E8D60430F40FD47778E33A7B912(L_0, /*hidden argument*/List_1__ctor_mFA3D6FC02C5D3E8D60430F40FD47778E33A7B912_RuntimeMethod_var);
		V_0 = L_0;
		// var inputSystem = MixedRealityToolkit.Instance.GetService<IMixedRealityInputSystem>();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE * L_1;
		L_1 = MixedRealityToolkit_get_Instance_m476E2053BA79D9D8A2F8941441AE2AE1D656B8F3_inline(/*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = MixedRealityToolkit_GetService_TisIMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_m330D38E8B3326095CEBD76787F0985C8F6A82D39(L_1, (String_t*)NULL, (bool)1, /*hidden argument*/MixedRealityToolkit_GetService_TisIMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_m330D38E8B3326095CEBD76787F0985C8F6A82D39_RuntimeMethod_var);
		V_1 = L_2;
		// if (inputSystem != null)
		RuntimeObject* L_3 = V_1;
		if (!L_3)
		{
			goto IL_007c;
		}
	}
	{
		// var detectedInputSources = inputSystem.DetectedInputSources;
		RuntimeObject* L_4 = V_1;
		NullCheck(L_4);
		HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 * L_5;
		L_5 = InterfaceFuncInvoker0< HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 * >::Invoke(4 /* System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource> Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_DetectedInputSources() */, IMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_il2cpp_TypeInfo_var, L_4);
		// foreach (var inputSource in detectedInputSources)
		NullCheck(L_5);
		Enumerator_t25AA8A27379794BCEB27B5E997A36A120A989886  L_6;
		L_6 = HashSet_1_GetEnumerator_m65BF4DCFFA4B50A7750E9C10FAB56E8F8DF7D5CB(L_5, /*hidden argument*/HashSet_1_GetEnumerator_m65BF4DCFFA4B50A7750E9C10FAB56E8F8DF7D5CB_RuntimeMethod_var);
		V_2 = L_6;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0063;
		}

IL_0024:
		{
			// foreach (var inputSource in detectedInputSources)
			RuntimeObject* L_7;
			L_7 = Enumerator_get_Current_mEA6E4D9F75E5071D43A8E01F751ADC4BDF95E54C_inline((Enumerator_t25AA8A27379794BCEB27B5E997A36A120A989886 *)(&V_2), /*hidden argument*/Enumerator_get_Current_mEA6E4D9F75E5071D43A8E01F751ADC4BDF95E54C_RuntimeMethod_var);
			// foreach (var pointer in inputSource.Pointers)
			NullCheck(L_7);
			IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F* L_8;
			L_8 = InterfaceFuncInvoker0< IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F* >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_Pointers() */, IMixedRealityInputSource_tD261D929DA8A0944B1219F9D547B6A242AFF7FA2_il2cpp_TypeInfo_var, L_7);
			V_3 = L_8;
			V_4 = 0;
			goto IL_005c;
		}

IL_0036:
		{
			// foreach (var pointer in inputSource.Pointers)
			IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F* L_9 = V_3;
			int32_t L_10 = V_4;
			NullCheck(L_9);
			int32_t L_11 = L_10;
			RuntimeObject* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
			V_5 = L_12;
			// if (pointer.IsActive && pointer.Result != null)
			RuntimeObject* L_13 = V_5;
			NullCheck(L_13);
			bool L_14;
			L_14 = InterfaceFuncInvoker0< bool >::Invoke(11 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_IsActive() */, IMixedRealityPointer_t7F0507B7CE0C9CDF14089C77B4F5A079AE031B4D_il2cpp_TypeInfo_var, L_13);
			if (!L_14)
			{
				goto IL_0056;
			}
		}

IL_0045:
		{
			RuntimeObject* L_15 = V_5;
			NullCheck(L_15);
			RuntimeObject* L_16;
			L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(22 /* Microsoft.MixedReality.Toolkit.Input.IPointerResult Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Result() */, IMixedRealityPointer_t7F0507B7CE0C9CDF14089C77B4F5A079AE031B4D_il2cpp_TypeInfo_var, L_15);
			if (!L_16)
			{
				goto IL_0056;
			}
		}

IL_004e:
		{
			// activePointers.Add(pointer);
			List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E * L_17 = V_0;
			RuntimeObject* L_18 = V_5;
			NullCheck(L_17);
			List_1_Add_mC71E73709B0A23EAA2DDFEFA2B0BDE676B33BC42(L_17, L_18, /*hidden argument*/List_1_Add_mC71E73709B0A23EAA2DDFEFA2B0BDE676B33BC42_RuntimeMethod_var);
		}

IL_0056:
		{
			int32_t L_19 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		}

IL_005c:
		{
			// foreach (var pointer in inputSource.Pointers)
			int32_t L_20 = V_4;
			IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F* L_21 = V_3;
			NullCheck(L_21);
			if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
			{
				goto IL_0036;
			}
		}

IL_0063:
		{
			// foreach (var inputSource in detectedInputSources)
			bool L_22;
			L_22 = Enumerator_MoveNext_m573A880FC0E7571C5CA76ED316166EA2D4EF4C5E((Enumerator_t25AA8A27379794BCEB27B5E997A36A120A989886 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m573A880FC0E7571C5CA76ED316166EA2D4EF4C5E_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_0024;
			}
		}

IL_006c:
		{
			IL2CPP_LEAVE(0x7C, FINALLY_006e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006e;
	}

FINALLY_006e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8BD89A610860F51ACE6A506C5A08FE6985B52F28((Enumerator_t25AA8A27379794BCEB27B5E997A36A120A989886 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m8BD89A610860F51ACE6A506C5A08FE6985B52F28_RuntimeMethod_var);
		IL2CPP_END_FINALLY(110)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(110)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7C, IL_007c)
	}

IL_007c:
	{
		// return activePointers;
		List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E * L_23 = V_0;
		return L_23;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::ShowDartArc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_ShowDartArc_m0B70F977BFF24E82D8C96BDE883AC01A911B3166 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_t7F0507B7CE0C9CDF14089C77B4F5A079AE031B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPointerResult_t016B5E61BBA35FC618DEF7E4030088A1324DEE06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m19771EC4BDF52DDFD8BC1D6856D05C8D5482F2C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD3A9CB8A7FBD13AE79C7AEBF6B32368A750F2637_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	VelocityTime_t8F44324796F4B7FF1B951924D34F7B4FA33FF326  V_6;
	memset((&V_6), 0, sizeof(V_6));
	FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7  V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// bool show = false;
		V_0 = (bool)0;
		// var activePointers = FindActivePointers();
		List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E * L_0;
		L_0 = PhysicsBeamSample_FindActivePointers_m089845C86AD0DFD4041BA2B372D2E237167B9C6A(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		// if (activePointers.Count > 0)
		List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E * L_1 = V_1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m19771EC4BDF52DDFD8BC1D6856D05C8D5482F2C1_inline(L_1, /*hidden argument*/List_1_get_Count_m19771EC4BDF52DDFD8BC1D6856D05C8D5482F2C1_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_00b8;
		}
	}
	{
		// var focusPointer = activePointers[0];
		List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E * L_3 = V_1;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = List_1_get_Item_mD3A9CB8A7FBD13AE79C7AEBF6B32368A750F2637_inline(L_3, 0, /*hidden argument*/List_1_get_Item_mD3A9CB8A7FBD13AE79C7AEBF6B32368A750F2637_RuntimeMethod_var);
		V_2 = L_4;
		// int uiLayer = LayerMask.GetMask("UI");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F);
		int32_t L_7;
		L_7 = LayerMask_GetMask_m46D2185735D02C7DEE01E3BAAF4A39F2AB46F67F(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		// if (focusPointer.Result.CurrentPointerTarget == null || ((1 << focusPointer.Result.CurrentPointerTarget.layer) & uiLayer) == 0)
		RuntimeObject* L_8 = V_2;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(22 /* Microsoft.MixedReality.Toolkit.Input.IPointerResult Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Result() */, IMixedRealityPointer_t7F0507B7CE0C9CDF14089C77B4F5A079AE031B4D_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = InterfaceFuncInvoker0< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(2 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.IPointerResult::get_CurrentPointerTarget() */, IPointerResult_t016B5E61BBA35FC618DEF7E4030088A1324DEE06_il2cpp_TypeInfo_var, L_9);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject* L_12 = V_2;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(22 /* Microsoft.MixedReality.Toolkit.Input.IPointerResult Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Result() */, IMixedRealityPointer_t7F0507B7CE0C9CDF14089C77B4F5A079AE031B4D_il2cpp_TypeInfo_var, L_12);
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = InterfaceFuncInvoker0< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(2 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.IPointerResult::get_CurrentPointerTarget() */, IPointerResult_t016B5E61BBA35FC618DEF7E4030088A1324DEE06_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		int32_t L_15;
		L_15 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_14, /*hidden argument*/NULL);
		int32_t L_16 = V_3;
		if (((int32_t)((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_15&(int32_t)((int32_t)31)))))&(int32_t)L_16)))
		{
			goto IL_00b8;
		}
	}

IL_005d:
	{
		// Vector3 rayStart = focusPointer.Rays[0].Origin;
		RuntimeObject* L_17 = V_2;
		NullCheck(L_17);
		RayStepU5BU5D_t5B0462BE188D5AF7E8FE020DC4C618AA1F4BABE0* L_18;
		L_18 = InterfaceFuncInvoker0< RayStepU5BU5D_t5B0462BE188D5AF7E8FE020DC4C618AA1F4BABE0* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Rays() */, IMixedRealityPointer_t7F0507B7CE0C9CDF14089C77B4F5A079AE031B4D_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = RayStep_get_Origin_m82A173C1E794696C462AA099BBA51DB4149AAE8D_inline((RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399 *)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		V_4 = L_19;
		// Vector3 endPoint = focusPointer.Result.Details.Point;
		RuntimeObject* L_20 = V_2;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(22 /* Microsoft.MixedReality.Toolkit.Input.IPointerResult Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Result() */, IMixedRealityPointer_t7F0507B7CE0C9CDF14089C77B4F5A079AE031B4D_il2cpp_TypeInfo_var, L_20);
		NullCheck(L_21);
		FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7  L_22;
		L_22 = InterfaceFuncInvoker0< FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7  >::Invoke(1 /* Microsoft.MixedReality.Toolkit.Physics.FocusDetails Microsoft.MixedReality.Toolkit.Input.IPointerResult::get_Details() */, IPointerResult_t016B5E61BBA35FC618DEF7E4030088A1324DEE06_il2cpp_TypeInfo_var, L_21);
		V_7 = L_22;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = FocusDetails_get_Point_m64928E75649D63E98441E757747B337430BD3BB3_inline((FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7 *)(&V_7), /*hidden argument*/NULL);
		V_5 = L_23;
		// VelocityTime vt = ComputeArc(rayStart, endPoint);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = V_5;
		VelocityTime_t8F44324796F4B7FF1B951924D34F7B4FA33FF326  L_26;
		L_26 = PhysicsBeamSample_ComputeArc_m5B04DF37C13A3CAE22E52E39B19F7681301CBFBC(__this, L_24, L_25, /*hidden argument*/NULL);
		V_6 = L_26;
		// if (vt.t > 0)
		VelocityTime_t8F44324796F4B7FF1B951924D34F7B4FA33FF326  L_27 = V_6;
		float L_28 = L_27.get_t_1();
		if ((!(((float)L_28) > ((float)(0.0f)))))
		{
			goto IL_00b8;
		}
	}
	{
		// ShowArc(rayStart, vt.v, vt.t);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = V_4;
		VelocityTime_t8F44324796F4B7FF1B951924D34F7B4FA33FF326  L_30 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = L_30.get_v_0();
		VelocityTime_t8F44324796F4B7FF1B951924D34F7B4FA33FF326  L_32 = V_6;
		float L_33 = L_32.get_t_1();
		PhysicsBeamSample_ShowArc_m12E129AC5767A242A7E5410FFB180F2B056E5506(__this, L_29, L_31, L_33, /*hidden argument*/NULL);
		// show = true;
		V_0 = (bool)1;
	}

IL_00b8:
	{
		// lineRenderer.enabled = show;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_34 = __this->get_lineRenderer_18();
		bool L_35 = V_0;
		NullCheck(L_34);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_34, L_35, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/VelocityTime Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::ComputeArc(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VelocityTime_t8F44324796F4B7FF1B951924D34F7B4FA33FF326  PhysicsBeamSample_ComputeArc_m5B04DF37C13A3CAE22E52E39B19F7681301CBFBC (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_8;
	memset((&V_8), 0, sizeof(V_8));
	VelocityTime_t8F44324796F4B7FF1B951924D34F7B4FA33FF326  V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// Vector3 horizontal = target - source;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___target1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___source0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// float dy = horizontal.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = V_0;
		float L_4 = L_3.get_y_3();
		V_1 = L_4;
		// horizontal.y = 0;
		(&V_0)->set_y_3((0.0f));
		// float dx = horizontal.magnitude;
		float L_5;
		L_5 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		V_2 = L_5;
		// Vector3 horizontalDirection = Vector3.Normalize(horizontal);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_Normalize_m7C9B0E84BCB84D54A16D1212F3DE5AB2A386FCD9(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		// float g = Physics.gravity.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Physics_get_gravity_m58D5D94276B1E7A04E9F7108EEAAB7AB786BA532(/*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		V_4 = L_9;
		// float t = 0.0f;
		V_5 = (0.0f);
		// float vx = 0;
		V_6 = (0.0f);
		// float vy = 0;
		V_7 = (0.0f);
		// if (dy > 0)
		float L_10 = V_1;
		if ((!(((float)L_10) > ((float)(0.0f)))))
		{
			goto IL_0074;
		}
	}
	{
		// vy = Mathf.Sqrt(-2.0f * g * dy);
		float L_11 = V_4;
		float L_12 = V_1;
		float L_13;
		L_13 = sqrtf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_11)), (float)L_12)));
		V_7 = L_13;
		// t = -vy / g;
		float L_14 = V_7;
		float L_15 = V_4;
		V_5 = ((float)((float)((-L_14))/(float)L_15));
		// vx = dx / t;
		float L_16 = V_2;
		float L_17 = V_5;
		V_6 = ((float)((float)L_16/(float)L_17));
		// }
		goto IL_0093;
	}

IL_0074:
	{
		// else if (dy < 0)
		float L_18 = V_1;
		if ((!(((float)L_18) < ((float)(0.0f)))))
		{
			goto IL_0093;
		}
	}
	{
		// t = Mathf.Sqrt(2.0f * dy / g);
		float L_19 = V_1;
		float L_20 = V_4;
		float L_21;
		L_21 = sqrtf(((float)((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_19))/(float)L_20)));
		V_5 = L_21;
		// vx = dx / t;
		float L_22 = V_2;
		float L_23 = V_5;
		V_6 = ((float)((float)L_22/(float)L_23));
	}

IL_0093:
	{
		// Vector3 velocity = new Vector3(horizontalDirection.x * vx, vy, horizontalDirection.z * vx);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_3;
		float L_25 = L_24.get_x_2();
		float L_26 = V_6;
		float L_27 = V_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = V_3;
		float L_29 = L_28.get_z_4();
		float L_30 = V_6;
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_8), ((float)il2cpp_codegen_multiply((float)L_25, (float)L_26)), L_27, ((float)il2cpp_codegen_multiply((float)L_29, (float)L_30)), /*hidden argument*/NULL);
		// return new VelocityTime() { v = velocity, t = t };
		il2cpp_codegen_initobj((&V_9), sizeof(VelocityTime_t8F44324796F4B7FF1B951924D34F7B4FA33FF326 ));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = V_8;
		(&V_9)->set_v_0(L_31);
		float L_32 = V_5;
		(&V_9)->set_t_1(L_32);
		VelocityTime_t8F44324796F4B7FF1B951924D34F7B4FA33FF326  L_33 = V_9;
		return L_33;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::ShowArc(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_ShowArc_m12E129AC5767A242A7E5410FFB180F2B056E5506 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPos0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startVel1, float ___maxAge2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_3 = NULL;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// lineRenderer.enabled = true;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_0 = __this->get_lineRenderer_18();
		NullCheck(L_0);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_0, (bool)1, /*hidden argument*/NULL);
		// int numPoints = 20;
		V_0 = ((int32_t)20);
		// if (lineRenderer.positionCount != numPoints)
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_1 = __this->get_lineRenderer_18();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = LineRenderer_get_positionCount_m599A1E6BE97C3E5C88164D171628D38D86F09E01(L_1, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0029;
		}
	}
	{
		// lineRenderer.positionCount = numPoints;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_4 = __this->get_lineRenderer_18();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		// float g = Physics.gravity.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Physics_get_gravity_m58D5D94276B1E7A04E9F7108EEAAB7AB786BA532(/*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		V_1 = L_7;
		// float tstep = maxAge / (numPoints - 2);
		float L_8 = ___maxAge2;
		int32_t L_9 = V_0;
		V_2 = ((float)((float)L_8/(float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)2))))));
		// Vector3[] points = new Vector3[numPoints];
		int32_t L_10 = V_0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_11 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)L_10);
		V_3 = L_11;
		// for (int i = 0; i < points.Length; ++i)
		V_4 = 0;
		goto IL_009b;
	}

IL_0047:
	{
		// float age = tstep * i;
		float L_12 = V_2;
		int32_t L_13 = V_4;
		V_5 = ((float)il2cpp_codegen_multiply((float)L_12, (float)((float)((float)L_13))));
		// Vector3 position = startPos + age * startVel + 0.5f * new Vector3(0.0f, g, 0.0f) * age * age;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = ___startPos0;
		float L_15 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___startVel1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(L_15, L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_14, L_17, /*hidden argument*/NULL);
		float L_19 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_20), (0.0f), L_19, (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((0.5f), L_20, /*hidden argument*/NULL);
		float L_22 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_21, L_22, /*hidden argument*/NULL);
		float L_24 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_23, L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_18, L_25, /*hidden argument*/NULL);
		V_6 = L_26;
		// points[i] = position;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_27 = V_3;
		int32_t L_28 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = V_6;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_29);
		// for (int i = 0; i < points.Length; ++i)
		int32_t L_30 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_009b:
	{
		// for (int i = 0; i < points.Length; ++i)
		int32_t L_31 = V_4;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_32 = V_3;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length))))))
		{
			goto IL_0047;
		}
	}
	{
		// lineRenderer.SetPositions(points);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_33 = __this->get_lineRenderer_18();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_34 = V_3;
		NullCheck(L_33);
		LineRenderer_SetPositions_mD7F470FCD99805F1466E13B64C3F04825DFDBF91(L_33, L_34, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::DropPillar(Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/RayHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_DropPillar_m9CAD6B7F73900D20B3E2A74AC87CFF8EC05D1CF8 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  ___rayHit0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAdjusterFixed_tA49EDC9CBDAFEBD3F101CBEB45425FA4F2865E7E_m16FFB7FEC5E38A1EA9C695F7C356086B435A22FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAdjusterMoving_t656CFCAD82441648E53F023C66612D9F7FBE0683_mEA354BE90AE2D592090267870390B4A4BBB6B47E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisRemovableGroup_tB747F0765FAC888AA3C06D726D6186EAFE9778CF_m8D9BD2AEE08637025C6D9942A72F571522FA8F5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_3;
	memset((&V_3), 0, sizeof(V_3));
	RemovableGroup_tB747F0765FAC888AA3C06D726D6186EAFE9778CF * V_4 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B5_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B4_0 = NULL;
	RemovableGroup_tB747F0765FAC888AA3C06D726D6186EAFE9778CF * G_B6_0 = NULL;
	int32_t G_B10_0 = 0;
	{
		// if (PrefabPillarFixed != null || PrefabPillarDynamic != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = PhysicsBeamSample_get_PrefabPillarFixed_mAD21584F8229E692A768AAB7FD01D2DEF1AE36E7_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = PhysicsBeamSample_get_PrefabPillarDynamic_m4CAE22DA6CE565AB8568B6145D58A7BE04172182_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00da;
		}
	}

IL_001f:
	{
		// var hitPos = rayHit.hitPosition;
		RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  L_4 = ___rayHit0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = L_4.get_hitPosition_1();
		V_0 = L_5;
		// var toRay = rayHit.rayStart - hitPos;
		RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  L_6 = ___rayHit0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = L_6.get_rayStart_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_7, L_8, /*hidden argument*/NULL);
		// var hitDirProj = toRay;
		V_1 = L_9;
		// hitDirProj.y = 0;
		(&V_1)->set_y_3((0.0f));
		// hitDirProj.Normalize();
		Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		// var hitUp = new Vector3(0.0f, 1.0f, 0.0f);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		// var hitRot = Quaternion.LookRotation(hitDirProj, hitUp);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		L_12 = Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1(L_10, L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		// bool isStack = (PrefabPillarDynamic != null) && (rayHit.gameObject?.GetComponentInParent<RemovableGroup>() ?? false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = PhysicsBeamSample_get_PrefabPillarDynamic_m4CAE22DA6CE565AB8568B6145D58A7BE04172182_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0096;
		}
	}
	{
		RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  L_15 = ___rayHit0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = L_15.get_gameObject_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = L_16;
		G_B4_0 = L_17;
		if (L_17)
		{
			G_B5_0 = L_17;
			goto IL_007f;
		}
	}
	{
		G_B6_0 = ((RemovableGroup_tB747F0765FAC888AA3C06D726D6186EAFE9778CF *)(NULL));
		goto IL_0084;
	}

IL_007f:
	{
		NullCheck(G_B5_0);
		RemovableGroup_tB747F0765FAC888AA3C06D726D6186EAFE9778CF * L_18;
		L_18 = GameObject_GetComponentInParent_TisRemovableGroup_tB747F0765FAC888AA3C06D726D6186EAFE9778CF_m8D9BD2AEE08637025C6D9942A72F571522FA8F5C(G_B5_0, /*hidden argument*/GameObject_GetComponentInParent_TisRemovableGroup_tB747F0765FAC888AA3C06D726D6186EAFE9778CF_m8D9BD2AEE08637025C6D9942A72F571522FA8F5C_RuntimeMethod_var);
		G_B6_0 = L_18;
	}

IL_0084:
	{
		V_4 = G_B6_0;
		RemovableGroup_tB747F0765FAC888AA3C06D726D6186EAFE9778CF * L_19 = V_4;
		if (L_19)
		{
			goto IL_008d;
		}
	}
	{
		G_B10_0 = 0;
		goto IL_0097;
	}

IL_008d:
	{
		RemovableGroup_tB747F0765FAC888AA3C06D726D6186EAFE9778CF * L_20 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_20, /*hidden argument*/NULL);
		G_B10_0 = ((int32_t)(L_21));
		goto IL_0097;
	}

IL_0096:
	{
		G_B10_0 = 0;
	}

IL_0097:
	{
		// if (isStack || PrefabPillarFixed == null)
		if (G_B10_0)
		{
			goto IL_00a7;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = PhysicsBeamSample_get_PrefabPillarFixed_mAD21584F8229E692A768AAB7FD01D2DEF1AE36E7_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00c1;
		}
	}

IL_00a7:
	{
		// var newObj = GameObject.Instantiate(PrefabPillarDynamic, hitPos, hitRot, AttachRoot);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = PhysicsBeamSample_get_PrefabPillarDynamic_m4CAE22DA6CE565AB8568B6145D58A7BE04172182_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_26 = V_3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = PhysicsBeamSample_get_AttachRoot_m5C3E1BBFF968AD689DC3F818191D3A3AC7497CB1_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
		L_28 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_24, L_25, L_26, L_27, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		// newObj.AddComponent<AdjusterMoving>();
		NullCheck(L_28);
		AdjusterMoving_t656CFCAD82441648E53F023C66612D9F7FBE0683 * L_29;
		L_29 = GameObject_AddComponent_TisAdjusterMoving_t656CFCAD82441648E53F023C66612D9F7FBE0683_mEA354BE90AE2D592090267870390B4A4BBB6B47E(L_28, /*hidden argument*/GameObject_AddComponent_TisAdjusterMoving_t656CFCAD82441648E53F023C66612D9F7FBE0683_mEA354BE90AE2D592090267870390B4A4BBB6B47E_RuntimeMethod_var);
		// }
		return;
	}

IL_00c1:
	{
		// var newObj = GameObject.Instantiate(PrefabPillarFixed, hitPos, hitRot, AttachRoot);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30;
		L_30 = PhysicsBeamSample_get_PrefabPillarFixed_mAD21584F8229E692A768AAB7FD01D2DEF1AE36E7_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_32 = V_3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = PhysicsBeamSample_get_AttachRoot_m5C3E1BBFF968AD689DC3F818191D3A3AC7497CB1_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34;
		L_34 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_30, L_31, L_32, L_33, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		// newObj.AddComponent<AdjusterFixed>();
		NullCheck(L_34);
		AdjusterFixed_tA49EDC9CBDAFEBD3F101CBEB45425FA4F2865E7E * L_35;
		L_35 = GameObject_AddComponent_TisAdjusterFixed_tA49EDC9CBDAFEBD3F101CBEB45425FA4F2865E7E_m16FFB7FEC5E38A1EA9C695F7C356086B435A22FC(L_34, /*hidden argument*/GameObject_AddComponent_TisAdjusterFixed_tA49EDC9CBDAFEBD3F101CBEB45425FA4F2865E7E_m16FFB7FEC5E38A1EA9C695F7C356086B435A22FC_RuntimeMethod_var);
	}

IL_00da:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::StartBeam(Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/RayHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_StartBeam_mFD8F0B4A7D0749254FCD7DCE90BF09A15F44F278 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  ___rayHit0, const RuntimeMethod* method)
{
	{
		// beamStartPosition = rayHit.hitPosition;
		RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  L_0 = ___rayHit0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = L_0.get_hitPosition_1();
		__this->set_beamStartPosition_17(L_1);
		// lineRenderer.enabled = true;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_2 = __this->get_lineRenderer_18();
		NullCheck(L_2);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_2, (bool)1, /*hidden argument*/NULL);
		// mode = BuildMode.EndBeam;
		__this->set_mode_16(4);
		// SyncRadioSet();
		PhysicsBeamSample_SyncRadioSet_m19878F05F81FB2924AFEF342ADC321ED6279CB46(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::EndBeam(Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/RayHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_EndBeam_m947DF3655C0E627038CB6C3819F1A784A3714BED (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  ___rayHit0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAdjusterMoving_t656CFCAD82441648E53F023C66612D9F7FBE0683_mEA354BE90AE2D592090267870390B4A4BBB6B47E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// Vector3 beamEndPosition = rayHit.hitPosition;
		RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  L_0 = ___rayHit0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = L_0.get_hitPosition_1();
		V_0 = L_1;
		// Vector3 midPosition = (beamStartPosition + beamEndPosition) * 0.5f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_beamStartPosition_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_4, (0.5f), /*hidden argument*/NULL);
		V_1 = L_5;
		// float epsilon = 0.001f; // Slight offset to keep from starting interpenetrating.
		V_2 = (0.00100000005f);
		// midPosition.y = Mathf.Max(beamStartPosition.y, beamEndPosition.y) + epsilon;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_6 = __this->get_address_of_beamStartPosition_17();
		float L_7 = L_6->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		float L_9 = L_8.get_y_3();
		float L_10;
		L_10 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_7, L_9, /*hidden argument*/NULL);
		float L_11 = V_2;
		(&V_1)->set_y_3(((float)il2cpp_codegen_add((float)L_10, (float)L_11)));
		// Vector3 beamDirection = beamEndPosition - beamStartPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = __this->get_beamStartPosition_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_12, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		// beamDirection.y = 0;
		(&V_3)->set_y_3((0.0f));
		// float beamLength = beamDirection.magnitude;
		float L_15;
		L_15 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), /*hidden argument*/NULL);
		V_4 = L_15;
		// beamDirection = Vector3.Normalize(beamDirection);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_Normalize_m7C9B0E84BCB84D54A16D1212F3DE5AB2A386FCD9(L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		// Quaternion rot = Quaternion.LookRotation(beamDirection, new Vector3(0.0f, 1.0f, 0.0f));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_19), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20;
		L_20 = Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1(L_18, L_19, /*hidden argument*/NULL);
		V_5 = L_20;
		// var newObj = GameObject.Instantiate(PrefabBeam, midPosition, rot, AttachRoot);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = PhysicsBeamSample_get_PrefabBeam_mF3FEEDF2620641D4917DA28D16BA3CFB1741284A_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23 = V_5;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = PhysicsBeamSample_get_AttachRoot_m5C3E1BBFF968AD689DC3F818191D3A3AC7497CB1_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_21, L_22, L_23, L_24, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		// newObj.transform.localScale = new Vector3(1.0f, 1.0f, beamLength);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = L_25;
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_26, /*hidden argument*/NULL);
		float L_28 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_29), (1.0f), (1.0f), L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_27, L_29, /*hidden argument*/NULL);
		// newObj.AddComponent<AdjusterMoving>();
		NullCheck(L_26);
		AdjusterMoving_t656CFCAD82441648E53F023C66612D9F7FBE0683 * L_30;
		L_30 = GameObject_AddComponent_TisAdjusterMoving_t656CFCAD82441648E53F023C66612D9F7FBE0683_mEA354BE90AE2D592090267870390B4A4BBB6B47E(L_26, /*hidden argument*/GameObject_AddComponent_TisAdjusterMoving_t656CFCAD82441648E53F023C66612D9F7FBE0683_mEA354BE90AE2D592090267870390B4A4BBB6B47E_RuntimeMethod_var);
		// lineRenderer.enabled = false;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_31 = __this->get_lineRenderer_18();
		NullCheck(L_31);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_31, (bool)0, /*hidden argument*/NULL);
		// mode = BuildMode.StartBeam;
		__this->set_mode_16(3);
		// SyncRadioSet();
		PhysicsBeamSample_SyncRadioSet_m19878F05F81FB2924AFEF342ADC321ED6279CB46(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::SetupLineRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_SetupLineRenderer_m474D0D78DEC25777BE2C6CA10F08503F8C91D072 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mDBF1085005984D110DBAB1A2051888DC0AAC10B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA6A4D943C42DF6E91CE1FAA4D2A1735BE77C53A);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	float V_1 = 0.0f;
	{
		// GameObject lineObject = new GameObject("Beam Ray");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_0, _stringLiteralCA6A4D943C42DF6E91CE1FAA4D2A1735BE77C53A, /*hidden argument*/NULL);
		V_0 = L_0;
		// lineObject.transform.SetParent(AttachRoot);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = V_0;
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = PhysicsBeamSample_get_AttachRoot_m5C3E1BBFF968AD689DC3F818191D3A3AC7497CB1_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_2, L_3, /*hidden argument*/NULL);
		// lineRenderer = lineObject.AddComponent<LineRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = V_0;
		NullCheck(L_4);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_5;
		L_5 = GameObject_AddComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mDBF1085005984D110DBAB1A2051888DC0AAC10B0(L_4, /*hidden argument*/GameObject_AddComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mDBF1085005984D110DBAB1A2051888DC0AAC10B0_RuntimeMethod_var);
		__this->set_lineRenderer_18(L_5);
		// lineRenderer.material = lineMaterial;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_6 = __this->get_lineRenderer_18();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = __this->get_lineMaterial_14();
		NullCheck(L_6);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_6, L_7, /*hidden argument*/NULL);
		// lineRenderer.material.color = Color.grey;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_8 = __this->get_lineRenderer_18();
		NullCheck(L_8);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9;
		L_9 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_8, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		L_10 = Color_get_grey_mB2E29B47327F20233856F933DC00ACADEBFDBDFA(/*hidden argument*/NULL);
		NullCheck(L_9);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_9, L_10, /*hidden argument*/NULL);
		// float width = 0.01f;
		V_1 = (0.00999999978f);
		// lineRenderer.startWidth = width;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_11 = __this->get_lineRenderer_18();
		float L_12 = V_1;
		NullCheck(L_11);
		LineRenderer_set_startWidth_mD88B562DD413EE9861FB254963C7EDCB5199C1DF(L_11, L_12, /*hidden argument*/NULL);
		// lineRenderer.endWidth = width;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_13 = __this->get_lineRenderer_18();
		float L_14 = V_1;
		NullCheck(L_13);
		LineRenderer_set_endWidth_m3DCD4FFCC3944DD6DC0737C8AF8C7EDB5A6CF59A(L_13, L_14, /*hidden argument*/NULL);
		// lineRenderer.useWorldSpace = true;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_15 = __this->get_lineRenderer_18();
		NullCheck(L_15);
		LineRenderer_set_useWorldSpace_m53AA0FE659EFB041647DB6A29826D20D52CBE148(L_15, (bool)1, /*hidden argument*/NULL);
		// lineRenderer.enabled = false;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_16 = __this->get_lineRenderer_18();
		NullCheck(L_16);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_16, (bool)0, /*hidden argument*/NULL);
		// lineRenderer.startColor = Color.red;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_17 = __this->get_lineRenderer_18();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18;
		L_18 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		NullCheck(L_17);
		LineRenderer_set_startColor_m7C75698F11565606CEA049DD3AE0514BADBF6BB7(L_17, L_18, /*hidden argument*/NULL);
		// lineRenderer.endColor = Color.cyan;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_19 = __this->get_lineRenderer_18();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20;
		L_20 = Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686(/*hidden argument*/NULL);
		NullCheck(L_19);
		LineRenderer_set_endColor_mF9F043C0EE5E36AD5B36547A17171ECA6967CDE2(L_19, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::ShowBeam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_ShowBeam_m15DB022C9BB815BDB30E4B649C19A99749777F5D (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_t7F0507B7CE0C9CDF14089C77B4F5A079AE031B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPointerResult_t016B5E61BBA35FC618DEF7E4030088A1324DEE06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m19771EC4BDF52DDFD8BC1D6856D05C8D5482F2C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD3A9CB8A7FBD13AE79C7AEBF6B32368A750F2637_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (lineRenderer.positionCount != 2)
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_0 = __this->get_lineRenderer_18();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = LineRenderer_get_positionCount_m599A1E6BE97C3E5C88164D171628D38D86F09E01(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_001a;
		}
	}
	{
		// lineRenderer.positionCount = 2;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_2 = __this->get_lineRenderer_18();
		NullCheck(L_2);
		LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5(L_2, 2, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// bool show = false;
		V_0 = (bool)0;
		// var activePointers = FindActivePointers();
		List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E * L_3;
		L_3 = PhysicsBeamSample_FindActivePointers_m089845C86AD0DFD4041BA2B372D2E237167B9C6A(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		// if (activePointers.Count > 0)
		List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E * L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m19771EC4BDF52DDFD8BC1D6856D05C8D5482F2C1_inline(L_4, /*hidden argument*/List_1_get_Count_m19771EC4BDF52DDFD8BC1D6856D05C8D5482F2C1_RuntimeMethod_var);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0095;
		}
	}
	{
		// var focusPointer = activePointers[0];
		List_1_tCC75F0E785C19F0A0419EF1B4CE550AB9D7D9C4E * L_6 = V_1;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = List_1_get_Item_mD3A9CB8A7FBD13AE79C7AEBF6B32368A750F2637_inline(L_6, 0, /*hidden argument*/List_1_get_Item_mD3A9CB8A7FBD13AE79C7AEBF6B32368A750F2637_RuntimeMethod_var);
		V_2 = L_7;
		// int uiLayer = LayerMask.GetMask("UI");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F);
		int32_t L_10;
		L_10 = LayerMask_GetMask_m46D2185735D02C7DEE01E3BAAF4A39F2AB46F67F(L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		// if (((1 << focusPointer.Result.CurrentPointerTarget.layer) & uiLayer) == 0)
		RuntimeObject* L_11 = V_2;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(22 /* Microsoft.MixedReality.Toolkit.Input.IPointerResult Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Result() */, IMixedRealityPointer_t7F0507B7CE0C9CDF14089C77B4F5A079AE031B4D_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = InterfaceFuncInvoker0< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(2 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.IPointerResult::get_CurrentPointerTarget() */, IPointerResult_t016B5E61BBA35FC618DEF7E4030088A1324DEE06_il2cpp_TypeInfo_var, L_12);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_13, /*hidden argument*/NULL);
		int32_t L_15 = V_3;
		if (((int32_t)((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_14&(int32_t)((int32_t)31)))))&(int32_t)L_15)))
		{
			goto IL_0095;
		}
	}
	{
		// lineRenderer.SetPosition(0, beamStartPosition);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_16 = __this->get_lineRenderer_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = __this->get_beamStartPosition_17();
		NullCheck(L_16);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_16, 0, L_17, /*hidden argument*/NULL);
		// lineRenderer.SetPosition(1, focusPointer.Result.Details.Point);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_18 = __this->get_lineRenderer_18();
		RuntimeObject* L_19 = V_2;
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(22 /* Microsoft.MixedReality.Toolkit.Input.IPointerResult Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Result() */, IMixedRealityPointer_t7F0507B7CE0C9CDF14089C77B4F5A079AE031B4D_il2cpp_TypeInfo_var, L_19);
		NullCheck(L_20);
		FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7  L_21;
		L_21 = InterfaceFuncInvoker0< FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7  >::Invoke(1 /* Microsoft.MixedReality.Toolkit.Physics.FocusDetails Microsoft.MixedReality.Toolkit.Input.IPointerResult::get_Details() */, IPointerResult_t016B5E61BBA35FC618DEF7E4030088A1324DEE06_il2cpp_TypeInfo_var, L_20);
		V_4 = L_21;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = FocusDetails_get_Point_m64928E75649D63E98441E757747B337430BD3BB3_inline((FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7 *)(&V_4), /*hidden argument*/NULL);
		NullCheck(L_18);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_18, 1, L_22, /*hidden argument*/NULL);
		// show = true;
		V_0 = (bool)1;
	}

IL_0095:
	{
		// lineRenderer.enabled = show;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_23 = __this->get_lineRenderer_18();
		bool L_24 = V_0;
		NullCheck(L_23);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_23, L_24, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/WorldLockType Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::get_WorldLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhysicsBeamSample_get_WorldLock_m33D175FCF28BBF8EF77580FCD0E173731B55110E (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	{
		// private WorldLockType WorldLock { get { return worldLock; } set { worldLock = value; } }
		int32_t L_0 = __this->get_worldLock_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::set_WorldLock(Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/WorldLockType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_set_WorldLock_m7F42E8CD43B58946EE67EBF7AECF3CFCCFA56FC0 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// private WorldLockType WorldLock { get { return worldLock; } set { worldLock = value; } }
		int32_t L_0 = ___value0;
		__this->set_worldLock_19(L_0);
		// private WorldLockType WorldLock { get { return worldLock; } set { worldLock = value; } }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::PinSphere(Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/RayHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_PinSphere_m1D08EEAA600950DCA7A1ACFCF78B30E3D160FDC9 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  ___rayHit0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisToggleWorldAnchor_t1B1167AAE4D649411357DCAC4BBEA35B598EB09B_m0D1B8B398B187CC3C580F8FA6979E6BF6D401B96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral123310CAF52783972279A2C3BC30A06F5CBA39DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral437971DC3A715448465019A0FE8EE437F82C405A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1163672BDA87F0D7E57DC697ABFD6BE20B56C2C);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		// var hitPos = rayHit.hitPosition;
		RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  L_0 = ___rayHit0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = L_0.get_hitPosition_1();
		V_0 = L_1;
		// var toRay = rayHit.rayStart - hitPos;
		RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  L_2 = ___rayHit0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = L_2.get_rayStart_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_3, L_4, /*hidden argument*/NULL);
		// var hitDirProj = toRay;
		V_1 = L_5;
		// hitDirProj.y = 0;
		(&V_1)->set_y_3((0.0f));
		// hitDirProj.Normalize();
		Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		// var hitUp = new Vector3(0.0f, 1.0f, 0.0f);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		// var hitRot = Quaternion.LookRotation(hitDirProj, hitUp);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1(L_6, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		// switch(WorldLock)
		int32_t L_9;
		L_9 = PhysicsBeamSample_get_WorldLock_m33D175FCF28BBF8EF77580FCD0E173731B55110E_inline(__this, /*hidden argument*/NULL);
		V_4 = L_9;
		int32_t L_10 = V_4;
		switch (L_10)
		{
			case 0:
			{
				goto IL_0061;
			}
			case 1:
			{
				goto IL_008f;
			}
			case 2:
			{
				goto IL_00c7;
			}
		}
	}
	{
		return;
	}

IL_0061:
	{
		// if (PrefabUnlockedSphere != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = PhysicsBeamSample_get_PrefabUnlockedSphere_mD57552F92514EEC1295E0F819A1220365AF35CE8_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0084;
		}
	}
	{
		// var newObj = GameObject.Instantiate(PrefabUnlockedSphere, hitPos, hitRot, AttachRoot);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = PhysicsBeamSample_get_PrefabUnlockedSphere_mD57552F92514EEC1295E0F819A1220365AF35CE8_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15 = V_3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = PhysicsBeamSample_get_AttachRoot_m5C3E1BBFF968AD689DC3F818191D3A3AC7497CB1_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_13, L_14, L_15, L_16, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		// }
		return;
	}

IL_0084:
	{
		// Debug.LogError("Missing prefab for Unlocked Sphere");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralE1163672BDA87F0D7E57DC697ABFD6BE20B56C2C, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_008f:
	{
		// if (PrefabWorldLockedSphere != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = PhysicsBeamSample_get_PrefabWorldLockedSphere_m5CF2CC286B202B3DFB85B584B9509FB77E17E667_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00bc;
		}
	}
	{
		// var newObj = GameObject.Instantiate(PrefabWorldLockedSphere, hitPos, hitRot, AttachRoot);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = PhysicsBeamSample_get_PrefabWorldLockedSphere_m5CF2CC286B202B3DFB85B584B9509FB77E17E667_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22 = V_3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = PhysicsBeamSample_get_AttachRoot_m5C3E1BBFF968AD689DC3F818191D3A3AC7497CB1_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_20, L_21, L_22, L_23, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		// var twa = newObj.AddComponent<ToggleWorldAnchor>();
		NullCheck(L_24);
		ToggleWorldAnchor_t1B1167AAE4D649411357DCAC4BBEA35B598EB09B * L_25;
		L_25 = GameObject_AddComponent_TisToggleWorldAnchor_t1B1167AAE4D649411357DCAC4BBEA35B598EB09B_m0D1B8B398B187CC3C580F8FA6979E6BF6D401B96(L_24, /*hidden argument*/GameObject_AddComponent_TisToggleWorldAnchor_t1B1167AAE4D649411357DCAC4BBEA35B598EB09B_m0D1B8B398B187CC3C580F8FA6979E6BF6D401B96_RuntimeMethod_var);
		// twa.AlwaysLock = true;
		NullCheck(L_25);
		ToggleWorldAnchor_set_AlwaysLock_mE994FABF3BAAFBF1AAF3E4ACBC04DF8DB0476608_inline(L_25, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00bc:
	{
		// Debug.LogError("Missing prefab for World Locked Sphere");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral123310CAF52783972279A2C3BC30A06F5CBA39DB, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00c7:
	{
		// if (PrefabHybridLockedSphere != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = PhysicsBeamSample_get_PrefabHybridLockedSphere_mDA89D680C2E05DDB4D3AF23AB624238F23BF2934_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_26, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00f4;
		}
	}
	{
		// var newObj = GameObject.Instantiate(PrefabHybridLockedSphere, hitPos, hitRot, AttachRoot);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
		L_28 = PhysicsBeamSample_get_PrefabHybridLockedSphere_mDA89D680C2E05DDB4D3AF23AB624238F23BF2934_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_30 = V_3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = PhysicsBeamSample_get_AttachRoot_m5C3E1BBFF968AD689DC3F818191D3A3AC7497CB1_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32;
		L_32 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_28, L_29, L_30, L_31, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		// var twa = newObj.AddComponent<ToggleWorldAnchor>();
		NullCheck(L_32);
		ToggleWorldAnchor_t1B1167AAE4D649411357DCAC4BBEA35B598EB09B * L_33;
		L_33 = GameObject_AddComponent_TisToggleWorldAnchor_t1B1167AAE4D649411357DCAC4BBEA35B598EB09B_m0D1B8B398B187CC3C580F8FA6979E6BF6D401B96(L_32, /*hidden argument*/GameObject_AddComponent_TisToggleWorldAnchor_t1B1167AAE4D649411357DCAC4BBEA35B598EB09B_m0D1B8B398B187CC3C580F8FA6979E6BF6D401B96_RuntimeMethod_var);
		// twa.AlwaysLock = false;
		NullCheck(L_33);
		ToggleWorldAnchor_set_AlwaysLock_mE994FABF3BAAFBF1AAF3E4ACBC04DF8DB0476608_inline(L_33, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00f4:
	{
		// Debug.LogError("Missing prefab for Hybrid Locked Sphere");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral437971DC3A715448465019A0FE8EE437F82C405A, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::RemoveObject(Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/RayHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_RemoveObject_mA3F9D860EADA7FD1455AC3B57DBA83B7638C622F (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  ___rayHit0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisRemovableGroup_tB747F0765FAC888AA3C06D726D6186EAFE9778CF_m8D9BD2AEE08637025C6D9942A72F571522FA8F5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RemovableGroup_tB747F0765FAC888AA3C06D726D6186EAFE9778CF * V_0 = NULL;
	{
		// if (rayHit.gameObject != null)
		RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  L_0 = ___rayHit0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0.get_gameObject_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// RemovableGroup removal = rayHit.gameObject.GetComponentInParent<RemovableGroup>();
		RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  L_3 = ___rayHit0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = L_3.get_gameObject_3();
		NullCheck(L_4);
		RemovableGroup_tB747F0765FAC888AA3C06D726D6186EAFE9778CF * L_5;
		L_5 = GameObject_GetComponentInParent_TisRemovableGroup_tB747F0765FAC888AA3C06D726D6186EAFE9778CF_m8D9BD2AEE08637025C6D9942A72F571522FA8F5C(L_4, /*hidden argument*/GameObject_GetComponentInParent_TisRemovableGroup_tB747F0765FAC888AA3C06D726D6186EAFE9778CF_m8D9BD2AEE08637025C6D9942A72F571522FA8F5C_RuntimeMethod_var);
		V_0 = L_5;
		// if (removal != null)
		RemovableGroup_tB747F0765FAC888AA3C06D726D6186EAFE9778CF * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		// GameObject.Destroy(removal.gameObject);
		RemovableGroup_tB747F0765FAC888AA3C06D726D6186EAFE9778CF * L_8 = V_0;
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_9, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::EnterIdleMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_EnterIdleMode_mA8E3D78404A31F1E3EEC29A98DE7EC48861C6E6B (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	{
		// FinishCurrentAction();
		PhysicsBeamSample_FinishCurrentAction_mA4D824EBDA75930F9ABDA0C1E440E5C53ACFB3E5(__this, /*hidden argument*/NULL);
		// mode = BuildMode.Idle;
		__this->set_mode_16(0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::EnterDartMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_EnterDartMode_m038BAC5A71CACD2F8B3029B8466D583C99385897 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	{
		// FinishCurrentAction();
		PhysicsBeamSample_FinishCurrentAction_mA4D824EBDA75930F9ABDA0C1E440E5C53ACFB3E5(__this, /*hidden argument*/NULL);
		// mode = BuildMode.Dart;
		__this->set_mode_16(1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::EnterPillarMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_EnterPillarMode_mAD2B9F64ACC8F8539036248F4CF5C61F5D77985A (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	{
		// FinishCurrentAction();
		PhysicsBeamSample_FinishCurrentAction_mA4D824EBDA75930F9ABDA0C1E440E5C53ACFB3E5(__this, /*hidden argument*/NULL);
		// mode = BuildMode.DropPillars;
		__this->set_mode_16(2);
		// }
		return;
	}
}
// Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/WorldLockType Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::NextWorldLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhysicsBeamSample_NextWorldLock_mBFE5E2E732787290EC6366B21D2CAEC0F8F8FCE9 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// switch (WorldLock)
		int32_t L_0;
		L_0 = PhysicsBeamSample_get_WorldLock_m33D175FCF28BBF8EF77580FCD0E173731B55110E_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0021;
	}

IL_001b:
	{
		// return WorldLockType.WorldLock;
		return (int32_t)(1);
	}

IL_001d:
	{
		// return WorldLockType.HybridLock;
		return (int32_t)(2);
	}

IL_001f:
	{
		// return WorldLockType.Unlocked;
		return (int32_t)(0);
	}

IL_0021:
	{
		// return WorldLockType.HybridLock;
		return (int32_t)(2);
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::SetupWorldLockSelect(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_SetupWorldLockSelect_m8DDC21C1A63870C2BC7C1E414F24AB4FF1EDB0E2 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, bool ___activate0, const RuntimeMethod* method)
{
	{
		// if (activate)
		bool L_0 = ___activate0;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		// worldLockSelector.gameObject.SetActive(true);
		InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3 * L_1 = __this->get_worldLockSelector_13();
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// worldLockSelector.SetSelection((int)WorldLock);
		InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3 * L_3 = __this->get_worldLockSelector_13();
		int32_t L_4;
		L_4 = PhysicsBeamSample_get_WorldLock_m33D175FCF28BBF8EF77580FCD0E173731B55110E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		InteractableToggleCollection_SetSelection_mD63AD809A40AD0CC9B2176FBF3D3F573B66CCC08(L_3, L_4, (bool)0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0028:
	{
		// worldLockSelector.gameObject.SetActive(false);
		InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3 * L_5 = __this->get_worldLockSelector_13();
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::EnterWorldLockUnlocked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_EnterWorldLockUnlocked_m20A2609BFD630C540F0EED1B6C09988803BF23FF (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	{
		// WorldLock = WorldLockType.Unlocked;
		PhysicsBeamSample_set_WorldLock_m7F42E8CD43B58946EE67EBF7AECF3CFCCFA56FC0_inline(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::EnterWorldLockWorldLocked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_EnterWorldLockWorldLocked_mB391911474141AD85F4B6853E5A1A0F3DB5819A9 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	{
		// WorldLock = WorldLockType.WorldLock;
		PhysicsBeamSample_set_WorldLock_m7F42E8CD43B58946EE67EBF7AECF3CFCCFA56FC0_inline(__this, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::EnterWorldLockHybridLocked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_EnterWorldLockHybridLocked_m48FE368F8C2C3E82AD7CAA3370BA8EB7C9806CFD (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	{
		// WorldLock = WorldLockType.HybridLock;
		PhysicsBeamSample_set_WorldLock_m7F42E8CD43B58946EE67EBF7AECF3CFCCFA56FC0_inline(__this, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::EnterPinSphereMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_EnterPinSphereMode_m2DCDFAA1AEA4EC7944FCFD781C4E8EDB43842F55 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	{
		// FinishCurrentAction();
		PhysicsBeamSample_FinishCurrentAction_mA4D824EBDA75930F9ABDA0C1E440E5C53ACFB3E5(__this, /*hidden argument*/NULL);
		// mode = BuildMode.PinSphere;
		__this->set_mode_16(5);
		// SetupWorldLockSelect(true);
		PhysicsBeamSample_SetupWorldLockSelect_m8DDC21C1A63870C2BC7C1E414F24AB4FF1EDB0E2(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::EnterBeamMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_EnterBeamMode_mCF4C2D668F07A80ADC0B3C02449519B1B7A24C11 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	{
		// if (mode != BuildMode.StartBeam && mode != BuildMode.EndBeam)
		int32_t L_0 = __this->get_mode_16();
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = __this->get_mode_16();
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_001f;
		}
	}
	{
		// FinishCurrentAction();
		PhysicsBeamSample_FinishCurrentAction_mA4D824EBDA75930F9ABDA0C1E440E5C53ACFB3E5(__this, /*hidden argument*/NULL);
		// mode = BuildMode.StartBeam;
		__this->set_mode_16(3);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::EnterRemoveMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_EnterRemoveMode_mC0DD45D73C70DBA97DCCFF1DD4D91F3A6FF2BC7C (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	{
		// FinishCurrentAction();
		PhysicsBeamSample_FinishCurrentAction_mA4D824EBDA75930F9ABDA0C1E440E5C53ACFB3E5(__this, /*hidden argument*/NULL);
		// mode = BuildMode.RemoveObject;
		__this->set_mode_16(6);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::FinishCurrentAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_FinishCurrentAction_mA4D824EBDA75930F9ABDA0C1E440E5C53ACFB3E5 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (lineRenderer != null)
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_0 = __this->get_lineRenderer_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// lineRenderer.enabled = false;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_2 = __this->get_lineRenderer_18();
		NullCheck(L_2);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_2, (bool)0, /*hidden argument*/NULL);
		// SetupWorldLockSelect(false);
		PhysicsBeamSample_SetupWorldLockSelect_m8DDC21C1A63870C2BC7C1E414F24AB4FF1EDB0E2(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::RegisterHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_RegisterHandlers_m1649A5A763A0A620A015755D5F33D4B1A3B11323 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_RegisterHandler_TisIMixedRealityPointerHandler_t4AA3CD5AE323E36508E2F319C9D03C7E3F9DAA99_m4EC12F6AF105651978448E47AE0B2D0A295B3483_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkit_GetService_TisIMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_m330D38E8B3326095CEBD76787F0985C8F6A82D39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE * G_B2_0 = NULL;
	MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE * G_B1_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		// MixedRealityToolkit.Instance?.GetService<IMixedRealityInputSystem>()?.RegisterHandler<IMixedRealityPointerHandler>(this);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE * L_0;
		L_0 = MixedRealityToolkit_get_Instance_m476E2053BA79D9D8A2F8941441AE2AE1D656B8F3_inline(/*hidden argument*/NULL);
		MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NullCheck(G_B2_0);
		RuntimeObject* L_2;
		L_2 = MixedRealityToolkit_GetService_TisIMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_m330D38E8B3326095CEBD76787F0985C8F6A82D39(G_B2_0, (String_t*)NULL, (bool)1, /*hidden argument*/MixedRealityToolkit_GetService_TisIMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_m330D38E8B3326095CEBD76787F0985C8F6A82D39_RuntimeMethod_var);
		RuntimeObject* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		NullCheck(G_B4_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_RegisterHandler_TisIMixedRealityPointerHandler_t4AA3CD5AE323E36508E2F319C9D03C7E3F9DAA99_m4EC12F6AF105651978448E47AE0B2D0A295B3483_RuntimeMethod_var, G_B4_0, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::UnregisterHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_UnregisterHandlers_mC7B4B8B5E88F255412222AA57F50B8E479155E0F (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealityPointerHandler_t4AA3CD5AE323E36508E2F319C9D03C7E3F9DAA99_m4E98E9CC54DD1412E31FFA6243F9BF857FAA1797_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkit_GetService_TisIMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_m330D38E8B3326095CEBD76787F0985C8F6A82D39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE * G_B2_0 = NULL;
	MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE * G_B1_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		// MixedRealityToolkit.Instance?.GetService<IMixedRealityInputSystem>()?.UnregisterHandler<IMixedRealityPointerHandler>(this);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE * L_0;
		L_0 = MixedRealityToolkit_get_Instance_m476E2053BA79D9D8A2F8941441AE2AE1D656B8F3_inline(/*hidden argument*/NULL);
		MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NullCheck(G_B2_0);
		RuntimeObject* L_2;
		L_2 = MixedRealityToolkit_GetService_TisIMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_m330D38E8B3326095CEBD76787F0985C8F6A82D39(G_B2_0, (String_t*)NULL, (bool)1, /*hidden argument*/MixedRealityToolkit_GetService_TisIMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_m330D38E8B3326095CEBD76787F0985C8F6A82D39_RuntimeMethod_var);
		RuntimeObject* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		NullCheck(G_B4_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealityPointerHandler_t4AA3CD5AE323E36508E2F319C9D03C7E3F9DAA99_m4E98E9CC54DD1412E31FFA6243F9BF857FAA1797_RuntimeMethod_var, G_B4_0, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::OnPointerClicked(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_OnPointerClicked_mE1029BDEB76FE79230861CB57D8647E6EE024EE3 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_t7F0507B7CE0C9CDF14089C77B4F5A079AE031B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// var pointerResult = eventData.Pointer.Result;
		MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * L_0 = ___eventData0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = MixedRealityPointerEventData_get_Pointer_m3A233E75C86D4B0B230A0242BB5ED9A8715F9B08_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(22 /* Microsoft.MixedReality.Toolkit.Input.IPointerResult Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Result() */, IMixedRealityPointer_t7F0507B7CE0C9CDF14089C77B4F5A079AE031B4D_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		// var rayHit = new RayHit(pointerResult);
		RuntimeObject* L_3 = V_0;
		RayHit__ctor_m64432C2E16F60A50E597D4846BA5F0552D4EAD83((RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338 *)(&V_1), L_3, /*hidden argument*/NULL);
		// int uiLayer = LayerMask.GetMask("UI");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F);
		int32_t L_6;
		L_6 = LayerMask_GetMask_m46D2185735D02C7DEE01E3BAAF4A39F2AB46F67F(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		// if (rayHit.gameObject == null || ((1 << rayHit.gameObject.layer) & uiLayer) == 0)
		RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  L_7 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_7.get_gameObject_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_004a;
		}
	}
	{
		RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  L_10 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = L_10.get_gameObject_3();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_11, /*hidden argument*/NULL);
		int32_t L_13 = V_2;
		if (((int32_t)((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)31)))))&(int32_t)L_13)))
		{
			goto IL_0051;
		}
	}

IL_004a:
	{
		// HandleHit(rayHit);
		RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338  L_14 = V_1;
		PhysicsBeamSample_HandleHit_m68DC4CCDCE205AC3A186981E5FFCC01A32CE2247(__this, L_14, /*hidden argument*/NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::OnPointerUp(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_OnPointerUp_mA74787533FD83BE0FAA3F121DA6D5FFE09BEFF8E (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * ___eventData0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::OnPointerDown(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_OnPointerDown_m901593ED2439AD44E5EAD1385FDAEC812937D6D0 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * ___eventData0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::OnPointerDragged(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample_OnPointerDragged_m0176951514970761312AF4F325ED9C59A94A1531 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * ___eventData0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsBeamSample__ctor_m43949F9D954D86F480CC008A05A2221B957BFF37 (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	{
		// private Vector3 beamStartPosition = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_beamStartPosition_17(L_0);
		// private WorldLockType worldLock = WorldLockType.HybridLock;
		__this->set_worldLock_19(2);
		InputSystemGlobalHandlerListener__ctor_m1DFA244E7E94A7AB4F2B8CF4E2A46D78E6118B48(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::get_UserOriented()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PinManipulator_get_UserOriented_m56B7B5B4F5ED57D5DB2F61D3205E6EFF0E1CF1B2 (PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * __this, const RuntimeMethod* method)
{
	{
		// get { return userOriented; }
		bool L_0 = __this->get_userOriented_0();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::set_UserOriented(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManipulator_set_UserOriented_m57B51B39113F5F08A3A148AC024BB2B5EB2E485E (PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != userOriented)
		bool L_0 = ___value0;
		bool L_1 = __this->get_userOriented_0();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0024;
		}
	}
	{
		// userOriented = value;
		bool L_2 = ___value0;
		__this->set_userOriented_0(L_2);
		// if (manipulationHandler != null)
		ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A * L_3 = __this->get_manipulationHandler_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// SetupManipulation();
		PinManipulator_SetupManipulation_m7B2F624C219950A56C8203289876BA9B65F25563(__this, /*hidden argument*/NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::.ctor(UnityEngine.Transform,UnityEngine.GameObject,Microsoft.MixedReality.WorldLocking.Examples.ManipulationEndedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManipulator__ctor_mF44F858648A6B04E2109E0BC0AE7520863924841 (PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___ownder0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab1, ManipulationEndedDelegate_t3F667BDD0876A1CE0E97765F48B4A6E64F182967 * ___ended2, const RuntimeMethod* method)
{
	{
		// : this(ownder, prefab, null, ended)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___ownder0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ___prefab1;
		ManipulationEndedDelegate_t3F667BDD0876A1CE0E97765F48B4A6E64F182967 * L_2 = ___ended2;
		PinManipulator__ctor_mB782A192BB79438DC8ADF07139FA8B0E644EAE9A(__this, L_0, L_1, (ManipulationStartedDelegate_tDE21ED8C580CF3E861222CBD24EC9E94B925A811 *)NULL, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::.ctor(UnityEngine.Transform,UnityEngine.GameObject,Microsoft.MixedReality.WorldLocking.Examples.ManipulationStartedDelegate,Microsoft.MixedReality.WorldLocking.Examples.ManipulationEndedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManipulator__ctor_mB782A192BB79438DC8ADF07139FA8B0E644EAE9A (PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___owner0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab1, ManipulationStartedDelegate_tDE21ED8C580CF3E861222CBD24EC9E94B925A811 * ___started2, ManipulationEndedDelegate_t3F667BDD0876A1CE0E97765F48B4A6E64F182967 * ___ended3, const RuntimeMethod* method)
{
	{
		// public PinManipulator(Transform owner, GameObject prefab, ManipulationStartedDelegate started, ManipulationEndedDelegate ended)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.owner = owner;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___owner0;
		__this->set_owner_1(L_0);
		// prefabFeelerRay = prefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ___prefab1;
		__this->set_prefabFeelerRay_2(L_1);
		// manipulationStarted = started;
		ManipulationStartedDelegate_tDE21ED8C580CF3E861222CBD24EC9E94B925A811 * L_2 = ___started2;
		__this->set_manipulationStarted_3(L_2);
		// manipulationEnded = ended;
		ManipulationEndedDelegate_t3F667BDD0876A1CE0E97765F48B4A6E64F182967 * L_3 = ___ended3;
		__this->set_manipulationEnded_4(L_3);
		// SetupFeelerRays();
		PinManipulator_SetupFeelerRays_mCB0B827BD5BF49D954B74AA8335DDFD9A5AC0D64(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::Startup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManipulator_Startup_m6995A7D306B090B0D9F2249CF22221142E2CB351 (PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * __this, const RuntimeMethod* method)
{
	{
		// SetupManipulation();
		PinManipulator_SetupManipulation_m7B2F624C219950A56C8203289876BA9B65F25563(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManipulator_Update_mC7D11B510637135AA07847062B47A9FE363614D4 (PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (feelerRays != null && feelerRays.gameObject.activeSelf)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_feelerRays_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_feelerRays_8();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// feelerRays.transform.SetGlobalPose(owner.GetGlobalPose());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_feelerRays_8();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = __this->get_owner_1();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_8;
		L_8 = TransformExtensions_GetGlobalPose_m4FBC5E1D7A46F16B2129F97B406AA81762962C35(L_7, /*hidden argument*/NULL);
		TransformExtensions_SetGlobalPose_mFA74F73519542835BA146CFCC7546D700503D6B9(L_6, L_8, /*hidden argument*/NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManipulator_Shutdown_mC26A494915B94851D65CBDF9C8DC073CB1E9EC4A (PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * __this, const RuntimeMethod* method)
{
	{
		// TakeDownFeelerRays();
		PinManipulator_TakeDownFeelerRays_m69F4B4B2F1B29E8B7C6E20EA99E72BAF56C4D27A(__this, /*hidden argument*/NULL);
		// TakeDownManipulation();
		PinManipulator_TakeDownManipulation_mD332EDD86D32DBA4B072298D5B73D407EB2B1A72(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::GetFeelerRayParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * PinManipulator_GetFeelerRayParent_mAC7A50F6453DB2F501CBC284CDD1F3273C65EDE1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B82B18AD1782E13583CFEE352CDD28F31D8679B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (feelerRayParent == null)
		IL2CPP_RUNTIME_CLASS_INIT(PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ((PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_StaticFields*)il2cpp_codegen_static_fields_for(PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_il2cpp_TypeInfo_var))->get_feelerRayParent_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// var go = new GameObject("Feeler Rays Group Parent");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_2, _stringLiteral7B82B18AD1782E13583CFEE352CDD28F31D8679B, /*hidden argument*/NULL);
		// feelerRayParent = go.transform;
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_il2cpp_TypeInfo_var);
		((PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_StaticFields*)il2cpp_codegen_static_fields_for(PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_il2cpp_TypeInfo_var))->set_feelerRayParent_9(L_3);
	}

IL_0021:
	{
		// return feelerRayParent;
		IL2CPP_RUNTIME_CLASS_INIT(PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = ((PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_StaticFields*)il2cpp_codegen_static_fields_for(PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_il2cpp_TypeInfo_var))->get_feelerRayParent_9();
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::SetupFeelerRays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManipulator_SetupFeelerRays_mCB0B827BD5BF49D954B74AA8335DDFD9A5AC0D64 (PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (feelerRays == null && prefabFeelerRay != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_feelerRays_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_prefabFeelerRay_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// feelerRays = GameObject.Instantiate(prefabFeelerRay, GetFeelerRayParent());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_prefabFeelerRay_2();
		IL2CPP_RUNTIME_CLASS_INIT(PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = PinManipulator_GetFeelerRayParent_mAC7A50F6453DB2F501CBC284CDD1F3273C65EDE1(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_4, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		__this->set_feelerRays_8(L_6);
	}

IL_0032:
	{
		// if (feelerRays != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_feelerRays_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		// feelerRays.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_feelerRays_8();
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::TakeDownFeelerRays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManipulator_TakeDownFeelerRays_m69F4B4B2F1B29E8B7C6E20EA99E72BAF56C4D27A (PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (feelerRays != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_feelerRays_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// GameObject.Destroy(feelerRays);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_feelerRays_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// if (feelerRayParent != null)
		IL2CPP_RUNTIME_CLASS_INIT(PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = ((PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_StaticFields*)il2cpp_codegen_static_fields_for(PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_il2cpp_TypeInfo_var))->get_feelerRayParent_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		// if (feelerRayParent.transform.childCount == 0)
		IL2CPP_RUNTIME_CLASS_INIT(PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = ((PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_StaticFields*)il2cpp_codegen_static_fields_for(PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_il2cpp_TypeInfo_var))->get_feelerRayParent_9();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		// GameObject.Destroy(feelerRayParent.gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = ((PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_StaticFields*)il2cpp_codegen_static_fields_for(PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_il2cpp_TypeInfo_var))->get_feelerRayParent_9();
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_9, /*hidden argument*/NULL);
		// feelerRayParent = null;
		((PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_StaticFields*)il2cpp_codegen_static_fields_for(PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_il2cpp_TypeInfo_var))->set_feelerRayParent_9((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::ShowFeelerRays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManipulator_ShowFeelerRays_m2813F3286AC3F4EDE3D641595BBEDC553B13BDD2 (PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (feelerRays != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_feelerRays_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		// feelerRays.transform.SetGlobalPose(owner.GetGlobalPose());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_feelerRays_8();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_owner_1();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_5;
		L_5 = TransformExtensions_GetGlobalPose_m4FBC5E1D7A46F16B2129F97B406AA81762962C35(L_4, /*hidden argument*/NULL);
		TransformExtensions_SetGlobalPose_mFA74F73519542835BA146CFCC7546D700503D6B9(L_3, L_5, /*hidden argument*/NULL);
		// feelerRays.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_feelerRays_8();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::HideFeelerRays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManipulator_HideFeelerRays_m6B7E8C5AD8EE804EA99CCA9A249D20B43174A0F3 (PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (feelerRays != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_feelerRays_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// feelerRays.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_feelerRays_8();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::SetupManipulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManipulator_SetupManipulation_m7B2F624C219950A56C8203289876BA9B65F25563 (PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A_m709576930557497FED624473DFA5CBFAB9FFFD05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBoundingBox_tA8279F2A60922226778FBAE32762501395F477A1_m63FD6B1F77791B5142173669B0766859FBADB58A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisFixedRotationToWorldConstraint_t6E679FB9DA77F87B06F34E9824A85A73354CBEAB_m5C7DE39BF227B2457097A37DAA985181A6366DCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A_m94BE0BF48B4D50E5DB4731F254654647CFFC6725_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisNearInteractionGrabbable_tC638302907B386074B3B1B65568C18097BF1BCEF_m6F533CF22B0474A04C2B1A98CDF63CC0A4405632_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A_m33727D702B5BFB1E887C61522683758C62F86027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRotationAxisConstraint_t3D65F29C05CD4E1C12723D07A3E026C45825302E_m65B8ECE1671815BA392AAF8A6CC3744A1BCFEC37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PinManipulator_BeginManipulation_m2C9E76E9FAEC239D823F25B2636910EB3865B821_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PinManipulator_BeginManipulation_m5694015069A458F5BDFDDDD18A49F03EBE1123A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PinManipulator_FinishManipulation_m6918B71B9F0CEC66354348B19B2E8FCF6E648810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PinManipulator_FinishManipulation_m89776A45DF924FC62F61282A1DBDD1BED49A78B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m4F277527BC123D3B17B4AD12E6E9F5A10FBFE14C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t73174C87AEE037BF43DD95B66D00BCD7F7A7B4E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mE5431134F630389C71A303A726B8813D541C5139_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	MinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A * V_2 = NULL;
	{
		// TakeDownManipulation();
		PinManipulator_TakeDownManipulation_mD332EDD86D32DBA4B072298D5B73D407EB2B1A72(__this, /*hidden argument*/NULL);
		// if (userOriented)
		bool L_0 = __this->get_userOriented_0();
		if (!L_0)
		{
			goto IL_00f6;
		}
	}
	{
		// boundingBox = owner.gameObject.AddComponent<BoundingBox>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_owner_1();
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1 * L_3;
		L_3 = GameObject_AddComponent_TisBoundingBox_tA8279F2A60922226778FBAE32762501395F477A1_m63FD6B1F77791B5142173669B0766859FBADB58A(L_2, /*hidden argument*/GameObject_AddComponent_TisBoundingBox_tA8279F2A60922226778FBAE32762501395F477A1_m63FD6B1F77791B5142173669B0766859FBADB58A_RuntimeMethod_var);
		__this->set_boundingBox_5(L_3);
		// boundingBox.HideElementsInInspector = false;
		BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1 * L_4 = __this->get_boundingBox_5();
		NullCheck(L_4);
		BoundingBox_set_HideElementsInInspector_mDC4C25576824AE103F8F82E99DC5F9333173CEE7(L_4, (bool)0, /*hidden argument*/NULL);
		// boundingBox.BoundingBoxActivation = BoundingBox.BoundingBoxActivationType.ActivateByProximityAndPointer;
		BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1 * L_5 = __this->get_boundingBox_5();
		NullCheck(L_5);
		BoundingBox_set_BoundingBoxActivation_mAF1ECC76C4DA35BCB2D124549805AB3EA218E948(L_5, 3, /*hidden argument*/NULL);
		// boundingBox.RotateStarted.AddListener(BeginManipulation);
		BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1 * L_6 = __this->get_boundingBox_5();
		NullCheck(L_6);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_7 = L_6->get_RotateStarted_46();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_8 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_8, __this, (intptr_t)((intptr_t)PinManipulator_BeginManipulation_m5694015069A458F5BDFDDDD18A49F03EBE1123A9_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_7, L_8, /*hidden argument*/NULL);
		// boundingBox.RotateStopped.AddListener(FinishManipulation);
		BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1 * L_9 = __this->get_boundingBox_5();
		NullCheck(L_9);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_10 = L_9->get_RotateStopped_47();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_11 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_11, __this, (intptr_t)((intptr_t)PinManipulator_FinishManipulation_m6918B71B9F0CEC66354348B19B2E8FCF6E648810_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_10, L_11, /*hidden argument*/NULL);
		// boundingBox.ScaleStarted.AddListener(BeginManipulation);
		BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1 * L_12 = __this->get_boundingBox_5();
		NullCheck(L_12);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_13 = L_12->get_ScaleStarted_48();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_14 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_14, __this, (intptr_t)((intptr_t)PinManipulator_BeginManipulation_m5694015069A458F5BDFDDDD18A49F03EBE1123A9_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_13);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_13, L_14, /*hidden argument*/NULL);
		// boundingBox.ScaleStopped.AddListener(FinishManipulation);
		BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1 * L_15 = __this->get_boundingBox_5();
		NullCheck(L_15);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_16 = L_15->get_ScaleStopped_49();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_17 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_17, __this, (intptr_t)((intptr_t)PinManipulator_FinishManipulation_m6918B71B9F0CEC66354348B19B2E8FCF6E648810_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_16);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_16, L_17, /*hidden argument*/NULL);
		// float maxScaleFactor = 8.0f;
		V_0 = (8.0f);
		// float minScaleFactor = 0.2f;
		V_1 = (0.200000003f);
		// MinMaxScaleConstraint scaleHandler = owner.GetComponent<MinMaxScaleConstraint>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = __this->get_owner_1();
		NullCheck(L_18);
		MinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A * L_19;
		L_19 = Component_GetComponent_TisMinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A_m709576930557497FED624473DFA5CBFAB9FFFD05(L_18, /*hidden argument*/Component_GetComponent_TisMinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A_m709576930557497FED624473DFA5CBFAB9FFFD05_RuntimeMethod_var);
		V_2 = L_19;
		// if (scaleHandler == null)
		MinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A * L_20 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_20, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00e1;
		}
	}
	{
		// scaleHandler = owner.gameObject.AddComponent<MinMaxScaleConstraint>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = __this->get_owner_1();
		NullCheck(L_22);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		MinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A * L_24;
		L_24 = GameObject_AddComponent_TisMinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A_m94BE0BF48B4D50E5DB4731F254654647CFFC6725(L_23, /*hidden argument*/GameObject_AddComponent_TisMinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A_m94BE0BF48B4D50E5DB4731F254654647CFFC6725_RuntimeMethod_var);
		V_2 = L_24;
	}

IL_00e1:
	{
		// scaleHandler.RelativeToInitialState = true;
		MinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A * L_25 = V_2;
		NullCheck(L_25);
		MinMaxScaleConstraint_set_RelativeToInitialState_m8AD825F9A583FE839B52860FFC4DA3D981D32873(L_25, (bool)1, /*hidden argument*/NULL);
		// scaleHandler.ScaleMaximum = maxScaleFactor;
		MinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A * L_26 = V_2;
		float L_27 = V_0;
		NullCheck(L_26);
		MinMaxScaleConstraint_set_ScaleMaximum_mA5CB9483D2E5789735DEAC178DB14272EC492C35(L_26, L_27, /*hidden argument*/NULL);
		// scaleHandler.ScaleMinimum = minScaleFactor;
		MinMaxScaleConstraint_t1071B8E85562D2D87CC132F042E2E396FC1DCD3A * L_28 = V_2;
		float L_29 = V_1;
		NullCheck(L_28);
		MinMaxScaleConstraint_set_ScaleMinimum_m73E75D0F5813796247107F228778A7806C2B62C7(L_28, L_29, /*hidden argument*/NULL);
	}

IL_00f6:
	{
		// manipulationHandler = owner.gameObject.AddComponent<ObjectManipulator>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30 = __this->get_owner_1();
		NullCheck(L_30);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31;
		L_31 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A * L_32;
		L_32 = GameObject_AddComponent_TisObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A_m33727D702B5BFB1E887C61522683758C62F86027(L_31, /*hidden argument*/GameObject_AddComponent_TisObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A_m33727D702B5BFB1E887C61522683758C62F86027_RuntimeMethod_var);
		__this->set_manipulationHandler_6(L_32);
		// var rotationAxisConstraint = owner.gameObject.AddComponent<RotationAxisConstraint>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = __this->get_owner_1();
		NullCheck(L_33);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34;
		L_34 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		RotationAxisConstraint_t3D65F29C05CD4E1C12723D07A3E026C45825302E * L_35;
		L_35 = GameObject_AddComponent_TisRotationAxisConstraint_t3D65F29C05CD4E1C12723D07A3E026C45825302E_m65B8ECE1671815BA392AAF8A6CC3744A1BCFEC37(L_34, /*hidden argument*/GameObject_AddComponent_TisRotationAxisConstraint_t3D65F29C05CD4E1C12723D07A3E026C45825302E_m65B8ECE1671815BA392AAF8A6CC3744A1BCFEC37_RuntimeMethod_var);
		// rotationAxisConstraint.HandType = Toolkit.Utilities.ManipulationHandFlags.OneHanded | Toolkit.Utilities.ManipulationHandFlags.TwoHanded;
		RotationAxisConstraint_t3D65F29C05CD4E1C12723D07A3E026C45825302E * L_36 = L_35;
		NullCheck(L_36);
		TransformConstraint_set_HandType_m000BFAAE272AA7FC5BCF326A9CA8DD9E2C5AF63B_inline(L_36, 3, /*hidden argument*/NULL);
		// rotationAxisConstraint.ProximityType = Toolkit.Utilities.ManipulationProximityFlags.Near | Toolkit.Utilities.ManipulationProximityFlags.Far;
		RotationAxisConstraint_t3D65F29C05CD4E1C12723D07A3E026C45825302E * L_37 = L_36;
		NullCheck(L_37);
		TransformConstraint_set_ProximityType_m5D2B986C13CEC2A385AAE028ED27CC863D9B3E37_inline(L_37, 3, /*hidden argument*/NULL);
		// rotationAxisConstraint.ConstraintOnRotation = 0;
		NullCheck(L_37);
		RotationAxisConstraint_set_ConstraintOnRotation_mC9E0A75D32B4975F1DBF7B5E5F359B338E10E442_inline(L_37, 0, /*hidden argument*/NULL);
		// var fixedRotationToWorldConstraint = owner.gameObject.AddComponent<FixedRotationToWorldConstraint>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38 = __this->get_owner_1();
		NullCheck(L_38);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39;
		L_39 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		FixedRotationToWorldConstraint_t6E679FB9DA77F87B06F34E9824A85A73354CBEAB * L_40;
		L_40 = GameObject_AddComponent_TisFixedRotationToWorldConstraint_t6E679FB9DA77F87B06F34E9824A85A73354CBEAB_m5C7DE39BF227B2457097A37DAA985181A6366DCA(L_39, /*hidden argument*/GameObject_AddComponent_TisFixedRotationToWorldConstraint_t6E679FB9DA77F87B06F34E9824A85A73354CBEAB_m5C7DE39BF227B2457097A37DAA985181A6366DCA_RuntimeMethod_var);
		// fixedRotationToWorldConstraint.HandType = Toolkit.Utilities.ManipulationHandFlags.OneHanded;
		FixedRotationToWorldConstraint_t6E679FB9DA77F87B06F34E9824A85A73354CBEAB * L_41 = L_40;
		NullCheck(L_41);
		TransformConstraint_set_HandType_m000BFAAE272AA7FC5BCF326A9CA8DD9E2C5AF63B_inline(L_41, 1, /*hidden argument*/NULL);
		// fixedRotationToWorldConstraint.ProximityType = Toolkit.Utilities.ManipulationProximityFlags.Near | Toolkit.Utilities.ManipulationProximityFlags.Far;
		NullCheck(L_41);
		TransformConstraint_set_ProximityType_m5D2B986C13CEC2A385AAE028ED27CC863D9B3E37_inline(L_41, 3, /*hidden argument*/NULL);
		// manipulationHandler.OnManipulationStarted.AddListener(BeginManipulation);
		ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A * L_42 = __this->get_manipulationHandler_6();
		NullCheck(L_42);
		ManipulationEvent_t72B794DBAD271C9FE714E404CD610357353EA7C6 * L_43;
		L_43 = ObjectManipulator_get_OnManipulationStarted_m796BFAE1D5783E297BA16417F6F96BC213F6F779_inline(L_42, /*hidden argument*/NULL);
		UnityAction_1_t73174C87AEE037BF43DD95B66D00BCD7F7A7B4E1 * L_44 = (UnityAction_1_t73174C87AEE037BF43DD95B66D00BCD7F7A7B4E1 *)il2cpp_codegen_object_new(UnityAction_1_t73174C87AEE037BF43DD95B66D00BCD7F7A7B4E1_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m4F277527BC123D3B17B4AD12E6E9F5A10FBFE14C(L_44, __this, (intptr_t)((intptr_t)PinManipulator_BeginManipulation_m2C9E76E9FAEC239D823F25B2636910EB3865B821_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m4F277527BC123D3B17B4AD12E6E9F5A10FBFE14C_RuntimeMethod_var);
		NullCheck(L_43);
		UnityEvent_1_AddListener_mE5431134F630389C71A303A726B8813D541C5139(L_43, L_44, /*hidden argument*/UnityEvent_1_AddListener_mE5431134F630389C71A303A726B8813D541C5139_RuntimeMethod_var);
		// manipulationHandler.OnManipulationEnded.AddListener(FinishManipulation);
		ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A * L_45 = __this->get_manipulationHandler_6();
		NullCheck(L_45);
		ManipulationEvent_t72B794DBAD271C9FE714E404CD610357353EA7C6 * L_46;
		L_46 = ObjectManipulator_get_OnManipulationEnded_m156B80707C728553A7539AA77F3B7D2650F872A3_inline(L_45, /*hidden argument*/NULL);
		UnityAction_1_t73174C87AEE037BF43DD95B66D00BCD7F7A7B4E1 * L_47 = (UnityAction_1_t73174C87AEE037BF43DD95B66D00BCD7F7A7B4E1 *)il2cpp_codegen_object_new(UnityAction_1_t73174C87AEE037BF43DD95B66D00BCD7F7A7B4E1_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m4F277527BC123D3B17B4AD12E6E9F5A10FBFE14C(L_47, __this, (intptr_t)((intptr_t)PinManipulator_FinishManipulation_m89776A45DF924FC62F61282A1DBDD1BED49A78B0_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m4F277527BC123D3B17B4AD12E6E9F5A10FBFE14C_RuntimeMethod_var);
		NullCheck(L_46);
		UnityEvent_1_AddListener_mE5431134F630389C71A303A726B8813D541C5139(L_46, L_47, /*hidden argument*/UnityEvent_1_AddListener_mE5431134F630389C71A303A726B8813D541C5139_RuntimeMethod_var);
		// nearGrabbable = owner.gameObject.AddComponent<NearInteractionGrabbable>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48 = __this->get_owner_1();
		NullCheck(L_48);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49;
		L_49 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		NearInteractionGrabbable_tC638302907B386074B3B1B65568C18097BF1BCEF * L_50;
		L_50 = GameObject_AddComponent_TisNearInteractionGrabbable_tC638302907B386074B3B1B65568C18097BF1BCEF_m6F533CF22B0474A04C2B1A98CDF63CC0A4405632(L_49, /*hidden argument*/GameObject_AddComponent_TisNearInteractionGrabbable_tC638302907B386074B3B1B65568C18097BF1BCEF_m6F533CF22B0474A04C2B1A98CDF63CC0A4405632_RuntimeMethod_var);
		__this->set_nearGrabbable_7(L_50);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::TakeDownManipulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManipulator_TakeDownManipulation_mD332EDD86D32DBA4B072298D5B73D407EB2B1A72 (PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * __this, const RuntimeMethod* method)
{
	{
		// boundingBox = null;
		__this->set_boundingBox_5((BoundingBox_tA8279F2A60922226778FBAE32762501395F477A1 *)NULL);
		// manipulationHandler = null;
		__this->set_manipulationHandler_6((ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A *)NULL);
		// nearGrabbable = null;
		__this->set_nearGrabbable_7((NearInteractionGrabbable_tC638302907B386074B3B1B65568C18097BF1BCEF *)NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::BeginManipulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManipulator_BeginManipulation_m5694015069A458F5BDFDDDD18A49F03EBE1123A9 (PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * __this, const RuntimeMethod* method)
{
	{
		// ShowFeelerRays();
		PinManipulator_ShowFeelerRays_m2813F3286AC3F4EDE3D641595BBEDC553B13BDD2(__this, /*hidden argument*/NULL);
		// if (manipulationStarted != null)
		ManipulationStartedDelegate_tDE21ED8C580CF3E861222CBD24EC9E94B925A811 * L_0 = __this->get_manipulationStarted_3();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// manipulationStarted();
		ManipulationStartedDelegate_tDE21ED8C580CF3E861222CBD24EC9E94B925A811 * L_1 = __this->get_manipulationStarted_3();
		NullCheck(L_1);
		ManipulationStartedDelegate_Invoke_m62C579A2C9B89D972B8CC7DE09A9132AA3D5A3E3(L_1, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::BeginManipulation(Microsoft.MixedReality.Toolkit.UI.ManipulationEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManipulator_BeginManipulation_m2C9E76E9FAEC239D823F25B2636910EB3865B821 (PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * __this, ManipulationEventData_t40C9E288184423B4BFB40876DF3F9C8F6565FB12 * ___eventData0, const RuntimeMethod* method)
{
	{
		// BeginManipulation();
		PinManipulator_BeginManipulation_m5694015069A458F5BDFDDDD18A49F03EBE1123A9(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::FinishManipulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManipulator_FinishManipulation_m6918B71B9F0CEC66354348B19B2E8FCF6E648810 (PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * __this, const RuntimeMethod* method)
{
	{
		// HideFeelerRays();
		PinManipulator_HideFeelerRays_m6B7E8C5AD8EE804EA99CCA9A249D20B43174A0F3(__this, /*hidden argument*/NULL);
		// if (manipulationEnded != null)
		ManipulationEndedDelegate_t3F667BDD0876A1CE0E97765F48B4A6E64F182967 * L_0 = __this->get_manipulationEnded_4();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// manipulationEnded();
		ManipulationEndedDelegate_t3F667BDD0876A1CE0E97765F48B4A6E64F182967 * L_1 = __this->get_manipulationEnded_4();
		NullCheck(L_1);
		ManipulationEndedDelegate_Invoke_m88E3747EC407B560D63AE05A8366B75050AA12AC(L_1, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::FinishManipulation(Microsoft.MixedReality.Toolkit.UI.ManipulationEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManipulator_FinishManipulation_m89776A45DF924FC62F61282A1DBDD1BED49A78B0 (PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * __this, ManipulationEventData_t40C9E288184423B4BFB40876DF3F9C8F6565FB12 * ___eventData0, const RuntimeMethod* method)
{
	{
		// FinishManipulation();
		PinManipulator_FinishManipulation_m6918B71B9F0CEC66354348B19B2E8FCF6E648810(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManipulator__cctor_m3B1218BD269749A51EA72E50309A6E91EA0D9D3E (const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Microsoft.MixedReality.WorldLocking.Examples.RayPins::get_ActivePin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RayPins_get_ActivePin_m1932B8EBFD0D36760080EA6E06C51D767671EF91 (RayPins_t80A83EA4F8A476C390F6A49E857652EB74E15575 * __this, const RuntimeMethod* method)
{
	{
		// public int ActivePin { get { return activePin; } set { activePin = value; } }
		int32_t L_0 = __this->get_activePin_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.RayPins::set_ActivePin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayPins_set_ActivePin_m74F8B06490BD89EE6E4BA99E53E7677E82880187 (RayPins_t80A83EA4F8A476C390F6A49E857652EB74E15575 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int ActivePin { get { return activePin; } set { activePin = value; } }
		int32_t L_0 = ___value0;
		__this->set_activePin_9(L_0);
		// public int ActivePin { get { return activePin; } set { activePin = value; } }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.RayPins::SetActivePin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayPins_SetActivePin_mFA6F894740AB78C7B57EC5612C2AD5C39175E9C7 (RayPins_t80A83EA4F8A476C390F6A49E857652EB74E15575 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		// public void SetActivePin(int i) { ActivePin = i; }
		int32_t L_0 = ___i0;
		RayPins_set_ActivePin_m74F8B06490BD89EE6E4BA99E53E7677E82880187_inline(__this, L_0, /*hidden argument*/NULL);
		// public void SetActivePin(int i) { ActivePin = i; }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.RayPins::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayPins_Start_m7F74EFD95D51BFB7BC1D1CC5C1843FA6817C3EB7 (RayPins_t80A83EA4F8A476C390F6A49E857652EB74E15575 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisOrienter_t1D850D1887AD89DD2EFDB94F24D1E9C57FA074E8_m7E43895EC882942C1B5968A0ED85181A8CBD96C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisInteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3_mFF4B3B02955DD127EBFD08074FDEB8454B220CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		InputSystemGlobalHandlerListener_Start_mB95BFCFEB3717C0CA1304E7FF18A1ED0C73D67BB(__this, /*hidden argument*/NULL);
		// orienter = gameObject.AddComponent<Orienter>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Orienter_t1D850D1887AD89DD2EFDB94F24D1E9C57FA074E8 * L_1;
		L_1 = GameObject_AddComponent_TisOrienter_t1D850D1887AD89DD2EFDB94F24D1E9C57FA074E8_m7E43895EC882942C1B5968A0ED85181A8CBD96C2(L_0, /*hidden argument*/GameObject_AddComponent_TisOrienter_t1D850D1887AD89DD2EFDB94F24D1E9C57FA074E8_m7E43895EC882942C1B5968A0ED85181A8CBD96C2_RuntimeMethod_var);
		__this->set_orienter_5(L_1);
		// CreateSpacePins();
		bool L_2;
		L_2 = RayPins_CreateSpacePins_mCECC686ABE6A810D43DFB7875D5EE6DBE3545687(__this, /*hidden argument*/NULL);
		// radioSet = gameObject.GetComponentInChildren<InteractableToggleCollection>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3 * L_4;
		L_4 = GameObject_GetComponentInChildren_TisInteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3_mFF4B3B02955DD127EBFD08074FDEB8454B220CE3(L_3, /*hidden argument*/GameObject_GetComponentInChildren_TisInteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3_mFF4B3B02955DD127EBFD08074FDEB8454B220CE3_RuntimeMethod_var);
		__this->set_radioSet_6(L_4);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.WorldLocking.Examples.RayPins::CreateSpacePins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RayPins_CreateSpacePins_mCECC686ABE6A810D43DFB7875D5EE6DBE3545687 (RayPins_t80A83EA4F8A476C390F6A49E857652EB74E15575 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0119A1E59498B6B1FA0BC59434091CEB3CD6FD36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mB3208B95CDCA713484F19943EA3416DBB458A782_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1A6C15CD0C7CDDAB010D34F34754D7246E86FC93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// ClearAll();
		RayPins_ClearAll_m5AC3DFDE7C6483F0E9A360CA6491F77ABBA5641E(__this, /*hidden argument*/NULL);
		// spacePins.Clear();
		List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56 * L_0 = __this->get_spacePins_7();
		NullCheck(L_0);
		List_1_Clear_mB3208B95CDCA713484F19943EA3416DBB458A782(L_0, /*hidden argument*/List_1_Clear_mB3208B95CDCA713484F19943EA3416DBB458A782_RuntimeMethod_var);
		// for (int i = 0; i < spacePinPoints.Count; ++i)
		V_0 = 0;
		goto IL_0036;
	}

IL_0015:
	{
		// spacePins.Add(CreateSpacePin(spacePinPoints[i]));
		List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56 * L_1 = __this->get_spacePins_7();
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_2 = __this->get_spacePinPoints_8();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		SpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA * L_5;
		L_5 = RayPins_CreateSpacePin_mF602FFBFB339793D9E99EEF478308C061A3142BA(__this, L_4, /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_Add_m0119A1E59498B6B1FA0BC59434091CEB3CD6FD36(L_1, L_5, /*hidden argument*/List_1_Add_m0119A1E59498B6B1FA0BC59434091CEB3CD6FD36_RuntimeMethod_var);
		// for (int i = 0; i < spacePinPoints.Count; ++i)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0036:
	{
		// for (int i = 0; i < spacePinPoints.Count; ++i)
		int32_t L_7 = V_0;
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_8 = __this->get_spacePinPoints_8();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_inline(L_8, /*hidden argument*/List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0015;
		}
	}
	{
		// return spacePins.Count > 0;
		List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56 * L_10 = __this->get_spacePins_7();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m1A6C15CD0C7CDDAB010D34F34754D7246E86FC93_inline(L_10, /*hidden argument*/List_1_get_Count_m1A6C15CD0C7CDDAB010D34F34754D7246E86FC93_RuntimeMethod_var);
		return (bool)((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
	}
}
// Microsoft.MixedReality.WorldLocking.Core.SpacePinOrientable Microsoft.MixedReality.WorldLocking.Examples.RayPins::CreateSpacePin(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA * RayPins_CreateSpacePin_mF602FFBFB339793D9E99EEF478308C061A3142BA (RayPins_t80A83EA4F8A476C390F6A49E857652EB74E15575 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA_m34AC37F82442D467745DA9AA267BDEC17EC8A48D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SpacePinOrientable pin = t.gameObject.AddComponent<SpacePinOrientable>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___t0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		SpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA * L_2;
		L_2 = GameObject_AddComponent_TisSpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA_m34AC37F82442D467745DA9AA267BDEC17EC8A48D(L_1, /*hidden argument*/GameObject_AddComponent_TisSpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA_m34AC37F82442D467745DA9AA267BDEC17EC8A48D_RuntimeMethod_var);
		// pin.Orienter = orienter;
		SpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA * L_3 = L_2;
		RuntimeObject* L_4 = __this->get_orienter_5();
		NullCheck(L_3);
		SpacePinOrientable_set_Orienter_m019C749B29C6B6A3A7078F8759F623FC854B6DCE(L_3, L_4, /*hidden argument*/NULL);
		// return pin;
		return L_3;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.RayPins::ClearAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayPins_ClearAll_m5AC3DFDE7C6483F0E9A360CA6491F77ABBA5641E (RayPins_t80A83EA4F8A476C390F6A49E857652EB74E15575 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1A6C15CD0C7CDDAB010D34F34754D7246E86FC93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m321A0F9B2CBFB4475A0D7369774E6E65A0ED105F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < spacePins.Count; ++i)
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		// spacePins[i].Reset();
		List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56 * L_0 = __this->get_spacePins_7();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		SpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA * L_2;
		L_2 = List_1_get_Item_m321A0F9B2CBFB4475A0D7369774E6E65A0ED105F_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m321A0F9B2CBFB4475A0D7369774E6E65A0ED105F_RuntimeMethod_var);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(9 /* System.Void Microsoft.MixedReality.WorldLocking.Core.SpacePin::Reset() */, L_2);
		// for (int i = 0; i < spacePins.Count; ++i)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0019:
	{
		// for (int i = 0; i < spacePins.Count; ++i)
		int32_t L_4 = V_0;
		List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56 * L_5 = __this->get_spacePins_7();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m1A6C15CD0C7CDDAB010D34F34754D7246E86FC93_inline(L_5, /*hidden argument*/List_1_get_Count_m1A6C15CD0C7CDDAB010D34F34754D7246E86FC93_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// WorldLockingManager.GetInstance().Reset();
		WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_7;
		L_7 = WorldLockingManager_GetInstance_m1A558A9E776F5A09360EE417191DF29163CE4B05(/*hidden argument*/NULL);
		NullCheck(L_7);
		WorldLockingManager_Reset_mB018309D3E41EE23BE22D306999736D5C30719A7(L_7, /*hidden argument*/NULL);
		// activePin = -1;
		__this->set_activePin_9((-1));
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.RayPins::HandleHit(Microsoft.MixedReality.WorldLocking.Examples.RayPins/RayHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayPins_HandleHit_m62050BD09E6EF3903987915B45F2DD7FABB0D171 (RayPins_t80A83EA4F8A476C390F6A49E857652EB74E15575 * __this, RayHit_tD3531714B864673B28BD5395D21F090D44267DC6  ___rayHit0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1A6C15CD0C7CDDAB010D34F34754D7246E86FC93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m321A0F9B2CBFB4475A0D7369774E6E65A0ED105F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (activePin >= 0 && activePin < spacePins.Count)
		int32_t L_0 = __this->get_activePin_9();
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_1 = __this->get_activePin_9();
		List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56 * L_2 = __this->get_spacePins_7();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m1A6C15CD0C7CDDAB010D34F34754D7246E86FC93_inline(L_2, /*hidden argument*/List_1_get_Count_m1A6C15CD0C7CDDAB010D34F34754D7246E86FC93_RuntimeMethod_var);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0038;
		}
	}
	{
		// spacePins[activePin].SetFrozenPosition(rayHit.hitPosition);
		List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56 * L_4 = __this->get_spacePins_7();
		int32_t L_5 = __this->get_activePin_9();
		NullCheck(L_4);
		SpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA * L_6;
		L_6 = List_1_get_Item_m321A0F9B2CBFB4475A0D7369774E6E65A0ED105F_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_m321A0F9B2CBFB4475A0D7369774E6E65A0ED105F_RuntimeMethod_var);
		RayHit_tD3531714B864673B28BD5395D21F090D44267DC6  L_7 = ___rayHit0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = L_7.get_hitPosition_1();
		NullCheck(L_6);
		SpacePinOrientable_SetFrozenPosition_m6D8DCCD81FFC133D669B58175B46886FD9C797E8(L_6, L_8, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.RayPins::RegisterHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayPins_RegisterHandlers_mF8BC8C6A3C46BB61FAC7AA50F6FC3C8B132AB609 (RayPins_t80A83EA4F8A476C390F6A49E857652EB74E15575 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_RegisterHandler_TisIMixedRealityPointerHandler_t4AA3CD5AE323E36508E2F319C9D03C7E3F9DAA99_m4EC12F6AF105651978448E47AE0B2D0A295B3483_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkit_GetService_TisIMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_m330D38E8B3326095CEBD76787F0985C8F6A82D39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// MixedRealityToolkit.Instance.GetService<IMixedRealityInputSystem>()?.RegisterHandler<IMixedRealityPointerHandler>(this);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE * L_0;
		L_0 = MixedRealityToolkit_get_Instance_m476E2053BA79D9D8A2F8941441AE2AE1D656B8F3_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = MixedRealityToolkit_GetService_TisIMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_m330D38E8B3326095CEBD76787F0985C8F6A82D39(L_0, (String_t*)NULL, (bool)1, /*hidden argument*/MixedRealityToolkit_GetService_TisIMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_m330D38E8B3326095CEBD76787F0985C8F6A82D39_RuntimeMethod_var);
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		NullCheck(G_B2_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_RegisterHandler_TisIMixedRealityPointerHandler_t4AA3CD5AE323E36508E2F319C9D03C7E3F9DAA99_m4EC12F6AF105651978448E47AE0B2D0A295B3483_RuntimeMethod_var, G_B2_0, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.RayPins::UnregisterHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayPins_UnregisterHandlers_m267FA003047CBC4D16E7B4DD7429A814439F877B (RayPins_t80A83EA4F8A476C390F6A49E857652EB74E15575 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealityPointerHandler_t4AA3CD5AE323E36508E2F319C9D03C7E3F9DAA99_m4E98E9CC54DD1412E31FFA6243F9BF857FAA1797_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkit_GetService_TisIMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_m330D38E8B3326095CEBD76787F0985C8F6A82D39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// MixedRealityToolkit.Instance.GetService<IMixedRealityInputSystem>()?.UnregisterHandler<IMixedRealityPointerHandler>(this);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE * L_0;
		L_0 = MixedRealityToolkit_get_Instance_m476E2053BA79D9D8A2F8941441AE2AE1D656B8F3_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = MixedRealityToolkit_GetService_TisIMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_m330D38E8B3326095CEBD76787F0985C8F6A82D39(L_0, (String_t*)NULL, (bool)1, /*hidden argument*/MixedRealityToolkit_GetService_TisIMixedRealityInputSystem_t0EDEF390D5E8DB56C2251E372228BADDA9F6CF24_m330D38E8B3326095CEBD76787F0985C8F6A82D39_RuntimeMethod_var);
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		NullCheck(G_B2_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealityPointerHandler_t4AA3CD5AE323E36508E2F319C9D03C7E3F9DAA99_m4E98E9CC54DD1412E31FFA6243F9BF857FAA1797_RuntimeMethod_var, G_B2_0, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.RayPins::OnPointerClicked(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayPins_OnPointerClicked_m08A10BE589B2A0947FA7479E8DEE1500F77D0919 (RayPins_t80A83EA4F8A476C390F6A49E857652EB74E15575 * __this, MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_t7F0507B7CE0C9CDF14089C77B4F5A079AE031B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RayHit_tD3531714B864673B28BD5395D21F090D44267DC6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// var pointerResult = eventData.Pointer.Result;
		MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * L_0 = ___eventData0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = MixedRealityPointerEventData_get_Pointer_m3A233E75C86D4B0B230A0242BB5ED9A8715F9B08_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(22 /* Microsoft.MixedReality.Toolkit.Input.IPointerResult Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Result() */, IMixedRealityPointer_t7F0507B7CE0C9CDF14089C77B4F5A079AE031B4D_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		// var rayHit = new RayHit(pointerResult);
		RuntimeObject* L_3 = V_0;
		RayHit__ctor_m8305D5B2DA14178E55ED810927854BBA54C6F876((RayHit_tD3531714B864673B28BD5395D21F090D44267DC6 *)(&V_1), L_3, /*hidden argument*/NULL);
		// int uiLayer = LayerMask.GetMask("UI");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F);
		int32_t L_6;
		L_6 = LayerMask_GetMask_m46D2185735D02C7DEE01E3BAAF4A39F2AB46F67F(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		// if (rayHit.gameObject == null || ((1 << rayHit.gameObject.layer) & uiLayer) == 0)
		RayHit_tD3531714B864673B28BD5395D21F090D44267DC6  L_7 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_7.get_gameObject_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_004a;
		}
	}
	{
		RayHit_tD3531714B864673B28BD5395D21F090D44267DC6  L_10 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = L_10.get_gameObject_3();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_11, /*hidden argument*/NULL);
		int32_t L_13 = V_2;
		if (((int32_t)((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)31)))))&(int32_t)L_13)))
		{
			goto IL_0051;
		}
	}

IL_004a:
	{
		// HandleHit(rayHit);
		RayHit_tD3531714B864673B28BD5395D21F090D44267DC6  L_14 = V_1;
		RayPins_HandleHit_m62050BD09E6EF3903987915B45F2DD7FABB0D171(__this, L_14, /*hidden argument*/NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.RayPins::OnPointerUp(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayPins_OnPointerUp_m5A5913CBBB7343342520B9960572CF76B29392D3 (RayPins_t80A83EA4F8A476C390F6A49E857652EB74E15575 * __this, MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * ___eventData0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.RayPins::OnPointerDown(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayPins_OnPointerDown_mF13BC08D3B38BCBF373AB3B2865CAB5A3030FB75 (RayPins_t80A83EA4F8A476C390F6A49E857652EB74E15575 * __this, MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * ___eventData0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.RayPins::OnPointerDragged(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayPins_OnPointerDragged_mE46D078F3B51CBF79E6EA5297B601701CB665606 (RayPins_t80A83EA4F8A476C390F6A49E857652EB74E15575 * __this, MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * ___eventData0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.RayPins::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayPins__ctor_mB69DA35163365435E8477D4EE8CA33FFEF075FB6 (RayPins_t80A83EA4F8A476C390F6A49E857652EB74E15575 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5F03E31D78BD2456C712D2A3B88EE7F7C0BDFA24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<SpacePinOrientable> spacePins = new List<SpacePinOrientable>();
		List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56 * L_0 = (List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56 *)il2cpp_codegen_object_new(List_1_tA8E89F9B3EFDF69C3B08F2889FC288B36C3B3F56_il2cpp_TypeInfo_var);
		List_1__ctor_m5F03E31D78BD2456C712D2A3B88EE7F7C0BDFA24(L_0, /*hidden argument*/List_1__ctor_m5F03E31D78BD2456C712D2A3B88EE7F7C0BDFA24_RuntimeMethod_var);
		__this->set_spacePins_7(L_0);
		// public List<Transform> spacePinPoints = new List<Transform>();
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_1 = (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *)il2cpp_codegen_object_new(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_il2cpp_TypeInfo_var);
		List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F(L_1, /*hidden argument*/List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F_RuntimeMethod_var);
		__this->set_spacePinPoints_8(L_1);
		// private int activePin = -1;
		__this->set_activePin_9((-1));
		InputSystemGlobalHandlerListener__ctor_m1DFA244E7E94A7AB4F2B8CF4E2A46D78E6118B48(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RemovableGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemovableGroup__ctor_m6A4E690A4D5224EAB8B6051FDA3D7569362DE832 (RemovableGroup_tB747F0765FAC888AA3C06D726D6186EAFE9778CF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.SpacePinManipulation::get_Prefab_FeelerRay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * SpacePinManipulation_get_Prefab_FeelerRay_mE31116FD05A181875D5B309D9BBDD5E5BE678A87 (SpacePinManipulation_tA67D55B37A96758AE9CE68C4A5792382C5353A79 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject Prefab_FeelerRay { get { return prefab_FeelerRay; } set { prefab_FeelerRay = value; } }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_prefab_FeelerRay_12();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.SpacePinManipulation::set_Prefab_FeelerRay(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacePinManipulation_set_Prefab_FeelerRay_m66118A66341CF3CDD5E2C4315F81DBD32CB0293F (SpacePinManipulation_tA67D55B37A96758AE9CE68C4A5792382C5353A79 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject Prefab_FeelerRay { get { return prefab_FeelerRay; } set { prefab_FeelerRay = value; } }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_prefab_FeelerRay_12(L_0);
		// public GameObject Prefab_FeelerRay { get { return prefab_FeelerRay; } set { prefab_FeelerRay = value; } }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.SpacePinManipulation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacePinManipulation_Start_m2BDD345C8ACFD4568FDCB5CBF20EF8A6144E80DC (SpacePinManipulation_tA67D55B37A96758AE9CE68C4A5792382C5353A79 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManipulationEndedDelegate_t3F667BDD0876A1CE0E97765F48B4A6E64F182967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManipulationStartedDelegate_tDE21ED8C580CF3E861222CBD24EC9E94B925A811_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		SpacePin_Start_m13B8F11526D6BCFDB2D348A7B41BDA49020B09A9(__this, /*hidden argument*/NULL);
		// pinManipulator = new PinManipulator(transform, Prefab_FeelerRay, OnStartManipulation, OnFinishManipulation);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = SpacePinManipulation_get_Prefab_FeelerRay_mE31116FD05A181875D5B309D9BBDD5E5BE678A87_inline(__this, /*hidden argument*/NULL);
		ManipulationStartedDelegate_tDE21ED8C580CF3E861222CBD24EC9E94B925A811 * L_2 = (ManipulationStartedDelegate_tDE21ED8C580CF3E861222CBD24EC9E94B925A811 *)il2cpp_codegen_object_new(ManipulationStartedDelegate_tDE21ED8C580CF3E861222CBD24EC9E94B925A811_il2cpp_TypeInfo_var);
		ManipulationStartedDelegate__ctor_m8F68FF26F9547079FA57A33F1ECAD447FCDF2875(L_2, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 12)), /*hidden argument*/NULL);
		ManipulationEndedDelegate_t3F667BDD0876A1CE0E97765F48B4A6E64F182967 * L_3 = (ManipulationEndedDelegate_t3F667BDD0876A1CE0E97765F48B4A6E64F182967 *)il2cpp_codegen_object_new(ManipulationEndedDelegate_t3F667BDD0876A1CE0E97765F48B4A6E64F182967_il2cpp_TypeInfo_var);
		ManipulationEndedDelegate__ctor_m39F381E644BBB1853319CA77A3FA77F9808CE2CC(L_3, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 13)), /*hidden argument*/NULL);
		PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * L_4 = (PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 *)il2cpp_codegen_object_new(PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_il2cpp_TypeInfo_var);
		PinManipulator__ctor_mB782A192BB79438DC8ADF07139FA8B0E644EAE9A(L_4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->set_pinManipulator_13(L_4);
		// pinManipulator.UserOriented = true;
		PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * L_5 = __this->get_pinManipulator_13();
		NullCheck(L_5);
		PinManipulator_set_UserOriented_m57B51B39113F5F08A3A148AC024BB2B5EB2E485E(L_5, (bool)1, /*hidden argument*/NULL);
		// pinManipulator.Startup();
		PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * L_6 = __this->get_pinManipulator_13();
		NullCheck(L_6);
		PinManipulator_Startup_m6995A7D306B090B0D9F2249CF22221142E2CB351(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.SpacePinManipulation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacePinManipulation_Update_mF5354497C13D7107564DEB8271F36582F0826182 (SpacePinManipulation_tA67D55B37A96758AE9CE68C4A5792382C5353A79 * __this, const RuntimeMethod* method)
{
	{
		// pinManipulator.Update();
		PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * L_0 = __this->get_pinManipulator_13();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(4 /* System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::Update() */, L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.SpacePinManipulation::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacePinManipulation_OnDestroy_m5761EA1CE03B3354844A5A1400C0ECD3C24F8637 (SpacePinManipulation_tA67D55B37A96758AE9CE68C4A5792382C5353A79 * __this, const RuntimeMethod* method)
{
	{
		// base.OnDestroy();
		SpacePin_OnDestroy_mD2592616FE49528B791125BAF95F6188BBA7F8A6(__this, /*hidden argument*/NULL);
		// pinManipulator.Shutdown();
		PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * L_0 = __this->get_pinManipulator_13();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(5 /* System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::Shutdown() */, L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.SpacePinManipulation::OnStartManipulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacePinManipulation_OnStartManipulation_mE9CA25F08CA9E74289637EA11938D964A437FB2C (SpacePinManipulation_tA67D55B37A96758AE9CE68C4A5792382C5353A79 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.SpacePinManipulation::OnFinishManipulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacePinManipulation_OnFinishManipulation_mAD98FD78C118F7436C6E1086988058C362FED64D (SpacePinManipulation_tA67D55B37A96758AE9CE68C4A5792382C5353A79 * __this, const RuntimeMethod* method)
{
	{
		// if (WorldLockingManager.GetInstance().ApplyAdjustment)
		WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_0;
		L_0 = WorldLockingManager_GetInstance_m1A558A9E776F5A09360EE417191DF29163CE4B05(/*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = WorldLockingManager_get_ApplyAdjustment_m698EDB0FDF547D9FB071235420129B83517B647F(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// SetFrozenPose(ExtractModelPose());
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_2;
		L_2 = SpacePin_ExtractModelPose_mF6649CD52E1AA0992C347CD5FADA75C033323C46(__this, /*hidden argument*/NULL);
		SpacePin_SetFrozenPose_mCDC5015CC8A3377FB8F08321BD3BB32ADE4D2D9F(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0019:
	{
		// SetSpongyPose(ExtractModelPose());
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_3;
		L_3 = SpacePin_ExtractModelPose_mF6649CD52E1AA0992C347CD5FADA75C033323C46(__this, /*hidden argument*/NULL);
		SpacePin_SetSpongyPose_mCAF7BDAC5B814CFCF78CD49BA82B5CA5F131002A(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.SpacePinManipulation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacePinManipulation__ctor_m5BCF6E3F33C2E658F03C6B1DDDC5EC27AD8F884D (SpacePinManipulation_tA67D55B37A96758AE9CE68C4A5792382C5353A79 * __this, const RuntimeMethod* method)
{
	{
		SpacePin__ctor_m8FCE9243F9698B6618D6BEA9D5E4642463F8318C(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Examples.SpacePinOrientableManipulation::get_Prefab_FeelerRay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * SpacePinOrientableManipulation_get_Prefab_FeelerRay_mA589644F3229D6D731CA280527CD92D9B79C919D (SpacePinOrientableManipulation_t63D9969EF984ADC57612A9E05072AE2C9ED0A107 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject Prefab_FeelerRay { get { return prefab_FeelerRay; } set { prefab_FeelerRay = value; } }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_prefab_FeelerRay_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.SpacePinOrientableManipulation::set_Prefab_FeelerRay(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacePinOrientableManipulation_set_Prefab_FeelerRay_m2B8E67900B7DE5DFF96D78024D8A67034D5FA035 (SpacePinOrientableManipulation_t63D9969EF984ADC57612A9E05072AE2C9ED0A107 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject Prefab_FeelerRay { get { return prefab_FeelerRay; } set { prefab_FeelerRay = value; } }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_prefab_FeelerRay_14(L_0);
		// public GameObject Prefab_FeelerRay { get { return prefab_FeelerRay; } set { prefab_FeelerRay = value; } }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.WorldLocking.Examples.SpacePinOrientableManipulation::get_AllowRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpacePinOrientableManipulation_get_AllowRotation_mDE9C380BE22EDE2DD00A7F1665F88F28E537C350 (SpacePinOrientableManipulation_t63D9969EF984ADC57612A9E05072AE2C9ED0A107 * __this, const RuntimeMethod* method)
{
	{
		// public bool AllowRotation { get { return allowRotation; } set { allowRotation = value; } }
		bool L_0 = __this->get_allowRotation_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.SpacePinOrientableManipulation::set_AllowRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacePinOrientableManipulation_set_AllowRotation_m8DEFF9ECBA01B2B275ED81FB85C5AEDE5A6C8DD2 (SpacePinOrientableManipulation_t63D9969EF984ADC57612A9E05072AE2C9ED0A107 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool AllowRotation { get { return allowRotation; } set { allowRotation = value; } }
		bool L_0 = ___value0;
		__this->set_allowRotation_15(L_0);
		// public bool AllowRotation { get { return allowRotation; } set { allowRotation = value; } }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.SpacePinOrientableManipulation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacePinOrientableManipulation_Start_m4B82307069DD527002A6AE5E6ACA1E5500E5D92C (SpacePinOrientableManipulation_t63D9969EF984ADC57612A9E05072AE2C9ED0A107 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManipulationEndedDelegate_t3F667BDD0876A1CE0E97765F48B4A6E64F182967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManipulationStartedDelegate_tDE21ED8C580CF3E861222CBD24EC9E94B925A811_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		SpacePinOrientable_Start_m051F09F70F6BA03BE4634205B51A82418B19DE4E(__this, /*hidden argument*/NULL);
		// pinManipulator = new PinManipulator(transform, Prefab_FeelerRay, OnStartManipulation, OnFinishManipulation);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = SpacePinOrientableManipulation_get_Prefab_FeelerRay_mA589644F3229D6D731CA280527CD92D9B79C919D_inline(__this, /*hidden argument*/NULL);
		ManipulationStartedDelegate_tDE21ED8C580CF3E861222CBD24EC9E94B925A811 * L_2 = (ManipulationStartedDelegate_tDE21ED8C580CF3E861222CBD24EC9E94B925A811 *)il2cpp_codegen_object_new(ManipulationStartedDelegate_tDE21ED8C580CF3E861222CBD24EC9E94B925A811_il2cpp_TypeInfo_var);
		ManipulationStartedDelegate__ctor_m8F68FF26F9547079FA57A33F1ECAD447FCDF2875(L_2, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 18)), /*hidden argument*/NULL);
		ManipulationEndedDelegate_t3F667BDD0876A1CE0E97765F48B4A6E64F182967 * L_3 = (ManipulationEndedDelegate_t3F667BDD0876A1CE0E97765F48B4A6E64F182967 *)il2cpp_codegen_object_new(ManipulationEndedDelegate_t3F667BDD0876A1CE0E97765F48B4A6E64F182967_il2cpp_TypeInfo_var);
		ManipulationEndedDelegate__ctor_m39F381E644BBB1853319CA77A3FA77F9808CE2CC(L_3, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 19)), /*hidden argument*/NULL);
		PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * L_4 = (PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 *)il2cpp_codegen_object_new(PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60_il2cpp_TypeInfo_var);
		PinManipulator__ctor_mB782A192BB79438DC8ADF07139FA8B0E644EAE9A(L_4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->set_pinManipulator_16(L_4);
		// pinManipulator.UserOriented = AllowRotation;
		PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * L_5 = __this->get_pinManipulator_16();
		bool L_6;
		L_6 = SpacePinOrientableManipulation_get_AllowRotation_mDE9C380BE22EDE2DD00A7F1665F88F28E537C350_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		PinManipulator_set_UserOriented_m57B51B39113F5F08A3A148AC024BB2B5EB2E485E(L_5, L_6, /*hidden argument*/NULL);
		// pinManipulator.Startup();
		PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * L_7 = __this->get_pinManipulator_16();
		NullCheck(L_7);
		PinManipulator_Startup_m6995A7D306B090B0D9F2249CF22221142E2CB351(L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.SpacePinOrientableManipulation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacePinOrientableManipulation_Update_m542DFCA86FADC09687FAB79CD165DD465BE0262F (SpacePinOrientableManipulation_t63D9969EF984ADC57612A9E05072AE2C9ED0A107 * __this, const RuntimeMethod* method)
{
	{
		// pinManipulator.Update();
		PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * L_0 = __this->get_pinManipulator_16();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(4 /* System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::Update() */, L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.SpacePinOrientableManipulation::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacePinOrientableManipulation_OnDestroy_m0D7D4BC1649546B99CDD74FC14A344ABFD882F37 (SpacePinOrientableManipulation_t63D9969EF984ADC57612A9E05072AE2C9ED0A107 * __this, const RuntimeMethod* method)
{
	{
		// base.OnDestroy();
		SpacePin_OnDestroy_mD2592616FE49528B791125BAF95F6188BBA7F8A6(__this, /*hidden argument*/NULL);
		// pinManipulator.Shutdown();
		PinManipulator_tE2673D287763F4EF3CAEEFC97E533C046041ED60 * L_0 = __this->get_pinManipulator_16();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(5 /* System.Void Microsoft.MixedReality.WorldLocking.Examples.PinManipulator::Shutdown() */, L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.SpacePinOrientableManipulation::OnStartManipulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacePinOrientableManipulation_OnStartManipulation_mA16D0CB8BAB9392BF9243F3BB92EA965CE63E80F (SpacePinOrientableManipulation_t63D9969EF984ADC57612A9E05072AE2C9ED0A107 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.SpacePinOrientableManipulation::OnFinishManipulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacePinOrientableManipulation_OnFinishManipulation_m8CE373797537F31EF5455DAA85A91C4288AB6ECC (SpacePinOrientableManipulation_t63D9969EF984ADC57612A9E05072AE2C9ED0A107 * __this, const RuntimeMethod* method)
{
	{
		// if (WorldLockingManager.GetInstance().ApplyAdjustment)
		WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_0;
		L_0 = WorldLockingManager_GetInstance_m1A558A9E776F5A09360EE417191DF29163CE4B05(/*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = WorldLockingManager_get_ApplyAdjustment_m698EDB0FDF547D9FB071235420129B83517B647F(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// SetFrozenPose(ExtractModelPose());
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_2;
		L_2 = SpacePin_ExtractModelPose_mF6649CD52E1AA0992C347CD5FADA75C033323C46(__this, /*hidden argument*/NULL);
		SpacePin_SetFrozenPose_mCDC5015CC8A3377FB8F08321BD3BB32ADE4D2D9F(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0019:
	{
		// SetSpongyPose(ExtractModelPose());
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_3;
		L_3 = SpacePin_ExtractModelPose_mF6649CD52E1AA0992C347CD5FADA75C033323C46(__this, /*hidden argument*/NULL);
		SpacePin_SetSpongyPose_mCAF7BDAC5B814CFCF78CD49BA82B5CA5F131002A(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.SpacePinOrientableManipulation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacePinOrientableManipulation__ctor_m60D66F93C950029E7A743F6B3785B6F4BACD01E7 (SpacePinOrientableManipulation_t63D9969EF984ADC57612A9E05072AE2C9ED0A107 * __this, const RuntimeMethod* method)
{
	{
		// private bool allowRotation = true;
		__this->set_allowRotation_15((bool)1);
		SpacePinOrientable__ctor_m747A2224830DD94A51A4C4B3B06861CC45427AC3(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/RayHit
IL2CPP_EXTERN_C void RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338_marshal_pinvoke(const RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338& unmarshaled, RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338_marshaled_pinvoke& marshaled)
{
	Exception_t* ___gameObject_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'gameObject' of type 'RayHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___gameObject_3Exception, NULL);
}
IL2CPP_EXTERN_C void RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338_marshal_pinvoke_back(const RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338_marshaled_pinvoke& marshaled, RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338& unmarshaled)
{
	Exception_t* ___gameObject_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'gameObject' of type 'RayHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___gameObject_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/RayHit
IL2CPP_EXTERN_C void RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338_marshal_pinvoke_cleanup(RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/RayHit
IL2CPP_EXTERN_C void RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338_marshal_com(const RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338& unmarshaled, RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338_marshaled_com& marshaled)
{
	Exception_t* ___gameObject_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'gameObject' of type 'RayHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___gameObject_3Exception, NULL);
}
IL2CPP_EXTERN_C void RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338_marshal_com_back(const RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338_marshaled_com& marshaled, RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338& unmarshaled)
{
	Exception_t* ___gameObject_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'gameObject' of type 'RayHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___gameObject_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/RayHit
IL2CPP_EXTERN_C void RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338_marshal_com_cleanup(RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338_marshaled_com& marshaled)
{
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/RayHit::.ctor(UnityEngine.Vector3,UnityEngine.RaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayHit__ctor_mB6E914ECFECA6D242701477150CB3F8F6D5968E5 (RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rayStart0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___hitInfo1, const RuntimeMethod* method)
{
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * G_B2_0 = NULL;
	RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338 * G_B2_1 = NULL;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * G_B1_0 = NULL;
	RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338 * G_B1_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B3_0 = NULL;
	RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338 * G_B3_1 = NULL;
	{
		// this.rayStart = rayStart;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___rayStart0;
		__this->set_rayStart_0(L_0);
		// this.hitPosition = hitInfo.point;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&___hitInfo1), /*hidden argument*/NULL);
		__this->set_hitPosition_1(L_1);
		// this.hitNormal = hitInfo.normal;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&___hitInfo1), /*hidden argument*/NULL);
		__this->set_hitNormal_2(L_2);
		// this.gameObject = hitInfo.collider?.gameObject;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_3;
		L_3 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&___hitInfo1), /*hidden argument*/NULL);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = __this;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = __this;
			goto IL_0030;
		}
	}
	{
		G_B3_0 = ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0035;
	}

IL_0030:
	{
		NullCheck(G_B2_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(G_B2_0, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_1;
	}

IL_0035:
	{
		G_B3_1->set_gameObject_3(G_B3_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RayHit__ctor_mB6E914ECFECA6D242701477150CB3F8F6D5968E5_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rayStart0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___hitInfo1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338 * _thisAdjusted = reinterpret_cast<RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338 *>(__this + _offset);
	RayHit__ctor_mB6E914ECFECA6D242701477150CB3F8F6D5968E5(_thisAdjusted, ___rayStart0, ___hitInfo1, method);
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.PhysicsBeamSample/RayHit::.ctor(Microsoft.MixedReality.Toolkit.Input.IPointerResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayHit__ctor_m64432C2E16F60A50E597D4846BA5F0552D4EAD83 (RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338 * __this, RuntimeObject* ___pointerResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPointerResult_t016B5E61BBA35FC618DEF7E4030088A1324DEE06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// this.rayStart = pointerResult.StartPoint;
		RuntimeObject* L_0 = ___pointerResult0;
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = InterfaceFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(0 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.IPointerResult::get_StartPoint() */, IPointerResult_t016B5E61BBA35FC618DEF7E4030088A1324DEE06_il2cpp_TypeInfo_var, L_0);
		__this->set_rayStart_0(L_1);
		// this.hitPosition = pointerResult.Details.Point;
		RuntimeObject* L_2 = ___pointerResult0;
		NullCheck(L_2);
		FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7  L_3;
		L_3 = InterfaceFuncInvoker0< FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7  >::Invoke(1 /* Microsoft.MixedReality.Toolkit.Physics.FocusDetails Microsoft.MixedReality.Toolkit.Input.IPointerResult::get_Details() */, IPointerResult_t016B5E61BBA35FC618DEF7E4030088A1324DEE06_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = FocusDetails_get_Point_m64928E75649D63E98441E757747B337430BD3BB3_inline((FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7 *)(&V_0), /*hidden argument*/NULL);
		__this->set_hitPosition_1(L_4);
		// this.hitNormal = pointerResult.Details.Normal;
		RuntimeObject* L_5 = ___pointerResult0;
		NullCheck(L_5);
		FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7  L_6;
		L_6 = InterfaceFuncInvoker0< FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7  >::Invoke(1 /* Microsoft.MixedReality.Toolkit.Physics.FocusDetails Microsoft.MixedReality.Toolkit.Input.IPointerResult::get_Details() */, IPointerResult_t016B5E61BBA35FC618DEF7E4030088A1324DEE06_il2cpp_TypeInfo_var, L_5);
		V_0 = L_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = FocusDetails_get_Normal_mE4978EAE5D22593110AAAFA1C8B8A35A9B22912F_inline((FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7 *)(&V_0), /*hidden argument*/NULL);
		__this->set_hitNormal_2(L_7);
		// this.gameObject = pointerResult.CurrentPointerTarget;
		RuntimeObject* L_8 = ___pointerResult0;
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = InterfaceFuncInvoker0< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(2 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.IPointerResult::get_CurrentPointerTarget() */, IPointerResult_t016B5E61BBA35FC618DEF7E4030088A1324DEE06_il2cpp_TypeInfo_var, L_8);
		__this->set_gameObject_3(L_9);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RayHit__ctor_m64432C2E16F60A50E597D4846BA5F0552D4EAD83_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___pointerResult0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338 * _thisAdjusted = reinterpret_cast<RayHit_t8A621D879B5377F122DF0D3AA03E60626C6AC338 *>(__this + _offset);
	RayHit__ctor_m64432C2E16F60A50E597D4846BA5F0552D4EAD83(_thisAdjusted, ___pointerResult0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Microsoft.MixedReality.WorldLocking.Examples.RayPins/RayHit
IL2CPP_EXTERN_C void RayHit_tD3531714B864673B28BD5395D21F090D44267DC6_marshal_pinvoke(const RayHit_tD3531714B864673B28BD5395D21F090D44267DC6& unmarshaled, RayHit_tD3531714B864673B28BD5395D21F090D44267DC6_marshaled_pinvoke& marshaled)
{
	Exception_t* ___gameObject_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'gameObject' of type 'RayHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___gameObject_3Exception, NULL);
}
IL2CPP_EXTERN_C void RayHit_tD3531714B864673B28BD5395D21F090D44267DC6_marshal_pinvoke_back(const RayHit_tD3531714B864673B28BD5395D21F090D44267DC6_marshaled_pinvoke& marshaled, RayHit_tD3531714B864673B28BD5395D21F090D44267DC6& unmarshaled)
{
	Exception_t* ___gameObject_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'gameObject' of type 'RayHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___gameObject_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.WorldLocking.Examples.RayPins/RayHit
IL2CPP_EXTERN_C void RayHit_tD3531714B864673B28BD5395D21F090D44267DC6_marshal_pinvoke_cleanup(RayHit_tD3531714B864673B28BD5395D21F090D44267DC6_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.MixedReality.WorldLocking.Examples.RayPins/RayHit
IL2CPP_EXTERN_C void RayHit_tD3531714B864673B28BD5395D21F090D44267DC6_marshal_com(const RayHit_tD3531714B864673B28BD5395D21F090D44267DC6& unmarshaled, RayHit_tD3531714B864673B28BD5395D21F090D44267DC6_marshaled_com& marshaled)
{
	Exception_t* ___gameObject_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'gameObject' of type 'RayHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___gameObject_3Exception, NULL);
}
IL2CPP_EXTERN_C void RayHit_tD3531714B864673B28BD5395D21F090D44267DC6_marshal_com_back(const RayHit_tD3531714B864673B28BD5395D21F090D44267DC6_marshaled_com& marshaled, RayHit_tD3531714B864673B28BD5395D21F090D44267DC6& unmarshaled)
{
	Exception_t* ___gameObject_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'gameObject' of type 'RayHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___gameObject_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.WorldLocking.Examples.RayPins/RayHit
IL2CPP_EXTERN_C void RayHit_tD3531714B864673B28BD5395D21F090D44267DC6_marshal_com_cleanup(RayHit_tD3531714B864673B28BD5395D21F090D44267DC6_marshaled_com& marshaled)
{
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.RayPins/RayHit::.ctor(UnityEngine.Vector3,UnityEngine.RaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayHit__ctor_mE191FAF09984D29DE064EF3B101FEEEA0A39DD01 (RayHit_tD3531714B864673B28BD5395D21F090D44267DC6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rayStart0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___hitInfo1, const RuntimeMethod* method)
{
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * G_B2_0 = NULL;
	RayHit_tD3531714B864673B28BD5395D21F090D44267DC6 * G_B2_1 = NULL;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * G_B1_0 = NULL;
	RayHit_tD3531714B864673B28BD5395D21F090D44267DC6 * G_B1_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B3_0 = NULL;
	RayHit_tD3531714B864673B28BD5395D21F090D44267DC6 * G_B3_1 = NULL;
	{
		// this.rayStart = rayStart;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___rayStart0;
		__this->set_rayStart_0(L_0);
		// this.hitPosition = hitInfo.point;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&___hitInfo1), /*hidden argument*/NULL);
		__this->set_hitPosition_1(L_1);
		// this.hitNormal = hitInfo.normal;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&___hitInfo1), /*hidden argument*/NULL);
		__this->set_hitNormal_2(L_2);
		// this.gameObject = hitInfo.collider?.gameObject;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_3;
		L_3 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&___hitInfo1), /*hidden argument*/NULL);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = __this;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = __this;
			goto IL_0030;
		}
	}
	{
		G_B3_0 = ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0035;
	}

IL_0030:
	{
		NullCheck(G_B2_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(G_B2_0, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_1;
	}

IL_0035:
	{
		G_B3_1->set_gameObject_3(G_B3_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RayHit__ctor_mE191FAF09984D29DE064EF3B101FEEEA0A39DD01_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rayStart0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___hitInfo1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RayHit_tD3531714B864673B28BD5395D21F090D44267DC6 * _thisAdjusted = reinterpret_cast<RayHit_tD3531714B864673B28BD5395D21F090D44267DC6 *>(__this + _offset);
	RayHit__ctor_mE191FAF09984D29DE064EF3B101FEEEA0A39DD01(_thisAdjusted, ___rayStart0, ___hitInfo1, method);
}
// System.Void Microsoft.MixedReality.WorldLocking.Examples.RayPins/RayHit::.ctor(Microsoft.MixedReality.Toolkit.Input.IPointerResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayHit__ctor_m8305D5B2DA14178E55ED810927854BBA54C6F876 (RayHit_tD3531714B864673B28BD5395D21F090D44267DC6 * __this, RuntimeObject* ___pointerResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPointerResult_t016B5E61BBA35FC618DEF7E4030088A1324DEE06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// this.rayStart = pointerResult.StartPoint;
		RuntimeObject* L_0 = ___pointerResult0;
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = InterfaceFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(0 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.IPointerResult::get_StartPoint() */, IPointerResult_t016B5E61BBA35FC618DEF7E4030088A1324DEE06_il2cpp_TypeInfo_var, L_0);
		__this->set_rayStart_0(L_1);
		// this.hitPosition = pointerResult.Details.Point;
		RuntimeObject* L_2 = ___pointerResult0;
		NullCheck(L_2);
		FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7  L_3;
		L_3 = InterfaceFuncInvoker0< FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7  >::Invoke(1 /* Microsoft.MixedReality.Toolkit.Physics.FocusDetails Microsoft.MixedReality.Toolkit.Input.IPointerResult::get_Details() */, IPointerResult_t016B5E61BBA35FC618DEF7E4030088A1324DEE06_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = FocusDetails_get_Point_m64928E75649D63E98441E757747B337430BD3BB3_inline((FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7 *)(&V_0), /*hidden argument*/NULL);
		__this->set_hitPosition_1(L_4);
		// this.hitNormal = pointerResult.Details.Normal;
		RuntimeObject* L_5 = ___pointerResult0;
		NullCheck(L_5);
		FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7  L_6;
		L_6 = InterfaceFuncInvoker0< FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7  >::Invoke(1 /* Microsoft.MixedReality.Toolkit.Physics.FocusDetails Microsoft.MixedReality.Toolkit.Input.IPointerResult::get_Details() */, IPointerResult_t016B5E61BBA35FC618DEF7E4030088A1324DEE06_il2cpp_TypeInfo_var, L_5);
		V_0 = L_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = FocusDetails_get_Normal_mE4978EAE5D22593110AAAFA1C8B8A35A9B22912F_inline((FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7 *)(&V_0), /*hidden argument*/NULL);
		__this->set_hitNormal_2(L_7);
		// this.gameObject = pointerResult.CurrentPointerTarget;
		RuntimeObject* L_8 = ___pointerResult0;
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = InterfaceFuncInvoker0< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(2 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.IPointerResult::get_CurrentPointerTarget() */, IPointerResult_t016B5E61BBA35FC618DEF7E4030088A1324DEE06_il2cpp_TypeInfo_var, L_8);
		__this->set_gameObject_3(L_9);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RayHit__ctor_m8305D5B2DA14178E55ED810927854BBA54C6F876_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___pointerResult0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RayHit_tD3531714B864673B28BD5395D21F090D44267DC6 * _thisAdjusted = reinterpret_cast<RayHit_tD3531714B864673B28BD5395D21F090D44267DC6 *>(__this + _offset);
	RayHit__ctor_m8305D5B2DA14178E55ED810927854BBA54C6F876(_thisAdjusted, ___pointerResult0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WorldLockingManager_get_AlignmentManager_mFD1A8D1A0DD99104461065F60490243A4F900CA4_inline (WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * __this, const RuntimeMethod* method)
{
	{
		// public IAlignmentManager AlignmentManager => alignmentManager;
		RuntimeObject* L_0 = __this->get_alignmentManager_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WorldLockingManager_get_FragmentManager_m53A595B9335BB6FEB3C272CF5C312E4BFA349A8E_inline (WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * __this, const RuntimeMethod* method)
{
	{
		// public IFragmentManager FragmentManager => fragmentManager;
		RuntimeObject* L_0 = __this->get_fragmentManager_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InteractableToggleCollection_get_CurrentIndex_mF94561CF17520C86F574AA6A9F4189975A56540E_inline (InteractableToggleCollection_tA5A251F98334F21FDC556F1E3D07BA7AA53A4EC3 * __this, const RuntimeMethod* method)
{
	{
		// get => currentIndex;
		int32_t L_0 = __this->get_currentIndex_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PhysicsBeamSample_get_PrefabDart_m2B7EC22C750F045B0291CD14C91640462B6470BB_inline (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject PrefabDart => prefabDart;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_prefabDart_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * PhysicsBeamSample_get_AttachRoot_m5C3E1BBFF968AD689DC3F818191D3A3AC7497CB1_inline (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	{
		// public Transform AttachRoot => attachRoot;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_attachRoot_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE * MixedRealityToolkit_get_Instance_m476E2053BA79D9D8A2F8941441AE2AE1D656B8F3_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityToolkit Instance => activeInstance;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE * L_0 = ((MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkit_t87D960E87DD2CA82936E4D50BC26D499B5A6B1CE_il2cpp_TypeInfo_var))->get_activeInstance_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Origin_m82A173C1E794696C462AA099BBA51DB4149AAE8D_inline (RayStep_tA3E5A7B9CAAC6903706AFF5F88DB8D0372AAF399 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Origin { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3COriginU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FocusDetails_get_Point_m64928E75649D63E98441E757747B337430BD3BB3_inline (FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Point { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CPointU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a1;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a1;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a1;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PhysicsBeamSample_get_PrefabPillarFixed_mAD21584F8229E692A768AAB7FD01D2DEF1AE36E7_inline (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject PrefabPillarFixed => prefabPillarFixed;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_prefabPillarFixed_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PhysicsBeamSample_get_PrefabPillarDynamic_m4CAE22DA6CE565AB8568B6145D58A7BE04172182_inline (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject PrefabPillarDynamic => prefabPillarDynamic;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_prefabPillarDynamic_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PhysicsBeamSample_get_PrefabBeam_mF3FEEDF2620641D4917DA28D16BA3CFB1741284A_inline (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject PrefabBeam => prefabBeam;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_prefabBeam_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PhysicsBeamSample_get_WorldLock_m33D175FCF28BBF8EF77580FCD0E173731B55110E_inline (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	{
		// private WorldLockType WorldLock { get { return worldLock; } set { worldLock = value; } }
		int32_t L_0 = __this->get_worldLock_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PhysicsBeamSample_get_PrefabUnlockedSphere_mD57552F92514EEC1295E0F819A1220365AF35CE8_inline (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject PrefabUnlockedSphere => prefabUnlockedSphere;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_prefabUnlockedSphere_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PhysicsBeamSample_get_PrefabWorldLockedSphere_m5CF2CC286B202B3DFB85B584B9509FB77E17E667_inline (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject PrefabWorldLockedSphere => prefabWorldLockedSphere;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_prefabWorldLockedSphere_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ToggleWorldAnchor_set_AlwaysLock_mE994FABF3BAAFBF1AAF3E4ACBC04DF8DB0476608_inline (ToggleWorldAnchor_t1B1167AAE4D649411357DCAC4BBEA35B598EB09B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool AlwaysLock { get { return alwaysLock; } set { alwaysLock = value; } }
		bool L_0 = ___value0;
		__this->set_alwaysLock_7(L_0);
		// public bool AlwaysLock { get { return alwaysLock; } set { alwaysLock = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PhysicsBeamSample_get_PrefabHybridLockedSphere_mDA89D680C2E05DDB4D3AF23AB624238F23BF2934_inline (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject PrefabHybridLockedSphere => prefabHybridLockedSphere;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_prefabHybridLockedSphere_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhysicsBeamSample_set_WorldLock_m7F42E8CD43B58946EE67EBF7AECF3CFCCFA56FC0_inline (PhysicsBeamSample_tF82795BD89AECD6BBFAA09A73F9B35F5922A8802 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// private WorldLockType WorldLock { get { return worldLock; } set { worldLock = value; } }
		int32_t L_0 = ___value0;
		__this->set_worldLock_19(L_0);
		// private WorldLockType WorldLock { get { return worldLock; } set { worldLock = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MixedRealityPointerEventData_get_Pointer_m3A233E75C86D4B0B230A0242BB5ED9A8715F9B08_inline (MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityPointer Pointer { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CPointerU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TransformConstraint_set_HandType_m000BFAAE272AA7FC5BCF326A9CA8DD9E2C5AF63B_inline (TransformConstraint_tC42A2968CDB77EF526D991D93F93C20FD661454B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => handType = value;
		int32_t L_0 = ___value0;
		__this->set_handType_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TransformConstraint_set_ProximityType_m5D2B986C13CEC2A385AAE028ED27CC863D9B3E37_inline (TransformConstraint_tC42A2968CDB77EF526D991D93F93C20FD661454B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => proximityType = value;
		int32_t L_0 = ___value0;
		__this->set_proximityType_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RotationAxisConstraint_set_ConstraintOnRotation_mC9E0A75D32B4975F1DBF7B5E5F359B338E10E442_inline (RotationAxisConstraint_t3D65F29C05CD4E1C12723D07A3E026C45825302E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => constraintOnRotation = value;
		int32_t L_0 = ___value0;
		__this->set_constraintOnRotation_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ManipulationEvent_t72B794DBAD271C9FE714E404CD610357353EA7C6 * ObjectManipulator_get_OnManipulationStarted_m796BFAE1D5783E297BA16417F6F96BC213F6F779_inline (ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A * __this, const RuntimeMethod* method)
{
	{
		// get => onManipulationStarted;
		ManipulationEvent_t72B794DBAD271C9FE714E404CD610357353EA7C6 * L_0 = __this->get_onManipulationStarted_21();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ManipulationEvent_t72B794DBAD271C9FE714E404CD610357353EA7C6 * ObjectManipulator_get_OnManipulationEnded_m156B80707C728553A7539AA77F3B7D2650F872A3_inline (ObjectManipulator_tB31D52F4674BAB2D03D0C8EC38C405DCBAA7872A * __this, const RuntimeMethod* method)
{
	{
		// get => onManipulationEnded;
		ManipulationEvent_t72B794DBAD271C9FE714E404CD610357353EA7C6 * L_0 = __this->get_onManipulationEnded_22();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RayPins_set_ActivePin_m74F8B06490BD89EE6E4BA99E53E7677E82880187_inline (RayPins_t80A83EA4F8A476C390F6A49E857652EB74E15575 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int ActivePin { get { return activePin; } set { activePin = value; } }
		int32_t L_0 = ___value0;
		__this->set_activePin_9(L_0);
		// public int ActivePin { get { return activePin; } set { activePin = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * SpacePinManipulation_get_Prefab_FeelerRay_mE31116FD05A181875D5B309D9BBDD5E5BE678A87_inline (SpacePinManipulation_tA67D55B37A96758AE9CE68C4A5792382C5353A79 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject Prefab_FeelerRay { get { return prefab_FeelerRay; } set { prefab_FeelerRay = value; } }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_prefab_FeelerRay_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * SpacePinOrientableManipulation_get_Prefab_FeelerRay_mA589644F3229D6D731CA280527CD92D9B79C919D_inline (SpacePinOrientableManipulation_t63D9969EF984ADC57612A9E05072AE2C9ED0A107 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject Prefab_FeelerRay { get { return prefab_FeelerRay; } set { prefab_FeelerRay = value; } }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_prefab_FeelerRay_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpacePinOrientableManipulation_get_AllowRotation_mDE9C380BE22EDE2DD00A7F1665F88F28E537C350_inline (SpacePinOrientableManipulation_t63D9969EF984ADC57612A9E05072AE2C9ED0A107 * __this, const RuntimeMethod* method)
{
	{
		// public bool AllowRotation { get { return allowRotation; } set { allowRotation = value; } }
		bool L_0 = __this->get_allowRotation_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FocusDetails_get_Normal_mE4978EAE5D22593110AAAFA1C8B8A35A9B22912F_inline (FocusDetails_tB69E7DB8157DF5AA3EAD77DD16F94706C98453A7 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Normal { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CNormalU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__current_3();
		return (RuntimeObject *)L_0;
	}
}
