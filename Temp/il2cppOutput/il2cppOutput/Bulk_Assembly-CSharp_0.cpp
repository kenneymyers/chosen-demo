#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// AboutManager
struct AboutManager_t2961629990;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t2297175928;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// UnityEngine.UI.Button
struct Button_t4055032469;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// UnityEngine.Object
struct Object_t631007953;
// System.String
struct String_t;
// Vuforia.VuforiaRuntime
struct VuforiaRuntime_t1949122020;
// System.String[]
struct StringU5BU5D_t1281789340;
// AboutScreen
struct AboutScreen_t2183797299;
// Astronaut
struct Astronaut_t1874369735;
// Augmentation
struct Augmentation_t2596699517;
// System.Action
struct Action_t1264377477;
// UnityEngine.ParticleSystem
struct ParticleSystem_t1800779281;
// RockPileController
struct RockPileController_t2893225296;
// UnityEngine.Animator
struct Animator_t434523843;
// AstronautStateMachineBehaviour
struct AstronautStateMachineBehaviour_t3422698390;
// AugmentationStateMachineBehaviour
struct AugmentationStateMachineBehaviour_t3849818102;
// UnityEngine.Component
struct Component_t1923634451;
// System.Action`1<Astronaut>
struct Action_1_t2046837330;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.Type
struct Type_t;
// AsyncSceneLoader
struct AsyncSceneLoader_t621267272;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// AsyncSceneLoader/<LoadNextSceneAfter>c__Iterator0
struct U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t3210418286;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487;
// UnityEngine.Collider
struct Collider_t1773347010;
// Augmentation/<WaitForThen>c__Iterator0
struct U3CWaitForThenU3Ec__Iterator0_t751251344;
// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t957311111;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Delegate>>
struct Dictionary_2_t3417996176;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// Autofocus
struct Autofocus_t1688188087;
// Vuforia.VuforiaARController
struct VuforiaARController_t1876945237;
// System.Action`1<System.Boolean>
struct Action_1_t269755560;
// Vuforia.CameraDevice
struct CameraDevice_t960297568;
// Autofocus/<TriggerAutofocus>c__Iterator0
struct U3CTriggerAutofocusU3Ec__Iterator0_t1955189839;
// BackToAbout
struct BackToAbout_t1188110921;
// BlackMaskBehaviour
struct BlackMaskBehaviour_t3514099953;
// Vuforia.DigitalEyewearARController
struct DigitalEyewearARController_t1054226036;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Material
struct Material_t340375123;
// Button3D
struct Button3D_t3014406560;
// ButtonController
struct ButtonController_t4120738002;
// UnityEngine.BoxCollider
struct BoxCollider_t1640800422;
// UnityEngine.MeshRenderer
struct MeshRenderer_t587009260;
// ButtonManager
struct ButtonManager_t2018100028;
// UnityEngine.Animation
struct Animation_t3648466861;
// UnityEngine.AnimationClip
struct AnimationClip_t2318505987;
// UnityEngine.Texture
struct Texture_t3661962703;
// CameraSettings
struct CameraSettings_t3152619780;
// Vuforia.ITrackerManager
struct ITrackerManager_t607206903;
// CameraSettings/<RestoreOriginalFocusMode>c__Iterator0
struct U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229;
// DefaultInitializationErrorHandler
struct DefaultInitializationErrorHandler_t3109936861;
// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_t3593217305;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t3146511083;
// UnityEngine.GUIStyle
struct GUIStyle_t3956901511;
// Vuforia.VuforiaConfiguration
struct VuforiaConfiguration_t1763229349;
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct GenericVuforiaConfiguration_t3697830469;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415;
// UnityEngine.Font
struct Font_t1956802104;
// UnityEngine.RectOffset
struct RectOffset_t1369453676;
// DefaultTrackableEventHandler
struct DefaultTrackableEventHandler_t1588957063;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1113559212;
// Vuforia.ITrackableEventHandler
struct ITrackableEventHandler_t1495975588;
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t682926938;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// DrillController
struct DrillController_t3872647469;
// Drone
struct Drone_t259598734;
// FadeObject
struct FadeObject_t1880495183;
// FrameRateSettings
struct FrameRateSettings_t3598747490;
// Vuforia.VuforiaRenderer
struct VuforiaRenderer_t3433045970;
// InitErrorHandler
struct InitErrorHandler_t2159361531;
// LoadingScreen
struct LoadingScreen_t2154736699;
// UnityEngine.UI.RawImage
struct RawImage_t3182918964;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843;
// MenuAnimator
struct MenuAnimator_t2112910832;
// MenuOptions
struct MenuOptions_t1951716431;
// TrackableSettings
struct TrackableSettings_t2862243993;
// UnityEngine.UI.Toggle
struct Toggle_t2735377061;
// Vuforia.ObjectTracker
struct ObjectTracker_t4177997237;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet>
struct IEnumerable_1_t2265887763;
// Vuforia.DataSet
struct DataSet_t3286034874;
// Reticle
struct Reticle_t3233312302;
// Vuforia.VideoBackgroundManager
struct VideoBackgroundManager_t2198727358;
// Vuforia.BackgroundPlaneBehaviour
struct BackgroundPlaneBehaviour_t3333547397;
// TapHandler
struct TapHandler_t334234343;
// Vuforia.StateManager
struct StateManager_t1982749557;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour>
struct IEnumerable_1_t93412101;
// System.Collections.Generic.List`1<Vuforia.DataSet>
struct List_1_t463142320;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Char[]
struct CharU5BU5D_t3528271667;
// TransitionManager
struct TransitionManager_t3900140235;
// Vuforia.MixedRealityController
struct MixedRealityController_t13217384;
// Vuforia.VuforiaBehaviour
struct VuforiaBehaviour_t2151848540;
// ViewTrigger
struct ViewTrigger_t2398860653;
// UnityEngine.Shader
struct Shader_t4151988712;
// ViewTrigger/<ResetAfter>c__Iterator0
struct U3CResetAfterU3Ec__Iterator0_t4017133920;
// Vuforia.DataSet[]
struct DataSetU5BU5D_t4052198943;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour>
struct Dictionary_2_t2272543;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>
struct List_1_t2585633954;
// Vuforia.WordManager
struct WordManager_t3100853168;
// Vuforia.VuMarkManager
struct VuMarkManager_t2982459596;
// Vuforia.DeviceTrackingManager
struct DeviceTrackingManager_t3849131975;
// Vuforia.IExtendedTrackingManager
struct IExtendedTrackingManager_t821947488;
// Vuforia.IlluminationManager
struct IlluminationManager_t3960931838;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Collections.Generic.Dictionary`2<System.String,System.Delegate>[]
struct Dictionary_2U5BU5D_t1658021065;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t296309482;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Delegate>,System.Collections.DictionaryEntry>
struct Transform_1_t1938516076;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Void
struct Void_t1185182177;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// UnityEngine.Sprite
struct Sprite_t280657092;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t2430893908;
// Vuforia.TargetFinder
struct TargetFinder_t2439332195;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_t1617499438;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// Vuforia.IViewerParameters
struct IViewerParameters_t2017581997;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>
struct Dictionary_2_t1340713322;
// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>
struct List_1_t905170877;
// Vuforia.ICameraConfiguration
struct ICameraConfiguration_t283990539;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t3956019502;
// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
struct Dictionary_2_t3630620928;
// System.Collections.Generic.List`1<Vuforia.Image/PIXEL_FORMAT>
struct List_1_t386988881;
// Vuforia.IWebCam
struct IWebCam_t3734514901;
// Vuforia.DigitalEyewearARController/SerializableViewerParameters
struct SerializableViewerParameters_t2043332680;
// Vuforia.VRDeviceController
struct VRDeviceController_t3863472269;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Action`1<UnityEngine.Font>
struct Action_1_t2129269699;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t2467502454;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration
struct DigitalEyewearConfiguration_t546560202;
// Vuforia.VuforiaConfiguration/DatabaseLoadConfiguration
struct DatabaseLoadConfiguration_t449697234;
// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration
struct VideoBackgroundConfiguration_t3392414655;
// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration
struct DeviceTrackerConfiguration_t721467671;
// Vuforia.VuforiaConfiguration/SmartTerrainConfiguration
struct SmartTerrainConfiguration_t1514074484;
// Vuforia.VuforiaConfiguration/WebCamConfiguration
struct WebCamConfiguration_t1101614731;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t3309123499;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.UI.Text
struct Text_t1901882714;
// Vuforia.Trackable
struct Trackable_t2451999991;
// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>
struct List_1_t2968050330;
// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t1636626578;
// UnityEngine.Texture[]
struct TextureU5BU5D_t908295702;
// ButtonController[]
struct ButtonControllerU5BU5D_t3107930023;
// System.Action`1<Vuforia.VuforiaBehaviour>
struct Action_1_t2324316135;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// Vuforia.VideoBackgroundConfigValidator
struct VideoBackgroundConfigValidator_t1958892045;
// Vuforia.IProjectMatrixProvider
struct IProjectMatrixProvider_t1782912365;
// Vuforia.HideExcessAreaUtility
struct HideExcessAreaUtility_t3142786924;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t123837990;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t1873685584;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t48803504;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;

extern RuntimeClass* TransitionManager_t3900140235_il2cpp_TypeInfo_var;
extern const uint32_t AboutManager_OnStartFullScreen_m428894392_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_FindObjectsOfType_TisButton_t4055032469_m3637543179_RuntimeMethod_var;
extern const uint32_t AboutManager_Start_m4010451457_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral894969387;
extern const uint32_t AboutManager_LateUpdate_m3441262838_MetadataUsageId;
extern RuntimeClass* VuforiaUnity_t1788908542_il2cpp_TypeInfo_var;
extern RuntimeClass* VuforiaRuntime_t1949122020_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3072673938;
extern String_t* _stringLiteral4262463051;
extern String_t* _stringLiteral142579402;
extern String_t* _stringLiteral2642543365;
extern String_t* _stringLiteral1909641646;
extern String_t* _stringLiteral3072566615;
extern String_t* _stringLiteral850093702;
extern String_t* _stringLiteral1718486736;
extern String_t* _stringLiteral903581647;
extern String_t* _stringLiteral1539352067;
extern String_t* _stringLiteral3223883587;
extern String_t* _stringLiteral509717202;
extern const uint32_t AboutManager_UpdateAboutText_m3813400252_MetadataUsageId;
extern String_t* _stringLiteral1518049465;
extern const uint32_t AboutScreen_OnStartAR_m2896384759_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern const uint32_t AboutScreen_Update_m1006106731_MetadataUsageId;
extern String_t* _stringLiteral3739663615;
extern const uint32_t Astronaut_AnimEvt_ScaleUpDrill_m2679101155_MetadataUsageId;
extern String_t* _stringLiteral3818128157;
extern const uint32_t Astronaut_AnimEvt_ScaleDownDrill_m3488644721_MetadataUsageId;
extern String_t* _stringLiteral3413064854;
extern const uint32_t Astronaut_AnimEvt_PlayDrillEffect_m3756976635_MetadataUsageId;
extern String_t* _stringLiteral554646610;
extern const uint32_t Astronaut_AnimEvt_StopDrillEffect_m2350635108_MetadataUsageId;
extern String_t* _stringLiteral3194302366;
extern const uint32_t Astronaut_get_IsDrilling_m3535295706_MetadataUsageId;
extern const uint32_t Astronaut_set_IsDrilling_m1001765503_MetadataUsageId;
extern String_t* _stringLiteral1414324346;
extern const uint32_t Astronaut_get_IsWaving_m561973742_MetadataUsageId;
extern const uint32_t Astronaut_set_IsWaving_m2086530614_MetadataUsageId;
extern RuntimeClass* AugmentationStateMachineBehaviour_t3849818102_il2cpp_TypeInfo_var;
extern const uint32_t AstronautStateMachineBehaviour__ctor_m68215958_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisAstronaut_t1874369735_m3770992714_RuntimeMethod_var;
extern const RuntimeMethod* AugmentationStateMachineBehaviour_GetMethod_TisAstronaut_t1874369735_m4289488282_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m1045878271_RuntimeMethod_var;
extern const uint32_t AstronautStateMachineBehaviour_DoStateEvent_m4030557946_MetadataUsageId;
extern const RuntimeType* Astronaut_t1874369735_0_0_0_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern const uint32_t AstronautStateMachineBehaviour_GetTargetType_m2821986681_MetadataUsageId;
extern RuntimeClass* U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170_il2cpp_TypeInfo_var;
extern const uint32_t AsyncSceneLoader_LoadNextSceneAfter_m1751933459_MetadataUsageId;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern const uint32_t U3CLoadNextSceneAfterU3Ec__Iterator0_MoveNext_m3855908786_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CLoadNextSceneAfterU3Ec__Iterator0_Reset_m3376656304_RuntimeMethod_var;
extern const uint32_t U3CLoadNextSceneAfterU3Ec__Iterator0_Reset_m3376656304_MetadataUsageId;
extern RuntimeClass* Augmentation_t2596699517_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_t1264377477_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Augmentation_U3Cm_EvtOnEnterU3Em__0_m2476492651_RuntimeMethod_var;
extern const RuntimeMethod* Augmentation_U3Cm_EvtOnExitU3Em__1_m3929287321_RuntimeMethod_var;
extern const uint32_t Augmentation__ctor_m362621642_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var;
extern const uint32_t Augmentation_Start_m2586945440_MetadataUsageId;
extern const uint32_t Augmentation_Enable_m1555992381_MetadataUsageId;
extern String_t* _stringLiteral4265615363;
extern const uint32_t Augmentation_OnExit_m971700158_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var;
extern const uint32_t Augmentation_SetRenderersEnabled_m2414151497_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var;
extern const uint32_t Augmentation_SetCollidersEnabled_m2274333646_MetadataUsageId;
extern RuntimeClass* U3CWaitForThenU3Ec__Iterator0_t751251344_il2cpp_TypeInfo_var;
extern const uint32_t Augmentation_WaitForThen_m4086988269_MetadataUsageId;
extern const uint32_t U3CWaitForThenU3Ec__Iterator0_MoveNext_m1871452942_MetadataUsageId;
extern const RuntimeMethod* U3CWaitForThenU3Ec__Iterator0_Reset_m1671170136_RuntimeMethod_var;
extern const uint32_t U3CWaitForThenU3Ec__Iterator0_Reset_m1671170136_MetadataUsageId;
extern const uint32_t AugmentationStateMachineBehaviour_OnStateEnter_m2303877214_MetadataUsageId;
extern const uint32_t AugmentationStateMachineBehaviour_OnStateExit_m3832066308_MetadataUsageId;
extern const uint32_t AugmentationStateMachineBehaviour_OnStateUpdate_m1463826790_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t3417996176_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3885421510_RuntimeMethod_var;
extern const uint32_t AugmentationStateMachineBehaviour__cctor_m121416862_MetadataUsageId;
extern RuntimeClass* VuforiaARController_t1876945237_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t269755560_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Autofocus_OnVuforiaStarted_m1997509596_RuntimeMethod_var;
extern const RuntimeMethod* Autofocus_OnPaused_m1840425301_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m2079027267_RuntimeMethod_var;
extern const uint32_t Autofocus_Start_m88897297_MetadataUsageId;
extern const uint32_t Autofocus_Update_m3410805624_MetadataUsageId;
extern RuntimeClass* CameraDevice_t960297568_il2cpp_TypeInfo_var;
extern const uint32_t Autofocus_OnVuforiaStarted_m1997509596_MetadataUsageId;
extern const uint32_t Autofocus_OnPaused_m1840425301_MetadataUsageId;
extern RuntimeClass* U3CTriggerAutofocusU3Ec__Iterator0_t1955189839_il2cpp_TypeInfo_var;
extern const uint32_t Autofocus_TriggerAutofocus_m662759096_MetadataUsageId;
extern const uint32_t U3CTriggerAutofocusU3Ec__Iterator0_MoveNext_m1853780646_MetadataUsageId;
extern const RuntimeMethod* U3CTriggerAutofocusU3Ec__Iterator0_Reset_m383134278_RuntimeMethod_var;
extern const uint32_t U3CTriggerAutofocusU3Ec__Iterator0_Reset_m383134278_MetadataUsageId;
extern String_t* _stringLiteral1473361323;
extern const uint32_t BackToAbout_GoToAboutPage_m4071111343_MetadataUsageId;
extern const uint32_t BackToAbout_HandleTap_m3559493796_MetadataUsageId;
extern RuntimeClass* DigitalEyewearARController_t1054226036_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisRenderer_t2627027031_m2222376672_RuntimeMethod_var;
extern String_t* _stringLiteral820587791;
extern String_t* _stringLiteral2373215901;
extern const uint32_t BlackMaskBehaviour_Update_m1296670792_MetadataUsageId;
extern const uint32_t BlackMaskBehaviour_SetFadeFactor_m3654852777_MetadataUsageId;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const uint32_t Button3D_Update_m2852069781_MetadataUsageId;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3354838037;
extern const uint32_t Button3D_LateUpdate_m545809021_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisBoxCollider_t1640800422_m4104100802_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t587009260_m3511415476_RuntimeMethod_var;
extern const uint32_t ButtonController_Awake_m2036024024_MetadataUsageId;
extern const RuntimeMethod* CameraSettings_OnVuforiaStarted_m924645186_RuntimeMethod_var;
extern const RuntimeMethod* CameraSettings_OnPaused_m1743728020_RuntimeMethod_var;
extern const uint32_t CameraSettings_Start_m1913056950_MetadataUsageId;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral328110920;
extern String_t* _stringLiteral3558393413;
extern const uint32_t CameraSettings_SwitchFlashTorch_m1540789541_MetadataUsageId;
extern String_t* _stringLiteral1601691866;
extern String_t* _stringLiteral1647848890;
extern String_t* _stringLiteral3666098040;
extern const uint32_t CameraSettings_SwitchAutofocus_m1104105893_MetadataUsageId;
extern const uint32_t CameraSettings_TriggerAutofocusEvent_m898525935_MetadataUsageId;
extern RuntimeClass* CameraDirection_t637748435_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ITrackerManager_GetTracker_TisObjectTracker_t4177997237_m1548597255_RuntimeMethod_var;
extern String_t* _stringLiteral4178167562;
extern String_t* _stringLiteral3976947749;
extern String_t* _stringLiteral1322537578;
extern const uint32_t CameraSettings_RestartCamera_m1627822698_MetadataUsageId;
extern const uint32_t CameraSettings_OnPaused_m1743728020_MetadataUsageId;
extern RuntimeClass* U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229_il2cpp_TypeInfo_var;
extern const uint32_t CameraSettings_RestoreOriginalFocusMode_m3433876528_MetadataUsageId;
extern const uint32_t U3CRestoreOriginalFocusModeU3Ec__Iterator0_MoveNext_m3953872261_MetadataUsageId;
extern const RuntimeMethod* U3CRestoreOriginalFocusModeU3Ec__Iterator0_Reset_m884766291_RuntimeMethod_var;
extern const uint32_t U3CRestoreOriginalFocusModeU3Ec__Iterator0_Reset_m884766291_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler__ctor_m2145257936_MetadataUsageId;
extern RuntimeClass* Action_1_t3593217305_il2cpp_TypeInfo_var;
extern const RuntimeMethod* DefaultInitializationErrorHandler_OnVuforiaInitializationError_m512807497_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m2713332384_RuntimeMethod_var;
extern const uint32_t DefaultInitializationErrorHandler_Awake_m1713298888_MetadataUsageId;
extern RuntimeClass* WindowFunction_t3146511083_il2cpp_TypeInfo_var;
extern RuntimeClass* GUI_t1624858472_il2cpp_TypeInfo_var;
extern const RuntimeMethod* DefaultInitializationErrorHandler_DrawWindowContent_m2208378571_RuntimeMethod_var;
extern const uint32_t DefaultInitializationErrorHandler_OnGUI_m2338842741_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_OnDestroy_m3668093536_MetadataUsageId;
extern String_t* _stringLiteral2016908147;
extern String_t* _stringLiteral3483484711;
extern const uint32_t DefaultInitializationErrorHandler_DrawWindowContent_m2208378571_MetadataUsageId;
extern RuntimeClass* InitError_t3420749710_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3279329212;
extern String_t* _stringLiteral3325583105;
extern String_t* _stringLiteral1253325676;
extern String_t* _stringLiteral2959890895;
extern String_t* _stringLiteral2293327149;
extern String_t* _stringLiteral2746077084;
extern String_t* _stringLiteral2746058527;
extern String_t* _stringLiteral491174246;
extern String_t* _stringLiteral3183081100;
extern String_t* _stringLiteral868600955;
extern String_t* _stringLiteral3122929577;
extern String_t* _stringLiteral3567432369;
extern String_t* _stringLiteral229317972;
extern String_t* _stringLiteral3452614641;
extern String_t* _stringLiteral3452614528;
extern String_t* _stringLiteral2072581803;
extern String_t* _stringLiteral3752705136;
extern String_t* _stringLiteral3453007782;
extern const uint32_t DefaultInitializationErrorHandler_SetErrorCode_m599033302_MetadataUsageId;
extern RuntimeClass* VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1431967569;
extern String_t* _stringLiteral3797279721;
extern String_t* _stringLiteral1108443480;
extern String_t* _stringLiteral2072975055;
extern String_t* _stringLiteral1498400317;
extern const uint32_t DefaultInitializationErrorHandler_getKeyInfo_m1864640064_MetadataUsageId;
extern RuntimeClass* GUIStyle_t3956901511_il2cpp_TypeInfo_var;
extern RuntimeClass* RectOffset_t1369453676_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830_RuntimeMethod_var;
extern String_t* _stringLiteral2974894664;
extern const uint32_t DefaultInitializationErrorHandler_SetupGUIStyles_m3863535424_MetadataUsageId;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern const uint32_t DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408_RuntimeMethod_var;
extern const uint32_t DefaultTrackableEventHandler_Start_m796446126_MetadataUsageId;
extern const uint32_t DefaultTrackableEventHandler_OnDestroy_m1080906236_MetadataUsageId;
extern String_t* _stringLiteral3820270571;
extern String_t* _stringLiteral3073488411;
extern String_t* _stringLiteral3483481617;
extern const uint32_t DefaultTrackableEventHandler_OnTrackableStateChanged_m77027111_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007_RuntimeMethod_var;
extern const uint32_t DefaultTrackableEventHandler_OnTrackingFound_m4202593607_MetadataUsageId;
extern const uint32_t DefaultTrackableEventHandler_OnTrackingLost_m424172778_MetadataUsageId;
extern const uint32_t DrillController_Update_m3578018862_MetadataUsageId;
extern String_t* _stringLiteral779085831;
extern const uint32_t Drone_get_IsFacingObject_m4075302079_MetadataUsageId;
extern const uint32_t Drone_set_IsFacingObject_m27084245_MetadataUsageId;
extern String_t* _stringLiteral2770001329;
extern const uint32_t Drone_get_IsScanning_m3816545038_MetadataUsageId;
extern const uint32_t Drone_set_IsScanning_m2450867114_MetadataUsageId;
extern String_t* _stringLiteral1093476094;
extern const uint32_t Drone_get_IsShowingLaser_m2807121319_MetadataUsageId;
extern const uint32_t Drone_set_IsShowingLaser_m723721754_MetadataUsageId;
extern const RuntimeMethod* Object_Instantiate_TisMaterial_t340375123_m2709937581_RuntimeMethod_var;
extern const uint32_t FadeObject_Awake_m679399172_MetadataUsageId;
extern String_t* _stringLiteral3957048425;
extern const uint32_t FadeObject_SetOpacity_m1467358730_MetadataUsageId;
extern String_t* _stringLiteral731044324;
extern String_t* _stringLiteral1668731369;
extern String_t* _stringLiteral1810507830;
extern String_t* _stringLiteral2191403227;
extern String_t* _stringLiteral3949742573;
extern String_t* _stringLiteral2875383692;
extern const uint32_t FadeObject_SetRenderingMode_m278453982_MetadataUsageId;
extern const RuntimeMethod* FrameRateSettings_OnVuforiaStarted_m2069567078_RuntimeMethod_var;
extern const uint32_t FrameRateSettings_Start_m580618101_MetadataUsageId;
extern RuntimeClass* VuforiaRenderer_t3433045970_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3233180876;
extern String_t* _stringLiteral4120677989;
extern const uint32_t FrameRateSettings_OnVuforiaStarted_m2069567078_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponentsInParent_TisCanvas_t3310196443_m1039379662_RuntimeMethod_var;
extern const RuntimeMethod* InitErrorHandler_OnInitError_m2884619828_RuntimeMethod_var;
extern const uint32_t InitErrorHandler_Awake_m3752167262_MetadataUsageId;
extern String_t* _stringLiteral3258121531;
extern String_t* _stringLiteral1347979092;
extern String_t* _stringLiteral276390372;
extern String_t* _stringLiteral1119693748;
extern const uint32_t InitErrorHandler_ShowErrorMessage_m1141628225_MetadataUsageId;
extern const uint32_t InitErrorHandler_getKeyInfo_m2220979040_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponentInChildren_TisRawImage_t3182918964_m4000174733_RuntimeMethod_var;
extern const uint32_t LoadingScreen_Start_m3016827352_MetadataUsageId;
extern const uint32_t LoadingScreen_Update_m69320718_MetadataUsageId;
extern const uint32_t MenuAnimator__ctor_m2002699033_MetadataUsageId;
extern const RuntimeMethod* Object_FindObjectOfType_TisMenuOptions_t1951716431_m1050906446_RuntimeMethod_var;
extern const uint32_t MenuAnimator_Start_m1688760679_MetadataUsageId;
extern const uint32_t MenuAnimator_Update_m3695532741_MetadataUsageId;
extern const uint32_t MenuAnimator_Show_m982174260_MetadataUsageId;
extern const RuntimeMethod* Object_FindObjectOfType_TisCameraSettings_t3152619780_m4203198741_RuntimeMethod_var;
extern const RuntimeMethod* Object_FindObjectOfType_TisTrackableSettings_t2862243993_m1852430619_RuntimeMethod_var;
extern const RuntimeMethod* Object_FindObjectOfType_TisMenuAnimator_t2112910832_m1830680649_RuntimeMethod_var;
extern const RuntimeMethod* MenuOptions_OnPaused_m1134986695_RuntimeMethod_var;
extern const uint32_t MenuOptions_Start_m2289807458_MetadataUsageId;
extern const uint32_t MenuOptions_ShowAboutPage_m3278612116_MetadataUsageId;
extern const RuntimeMethod* MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125_RuntimeMethod_var;
extern String_t* _stringLiteral683363693;
extern const uint32_t MenuOptions_ToggleAutofocus_m677591208_MetadataUsageId;
extern String_t* _stringLiteral351316669;
extern const uint32_t MenuOptions_ToggleTorch_m1503051540_MetadataUsageId;
extern const uint32_t MenuOptions_ToggleFrontCamera_m1000892130_MetadataUsageId;
extern String_t* _stringLiteral1531511922;
extern const uint32_t MenuOptions_ToggleExtendedTracking_m3362773293_MetadataUsageId;
extern const uint32_t MenuOptions_ActivateDataset_m942511626_MetadataUsageId;
extern String_t* _stringLiteral2627208917;
extern const uint32_t MenuOptions_UpdateUI_m2695051465_MetadataUsageId;
extern RuntimeClass* IEnumerable_1_t2265887763_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t3718605342_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t MenuOptions_RestartObjectTracker_m4287611783_MetadataUsageId;
extern const uint32_t MenuOptions_CloseMenu_m2198615225_MetadataUsageId;
extern const uint32_t MenuOptions_OnPaused_m1134986695_MetadataUsageId;
extern RuntimeClass* VideoBackgroundManager_t2198727358_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponentInChildren_TisBackgroundPlaneBehaviour_t3333547397_m2601826740_RuntimeMethod_var;
extern const uint32_t Reticle_Update_m3916231512_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisFadeObject_t1880495183_m1857147924_RuntimeMethod_var;
extern const uint32_t RockPileController_Awake_m1550536447_MetadataUsageId;
extern const uint32_t RockPileController_FadeOut_m3065701988_MetadataUsageId;
extern const uint32_t RockPileController_FadeIn_m550595306_MetadataUsageId;
extern const uint32_t TapHandler_Start_m554074027_MetadataUsageId;
extern const uint32_t TapHandler_Update_m2328515667_MetadataUsageId;
extern const uint32_t TapHandler_HandleTap_m1322678531_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponentInChildren_TisCameraSettings_t3152619780_m2209036194_RuntimeMethod_var;
extern const uint32_t TapHandler_OnSingleTapConfirmed_m3372274260_MetadataUsageId;
extern const uint32_t TapHandler_OnDoubleTap_m2928608177_MetadataUsageId;
extern RuntimeClass* ITrackerManager_t607206903_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t93412101_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t1546129680_il2cpp_TypeInfo_var;
extern RuntimeClass* DataSetTrackableBehaviour_t3430730379_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectTarget_t3212252422_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3229819917;
extern String_t* _stringLiteral3563699894;
extern const uint32_t TrackableSettings_SwitchExtendedTracking_m1275921245_MetadataUsageId;
extern const RuntimeMethod* Enumerable_ToList_TisDataSet_t3286034874_m1984750843_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3978133574_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ElementAt_TisDataSet_t3286034874_m1304043092_RuntimeMethod_var;
extern String_t* _stringLiteral3452614529;
extern String_t* _stringLiteral3932363835;
extern const uint32_t TrackableSettings_GetActiveDatasetName_m1771968640_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m6144716_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1064371760_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1234730920_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1247034833_RuntimeMethod_var;
extern const uint32_t TrackableSettings_ActivateDataSet_m4118878993_MetadataUsageId;
extern const RuntimeMethod* TransitionManager_SetStereoViewDivider_m717389777_RuntimeMethod_var;
extern const uint32_t TransitionManager_Awake_m1104503036_MetadataUsageId;
extern const uint32_t TransitionManager_OnDestroy_m1111708761_MetadataUsageId;
extern RuntimeClass* MixedRealityController_t13217384_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_FindObjectOfType_TisBlackMaskBehaviour_t3514099953_m1811966288_RuntimeMethod_var;
extern const uint32_t TransitionManager_Start_m3045972892_MetadataUsageId;
extern String_t* _stringLiteral2389443647;
extern String_t* _stringLiteral3231251126;
extern const uint32_t TransitionManager_Update_m2541854394_MetadataUsageId;
extern const uint32_t TransitionManager_SetStereoViewDivider_m717389777_MetadataUsageId;
extern const uint32_t TransitionManager_ActivateDatasets_m1018868641_MetadataUsageId;
extern const uint32_t TransitionManager_GetMixedRealityMode_m836765050_MetadataUsageId;
extern const uint32_t TransitionManager_UpdateVisibleObjects_m3329821487_MetadataUsageId;
extern const uint32_t TransitionManager_SetBlackMaskVisible_m2346041137_MetadataUsageId;
extern const uint32_t TransitionManager_IsVideoBackgroundRenderingEnabled_m1119413015_MetadataUsageId;
extern RuntimeClass* VuforiaBehaviour_t2151848540_il2cpp_TypeInfo_var;
extern const uint32_t TransitionManager_GetCameraRigRoot_m1570019008_MetadataUsageId;
extern const uint32_t TransitionManager__cctor_m3444121455_MetadataUsageId;
extern const RuntimeMethod* Object_FindObjectOfType_TisTransitionManager_t3900140235_m18610529_RuntimeMethod_var;
extern const uint32_t ViewTrigger_Start_m3171850746_MetadataUsageId;
extern const uint32_t ViewTrigger_Update_m842461432_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t2627027031_m2677127880_RuntimeMethod_var;
extern String_t* _stringLiteral717063174;
extern String_t* _stringLiteral2410870734;
extern const uint32_t ViewTrigger_UpdateMaterials_m540877782_MetadataUsageId;
extern RuntimeClass* U3CResetAfterU3Ec__Iterator0_t4017133920_il2cpp_TypeInfo_var;
extern const uint32_t ViewTrigger_ResetAfter_m1577891685_MetadataUsageId;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral926174776;
extern String_t* _stringLiteral114570317;
extern const uint32_t U3CResetAfterU3Ec__Iterator0_MoveNext_m3498358698_MetadataUsageId;
extern const RuntimeMethod* U3CResetAfterU3Ec__Iterator0_Reset_m3313695853_RuntimeMethod_var;
extern const uint32_t U3CResetAfterU3Ec__Iterator0_Reset_m3313695853_MetadataUsageId;
struct GUIStyle_t3956901511_marshaled_pinvoke;
struct GUIStyle_t3956901511_marshaled_com;
struct GUIStyleState_t1397964415_marshaled_pinvoke;
struct GUIStyleState_t1397964415_marshaled_com;
struct RectOffset_t1369453676_marshaled_com;

struct ButtonU5BU5D_t2297175928;
struct StringU5BU5D_t1281789340;
struct RendererU5BU5D_t3210418286;
struct ColliderU5BU5D_t4234922487;
struct AnimationClipU5BU5D_t1636626578;
struct TextureU5BU5D_t908295702;
struct ButtonControllerU5BU5D_t3107930023;
struct ObjectU5BU5D_t2843939325;
struct CanvasU5BU5D_t682926938;
struct CharU5BU5D_t3528271667;
struct GameObjectU5BU5D_t3328599146;


#ifndef U3CMODULEU3E_T692745547_H
#define U3CMODULEU3E_T692745547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745547 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745547_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef U3CRESETAFTERU3EC__ITERATOR0_T4017133920_H
#define U3CRESETAFTERU3EC__ITERATOR0_T4017133920_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ViewTrigger/<ResetAfter>c__Iterator0
struct  U3CResetAfterU3Ec__Iterator0_t4017133920  : public RuntimeObject
{
public:
	// System.Single ViewTrigger/<ResetAfter>c__Iterator0::seconds
	float ___seconds_0;
	// ViewTrigger ViewTrigger/<ResetAfter>c__Iterator0::$this
	ViewTrigger_t2398860653 * ___U24this_1;
	// System.Object ViewTrigger/<ResetAfter>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean ViewTrigger/<ResetAfter>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 ViewTrigger/<ResetAfter>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_seconds_0() { return static_cast<int32_t>(offsetof(U3CResetAfterU3Ec__Iterator0_t4017133920, ___seconds_0)); }
	inline float get_seconds_0() const { return ___seconds_0; }
	inline float* get_address_of_seconds_0() { return &___seconds_0; }
	inline void set_seconds_0(float value)
	{
		___seconds_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CResetAfterU3Ec__Iterator0_t4017133920, ___U24this_1)); }
	inline ViewTrigger_t2398860653 * get_U24this_1() const { return ___U24this_1; }
	inline ViewTrigger_t2398860653 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(ViewTrigger_t2398860653 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CResetAfterU3Ec__Iterator0_t4017133920, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CResetAfterU3Ec__Iterator0_t4017133920, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CResetAfterU3Ec__Iterator0_t4017133920, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CRESETAFTERU3EC__ITERATOR0_T4017133920_H
#ifndef LIST_1_T463142320_H
#define LIST_1_T463142320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Vuforia.DataSet>
struct  List_1_t463142320  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DataSetU5BU5D_t4052198943* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t463142320, ____items_1)); }
	inline DataSetU5BU5D_t4052198943* get__items_1() const { return ____items_1; }
	inline DataSetU5BU5D_t4052198943** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DataSetU5BU5D_t4052198943* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t463142320, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t463142320, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t463142320_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	DataSetU5BU5D_t4052198943* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t463142320_StaticFields, ___EmptyArray_4)); }
	inline DataSetU5BU5D_t4052198943* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline DataSetU5BU5D_t4052198943** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(DataSetU5BU5D_t4052198943* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T463142320_H
#ifndef STATEMANAGER_T1982749557_H
#define STATEMANAGER_T1982749557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.StateManager
struct  StateManager_t1982749557  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour> Vuforia.StateManager::mTrackableBehaviours
	Dictionary_2_t2272543 * ___mTrackableBehaviours_0;
	// System.Collections.Generic.List`1<System.Int32> Vuforia.StateManager::mAutomaticallyCreatedBehaviours
	List_1_t128053199 * ___mAutomaticallyCreatedBehaviours_1;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManager::mBehavioursMarkedForDeletion
	List_1_t2585633954 * ___mBehavioursMarkedForDeletion_2;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManager::mActiveTrackableBehaviours
	List_1_t2585633954 * ___mActiveTrackableBehaviours_3;
	// Vuforia.WordManager Vuforia.StateManager::mWordManager
	WordManager_t3100853168 * ___mWordManager_4;
	// Vuforia.VuMarkManager Vuforia.StateManager::mVuMarkManager
	VuMarkManager_t2982459596 * ___mVuMarkManager_5;
	// Vuforia.DeviceTrackingManager Vuforia.StateManager::mDeviceTrackingManager
	DeviceTrackingManager_t3849131975 * ___mDeviceTrackingManager_6;
	// UnityEngine.GameObject Vuforia.StateManager::mCameraPositioningHelper
	GameObject_t1113636619 * ___mCameraPositioningHelper_7;
	// Vuforia.IExtendedTrackingManager Vuforia.StateManager::mExtendedTrackingManager
	RuntimeObject* ___mExtendedTrackingManager_8;
	// Vuforia.IlluminationManager Vuforia.StateManager::mIlluminationManager
	IlluminationManager_t3960931838 * ___mIlluminationManager_9;

public:
	inline static int32_t get_offset_of_mTrackableBehaviours_0() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mTrackableBehaviours_0)); }
	inline Dictionary_2_t2272543 * get_mTrackableBehaviours_0() const { return ___mTrackableBehaviours_0; }
	inline Dictionary_2_t2272543 ** get_address_of_mTrackableBehaviours_0() { return &___mTrackableBehaviours_0; }
	inline void set_mTrackableBehaviours_0(Dictionary_2_t2272543 * value)
	{
		___mTrackableBehaviours_0 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableBehaviours_0), value);
	}

	inline static int32_t get_offset_of_mAutomaticallyCreatedBehaviours_1() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mAutomaticallyCreatedBehaviours_1)); }
	inline List_1_t128053199 * get_mAutomaticallyCreatedBehaviours_1() const { return ___mAutomaticallyCreatedBehaviours_1; }
	inline List_1_t128053199 ** get_address_of_mAutomaticallyCreatedBehaviours_1() { return &___mAutomaticallyCreatedBehaviours_1; }
	inline void set_mAutomaticallyCreatedBehaviours_1(List_1_t128053199 * value)
	{
		___mAutomaticallyCreatedBehaviours_1 = value;
		Il2CppCodeGenWriteBarrier((&___mAutomaticallyCreatedBehaviours_1), value);
	}

	inline static int32_t get_offset_of_mBehavioursMarkedForDeletion_2() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mBehavioursMarkedForDeletion_2)); }
	inline List_1_t2585633954 * get_mBehavioursMarkedForDeletion_2() const { return ___mBehavioursMarkedForDeletion_2; }
	inline List_1_t2585633954 ** get_address_of_mBehavioursMarkedForDeletion_2() { return &___mBehavioursMarkedForDeletion_2; }
	inline void set_mBehavioursMarkedForDeletion_2(List_1_t2585633954 * value)
	{
		___mBehavioursMarkedForDeletion_2 = value;
		Il2CppCodeGenWriteBarrier((&___mBehavioursMarkedForDeletion_2), value);
	}

	inline static int32_t get_offset_of_mActiveTrackableBehaviours_3() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mActiveTrackableBehaviours_3)); }
	inline List_1_t2585633954 * get_mActiveTrackableBehaviours_3() const { return ___mActiveTrackableBehaviours_3; }
	inline List_1_t2585633954 ** get_address_of_mActiveTrackableBehaviours_3() { return &___mActiveTrackableBehaviours_3; }
	inline void set_mActiveTrackableBehaviours_3(List_1_t2585633954 * value)
	{
		___mActiveTrackableBehaviours_3 = value;
		Il2CppCodeGenWriteBarrier((&___mActiveTrackableBehaviours_3), value);
	}

	inline static int32_t get_offset_of_mWordManager_4() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mWordManager_4)); }
	inline WordManager_t3100853168 * get_mWordManager_4() const { return ___mWordManager_4; }
	inline WordManager_t3100853168 ** get_address_of_mWordManager_4() { return &___mWordManager_4; }
	inline void set_mWordManager_4(WordManager_t3100853168 * value)
	{
		___mWordManager_4 = value;
		Il2CppCodeGenWriteBarrier((&___mWordManager_4), value);
	}

	inline static int32_t get_offset_of_mVuMarkManager_5() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mVuMarkManager_5)); }
	inline VuMarkManager_t2982459596 * get_mVuMarkManager_5() const { return ___mVuMarkManager_5; }
	inline VuMarkManager_t2982459596 ** get_address_of_mVuMarkManager_5() { return &___mVuMarkManager_5; }
	inline void set_mVuMarkManager_5(VuMarkManager_t2982459596 * value)
	{
		___mVuMarkManager_5 = value;
		Il2CppCodeGenWriteBarrier((&___mVuMarkManager_5), value);
	}

	inline static int32_t get_offset_of_mDeviceTrackingManager_6() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mDeviceTrackingManager_6)); }
	inline DeviceTrackingManager_t3849131975 * get_mDeviceTrackingManager_6() const { return ___mDeviceTrackingManager_6; }
	inline DeviceTrackingManager_t3849131975 ** get_address_of_mDeviceTrackingManager_6() { return &___mDeviceTrackingManager_6; }
	inline void set_mDeviceTrackingManager_6(DeviceTrackingManager_t3849131975 * value)
	{
		___mDeviceTrackingManager_6 = value;
		Il2CppCodeGenWriteBarrier((&___mDeviceTrackingManager_6), value);
	}

	inline static int32_t get_offset_of_mCameraPositioningHelper_7() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mCameraPositioningHelper_7)); }
	inline GameObject_t1113636619 * get_mCameraPositioningHelper_7() const { return ___mCameraPositioningHelper_7; }
	inline GameObject_t1113636619 ** get_address_of_mCameraPositioningHelper_7() { return &___mCameraPositioningHelper_7; }
	inline void set_mCameraPositioningHelper_7(GameObject_t1113636619 * value)
	{
		___mCameraPositioningHelper_7 = value;
		Il2CppCodeGenWriteBarrier((&___mCameraPositioningHelper_7), value);
	}

	inline static int32_t get_offset_of_mExtendedTrackingManager_8() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mExtendedTrackingManager_8)); }
	inline RuntimeObject* get_mExtendedTrackingManager_8() const { return ___mExtendedTrackingManager_8; }
	inline RuntimeObject** get_address_of_mExtendedTrackingManager_8() { return &___mExtendedTrackingManager_8; }
	inline void set_mExtendedTrackingManager_8(RuntimeObject* value)
	{
		___mExtendedTrackingManager_8 = value;
		Il2CppCodeGenWriteBarrier((&___mExtendedTrackingManager_8), value);
	}

	inline static int32_t get_offset_of_mIlluminationManager_9() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mIlluminationManager_9)); }
	inline IlluminationManager_t3960931838 * get_mIlluminationManager_9() const { return ___mIlluminationManager_9; }
	inline IlluminationManager_t3960931838 ** get_address_of_mIlluminationManager_9() { return &___mIlluminationManager_9; }
	inline void set_mIlluminationManager_9(IlluminationManager_t3960931838 * value)
	{
		___mIlluminationManager_9 = value;
		Il2CppCodeGenWriteBarrier((&___mIlluminationManager_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEMANAGER_T1982749557_H
#ifndef U3CRESTOREORIGINALFOCUSMODEU3EC__ITERATOR0_T2912012229_H
#define U3CRESTOREORIGINALFOCUSMODEU3EC__ITERATOR0_T2912012229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraSettings/<RestoreOriginalFocusMode>c__Iterator0
struct  U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229  : public RuntimeObject
{
public:
	// CameraSettings CameraSettings/<RestoreOriginalFocusMode>c__Iterator0::$this
	CameraSettings_t3152619780 * ___U24this_0;
	// System.Object CameraSettings/<RestoreOriginalFocusMode>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean CameraSettings/<RestoreOriginalFocusMode>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 CameraSettings/<RestoreOriginalFocusMode>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229, ___U24this_0)); }
	inline CameraSettings_t3152619780 * get_U24this_0() const { return ___U24this_0; }
	inline CameraSettings_t3152619780 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(CameraSettings_t3152619780 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CRESTOREORIGINALFOCUSMODEU3EC__ITERATOR0_T2912012229_H
#ifndef TRACKER_T2709586299_H
#define TRACKER_T2709586299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Tracker
struct  Tracker_t2709586299  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.Tracker::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Tracker_t2709586299, ___U3CIsActiveU3Ek__BackingField_0)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_0() const { return ___U3CIsActiveU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_0() { return &___U3CIsActiveU3Ek__BackingField_0; }
	inline void set_U3CIsActiveU3Ek__BackingField_0(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKER_T2709586299_H
#ifndef U3CTRIGGERAUTOFOCUSU3EC__ITERATOR0_T1955189839_H
#define U3CTRIGGERAUTOFOCUSU3EC__ITERATOR0_T1955189839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Autofocus/<TriggerAutofocus>c__Iterator0
struct  U3CTriggerAutofocusU3Ec__Iterator0_t1955189839  : public RuntimeObject
{
public:
	// System.Object Autofocus/<TriggerAutofocus>c__Iterator0::$current
	RuntimeObject * ___U24current_0;
	// System.Boolean Autofocus/<TriggerAutofocus>c__Iterator0::$disposing
	bool ___U24disposing_1;
	// System.Int32 Autofocus/<TriggerAutofocus>c__Iterator0::$PC
	int32_t ___U24PC_2;

public:
	inline static int32_t get_offset_of_U24current_0() { return static_cast<int32_t>(offsetof(U3CTriggerAutofocusU3Ec__Iterator0_t1955189839, ___U24current_0)); }
	inline RuntimeObject * get_U24current_0() const { return ___U24current_0; }
	inline RuntimeObject ** get_address_of_U24current_0() { return &___U24current_0; }
	inline void set_U24current_0(RuntimeObject * value)
	{
		___U24current_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_0), value);
	}

	inline static int32_t get_offset_of_U24disposing_1() { return static_cast<int32_t>(offsetof(U3CTriggerAutofocusU3Ec__Iterator0_t1955189839, ___U24disposing_1)); }
	inline bool get_U24disposing_1() const { return ___U24disposing_1; }
	inline bool* get_address_of_U24disposing_1() { return &___U24disposing_1; }
	inline void set_U24disposing_1(bool value)
	{
		___U24disposing_1 = value;
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CTriggerAutofocusU3Ec__Iterator0_t1955189839, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CTRIGGERAUTOFOCUSU3EC__ITERATOR0_T1955189839_H
#ifndef DICTIONARY_2_T3417996176_H
#define DICTIONARY_2_T3417996176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Delegate>>
struct  Dictionary_2_t3417996176  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	TypeU5BU5D_t3940880105* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Dictionary_2U5BU5D_t1658021065* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3417996176, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3417996176, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3417996176, ___keySlots_6)); }
	inline TypeU5BU5D_t3940880105* get_keySlots_6() const { return ___keySlots_6; }
	inline TypeU5BU5D_t3940880105** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(TypeU5BU5D_t3940880105* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3417996176, ___valueSlots_7)); }
	inline Dictionary_2U5BU5D_t1658021065* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Dictionary_2U5BU5D_t1658021065** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Dictionary_2U5BU5D_t1658021065* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3417996176, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3417996176, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3417996176, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3417996176, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3417996176, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3417996176, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3417996176, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3417996176_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1938516076 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3417996176_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1938516076 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1938516076 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1938516076 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3417996176_H
#ifndef U3CWAITFORTHENU3EC__ITERATOR0_T751251344_H
#define U3CWAITFORTHENU3EC__ITERATOR0_T751251344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Augmentation/<WaitForThen>c__Iterator0
struct  U3CWaitForThenU3Ec__Iterator0_t751251344  : public RuntimeObject
{
public:
	// System.Single Augmentation/<WaitForThen>c__Iterator0::waitSeconds
	float ___waitSeconds_0;
	// System.Action Augmentation/<WaitForThen>c__Iterator0::action
	Action_t1264377477 * ___action_1;
	// System.Object Augmentation/<WaitForThen>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean Augmentation/<WaitForThen>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 Augmentation/<WaitForThen>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_waitSeconds_0() { return static_cast<int32_t>(offsetof(U3CWaitForThenU3Ec__Iterator0_t751251344, ___waitSeconds_0)); }
	inline float get_waitSeconds_0() const { return ___waitSeconds_0; }
	inline float* get_address_of_waitSeconds_0() { return &___waitSeconds_0; }
	inline void set_waitSeconds_0(float value)
	{
		___waitSeconds_0 = value;
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(U3CWaitForThenU3Ec__Iterator0_t751251344, ___action_1)); }
	inline Action_t1264377477 * get_action_1() const { return ___action_1; }
	inline Action_t1264377477 ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(Action_t1264377477 * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier((&___action_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CWaitForThenU3Ec__Iterator0_t751251344, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CWaitForThenU3Ec__Iterator0_t751251344, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CWaitForThenU3Ec__Iterator0_t751251344, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWAITFORTHENU3EC__ITERATOR0_T751251344_H
#ifndef U3CLOADNEXTSCENEAFTERU3EC__ITERATOR0_T994227170_H
#define U3CLOADNEXTSCENEAFTERU3EC__ITERATOR0_T994227170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AsyncSceneLoader/<LoadNextSceneAfter>c__Iterator0
struct  U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170  : public RuntimeObject
{
public:
	// System.Single AsyncSceneLoader/<LoadNextSceneAfter>c__Iterator0::seconds
	float ___seconds_0;
	// System.Object AsyncSceneLoader/<LoadNextSceneAfter>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean AsyncSceneLoader/<LoadNextSceneAfter>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 AsyncSceneLoader/<LoadNextSceneAfter>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_seconds_0() { return static_cast<int32_t>(offsetof(U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170, ___seconds_0)); }
	inline float get_seconds_0() const { return ___seconds_0; }
	inline float* get_address_of_seconds_0() { return &___seconds_0; }
	inline void set_seconds_0(float value)
	{
		___seconds_0 = value;
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLOADNEXTSCENEAFTERU3EC__ITERATOR0_T994227170_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef ARCONTROLLER_T116632334_H
#define ARCONTROLLER_T116632334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ARController
struct  ARController_t116632334  : public RuntimeObject
{
public:
	// Vuforia.VuforiaBehaviour Vuforia.ARController::mVuforiaBehaviour
	VuforiaBehaviour_t2151848540 * ___mVuforiaBehaviour_0;

public:
	inline static int32_t get_offset_of_mVuforiaBehaviour_0() { return static_cast<int32_t>(offsetof(ARController_t116632334, ___mVuforiaBehaviour_0)); }
	inline VuforiaBehaviour_t2151848540 * get_mVuforiaBehaviour_0() const { return ___mVuforiaBehaviour_0; }
	inline VuforiaBehaviour_t2151848540 ** get_address_of_mVuforiaBehaviour_0() { return &___mVuforiaBehaviour_0; }
	inline void set_mVuforiaBehaviour_0(VuforiaBehaviour_t2151848540 * value)
	{
		___mVuforiaBehaviour_0 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARCONTROLLER_T116632334_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef ANIMATORSTATEINFO_T509032636_H
#define ANIMATORSTATEINFO_T509032636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorStateInfo
struct  AnimatorStateInfo_t509032636 
{
public:
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Name_0)); }
	inline int32_t get_m_Name_0() const { return ___m_Name_0; }
	inline int32_t* get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(int32_t value)
	{
		___m_Name_0 = value;
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Path_1)); }
	inline int32_t get_m_Path_1() const { return ___m_Path_1; }
	inline int32_t* get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(int32_t value)
	{
		___m_Path_1 = value;
	}

	inline static int32_t get_offset_of_m_FullPath_2() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_FullPath_2)); }
	inline int32_t get_m_FullPath_2() const { return ___m_FullPath_2; }
	inline int32_t* get_address_of_m_FullPath_2() { return &___m_FullPath_2; }
	inline void set_m_FullPath_2(int32_t value)
	{
		___m_FullPath_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Length_4() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Length_4)); }
	inline float get_m_Length_4() const { return ___m_Length_4; }
	inline float* get_address_of_m_Length_4() { return &___m_Length_4; }
	inline void set_m_Length_4(float value)
	{
		___m_Length_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_SpeedMultiplier_6)); }
	inline float get_m_SpeedMultiplier_6() const { return ___m_SpeedMultiplier_6; }
	inline float* get_address_of_m_SpeedMultiplier_6() { return &___m_SpeedMultiplier_6; }
	inline void set_m_SpeedMultiplier_6(float value)
	{
		___m_SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_m_Tag_7() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Tag_7)); }
	inline int32_t get_m_Tag_7() const { return ___m_Tag_7; }
	inline int32_t* get_address_of_m_Tag_7() { return &___m_Tag_7; }
	inline void set_m_Tag_7(int32_t value)
	{
		___m_Tag_7 = value;
	}

	inline static int32_t get_offset_of_m_Loop_8() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t509032636, ___m_Loop_8)); }
	inline int32_t get_m_Loop_8() const { return ___m_Loop_8; }
	inline int32_t* get_address_of_m_Loop_8() { return &___m_Loop_8; }
	inline void set_m_Loop_8(int32_t value)
	{
		___m_Loop_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORSTATEINFO_T509032636_H
#ifndef VIDEOMODEDATA_T2066817255_H
#define VIDEOMODEDATA_T2066817255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/VideoModeData
#pragma pack(push, tp, 1)
struct  VideoModeData_t2066817255 
{
public:
	// System.Int32 Vuforia.CameraDevice/VideoModeData::width
	int32_t ___width_0;
	// System.Int32 Vuforia.CameraDevice/VideoModeData::height
	int32_t ___height_1;
	// System.Single Vuforia.CameraDevice/VideoModeData::frameRate
	float ___frameRate_2;
	// System.Int32 Vuforia.CameraDevice/VideoModeData::unused
	int32_t ___unused_3;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_frameRate_2() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___frameRate_2)); }
	inline float get_frameRate_2() const { return ___frameRate_2; }
	inline float* get_address_of_frameRate_2() { return &___frameRate_2; }
	inline void set_frameRate_2(float value)
	{
		___frameRate_2 = value;
	}

	inline static int32_t get_offset_of_unused_3() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___unused_3)); }
	inline int32_t get_unused_3() const { return ___unused_3; }
	inline int32_t* get_address_of_unused_3() { return &___unused_3; }
	inline void set_unused_3(int32_t value)
	{
		___unused_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOMODEDATA_T2066817255_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef ENUMERATOR_T2352386197_H
#define ENUMERATOR_T2352386197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Vuforia.DataSet>
struct  Enumerator_t2352386197 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t463142320 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	DataSet_t3286034874 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2352386197, ___l_0)); }
	inline List_1_t463142320 * get_l_0() const { return ___l_0; }
	inline List_1_t463142320 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t463142320 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2352386197, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2352386197, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2352386197, ___current_3)); }
	inline DataSet_t3286034874 * get_current_3() const { return ___current_3; }
	inline DataSet_t3286034874 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(DataSet_t3286034874 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2352386197_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef VEC2I_T3527036565_H
#define VEC2I_T3527036565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/Vec2I
#pragma pack(push, tp, 1)
struct  Vec2I_t3527036565 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/Vec2I::x
	int32_t ___x_0;
	// System.Int32 Vuforia.VuforiaRenderer/Vec2I::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vec2I_t3527036565, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vec2I_t3527036565, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VEC2I_T3527036565_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef OBJECTTRACKER_T4177997237_H
#define OBJECTTRACKER_T4177997237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ObjectTracker
struct  ObjectTracker_t4177997237  : public Tracker_t2709586299
{
public:
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.ObjectTracker::mActiveDataSets
	List_1_t463142320 * ___mActiveDataSets_1;
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.ObjectTracker::mDataSets
	List_1_t463142320 * ___mDataSets_2;
	// Vuforia.ImageTargetBuilder Vuforia.ObjectTracker::mImageTargetBuilder
	ImageTargetBuilder_t2430893908 * ___mImageTargetBuilder_3;
	// Vuforia.TargetFinder Vuforia.ObjectTracker::mTargetFinder
	TargetFinder_t2439332195 * ___mTargetFinder_4;

public:
	inline static int32_t get_offset_of_mActiveDataSets_1() { return static_cast<int32_t>(offsetof(ObjectTracker_t4177997237, ___mActiveDataSets_1)); }
	inline List_1_t463142320 * get_mActiveDataSets_1() const { return ___mActiveDataSets_1; }
	inline List_1_t463142320 ** get_address_of_mActiveDataSets_1() { return &___mActiveDataSets_1; }
	inline void set_mActiveDataSets_1(List_1_t463142320 * value)
	{
		___mActiveDataSets_1 = value;
		Il2CppCodeGenWriteBarrier((&___mActiveDataSets_1), value);
	}

	inline static int32_t get_offset_of_mDataSets_2() { return static_cast<int32_t>(offsetof(ObjectTracker_t4177997237, ___mDataSets_2)); }
	inline List_1_t463142320 * get_mDataSets_2() const { return ___mDataSets_2; }
	inline List_1_t463142320 ** get_address_of_mDataSets_2() { return &___mDataSets_2; }
	inline void set_mDataSets_2(List_1_t463142320 * value)
	{
		___mDataSets_2 = value;
		Il2CppCodeGenWriteBarrier((&___mDataSets_2), value);
	}

	inline static int32_t get_offset_of_mImageTargetBuilder_3() { return static_cast<int32_t>(offsetof(ObjectTracker_t4177997237, ___mImageTargetBuilder_3)); }
	inline ImageTargetBuilder_t2430893908 * get_mImageTargetBuilder_3() const { return ___mImageTargetBuilder_3; }
	inline ImageTargetBuilder_t2430893908 ** get_address_of_mImageTargetBuilder_3() { return &___mImageTargetBuilder_3; }
	inline void set_mImageTargetBuilder_3(ImageTargetBuilder_t2430893908 * value)
	{
		___mImageTargetBuilder_3 = value;
		Il2CppCodeGenWriteBarrier((&___mImageTargetBuilder_3), value);
	}

	inline static int32_t get_offset_of_mTargetFinder_4() { return static_cast<int32_t>(offsetof(ObjectTracker_t4177997237, ___mTargetFinder_4)); }
	inline TargetFinder_t2439332195 * get_mTargetFinder_4() const { return ___mTargetFinder_4; }
	inline TargetFinder_t2439332195 ** get_address_of_mTargetFinder_4() { return &___mTargetFinder_4; }
	inline void set_mTargetFinder_4(TargetFinder_t2439332195 * value)
	{
		___mTargetFinder_4 = value;
		Il2CppCodeGenWriteBarrier((&___mTargetFinder_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTTRACKER_T4177997237_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef SCENE_T2348375561_H
#define SCENE_T2348375561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t2348375561 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t2348375561, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T2348375561_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef EMISSIONMODULE_T311448003_H
#define EMISSIONMODULE_T311448003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/EmissionModule
struct  EmissionModule_t311448003 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/EmissionModule::m_ParticleSystem
	ParticleSystem_t1800779281 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(EmissionModule_t311448003, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t1800779281 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t1800779281 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t1800779281 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t311448003_marshaled_pinvoke
{
	ParticleSystem_t1800779281 * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t311448003_marshaled_com
{
	ParticleSystem_t1800779281 * ___m_ParticleSystem_0;
};
#endif // EMISSIONMODULE_T311448003_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef TRIGGERTYPE_T1507618520_H
#define TRIGGERTYPE_T1507618520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ViewTrigger/TriggerType
struct  TriggerType_t1507618520 
{
public:
	// System.Int32 ViewTrigger/TriggerType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TriggerType_t1507618520, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERTYPE_T1507618520_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef BUTTONTYPE_T4220279917_H
#define BUTTONTYPE_T4220279917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ButtonType
struct  ButtonType_t4220279917 
{
public:
	// System.Int32 ButtonType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ButtonType_t4220279917, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONTYPE_T4220279917_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITION_T1769908631_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef GUISTYLESTATE_T1397964415_H
#define GUISTYLESTATE_T1397964415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyleState
struct  GUIStyleState_t1397964415  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t3956901511 * ___m_SourceStyle_1;
	// UnityEngine.Texture2D UnityEngine.GUIStyleState::m_Background
	Texture2D_t3840446185 * ___m_Background_2;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_SourceStyle_1)); }
	inline GUIStyle_t3956901511 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t3956901511 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t3956901511 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}

	inline static int32_t get_offset_of_m_Background_2() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_Background_2)); }
	inline Texture2D_t3840446185 * get_m_Background_2() const { return ___m_Background_2; }
	inline Texture2D_t3840446185 ** get_address_of_m_Background_2() { return &___m_Background_2; }
	inline void set_m_Background_2(Texture2D_t3840446185 * value)
	{
		___m_Background_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Background_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t3956901511_marshaled_pinvoke* ___m_SourceStyle_1;
	Texture2D_t3840446185 * ___m_Background_2;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t3956901511_marshaled_com* ___m_SourceStyle_1;
	Texture2D_t3840446185 * ___m_Background_2;
};
#endif // GUISTYLESTATE_T1397964415_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONSTATE_T2656606514_H
#ifndef TEXTUREFORMAT_T2701165832_H
#define TEXTUREFORMAT_T2701165832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t2701165832 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureFormat_t2701165832, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREFORMAT_T2701165832_H
#ifndef RAYCASTHIT_T1056001966_H
#define RAYCASTHIT_T1056001966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t1056001966 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t3722313464  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t3722313464  ___m_Normal_1;
	// System.Int32 UnityEngine.RaycastHit::m_FaceID
	int32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t2156229523  ___m_UV_4;
	// UnityEngine.Collider UnityEngine.RaycastHit::m_Collider
	Collider_t1773347010 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Point_0)); }
	inline Vector3_t3722313464  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t3722313464 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t3722313464  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Normal_1)); }
	inline Vector3_t3722313464  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t3722313464  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_FaceID_2)); }
	inline int32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline int32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(int32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_UV_4)); }
	inline Vector2_t2156229523  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t2156229523 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t2156229523  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Collider_5)); }
	inline Collider_t1773347010 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider_t1773347010 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider_t1773347010 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit
struct RaycastHit_t1056001966_marshaled_pinvoke
{
	Vector3_t3722313464  ___m_Point_0;
	Vector3_t3722313464  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2156229523  ___m_UV_4;
	Collider_t1773347010 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit
struct RaycastHit_t1056001966_marshaled_com
{
	Vector3_t3722313464  ___m_Point_0;
	Vector3_t3722313464  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2156229523  ___m_UV_4;
	Collider_t1773347010 * ___m_Collider_5;
};
#endif // RAYCASTHIT_T1056001966_H
#ifndef STATUS_T1100905814_H
#define STATUS_T1100905814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour/Status
struct  Status_t1100905814 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour/Status::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Status_t1100905814, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATUS_T1100905814_H
#ifndef FPSHINT_T2906034572_H
#define FPSHINT_T2906034572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/FpsHint
struct  FpsHint_t2906034572 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/FpsHint::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FpsHint_t2906034572, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FPSHINT_T2906034572_H
#ifndef THREADPRIORITY_T1774350854_H
#define THREADPRIORITY_T1774350854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ThreadPriority
struct  ThreadPriority_t1774350854 
{
public:
	// System.Int32 UnityEngine.ThreadPriority::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ThreadPriority_t1774350854, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADPRIORITY_T1774350854_H
#ifndef ASYNCOPERATION_T1445031843_H
#define ASYNCOPERATION_T1445031843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t1445031843  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_t1617499438 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_completeCallback_1)); }
	inline Action_1_t1617499438 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_t1617499438 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_t1617499438 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_completeCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
#endif // ASYNCOPERATION_T1445031843_H
#ifndef KEYCODE_T2599294277_H
#define KEYCODE_T2599294277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2599294277 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t2599294277, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODE_T2599294277_H
#ifndef INITERROR_T3420749710_H
#define INITERROR_T3420749710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaUnity/InitError
struct  InitError_t3420749710 
{
public:
	// System.Int32 Vuforia.VuforiaUnity/InitError::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InitError_t3420749710, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITERROR_T3420749710_H
#ifndef MODE_T2694983447_H
#define MODE_T2694983447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.MixedRealityController/Mode
struct  Mode_t2694983447 
{
public:
	// System.Int32 Vuforia.MixedRealityController/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t2694983447, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T2694983447_H
#ifndef RECTOFFSET_T1369453676_H
#define RECTOFFSET_T1369453676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_t1369453676  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_T1369453676_H
#ifndef CAMERADIRECTION_T637748435_H
#define CAMERADIRECTION_T637748435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDirection
struct  CameraDirection_t637748435 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraDirection_t637748435, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADIRECTION_T637748435_H
#ifndef TEXTANCHOR_T2035777396_H
#define TEXTANCHOR_T2035777396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAnchor
struct  TextAnchor_t2035777396 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextAnchor_t2035777396, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTANCHOR_T2035777396_H
#ifndef RAY_T3785851493_H
#define RAY_T3785851493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t3785851493 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t3722313464  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t3722313464  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Origin_0)); }
	inline Vector3_t3722313464  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t3722313464 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t3722313464  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Direction_1)); }
	inline Vector3_t3722313464  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t3722313464 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t3722313464  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T3785851493_H
#ifndef VIDEOBGCFGDATA_T994527297_H
#define VIDEOBGCFGDATA_T994527297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/VideoBGCfgData
#pragma pack(push, tp, 1)
struct  VideoBGCfgData_t994527297 
{
public:
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRenderer/VideoBGCfgData::position
	Vec2I_t3527036565  ___position_0;
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRenderer/VideoBGCfgData::size
	Vec2I_t3527036565  ___size_1;
	// System.Int32 Vuforia.VuforiaRenderer/VideoBGCfgData::enabled
	int32_t ___enabled_2;
	// System.Int32 Vuforia.VuforiaRenderer/VideoBGCfgData::reflectionInteger
	int32_t ___reflectionInteger_3;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(VideoBGCfgData_t994527297, ___position_0)); }
	inline Vec2I_t3527036565  get_position_0() const { return ___position_0; }
	inline Vec2I_t3527036565 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vec2I_t3527036565  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(VideoBGCfgData_t994527297, ___size_1)); }
	inline Vec2I_t3527036565  get_size_1() const { return ___size_1; }
	inline Vec2I_t3527036565 * get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(Vec2I_t3527036565  value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_enabled_2() { return static_cast<int32_t>(offsetof(VideoBGCfgData_t994527297, ___enabled_2)); }
	inline int32_t get_enabled_2() const { return ___enabled_2; }
	inline int32_t* get_address_of_enabled_2() { return &___enabled_2; }
	inline void set_enabled_2(int32_t value)
	{
		___enabled_2 = value;
	}

	inline static int32_t get_offset_of_reflectionInteger_3() { return static_cast<int32_t>(offsetof(VideoBGCfgData_t994527297, ___reflectionInteger_3)); }
	inline int32_t get_reflectionInteger_3() const { return ___reflectionInteger_3; }
	inline int32_t* get_address_of_reflectionInteger_3() { return &___reflectionInteger_3; }
	inline void set_reflectionInteger_3(int32_t value)
	{
		___reflectionInteger_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOBGCFGDATA_T994527297_H
#ifndef TOGGLETRANSITION_T3587297765_H
#define TOGGLETRANSITION_T3587297765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Toggle/ToggleTransition
struct  ToggleTransition_t3587297765 
{
public:
	// System.Int32 UnityEngine.UI.Toggle/ToggleTransition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ToggleTransition_t3587297765, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOGGLETRANSITION_T3587297765_H
#ifndef STORAGETYPE_T857810839_H
#define STORAGETYPE_T857810839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaUnity/StorageType
struct  StorageType_t857810839 
{
public:
	// System.Int32 Vuforia.VuforiaUnity/StorageType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StorageType_t857810839, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STORAGETYPE_T857810839_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef VIDEOTEXTUREINFO_T1805965052_H
#define VIDEOTEXTUREINFO_T1805965052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/VideoTextureInfo
#pragma pack(push, tp, 1)
struct  VideoTextureInfo_t1805965052 
{
public:
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRenderer/VideoTextureInfo::textureSize
	Vec2I_t3527036565  ___textureSize_0;
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRenderer/VideoTextureInfo::imageSize
	Vec2I_t3527036565  ___imageSize_1;

public:
	inline static int32_t get_offset_of_textureSize_0() { return static_cast<int32_t>(offsetof(VideoTextureInfo_t1805965052, ___textureSize_0)); }
	inline Vec2I_t3527036565  get_textureSize_0() const { return ___textureSize_0; }
	inline Vec2I_t3527036565 * get_address_of_textureSize_0() { return &___textureSize_0; }
	inline void set_textureSize_0(Vec2I_t3527036565  value)
	{
		___textureSize_0 = value;
	}

	inline static int32_t get_offset_of_imageSize_1() { return static_cast<int32_t>(offsetof(VideoTextureInfo_t1805965052, ___imageSize_1)); }
	inline Vec2I_t3527036565  get_imageSize_1() const { return ___imageSize_1; }
	inline Vec2I_t3527036565 * get_address_of_imageSize_1() { return &___imageSize_1; }
	inline void set_imageSize_1(Vec2I_t3527036565  value)
	{
		___imageSize_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOTEXTUREINFO_T1805965052_H
#ifndef PROJECTIONMATRIXDATA_T3894131367_H
#define PROJECTIONMATRIXDATA_T3894131367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.BackgroundPlaneBehaviour/ProjectionMatrixData
struct  ProjectionMatrixData_t3894131367 
{
public:
	// UnityEngine.Matrix4x4 Vuforia.BackgroundPlaneBehaviour/ProjectionMatrixData::ProjectionMatrix
	Matrix4x4_t1817901843  ___ProjectionMatrix_0;
	// UnityEngine.Matrix4x4 Vuforia.BackgroundPlaneBehaviour/ProjectionMatrixData::InverseMatrix
	Matrix4x4_t1817901843  ___InverseMatrix_1;
	// System.Single Vuforia.BackgroundPlaneBehaviour/ProjectionMatrixData::HorizontalFoV
	float ___HorizontalFoV_2;
	// System.Single Vuforia.BackgroundPlaneBehaviour/ProjectionMatrixData::VerticalFoV
	float ___VerticalFoV_3;
	// UnityEngine.Vector3 Vuforia.BackgroundPlaneBehaviour/ProjectionMatrixData::CenterEyeRayFrom
	Vector3_t3722313464  ___CenterEyeRayFrom_4;
	// UnityEngine.Vector3 Vuforia.BackgroundPlaneBehaviour/ProjectionMatrixData::CenterEyeRayTo
	Vector3_t3722313464  ___CenterEyeRayTo_5;
	// System.Single Vuforia.BackgroundPlaneBehaviour/ProjectionMatrixData::MaxDepth
	float ___MaxDepth_6;

public:
	inline static int32_t get_offset_of_ProjectionMatrix_0() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t3894131367, ___ProjectionMatrix_0)); }
	inline Matrix4x4_t1817901843  get_ProjectionMatrix_0() const { return ___ProjectionMatrix_0; }
	inline Matrix4x4_t1817901843 * get_address_of_ProjectionMatrix_0() { return &___ProjectionMatrix_0; }
	inline void set_ProjectionMatrix_0(Matrix4x4_t1817901843  value)
	{
		___ProjectionMatrix_0 = value;
	}

	inline static int32_t get_offset_of_InverseMatrix_1() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t3894131367, ___InverseMatrix_1)); }
	inline Matrix4x4_t1817901843  get_InverseMatrix_1() const { return ___InverseMatrix_1; }
	inline Matrix4x4_t1817901843 * get_address_of_InverseMatrix_1() { return &___InverseMatrix_1; }
	inline void set_InverseMatrix_1(Matrix4x4_t1817901843  value)
	{
		___InverseMatrix_1 = value;
	}

	inline static int32_t get_offset_of_HorizontalFoV_2() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t3894131367, ___HorizontalFoV_2)); }
	inline float get_HorizontalFoV_2() const { return ___HorizontalFoV_2; }
	inline float* get_address_of_HorizontalFoV_2() { return &___HorizontalFoV_2; }
	inline void set_HorizontalFoV_2(float value)
	{
		___HorizontalFoV_2 = value;
	}

	inline static int32_t get_offset_of_VerticalFoV_3() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t3894131367, ___VerticalFoV_3)); }
	inline float get_VerticalFoV_3() const { return ___VerticalFoV_3; }
	inline float* get_address_of_VerticalFoV_3() { return &___VerticalFoV_3; }
	inline void set_VerticalFoV_3(float value)
	{
		___VerticalFoV_3 = value;
	}

	inline static int32_t get_offset_of_CenterEyeRayFrom_4() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t3894131367, ___CenterEyeRayFrom_4)); }
	inline Vector3_t3722313464  get_CenterEyeRayFrom_4() const { return ___CenterEyeRayFrom_4; }
	inline Vector3_t3722313464 * get_address_of_CenterEyeRayFrom_4() { return &___CenterEyeRayFrom_4; }
	inline void set_CenterEyeRayFrom_4(Vector3_t3722313464  value)
	{
		___CenterEyeRayFrom_4 = value;
	}

	inline static int32_t get_offset_of_CenterEyeRayTo_5() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t3894131367, ___CenterEyeRayTo_5)); }
	inline Vector3_t3722313464  get_CenterEyeRayTo_5() const { return ___CenterEyeRayTo_5; }
	inline Vector3_t3722313464 * get_address_of_CenterEyeRayTo_5() { return &___CenterEyeRayTo_5; }
	inline void set_CenterEyeRayTo_5(Vector3_t3722313464  value)
	{
		___CenterEyeRayTo_5 = value;
	}

	inline static int32_t get_offset_of_MaxDepth_6() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t3894131367, ___MaxDepth_6)); }
	inline float get_MaxDepth_6() const { return ___MaxDepth_6; }
	inline float* get_address_of_MaxDepth_6() { return &___MaxDepth_6; }
	inline void set_MaxDepth_6(float value)
	{
		___MaxDepth_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROJECTIONMATRIXDATA_T3894131367_H
#ifndef CLIPPING_MODE_T2655398006_H
#define CLIPPING_MODE_T2655398006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.HideExcessAreaUtility/CLIPPING_MODE
struct  CLIPPING_MODE_t2655398006 
{
public:
	// System.Int32 Vuforia.HideExcessAreaUtility/CLIPPING_MODE::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CLIPPING_MODE_t2655398006, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIPPING_MODE_T2655398006_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T1066900953_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef FOCUSMODE_T3379290461_H
#define FOCUSMODE_T3379290461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/FocusMode
struct  FocusMode_t3379290461 
{
public:
	// System.Int32 Vuforia.CameraDevice/FocusMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FocusMode_t3379290461, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOCUSMODE_T3379290461_H
#ifndef WORLDCENTERMODE_T3672819471_H
#define WORLDCENTERMODE_T3672819471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaARController/WorldCenterMode
struct  WorldCenterMode_t3672819471 
{
public:
	// System.Int32 Vuforia.VuforiaARController/WorldCenterMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WorldCenterMode_t3672819471, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORLDCENTERMODE_T3672819471_H
#ifndef VIDEOBACKGROUNDREFLECTION_T736962841_H
#define VIDEOBACKGROUNDREFLECTION_T736962841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/VideoBackgroundReflection
struct  VideoBackgroundReflection_t736962841 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/VideoBackgroundReflection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VideoBackgroundReflection_t736962841, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOBACKGROUNDREFLECTION_T736962841_H
#ifndef CAMERADEVICEMODE_T2478715656_H
#define CAMERADEVICEMODE_T2478715656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDeviceMode
struct  CameraDeviceMode_t2478715656 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDeviceMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraDeviceMode_t2478715656, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADEVICEMODE_T2478715656_H
#ifndef EYEWEARTYPE_T2277580470_H
#define EYEWEARTYPE_T2277580470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController/EyewearType
struct  EyewearType_t2277580470 
{
public:
	// System.Int32 Vuforia.DigitalEyewearARController/EyewearType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EyewearType_t2277580470, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EYEWEARTYPE_T2277580470_H
#ifndef STEREOFRAMEWORK_T3144873991_H
#define STEREOFRAMEWORK_T3144873991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController/StereoFramework
struct  StereoFramework_t3144873991 
{
public:
	// System.Int32 Vuforia.DigitalEyewearARController/StereoFramework::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StereoFramework_t3144873991, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STEREOFRAMEWORK_T3144873991_H
#ifndef SEETHROUGHCONFIGURATION_T568665021_H
#define SEETHROUGHCONFIGURATION_T568665021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController/SeeThroughConfiguration
struct  SeeThroughConfiguration_t568665021 
{
public:
	// System.Int32 Vuforia.DigitalEyewearARController/SeeThroughConfiguration::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SeeThroughConfiguration_t568665021, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEETHROUGHCONFIGURATION_T568665021_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef VUFORIARENDERER_T3433045970_H
#define VUFORIARENDERER_T3433045970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer
struct  VuforiaRenderer_t3433045970  : public RuntimeObject
{
public:
	// Vuforia.VuforiaRenderer/VideoBGCfgData Vuforia.VuforiaRenderer::mVideoBGConfig
	VideoBGCfgData_t994527297  ___mVideoBGConfig_1;
	// System.Boolean Vuforia.VuforiaRenderer::mVideoBGConfigSet
	bool ___mVideoBGConfigSet_2;
	// UnityEngine.Texture Vuforia.VuforiaRenderer::mVideoBackgroundTexture
	Texture_t3661962703 * ___mVideoBackgroundTexture_3;
	// System.Boolean Vuforia.VuforiaRenderer::mBackgroundTextureHasChanged
	bool ___mBackgroundTextureHasChanged_4;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaRenderer::mLastSetReflection
	int32_t ___mLastSetReflection_5;
	// System.IntPtr Vuforia.VuforiaRenderer::mNativeRenderingCallback
	intptr_t ___mNativeRenderingCallback_6;

public:
	inline static int32_t get_offset_of_mVideoBGConfig_1() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970, ___mVideoBGConfig_1)); }
	inline VideoBGCfgData_t994527297  get_mVideoBGConfig_1() const { return ___mVideoBGConfig_1; }
	inline VideoBGCfgData_t994527297 * get_address_of_mVideoBGConfig_1() { return &___mVideoBGConfig_1; }
	inline void set_mVideoBGConfig_1(VideoBGCfgData_t994527297  value)
	{
		___mVideoBGConfig_1 = value;
	}

	inline static int32_t get_offset_of_mVideoBGConfigSet_2() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970, ___mVideoBGConfigSet_2)); }
	inline bool get_mVideoBGConfigSet_2() const { return ___mVideoBGConfigSet_2; }
	inline bool* get_address_of_mVideoBGConfigSet_2() { return &___mVideoBGConfigSet_2; }
	inline void set_mVideoBGConfigSet_2(bool value)
	{
		___mVideoBGConfigSet_2 = value;
	}

	inline static int32_t get_offset_of_mVideoBackgroundTexture_3() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970, ___mVideoBackgroundTexture_3)); }
	inline Texture_t3661962703 * get_mVideoBackgroundTexture_3() const { return ___mVideoBackgroundTexture_3; }
	inline Texture_t3661962703 ** get_address_of_mVideoBackgroundTexture_3() { return &___mVideoBackgroundTexture_3; }
	inline void set_mVideoBackgroundTexture_3(Texture_t3661962703 * value)
	{
		___mVideoBackgroundTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBackgroundTexture_3), value);
	}

	inline static int32_t get_offset_of_mBackgroundTextureHasChanged_4() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970, ___mBackgroundTextureHasChanged_4)); }
	inline bool get_mBackgroundTextureHasChanged_4() const { return ___mBackgroundTextureHasChanged_4; }
	inline bool* get_address_of_mBackgroundTextureHasChanged_4() { return &___mBackgroundTextureHasChanged_4; }
	inline void set_mBackgroundTextureHasChanged_4(bool value)
	{
		___mBackgroundTextureHasChanged_4 = value;
	}

	inline static int32_t get_offset_of_mLastSetReflection_5() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970, ___mLastSetReflection_5)); }
	inline int32_t get_mLastSetReflection_5() const { return ___mLastSetReflection_5; }
	inline int32_t* get_address_of_mLastSetReflection_5() { return &___mLastSetReflection_5; }
	inline void set_mLastSetReflection_5(int32_t value)
	{
		___mLastSetReflection_5 = value;
	}

	inline static int32_t get_offset_of_mNativeRenderingCallback_6() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970, ___mNativeRenderingCallback_6)); }
	inline intptr_t get_mNativeRenderingCallback_6() const { return ___mNativeRenderingCallback_6; }
	inline intptr_t* get_address_of_mNativeRenderingCallback_6() { return &___mNativeRenderingCallback_6; }
	inline void set_mNativeRenderingCallback_6(intptr_t value)
	{
		___mNativeRenderingCallback_6 = value;
	}
};

struct VuforiaRenderer_t3433045970_StaticFields
{
public:
	// Vuforia.VuforiaRenderer Vuforia.VuforiaRenderer::sInstance
	VuforiaRenderer_t3433045970 * ___sInstance_0;

public:
	inline static int32_t get_offset_of_sInstance_0() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970_StaticFields, ___sInstance_0)); }
	inline VuforiaRenderer_t3433045970 * get_sInstance_0() const { return ___sInstance_0; }
	inline VuforiaRenderer_t3433045970 ** get_address_of_sInstance_0() { return &___sInstance_0; }
	inline void set_sInstance_0(VuforiaRenderer_t3433045970 * value)
	{
		___sInstance_0 = value;
		Il2CppCodeGenWriteBarrier((&___sInstance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIARENDERER_T3433045970_H
#ifndef MIXEDREALITYCONTROLLER_T13217384_H
#define MIXEDREALITYCONTROLLER_T13217384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.MixedRealityController
struct  MixedRealityController_t13217384  : public RuntimeObject
{
public:
	// Vuforia.VuforiaARController Vuforia.MixedRealityController::mVuforiaBehaviour
	VuforiaARController_t1876945237 * ___mVuforiaBehaviour_2;
	// Vuforia.DigitalEyewearARController Vuforia.MixedRealityController::mDigitalEyewearBehaviour
	DigitalEyewearARController_t1054226036 * ___mDigitalEyewearBehaviour_3;
	// Vuforia.VideoBackgroundManager Vuforia.MixedRealityController::mVideoBackgroundManager
	VideoBackgroundManager_t2198727358 * ___mVideoBackgroundManager_4;
	// System.Boolean Vuforia.MixedRealityController::mViewerHasBeenSetExternally
	bool ___mViewerHasBeenSetExternally_5;
	// Vuforia.IViewerParameters Vuforia.MixedRealityController::mViewerParameters
	RuntimeObject* ___mViewerParameters_6;
	// System.Boolean Vuforia.MixedRealityController::mFrameWorkHasBeenSetExternally
	bool ___mFrameWorkHasBeenSetExternally_7;
	// Vuforia.DigitalEyewearARController/StereoFramework Vuforia.MixedRealityController::mStereoFramework
	int32_t ___mStereoFramework_8;
	// System.Boolean Vuforia.MixedRealityController::mObjectTrackerStopped
	bool ___mObjectTrackerStopped_9;
	// System.Boolean Vuforia.MixedRealityController::mAutoStopCameraIfNotRequired
	bool ___mAutoStopCameraIfNotRequired_10;

public:
	inline static int32_t get_offset_of_mVuforiaBehaviour_2() { return static_cast<int32_t>(offsetof(MixedRealityController_t13217384, ___mVuforiaBehaviour_2)); }
	inline VuforiaARController_t1876945237 * get_mVuforiaBehaviour_2() const { return ___mVuforiaBehaviour_2; }
	inline VuforiaARController_t1876945237 ** get_address_of_mVuforiaBehaviour_2() { return &___mVuforiaBehaviour_2; }
	inline void set_mVuforiaBehaviour_2(VuforiaARController_t1876945237 * value)
	{
		___mVuforiaBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_2), value);
	}

	inline static int32_t get_offset_of_mDigitalEyewearBehaviour_3() { return static_cast<int32_t>(offsetof(MixedRealityController_t13217384, ___mDigitalEyewearBehaviour_3)); }
	inline DigitalEyewearARController_t1054226036 * get_mDigitalEyewearBehaviour_3() const { return ___mDigitalEyewearBehaviour_3; }
	inline DigitalEyewearARController_t1054226036 ** get_address_of_mDigitalEyewearBehaviour_3() { return &___mDigitalEyewearBehaviour_3; }
	inline void set_mDigitalEyewearBehaviour_3(DigitalEyewearARController_t1054226036 * value)
	{
		___mDigitalEyewearBehaviour_3 = value;
		Il2CppCodeGenWriteBarrier((&___mDigitalEyewearBehaviour_3), value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundManager_4() { return static_cast<int32_t>(offsetof(MixedRealityController_t13217384, ___mVideoBackgroundManager_4)); }
	inline VideoBackgroundManager_t2198727358 * get_mVideoBackgroundManager_4() const { return ___mVideoBackgroundManager_4; }
	inline VideoBackgroundManager_t2198727358 ** get_address_of_mVideoBackgroundManager_4() { return &___mVideoBackgroundManager_4; }
	inline void set_mVideoBackgroundManager_4(VideoBackgroundManager_t2198727358 * value)
	{
		___mVideoBackgroundManager_4 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBackgroundManager_4), value);
	}

	inline static int32_t get_offset_of_mViewerHasBeenSetExternally_5() { return static_cast<int32_t>(offsetof(MixedRealityController_t13217384, ___mViewerHasBeenSetExternally_5)); }
	inline bool get_mViewerHasBeenSetExternally_5() const { return ___mViewerHasBeenSetExternally_5; }
	inline bool* get_address_of_mViewerHasBeenSetExternally_5() { return &___mViewerHasBeenSetExternally_5; }
	inline void set_mViewerHasBeenSetExternally_5(bool value)
	{
		___mViewerHasBeenSetExternally_5 = value;
	}

	inline static int32_t get_offset_of_mViewerParameters_6() { return static_cast<int32_t>(offsetof(MixedRealityController_t13217384, ___mViewerParameters_6)); }
	inline RuntimeObject* get_mViewerParameters_6() const { return ___mViewerParameters_6; }
	inline RuntimeObject** get_address_of_mViewerParameters_6() { return &___mViewerParameters_6; }
	inline void set_mViewerParameters_6(RuntimeObject* value)
	{
		___mViewerParameters_6 = value;
		Il2CppCodeGenWriteBarrier((&___mViewerParameters_6), value);
	}

	inline static int32_t get_offset_of_mFrameWorkHasBeenSetExternally_7() { return static_cast<int32_t>(offsetof(MixedRealityController_t13217384, ___mFrameWorkHasBeenSetExternally_7)); }
	inline bool get_mFrameWorkHasBeenSetExternally_7() const { return ___mFrameWorkHasBeenSetExternally_7; }
	inline bool* get_address_of_mFrameWorkHasBeenSetExternally_7() { return &___mFrameWorkHasBeenSetExternally_7; }
	inline void set_mFrameWorkHasBeenSetExternally_7(bool value)
	{
		___mFrameWorkHasBeenSetExternally_7 = value;
	}

	inline static int32_t get_offset_of_mStereoFramework_8() { return static_cast<int32_t>(offsetof(MixedRealityController_t13217384, ___mStereoFramework_8)); }
	inline int32_t get_mStereoFramework_8() const { return ___mStereoFramework_8; }
	inline int32_t* get_address_of_mStereoFramework_8() { return &___mStereoFramework_8; }
	inline void set_mStereoFramework_8(int32_t value)
	{
		___mStereoFramework_8 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerStopped_9() { return static_cast<int32_t>(offsetof(MixedRealityController_t13217384, ___mObjectTrackerStopped_9)); }
	inline bool get_mObjectTrackerStopped_9() const { return ___mObjectTrackerStopped_9; }
	inline bool* get_address_of_mObjectTrackerStopped_9() { return &___mObjectTrackerStopped_9; }
	inline void set_mObjectTrackerStopped_9(bool value)
	{
		___mObjectTrackerStopped_9 = value;
	}

	inline static int32_t get_offset_of_mAutoStopCameraIfNotRequired_10() { return static_cast<int32_t>(offsetof(MixedRealityController_t13217384, ___mAutoStopCameraIfNotRequired_10)); }
	inline bool get_mAutoStopCameraIfNotRequired_10() const { return ___mAutoStopCameraIfNotRequired_10; }
	inline bool* get_address_of_mAutoStopCameraIfNotRequired_10() { return &___mAutoStopCameraIfNotRequired_10; }
	inline void set_mAutoStopCameraIfNotRequired_10(bool value)
	{
		___mAutoStopCameraIfNotRequired_10 = value;
	}
};

struct MixedRealityController_t13217384_StaticFields
{
public:
	// Vuforia.MixedRealityController Vuforia.MixedRealityController::mInstance
	MixedRealityController_t13217384 * ___mInstance_1;

public:
	inline static int32_t get_offset_of_mInstance_1() { return static_cast<int32_t>(offsetof(MixedRealityController_t13217384_StaticFields, ___mInstance_1)); }
	inline MixedRealityController_t13217384 * get_mInstance_1() const { return ___mInstance_1; }
	inline MixedRealityController_t13217384 ** get_address_of_mInstance_1() { return &___mInstance_1; }
	inline void set_mInstance_1(MixedRealityController_t13217384 * value)
	{
		___mInstance_1 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYCONTROLLER_T13217384_H
#ifndef MOTION_T1110556653_H
#define MOTION_T1110556653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Motion
struct  Motion_t1110556653  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOTION_T1110556653_H
#ifndef VUFORIARUNTIME_T1949122020_H
#define VUFORIARUNTIME_T1949122020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRuntime
struct  VuforiaRuntime_t1949122020  : public RuntimeObject
{
public:
	// System.Action`1<Vuforia.VuforiaUnity/InitError> Vuforia.VuforiaRuntime::mOnVuforiaInitError
	Action_1_t3593217305 * ___mOnVuforiaInitError_1;
	// System.Boolean Vuforia.VuforiaRuntime::mFailedToInitialize
	bool ___mFailedToInitialize_2;
	// Vuforia.VuforiaUnity/InitError Vuforia.VuforiaRuntime::mInitError
	int32_t ___mInitError_3;
	// System.Boolean Vuforia.VuforiaRuntime::mHasInitialized
	bool ___mHasInitialized_4;

public:
	inline static int32_t get_offset_of_mOnVuforiaInitError_1() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mOnVuforiaInitError_1)); }
	inline Action_1_t3593217305 * get_mOnVuforiaInitError_1() const { return ___mOnVuforiaInitError_1; }
	inline Action_1_t3593217305 ** get_address_of_mOnVuforiaInitError_1() { return &___mOnVuforiaInitError_1; }
	inline void set_mOnVuforiaInitError_1(Action_1_t3593217305 * value)
	{
		___mOnVuforiaInitError_1 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaInitError_1), value);
	}

	inline static int32_t get_offset_of_mFailedToInitialize_2() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mFailedToInitialize_2)); }
	inline bool get_mFailedToInitialize_2() const { return ___mFailedToInitialize_2; }
	inline bool* get_address_of_mFailedToInitialize_2() { return &___mFailedToInitialize_2; }
	inline void set_mFailedToInitialize_2(bool value)
	{
		___mFailedToInitialize_2 = value;
	}

	inline static int32_t get_offset_of_mInitError_3() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mInitError_3)); }
	inline int32_t get_mInitError_3() const { return ___mInitError_3; }
	inline int32_t* get_address_of_mInitError_3() { return &___mInitError_3; }
	inline void set_mInitError_3(int32_t value)
	{
		___mInitError_3 = value;
	}

	inline static int32_t get_offset_of_mHasInitialized_4() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mHasInitialized_4)); }
	inline bool get_mHasInitialized_4() const { return ___mHasInitialized_4; }
	inline bool* get_address_of_mHasInitialized_4() { return &___mHasInitialized_4; }
	inline void set_mHasInitialized_4(bool value)
	{
		___mHasInitialized_4 = value;
	}
};

struct VuforiaRuntime_t1949122020_StaticFields
{
public:
	// Vuforia.VuforiaRuntime Vuforia.VuforiaRuntime::mInstance
	VuforiaRuntime_t1949122020 * ___mInstance_5;
	// System.Object Vuforia.VuforiaRuntime::mPadlock
	RuntimeObject * ___mPadlock_6;

public:
	inline static int32_t get_offset_of_mInstance_5() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020_StaticFields, ___mInstance_5)); }
	inline VuforiaRuntime_t1949122020 * get_mInstance_5() const { return ___mInstance_5; }
	inline VuforiaRuntime_t1949122020 ** get_address_of_mInstance_5() { return &___mInstance_5; }
	inline void set_mInstance_5(VuforiaRuntime_t1949122020 * value)
	{
		___mInstance_5 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_5), value);
	}

	inline static int32_t get_offset_of_mPadlock_6() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020_StaticFields, ___mPadlock_6)); }
	inline RuntimeObject * get_mPadlock_6() const { return ___mPadlock_6; }
	inline RuntimeObject ** get_address_of_mPadlock_6() { return &___mPadlock_6; }
	inline void set_mPadlock_6(RuntimeObject * value)
	{
		___mPadlock_6 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIARUNTIME_T1949122020_H
#ifndef VIDEOBACKGROUNDMANAGER_T2198727358_H
#define VIDEOBACKGROUNDMANAGER_T2198727358_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VideoBackgroundManager
struct  VideoBackgroundManager_t2198727358  : public ARController_t116632334
{
public:
	// Vuforia.HideExcessAreaUtility/CLIPPING_MODE Vuforia.VideoBackgroundManager::mClippingMode
	int32_t ___mClippingMode_1;
	// UnityEngine.Shader Vuforia.VideoBackgroundManager::mMatteShader
	Shader_t4151988712 * ___mMatteShader_2;
	// System.Boolean Vuforia.VideoBackgroundManager::mVideoBackgroundEnabled
	bool ___mVideoBackgroundEnabled_3;
	// UnityEngine.Texture Vuforia.VideoBackgroundManager::mTexture
	Texture_t3661962703 * ___mTexture_4;
	// System.Boolean Vuforia.VideoBackgroundManager::mVideoBgConfigChanged
	bool ___mVideoBgConfigChanged_5;
	// System.IntPtr Vuforia.VideoBackgroundManager::mNativeTexturePtr
	intptr_t ___mNativeTexturePtr_6;

public:
	inline static int32_t get_offset_of_mClippingMode_1() { return static_cast<int32_t>(offsetof(VideoBackgroundManager_t2198727358, ___mClippingMode_1)); }
	inline int32_t get_mClippingMode_1() const { return ___mClippingMode_1; }
	inline int32_t* get_address_of_mClippingMode_1() { return &___mClippingMode_1; }
	inline void set_mClippingMode_1(int32_t value)
	{
		___mClippingMode_1 = value;
	}

	inline static int32_t get_offset_of_mMatteShader_2() { return static_cast<int32_t>(offsetof(VideoBackgroundManager_t2198727358, ___mMatteShader_2)); }
	inline Shader_t4151988712 * get_mMatteShader_2() const { return ___mMatteShader_2; }
	inline Shader_t4151988712 ** get_address_of_mMatteShader_2() { return &___mMatteShader_2; }
	inline void set_mMatteShader_2(Shader_t4151988712 * value)
	{
		___mMatteShader_2 = value;
		Il2CppCodeGenWriteBarrier((&___mMatteShader_2), value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundEnabled_3() { return static_cast<int32_t>(offsetof(VideoBackgroundManager_t2198727358, ___mVideoBackgroundEnabled_3)); }
	inline bool get_mVideoBackgroundEnabled_3() const { return ___mVideoBackgroundEnabled_3; }
	inline bool* get_address_of_mVideoBackgroundEnabled_3() { return &___mVideoBackgroundEnabled_3; }
	inline void set_mVideoBackgroundEnabled_3(bool value)
	{
		___mVideoBackgroundEnabled_3 = value;
	}

	inline static int32_t get_offset_of_mTexture_4() { return static_cast<int32_t>(offsetof(VideoBackgroundManager_t2198727358, ___mTexture_4)); }
	inline Texture_t3661962703 * get_mTexture_4() const { return ___mTexture_4; }
	inline Texture_t3661962703 ** get_address_of_mTexture_4() { return &___mTexture_4; }
	inline void set_mTexture_4(Texture_t3661962703 * value)
	{
		___mTexture_4 = value;
		Il2CppCodeGenWriteBarrier((&___mTexture_4), value);
	}

	inline static int32_t get_offset_of_mVideoBgConfigChanged_5() { return static_cast<int32_t>(offsetof(VideoBackgroundManager_t2198727358, ___mVideoBgConfigChanged_5)); }
	inline bool get_mVideoBgConfigChanged_5() const { return ___mVideoBgConfigChanged_5; }
	inline bool* get_address_of_mVideoBgConfigChanged_5() { return &___mVideoBgConfigChanged_5; }
	inline void set_mVideoBgConfigChanged_5(bool value)
	{
		___mVideoBgConfigChanged_5 = value;
	}

	inline static int32_t get_offset_of_mNativeTexturePtr_6() { return static_cast<int32_t>(offsetof(VideoBackgroundManager_t2198727358, ___mNativeTexturePtr_6)); }
	inline intptr_t get_mNativeTexturePtr_6() const { return ___mNativeTexturePtr_6; }
	inline intptr_t* get_address_of_mNativeTexturePtr_6() { return &___mNativeTexturePtr_6; }
	inline void set_mNativeTexturePtr_6(intptr_t value)
	{
		___mNativeTexturePtr_6 = value;
	}
};

struct VideoBackgroundManager_t2198727358_StaticFields
{
public:
	// Vuforia.VideoBackgroundManager Vuforia.VideoBackgroundManager::mInstance
	VideoBackgroundManager_t2198727358 * ___mInstance_7;
	// System.Object Vuforia.VideoBackgroundManager::mPadlock
	RuntimeObject * ___mPadlock_8;

public:
	inline static int32_t get_offset_of_mInstance_7() { return static_cast<int32_t>(offsetof(VideoBackgroundManager_t2198727358_StaticFields, ___mInstance_7)); }
	inline VideoBackgroundManager_t2198727358 * get_mInstance_7() const { return ___mInstance_7; }
	inline VideoBackgroundManager_t2198727358 ** get_address_of_mInstance_7() { return &___mInstance_7; }
	inline void set_mInstance_7(VideoBackgroundManager_t2198727358 * value)
	{
		___mInstance_7 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_7), value);
	}

	inline static int32_t get_offset_of_mPadlock_8() { return static_cast<int32_t>(offsetof(VideoBackgroundManager_t2198727358_StaticFields, ___mPadlock_8)); }
	inline RuntimeObject * get_mPadlock_8() const { return ___mPadlock_8; }
	inline RuntimeObject ** get_address_of_mPadlock_8() { return &___mPadlock_8; }
	inline void set_mPadlock_8(RuntimeObject * value)
	{
		___mPadlock_8 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOBACKGROUNDMANAGER_T2198727358_H
#ifndef DATASET_T3286034874_H
#define DATASET_T3286034874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DataSet
struct  DataSet_t3286034874  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.DataSet::mDataSetPtr
	intptr_t ___mDataSetPtr_0;
	// System.String Vuforia.DataSet::mPath
	String_t* ___mPath_1;
	// Vuforia.VuforiaUnity/StorageType Vuforia.DataSet::mStorageType
	int32_t ___mStorageType_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable> Vuforia.DataSet::mTrackablesDict
	Dictionary_2_t1340713322 * ___mTrackablesDict_3;

public:
	inline static int32_t get_offset_of_mDataSetPtr_0() { return static_cast<int32_t>(offsetof(DataSet_t3286034874, ___mDataSetPtr_0)); }
	inline intptr_t get_mDataSetPtr_0() const { return ___mDataSetPtr_0; }
	inline intptr_t* get_address_of_mDataSetPtr_0() { return &___mDataSetPtr_0; }
	inline void set_mDataSetPtr_0(intptr_t value)
	{
		___mDataSetPtr_0 = value;
	}

	inline static int32_t get_offset_of_mPath_1() { return static_cast<int32_t>(offsetof(DataSet_t3286034874, ___mPath_1)); }
	inline String_t* get_mPath_1() const { return ___mPath_1; }
	inline String_t** get_address_of_mPath_1() { return &___mPath_1; }
	inline void set_mPath_1(String_t* value)
	{
		___mPath_1 = value;
		Il2CppCodeGenWriteBarrier((&___mPath_1), value);
	}

	inline static int32_t get_offset_of_mStorageType_2() { return static_cast<int32_t>(offsetof(DataSet_t3286034874, ___mStorageType_2)); }
	inline int32_t get_mStorageType_2() const { return ___mStorageType_2; }
	inline int32_t* get_address_of_mStorageType_2() { return &___mStorageType_2; }
	inline void set_mStorageType_2(int32_t value)
	{
		___mStorageType_2 = value;
	}

	inline static int32_t get_offset_of_mTrackablesDict_3() { return static_cast<int32_t>(offsetof(DataSet_t3286034874, ___mTrackablesDict_3)); }
	inline Dictionary_2_t1340713322 * get_mTrackablesDict_3() const { return ___mTrackablesDict_3; }
	inline Dictionary_2_t1340713322 ** get_address_of_mTrackablesDict_3() { return &___mTrackablesDict_3; }
	inline void set_mTrackablesDict_3(Dictionary_2_t1340713322 * value)
	{
		___mTrackablesDict_3 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackablesDict_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASET_T3286034874_H
#ifndef SHADER_T4151988712_H
#define SHADER_T4151988712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Shader
struct  Shader_t4151988712  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADER_T4151988712_H
#ifndef GUISTYLE_T3956901511_H
#define GUISTYLE_T3956901511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyle
struct  GUIStyle_t3956901511  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t1397964415 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t1397964415 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t1397964415 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t1397964415 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t1397964415 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t1397964415 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t1397964415 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t1397964415 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t1369453676 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t1369453676 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t1369453676 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t1369453676 * ___m_Overflow_12;
	// UnityEngine.Font UnityEngine.GUIStyle::m_FontInternal
	Font_t1956802104 * ___m_FontInternal_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Normal_1)); }
	inline GUIStyleState_t1397964415 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_t1397964415 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normal_1), value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Hover_2)); }
	inline GUIStyleState_t1397964415 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_t1397964415 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Hover_2), value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Active_3)); }
	inline GUIStyleState_t1397964415 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_t1397964415 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Active_3), value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Focused_4)); }
	inline GUIStyleState_t1397964415 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_t1397964415 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Focused_4), value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnNormal_5)); }
	inline GUIStyleState_t1397964415 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_t1397964415 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnNormal_5), value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnHover_6)); }
	inline GUIStyleState_t1397964415 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_t1397964415 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnHover_6), value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnActive_7)); }
	inline GUIStyleState_t1397964415 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_t1397964415 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnActive_7), value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnFocused_8)); }
	inline GUIStyleState_t1397964415 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_t1397964415 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnFocused_8), value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Border_9)); }
	inline RectOffset_t1369453676 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_t1369453676 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_t1369453676 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Border_9), value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Padding_10)); }
	inline RectOffset_t1369453676 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_t1369453676 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_t1369453676 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Padding_10), value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Margin_11)); }
	inline RectOffset_t1369453676 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_t1369453676 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_t1369453676 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Margin_11), value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Overflow_12)); }
	inline RectOffset_t1369453676 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_t1369453676 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_t1369453676 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Overflow_12), value);
	}

	inline static int32_t get_offset_of_m_FontInternal_13() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_FontInternal_13)); }
	inline Font_t1956802104 * get_m_FontInternal_13() const { return ___m_FontInternal_13; }
	inline Font_t1956802104 ** get_address_of_m_FontInternal_13() { return &___m_FontInternal_13; }
	inline void set_m_FontInternal_13(Font_t1956802104 * value)
	{
		___m_FontInternal_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontInternal_13), value);
	}
};

struct GUIStyle_t3956901511_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t3956901511 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___s_None_15)); }
	inline GUIStyle_t3956901511 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t3956901511 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t3956901511 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_None_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Border_9;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Overflow_12;
	Font_t1956802104 * ___m_FontInternal_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_com* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_com* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_com* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_com* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_com* ___m_Border_9;
	RectOffset_t1369453676_marshaled_com* ___m_Padding_10;
	RectOffset_t1369453676_marshaled_com* ___m_Margin_11;
	RectOffset_t1369453676_marshaled_com* ___m_Overflow_12;
	Font_t1956802104 * ___m_FontInternal_13;
};
#endif // GUISTYLE_T3956901511_H
#ifndef GENERICVUFORIACONFIGURATION_T3697830469_H
#define GENERICVUFORIACONFIGURATION_T3697830469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct  GenericVuforiaConfiguration_t3697830469  : public RuntimeObject
{
public:
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::vuforiaLicenseKey
	String_t* ___vuforiaLicenseKey_1;
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::ufoLicenseKey
	String_t* ___ufoLicenseKey_2;
	// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::delayedInitialization
	bool ___delayedInitialization_3;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::cameraDeviceModeSetting
	int32_t ___cameraDeviceModeSetting_4;
	// System.Int32 Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::maxSimultaneousImageTargets
	int32_t ___maxSimultaneousImageTargets_5;
	// System.Int32 Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::maxSimultaneousObjectTargets
	int32_t ___maxSimultaneousObjectTargets_6;
	// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::useDelayedLoadingObjectTargets
	bool ___useDelayedLoadingObjectTargets_7;
	// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::cameraDirection
	int32_t ___cameraDirection_8;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::mirrorVideoBackground
	int32_t ___mirrorVideoBackground_9;

public:
	inline static int32_t get_offset_of_vuforiaLicenseKey_1() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___vuforiaLicenseKey_1)); }
	inline String_t* get_vuforiaLicenseKey_1() const { return ___vuforiaLicenseKey_1; }
	inline String_t** get_address_of_vuforiaLicenseKey_1() { return &___vuforiaLicenseKey_1; }
	inline void set_vuforiaLicenseKey_1(String_t* value)
	{
		___vuforiaLicenseKey_1 = value;
		Il2CppCodeGenWriteBarrier((&___vuforiaLicenseKey_1), value);
	}

	inline static int32_t get_offset_of_ufoLicenseKey_2() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___ufoLicenseKey_2)); }
	inline String_t* get_ufoLicenseKey_2() const { return ___ufoLicenseKey_2; }
	inline String_t** get_address_of_ufoLicenseKey_2() { return &___ufoLicenseKey_2; }
	inline void set_ufoLicenseKey_2(String_t* value)
	{
		___ufoLicenseKey_2 = value;
		Il2CppCodeGenWriteBarrier((&___ufoLicenseKey_2), value);
	}

	inline static int32_t get_offset_of_delayedInitialization_3() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___delayedInitialization_3)); }
	inline bool get_delayedInitialization_3() const { return ___delayedInitialization_3; }
	inline bool* get_address_of_delayedInitialization_3() { return &___delayedInitialization_3; }
	inline void set_delayedInitialization_3(bool value)
	{
		___delayedInitialization_3 = value;
	}

	inline static int32_t get_offset_of_cameraDeviceModeSetting_4() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___cameraDeviceModeSetting_4)); }
	inline int32_t get_cameraDeviceModeSetting_4() const { return ___cameraDeviceModeSetting_4; }
	inline int32_t* get_address_of_cameraDeviceModeSetting_4() { return &___cameraDeviceModeSetting_4; }
	inline void set_cameraDeviceModeSetting_4(int32_t value)
	{
		___cameraDeviceModeSetting_4 = value;
	}

	inline static int32_t get_offset_of_maxSimultaneousImageTargets_5() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___maxSimultaneousImageTargets_5)); }
	inline int32_t get_maxSimultaneousImageTargets_5() const { return ___maxSimultaneousImageTargets_5; }
	inline int32_t* get_address_of_maxSimultaneousImageTargets_5() { return &___maxSimultaneousImageTargets_5; }
	inline void set_maxSimultaneousImageTargets_5(int32_t value)
	{
		___maxSimultaneousImageTargets_5 = value;
	}

	inline static int32_t get_offset_of_maxSimultaneousObjectTargets_6() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___maxSimultaneousObjectTargets_6)); }
	inline int32_t get_maxSimultaneousObjectTargets_6() const { return ___maxSimultaneousObjectTargets_6; }
	inline int32_t* get_address_of_maxSimultaneousObjectTargets_6() { return &___maxSimultaneousObjectTargets_6; }
	inline void set_maxSimultaneousObjectTargets_6(int32_t value)
	{
		___maxSimultaneousObjectTargets_6 = value;
	}

	inline static int32_t get_offset_of_useDelayedLoadingObjectTargets_7() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___useDelayedLoadingObjectTargets_7)); }
	inline bool get_useDelayedLoadingObjectTargets_7() const { return ___useDelayedLoadingObjectTargets_7; }
	inline bool* get_address_of_useDelayedLoadingObjectTargets_7() { return &___useDelayedLoadingObjectTargets_7; }
	inline void set_useDelayedLoadingObjectTargets_7(bool value)
	{
		___useDelayedLoadingObjectTargets_7 = value;
	}

	inline static int32_t get_offset_of_cameraDirection_8() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___cameraDirection_8)); }
	inline int32_t get_cameraDirection_8() const { return ___cameraDirection_8; }
	inline int32_t* get_address_of_cameraDirection_8() { return &___cameraDirection_8; }
	inline void set_cameraDirection_8(int32_t value)
	{
		___cameraDirection_8 = value;
	}

	inline static int32_t get_offset_of_mirrorVideoBackground_9() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___mirrorVideoBackground_9)); }
	inline int32_t get_mirrorVideoBackground_9() const { return ___mirrorVideoBackground_9; }
	inline int32_t* get_address_of_mirrorVideoBackground_9() { return &___mirrorVideoBackground_9; }
	inline void set_mirrorVideoBackground_9(int32_t value)
	{
		___mirrorVideoBackground_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICVUFORIACONFIGURATION_T3697830469_H
#ifndef VUFORIAARCONTROLLER_T1876945237_H
#define VUFORIAARCONTROLLER_T1876945237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaARController
struct  VuforiaARController_t1876945237  : public ARController_t116632334
{
public:
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaARController::CameraDeviceModeSetting
	int32_t ___CameraDeviceModeSetting_1;
	// System.Int32 Vuforia.VuforiaARController::MaxSimultaneousImageTargets
	int32_t ___MaxSimultaneousImageTargets_2;
	// System.Int32 Vuforia.VuforiaARController::MaxSimultaneousObjectTargets
	int32_t ___MaxSimultaneousObjectTargets_3;
	// System.Boolean Vuforia.VuforiaARController::UseDelayedLoadingObjectTargets
	bool ___UseDelayedLoadingObjectTargets_4;
	// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaARController::CameraDirection
	int32_t ___CameraDirection_5;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaARController::MirrorVideoBackground
	int32_t ___MirrorVideoBackground_6;
	// Vuforia.VuforiaARController/WorldCenterMode Vuforia.VuforiaARController::mWorldCenterMode
	int32_t ___mWorldCenterMode_7;
	// Vuforia.TrackableBehaviour Vuforia.VuforiaARController::mWorldCenter
	TrackableBehaviour_t1113559212 * ___mWorldCenter_8;
	// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler> Vuforia.VuforiaARController::mVideoBgEventHandlers
	List_1_t905170877 * ___mVideoBgEventHandlers_9;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaInitialized
	Action_t1264377477 * ___mOnVuforiaInitialized_10;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaStarted
	Action_t1264377477 * ___mOnVuforiaStarted_11;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaDeinitialized
	Action_t1264377477 * ___mOnVuforiaDeinitialized_12;
	// System.Action Vuforia.VuforiaARController::mOnTrackablesUpdated
	Action_t1264377477 * ___mOnTrackablesUpdated_13;
	// System.Action Vuforia.VuforiaARController::mRenderOnUpdate
	Action_t1264377477 * ___mRenderOnUpdate_14;
	// System.Action`1<System.Boolean> Vuforia.VuforiaARController::mOnPause
	Action_1_t269755560 * ___mOnPause_15;
	// System.Boolean Vuforia.VuforiaARController::mPaused
	bool ___mPaused_16;
	// System.Action Vuforia.VuforiaARController::mOnBackgroundTextureChanged
	Action_t1264377477 * ___mOnBackgroundTextureChanged_17;
	// System.Boolean Vuforia.VuforiaARController::mStartHasBeenInvoked
	bool ___mStartHasBeenInvoked_18;
	// System.Boolean Vuforia.VuforiaARController::mHasStarted
	bool ___mHasStarted_19;
	// Vuforia.ICameraConfiguration Vuforia.VuforiaARController::mCameraConfiguration
	RuntimeObject* ___mCameraConfiguration_20;
	// Vuforia.DigitalEyewearARController Vuforia.VuforiaARController::mEyewearBehaviour
	DigitalEyewearARController_t1054226036 * ___mEyewearBehaviour_21;
	// Vuforia.VideoBackgroundManager Vuforia.VuforiaARController::mVideoBackgroundMgr
	VideoBackgroundManager_t2198727358 * ___mVideoBackgroundMgr_22;
	// System.Boolean Vuforia.VuforiaARController::mCheckStopCamera
	bool ___mCheckStopCamera_23;
	// UnityEngine.Material Vuforia.VuforiaARController::mClearMaterial
	Material_t340375123 * ___mClearMaterial_24;
	// System.Boolean Vuforia.VuforiaARController::mMetalRendering
	bool ___mMetalRendering_25;
	// System.Boolean Vuforia.VuforiaARController::mHasStartedOnce
	bool ___mHasStartedOnce_26;
	// System.Boolean Vuforia.VuforiaARController::mWasEnabledBeforePause
	bool ___mWasEnabledBeforePause_27;
	// System.Boolean Vuforia.VuforiaARController::mObjectTrackerWasActiveBeforePause
	bool ___mObjectTrackerWasActiveBeforePause_28;
	// System.Boolean Vuforia.VuforiaARController::mObjectTrackerWasActiveBeforeDisabling
	bool ___mObjectTrackerWasActiveBeforeDisabling_29;
	// System.Int32 Vuforia.VuforiaARController::mLastUpdatedFrame
	int32_t ___mLastUpdatedFrame_30;
	// System.Collections.Generic.List`1<System.Type> Vuforia.VuforiaARController::mTrackersRequestedToDeinit
	List_1_t3956019502 * ___mTrackersRequestedToDeinit_31;

public:
	inline static int32_t get_offset_of_CameraDeviceModeSetting_1() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___CameraDeviceModeSetting_1)); }
	inline int32_t get_CameraDeviceModeSetting_1() const { return ___CameraDeviceModeSetting_1; }
	inline int32_t* get_address_of_CameraDeviceModeSetting_1() { return &___CameraDeviceModeSetting_1; }
	inline void set_CameraDeviceModeSetting_1(int32_t value)
	{
		___CameraDeviceModeSetting_1 = value;
	}

	inline static int32_t get_offset_of_MaxSimultaneousImageTargets_2() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___MaxSimultaneousImageTargets_2)); }
	inline int32_t get_MaxSimultaneousImageTargets_2() const { return ___MaxSimultaneousImageTargets_2; }
	inline int32_t* get_address_of_MaxSimultaneousImageTargets_2() { return &___MaxSimultaneousImageTargets_2; }
	inline void set_MaxSimultaneousImageTargets_2(int32_t value)
	{
		___MaxSimultaneousImageTargets_2 = value;
	}

	inline static int32_t get_offset_of_MaxSimultaneousObjectTargets_3() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___MaxSimultaneousObjectTargets_3)); }
	inline int32_t get_MaxSimultaneousObjectTargets_3() const { return ___MaxSimultaneousObjectTargets_3; }
	inline int32_t* get_address_of_MaxSimultaneousObjectTargets_3() { return &___MaxSimultaneousObjectTargets_3; }
	inline void set_MaxSimultaneousObjectTargets_3(int32_t value)
	{
		___MaxSimultaneousObjectTargets_3 = value;
	}

	inline static int32_t get_offset_of_UseDelayedLoadingObjectTargets_4() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___UseDelayedLoadingObjectTargets_4)); }
	inline bool get_UseDelayedLoadingObjectTargets_4() const { return ___UseDelayedLoadingObjectTargets_4; }
	inline bool* get_address_of_UseDelayedLoadingObjectTargets_4() { return &___UseDelayedLoadingObjectTargets_4; }
	inline void set_UseDelayedLoadingObjectTargets_4(bool value)
	{
		___UseDelayedLoadingObjectTargets_4 = value;
	}

	inline static int32_t get_offset_of_CameraDirection_5() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___CameraDirection_5)); }
	inline int32_t get_CameraDirection_5() const { return ___CameraDirection_5; }
	inline int32_t* get_address_of_CameraDirection_5() { return &___CameraDirection_5; }
	inline void set_CameraDirection_5(int32_t value)
	{
		___CameraDirection_5 = value;
	}

	inline static int32_t get_offset_of_MirrorVideoBackground_6() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___MirrorVideoBackground_6)); }
	inline int32_t get_MirrorVideoBackground_6() const { return ___MirrorVideoBackground_6; }
	inline int32_t* get_address_of_MirrorVideoBackground_6() { return &___MirrorVideoBackground_6; }
	inline void set_MirrorVideoBackground_6(int32_t value)
	{
		___MirrorVideoBackground_6 = value;
	}

	inline static int32_t get_offset_of_mWorldCenterMode_7() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mWorldCenterMode_7)); }
	inline int32_t get_mWorldCenterMode_7() const { return ___mWorldCenterMode_7; }
	inline int32_t* get_address_of_mWorldCenterMode_7() { return &___mWorldCenterMode_7; }
	inline void set_mWorldCenterMode_7(int32_t value)
	{
		___mWorldCenterMode_7 = value;
	}

	inline static int32_t get_offset_of_mWorldCenter_8() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mWorldCenter_8)); }
	inline TrackableBehaviour_t1113559212 * get_mWorldCenter_8() const { return ___mWorldCenter_8; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mWorldCenter_8() { return &___mWorldCenter_8; }
	inline void set_mWorldCenter_8(TrackableBehaviour_t1113559212 * value)
	{
		___mWorldCenter_8 = value;
		Il2CppCodeGenWriteBarrier((&___mWorldCenter_8), value);
	}

	inline static int32_t get_offset_of_mVideoBgEventHandlers_9() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mVideoBgEventHandlers_9)); }
	inline List_1_t905170877 * get_mVideoBgEventHandlers_9() const { return ___mVideoBgEventHandlers_9; }
	inline List_1_t905170877 ** get_address_of_mVideoBgEventHandlers_9() { return &___mVideoBgEventHandlers_9; }
	inline void set_mVideoBgEventHandlers_9(List_1_t905170877 * value)
	{
		___mVideoBgEventHandlers_9 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBgEventHandlers_9), value);
	}

	inline static int32_t get_offset_of_mOnVuforiaInitialized_10() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnVuforiaInitialized_10)); }
	inline Action_t1264377477 * get_mOnVuforiaInitialized_10() const { return ___mOnVuforiaInitialized_10; }
	inline Action_t1264377477 ** get_address_of_mOnVuforiaInitialized_10() { return &___mOnVuforiaInitialized_10; }
	inline void set_mOnVuforiaInitialized_10(Action_t1264377477 * value)
	{
		___mOnVuforiaInitialized_10 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaInitialized_10), value);
	}

	inline static int32_t get_offset_of_mOnVuforiaStarted_11() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnVuforiaStarted_11)); }
	inline Action_t1264377477 * get_mOnVuforiaStarted_11() const { return ___mOnVuforiaStarted_11; }
	inline Action_t1264377477 ** get_address_of_mOnVuforiaStarted_11() { return &___mOnVuforiaStarted_11; }
	inline void set_mOnVuforiaStarted_11(Action_t1264377477 * value)
	{
		___mOnVuforiaStarted_11 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaStarted_11), value);
	}

	inline static int32_t get_offset_of_mOnVuforiaDeinitialized_12() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnVuforiaDeinitialized_12)); }
	inline Action_t1264377477 * get_mOnVuforiaDeinitialized_12() const { return ___mOnVuforiaDeinitialized_12; }
	inline Action_t1264377477 ** get_address_of_mOnVuforiaDeinitialized_12() { return &___mOnVuforiaDeinitialized_12; }
	inline void set_mOnVuforiaDeinitialized_12(Action_t1264377477 * value)
	{
		___mOnVuforiaDeinitialized_12 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaDeinitialized_12), value);
	}

	inline static int32_t get_offset_of_mOnTrackablesUpdated_13() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnTrackablesUpdated_13)); }
	inline Action_t1264377477 * get_mOnTrackablesUpdated_13() const { return ___mOnTrackablesUpdated_13; }
	inline Action_t1264377477 ** get_address_of_mOnTrackablesUpdated_13() { return &___mOnTrackablesUpdated_13; }
	inline void set_mOnTrackablesUpdated_13(Action_t1264377477 * value)
	{
		___mOnTrackablesUpdated_13 = value;
		Il2CppCodeGenWriteBarrier((&___mOnTrackablesUpdated_13), value);
	}

	inline static int32_t get_offset_of_mRenderOnUpdate_14() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mRenderOnUpdate_14)); }
	inline Action_t1264377477 * get_mRenderOnUpdate_14() const { return ___mRenderOnUpdate_14; }
	inline Action_t1264377477 ** get_address_of_mRenderOnUpdate_14() { return &___mRenderOnUpdate_14; }
	inline void set_mRenderOnUpdate_14(Action_t1264377477 * value)
	{
		___mRenderOnUpdate_14 = value;
		Il2CppCodeGenWriteBarrier((&___mRenderOnUpdate_14), value);
	}

	inline static int32_t get_offset_of_mOnPause_15() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnPause_15)); }
	inline Action_1_t269755560 * get_mOnPause_15() const { return ___mOnPause_15; }
	inline Action_1_t269755560 ** get_address_of_mOnPause_15() { return &___mOnPause_15; }
	inline void set_mOnPause_15(Action_1_t269755560 * value)
	{
		___mOnPause_15 = value;
		Il2CppCodeGenWriteBarrier((&___mOnPause_15), value);
	}

	inline static int32_t get_offset_of_mPaused_16() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mPaused_16)); }
	inline bool get_mPaused_16() const { return ___mPaused_16; }
	inline bool* get_address_of_mPaused_16() { return &___mPaused_16; }
	inline void set_mPaused_16(bool value)
	{
		___mPaused_16 = value;
	}

	inline static int32_t get_offset_of_mOnBackgroundTextureChanged_17() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnBackgroundTextureChanged_17)); }
	inline Action_t1264377477 * get_mOnBackgroundTextureChanged_17() const { return ___mOnBackgroundTextureChanged_17; }
	inline Action_t1264377477 ** get_address_of_mOnBackgroundTextureChanged_17() { return &___mOnBackgroundTextureChanged_17; }
	inline void set_mOnBackgroundTextureChanged_17(Action_t1264377477 * value)
	{
		___mOnBackgroundTextureChanged_17 = value;
		Il2CppCodeGenWriteBarrier((&___mOnBackgroundTextureChanged_17), value);
	}

	inline static int32_t get_offset_of_mStartHasBeenInvoked_18() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mStartHasBeenInvoked_18)); }
	inline bool get_mStartHasBeenInvoked_18() const { return ___mStartHasBeenInvoked_18; }
	inline bool* get_address_of_mStartHasBeenInvoked_18() { return &___mStartHasBeenInvoked_18; }
	inline void set_mStartHasBeenInvoked_18(bool value)
	{
		___mStartHasBeenInvoked_18 = value;
	}

	inline static int32_t get_offset_of_mHasStarted_19() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mHasStarted_19)); }
	inline bool get_mHasStarted_19() const { return ___mHasStarted_19; }
	inline bool* get_address_of_mHasStarted_19() { return &___mHasStarted_19; }
	inline void set_mHasStarted_19(bool value)
	{
		___mHasStarted_19 = value;
	}

	inline static int32_t get_offset_of_mCameraConfiguration_20() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mCameraConfiguration_20)); }
	inline RuntimeObject* get_mCameraConfiguration_20() const { return ___mCameraConfiguration_20; }
	inline RuntimeObject** get_address_of_mCameraConfiguration_20() { return &___mCameraConfiguration_20; }
	inline void set_mCameraConfiguration_20(RuntimeObject* value)
	{
		___mCameraConfiguration_20 = value;
		Il2CppCodeGenWriteBarrier((&___mCameraConfiguration_20), value);
	}

	inline static int32_t get_offset_of_mEyewearBehaviour_21() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mEyewearBehaviour_21)); }
	inline DigitalEyewearARController_t1054226036 * get_mEyewearBehaviour_21() const { return ___mEyewearBehaviour_21; }
	inline DigitalEyewearARController_t1054226036 ** get_address_of_mEyewearBehaviour_21() { return &___mEyewearBehaviour_21; }
	inline void set_mEyewearBehaviour_21(DigitalEyewearARController_t1054226036 * value)
	{
		___mEyewearBehaviour_21 = value;
		Il2CppCodeGenWriteBarrier((&___mEyewearBehaviour_21), value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundMgr_22() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mVideoBackgroundMgr_22)); }
	inline VideoBackgroundManager_t2198727358 * get_mVideoBackgroundMgr_22() const { return ___mVideoBackgroundMgr_22; }
	inline VideoBackgroundManager_t2198727358 ** get_address_of_mVideoBackgroundMgr_22() { return &___mVideoBackgroundMgr_22; }
	inline void set_mVideoBackgroundMgr_22(VideoBackgroundManager_t2198727358 * value)
	{
		___mVideoBackgroundMgr_22 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBackgroundMgr_22), value);
	}

	inline static int32_t get_offset_of_mCheckStopCamera_23() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mCheckStopCamera_23)); }
	inline bool get_mCheckStopCamera_23() const { return ___mCheckStopCamera_23; }
	inline bool* get_address_of_mCheckStopCamera_23() { return &___mCheckStopCamera_23; }
	inline void set_mCheckStopCamera_23(bool value)
	{
		___mCheckStopCamera_23 = value;
	}

	inline static int32_t get_offset_of_mClearMaterial_24() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mClearMaterial_24)); }
	inline Material_t340375123 * get_mClearMaterial_24() const { return ___mClearMaterial_24; }
	inline Material_t340375123 ** get_address_of_mClearMaterial_24() { return &___mClearMaterial_24; }
	inline void set_mClearMaterial_24(Material_t340375123 * value)
	{
		___mClearMaterial_24 = value;
		Il2CppCodeGenWriteBarrier((&___mClearMaterial_24), value);
	}

	inline static int32_t get_offset_of_mMetalRendering_25() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mMetalRendering_25)); }
	inline bool get_mMetalRendering_25() const { return ___mMetalRendering_25; }
	inline bool* get_address_of_mMetalRendering_25() { return &___mMetalRendering_25; }
	inline void set_mMetalRendering_25(bool value)
	{
		___mMetalRendering_25 = value;
	}

	inline static int32_t get_offset_of_mHasStartedOnce_26() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mHasStartedOnce_26)); }
	inline bool get_mHasStartedOnce_26() const { return ___mHasStartedOnce_26; }
	inline bool* get_address_of_mHasStartedOnce_26() { return &___mHasStartedOnce_26; }
	inline void set_mHasStartedOnce_26(bool value)
	{
		___mHasStartedOnce_26 = value;
	}

	inline static int32_t get_offset_of_mWasEnabledBeforePause_27() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mWasEnabledBeforePause_27)); }
	inline bool get_mWasEnabledBeforePause_27() const { return ___mWasEnabledBeforePause_27; }
	inline bool* get_address_of_mWasEnabledBeforePause_27() { return &___mWasEnabledBeforePause_27; }
	inline void set_mWasEnabledBeforePause_27(bool value)
	{
		___mWasEnabledBeforePause_27 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerWasActiveBeforePause_28() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mObjectTrackerWasActiveBeforePause_28)); }
	inline bool get_mObjectTrackerWasActiveBeforePause_28() const { return ___mObjectTrackerWasActiveBeforePause_28; }
	inline bool* get_address_of_mObjectTrackerWasActiveBeforePause_28() { return &___mObjectTrackerWasActiveBeforePause_28; }
	inline void set_mObjectTrackerWasActiveBeforePause_28(bool value)
	{
		___mObjectTrackerWasActiveBeforePause_28 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerWasActiveBeforeDisabling_29() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mObjectTrackerWasActiveBeforeDisabling_29)); }
	inline bool get_mObjectTrackerWasActiveBeforeDisabling_29() const { return ___mObjectTrackerWasActiveBeforeDisabling_29; }
	inline bool* get_address_of_mObjectTrackerWasActiveBeforeDisabling_29() { return &___mObjectTrackerWasActiveBeforeDisabling_29; }
	inline void set_mObjectTrackerWasActiveBeforeDisabling_29(bool value)
	{
		___mObjectTrackerWasActiveBeforeDisabling_29 = value;
	}

	inline static int32_t get_offset_of_mLastUpdatedFrame_30() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mLastUpdatedFrame_30)); }
	inline int32_t get_mLastUpdatedFrame_30() const { return ___mLastUpdatedFrame_30; }
	inline int32_t* get_address_of_mLastUpdatedFrame_30() { return &___mLastUpdatedFrame_30; }
	inline void set_mLastUpdatedFrame_30(int32_t value)
	{
		___mLastUpdatedFrame_30 = value;
	}

	inline static int32_t get_offset_of_mTrackersRequestedToDeinit_31() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mTrackersRequestedToDeinit_31)); }
	inline List_1_t3956019502 * get_mTrackersRequestedToDeinit_31() const { return ___mTrackersRequestedToDeinit_31; }
	inline List_1_t3956019502 ** get_address_of_mTrackersRequestedToDeinit_31() { return &___mTrackersRequestedToDeinit_31; }
	inline void set_mTrackersRequestedToDeinit_31(List_1_t3956019502 * value)
	{
		___mTrackersRequestedToDeinit_31 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackersRequestedToDeinit_31), value);
	}
};

struct VuforiaARController_t1876945237_StaticFields
{
public:
	// Vuforia.VuforiaARController Vuforia.VuforiaARController::mInstance
	VuforiaARController_t1876945237 * ___mInstance_32;
	// System.Object Vuforia.VuforiaARController::mPadlock
	RuntimeObject * ___mPadlock_33;

public:
	inline static int32_t get_offset_of_mInstance_32() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237_StaticFields, ___mInstance_32)); }
	inline VuforiaARController_t1876945237 * get_mInstance_32() const { return ___mInstance_32; }
	inline VuforiaARController_t1876945237 ** get_address_of_mInstance_32() { return &___mInstance_32; }
	inline void set_mInstance_32(VuforiaARController_t1876945237 * value)
	{
		___mInstance_32 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_32), value);
	}

	inline static int32_t get_offset_of_mPadlock_33() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237_StaticFields, ___mPadlock_33)); }
	inline RuntimeObject * get_mPadlock_33() const { return ___mPadlock_33; }
	inline RuntimeObject ** get_address_of_mPadlock_33() { return &___mPadlock_33; }
	inline void set_mPadlock_33(RuntimeObject * value)
	{
		___mPadlock_33 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_33), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAARCONTROLLER_T1876945237_H
#ifndef CAMERADEVICE_T960297568_H
#define CAMERADEVICE_T960297568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice
struct  CameraDevice_t960297568  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image> Vuforia.CameraDevice::mCameraImages
	Dictionary_2_t3630620928 * ___mCameraImages_1;
	// System.Collections.Generic.List`1<Vuforia.Image/PIXEL_FORMAT> Vuforia.CameraDevice::mForcedCameraFormats
	List_1_t386988881 * ___mForcedCameraFormats_2;
	// System.Boolean Vuforia.CameraDevice::mCameraReady
	bool ___mCameraReady_4;
	// System.Boolean Vuforia.CameraDevice::mIsDirty
	bool ___mIsDirty_5;
	// Vuforia.CameraDevice/CameraDirection Vuforia.CameraDevice::mActualCameraDirection
	int32_t ___mActualCameraDirection_6;
	// Vuforia.CameraDevice/CameraDirection Vuforia.CameraDevice::mSelectedCameraDirection
	int32_t ___mSelectedCameraDirection_7;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.CameraDevice::mCameraDeviceMode
	int32_t ___mCameraDeviceMode_8;
	// Vuforia.CameraDevice/VideoModeData Vuforia.CameraDevice::mVideoModeData
	VideoModeData_t2066817255  ___mVideoModeData_9;
	// System.Boolean Vuforia.CameraDevice::mVideoModeDataNeedsUpdate
	bool ___mVideoModeDataNeedsUpdate_10;
	// System.Boolean Vuforia.CameraDevice::mHasCameraDeviceModeBeenSet
	bool ___mHasCameraDeviceModeBeenSet_11;
	// System.Boolean Vuforia.CameraDevice::mCameraActive
	bool ___mCameraActive_12;
	// System.Boolean Vuforia.CameraDevice::mIsCameraMocked
	bool ___mIsCameraMocked_13;

public:
	inline static int32_t get_offset_of_mCameraImages_1() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mCameraImages_1)); }
	inline Dictionary_2_t3630620928 * get_mCameraImages_1() const { return ___mCameraImages_1; }
	inline Dictionary_2_t3630620928 ** get_address_of_mCameraImages_1() { return &___mCameraImages_1; }
	inline void set_mCameraImages_1(Dictionary_2_t3630620928 * value)
	{
		___mCameraImages_1 = value;
		Il2CppCodeGenWriteBarrier((&___mCameraImages_1), value);
	}

	inline static int32_t get_offset_of_mForcedCameraFormats_2() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mForcedCameraFormats_2)); }
	inline List_1_t386988881 * get_mForcedCameraFormats_2() const { return ___mForcedCameraFormats_2; }
	inline List_1_t386988881 ** get_address_of_mForcedCameraFormats_2() { return &___mForcedCameraFormats_2; }
	inline void set_mForcedCameraFormats_2(List_1_t386988881 * value)
	{
		___mForcedCameraFormats_2 = value;
		Il2CppCodeGenWriteBarrier((&___mForcedCameraFormats_2), value);
	}

	inline static int32_t get_offset_of_mCameraReady_4() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mCameraReady_4)); }
	inline bool get_mCameraReady_4() const { return ___mCameraReady_4; }
	inline bool* get_address_of_mCameraReady_4() { return &___mCameraReady_4; }
	inline void set_mCameraReady_4(bool value)
	{
		___mCameraReady_4 = value;
	}

	inline static int32_t get_offset_of_mIsDirty_5() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mIsDirty_5)); }
	inline bool get_mIsDirty_5() const { return ___mIsDirty_5; }
	inline bool* get_address_of_mIsDirty_5() { return &___mIsDirty_5; }
	inline void set_mIsDirty_5(bool value)
	{
		___mIsDirty_5 = value;
	}

	inline static int32_t get_offset_of_mActualCameraDirection_6() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mActualCameraDirection_6)); }
	inline int32_t get_mActualCameraDirection_6() const { return ___mActualCameraDirection_6; }
	inline int32_t* get_address_of_mActualCameraDirection_6() { return &___mActualCameraDirection_6; }
	inline void set_mActualCameraDirection_6(int32_t value)
	{
		___mActualCameraDirection_6 = value;
	}

	inline static int32_t get_offset_of_mSelectedCameraDirection_7() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mSelectedCameraDirection_7)); }
	inline int32_t get_mSelectedCameraDirection_7() const { return ___mSelectedCameraDirection_7; }
	inline int32_t* get_address_of_mSelectedCameraDirection_7() { return &___mSelectedCameraDirection_7; }
	inline void set_mSelectedCameraDirection_7(int32_t value)
	{
		___mSelectedCameraDirection_7 = value;
	}

	inline static int32_t get_offset_of_mCameraDeviceMode_8() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mCameraDeviceMode_8)); }
	inline int32_t get_mCameraDeviceMode_8() const { return ___mCameraDeviceMode_8; }
	inline int32_t* get_address_of_mCameraDeviceMode_8() { return &___mCameraDeviceMode_8; }
	inline void set_mCameraDeviceMode_8(int32_t value)
	{
		___mCameraDeviceMode_8 = value;
	}

	inline static int32_t get_offset_of_mVideoModeData_9() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mVideoModeData_9)); }
	inline VideoModeData_t2066817255  get_mVideoModeData_9() const { return ___mVideoModeData_9; }
	inline VideoModeData_t2066817255 * get_address_of_mVideoModeData_9() { return &___mVideoModeData_9; }
	inline void set_mVideoModeData_9(VideoModeData_t2066817255  value)
	{
		___mVideoModeData_9 = value;
	}

	inline static int32_t get_offset_of_mVideoModeDataNeedsUpdate_10() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mVideoModeDataNeedsUpdate_10)); }
	inline bool get_mVideoModeDataNeedsUpdate_10() const { return ___mVideoModeDataNeedsUpdate_10; }
	inline bool* get_address_of_mVideoModeDataNeedsUpdate_10() { return &___mVideoModeDataNeedsUpdate_10; }
	inline void set_mVideoModeDataNeedsUpdate_10(bool value)
	{
		___mVideoModeDataNeedsUpdate_10 = value;
	}

	inline static int32_t get_offset_of_mHasCameraDeviceModeBeenSet_11() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mHasCameraDeviceModeBeenSet_11)); }
	inline bool get_mHasCameraDeviceModeBeenSet_11() const { return ___mHasCameraDeviceModeBeenSet_11; }
	inline bool* get_address_of_mHasCameraDeviceModeBeenSet_11() { return &___mHasCameraDeviceModeBeenSet_11; }
	inline void set_mHasCameraDeviceModeBeenSet_11(bool value)
	{
		___mHasCameraDeviceModeBeenSet_11 = value;
	}

	inline static int32_t get_offset_of_mCameraActive_12() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mCameraActive_12)); }
	inline bool get_mCameraActive_12() const { return ___mCameraActive_12; }
	inline bool* get_address_of_mCameraActive_12() { return &___mCameraActive_12; }
	inline void set_mCameraActive_12(bool value)
	{
		___mCameraActive_12 = value;
	}

	inline static int32_t get_offset_of_mIsCameraMocked_13() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mIsCameraMocked_13)); }
	inline bool get_mIsCameraMocked_13() const { return ___mIsCameraMocked_13; }
	inline bool* get_address_of_mIsCameraMocked_13() { return &___mIsCameraMocked_13; }
	inline void set_mIsCameraMocked_13(bool value)
	{
		___mIsCameraMocked_13 = value;
	}
};

struct CameraDevice_t960297568_StaticFields
{
public:
	// Vuforia.CameraDevice Vuforia.CameraDevice::mInstance
	CameraDevice_t960297568 * ___mInstance_0;
	// Vuforia.IWebCam Vuforia.CameraDevice::mWebCam
	RuntimeObject* ___mWebCam_3;

public:
	inline static int32_t get_offset_of_mInstance_0() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568_StaticFields, ___mInstance_0)); }
	inline CameraDevice_t960297568 * get_mInstance_0() const { return ___mInstance_0; }
	inline CameraDevice_t960297568 ** get_address_of_mInstance_0() { return &___mInstance_0; }
	inline void set_mInstance_0(CameraDevice_t960297568 * value)
	{
		___mInstance_0 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_0), value);
	}

	inline static int32_t get_offset_of_mWebCam_3() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568_StaticFields, ___mWebCam_3)); }
	inline RuntimeObject* get_mWebCam_3() const { return ___mWebCam_3; }
	inline RuntimeObject** get_address_of_mWebCam_3() { return &___mWebCam_3; }
	inline void set_mWebCam_3(RuntimeObject* value)
	{
		___mWebCam_3 = value;
		Il2CppCodeGenWriteBarrier((&___mWebCam_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADEVICE_T960297568_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef DIGITALEYEWEARARCONTROLLER_T1054226036_H
#define DIGITALEYEWEARARCONTROLLER_T1054226036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController
struct  DigitalEyewearARController_t1054226036  : public ARController_t116632334
{
public:
	// System.Single Vuforia.DigitalEyewearARController::mCameraOffset
	float ___mCameraOffset_6;
	// System.Int32 Vuforia.DigitalEyewearARController::mDistortionRenderingLayer
	int32_t ___mDistortionRenderingLayer_7;
	// Vuforia.DigitalEyewearARController/EyewearType Vuforia.DigitalEyewearARController::mEyewearType
	int32_t ___mEyewearType_8;
	// Vuforia.DigitalEyewearARController/StereoFramework Vuforia.DigitalEyewearARController::mStereoFramework
	int32_t ___mStereoFramework_9;
	// Vuforia.DigitalEyewearARController/SeeThroughConfiguration Vuforia.DigitalEyewearARController::mSeeThroughConfiguration
	int32_t ___mSeeThroughConfiguration_10;
	// System.String Vuforia.DigitalEyewearARController::mViewerName
	String_t* ___mViewerName_11;
	// System.String Vuforia.DigitalEyewearARController::mViewerManufacturer
	String_t* ___mViewerManufacturer_12;
	// System.Boolean Vuforia.DigitalEyewearARController::mUseCustomViewer
	bool ___mUseCustomViewer_13;
	// Vuforia.DigitalEyewearARController/SerializableViewerParameters Vuforia.DigitalEyewearARController::mCustomViewer
	SerializableViewerParameters_t2043332680 * ___mCustomViewer_14;
	// UnityEngine.Transform Vuforia.DigitalEyewearARController::mCentralAnchorPoint
	Transform_t3600365921 * ___mCentralAnchorPoint_15;
	// UnityEngine.Camera Vuforia.DigitalEyewearARController::mPrimaryCamera
	Camera_t4157153871 * ___mPrimaryCamera_16;
	// Vuforia.VuforiaARController Vuforia.DigitalEyewearARController::mVuforiaBehaviour
	VuforiaARController_t1876945237 * ___mVuforiaBehaviour_17;
	// System.Boolean Vuforia.DigitalEyewearARController::mSetFocusPlaneAutomatically
	bool ___mSetFocusPlaneAutomatically_18;
	// Vuforia.VRDeviceController Vuforia.DigitalEyewearARController::mVRDeviceController
	VRDeviceController_t3863472269 * ___mVRDeviceController_19;

public:
	inline static int32_t get_offset_of_mCameraOffset_6() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mCameraOffset_6)); }
	inline float get_mCameraOffset_6() const { return ___mCameraOffset_6; }
	inline float* get_address_of_mCameraOffset_6() { return &___mCameraOffset_6; }
	inline void set_mCameraOffset_6(float value)
	{
		___mCameraOffset_6 = value;
	}

	inline static int32_t get_offset_of_mDistortionRenderingLayer_7() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mDistortionRenderingLayer_7)); }
	inline int32_t get_mDistortionRenderingLayer_7() const { return ___mDistortionRenderingLayer_7; }
	inline int32_t* get_address_of_mDistortionRenderingLayer_7() { return &___mDistortionRenderingLayer_7; }
	inline void set_mDistortionRenderingLayer_7(int32_t value)
	{
		___mDistortionRenderingLayer_7 = value;
	}

	inline static int32_t get_offset_of_mEyewearType_8() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mEyewearType_8)); }
	inline int32_t get_mEyewearType_8() const { return ___mEyewearType_8; }
	inline int32_t* get_address_of_mEyewearType_8() { return &___mEyewearType_8; }
	inline void set_mEyewearType_8(int32_t value)
	{
		___mEyewearType_8 = value;
	}

	inline static int32_t get_offset_of_mStereoFramework_9() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mStereoFramework_9)); }
	inline int32_t get_mStereoFramework_9() const { return ___mStereoFramework_9; }
	inline int32_t* get_address_of_mStereoFramework_9() { return &___mStereoFramework_9; }
	inline void set_mStereoFramework_9(int32_t value)
	{
		___mStereoFramework_9 = value;
	}

	inline static int32_t get_offset_of_mSeeThroughConfiguration_10() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mSeeThroughConfiguration_10)); }
	inline int32_t get_mSeeThroughConfiguration_10() const { return ___mSeeThroughConfiguration_10; }
	inline int32_t* get_address_of_mSeeThroughConfiguration_10() { return &___mSeeThroughConfiguration_10; }
	inline void set_mSeeThroughConfiguration_10(int32_t value)
	{
		___mSeeThroughConfiguration_10 = value;
	}

	inline static int32_t get_offset_of_mViewerName_11() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mViewerName_11)); }
	inline String_t* get_mViewerName_11() const { return ___mViewerName_11; }
	inline String_t** get_address_of_mViewerName_11() { return &___mViewerName_11; }
	inline void set_mViewerName_11(String_t* value)
	{
		___mViewerName_11 = value;
		Il2CppCodeGenWriteBarrier((&___mViewerName_11), value);
	}

	inline static int32_t get_offset_of_mViewerManufacturer_12() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mViewerManufacturer_12)); }
	inline String_t* get_mViewerManufacturer_12() const { return ___mViewerManufacturer_12; }
	inline String_t** get_address_of_mViewerManufacturer_12() { return &___mViewerManufacturer_12; }
	inline void set_mViewerManufacturer_12(String_t* value)
	{
		___mViewerManufacturer_12 = value;
		Il2CppCodeGenWriteBarrier((&___mViewerManufacturer_12), value);
	}

	inline static int32_t get_offset_of_mUseCustomViewer_13() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mUseCustomViewer_13)); }
	inline bool get_mUseCustomViewer_13() const { return ___mUseCustomViewer_13; }
	inline bool* get_address_of_mUseCustomViewer_13() { return &___mUseCustomViewer_13; }
	inline void set_mUseCustomViewer_13(bool value)
	{
		___mUseCustomViewer_13 = value;
	}

	inline static int32_t get_offset_of_mCustomViewer_14() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mCustomViewer_14)); }
	inline SerializableViewerParameters_t2043332680 * get_mCustomViewer_14() const { return ___mCustomViewer_14; }
	inline SerializableViewerParameters_t2043332680 ** get_address_of_mCustomViewer_14() { return &___mCustomViewer_14; }
	inline void set_mCustomViewer_14(SerializableViewerParameters_t2043332680 * value)
	{
		___mCustomViewer_14 = value;
		Il2CppCodeGenWriteBarrier((&___mCustomViewer_14), value);
	}

	inline static int32_t get_offset_of_mCentralAnchorPoint_15() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mCentralAnchorPoint_15)); }
	inline Transform_t3600365921 * get_mCentralAnchorPoint_15() const { return ___mCentralAnchorPoint_15; }
	inline Transform_t3600365921 ** get_address_of_mCentralAnchorPoint_15() { return &___mCentralAnchorPoint_15; }
	inline void set_mCentralAnchorPoint_15(Transform_t3600365921 * value)
	{
		___mCentralAnchorPoint_15 = value;
		Il2CppCodeGenWriteBarrier((&___mCentralAnchorPoint_15), value);
	}

	inline static int32_t get_offset_of_mPrimaryCamera_16() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mPrimaryCamera_16)); }
	inline Camera_t4157153871 * get_mPrimaryCamera_16() const { return ___mPrimaryCamera_16; }
	inline Camera_t4157153871 ** get_address_of_mPrimaryCamera_16() { return &___mPrimaryCamera_16; }
	inline void set_mPrimaryCamera_16(Camera_t4157153871 * value)
	{
		___mPrimaryCamera_16 = value;
		Il2CppCodeGenWriteBarrier((&___mPrimaryCamera_16), value);
	}

	inline static int32_t get_offset_of_mVuforiaBehaviour_17() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mVuforiaBehaviour_17)); }
	inline VuforiaARController_t1876945237 * get_mVuforiaBehaviour_17() const { return ___mVuforiaBehaviour_17; }
	inline VuforiaARController_t1876945237 ** get_address_of_mVuforiaBehaviour_17() { return &___mVuforiaBehaviour_17; }
	inline void set_mVuforiaBehaviour_17(VuforiaARController_t1876945237 * value)
	{
		___mVuforiaBehaviour_17 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_17), value);
	}

	inline static int32_t get_offset_of_mSetFocusPlaneAutomatically_18() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mSetFocusPlaneAutomatically_18)); }
	inline bool get_mSetFocusPlaneAutomatically_18() const { return ___mSetFocusPlaneAutomatically_18; }
	inline bool* get_address_of_mSetFocusPlaneAutomatically_18() { return &___mSetFocusPlaneAutomatically_18; }
	inline void set_mSetFocusPlaneAutomatically_18(bool value)
	{
		___mSetFocusPlaneAutomatically_18 = value;
	}

	inline static int32_t get_offset_of_mVRDeviceController_19() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mVRDeviceController_19)); }
	inline VRDeviceController_t3863472269 * get_mVRDeviceController_19() const { return ___mVRDeviceController_19; }
	inline VRDeviceController_t3863472269 ** get_address_of_mVRDeviceController_19() { return &___mVRDeviceController_19; }
	inline void set_mVRDeviceController_19(VRDeviceController_t3863472269 * value)
	{
		___mVRDeviceController_19 = value;
		Il2CppCodeGenWriteBarrier((&___mVRDeviceController_19), value);
	}
};

struct DigitalEyewearARController_t1054226036_StaticFields
{
public:
	// Vuforia.DigitalEyewearARController Vuforia.DigitalEyewearARController::mInstance
	DigitalEyewearARController_t1054226036 * ___mInstance_20;
	// System.Object Vuforia.DigitalEyewearARController::mPadlock
	RuntimeObject * ___mPadlock_21;

public:
	inline static int32_t get_offset_of_mInstance_20() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036_StaticFields, ___mInstance_20)); }
	inline DigitalEyewearARController_t1054226036 * get_mInstance_20() const { return ___mInstance_20; }
	inline DigitalEyewearARController_t1054226036 ** get_address_of_mInstance_20() { return &___mInstance_20; }
	inline void set_mInstance_20(DigitalEyewearARController_t1054226036 * value)
	{
		___mInstance_20 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_20), value);
	}

	inline static int32_t get_offset_of_mPadlock_21() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036_StaticFields, ___mPadlock_21)); }
	inline RuntimeObject * get_mPadlock_21() const { return ___mPadlock_21; }
	inline RuntimeObject ** get_address_of_mPadlock_21() { return &___mPadlock_21; }
	inline void set_mPadlock_21(RuntimeObject * value)
	{
		___mPadlock_21 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIGITALEYEWEARARCONTROLLER_T1054226036_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef FONT_T1956802104_H
#define FONT_T1956802104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Font
struct  Font_t1956802104  : public Object_t631007953
{
public:
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t2467502454 * ___m_FontTextureRebuildCallback_3;

public:
	inline static int32_t get_offset_of_m_FontTextureRebuildCallback_3() { return static_cast<int32_t>(offsetof(Font_t1956802104, ___m_FontTextureRebuildCallback_3)); }
	inline FontTextureRebuildCallback_t2467502454 * get_m_FontTextureRebuildCallback_3() const { return ___m_FontTextureRebuildCallback_3; }
	inline FontTextureRebuildCallback_t2467502454 ** get_address_of_m_FontTextureRebuildCallback_3() { return &___m_FontTextureRebuildCallback_3; }
	inline void set_m_FontTextureRebuildCallback_3(FontTextureRebuildCallback_t2467502454 * value)
	{
		___m_FontTextureRebuildCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontTextureRebuildCallback_3), value);
	}
};

struct Font_t1956802104_StaticFields
{
public:
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t2129269699 * ___textureRebuilt_2;

public:
	inline static int32_t get_offset_of_textureRebuilt_2() { return static_cast<int32_t>(offsetof(Font_t1956802104_StaticFields, ___textureRebuilt_2)); }
	inline Action_1_t2129269699 * get_textureRebuilt_2() const { return ___textureRebuilt_2; }
	inline Action_1_t2129269699 ** get_address_of_textureRebuilt_2() { return &___textureRebuilt_2; }
	inline void set_textureRebuilt_2(Action_1_t2129269699 * value)
	{
		___textureRebuilt_2 = value;
		Il2CppCodeGenWriteBarrier((&___textureRebuilt_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONT_T1956802104_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef WINDOWFUNCTION_T3146511083_H
#define WINDOWFUNCTION_T3146511083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUI/WindowFunction
struct  WindowFunction_t3146511083  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWFUNCTION_T3146511083_H
#ifndef ACTION_1_T3593217305_H
#define ACTION_1_T3593217305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct  Action_1_t3593217305  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3593217305_H
#ifndef ANIMATIONCLIP_T2318505987_H
#define ANIMATIONCLIP_T2318505987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationClip
struct  AnimationClip_t2318505987  : public Motion_t1110556653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONCLIP_T2318505987_H
#ifndef STATEMACHINEBEHAVIOUR_T957311111_H
#define STATEMACHINEBEHAVIOUR_T957311111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StateMachineBehaviour
struct  StateMachineBehaviour_t957311111  : public ScriptableObject_t2528358522
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEMACHINEBEHAVIOUR_T957311111_H
#ifndef ACTION_1_T269755560_H
#define ACTION_1_T269755560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Boolean>
struct  Action_1_t269755560  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T269755560_H
#ifndef VUFORIACONFIGURATION_T1763229349_H
#define VUFORIACONFIGURATION_T1763229349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration
struct  VuforiaConfiguration_t1763229349  : public ScriptableObject_t2528358522
{
public:
	// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration Vuforia.VuforiaConfiguration::vuforia
	GenericVuforiaConfiguration_t3697830469 * ___vuforia_4;
	// Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration Vuforia.VuforiaConfiguration::digitalEyewear
	DigitalEyewearConfiguration_t546560202 * ___digitalEyewear_5;
	// Vuforia.VuforiaConfiguration/DatabaseLoadConfiguration Vuforia.VuforiaConfiguration::databaseLoad
	DatabaseLoadConfiguration_t449697234 * ___databaseLoad_6;
	// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration Vuforia.VuforiaConfiguration::videoBackground
	VideoBackgroundConfiguration_t3392414655 * ___videoBackground_7;
	// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration Vuforia.VuforiaConfiguration::deviceTracker
	DeviceTrackerConfiguration_t721467671 * ___deviceTracker_8;
	// Vuforia.VuforiaConfiguration/SmartTerrainConfiguration Vuforia.VuforiaConfiguration::smartTerrain
	SmartTerrainConfiguration_t1514074484 * ___smartTerrain_9;
	// Vuforia.VuforiaConfiguration/WebCamConfiguration Vuforia.VuforiaConfiguration::webcam
	WebCamConfiguration_t1101614731 * ___webcam_10;

public:
	inline static int32_t get_offset_of_vuforia_4() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___vuforia_4)); }
	inline GenericVuforiaConfiguration_t3697830469 * get_vuforia_4() const { return ___vuforia_4; }
	inline GenericVuforiaConfiguration_t3697830469 ** get_address_of_vuforia_4() { return &___vuforia_4; }
	inline void set_vuforia_4(GenericVuforiaConfiguration_t3697830469 * value)
	{
		___vuforia_4 = value;
		Il2CppCodeGenWriteBarrier((&___vuforia_4), value);
	}

	inline static int32_t get_offset_of_digitalEyewear_5() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___digitalEyewear_5)); }
	inline DigitalEyewearConfiguration_t546560202 * get_digitalEyewear_5() const { return ___digitalEyewear_5; }
	inline DigitalEyewearConfiguration_t546560202 ** get_address_of_digitalEyewear_5() { return &___digitalEyewear_5; }
	inline void set_digitalEyewear_5(DigitalEyewearConfiguration_t546560202 * value)
	{
		___digitalEyewear_5 = value;
		Il2CppCodeGenWriteBarrier((&___digitalEyewear_5), value);
	}

	inline static int32_t get_offset_of_databaseLoad_6() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___databaseLoad_6)); }
	inline DatabaseLoadConfiguration_t449697234 * get_databaseLoad_6() const { return ___databaseLoad_6; }
	inline DatabaseLoadConfiguration_t449697234 ** get_address_of_databaseLoad_6() { return &___databaseLoad_6; }
	inline void set_databaseLoad_6(DatabaseLoadConfiguration_t449697234 * value)
	{
		___databaseLoad_6 = value;
		Il2CppCodeGenWriteBarrier((&___databaseLoad_6), value);
	}

	inline static int32_t get_offset_of_videoBackground_7() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___videoBackground_7)); }
	inline VideoBackgroundConfiguration_t3392414655 * get_videoBackground_7() const { return ___videoBackground_7; }
	inline VideoBackgroundConfiguration_t3392414655 ** get_address_of_videoBackground_7() { return &___videoBackground_7; }
	inline void set_videoBackground_7(VideoBackgroundConfiguration_t3392414655 * value)
	{
		___videoBackground_7 = value;
		Il2CppCodeGenWriteBarrier((&___videoBackground_7), value);
	}

	inline static int32_t get_offset_of_deviceTracker_8() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___deviceTracker_8)); }
	inline DeviceTrackerConfiguration_t721467671 * get_deviceTracker_8() const { return ___deviceTracker_8; }
	inline DeviceTrackerConfiguration_t721467671 ** get_address_of_deviceTracker_8() { return &___deviceTracker_8; }
	inline void set_deviceTracker_8(DeviceTrackerConfiguration_t721467671 * value)
	{
		___deviceTracker_8 = value;
		Il2CppCodeGenWriteBarrier((&___deviceTracker_8), value);
	}

	inline static int32_t get_offset_of_smartTerrain_9() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___smartTerrain_9)); }
	inline SmartTerrainConfiguration_t1514074484 * get_smartTerrain_9() const { return ___smartTerrain_9; }
	inline SmartTerrainConfiguration_t1514074484 ** get_address_of_smartTerrain_9() { return &___smartTerrain_9; }
	inline void set_smartTerrain_9(SmartTerrainConfiguration_t1514074484 * value)
	{
		___smartTerrain_9 = value;
		Il2CppCodeGenWriteBarrier((&___smartTerrain_9), value);
	}

	inline static int32_t get_offset_of_webcam_10() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___webcam_10)); }
	inline WebCamConfiguration_t1101614731 * get_webcam_10() const { return ___webcam_10; }
	inline WebCamConfiguration_t1101614731 ** get_address_of_webcam_10() { return &___webcam_10; }
	inline void set_webcam_10(WebCamConfiguration_t1101614731 * value)
	{
		___webcam_10 = value;
		Il2CppCodeGenWriteBarrier((&___webcam_10), value);
	}
};

struct VuforiaConfiguration_t1763229349_StaticFields
{
public:
	// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::mInstance
	VuforiaConfiguration_t1763229349 * ___mInstance_2;
	// System.Object Vuforia.VuforiaConfiguration::mPadlock
	RuntimeObject * ___mPadlock_3;

public:
	inline static int32_t get_offset_of_mInstance_2() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349_StaticFields, ___mInstance_2)); }
	inline VuforiaConfiguration_t1763229349 * get_mInstance_2() const { return ___mInstance_2; }
	inline VuforiaConfiguration_t1763229349 ** get_address_of_mInstance_2() { return &___mInstance_2; }
	inline void set_mInstance_2(VuforiaConfiguration_t1763229349 * value)
	{
		___mInstance_2 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_2), value);
	}

	inline static int32_t get_offset_of_mPadlock_3() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349_StaticFields, ___mPadlock_3)); }
	inline RuntimeObject * get_mPadlock_3() const { return ___mPadlock_3; }
	inline RuntimeObject ** get_address_of_mPadlock_3() { return &___mPadlock_3; }
	inline void set_mPadlock_3(RuntimeObject * value)
	{
		___mPadlock_3 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIACONFIGURATION_T1763229349_H
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef ACTION_1_T2046837330_H
#define ACTION_1_T2046837330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<Astronaut>
struct  Action_1_t2046837330  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T2046837330_H
#ifndef PARTICLESYSTEM_T1800779281_H
#define PARTICLESYSTEM_T1800779281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem
struct  ParticleSystem_t1800779281  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEM_T1800779281_H
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
#ifndef ANIMATION_T3648466861_H
#define ANIMATION_T3648466861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animation
struct  Animation_t3648466861  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATION_T3648466861_H
#ifndef MESHRENDERER_T587009260_H
#define MESHRENDERER_T587009260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshRenderer
struct  MeshRenderer_t587009260  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHRENDERER_T587009260_H
#ifndef BOXCOLLIDER_T1640800422_H
#define BOXCOLLIDER_T1640800422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BoxCollider
struct  BoxCollider_t1640800422  : public Collider_t1773347010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXCOLLIDER_T1640800422_H
#ifndef ANIMATOR_T434523843_H
#define ANIMATOR_T434523843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t434523843  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T434523843_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef AUGMENTATIONSTATEMACHINEBEHAVIOUR_T3849818102_H
#define AUGMENTATIONSTATEMACHINEBEHAVIOUR_T3849818102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AugmentationStateMachineBehaviour
struct  AugmentationStateMachineBehaviour_t3849818102  : public StateMachineBehaviour_t957311111
{
public:
	// System.String AugmentationStateMachineBehaviour::m_OnEnterMethodName
	String_t* ___m_OnEnterMethodName_2;
	// System.String AugmentationStateMachineBehaviour::m_OnUpdateMethodName
	String_t* ___m_OnUpdateMethodName_3;
	// System.String AugmentationStateMachineBehaviour::m_OnExitMethodName
	String_t* ___m_OnExitMethodName_4;

public:
	inline static int32_t get_offset_of_m_OnEnterMethodName_2() { return static_cast<int32_t>(offsetof(AugmentationStateMachineBehaviour_t3849818102, ___m_OnEnterMethodName_2)); }
	inline String_t* get_m_OnEnterMethodName_2() const { return ___m_OnEnterMethodName_2; }
	inline String_t** get_address_of_m_OnEnterMethodName_2() { return &___m_OnEnterMethodName_2; }
	inline void set_m_OnEnterMethodName_2(String_t* value)
	{
		___m_OnEnterMethodName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnEnterMethodName_2), value);
	}

	inline static int32_t get_offset_of_m_OnUpdateMethodName_3() { return static_cast<int32_t>(offsetof(AugmentationStateMachineBehaviour_t3849818102, ___m_OnUpdateMethodName_3)); }
	inline String_t* get_m_OnUpdateMethodName_3() const { return ___m_OnUpdateMethodName_3; }
	inline String_t** get_address_of_m_OnUpdateMethodName_3() { return &___m_OnUpdateMethodName_3; }
	inline void set_m_OnUpdateMethodName_3(String_t* value)
	{
		___m_OnUpdateMethodName_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnUpdateMethodName_3), value);
	}

	inline static int32_t get_offset_of_m_OnExitMethodName_4() { return static_cast<int32_t>(offsetof(AugmentationStateMachineBehaviour_t3849818102, ___m_OnExitMethodName_4)); }
	inline String_t* get_m_OnExitMethodName_4() const { return ___m_OnExitMethodName_4; }
	inline String_t** get_address_of_m_OnExitMethodName_4() { return &___m_OnExitMethodName_4; }
	inline void set_m_OnExitMethodName_4(String_t* value)
	{
		___m_OnExitMethodName_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnExitMethodName_4), value);
	}
};

struct AugmentationStateMachineBehaviour_t3849818102_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Delegate>> AugmentationStateMachineBehaviour::cachedDelegates
	Dictionary_2_t3417996176 * ___cachedDelegates_5;

public:
	inline static int32_t get_offset_of_cachedDelegates_5() { return static_cast<int32_t>(offsetof(AugmentationStateMachineBehaviour_t3849818102_StaticFields, ___cachedDelegates_5)); }
	inline Dictionary_2_t3417996176 * get_cachedDelegates_5() const { return ___cachedDelegates_5; }
	inline Dictionary_2_t3417996176 ** get_address_of_cachedDelegates_5() { return &___cachedDelegates_5; }
	inline void set_cachedDelegates_5(Dictionary_2_t3417996176 * value)
	{
		___cachedDelegates_5 = value;
		Il2CppCodeGenWriteBarrier((&___cachedDelegates_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUGMENTATIONSTATEMACHINEBEHAVIOUR_T3849818102_H
#ifndef RECTTRANSFORM_T3704657025_H
#define RECTTRANSFORM_T3704657025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3704657025  : public Transform_t3600365921
{
public:

public:
};

struct RectTransform_t3704657025_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1258266594 * ___reapplyDrivenProperties_2;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_2() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025_StaticFields, ___reapplyDrivenProperties_2)); }
	inline ReapplyDrivenProperties_t1258266594 * get_reapplyDrivenProperties_2() const { return ___reapplyDrivenProperties_2; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_reapplyDrivenProperties_2() { return &___reapplyDrivenProperties_2; }
	inline void set_reapplyDrivenProperties_2(ReapplyDrivenProperties_t1258266594 * value)
	{
		___reapplyDrivenProperties_2 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3704657025_H
#ifndef CANVAS_T3310196443_H
#define CANVAS_T3310196443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Canvas
struct  Canvas_t3310196443  : public Behaviour_t1437897464
{
public:

public:
};

struct Canvas_t3310196443_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t3309123499 * ___willRenderCanvases_2;

public:
	inline static int32_t get_offset_of_willRenderCanvases_2() { return static_cast<int32_t>(offsetof(Canvas_t3310196443_StaticFields, ___willRenderCanvases_2)); }
	inline WillRenderCanvases_t3309123499 * get_willRenderCanvases_2() const { return ___willRenderCanvases_2; }
	inline WillRenderCanvases_t3309123499 ** get_address_of_willRenderCanvases_2() { return &___willRenderCanvases_2; }
	inline void set_willRenderCanvases_2(WillRenderCanvases_t3309123499 * value)
	{
		___willRenderCanvases_2 = value;
		Il2CppCodeGenWriteBarrier((&___willRenderCanvases_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVAS_T3310196443_H
#ifndef DRILLCONTROLLER_T3872647469_H
#define DRILLCONTROLLER_T3872647469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DrillController
struct  DrillController_t3872647469  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean DrillController::m_IsDrilling
	bool ___m_IsDrilling_2;
	// System.Single DrillController::drillLerpPercentage
	float ___drillLerpPercentage_3;

public:
	inline static int32_t get_offset_of_m_IsDrilling_2() { return static_cast<int32_t>(offsetof(DrillController_t3872647469, ___m_IsDrilling_2)); }
	inline bool get_m_IsDrilling_2() const { return ___m_IsDrilling_2; }
	inline bool* get_address_of_m_IsDrilling_2() { return &___m_IsDrilling_2; }
	inline void set_m_IsDrilling_2(bool value)
	{
		___m_IsDrilling_2 = value;
	}

	inline static int32_t get_offset_of_drillLerpPercentage_3() { return static_cast<int32_t>(offsetof(DrillController_t3872647469, ___drillLerpPercentage_3)); }
	inline float get_drillLerpPercentage_3() const { return ___drillLerpPercentage_3; }
	inline float* get_address_of_drillLerpPercentage_3() { return &___drillLerpPercentage_3; }
	inline void set_drillLerpPercentage_3(float value)
	{
		___drillLerpPercentage_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRILLCONTROLLER_T3872647469_H
#ifndef BLACKMASKBEHAVIOUR_T3514099953_H
#define BLACKMASKBEHAVIOUR_T3514099953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BlackMaskBehaviour
struct  BlackMaskBehaviour_t3514099953  : public MonoBehaviour_t3962482529
{
public:
	// System.Single BlackMaskBehaviour::mFadeFactor
	float ___mFadeFactor_2;

public:
	inline static int32_t get_offset_of_mFadeFactor_2() { return static_cast<int32_t>(offsetof(BlackMaskBehaviour_t3514099953, ___mFadeFactor_2)); }
	inline float get_mFadeFactor_2() const { return ___mFadeFactor_2; }
	inline float* get_address_of_mFadeFactor_2() { return &___mFadeFactor_2; }
	inline void set_mFadeFactor_2(float value)
	{
		___mFadeFactor_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLACKMASKBEHAVIOUR_T3514099953_H
#ifndef AUGMENTATION_T2596699517_H
#define AUGMENTATION_T2596699517_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Augmentation
struct  Augmentation_t2596699517  : public MonoBehaviour_t3962482529
{
public:
	// System.Action Augmentation::m_EvtOnEnter
	Action_t1264377477 * ___m_EvtOnEnter_2;
	// System.Action Augmentation::m_EvtOnExit
	Action_t1264377477 * ___m_EvtOnExit_3;
	// UnityEngine.Animator Augmentation::animator
	Animator_t434523843 * ___animator_4;
	// System.Boolean Augmentation::active
	bool ___active_5;
	// System.Collections.IEnumerator Augmentation::waitCoroutine
	RuntimeObject* ___waitCoroutine_6;

public:
	inline static int32_t get_offset_of_m_EvtOnEnter_2() { return static_cast<int32_t>(offsetof(Augmentation_t2596699517, ___m_EvtOnEnter_2)); }
	inline Action_t1264377477 * get_m_EvtOnEnter_2() const { return ___m_EvtOnEnter_2; }
	inline Action_t1264377477 ** get_address_of_m_EvtOnEnter_2() { return &___m_EvtOnEnter_2; }
	inline void set_m_EvtOnEnter_2(Action_t1264377477 * value)
	{
		___m_EvtOnEnter_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_EvtOnEnter_2), value);
	}

	inline static int32_t get_offset_of_m_EvtOnExit_3() { return static_cast<int32_t>(offsetof(Augmentation_t2596699517, ___m_EvtOnExit_3)); }
	inline Action_t1264377477 * get_m_EvtOnExit_3() const { return ___m_EvtOnExit_3; }
	inline Action_t1264377477 ** get_address_of_m_EvtOnExit_3() { return &___m_EvtOnExit_3; }
	inline void set_m_EvtOnExit_3(Action_t1264377477 * value)
	{
		___m_EvtOnExit_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_EvtOnExit_3), value);
	}

	inline static int32_t get_offset_of_animator_4() { return static_cast<int32_t>(offsetof(Augmentation_t2596699517, ___animator_4)); }
	inline Animator_t434523843 * get_animator_4() const { return ___animator_4; }
	inline Animator_t434523843 ** get_address_of_animator_4() { return &___animator_4; }
	inline void set_animator_4(Animator_t434523843 * value)
	{
		___animator_4 = value;
		Il2CppCodeGenWriteBarrier((&___animator_4), value);
	}

	inline static int32_t get_offset_of_active_5() { return static_cast<int32_t>(offsetof(Augmentation_t2596699517, ___active_5)); }
	inline bool get_active_5() const { return ___active_5; }
	inline bool* get_address_of_active_5() { return &___active_5; }
	inline void set_active_5(bool value)
	{
		___active_5 = value;
	}

	inline static int32_t get_offset_of_waitCoroutine_6() { return static_cast<int32_t>(offsetof(Augmentation_t2596699517, ___waitCoroutine_6)); }
	inline RuntimeObject* get_waitCoroutine_6() const { return ___waitCoroutine_6; }
	inline RuntimeObject** get_address_of_waitCoroutine_6() { return &___waitCoroutine_6; }
	inline void set_waitCoroutine_6(RuntimeObject* value)
	{
		___waitCoroutine_6 = value;
		Il2CppCodeGenWriteBarrier((&___waitCoroutine_6), value);
	}
};

struct Augmentation_t2596699517_StaticFields
{
public:
	// System.Action Augmentation::<>f__am$cache0
	Action_t1264377477 * ___U3CU3Ef__amU24cache0_7;
	// System.Action Augmentation::<>f__am$cache1
	Action_t1264377477 * ___U3CU3Ef__amU24cache1_8;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_7() { return static_cast<int32_t>(offsetof(Augmentation_t2596699517_StaticFields, ___U3CU3Ef__amU24cache0_7)); }
	inline Action_t1264377477 * get_U3CU3Ef__amU24cache0_7() const { return ___U3CU3Ef__amU24cache0_7; }
	inline Action_t1264377477 ** get_address_of_U3CU3Ef__amU24cache0_7() { return &___U3CU3Ef__amU24cache0_7; }
	inline void set_U3CU3Ef__amU24cache0_7(Action_t1264377477 * value)
	{
		___U3CU3Ef__amU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_8() { return static_cast<int32_t>(offsetof(Augmentation_t2596699517_StaticFields, ___U3CU3Ef__amU24cache1_8)); }
	inline Action_t1264377477 * get_U3CU3Ef__amU24cache1_8() const { return ___U3CU3Ef__amU24cache1_8; }
	inline Action_t1264377477 ** get_address_of_U3CU3Ef__amU24cache1_8() { return &___U3CU3Ef__amU24cache1_8; }
	inline void set_U3CU3Ef__amU24cache1_8(Action_t1264377477 * value)
	{
		___U3CU3Ef__amU24cache1_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUGMENTATION_T2596699517_H
#ifndef MENUANIMATOR_T2112910832_H
#define MENUANIMATOR_T2112910832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuAnimator
struct  MenuAnimator_t2112910832  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector3 MenuAnimator::mVisiblePos
	Vector3_t3722313464  ___mVisiblePos_2;
	// UnityEngine.Vector3 MenuAnimator::mInvisiblePos
	Vector3_t3722313464  ___mInvisiblePos_3;
	// System.Single MenuAnimator::mVisibility
	float ___mVisibility_4;
	// System.Boolean MenuAnimator::mVisible
	bool ___mVisible_5;
	// UnityEngine.Canvas MenuAnimator::mCanvas
	Canvas_t3310196443 * ___mCanvas_6;
	// MenuOptions MenuAnimator::mMenuOptions
	MenuOptions_t1951716431 * ___mMenuOptions_7;
	// System.Single MenuAnimator::SlidingTime
	float ___SlidingTime_8;

public:
	inline static int32_t get_offset_of_mVisiblePos_2() { return static_cast<int32_t>(offsetof(MenuAnimator_t2112910832, ___mVisiblePos_2)); }
	inline Vector3_t3722313464  get_mVisiblePos_2() const { return ___mVisiblePos_2; }
	inline Vector3_t3722313464 * get_address_of_mVisiblePos_2() { return &___mVisiblePos_2; }
	inline void set_mVisiblePos_2(Vector3_t3722313464  value)
	{
		___mVisiblePos_2 = value;
	}

	inline static int32_t get_offset_of_mInvisiblePos_3() { return static_cast<int32_t>(offsetof(MenuAnimator_t2112910832, ___mInvisiblePos_3)); }
	inline Vector3_t3722313464  get_mInvisiblePos_3() const { return ___mInvisiblePos_3; }
	inline Vector3_t3722313464 * get_address_of_mInvisiblePos_3() { return &___mInvisiblePos_3; }
	inline void set_mInvisiblePos_3(Vector3_t3722313464  value)
	{
		___mInvisiblePos_3 = value;
	}

	inline static int32_t get_offset_of_mVisibility_4() { return static_cast<int32_t>(offsetof(MenuAnimator_t2112910832, ___mVisibility_4)); }
	inline float get_mVisibility_4() const { return ___mVisibility_4; }
	inline float* get_address_of_mVisibility_4() { return &___mVisibility_4; }
	inline void set_mVisibility_4(float value)
	{
		___mVisibility_4 = value;
	}

	inline static int32_t get_offset_of_mVisible_5() { return static_cast<int32_t>(offsetof(MenuAnimator_t2112910832, ___mVisible_5)); }
	inline bool get_mVisible_5() const { return ___mVisible_5; }
	inline bool* get_address_of_mVisible_5() { return &___mVisible_5; }
	inline void set_mVisible_5(bool value)
	{
		___mVisible_5 = value;
	}

	inline static int32_t get_offset_of_mCanvas_6() { return static_cast<int32_t>(offsetof(MenuAnimator_t2112910832, ___mCanvas_6)); }
	inline Canvas_t3310196443 * get_mCanvas_6() const { return ___mCanvas_6; }
	inline Canvas_t3310196443 ** get_address_of_mCanvas_6() { return &___mCanvas_6; }
	inline void set_mCanvas_6(Canvas_t3310196443 * value)
	{
		___mCanvas_6 = value;
		Il2CppCodeGenWriteBarrier((&___mCanvas_6), value);
	}

	inline static int32_t get_offset_of_mMenuOptions_7() { return static_cast<int32_t>(offsetof(MenuAnimator_t2112910832, ___mMenuOptions_7)); }
	inline MenuOptions_t1951716431 * get_mMenuOptions_7() const { return ___mMenuOptions_7; }
	inline MenuOptions_t1951716431 ** get_address_of_mMenuOptions_7() { return &___mMenuOptions_7; }
	inline void set_mMenuOptions_7(MenuOptions_t1951716431 * value)
	{
		___mMenuOptions_7 = value;
		Il2CppCodeGenWriteBarrier((&___mMenuOptions_7), value);
	}

	inline static int32_t get_offset_of_SlidingTime_8() { return static_cast<int32_t>(offsetof(MenuAnimator_t2112910832, ___SlidingTime_8)); }
	inline float get_SlidingTime_8() const { return ___SlidingTime_8; }
	inline float* get_address_of_SlidingTime_8() { return &___SlidingTime_8; }
	inline void set_SlidingTime_8(float value)
	{
		___SlidingTime_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENUANIMATOR_T2112910832_H
#ifndef MENUOPTIONS_T1951716431_H
#define MENUOPTIONS_T1951716431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuOptions
struct  MenuOptions_t1951716431  : public MonoBehaviour_t3962482529
{
public:
	// CameraSettings MenuOptions::mCamSettings
	CameraSettings_t3152619780 * ___mCamSettings_2;
	// TrackableSettings MenuOptions::mTrackableSettings
	TrackableSettings_t2862243993 * ___mTrackableSettings_3;
	// MenuAnimator MenuOptions::mMenuAnim
	MenuAnimator_t2112910832 * ___mMenuAnim_4;

public:
	inline static int32_t get_offset_of_mCamSettings_2() { return static_cast<int32_t>(offsetof(MenuOptions_t1951716431, ___mCamSettings_2)); }
	inline CameraSettings_t3152619780 * get_mCamSettings_2() const { return ___mCamSettings_2; }
	inline CameraSettings_t3152619780 ** get_address_of_mCamSettings_2() { return &___mCamSettings_2; }
	inline void set_mCamSettings_2(CameraSettings_t3152619780 * value)
	{
		___mCamSettings_2 = value;
		Il2CppCodeGenWriteBarrier((&___mCamSettings_2), value);
	}

	inline static int32_t get_offset_of_mTrackableSettings_3() { return static_cast<int32_t>(offsetof(MenuOptions_t1951716431, ___mTrackableSettings_3)); }
	inline TrackableSettings_t2862243993 * get_mTrackableSettings_3() const { return ___mTrackableSettings_3; }
	inline TrackableSettings_t2862243993 ** get_address_of_mTrackableSettings_3() { return &___mTrackableSettings_3; }
	inline void set_mTrackableSettings_3(TrackableSettings_t2862243993 * value)
	{
		___mTrackableSettings_3 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableSettings_3), value);
	}

	inline static int32_t get_offset_of_mMenuAnim_4() { return static_cast<int32_t>(offsetof(MenuOptions_t1951716431, ___mMenuAnim_4)); }
	inline MenuAnimator_t2112910832 * get_mMenuAnim_4() const { return ___mMenuAnim_4; }
	inline MenuAnimator_t2112910832 ** get_address_of_mMenuAnim_4() { return &___mMenuAnim_4; }
	inline void set_mMenuAnim_4(MenuAnimator_t2112910832 * value)
	{
		___mMenuAnim_4 = value;
		Il2CppCodeGenWriteBarrier((&___mMenuAnim_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENUOPTIONS_T1951716431_H
#ifndef TRACKABLESETTINGS_T2862243993_H
#define TRACKABLESETTINGS_T2862243993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrackableSettings
struct  TrackableSettings_t2862243993  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean TrackableSettings::mExtTrackingEnabled
	bool ___mExtTrackingEnabled_2;

public:
	inline static int32_t get_offset_of_mExtTrackingEnabled_2() { return static_cast<int32_t>(offsetof(TrackableSettings_t2862243993, ___mExtTrackingEnabled_2)); }
	inline bool get_mExtTrackingEnabled_2() const { return ___mExtTrackingEnabled_2; }
	inline bool* get_address_of_mExtTrackingEnabled_2() { return &___mExtTrackingEnabled_2; }
	inline void set_mExtTrackingEnabled_2(bool value)
	{
		___mExtTrackingEnabled_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLESETTINGS_T2862243993_H
#ifndef TRANSITIONMANAGER_T3900140235_H
#define TRANSITIONMANAGER_T3900140235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TransitionManager
struct  TransitionManager_t3900140235  : public MonoBehaviour_t3962482529
{
public:
	// System.Single TransitionManager::mTransitionCursor
	float ___mTransitionCursor_2;
	// System.Single TransitionManager::mCurrentTime
	float ___mCurrentTime_3;
	// System.Boolean TransitionManager::mPlaying
	bool ___mPlaying_4;
	// System.Boolean TransitionManager::mBackward
	bool ___mBackward_5;
	// BlackMaskBehaviour TransitionManager::mBlackMask
	BlackMaskBehaviour_t3514099953 * ___mBlackMask_6;
	// Vuforia.MixedRealityController/Mode TransitionManager::mCurrentMode
	int32_t ___mCurrentMode_7;
	// UnityEngine.GameObject[] TransitionManager::AROnlyObjects
	GameObjectU5BU5D_t3328599146* ___AROnlyObjects_9;
	// UnityEngine.GameObject[] TransitionManager::VROnlyObjects
	GameObjectU5BU5D_t3328599146* ___VROnlyObjects_10;
	// System.Single TransitionManager::transitionDuration
	float ___transitionDuration_11;
	// UnityEngine.Canvas TransitionManager::StereoViewDivider
	Canvas_t3310196443 * ___StereoViewDivider_12;
	// UnityEngine.Animator TransitionManager::m_Astronaut
	Animator_t434523843 * ___m_Astronaut_13;
	// UnityEngine.Animator TransitionManager::m_Drone
	Animator_t434523843 * ___m_Drone_14;

public:
	inline static int32_t get_offset_of_mTransitionCursor_2() { return static_cast<int32_t>(offsetof(TransitionManager_t3900140235, ___mTransitionCursor_2)); }
	inline float get_mTransitionCursor_2() const { return ___mTransitionCursor_2; }
	inline float* get_address_of_mTransitionCursor_2() { return &___mTransitionCursor_2; }
	inline void set_mTransitionCursor_2(float value)
	{
		___mTransitionCursor_2 = value;
	}

	inline static int32_t get_offset_of_mCurrentTime_3() { return static_cast<int32_t>(offsetof(TransitionManager_t3900140235, ___mCurrentTime_3)); }
	inline float get_mCurrentTime_3() const { return ___mCurrentTime_3; }
	inline float* get_address_of_mCurrentTime_3() { return &___mCurrentTime_3; }
	inline void set_mCurrentTime_3(float value)
	{
		___mCurrentTime_3 = value;
	}

	inline static int32_t get_offset_of_mPlaying_4() { return static_cast<int32_t>(offsetof(TransitionManager_t3900140235, ___mPlaying_4)); }
	inline bool get_mPlaying_4() const { return ___mPlaying_4; }
	inline bool* get_address_of_mPlaying_4() { return &___mPlaying_4; }
	inline void set_mPlaying_4(bool value)
	{
		___mPlaying_4 = value;
	}

	inline static int32_t get_offset_of_mBackward_5() { return static_cast<int32_t>(offsetof(TransitionManager_t3900140235, ___mBackward_5)); }
	inline bool get_mBackward_5() const { return ___mBackward_5; }
	inline bool* get_address_of_mBackward_5() { return &___mBackward_5; }
	inline void set_mBackward_5(bool value)
	{
		___mBackward_5 = value;
	}

	inline static int32_t get_offset_of_mBlackMask_6() { return static_cast<int32_t>(offsetof(TransitionManager_t3900140235, ___mBlackMask_6)); }
	inline BlackMaskBehaviour_t3514099953 * get_mBlackMask_6() const { return ___mBlackMask_6; }
	inline BlackMaskBehaviour_t3514099953 ** get_address_of_mBlackMask_6() { return &___mBlackMask_6; }
	inline void set_mBlackMask_6(BlackMaskBehaviour_t3514099953 * value)
	{
		___mBlackMask_6 = value;
		Il2CppCodeGenWriteBarrier((&___mBlackMask_6), value);
	}

	inline static int32_t get_offset_of_mCurrentMode_7() { return static_cast<int32_t>(offsetof(TransitionManager_t3900140235, ___mCurrentMode_7)); }
	inline int32_t get_mCurrentMode_7() const { return ___mCurrentMode_7; }
	inline int32_t* get_address_of_mCurrentMode_7() { return &___mCurrentMode_7; }
	inline void set_mCurrentMode_7(int32_t value)
	{
		___mCurrentMode_7 = value;
	}

	inline static int32_t get_offset_of_AROnlyObjects_9() { return static_cast<int32_t>(offsetof(TransitionManager_t3900140235, ___AROnlyObjects_9)); }
	inline GameObjectU5BU5D_t3328599146* get_AROnlyObjects_9() const { return ___AROnlyObjects_9; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_AROnlyObjects_9() { return &___AROnlyObjects_9; }
	inline void set_AROnlyObjects_9(GameObjectU5BU5D_t3328599146* value)
	{
		___AROnlyObjects_9 = value;
		Il2CppCodeGenWriteBarrier((&___AROnlyObjects_9), value);
	}

	inline static int32_t get_offset_of_VROnlyObjects_10() { return static_cast<int32_t>(offsetof(TransitionManager_t3900140235, ___VROnlyObjects_10)); }
	inline GameObjectU5BU5D_t3328599146* get_VROnlyObjects_10() const { return ___VROnlyObjects_10; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_VROnlyObjects_10() { return &___VROnlyObjects_10; }
	inline void set_VROnlyObjects_10(GameObjectU5BU5D_t3328599146* value)
	{
		___VROnlyObjects_10 = value;
		Il2CppCodeGenWriteBarrier((&___VROnlyObjects_10), value);
	}

	inline static int32_t get_offset_of_transitionDuration_11() { return static_cast<int32_t>(offsetof(TransitionManager_t3900140235, ___transitionDuration_11)); }
	inline float get_transitionDuration_11() const { return ___transitionDuration_11; }
	inline float* get_address_of_transitionDuration_11() { return &___transitionDuration_11; }
	inline void set_transitionDuration_11(float value)
	{
		___transitionDuration_11 = value;
	}

	inline static int32_t get_offset_of_StereoViewDivider_12() { return static_cast<int32_t>(offsetof(TransitionManager_t3900140235, ___StereoViewDivider_12)); }
	inline Canvas_t3310196443 * get_StereoViewDivider_12() const { return ___StereoViewDivider_12; }
	inline Canvas_t3310196443 ** get_address_of_StereoViewDivider_12() { return &___StereoViewDivider_12; }
	inline void set_StereoViewDivider_12(Canvas_t3310196443 * value)
	{
		___StereoViewDivider_12 = value;
		Il2CppCodeGenWriteBarrier((&___StereoViewDivider_12), value);
	}

	inline static int32_t get_offset_of_m_Astronaut_13() { return static_cast<int32_t>(offsetof(TransitionManager_t3900140235, ___m_Astronaut_13)); }
	inline Animator_t434523843 * get_m_Astronaut_13() const { return ___m_Astronaut_13; }
	inline Animator_t434523843 ** get_address_of_m_Astronaut_13() { return &___m_Astronaut_13; }
	inline void set_m_Astronaut_13(Animator_t434523843 * value)
	{
		___m_Astronaut_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_Astronaut_13), value);
	}

	inline static int32_t get_offset_of_m_Drone_14() { return static_cast<int32_t>(offsetof(TransitionManager_t3900140235, ___m_Drone_14)); }
	inline Animator_t434523843 * get_m_Drone_14() const { return ___m_Drone_14; }
	inline Animator_t434523843 ** get_address_of_m_Drone_14() { return &___m_Drone_14; }
	inline void set_m_Drone_14(Animator_t434523843 * value)
	{
		___m_Drone_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_Drone_14), value);
	}
};

struct TransitionManager_t3900140235_StaticFields
{
public:
	// System.Boolean TransitionManager::isFullScreenMode
	bool ___isFullScreenMode_8;

public:
	inline static int32_t get_offset_of_isFullScreenMode_8() { return static_cast<int32_t>(offsetof(TransitionManager_t3900140235_StaticFields, ___isFullScreenMode_8)); }
	inline bool get_isFullScreenMode_8() const { return ___isFullScreenMode_8; }
	inline bool* get_address_of_isFullScreenMode_8() { return &___isFullScreenMode_8; }
	inline void set_isFullScreenMode_8(bool value)
	{
		___isFullScreenMode_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITIONMANAGER_T3900140235_H
#ifndef RETICLE_T3233312302_H
#define RETICLE_T3233312302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Reticle
struct  Reticle_t3233312302  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RETICLE_T3233312302_H
#ifndef BACKTOABOUT_T1188110921_H
#define BACKTOABOUT_T1188110921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BackToAbout
struct  BackToAbout_t1188110921  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 BackToAbout::mTapCount
	int32_t ___mTapCount_3;
	// System.Single BackToAbout::mTimeSinceLastTap
	float ___mTimeSinceLastTap_4;

public:
	inline static int32_t get_offset_of_mTapCount_3() { return static_cast<int32_t>(offsetof(BackToAbout_t1188110921, ___mTapCount_3)); }
	inline int32_t get_mTapCount_3() const { return ___mTapCount_3; }
	inline int32_t* get_address_of_mTapCount_3() { return &___mTapCount_3; }
	inline void set_mTapCount_3(int32_t value)
	{
		___mTapCount_3 = value;
	}

	inline static int32_t get_offset_of_mTimeSinceLastTap_4() { return static_cast<int32_t>(offsetof(BackToAbout_t1188110921, ___mTimeSinceLastTap_4)); }
	inline float get_mTimeSinceLastTap_4() const { return ___mTimeSinceLastTap_4; }
	inline float* get_address_of_mTimeSinceLastTap_4() { return &___mTimeSinceLastTap_4; }
	inline void set_mTimeSinceLastTap_4(float value)
	{
		___mTimeSinceLastTap_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BACKTOABOUT_T1188110921_H
#ifndef ABOUTMANAGER_T2961629990_H
#define ABOUTMANAGER_T2961629990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AboutManager
struct  AboutManager_t2961629990  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text AboutManager::aboutText
	Text_t1901882714 * ___aboutText_2;
	// UnityEngine.UI.Button[] AboutManager::buttons
	ButtonU5BU5D_t2297175928* ___buttons_3;

public:
	inline static int32_t get_offset_of_aboutText_2() { return static_cast<int32_t>(offsetof(AboutManager_t2961629990, ___aboutText_2)); }
	inline Text_t1901882714 * get_aboutText_2() const { return ___aboutText_2; }
	inline Text_t1901882714 ** get_address_of_aboutText_2() { return &___aboutText_2; }
	inline void set_aboutText_2(Text_t1901882714 * value)
	{
		___aboutText_2 = value;
		Il2CppCodeGenWriteBarrier((&___aboutText_2), value);
	}

	inline static int32_t get_offset_of_buttons_3() { return static_cast<int32_t>(offsetof(AboutManager_t2961629990, ___buttons_3)); }
	inline ButtonU5BU5D_t2297175928* get_buttons_3() const { return ___buttons_3; }
	inline ButtonU5BU5D_t2297175928** get_address_of_buttons_3() { return &___buttons_3; }
	inline void set_buttons_3(ButtonU5BU5D_t2297175928* value)
	{
		___buttons_3 = value;
		Il2CppCodeGenWriteBarrier((&___buttons_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABOUTMANAGER_T2961629990_H
#ifndef TRACKABLEBEHAVIOUR_T1113559212_H
#define TRACKABLEBEHAVIOUR_T1113559212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour
struct  TrackableBehaviour_t1113559212  : public MonoBehaviour_t3962482529
{
public:
	// System.Double Vuforia.TrackableBehaviour::<TimeStamp>k__BackingField
	double ___U3CTimeStampU3Ek__BackingField_2;
	// System.String Vuforia.TrackableBehaviour::mTrackableName
	String_t* ___mTrackableName_3;
	// System.Boolean Vuforia.TrackableBehaviour::mPreserveChildSize
	bool ___mPreserveChildSize_4;
	// System.Boolean Vuforia.TrackableBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_5;
	// UnityEngine.Vector3 Vuforia.TrackableBehaviour::mPreviousScale
	Vector3_t3722313464  ___mPreviousScale_6;
	// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::mStatus
	int32_t ___mStatus_7;
	// Vuforia.Trackable Vuforia.TrackableBehaviour::mTrackable
	RuntimeObject* ___mTrackable_8;
	// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler> Vuforia.TrackableBehaviour::mTrackableEventHandlers
	List_1_t2968050330 * ___mTrackableEventHandlers_9;

public:
	inline static int32_t get_offset_of_U3CTimeStampU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___U3CTimeStampU3Ek__BackingField_2)); }
	inline double get_U3CTimeStampU3Ek__BackingField_2() const { return ___U3CTimeStampU3Ek__BackingField_2; }
	inline double* get_address_of_U3CTimeStampU3Ek__BackingField_2() { return &___U3CTimeStampU3Ek__BackingField_2; }
	inline void set_U3CTimeStampU3Ek__BackingField_2(double value)
	{
		___U3CTimeStampU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_mTrackableName_3() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackableName_3)); }
	inline String_t* get_mTrackableName_3() const { return ___mTrackableName_3; }
	inline String_t** get_address_of_mTrackableName_3() { return &___mTrackableName_3; }
	inline void set_mTrackableName_3(String_t* value)
	{
		___mTrackableName_3 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableName_3), value);
	}

	inline static int32_t get_offset_of_mPreserveChildSize_4() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mPreserveChildSize_4)); }
	inline bool get_mPreserveChildSize_4() const { return ___mPreserveChildSize_4; }
	inline bool* get_address_of_mPreserveChildSize_4() { return &___mPreserveChildSize_4; }
	inline void set_mPreserveChildSize_4(bool value)
	{
		___mPreserveChildSize_4 = value;
	}

	inline static int32_t get_offset_of_mInitializedInEditor_5() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mInitializedInEditor_5)); }
	inline bool get_mInitializedInEditor_5() const { return ___mInitializedInEditor_5; }
	inline bool* get_address_of_mInitializedInEditor_5() { return &___mInitializedInEditor_5; }
	inline void set_mInitializedInEditor_5(bool value)
	{
		___mInitializedInEditor_5 = value;
	}

	inline static int32_t get_offset_of_mPreviousScale_6() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mPreviousScale_6)); }
	inline Vector3_t3722313464  get_mPreviousScale_6() const { return ___mPreviousScale_6; }
	inline Vector3_t3722313464 * get_address_of_mPreviousScale_6() { return &___mPreviousScale_6; }
	inline void set_mPreviousScale_6(Vector3_t3722313464  value)
	{
		___mPreviousScale_6 = value;
	}

	inline static int32_t get_offset_of_mStatus_7() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mStatus_7)); }
	inline int32_t get_mStatus_7() const { return ___mStatus_7; }
	inline int32_t* get_address_of_mStatus_7() { return &___mStatus_7; }
	inline void set_mStatus_7(int32_t value)
	{
		___mStatus_7 = value;
	}

	inline static int32_t get_offset_of_mTrackable_8() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackable_8)); }
	inline RuntimeObject* get_mTrackable_8() const { return ___mTrackable_8; }
	inline RuntimeObject** get_address_of_mTrackable_8() { return &___mTrackable_8; }
	inline void set_mTrackable_8(RuntimeObject* value)
	{
		___mTrackable_8 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackable_8), value);
	}

	inline static int32_t get_offset_of_mTrackableEventHandlers_9() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackableEventHandlers_9)); }
	inline List_1_t2968050330 * get_mTrackableEventHandlers_9() const { return ___mTrackableEventHandlers_9; }
	inline List_1_t2968050330 ** get_address_of_mTrackableEventHandlers_9() { return &___mTrackableEventHandlers_9; }
	inline void set_mTrackableEventHandlers_9(List_1_t2968050330 * value)
	{
		___mTrackableEventHandlers_9 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableEventHandlers_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEBEHAVIOUR_T1113559212_H
#ifndef ASYNCSCENELOADER_T621267272_H
#define ASYNCSCENELOADER_T621267272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AsyncSceneLoader
struct  AsyncSceneLoader_t621267272  : public MonoBehaviour_t3962482529
{
public:
	// System.Single AsyncSceneLoader::loadingDelay
	float ___loadingDelay_2;

public:
	inline static int32_t get_offset_of_loadingDelay_2() { return static_cast<int32_t>(offsetof(AsyncSceneLoader_t621267272, ___loadingDelay_2)); }
	inline float get_loadingDelay_2() const { return ___loadingDelay_2; }
	inline float* get_address_of_loadingDelay_2() { return &___loadingDelay_2; }
	inline void set_loadingDelay_2(float value)
	{
		___loadingDelay_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCSCENELOADER_T621267272_H
#ifndef FADEOBJECT_T1880495183_H
#define FADEOBJECT_T1880495183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FadeObject
struct  FadeObject_t1880495183  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean FadeObject::m_IsVisible
	bool ___m_IsVisible_2;
	// System.Single FadeObject::m_FadeDuration
	float ___m_FadeDuration_3;
	// UnityEngine.Renderer[] FadeObject::m_RenderersToFade
	RendererU5BU5D_t3210418286* ___m_RenderersToFade_4;
	// System.Single FadeObject::fadeRatio
	float ___fadeRatio_5;
	// System.Boolean FadeObject::isInitialOpacitySet
	bool ___isInitialOpacitySet_6;

public:
	inline static int32_t get_offset_of_m_IsVisible_2() { return static_cast<int32_t>(offsetof(FadeObject_t1880495183, ___m_IsVisible_2)); }
	inline bool get_m_IsVisible_2() const { return ___m_IsVisible_2; }
	inline bool* get_address_of_m_IsVisible_2() { return &___m_IsVisible_2; }
	inline void set_m_IsVisible_2(bool value)
	{
		___m_IsVisible_2 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_3() { return static_cast<int32_t>(offsetof(FadeObject_t1880495183, ___m_FadeDuration_3)); }
	inline float get_m_FadeDuration_3() const { return ___m_FadeDuration_3; }
	inline float* get_address_of_m_FadeDuration_3() { return &___m_FadeDuration_3; }
	inline void set_m_FadeDuration_3(float value)
	{
		___m_FadeDuration_3 = value;
	}

	inline static int32_t get_offset_of_m_RenderersToFade_4() { return static_cast<int32_t>(offsetof(FadeObject_t1880495183, ___m_RenderersToFade_4)); }
	inline RendererU5BU5D_t3210418286* get_m_RenderersToFade_4() const { return ___m_RenderersToFade_4; }
	inline RendererU5BU5D_t3210418286** get_address_of_m_RenderersToFade_4() { return &___m_RenderersToFade_4; }
	inline void set_m_RenderersToFade_4(RendererU5BU5D_t3210418286* value)
	{
		___m_RenderersToFade_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_RenderersToFade_4), value);
	}

	inline static int32_t get_offset_of_fadeRatio_5() { return static_cast<int32_t>(offsetof(FadeObject_t1880495183, ___fadeRatio_5)); }
	inline float get_fadeRatio_5() const { return ___fadeRatio_5; }
	inline float* get_address_of_fadeRatio_5() { return &___fadeRatio_5; }
	inline void set_fadeRatio_5(float value)
	{
		___fadeRatio_5 = value;
	}

	inline static int32_t get_offset_of_isInitialOpacitySet_6() { return static_cast<int32_t>(offsetof(FadeObject_t1880495183, ___isInitialOpacitySet_6)); }
	inline bool get_isInitialOpacitySet_6() const { return ___isInitialOpacitySet_6; }
	inline bool* get_address_of_isInitialOpacitySet_6() { return &___isInitialOpacitySet_6; }
	inline void set_isInitialOpacitySet_6(bool value)
	{
		___isInitialOpacitySet_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FADEOBJECT_T1880495183_H
#ifndef FRAMERATESETTINGS_T3598747490_H
#define FRAMERATESETTINGS_T3598747490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FrameRateSettings
struct  FrameRateSettings_t3598747490  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMERATESETTINGS_T3598747490_H
#ifndef AUTOFOCUS_T1688188087_H
#define AUTOFOCUS_T1688188087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Autofocus
struct  Autofocus_t1688188087  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTOFOCUS_T1688188087_H
#ifndef INITERRORHANDLER_T2159361531_H
#define INITERRORHANDLER_T2159361531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InitErrorHandler
struct  InitErrorHandler_t2159361531  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text InitErrorHandler::errorText
	Text_t1901882714 * ___errorText_2;
	// UnityEngine.Canvas InitErrorHandler::errorCanvas
	Canvas_t3310196443 * ___errorCanvas_3;
	// System.String InitErrorHandler::key
	String_t* ___key_4;
	// System.String InitErrorHandler::errorMsg
	String_t* ___errorMsg_5;

public:
	inline static int32_t get_offset_of_errorText_2() { return static_cast<int32_t>(offsetof(InitErrorHandler_t2159361531, ___errorText_2)); }
	inline Text_t1901882714 * get_errorText_2() const { return ___errorText_2; }
	inline Text_t1901882714 ** get_address_of_errorText_2() { return &___errorText_2; }
	inline void set_errorText_2(Text_t1901882714 * value)
	{
		___errorText_2 = value;
		Il2CppCodeGenWriteBarrier((&___errorText_2), value);
	}

	inline static int32_t get_offset_of_errorCanvas_3() { return static_cast<int32_t>(offsetof(InitErrorHandler_t2159361531, ___errorCanvas_3)); }
	inline Canvas_t3310196443 * get_errorCanvas_3() const { return ___errorCanvas_3; }
	inline Canvas_t3310196443 ** get_address_of_errorCanvas_3() { return &___errorCanvas_3; }
	inline void set_errorCanvas_3(Canvas_t3310196443 * value)
	{
		___errorCanvas_3 = value;
		Il2CppCodeGenWriteBarrier((&___errorCanvas_3), value);
	}

	inline static int32_t get_offset_of_key_4() { return static_cast<int32_t>(offsetof(InitErrorHandler_t2159361531, ___key_4)); }
	inline String_t* get_key_4() const { return ___key_4; }
	inline String_t** get_address_of_key_4() { return &___key_4; }
	inline void set_key_4(String_t* value)
	{
		___key_4 = value;
		Il2CppCodeGenWriteBarrier((&___key_4), value);
	}

	inline static int32_t get_offset_of_errorMsg_5() { return static_cast<int32_t>(offsetof(InitErrorHandler_t2159361531, ___errorMsg_5)); }
	inline String_t* get_errorMsg_5() const { return ___errorMsg_5; }
	inline String_t** get_address_of_errorMsg_5() { return &___errorMsg_5; }
	inline void set_errorMsg_5(String_t* value)
	{
		___errorMsg_5 = value;
		Il2CppCodeGenWriteBarrier((&___errorMsg_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITERRORHANDLER_T2159361531_H
#ifndef LOADINGSCREEN_T2154736699_H
#define LOADINGSCREEN_T2154736699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadingScreen
struct  LoadingScreen_t2154736699  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean LoadingScreen::mChangeLevel
	bool ___mChangeLevel_2;
	// UnityEngine.UI.RawImage LoadingScreen::mUISpinner
	RawImage_t3182918964 * ___mUISpinner_3;

public:
	inline static int32_t get_offset_of_mChangeLevel_2() { return static_cast<int32_t>(offsetof(LoadingScreen_t2154736699, ___mChangeLevel_2)); }
	inline bool get_mChangeLevel_2() const { return ___mChangeLevel_2; }
	inline bool* get_address_of_mChangeLevel_2() { return &___mChangeLevel_2; }
	inline void set_mChangeLevel_2(bool value)
	{
		___mChangeLevel_2 = value;
	}

	inline static int32_t get_offset_of_mUISpinner_3() { return static_cast<int32_t>(offsetof(LoadingScreen_t2154736699, ___mUISpinner_3)); }
	inline RawImage_t3182918964 * get_mUISpinner_3() const { return ___mUISpinner_3; }
	inline RawImage_t3182918964 ** get_address_of_mUISpinner_3() { return &___mUISpinner_3; }
	inline void set_mUISpinner_3(RawImage_t3182918964 * value)
	{
		___mUISpinner_3 = value;
		Il2CppCodeGenWriteBarrier((&___mUISpinner_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADINGSCREEN_T2154736699_H
#ifndef BUTTON3D_T3014406560_H
#define BUTTON3D_T3014406560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Button3D
struct  Button3D_t3014406560  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Button3D::width
	float ___width_2;
	// System.Single Button3D::height
	float ___height_3;
	// System.Single Button3D::fadeDuration
	float ___fadeDuration_4;
	// System.Single Button3D::mButtonAlpha
	float ___mButtonAlpha_5;

public:
	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(Button3D_t3014406560, ___width_2)); }
	inline float get_width_2() const { return ___width_2; }
	inline float* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(float value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(Button3D_t3014406560, ___height_3)); }
	inline float get_height_3() const { return ___height_3; }
	inline float* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(float value)
	{
		___height_3 = value;
	}

	inline static int32_t get_offset_of_fadeDuration_4() { return static_cast<int32_t>(offsetof(Button3D_t3014406560, ___fadeDuration_4)); }
	inline float get_fadeDuration_4() const { return ___fadeDuration_4; }
	inline float* get_address_of_fadeDuration_4() { return &___fadeDuration_4; }
	inline void set_fadeDuration_4(float value)
	{
		___fadeDuration_4 = value;
	}

	inline static int32_t get_offset_of_mButtonAlpha_5() { return static_cast<int32_t>(offsetof(Button3D_t3014406560, ___mButtonAlpha_5)); }
	inline float get_mButtonAlpha_5() const { return ___mButtonAlpha_5; }
	inline float* get_address_of_mButtonAlpha_5() { return &___mButtonAlpha_5; }
	inline void set_mButtonAlpha_5(float value)
	{
		___mButtonAlpha_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTON3D_T3014406560_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#define DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultTrackableEventHandler
struct  DefaultTrackableEventHandler_t1588957063  : public MonoBehaviour_t3962482529
{
public:
	// Vuforia.TrackableBehaviour DefaultTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t1113559212 * ___mTrackableBehaviour_2;

public:
	inline static int32_t get_offset_of_mTrackableBehaviour_2() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1588957063, ___mTrackableBehaviour_2)); }
	inline TrackableBehaviour_t1113559212 * get_mTrackableBehaviour_2() const { return ___mTrackableBehaviour_2; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mTrackableBehaviour_2() { return &___mTrackableBehaviour_2; }
	inline void set_mTrackableBehaviour_2(TrackableBehaviour_t1113559212 * value)
	{
		___mTrackableBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableBehaviour_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#ifndef BUTTONMANAGER_T2018100028_H
#define BUTTONMANAGER_T2018100028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ButtonManager
struct  ButtonManager_t2018100028  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Animation ButtonManager::m_objAnimation
	Animation_t3648466861 * ___m_objAnimation_2;
	// UnityEngine.Material ButtonManager::m_objMaterial
	Material_t340375123 * ___m_objMaterial_3;
	// UnityEngine.AnimationClip[] ButtonManager::m_aniClips
	AnimationClipU5BU5D_t1636626578* ___m_aniClips_4;
	// UnityEngine.Texture[] ButtonManager::m_textures
	TextureU5BU5D_t908295702* ___m_textures_5;
	// ButtonController[] ButtonManager::m_buttons
	ButtonControllerU5BU5D_t3107930023* ___m_buttons_6;
	// System.Int32 ButtonManager::m_nowIndex
	int32_t ___m_nowIndex_7;

public:
	inline static int32_t get_offset_of_m_objAnimation_2() { return static_cast<int32_t>(offsetof(ButtonManager_t2018100028, ___m_objAnimation_2)); }
	inline Animation_t3648466861 * get_m_objAnimation_2() const { return ___m_objAnimation_2; }
	inline Animation_t3648466861 ** get_address_of_m_objAnimation_2() { return &___m_objAnimation_2; }
	inline void set_m_objAnimation_2(Animation_t3648466861 * value)
	{
		___m_objAnimation_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_objAnimation_2), value);
	}

	inline static int32_t get_offset_of_m_objMaterial_3() { return static_cast<int32_t>(offsetof(ButtonManager_t2018100028, ___m_objMaterial_3)); }
	inline Material_t340375123 * get_m_objMaterial_3() const { return ___m_objMaterial_3; }
	inline Material_t340375123 ** get_address_of_m_objMaterial_3() { return &___m_objMaterial_3; }
	inline void set_m_objMaterial_3(Material_t340375123 * value)
	{
		___m_objMaterial_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_objMaterial_3), value);
	}

	inline static int32_t get_offset_of_m_aniClips_4() { return static_cast<int32_t>(offsetof(ButtonManager_t2018100028, ___m_aniClips_4)); }
	inline AnimationClipU5BU5D_t1636626578* get_m_aniClips_4() const { return ___m_aniClips_4; }
	inline AnimationClipU5BU5D_t1636626578** get_address_of_m_aniClips_4() { return &___m_aniClips_4; }
	inline void set_m_aniClips_4(AnimationClipU5BU5D_t1636626578* value)
	{
		___m_aniClips_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_aniClips_4), value);
	}

	inline static int32_t get_offset_of_m_textures_5() { return static_cast<int32_t>(offsetof(ButtonManager_t2018100028, ___m_textures_5)); }
	inline TextureU5BU5D_t908295702* get_m_textures_5() const { return ___m_textures_5; }
	inline TextureU5BU5D_t908295702** get_address_of_m_textures_5() { return &___m_textures_5; }
	inline void set_m_textures_5(TextureU5BU5D_t908295702* value)
	{
		___m_textures_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_textures_5), value);
	}

	inline static int32_t get_offset_of_m_buttons_6() { return static_cast<int32_t>(offsetof(ButtonManager_t2018100028, ___m_buttons_6)); }
	inline ButtonControllerU5BU5D_t3107930023* get_m_buttons_6() const { return ___m_buttons_6; }
	inline ButtonControllerU5BU5D_t3107930023** get_address_of_m_buttons_6() { return &___m_buttons_6; }
	inline void set_m_buttons_6(ButtonControllerU5BU5D_t3107930023* value)
	{
		___m_buttons_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_buttons_6), value);
	}

	inline static int32_t get_offset_of_m_nowIndex_7() { return static_cast<int32_t>(offsetof(ButtonManager_t2018100028, ___m_nowIndex_7)); }
	inline int32_t get_m_nowIndex_7() const { return ___m_nowIndex_7; }
	inline int32_t* get_address_of_m_nowIndex_7() { return &___m_nowIndex_7; }
	inline void set_m_nowIndex_7(int32_t value)
	{
		___m_nowIndex_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONMANAGER_T2018100028_H
#ifndef ABOUTSCREEN_T2183797299_H
#define ABOUTSCREEN_T2183797299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AboutScreen
struct  AboutScreen_t2183797299  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABOUTSCREEN_T2183797299_H
#ifndef DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#define DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultInitializationErrorHandler
struct  DefaultInitializationErrorHandler_t3109936861  : public MonoBehaviour_t3962482529
{
public:
	// System.String DefaultInitializationErrorHandler::mErrorText
	String_t* ___mErrorText_2;
	// System.Boolean DefaultInitializationErrorHandler::mErrorOccurred
	bool ___mErrorOccurred_3;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::bodyStyle
	GUIStyle_t3956901511 * ___bodyStyle_5;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::headerStyle
	GUIStyle_t3956901511 * ___headerStyle_6;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::footerStyle
	GUIStyle_t3956901511 * ___footerStyle_7;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::bodyTexture
	Texture2D_t3840446185 * ___bodyTexture_8;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::headerTexture
	Texture2D_t3840446185 * ___headerTexture_9;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::footerTexture
	Texture2D_t3840446185 * ___footerTexture_10;

public:
	inline static int32_t get_offset_of_mErrorText_2() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___mErrorText_2)); }
	inline String_t* get_mErrorText_2() const { return ___mErrorText_2; }
	inline String_t** get_address_of_mErrorText_2() { return &___mErrorText_2; }
	inline void set_mErrorText_2(String_t* value)
	{
		___mErrorText_2 = value;
		Il2CppCodeGenWriteBarrier((&___mErrorText_2), value);
	}

	inline static int32_t get_offset_of_mErrorOccurred_3() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___mErrorOccurred_3)); }
	inline bool get_mErrorOccurred_3() const { return ___mErrorOccurred_3; }
	inline bool* get_address_of_mErrorOccurred_3() { return &___mErrorOccurred_3; }
	inline void set_mErrorOccurred_3(bool value)
	{
		___mErrorOccurred_3 = value;
	}

	inline static int32_t get_offset_of_bodyStyle_5() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___bodyStyle_5)); }
	inline GUIStyle_t3956901511 * get_bodyStyle_5() const { return ___bodyStyle_5; }
	inline GUIStyle_t3956901511 ** get_address_of_bodyStyle_5() { return &___bodyStyle_5; }
	inline void set_bodyStyle_5(GUIStyle_t3956901511 * value)
	{
		___bodyStyle_5 = value;
		Il2CppCodeGenWriteBarrier((&___bodyStyle_5), value);
	}

	inline static int32_t get_offset_of_headerStyle_6() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___headerStyle_6)); }
	inline GUIStyle_t3956901511 * get_headerStyle_6() const { return ___headerStyle_6; }
	inline GUIStyle_t3956901511 ** get_address_of_headerStyle_6() { return &___headerStyle_6; }
	inline void set_headerStyle_6(GUIStyle_t3956901511 * value)
	{
		___headerStyle_6 = value;
		Il2CppCodeGenWriteBarrier((&___headerStyle_6), value);
	}

	inline static int32_t get_offset_of_footerStyle_7() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___footerStyle_7)); }
	inline GUIStyle_t3956901511 * get_footerStyle_7() const { return ___footerStyle_7; }
	inline GUIStyle_t3956901511 ** get_address_of_footerStyle_7() { return &___footerStyle_7; }
	inline void set_footerStyle_7(GUIStyle_t3956901511 * value)
	{
		___footerStyle_7 = value;
		Il2CppCodeGenWriteBarrier((&___footerStyle_7), value);
	}

	inline static int32_t get_offset_of_bodyTexture_8() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___bodyTexture_8)); }
	inline Texture2D_t3840446185 * get_bodyTexture_8() const { return ___bodyTexture_8; }
	inline Texture2D_t3840446185 ** get_address_of_bodyTexture_8() { return &___bodyTexture_8; }
	inline void set_bodyTexture_8(Texture2D_t3840446185 * value)
	{
		___bodyTexture_8 = value;
		Il2CppCodeGenWriteBarrier((&___bodyTexture_8), value);
	}

	inline static int32_t get_offset_of_headerTexture_9() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___headerTexture_9)); }
	inline Texture2D_t3840446185 * get_headerTexture_9() const { return ___headerTexture_9; }
	inline Texture2D_t3840446185 ** get_address_of_headerTexture_9() { return &___headerTexture_9; }
	inline void set_headerTexture_9(Texture2D_t3840446185 * value)
	{
		___headerTexture_9 = value;
		Il2CppCodeGenWriteBarrier((&___headerTexture_9), value);
	}

	inline static int32_t get_offset_of_footerTexture_10() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___footerTexture_10)); }
	inline Texture2D_t3840446185 * get_footerTexture_10() const { return ___footerTexture_10; }
	inline Texture2D_t3840446185 ** get_address_of_footerTexture_10() { return &___footerTexture_10; }
	inline void set_footerTexture_10(Texture2D_t3840446185 * value)
	{
		___footerTexture_10 = value;
		Il2CppCodeGenWriteBarrier((&___footerTexture_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#ifndef CAMERASETTINGS_T3152619780_H
#define CAMERASETTINGS_T3152619780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraSettings
struct  CameraSettings_t3152619780  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean CameraSettings::mVuforiaStarted
	bool ___mVuforiaStarted_2;
	// System.Boolean CameraSettings::mAutofocusEnabled
	bool ___mAutofocusEnabled_3;
	// System.Boolean CameraSettings::mFlashTorchEnabled
	bool ___mFlashTorchEnabled_4;
	// Vuforia.CameraDevice/CameraDirection CameraSettings::mActiveDirection
	int32_t ___mActiveDirection_5;

public:
	inline static int32_t get_offset_of_mVuforiaStarted_2() { return static_cast<int32_t>(offsetof(CameraSettings_t3152619780, ___mVuforiaStarted_2)); }
	inline bool get_mVuforiaStarted_2() const { return ___mVuforiaStarted_2; }
	inline bool* get_address_of_mVuforiaStarted_2() { return &___mVuforiaStarted_2; }
	inline void set_mVuforiaStarted_2(bool value)
	{
		___mVuforiaStarted_2 = value;
	}

	inline static int32_t get_offset_of_mAutofocusEnabled_3() { return static_cast<int32_t>(offsetof(CameraSettings_t3152619780, ___mAutofocusEnabled_3)); }
	inline bool get_mAutofocusEnabled_3() const { return ___mAutofocusEnabled_3; }
	inline bool* get_address_of_mAutofocusEnabled_3() { return &___mAutofocusEnabled_3; }
	inline void set_mAutofocusEnabled_3(bool value)
	{
		___mAutofocusEnabled_3 = value;
	}

	inline static int32_t get_offset_of_mFlashTorchEnabled_4() { return static_cast<int32_t>(offsetof(CameraSettings_t3152619780, ___mFlashTorchEnabled_4)); }
	inline bool get_mFlashTorchEnabled_4() const { return ___mFlashTorchEnabled_4; }
	inline bool* get_address_of_mFlashTorchEnabled_4() { return &___mFlashTorchEnabled_4; }
	inline void set_mFlashTorchEnabled_4(bool value)
	{
		___mFlashTorchEnabled_4 = value;
	}

	inline static int32_t get_offset_of_mActiveDirection_5() { return static_cast<int32_t>(offsetof(CameraSettings_t3152619780, ___mActiveDirection_5)); }
	inline int32_t get_mActiveDirection_5() const { return ___mActiveDirection_5; }
	inline int32_t* get_address_of_mActiveDirection_5() { return &___mActiveDirection_5; }
	inline void set_mActiveDirection_5(int32_t value)
	{
		___mActiveDirection_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERASETTINGS_T3152619780_H
#ifndef VIEWTRIGGER_T2398860653_H
#define VIEWTRIGGER_T2398860653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ViewTrigger
struct  ViewTrigger_t2398860653  : public MonoBehaviour_t3962482529
{
public:
	// ViewTrigger/TriggerType ViewTrigger::triggerType
	int32_t ___triggerType_2;
	// System.Single ViewTrigger::activationTime
	float ___activationTime_3;
	// UnityEngine.Material ViewTrigger::focusedMaterial
	Material_t340375123 * ___focusedMaterial_4;
	// UnityEngine.Material ViewTrigger::nonFocusedMaterial
	Material_t340375123 * ___nonFocusedMaterial_5;
	// System.Boolean ViewTrigger::<Focused>k__BackingField
	bool ___U3CFocusedU3Ek__BackingField_6;
	// System.Single ViewTrigger::mFocusedTime
	float ___mFocusedTime_7;
	// System.Boolean ViewTrigger::mTriggered
	bool ___mTriggered_8;
	// TransitionManager ViewTrigger::mTransitionManager
	TransitionManager_t3900140235 * ___mTransitionManager_9;
	// UnityEngine.Transform ViewTrigger::cameraTransform
	Transform_t3600365921 * ___cameraTransform_10;

public:
	inline static int32_t get_offset_of_triggerType_2() { return static_cast<int32_t>(offsetof(ViewTrigger_t2398860653, ___triggerType_2)); }
	inline int32_t get_triggerType_2() const { return ___triggerType_2; }
	inline int32_t* get_address_of_triggerType_2() { return &___triggerType_2; }
	inline void set_triggerType_2(int32_t value)
	{
		___triggerType_2 = value;
	}

	inline static int32_t get_offset_of_activationTime_3() { return static_cast<int32_t>(offsetof(ViewTrigger_t2398860653, ___activationTime_3)); }
	inline float get_activationTime_3() const { return ___activationTime_3; }
	inline float* get_address_of_activationTime_3() { return &___activationTime_3; }
	inline void set_activationTime_3(float value)
	{
		___activationTime_3 = value;
	}

	inline static int32_t get_offset_of_focusedMaterial_4() { return static_cast<int32_t>(offsetof(ViewTrigger_t2398860653, ___focusedMaterial_4)); }
	inline Material_t340375123 * get_focusedMaterial_4() const { return ___focusedMaterial_4; }
	inline Material_t340375123 ** get_address_of_focusedMaterial_4() { return &___focusedMaterial_4; }
	inline void set_focusedMaterial_4(Material_t340375123 * value)
	{
		___focusedMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((&___focusedMaterial_4), value);
	}

	inline static int32_t get_offset_of_nonFocusedMaterial_5() { return static_cast<int32_t>(offsetof(ViewTrigger_t2398860653, ___nonFocusedMaterial_5)); }
	inline Material_t340375123 * get_nonFocusedMaterial_5() const { return ___nonFocusedMaterial_5; }
	inline Material_t340375123 ** get_address_of_nonFocusedMaterial_5() { return &___nonFocusedMaterial_5; }
	inline void set_nonFocusedMaterial_5(Material_t340375123 * value)
	{
		___nonFocusedMaterial_5 = value;
		Il2CppCodeGenWriteBarrier((&___nonFocusedMaterial_5), value);
	}

	inline static int32_t get_offset_of_U3CFocusedU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ViewTrigger_t2398860653, ___U3CFocusedU3Ek__BackingField_6)); }
	inline bool get_U3CFocusedU3Ek__BackingField_6() const { return ___U3CFocusedU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CFocusedU3Ek__BackingField_6() { return &___U3CFocusedU3Ek__BackingField_6; }
	inline void set_U3CFocusedU3Ek__BackingField_6(bool value)
	{
		___U3CFocusedU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_mFocusedTime_7() { return static_cast<int32_t>(offsetof(ViewTrigger_t2398860653, ___mFocusedTime_7)); }
	inline float get_mFocusedTime_7() const { return ___mFocusedTime_7; }
	inline float* get_address_of_mFocusedTime_7() { return &___mFocusedTime_7; }
	inline void set_mFocusedTime_7(float value)
	{
		___mFocusedTime_7 = value;
	}

	inline static int32_t get_offset_of_mTriggered_8() { return static_cast<int32_t>(offsetof(ViewTrigger_t2398860653, ___mTriggered_8)); }
	inline bool get_mTriggered_8() const { return ___mTriggered_8; }
	inline bool* get_address_of_mTriggered_8() { return &___mTriggered_8; }
	inline void set_mTriggered_8(bool value)
	{
		___mTriggered_8 = value;
	}

	inline static int32_t get_offset_of_mTransitionManager_9() { return static_cast<int32_t>(offsetof(ViewTrigger_t2398860653, ___mTransitionManager_9)); }
	inline TransitionManager_t3900140235 * get_mTransitionManager_9() const { return ___mTransitionManager_9; }
	inline TransitionManager_t3900140235 ** get_address_of_mTransitionManager_9() { return &___mTransitionManager_9; }
	inline void set_mTransitionManager_9(TransitionManager_t3900140235 * value)
	{
		___mTransitionManager_9 = value;
		Il2CppCodeGenWriteBarrier((&___mTransitionManager_9), value);
	}

	inline static int32_t get_offset_of_cameraTransform_10() { return static_cast<int32_t>(offsetof(ViewTrigger_t2398860653, ___cameraTransform_10)); }
	inline Transform_t3600365921 * get_cameraTransform_10() const { return ___cameraTransform_10; }
	inline Transform_t3600365921 ** get_address_of_cameraTransform_10() { return &___cameraTransform_10; }
	inline void set_cameraTransform_10(Transform_t3600365921 * value)
	{
		___cameraTransform_10 = value;
		Il2CppCodeGenWriteBarrier((&___cameraTransform_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIEWTRIGGER_T2398860653_H
#ifndef VUFORIABEHAVIOUR_T2151848540_H
#define VUFORIABEHAVIOUR_T2151848540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaBehaviour
struct  VuforiaBehaviour_t2151848540  : public MonoBehaviour_t3962482529
{
public:
	// Vuforia.VuforiaARController/WorldCenterMode Vuforia.VuforiaBehaviour::mWorldCenterMode
	int32_t ___mWorldCenterMode_3;
	// Vuforia.TrackableBehaviour Vuforia.VuforiaBehaviour::mWorldCenter
	TrackableBehaviour_t1113559212 * ___mWorldCenter_4;
	// System.Action Vuforia.VuforiaBehaviour::AwakeEvent
	Action_t1264377477 * ___AwakeEvent_7;
	// System.Action Vuforia.VuforiaBehaviour::OnEnableEvent
	Action_t1264377477 * ___OnEnableEvent_8;
	// System.Action Vuforia.VuforiaBehaviour::StartEvent
	Action_t1264377477 * ___StartEvent_9;
	// System.Action Vuforia.VuforiaBehaviour::UpdateEvent
	Action_t1264377477 * ___UpdateEvent_10;
	// System.Action Vuforia.VuforiaBehaviour::OnLevelWasLoadedEvent
	Action_t1264377477 * ___OnLevelWasLoadedEvent_11;
	// System.Action`1<System.Boolean> Vuforia.VuforiaBehaviour::OnApplicationPauseEvent
	Action_1_t269755560 * ___OnApplicationPauseEvent_12;
	// System.Action Vuforia.VuforiaBehaviour::OnDisableEvent
	Action_t1264377477 * ___OnDisableEvent_13;
	// System.Action Vuforia.VuforiaBehaviour::OnDestroyEvent
	Action_t1264377477 * ___OnDestroyEvent_14;

public:
	inline static int32_t get_offset_of_mWorldCenterMode_3() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___mWorldCenterMode_3)); }
	inline int32_t get_mWorldCenterMode_3() const { return ___mWorldCenterMode_3; }
	inline int32_t* get_address_of_mWorldCenterMode_3() { return &___mWorldCenterMode_3; }
	inline void set_mWorldCenterMode_3(int32_t value)
	{
		___mWorldCenterMode_3 = value;
	}

	inline static int32_t get_offset_of_mWorldCenter_4() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___mWorldCenter_4)); }
	inline TrackableBehaviour_t1113559212 * get_mWorldCenter_4() const { return ___mWorldCenter_4; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mWorldCenter_4() { return &___mWorldCenter_4; }
	inline void set_mWorldCenter_4(TrackableBehaviour_t1113559212 * value)
	{
		___mWorldCenter_4 = value;
		Il2CppCodeGenWriteBarrier((&___mWorldCenter_4), value);
	}

	inline static int32_t get_offset_of_AwakeEvent_7() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___AwakeEvent_7)); }
	inline Action_t1264377477 * get_AwakeEvent_7() const { return ___AwakeEvent_7; }
	inline Action_t1264377477 ** get_address_of_AwakeEvent_7() { return &___AwakeEvent_7; }
	inline void set_AwakeEvent_7(Action_t1264377477 * value)
	{
		___AwakeEvent_7 = value;
		Il2CppCodeGenWriteBarrier((&___AwakeEvent_7), value);
	}

	inline static int32_t get_offset_of_OnEnableEvent_8() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___OnEnableEvent_8)); }
	inline Action_t1264377477 * get_OnEnableEvent_8() const { return ___OnEnableEvent_8; }
	inline Action_t1264377477 ** get_address_of_OnEnableEvent_8() { return &___OnEnableEvent_8; }
	inline void set_OnEnableEvent_8(Action_t1264377477 * value)
	{
		___OnEnableEvent_8 = value;
		Il2CppCodeGenWriteBarrier((&___OnEnableEvent_8), value);
	}

	inline static int32_t get_offset_of_StartEvent_9() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___StartEvent_9)); }
	inline Action_t1264377477 * get_StartEvent_9() const { return ___StartEvent_9; }
	inline Action_t1264377477 ** get_address_of_StartEvent_9() { return &___StartEvent_9; }
	inline void set_StartEvent_9(Action_t1264377477 * value)
	{
		___StartEvent_9 = value;
		Il2CppCodeGenWriteBarrier((&___StartEvent_9), value);
	}

	inline static int32_t get_offset_of_UpdateEvent_10() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___UpdateEvent_10)); }
	inline Action_t1264377477 * get_UpdateEvent_10() const { return ___UpdateEvent_10; }
	inline Action_t1264377477 ** get_address_of_UpdateEvent_10() { return &___UpdateEvent_10; }
	inline void set_UpdateEvent_10(Action_t1264377477 * value)
	{
		___UpdateEvent_10 = value;
		Il2CppCodeGenWriteBarrier((&___UpdateEvent_10), value);
	}

	inline static int32_t get_offset_of_OnLevelWasLoadedEvent_11() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___OnLevelWasLoadedEvent_11)); }
	inline Action_t1264377477 * get_OnLevelWasLoadedEvent_11() const { return ___OnLevelWasLoadedEvent_11; }
	inline Action_t1264377477 ** get_address_of_OnLevelWasLoadedEvent_11() { return &___OnLevelWasLoadedEvent_11; }
	inline void set_OnLevelWasLoadedEvent_11(Action_t1264377477 * value)
	{
		___OnLevelWasLoadedEvent_11 = value;
		Il2CppCodeGenWriteBarrier((&___OnLevelWasLoadedEvent_11), value);
	}

	inline static int32_t get_offset_of_OnApplicationPauseEvent_12() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___OnApplicationPauseEvent_12)); }
	inline Action_1_t269755560 * get_OnApplicationPauseEvent_12() const { return ___OnApplicationPauseEvent_12; }
	inline Action_1_t269755560 ** get_address_of_OnApplicationPauseEvent_12() { return &___OnApplicationPauseEvent_12; }
	inline void set_OnApplicationPauseEvent_12(Action_1_t269755560 * value)
	{
		___OnApplicationPauseEvent_12 = value;
		Il2CppCodeGenWriteBarrier((&___OnApplicationPauseEvent_12), value);
	}

	inline static int32_t get_offset_of_OnDisableEvent_13() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___OnDisableEvent_13)); }
	inline Action_t1264377477 * get_OnDisableEvent_13() const { return ___OnDisableEvent_13; }
	inline Action_t1264377477 ** get_address_of_OnDisableEvent_13() { return &___OnDisableEvent_13; }
	inline void set_OnDisableEvent_13(Action_t1264377477 * value)
	{
		___OnDisableEvent_13 = value;
		Il2CppCodeGenWriteBarrier((&___OnDisableEvent_13), value);
	}

	inline static int32_t get_offset_of_OnDestroyEvent_14() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___OnDestroyEvent_14)); }
	inline Action_t1264377477 * get_OnDestroyEvent_14() const { return ___OnDestroyEvent_14; }
	inline Action_t1264377477 ** get_address_of_OnDestroyEvent_14() { return &___OnDestroyEvent_14; }
	inline void set_OnDestroyEvent_14(Action_t1264377477 * value)
	{
		___OnDestroyEvent_14 = value;
		Il2CppCodeGenWriteBarrier((&___OnDestroyEvent_14), value);
	}
};

struct VuforiaBehaviour_t2151848540_StaticFields
{
public:
	// Vuforia.VuforiaBehaviour Vuforia.VuforiaBehaviour::mVuforiaBehaviour
	VuforiaBehaviour_t2151848540 * ___mVuforiaBehaviour_2;
	// System.Action`1<Vuforia.VuforiaBehaviour> Vuforia.VuforiaBehaviour::BehaviourCreated
	Action_1_t2324316135 * ___BehaviourCreated_5;
	// System.Action`1<Vuforia.VuforiaBehaviour> Vuforia.VuforiaBehaviour::BehaviourDestroyed
	Action_1_t2324316135 * ___BehaviourDestroyed_6;

public:
	inline static int32_t get_offset_of_mVuforiaBehaviour_2() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540_StaticFields, ___mVuforiaBehaviour_2)); }
	inline VuforiaBehaviour_t2151848540 * get_mVuforiaBehaviour_2() const { return ___mVuforiaBehaviour_2; }
	inline VuforiaBehaviour_t2151848540 ** get_address_of_mVuforiaBehaviour_2() { return &___mVuforiaBehaviour_2; }
	inline void set_mVuforiaBehaviour_2(VuforiaBehaviour_t2151848540 * value)
	{
		___mVuforiaBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_2), value);
	}

	inline static int32_t get_offset_of_BehaviourCreated_5() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540_StaticFields, ___BehaviourCreated_5)); }
	inline Action_1_t2324316135 * get_BehaviourCreated_5() const { return ___BehaviourCreated_5; }
	inline Action_1_t2324316135 ** get_address_of_BehaviourCreated_5() { return &___BehaviourCreated_5; }
	inline void set_BehaviourCreated_5(Action_1_t2324316135 * value)
	{
		___BehaviourCreated_5 = value;
		Il2CppCodeGenWriteBarrier((&___BehaviourCreated_5), value);
	}

	inline static int32_t get_offset_of_BehaviourDestroyed_6() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540_StaticFields, ___BehaviourDestroyed_6)); }
	inline Action_1_t2324316135 * get_BehaviourDestroyed_6() const { return ___BehaviourDestroyed_6; }
	inline Action_1_t2324316135 ** get_address_of_BehaviourDestroyed_6() { return &___BehaviourDestroyed_6; }
	inline void set_BehaviourDestroyed_6(Action_1_t2324316135 * value)
	{
		___BehaviourDestroyed_6 = value;
		Il2CppCodeGenWriteBarrier((&___BehaviourDestroyed_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIABEHAVIOUR_T2151848540_H
#ifndef ROCKPILECONTROLLER_T2893225296_H
#define ROCKPILECONTROLLER_T2893225296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RockPileController
struct  RockPileController_t2893225296  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform RockPileController::m_GrabbableRock
	Transform_t3600365921 * ___m_GrabbableRock_2;
	// FadeObject RockPileController::fadeController
	FadeObject_t1880495183 * ___fadeController_3;

public:
	inline static int32_t get_offset_of_m_GrabbableRock_2() { return static_cast<int32_t>(offsetof(RockPileController_t2893225296, ___m_GrabbableRock_2)); }
	inline Transform_t3600365921 * get_m_GrabbableRock_2() const { return ___m_GrabbableRock_2; }
	inline Transform_t3600365921 ** get_address_of_m_GrabbableRock_2() { return &___m_GrabbableRock_2; }
	inline void set_m_GrabbableRock_2(Transform_t3600365921 * value)
	{
		___m_GrabbableRock_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_GrabbableRock_2), value);
	}

	inline static int32_t get_offset_of_fadeController_3() { return static_cast<int32_t>(offsetof(RockPileController_t2893225296, ___fadeController_3)); }
	inline FadeObject_t1880495183 * get_fadeController_3() const { return ___fadeController_3; }
	inline FadeObject_t1880495183 ** get_address_of_fadeController_3() { return &___fadeController_3; }
	inline void set_fadeController_3(FadeObject_t1880495183 * value)
	{
		___fadeController_3 = value;
		Il2CppCodeGenWriteBarrier((&___fadeController_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROCKPILECONTROLLER_T2893225296_H
#ifndef TAPHANDLER_T334234343_H
#define TAPHANDLER_T334234343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TapHandler
struct  TapHandler_t334234343  : public MonoBehaviour_t3962482529
{
public:
	// System.Single TapHandler::mTimeSinceLastTap
	float ___mTimeSinceLastTap_3;
	// MenuAnimator TapHandler::mMenuAnim
	MenuAnimator_t2112910832 * ___mMenuAnim_4;
	// System.Int32 TapHandler::mTapCount
	int32_t ___mTapCount_5;

public:
	inline static int32_t get_offset_of_mTimeSinceLastTap_3() { return static_cast<int32_t>(offsetof(TapHandler_t334234343, ___mTimeSinceLastTap_3)); }
	inline float get_mTimeSinceLastTap_3() const { return ___mTimeSinceLastTap_3; }
	inline float* get_address_of_mTimeSinceLastTap_3() { return &___mTimeSinceLastTap_3; }
	inline void set_mTimeSinceLastTap_3(float value)
	{
		___mTimeSinceLastTap_3 = value;
	}

	inline static int32_t get_offset_of_mMenuAnim_4() { return static_cast<int32_t>(offsetof(TapHandler_t334234343, ___mMenuAnim_4)); }
	inline MenuAnimator_t2112910832 * get_mMenuAnim_4() const { return ___mMenuAnim_4; }
	inline MenuAnimator_t2112910832 ** get_address_of_mMenuAnim_4() { return &___mMenuAnim_4; }
	inline void set_mMenuAnim_4(MenuAnimator_t2112910832 * value)
	{
		___mMenuAnim_4 = value;
		Il2CppCodeGenWriteBarrier((&___mMenuAnim_4), value);
	}

	inline static int32_t get_offset_of_mTapCount_5() { return static_cast<int32_t>(offsetof(TapHandler_t334234343, ___mTapCount_5)); }
	inline int32_t get_mTapCount_5() const { return ___mTapCount_5; }
	inline int32_t* get_address_of_mTapCount_5() { return &___mTapCount_5; }
	inline void set_mTapCount_5(int32_t value)
	{
		___mTapCount_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAPHANDLER_T334234343_H
#ifndef BUTTONCONTROLLER_T4120738002_H
#define BUTTONCONTROLLER_T4120738002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ButtonController
struct  ButtonController_t4120738002  : public MonoBehaviour_t3962482529
{
public:
	// ButtonType ButtonController::m_buttonType
	int32_t ___m_buttonType_2;
	// ButtonManager ButtonController::m_manager
	ButtonManager_t2018100028 * ___m_manager_3;
	// UnityEngine.BoxCollider ButtonController::m_collider
	BoxCollider_t1640800422 * ___m_collider_4;
	// UnityEngine.MeshRenderer ButtonController::m_render
	MeshRenderer_t587009260 * ___m_render_5;
	// UnityEngine.Transform ButtonController::m_myTransform
	Transform_t3600365921 * ___m_myTransform_6;
	// System.Boolean ButtonController::m_isDown
	bool ___m_isDown_7;

public:
	inline static int32_t get_offset_of_m_buttonType_2() { return static_cast<int32_t>(offsetof(ButtonController_t4120738002, ___m_buttonType_2)); }
	inline int32_t get_m_buttonType_2() const { return ___m_buttonType_2; }
	inline int32_t* get_address_of_m_buttonType_2() { return &___m_buttonType_2; }
	inline void set_m_buttonType_2(int32_t value)
	{
		___m_buttonType_2 = value;
	}

	inline static int32_t get_offset_of_m_manager_3() { return static_cast<int32_t>(offsetof(ButtonController_t4120738002, ___m_manager_3)); }
	inline ButtonManager_t2018100028 * get_m_manager_3() const { return ___m_manager_3; }
	inline ButtonManager_t2018100028 ** get_address_of_m_manager_3() { return &___m_manager_3; }
	inline void set_m_manager_3(ButtonManager_t2018100028 * value)
	{
		___m_manager_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_manager_3), value);
	}

	inline static int32_t get_offset_of_m_collider_4() { return static_cast<int32_t>(offsetof(ButtonController_t4120738002, ___m_collider_4)); }
	inline BoxCollider_t1640800422 * get_m_collider_4() const { return ___m_collider_4; }
	inline BoxCollider_t1640800422 ** get_address_of_m_collider_4() { return &___m_collider_4; }
	inline void set_m_collider_4(BoxCollider_t1640800422 * value)
	{
		___m_collider_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_collider_4), value);
	}

	inline static int32_t get_offset_of_m_render_5() { return static_cast<int32_t>(offsetof(ButtonController_t4120738002, ___m_render_5)); }
	inline MeshRenderer_t587009260 * get_m_render_5() const { return ___m_render_5; }
	inline MeshRenderer_t587009260 ** get_address_of_m_render_5() { return &___m_render_5; }
	inline void set_m_render_5(MeshRenderer_t587009260 * value)
	{
		___m_render_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_render_5), value);
	}

	inline static int32_t get_offset_of_m_myTransform_6() { return static_cast<int32_t>(offsetof(ButtonController_t4120738002, ___m_myTransform_6)); }
	inline Transform_t3600365921 * get_m_myTransform_6() const { return ___m_myTransform_6; }
	inline Transform_t3600365921 ** get_address_of_m_myTransform_6() { return &___m_myTransform_6; }
	inline void set_m_myTransform_6(Transform_t3600365921 * value)
	{
		___m_myTransform_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_myTransform_6), value);
	}

	inline static int32_t get_offset_of_m_isDown_7() { return static_cast<int32_t>(offsetof(ButtonController_t4120738002, ___m_isDown_7)); }
	inline bool get_m_isDown_7() const { return ___m_isDown_7; }
	inline bool* get_address_of_m_isDown_7() { return &___m_isDown_7; }
	inline void set_m_isDown_7(bool value)
	{
		___m_isDown_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONCONTROLLER_T4120738002_H
#ifndef ASTRONAUTSTATEMACHINEBEHAVIOUR_T3422698390_H
#define ASTRONAUTSTATEMACHINEBEHAVIOUR_T3422698390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AstronautStateMachineBehaviour
struct  AstronautStateMachineBehaviour_t3422698390  : public AugmentationStateMachineBehaviour_t3849818102
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASTRONAUTSTATEMACHINEBEHAVIOUR_T3422698390_H
#ifndef BACKGROUNDPLANEBEHAVIOUR_T3333547397_H
#define BACKGROUNDPLANEBEHAVIOUR_T3333547397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.BackgroundPlaneBehaviour
struct  BackgroundPlaneBehaviour_t3333547397  : public MonoBehaviour_t3962482529
{
public:
	// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.BackgroundPlaneBehaviour::mTextureInfo
	VideoTextureInfo_t1805965052  ___mTextureInfo_2;
	// System.Int32 Vuforia.BackgroundPlaneBehaviour::mNumFramesToUpdateVideoBg
	int32_t ___mNumFramesToUpdateVideoBg_3;
	// UnityEngine.Transform Vuforia.BackgroundPlaneBehaviour::mCameraTransform
	Transform_t3600365921 * ___mCameraTransform_4;
	// UnityEngine.Mesh Vuforia.BackgroundPlaneBehaviour::mMesh
	Mesh_t3648964284 * ___mMesh_6;
	// System.Single Vuforia.BackgroundPlaneBehaviour::mStereoDepth
	float ___mStereoDepth_7;
	// System.Boolean Vuforia.BackgroundPlaneBehaviour::mProjectionMatrixSetExternally
	bool ___mProjectionMatrixSetExternally_8;
	// UnityEngine.Vector3 Vuforia.BackgroundPlaneBehaviour::mBackgroundOffset
	Vector3_t3722313464  ___mBackgroundOffset_9;
	// Vuforia.VuforiaARController Vuforia.BackgroundPlaneBehaviour::mVuforiaBehaviour
	VuforiaARController_t1876945237 * ___mVuforiaBehaviour_10;
	// System.Action Vuforia.BackgroundPlaneBehaviour::mBackgroundPlacedCallback
	Action_t1264377477 * ___mBackgroundPlacedCallback_11;
	// Vuforia.VideoBackgroundConfigValidator Vuforia.BackgroundPlaneBehaviour::mValidator
	VideoBackgroundConfigValidator_t1958892045 * ___mValidator_12;
	// Vuforia.IProjectMatrixProvider Vuforia.BackgroundPlaneBehaviour::mProjectMatrixProvider
	RuntimeObject* ___mProjectMatrixProvider_13;
	// Vuforia.BackgroundPlaneBehaviour/ProjectionMatrixData Vuforia.BackgroundPlaneBehaviour::mLastUsedProjectioMatrix
	ProjectionMatrixData_t3894131367  ___mLastUsedProjectioMatrix_14;
	// System.Int32 Vuforia.BackgroundPlaneBehaviour::mNumDivisions
	int32_t ___mNumDivisions_15;
	// Vuforia.HideExcessAreaUtility Vuforia.BackgroundPlaneBehaviour::mHideExcessAreaUtility
	HideExcessAreaUtility_t3142786924 * ___mHideExcessAreaUtility_16;

public:
	inline static int32_t get_offset_of_mTextureInfo_2() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t3333547397, ___mTextureInfo_2)); }
	inline VideoTextureInfo_t1805965052  get_mTextureInfo_2() const { return ___mTextureInfo_2; }
	inline VideoTextureInfo_t1805965052 * get_address_of_mTextureInfo_2() { return &___mTextureInfo_2; }
	inline void set_mTextureInfo_2(VideoTextureInfo_t1805965052  value)
	{
		___mTextureInfo_2 = value;
	}

	inline static int32_t get_offset_of_mNumFramesToUpdateVideoBg_3() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t3333547397, ___mNumFramesToUpdateVideoBg_3)); }
	inline int32_t get_mNumFramesToUpdateVideoBg_3() const { return ___mNumFramesToUpdateVideoBg_3; }
	inline int32_t* get_address_of_mNumFramesToUpdateVideoBg_3() { return &___mNumFramesToUpdateVideoBg_3; }
	inline void set_mNumFramesToUpdateVideoBg_3(int32_t value)
	{
		___mNumFramesToUpdateVideoBg_3 = value;
	}

	inline static int32_t get_offset_of_mCameraTransform_4() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t3333547397, ___mCameraTransform_4)); }
	inline Transform_t3600365921 * get_mCameraTransform_4() const { return ___mCameraTransform_4; }
	inline Transform_t3600365921 ** get_address_of_mCameraTransform_4() { return &___mCameraTransform_4; }
	inline void set_mCameraTransform_4(Transform_t3600365921 * value)
	{
		___mCameraTransform_4 = value;
		Il2CppCodeGenWriteBarrier((&___mCameraTransform_4), value);
	}

	inline static int32_t get_offset_of_mMesh_6() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t3333547397, ___mMesh_6)); }
	inline Mesh_t3648964284 * get_mMesh_6() const { return ___mMesh_6; }
	inline Mesh_t3648964284 ** get_address_of_mMesh_6() { return &___mMesh_6; }
	inline void set_mMesh_6(Mesh_t3648964284 * value)
	{
		___mMesh_6 = value;
		Il2CppCodeGenWriteBarrier((&___mMesh_6), value);
	}

	inline static int32_t get_offset_of_mStereoDepth_7() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t3333547397, ___mStereoDepth_7)); }
	inline float get_mStereoDepth_7() const { return ___mStereoDepth_7; }
	inline float* get_address_of_mStereoDepth_7() { return &___mStereoDepth_7; }
	inline void set_mStereoDepth_7(float value)
	{
		___mStereoDepth_7 = value;
	}

	inline static int32_t get_offset_of_mProjectionMatrixSetExternally_8() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t3333547397, ___mProjectionMatrixSetExternally_8)); }
	inline bool get_mProjectionMatrixSetExternally_8() const { return ___mProjectionMatrixSetExternally_8; }
	inline bool* get_address_of_mProjectionMatrixSetExternally_8() { return &___mProjectionMatrixSetExternally_8; }
	inline void set_mProjectionMatrixSetExternally_8(bool value)
	{
		___mProjectionMatrixSetExternally_8 = value;
	}

	inline static int32_t get_offset_of_mBackgroundOffset_9() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t3333547397, ___mBackgroundOffset_9)); }
	inline Vector3_t3722313464  get_mBackgroundOffset_9() const { return ___mBackgroundOffset_9; }
	inline Vector3_t3722313464 * get_address_of_mBackgroundOffset_9() { return &___mBackgroundOffset_9; }
	inline void set_mBackgroundOffset_9(Vector3_t3722313464  value)
	{
		___mBackgroundOffset_9 = value;
	}

	inline static int32_t get_offset_of_mVuforiaBehaviour_10() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t3333547397, ___mVuforiaBehaviour_10)); }
	inline VuforiaARController_t1876945237 * get_mVuforiaBehaviour_10() const { return ___mVuforiaBehaviour_10; }
	inline VuforiaARController_t1876945237 ** get_address_of_mVuforiaBehaviour_10() { return &___mVuforiaBehaviour_10; }
	inline void set_mVuforiaBehaviour_10(VuforiaARController_t1876945237 * value)
	{
		___mVuforiaBehaviour_10 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_10), value);
	}

	inline static int32_t get_offset_of_mBackgroundPlacedCallback_11() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t3333547397, ___mBackgroundPlacedCallback_11)); }
	inline Action_t1264377477 * get_mBackgroundPlacedCallback_11() const { return ___mBackgroundPlacedCallback_11; }
	inline Action_t1264377477 ** get_address_of_mBackgroundPlacedCallback_11() { return &___mBackgroundPlacedCallback_11; }
	inline void set_mBackgroundPlacedCallback_11(Action_t1264377477 * value)
	{
		___mBackgroundPlacedCallback_11 = value;
		Il2CppCodeGenWriteBarrier((&___mBackgroundPlacedCallback_11), value);
	}

	inline static int32_t get_offset_of_mValidator_12() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t3333547397, ___mValidator_12)); }
	inline VideoBackgroundConfigValidator_t1958892045 * get_mValidator_12() const { return ___mValidator_12; }
	inline VideoBackgroundConfigValidator_t1958892045 ** get_address_of_mValidator_12() { return &___mValidator_12; }
	inline void set_mValidator_12(VideoBackgroundConfigValidator_t1958892045 * value)
	{
		___mValidator_12 = value;
		Il2CppCodeGenWriteBarrier((&___mValidator_12), value);
	}

	inline static int32_t get_offset_of_mProjectMatrixProvider_13() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t3333547397, ___mProjectMatrixProvider_13)); }
	inline RuntimeObject* get_mProjectMatrixProvider_13() const { return ___mProjectMatrixProvider_13; }
	inline RuntimeObject** get_address_of_mProjectMatrixProvider_13() { return &___mProjectMatrixProvider_13; }
	inline void set_mProjectMatrixProvider_13(RuntimeObject* value)
	{
		___mProjectMatrixProvider_13 = value;
		Il2CppCodeGenWriteBarrier((&___mProjectMatrixProvider_13), value);
	}

	inline static int32_t get_offset_of_mLastUsedProjectioMatrix_14() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t3333547397, ___mLastUsedProjectioMatrix_14)); }
	inline ProjectionMatrixData_t3894131367  get_mLastUsedProjectioMatrix_14() const { return ___mLastUsedProjectioMatrix_14; }
	inline ProjectionMatrixData_t3894131367 * get_address_of_mLastUsedProjectioMatrix_14() { return &___mLastUsedProjectioMatrix_14; }
	inline void set_mLastUsedProjectioMatrix_14(ProjectionMatrixData_t3894131367  value)
	{
		___mLastUsedProjectioMatrix_14 = value;
	}

	inline static int32_t get_offset_of_mNumDivisions_15() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t3333547397, ___mNumDivisions_15)); }
	inline int32_t get_mNumDivisions_15() const { return ___mNumDivisions_15; }
	inline int32_t* get_address_of_mNumDivisions_15() { return &___mNumDivisions_15; }
	inline void set_mNumDivisions_15(int32_t value)
	{
		___mNumDivisions_15 = value;
	}

	inline static int32_t get_offset_of_mHideExcessAreaUtility_16() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t3333547397, ___mHideExcessAreaUtility_16)); }
	inline HideExcessAreaUtility_t3142786924 * get_mHideExcessAreaUtility_16() const { return ___mHideExcessAreaUtility_16; }
	inline HideExcessAreaUtility_t3142786924 ** get_address_of_mHideExcessAreaUtility_16() { return &___mHideExcessAreaUtility_16; }
	inline void set_mHideExcessAreaUtility_16(HideExcessAreaUtility_t3142786924 * value)
	{
		___mHideExcessAreaUtility_16 = value;
		Il2CppCodeGenWriteBarrier((&___mHideExcessAreaUtility_16), value);
	}
};

struct BackgroundPlaneBehaviour_t3333547397_StaticFields
{
public:
	// System.Single Vuforia.BackgroundPlaneBehaviour::maxDisplacement
	float ___maxDisplacement_5;

public:
	inline static int32_t get_offset_of_maxDisplacement_5() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t3333547397_StaticFields, ___maxDisplacement_5)); }
	inline float get_maxDisplacement_5() const { return ___maxDisplacement_5; }
	inline float* get_address_of_maxDisplacement_5() { return &___maxDisplacement_5; }
	inline void set_maxDisplacement_5(float value)
	{
		___maxDisplacement_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BACKGROUNDPLANEBEHAVIOUR_T3333547397_H
#ifndef DRONE_T259598734_H
#define DRONE_T259598734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Drone
struct  Drone_t259598734  : public Augmentation_t2596699517
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRONE_T259598734_H
#ifndef ASTRONAUT_T1874369735_H
#define ASTRONAUT_T1874369735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Astronaut
struct  Astronaut_t1874369735  : public Augmentation_t2596699517
{
public:
	// DrillController Astronaut::m_Drill
	DrillController_t3872647469 * ___m_Drill_9;
	// UnityEngine.ParticleSystem Astronaut::m_DrillEffectSmoke
	ParticleSystem_t1800779281 * ___m_DrillEffectSmoke_10;
	// UnityEngine.ParticleSystem Astronaut::m_DrillEffectRocks
	ParticleSystem_t1800779281 * ___m_DrillEffectRocks_11;
	// RockPileController Astronaut::m_RockPile
	RockPileController_t2893225296 * ___m_RockPile_12;

public:
	inline static int32_t get_offset_of_m_Drill_9() { return static_cast<int32_t>(offsetof(Astronaut_t1874369735, ___m_Drill_9)); }
	inline DrillController_t3872647469 * get_m_Drill_9() const { return ___m_Drill_9; }
	inline DrillController_t3872647469 ** get_address_of_m_Drill_9() { return &___m_Drill_9; }
	inline void set_m_Drill_9(DrillController_t3872647469 * value)
	{
		___m_Drill_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Drill_9), value);
	}

	inline static int32_t get_offset_of_m_DrillEffectSmoke_10() { return static_cast<int32_t>(offsetof(Astronaut_t1874369735, ___m_DrillEffectSmoke_10)); }
	inline ParticleSystem_t1800779281 * get_m_DrillEffectSmoke_10() const { return ___m_DrillEffectSmoke_10; }
	inline ParticleSystem_t1800779281 ** get_address_of_m_DrillEffectSmoke_10() { return &___m_DrillEffectSmoke_10; }
	inline void set_m_DrillEffectSmoke_10(ParticleSystem_t1800779281 * value)
	{
		___m_DrillEffectSmoke_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_DrillEffectSmoke_10), value);
	}

	inline static int32_t get_offset_of_m_DrillEffectRocks_11() { return static_cast<int32_t>(offsetof(Astronaut_t1874369735, ___m_DrillEffectRocks_11)); }
	inline ParticleSystem_t1800779281 * get_m_DrillEffectRocks_11() const { return ___m_DrillEffectRocks_11; }
	inline ParticleSystem_t1800779281 ** get_address_of_m_DrillEffectRocks_11() { return &___m_DrillEffectRocks_11; }
	inline void set_m_DrillEffectRocks_11(ParticleSystem_t1800779281 * value)
	{
		___m_DrillEffectRocks_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_DrillEffectRocks_11), value);
	}

	inline static int32_t get_offset_of_m_RockPile_12() { return static_cast<int32_t>(offsetof(Astronaut_t1874369735, ___m_RockPile_12)); }
	inline RockPileController_t2893225296 * get_m_RockPile_12() const { return ___m_RockPile_12; }
	inline RockPileController_t2893225296 ** get_address_of_m_RockPile_12() { return &___m_RockPile_12; }
	inline void set_m_RockPile_12(RockPileController_t2893225296 * value)
	{
		___m_RockPile_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_RockPile_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASTRONAUT_T1874369735_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_3;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_4;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_5;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_6;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_7;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_8;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_9;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_10;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_11;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_14;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_15;

public:
	inline static int32_t get_offset_of_m_Navigation_3() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_3)); }
	inline Navigation_t3049316579  get_m_Navigation_3() const { return ___m_Navigation_3; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_3() { return &___m_Navigation_3; }
	inline void set_m_Navigation_3(Navigation_t3049316579  value)
	{
		___m_Navigation_3 = value;
	}

	inline static int32_t get_offset_of_m_Transition_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_4)); }
	inline int32_t get_m_Transition_4() const { return ___m_Transition_4; }
	inline int32_t* get_address_of_m_Transition_4() { return &___m_Transition_4; }
	inline void set_m_Transition_4(int32_t value)
	{
		___m_Transition_4 = value;
	}

	inline static int32_t get_offset_of_m_Colors_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_5)); }
	inline ColorBlock_t2139031574  get_m_Colors_5() const { return ___m_Colors_5; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_5() { return &___m_Colors_5; }
	inline void set_m_Colors_5(ColorBlock_t2139031574  value)
	{
		___m_Colors_5 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_6)); }
	inline SpriteState_t1362986479  get_m_SpriteState_6() const { return ___m_SpriteState_6; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_6() { return &___m_SpriteState_6; }
	inline void set_m_SpriteState_6(SpriteState_t1362986479  value)
	{
		___m_SpriteState_6 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_7)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_7() const { return ___m_AnimationTriggers_7; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_7() { return &___m_AnimationTriggers_7; }
	inline void set_m_AnimationTriggers_7(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_7), value);
	}

	inline static int32_t get_offset_of_m_Interactable_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_8)); }
	inline bool get_m_Interactable_8() const { return ___m_Interactable_8; }
	inline bool* get_address_of_m_Interactable_8() { return &___m_Interactable_8; }
	inline void set_m_Interactable_8(bool value)
	{
		___m_Interactable_8 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_9)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_9() const { return ___m_TargetGraphic_9; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_9() { return &___m_TargetGraphic_9; }
	inline void set_m_TargetGraphic_9(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_9), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_10)); }
	inline bool get_m_GroupsAllowInteraction_10() const { return ___m_GroupsAllowInteraction_10; }
	inline bool* get_address_of_m_GroupsAllowInteraction_10() { return &___m_GroupsAllowInteraction_10; }
	inline void set_m_GroupsAllowInteraction_10(bool value)
	{
		___m_GroupsAllowInteraction_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_11)); }
	inline int32_t get_m_CurrentSelectionState_11() const { return ___m_CurrentSelectionState_11; }
	inline int32_t* get_address_of_m_CurrentSelectionState_11() { return &___m_CurrentSelectionState_11; }
	inline void set_m_CurrentSelectionState_11(int32_t value)
	{
		___m_CurrentSelectionState_11 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_12)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_12() const { return ___U3CisPointerInsideU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_12() { return &___U3CisPointerInsideU3Ek__BackingField_12; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_12(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_13)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_13() const { return ___U3CisPointerDownU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_13() { return &___U3CisPointerDownU3Ek__BackingField_13; }
	inline void set_U3CisPointerDownU3Ek__BackingField_13(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_14)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_14() const { return ___U3ChasSelectionU3Ek__BackingField_14; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_14() { return &___U3ChasSelectionU3Ek__BackingField_14; }
	inline void set_U3ChasSelectionU3Ek__BackingField_14(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_15)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_15() const { return ___m_CanvasGroupCache_15; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_15() { return &___m_CanvasGroupCache_15; }
	inline void set_m_CanvasGroupCache_15(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_15), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_2;

public:
	inline static int32_t get_offset_of_s_List_2() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_2)); }
	inline List_1_t427135887 * get_s_List_2() const { return ___s_List_2; }
	inline List_1_t427135887 ** get_address_of_s_List_2() { return &___s_List_2; }
	inline void set_s_List_2(List_1_t427135887 * value)
	{
		___s_List_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef DATASETTRACKABLEBEHAVIOUR_T3430730379_H
#define DATASETTRACKABLEBEHAVIOUR_T3430730379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DataSetTrackableBehaviour
struct  DataSetTrackableBehaviour_t3430730379  : public TrackableBehaviour_t1113559212
{
public:
	// System.String Vuforia.DataSetTrackableBehaviour::mDataSetPath
	String_t* ___mDataSetPath_10;
	// System.Boolean Vuforia.DataSetTrackableBehaviour::mExtendedTracking
	bool ___mExtendedTracking_11;

public:
	inline static int32_t get_offset_of_mDataSetPath_10() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t3430730379, ___mDataSetPath_10)); }
	inline String_t* get_mDataSetPath_10() const { return ___mDataSetPath_10; }
	inline String_t** get_address_of_mDataSetPath_10() { return &___mDataSetPath_10; }
	inline void set_mDataSetPath_10(String_t* value)
	{
		___mDataSetPath_10 = value;
		Il2CppCodeGenWriteBarrier((&___mDataSetPath_10), value);
	}

	inline static int32_t get_offset_of_mExtendedTracking_11() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t3430730379, ___mExtendedTracking_11)); }
	inline bool get_mExtendedTracking_11() const { return ___mExtendedTracking_11; }
	inline bool* get_address_of_mExtendedTracking_11() { return &___mExtendedTracking_11; }
	inline void set_mExtendedTracking_11(bool value)
	{
		___mExtendedTracking_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASETTRACKABLEBEHAVIOUR_T3430730379_H
#ifndef TOGGLE_T2735377061_H
#define TOGGLE_T2735377061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Toggle
struct  Toggle_t2735377061  : public Selectable_t3250028441
{
public:
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_16;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_t1660335611 * ___graphic_17;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t123837990 * ___m_Group_18;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t1873685584 * ___onValueChanged_19;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_20;

public:
	inline static int32_t get_offset_of_toggleTransition_16() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___toggleTransition_16)); }
	inline int32_t get_toggleTransition_16() const { return ___toggleTransition_16; }
	inline int32_t* get_address_of_toggleTransition_16() { return &___toggleTransition_16; }
	inline void set_toggleTransition_16(int32_t value)
	{
		___toggleTransition_16 = value;
	}

	inline static int32_t get_offset_of_graphic_17() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___graphic_17)); }
	inline Graphic_t1660335611 * get_graphic_17() const { return ___graphic_17; }
	inline Graphic_t1660335611 ** get_address_of_graphic_17() { return &___graphic_17; }
	inline void set_graphic_17(Graphic_t1660335611 * value)
	{
		___graphic_17 = value;
		Il2CppCodeGenWriteBarrier((&___graphic_17), value);
	}

	inline static int32_t get_offset_of_m_Group_18() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___m_Group_18)); }
	inline ToggleGroup_t123837990 * get_m_Group_18() const { return ___m_Group_18; }
	inline ToggleGroup_t123837990 ** get_address_of_m_Group_18() { return &___m_Group_18; }
	inline void set_m_Group_18(ToggleGroup_t123837990 * value)
	{
		___m_Group_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_Group_18), value);
	}

	inline static int32_t get_offset_of_onValueChanged_19() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___onValueChanged_19)); }
	inline ToggleEvent_t1873685584 * get_onValueChanged_19() const { return ___onValueChanged_19; }
	inline ToggleEvent_t1873685584 ** get_address_of_onValueChanged_19() { return &___onValueChanged_19; }
	inline void set_onValueChanged_19(ToggleEvent_t1873685584 * value)
	{
		___onValueChanged_19 = value;
		Il2CppCodeGenWriteBarrier((&___onValueChanged_19), value);
	}

	inline static int32_t get_offset_of_m_IsOn_20() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___m_IsOn_20)); }
	inline bool get_m_IsOn_20() const { return ___m_IsOn_20; }
	inline bool* get_address_of_m_IsOn_20() { return &___m_IsOn_20; }
	inline void set_m_IsOn_20(bool value)
	{
		___m_IsOn_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOGGLE_T2735377061_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef BUTTON_T4055032469_H
#define BUTTON_T4055032469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button
struct  Button_t4055032469  : public Selectable_t3250028441
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t48803504 * ___m_OnClick_16;

public:
	inline static int32_t get_offset_of_m_OnClick_16() { return static_cast<int32_t>(offsetof(Button_t4055032469, ___m_OnClick_16)); }
	inline ButtonClickedEvent_t48803504 * get_m_OnClick_16() const { return ___m_OnClick_16; }
	inline ButtonClickedEvent_t48803504 ** get_address_of_m_OnClick_16() { return &___m_OnClick_16; }
	inline void set_m_OnClick_16(ButtonClickedEvent_t48803504 * value)
	{
		___m_OnClick_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnClick_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTON_T4055032469_H
#ifndef RAWIMAGE_T3182918964_H
#define RAWIMAGE_T3182918964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.RawImage
struct  RawImage_t3182918964  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t3661962703 * ___m_Texture_28;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_t2360479859  ___m_UVRect_29;

public:
	inline static int32_t get_offset_of_m_Texture_28() { return static_cast<int32_t>(offsetof(RawImage_t3182918964, ___m_Texture_28)); }
	inline Texture_t3661962703 * get_m_Texture_28() const { return ___m_Texture_28; }
	inline Texture_t3661962703 ** get_address_of_m_Texture_28() { return &___m_Texture_28; }
	inline void set_m_Texture_28(Texture_t3661962703 * value)
	{
		___m_Texture_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_Texture_28), value);
	}

	inline static int32_t get_offset_of_m_UVRect_29() { return static_cast<int32_t>(offsetof(RawImage_t3182918964, ___m_UVRect_29)); }
	inline Rect_t2360479859  get_m_UVRect_29() const { return ___m_UVRect_29; }
	inline Rect_t2360479859 * get_address_of_m_UVRect_29() { return &___m_UVRect_29; }
	inline void set_m_UVRect_29(Rect_t2360479859  value)
	{
		___m_UVRect_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAWIMAGE_T3182918964_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t2297175928  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Button_t4055032469 * m_Items[1];

public:
	inline Button_t4055032469 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Button_t4055032469 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Button_t4055032469 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Button_t4055032469 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Button_t4055032469 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Button_t4055032469 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t3210418286  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Renderer_t2627027031 * m_Items[1];

public:
	inline Renderer_t2627027031 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t2627027031 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t2627027031 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Renderer_t2627027031 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t2627027031 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t2627027031 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t1773347010 * m_Items[1];

public:
	inline Collider_t1773347010 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1773347010 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1773347010 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Collider_t1773347010 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1773347010 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1773347010 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t1636626578  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AnimationClip_t2318505987 * m_Items[1];

public:
	inline AnimationClip_t2318505987 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimationClip_t2318505987 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimationClip_t2318505987 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline AnimationClip_t2318505987 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimationClip_t2318505987 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimationClip_t2318505987 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Texture[]
struct TextureU5BU5D_t908295702  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Texture_t3661962703 * m_Items[1];

public:
	inline Texture_t3661962703 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Texture_t3661962703 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Texture_t3661962703 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Texture_t3661962703 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Texture_t3661962703 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Texture_t3661962703 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// ButtonController[]
struct ButtonControllerU5BU5D_t3107930023  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ButtonController_t4120738002 * m_Items[1];

public:
	inline ButtonController_t4120738002 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ButtonController_t4120738002 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ButtonController_t4120738002 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ButtonController_t4120738002 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ButtonController_t4120738002 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ButtonController_t4120738002 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t682926938  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Canvas_t3310196443 * m_Items[1];

public:
	inline Canvas_t3310196443 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Canvas_t3310196443 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Canvas_t3310196443 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Canvas_t3310196443 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Canvas_t3310196443 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Canvas_t3310196443 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t1113636619 * m_Items[1];

public:
	inline GameObject_t1113636619 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1113636619 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
extern "C"  ObjectU5BU5D_t2843939325* Object_FindObjectsOfType_TisRuntimeObject_m2776316817_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Action`1<T> AugmentationStateMachineBehaviour::GetMethod<System.Object>(T,System.String)
extern "C"  Action_1_t3252573759 * AugmentationStateMachineBehaviour_GetMethod_TisRuntimeObject_m1487955773_gshared (AugmentationStateMachineBehaviour_t3849818102 * __this, RuntimeObject * ___augmentation0, String_t* ___methodName1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
extern "C"  void Action_1_Invoke_m2461023210_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
extern "C"  ObjectU5BU5D_t2843939325* Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared (Component_t1923634451 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m2079027267_gshared (Action_1_t269755560 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`1<Vuforia.VuforiaUnity/InitError>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m2713332384_gshared (Action_1_t3593217305 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::GetBuiltinResource<System.Object>(System.String)
extern "C"  RuntimeObject * Resources_GetBuiltinResource_TisRuntimeObject_m3352626831_gshared (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInParent<System.Object>(System.Boolean)
extern "C"  ObjectU5BU5D_t2843939325* Component_GetComponentsInParent_TisRuntimeObject_m492379918_gshared (Component_t1923634451 * __this, bool p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C"  RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C"  RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m1542987838_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// T MenuOptions::FindUISelectableWithText<System.Object>(System.String)
extern "C"  RuntimeObject * MenuOptions_FindUISelectableWithText_TisRuntimeObject_m1777269550_gshared (MenuOptions_t1951716431 * __this, String_t* ___text0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  List_1_t257213610 * Enumerable_ToList_TisRuntimeObject_m1551499789_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::ElementAt<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
extern "C"  RuntimeObject * Enumerable_ElementAt_TisRuntimeObject_m2579126540_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, int32_t p1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
extern "C"  ObjectU5BU5D_t2843939325* Component_GetComponentsInChildren_TisRuntimeObject_m1664944732_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void AboutManager::LoadNextScene()
extern "C"  void AboutManager_LoadNextScene_m2149339385 (AboutManager_t2961629990 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
extern "C"  Scene_t2348375561  SceneManager_GetActiveScene_m1825203488 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
extern "C"  int32_t Scene_get_buildIndex_m270272723 (Scene_t2348375561 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
extern "C"  void SceneManager_LoadScene_m3463216446 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] UnityEngine.Object::FindObjectsOfType<UnityEngine.UI.Button>()
#define Object_FindObjectsOfType_TisButton_t4055032469_m3637543179(__this /* static, unused */, method) ((  ButtonU5BU5D_t2297175928* (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m2776316817_gshared)(__this /* static, unused */, method)
// System.Void AboutManager::UpdateAboutText()
extern "C"  void AboutManager_UpdateAboutText_m3813400252 (AboutManager_t2961629990 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.XR.XRSettings::get_enabled()
extern "C"  bool XRSettings_get_enabled_m2032436980 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.XRSettings::set_enabled(System.Boolean)
extern "C"  void XRSettings_set_enabled_m575494292 (RuntimeObject * __this /* static, unused */, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
extern "C"  void Selectable_set_interactable_m3105888815 (Selectable_t3250028441 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaUnity::GetVuforiaLibraryVersion()
extern "C"  String_t* VuforiaUnity_GetVuforiaLibraryVersion_m2580526827 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_unityVersion()
extern "C"  String_t* Application_get_unityVersion_m1068543125 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRuntime Vuforia.VuforiaRuntime::get_Instance()
extern "C"  VuforiaRuntime_t1949122020 * VuforiaRuntime_get_Instance_m1058251676 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntime::get_HasInitialized()
extern "C"  bool VuforiaRuntime_get_HasInitialized_m185170626 (VuforiaRuntime_t1949122020 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.XR.XRSettings::get_loadedDeviceName()
extern "C"  String_t* XRSettings_get_loadedDeviceName_m2020127682 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m1809518182 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1281789340* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1758133949 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyUp_m2808015270 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void AboutScreen::OnStartAR()
extern "C"  void AboutScreen_OnStartAR_m2896384759 (AboutScreen_t2183797299 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Augmentation::.ctor()
extern "C"  void Augmentation__ctor_m362621642 (Augmentation_t2596699517 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Augmentation::OnEnter()
extern "C"  void Augmentation_OnEnter_m744463222 (Augmentation_t2596699517 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::Invoke()
extern "C"  void Action_Invoke_m937035532 (Action_t1264377477 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Augmentation::OnExit()
extern "C"  void Augmentation_OnExit_m971700158 (Augmentation_t2596699517 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Astronaut::set_IsWaving(System.Boolean)
extern "C"  void Astronaut_set_IsWaving_m2086530614 (Astronaut_t1874369735 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Astronaut::set_IsDrilling(System.Boolean)
extern "C"  void Astronaut_set_IsDrilling_m1001765503 (Astronaut_t1874369735 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleSystem/EmissionModule UnityEngine.ParticleSystem::get_emission()
extern "C"  EmissionModule_t311448003  ParticleSystem_get_emission_m1034302947 (ParticleSystem_t1800779281 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled(System.Boolean)
extern "C"  void EmissionModule_set_enabled_m353945573 (EmissionModule_t311448003 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play()
extern "C"  void ParticleSystem_Play_m882713458 (ParticleSystem_t1800779281 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void RockPileController::FadeIn()
extern "C"  void RockPileController_FadeIn_m550595306 (RockPileController_t2893225296 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void RockPileController::FadeOut()
extern "C"  void RockPileController_FadeOut_m3065701988 (RockPileController_t2893225296 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::GetBool(System.String)
extern "C"  bool Animator_GetBool_m2865822416 (Animator_t434523843 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern "C"  void Animator_SetBool_m234840832 (Animator_t434523843 * __this, String_t* p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void AugmentationStateMachineBehaviour::.ctor()
extern "C"  void AugmentationStateMachineBehaviour__ctor_m4199737316 (AugmentationStateMachineBehaviour_t3849818102 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<Astronaut>()
#define Component_GetComponent_TisAstronaut_t1874369735_m3770992714(__this, method) ((  Astronaut_t1874369735 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Action`1<T> AugmentationStateMachineBehaviour::GetMethod<Astronaut>(T,System.String)
#define AugmentationStateMachineBehaviour_GetMethod_TisAstronaut_t1874369735_m4289488282(__this, ___augmentation0, ___methodName1, method) ((  Action_1_t2046837330 * (*) (AugmentationStateMachineBehaviour_t3849818102 *, Astronaut_t1874369735 *, String_t*, const RuntimeMethod*))AugmentationStateMachineBehaviour_GetMethod_TisRuntimeObject_m1487955773_gshared)(__this, ___augmentation0, ___methodName1, method)
// System.Void System.Action`1<Astronaut>::Invoke(!0)
#define Action_1_Invoke_m1045878271(__this, p0, method) ((  void (*) (Action_1_t2046837330 *, Astronaut_t1874369735 *, const RuntimeMethod*))Action_1_Invoke_m2461023210_gshared)(__this, p0, method)
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator AsyncSceneLoader::LoadNextSceneAfter(System.Single)
extern "C"  RuntimeObject* AsyncSceneLoader_LoadNextSceneAfter_m1751933459 (AsyncSceneLoader_t621267272 * __this, float ___seconds0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void AsyncSceneLoader/<LoadNextSceneAfter>c__Iterator0::.ctor()
extern "C"  void U3CLoadNextSceneAfterU3Ec__Iterator0__ctor_m1226795792 (U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C"  void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C"  void Action__ctor_m2994342681 (Action_t1264377477 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t434523843_m2351447238(__this, method) ((  Animator_t434523843 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern "C"  void MonoBehaviour_StopCoroutine_m615723318 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Augmentation::WaitForThen(System.Single,System.Action)
extern "C"  RuntimeObject* Augmentation_WaitForThen_m4086988269 (Augmentation_t2596699517 * __this, float ___waitSeconds0, Action_t1264377477 * ___action1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Augmentation::Disable()
extern "C"  void Augmentation_Disable_m1702586850 (Augmentation_t2596699517 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::Rebind()
extern "C"  void Animator_Rebind_m4018473738 (Animator_t434523843 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
extern "C"  String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>(System.Boolean)
#define Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911(__this, p0, method) ((  RendererU5BU5D_t3210418286* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared)(__this, p0, method)
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C"  void Renderer_set_enabled_m1727253150 (Renderer_t2627027031 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Collider>(System.Boolean)
#define Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426(__this, p0, method) ((  ColliderU5BU5D_t4234922487* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared)(__this, p0, method)
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C"  void Collider_set_enabled_m1517463283 (Collider_t1773347010 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Augmentation/<WaitForThen>c__Iterator0::.ctor()
extern "C"  void U3CWaitForThenU3Ec__Iterator0__ctor_m878806277 (U3CWaitForThenU3Ec__Iterator0_t751251344 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern "C"  void StateMachineBehaviour__ctor_m3367380209 (StateMachineBehaviour_t957311111 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C"  void StateMachineBehaviour_OnStateEnter_m2782683618 (StateMachineBehaviour_t957311111 * __this, Animator_t434523843 * p0, AnimatorStateInfo_t509032636  p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C"  bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C"  void StateMachineBehaviour_OnStateExit_m3287999912 (StateMachineBehaviour_t957311111 * __this, Animator_t434523843 * p0, AnimatorStateInfo_t509032636  p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C"  void StateMachineBehaviour_OnStateUpdate_m400934639 (StateMachineBehaviour_t957311111 * __this, Animator_t434523843 * p0, AnimatorStateInfo_t509032636  p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Delegate>>::.ctor()
#define Dictionary_2__ctor_m3885421510(__this, method) ((  void (*) (Dictionary_2_t3417996176 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// Vuforia.VuforiaARController Vuforia.VuforiaARController::get_Instance()
extern "C"  VuforiaARController_t1876945237 * VuforiaARController_get_Instance_m1100644214 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::RegisterVuforiaStartedCallback(System.Action)
extern "C"  void VuforiaARController_RegisterVuforiaStartedCallback_m3258152770 (VuforiaARController_t1876945237 * __this, Action_t1264377477 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m2079027267(__this, p0, p1, method) ((  void (*) (Action_1_t269755560 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m2079027267_gshared)(__this, p0, p1, method)
// System.Void Vuforia.VuforiaARController::RegisterOnPauseCallback(System.Action`1<System.Boolean>)
extern "C"  void VuforiaARController_RegisterOnPauseCallback_m1833237148 (VuforiaARController_t1876945237 * __this, Action_1_t269755560 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern "C"  bool Input_GetMouseButtonUp_m2924350851 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Autofocus::TriggerAutofocus()
extern "C"  RuntimeObject* Autofocus_TriggerAutofocus_m662759096 (Autofocus_t1688188087 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice Vuforia.CameraDevice::get_Instance()
extern "C"  CameraDevice_t960297568 * CameraDevice_get_Instance_m2002290155 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDevice::SetFocusMode(Vuforia.CameraDevice/FocusMode)
extern "C"  bool CameraDevice_SetFocusMode_m2424803588 (CameraDevice_t960297568 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Autofocus/<TriggerAutofocus>c__Iterator0::.ctor()
extern "C"  void U3CTriggerAutofocusU3Ec__Iterator0__ctor_m3130236765 (U3CTriggerAutofocusU3Ec__Iterator0_t1955189839 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void BackToAbout::HandleTap()
extern "C"  void BackToAbout_HandleTap_m3559493796 (BackToAbout_t1188110921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void BackToAbout::GoToAboutPage()
extern "C"  void BackToAbout_GoToAboutPage_m4071111343 (BackToAbout_t1188110921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.DigitalEyewearARController Vuforia.DigitalEyewearARController::get_Instance()
extern "C"  DigitalEyewearARController_t1054226036 * DigitalEyewearARController_get_Instance_m3573866503 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Vuforia.DigitalEyewearARController::get_PrimaryCamera()
extern "C"  Camera_t4157153871 * DigitalEyewearARController_get_PrimaryCamera_m3122713263 (DigitalEyewearARController_t1054226036 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C"  float Camera_get_nearClipPlane_m837839537 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
extern "C"  Matrix4x4_t1817901843  Camera_get_projectionMatrix_m667780853 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
extern "C"  float Matrix4x4_get_Item_m134152955 (Matrix4x4_t1817901843 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C"  Vector3_t3722313464  Vector3_get_forward_m3100859705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m2104357790 (RuntimeObject * __this /* static, unused */, float p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C"  void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C"  void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t2627027031_m2222376672(__this, method) ((  Renderer_t2627027031 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C"  Material_t340375123 * Renderer_get_material_m4171603682 (Renderer_t2627027031 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C"  void Material_SetFloat_m3226510453 (Material_t340375123 * __this, String_t* p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
extern "C"  float Mathf_Clamp01_m56433566 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C"  Vector3_t3722313464  Transform_get_forward_m747522392 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
extern "C"  Vector3_t3722313464  Transform_get_up_m3972993886 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_op_Division_m510815599 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::Normalize()
extern "C"  void Vector3_Normalize_m914904454 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C"  Vector3_t3722313464  Vector3_get_up_m3584168373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C"  float Vector3_get_magnitude_m27958459 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Quaternion_t2301928331  Quaternion_LookRotation_m3197602968 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToViewportPoint(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Camera_WorldToViewportPoint_m1538355680 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m2943235014 (Color_t2555686324 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
extern "C"  void Material_SetColor_m2020215303 (Material_t340375123 * __this, String_t* p0, Color_t2555686324  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
#define Component_GetComponent_TisBoxCollider_t1640800422_m4104100802(__this, method) ((  BoxCollider_t1640800422 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
#define Component_GetComponent_TisMeshRenderer_t587009260_m3511415476(__this, method) ((  MeshRenderer_t587009260 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void ButtonManager::OnButtonClick(ButtonType)
extern "C"  void ButtonManager_OnButtonClick_m3800887581 (ButtonManager_t2018100028 * __this, int32_t ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::set_clip(UnityEngine.AnimationClip)
extern "C"  void Animation_set_clip_m2768026374 (Animation_t3648466861 * __this, AnimationClip_t2318505987 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
extern "C"  void Material_set_mainTexture_m544811714 (Material_t340375123 * __this, Texture_t3661962703 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play()
extern "C"  bool Animation_Play_m2798573761 (Animation_t3648466861 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ButtonController::ButtonDisable()
extern "C"  void ButtonController_ButtonDisable_m1056108927 (ButtonController_t4120738002 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ButtonController::ButtonEnable()
extern "C"  void ButtonController_ButtonEnable_m2887820876 (ButtonController_t4120738002 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDevice::SetFlashTorchMode(System.Boolean)
extern "C"  bool CameraDevice_SetFlashTorchMode_m1499936922 (CameraDevice_t960297568 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator CameraSettings::RestoreOriginalFocusMode()
extern "C"  RuntimeObject* CameraSettings_RestoreOriginalFocusMode_m3433876528 (CameraSettings_t3152619780 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraSettings::RestartCamera(Vuforia.CameraDevice/CameraDirection)
extern "C"  bool CameraSettings_RestartCamera_m1627822698 (CameraSettings_t3152619780 * __this, int32_t ___direction0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.ITrackerManager Vuforia.TrackerManager::get_Instance()
extern "C"  RuntimeObject* TrackerManager_get_Instance_m777262631 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDevice::Stop()
extern "C"  bool CameraDevice_Stop_m1782631459 (CameraDevice_t960297568 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDevice::Deinit()
extern "C"  bool CameraDevice_Deinit_m726427492 (CameraDevice_t960297568 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDevice::Init(Vuforia.CameraDevice/CameraDirection)
extern "C"  bool CameraDevice_Init_m2722714107 (CameraDevice_t960297568 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDevice::Start()
extern "C"  bool CameraDevice_Start_m2947498176 (CameraDevice_t960297568 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CameraSettings::SwitchAutofocus(System.Boolean)
extern "C"  void CameraSettings_SwitchAutofocus_m1104105893 (CameraSettings_t3152619780 * __this, bool ___ON0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CameraSettings/<RestoreOriginalFocusMode>c__Iterator0::.ctor()
extern "C"  void U3CRestoreOriginalFocusModeU3Ec__Iterator0__ctor_m1994535627 (U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DefaultInitializationErrorHandler::SetErrorCode(Vuforia.VuforiaUnity/InitError)
extern "C"  void DefaultInitializationErrorHandler_SetErrorCode_m599033302 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___errorCode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DefaultInitializationErrorHandler::SetErrorOccurred(System.Boolean)
extern "C"  void DefaultInitializationErrorHandler_SetErrorOccurred_m1940230672 (DefaultInitializationErrorHandler_t3109936861 * __this, bool ___errorOccurred0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<Vuforia.VuforiaUnity/InitError>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m2713332384(__this, p0, p1, method) ((  void (*) (Action_1_t3593217305 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m2713332384_gshared)(__this, p0, p1, method)
// System.Void Vuforia.VuforiaRuntime::RegisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C"  void VuforiaRuntime_RegisterVuforiaInitErrorCallback_m2728879505 (VuforiaRuntime_t1949122020 * __this, Action_1_t3593217305 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DefaultInitializationErrorHandler::SetupGUIStyles()
extern "C"  void DefaultInitializationErrorHandler_SetupGUIStyles_m3863535424 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_width()
extern "C"  int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_height()
extern "C"  int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
extern "C"  void WindowFunction__ctor_m2544237635 (WindowFunction_t3146511083 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
extern "C"  Rect_t2360479859  GUI_Window_m1088326791 (RuntimeObject * __this /* static, unused */, int32_t p0, Rect_t2360479859  p1, WindowFunction_t3146511083 * p2, String_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntime::UnregisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C"  void VuforiaRuntime_UnregisterVuforiaInitErrorCallback_m1304340042 (VuforiaRuntime_t1949122020 * __this, Action_1_t3593217305 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C"  void GUI_Label_m2420537077 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, String_t* p1, GUIStyle_t3956901511 * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C"  bool GUI_Button_m2223708732 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, String_t* p1, GUIStyle_t3956901511 * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::Quit()
extern "C"  void Application_Quit_m470877999 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String DefaultInitializationErrorHandler::getKeyInfo()
extern "C"  String_t* DefaultInitializationErrorHandler_getKeyInfo_m1864640064 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_productName()
extern "C"  String_t* Application_get_productName_m2401755738 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Replace(System.String,System.String)
extern "C"  String_t* String_Replace_m1273907647 (String_t* __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::get_Instance()
extern "C"  VuforiaConfiguration_t1763229349 * VuforiaConfiguration_get_Instance_m3335903280 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration Vuforia.VuforiaConfiguration::get_Vuforia()
extern "C"  GenericVuforiaConfiguration_t3697830469 * VuforiaConfiguration_get_Vuforia_m1588208597 (VuforiaConfiguration_t1763229349 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_LicenseKey()
extern "C"  String_t* GenericVuforiaConfiguration_get_LicenseKey_m2270076687 (GenericVuforiaConfiguration_t3697830469 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C"  String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Screen::get_dpi()
extern "C"  float Screen_get_dpi_m495672463 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C"  Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D DefaultInitializationErrorHandler::CreateSinglePixelTexture(UnityEngine.Color)
extern "C"  Texture2D_t3840446185 * DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749 (DefaultInitializationErrorHandler_t3109936861 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_InverseLerp_m4155825980 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m286683560 (Color_t2555686324 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.ctor()
extern "C"  void GUIStyle__ctor_m4038363858 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern "C"  GUIStyleState_t1397964415 * GUIStyle_get_normal_m729441812 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::set_background(UnityEngine.Texture2D)
extern "C"  void GUIStyleState_set_background_m369476077 (GUIStyleState_t1397964415 * __this, Texture2D_t3840446185 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Resources::GetBuiltinResource<UnityEngine.Font>(System.String)
#define Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830(__this /* static, unused */, p0, method) ((  Font_t1956802104 * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))Resources_GetBuiltinResource_TisRuntimeObject_m3352626831_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.GUIStyle::set_font(UnityEngine.Font)
extern "C"  void GUIStyle_set_font_m2490449107 (GUIStyle_t3956901511 * __this, Font_t1956802104 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
extern "C"  void GUIStyle_set_fontSize_m1566850023 (GUIStyle_t3956901511 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_black()
extern "C"  Color_t2555686324  Color_get_black_m719512684 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
extern "C"  void GUIStyleState_set_textColor_m1105876047 (GUIStyleState_t1397964415 * __this, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
extern "C"  void GUIStyle_set_wordWrap_m1419501823 (GUIStyle_t3956901511 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
extern "C"  void GUIStyle_set_alignment_m3944619660 (GUIStyle_t3956901511 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectOffset::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void RectOffset__ctor_m732140021 (RectOffset_t1369453676 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_padding(UnityEngine.RectOffset)
extern "C"  void GUIStyle_set_padding_m3302456044 (GUIStyle_t3956901511 * __this, RectOffset_t1369453676 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
extern "C"  void GUIStyle__ctor_m2912682974 (GUIStyle_t3956901511 * __this, GUIStyle_t3956901511 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C"  void Texture2D__ctor_m2862217990 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
extern "C"  void Texture2D_SetPixel_m2984741184 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, Color_t2555686324  p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply()
extern "C"  void Texture2D_Apply_m2271746283 (Texture2D_t3840446185 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<Vuforia.TrackableBehaviour>()
#define Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408(__this, method) ((  TrackableBehaviour_t1113559212 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void Vuforia.TrackableBehaviour::RegisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C"  void TrackableBehaviour_RegisterTrackableEventHandler_m2462783619 (TrackableBehaviour_t1113559212 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::UnregisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C"  bool TrackableBehaviour_UnregisterTrackableEventHandler_m1201569614 (TrackableBehaviour_t1113559212 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TrackableBehaviour::get_TrackableName()
extern "C"  String_t* TrackableBehaviour_get_TrackableName_m3644057705 (TrackableBehaviour_t1113559212 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Canvas>(System.Boolean)
#define Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007(__this, p0, method) ((  CanvasU5BU5D_t682926938* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared)(__this, p0, method)
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C"  void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C"  Vector3_t3722313464  Vector3_get_one_m1629952498 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Drone::set_IsScanning(System.Boolean)
extern "C"  void Drone_set_IsScanning_m2450867114 (Drone_t259598734 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Drone::set_IsFacingObject(System.Boolean)
extern "C"  void Drone_set_IsFacingObject_m27084245 (Drone_t259598734 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Drone::set_IsShowingLaser(System.Boolean)
extern "C"  void Drone_set_IsShowingLaser_m723721754 (Drone_t259598734 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
extern "C"  Material_t340375123 * Renderer_get_sharedMaterial_m1936632411 (Renderer_t2627027031 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.Material>(!!0)
#define Object_Instantiate_TisMaterial_t340375123_m2709937581(__this /* static, unused */, p0, method) ((  Material_t340375123 * (*) (RuntimeObject * /* static, unused */, Material_t340375123 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
extern "C"  void Renderer_set_sharedMaterial_m2374163090 (Renderer_t2627027031 * __this, Material_t340375123 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void FadeObject::SetInitialOpacity(System.Single)
extern "C"  void FadeObject_SetInitialOpacity_m1171621798 (FadeObject_t1880495183 * __this, float ___opacity0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void FadeObject::SetRenderingMode(System.Boolean)
extern "C"  void FadeObject_SetRenderingMode_m278453982 (FadeObject_t1880495183 * __this, bool ___isOpaque0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void FadeObject::SetOpacity(System.Single)
extern "C"  void FadeObject_SetOpacity_m1467358730 (FadeObject_t1880495183 * __this, float ___opacity0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
extern "C"  bool Material_HasProperty_m2704238996 (Material_t340375123 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
extern "C"  Color_t2555686324  Material_GetColor_m2707324984 (Material_t340375123 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
extern "C"  void Material_SetInt_m1783799378 (Material_t340375123 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::DisableKeyword(System.String)
extern "C"  void Material_DisableKeyword_m1245091008 (Material_t340375123 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
extern "C"  void Material_set_renderQueue_m2897975967 (Material_t340375123 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::EnableKeyword(System.String)
extern "C"  void Material_EnableKeyword_m329692301 (Material_t340375123 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer Vuforia.VuforiaRenderer::get_Instance()
extern "C"  VuforiaRenderer_t3433045970 * VuforiaRenderer_get_Instance_m1013623488 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaRenderer::GetRecommendedFps(Vuforia.VuforiaRenderer/FpsHint)
extern "C"  int32_t VuforiaRenderer_GetRecommendedFps_m561576480 (VuforiaRenderer_t3433045970 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Application::get_targetFrameRate()
extern "C"  int32_t Application_get_targetFrameRate_m1077623221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C"  String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
extern "C"  void Application_set_targetFrameRate_m3682352535 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] UnityEngine.Component::GetComponentsInParent<UnityEngine.Canvas>(System.Boolean)
#define Component_GetComponentsInParent_TisCanvas_t3310196443_m1039379662(__this, p0, method) ((  CanvasU5BU5D_t682926938* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInParent_TisRuntimeObject_m492379918_gshared)(__this, p0, method)
// System.Void InitErrorHandler::ShowErrorMessage(Vuforia.VuforiaUnity/InitError)
extern "C"  void InitErrorHandler_ShowErrorMessage_m1141628225 (InitErrorHandler_t2159361531 * __this, int32_t ___errorCode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String InitErrorHandler::getKeyInfo()
extern "C"  String_t* InitErrorHandler_getKeyInfo_m2220979040 (InitErrorHandler_t2159361531 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C"  Transform_t3600365921 * Transform_get_parent_m835071599 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.RawImage>()
#define Component_GetComponentInChildren_TisRawImage_t3182918964_m4000174733(__this, method) ((  RawImage_t3182918964 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method)
// System.Void UnityEngine.Application::set_backgroundLoadingPriority(UnityEngine.ThreadPriority)
extern "C"  void Application_set_backgroundLoadingPriority_m1116453950 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
extern "C"  RectTransform_t3704657025 * Graphic_get_rectTransform_m1167152468 (Graphic_t1660335611 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
extern "C"  void Transform_Rotate_m1749346957 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LoadingScreen::LoadNextSceneAsync()
extern "C"  void LoadingScreen_LoadNextSceneAsync_m3801488710 (LoadingScreen_t2154736699 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.Int32)
extern "C"  AsyncOperation_t1445031843 * SceneManager_LoadSceneAsync_m3240398665 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C"  Vector3_t3722313464  Vector3_get_right_m1913784872 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_UnaryNegation_m1951478815 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::FindObjectOfType<MenuOptions>()
#define Object_FindObjectOfType_TisMenuOptions_t1951716431_m1050906446(__this /* static, unused */, method) ((  MenuOptions_t1951716431 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m1542987838_gshared)(__this /* static, unused */, method)
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C"  bool Behaviour_get_enabled_m753527255 (Behaviour_t1437897464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Slerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_Slerp_m802114822 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuOptions::UpdateUI()
extern "C"  void MenuOptions_UpdateUI_m2695051465 (MenuOptions_t1951716431 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::FindObjectOfType<CameraSettings>()
#define Object_FindObjectOfType_TisCameraSettings_t3152619780_m4203198741(__this /* static, unused */, method) ((  CameraSettings_t3152619780 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m1542987838_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.Object::FindObjectOfType<TrackableSettings>()
#define Object_FindObjectOfType_TisTrackableSettings_t2862243993_m1852430619(__this /* static, unused */, method) ((  TrackableSettings_t2862243993 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m1542987838_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.Object::FindObjectOfType<MenuAnimator>()
#define Object_FindObjectOfType_TisMenuAnimator_t2112910832_m1830680649(__this /* static, unused */, method) ((  MenuAnimator_t2112910832 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m1542987838_gshared)(__this /* static, unused */, method)
// T MenuOptions::FindUISelectableWithText<UnityEngine.UI.Toggle>(System.String)
#define MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125(__this, ___text0, method) ((  Toggle_t2735377061 * (*) (MenuOptions_t1951716431 *, String_t*, const RuntimeMethod*))MenuOptions_FindUISelectableWithText_TisRuntimeObject_m1777269550_gshared)(__this, ___text0, method)
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
extern "C"  bool Toggle_get_isOn_m1428293607 (Toggle_t2735377061 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CameraSettings::SwitchFlashTorch(System.Boolean)
extern "C"  void CameraSettings_SwitchFlashTorch_m1540789541 (CameraSettings_t3152619780 * __this, bool ___ON0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraSettings::IsFlashTorchEnabled()
extern "C"  bool CameraSettings_IsFlashTorchEnabled_m3875252701 (CameraSettings_t3152619780 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
extern "C"  void Toggle_set_isOn_m3548357404 (Toggle_t2735377061 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraSettings::IsFrontCameraActive()
extern "C"  bool CameraSettings_IsFrontCameraActive_m282456036 (CameraSettings_t3152619780 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CameraSettings::SelectCamera(Vuforia.CameraDevice/CameraDirection)
extern "C"  void CameraSettings_SelectCamera_m387205834 (CameraSettings_t3152619780 * __this, int32_t ___camDir0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuOptions::ToggleTorch()
extern "C"  void MenuOptions_ToggleTorch_m1503051540 (MenuOptions_t1951716431 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TrackableSettings::ActivateDataSet(System.String)
extern "C"  void TrackableSettings_ActivateDataSet_m4118878993 (TrackableSettings_t2862243993 * __this, String_t* ___datasetName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean TrackableSettings::IsExtendedTrackingEnabled()
extern "C"  bool TrackableSettings_IsExtendedTrackingEnabled_m1319587722 (TrackableSettings_t2862243993 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraSettings::IsAutofocusEnabled()
extern "C"  bool CameraSettings_IsAutofocusEnabled_m386305083 (CameraSettings_t3152619780 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet> Vuforia.ObjectTracker::GetDataSets()
extern "C"  RuntimeObject* ObjectTracker_GetDataSets_m1245718448 (ObjectTracker_t4177997237 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTracker::DeactivateDataSet(Vuforia.DataSet)
extern "C"  bool ObjectTracker_DeactivateDataSet_m2094146088 (ObjectTracker_t4177997237 * __this, DataSet_t3286034874 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTracker::ActivateDataSet(Vuforia.DataSet)
extern "C"  bool ObjectTracker_ActivateDataSet_m3009523340 (ObjectTracker_t4177997237 * __this, DataSet_t3286034874 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuAnimator::Hide()
extern "C"  void MenuAnimator_Hide_m1323916210 (MenuAnimator_t2112910832 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VideoBackgroundManager Vuforia.VideoBackgroundManager::get_Instance()
extern "C"  VideoBackgroundManager_t2198727358 * VideoBackgroundManager_get_Instance_m3877548062 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VideoBackgroundManager::get_VideoBackgroundEnabled()
extern "C"  bool VideoBackgroundManager_get_VideoBackgroundEnabled_m4107503792 (VideoBackgroundManager_t2198727358 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponentInChildren<Vuforia.BackgroundPlaneBehaviour>()
#define Component_GetComponentInChildren_TisBackgroundPlaneBehaviour_t3333547397_m2601826740(__this, method) ((  BackgroundPlaneBehaviour_t3333547397 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C"  Vector3_t3722313464  Transform_get_localPosition_m4234289348 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C"  float Mathf_Max_m3146388979 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<FadeObject>()
#define Component_GetComponent_TisFadeObject_t1880495183_m1857147924(__this, method) ((  FadeObject_t1880495183 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Boolean MenuAnimator::IsVisible()
extern "C"  bool MenuAnimator_IsVisible_m928022866 (MenuAnimator_t2112910832 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TapHandler::HandleTap()
extern "C"  void TapHandler_HandleTap_m1322678531 (TapHandler_t334234343 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponentInChildren<CameraSettings>()
#define Component_GetComponentInChildren_TisCameraSettings_t3152619780_m2209036194(__this, method) ((  CameraSettings_t3152619780 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method)
// System.Void CameraSettings::TriggerAutofocusEvent()
extern "C"  void CameraSettings_TriggerAutofocusEvent_m898525935 (CameraSettings_t3152619780 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuAnimator::Show()
extern "C"  void MenuAnimator_Show_m982174260 (MenuAnimator_t2112910832 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour> Vuforia.StateManager::GetTrackableBehaviours()
extern "C"  RuntimeObject* StateManager_GetTrackableBehaviours_m3331997292 (StateManager_t1982749557 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet> Vuforia.ObjectTracker::GetActiveDataSets()
extern "C"  RuntimeObject* ObjectTracker_GetActiveDataSets_m254019146 (ObjectTracker_t4177997237 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<Vuforia.DataSet>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToList_TisDataSet_t3286034874_m1984750843(__this /* static, unused */, p0, method) ((  List_1_t463142320 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m1551499789_gshared)(__this /* static, unused */, p0, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.DataSet>::get_Count()
#define List_1_get_Count_m3978133574(__this, method) ((  int32_t (*) (List_1_t463142320 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// !!0 System.Linq.Enumerable::ElementAt<Vuforia.DataSet>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
#define Enumerable_ElementAt_TisDataSet_t3286034874_m1304043092(__this /* static, unused */, p0, p1, method) ((  DataSet_t3286034874 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_ElementAt_TisRuntimeObject_m2579126540_gshared)(__this /* static, unused */, p0, p1, method)
// System.String Vuforia.DataSet::get_Path()
extern "C"  String_t* DataSet_get_Path_m176743276 (DataSet_t3286034874 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.String)
extern "C"  int32_t String_LastIndexOf_m2676535141 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32)
extern "C"  String_t* String_Substring_m2848979100 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray()
extern "C"  CharU5BU5D_t3528271667* String_ToCharArray_m1492846834 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::TrimEnd(System.Char[])
extern "C"  String_t* String_TrimEnd_m3824727301 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Vuforia.DataSet>::GetEnumerator()
#define List_1_GetEnumerator_m6144716(__this, method) ((  Enumerator_t2352386197  (*) (List_1_t463142320 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<Vuforia.DataSet>::get_Current()
#define Enumerator_get_Current_m1064371760(__this, method) ((  DataSet_t3286034874 * (*) (Enumerator_t2352386197 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<Vuforia.DataSet>::MoveNext()
#define Enumerator_MoveNext_m1234730920(__this, method) ((  bool (*) (Enumerator_t2352386197 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<Vuforia.DataSet>::Dispose()
#define Enumerator_Dispose_m1247034833(__this, method) ((  void (*) (Enumerator_t2352386197 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Boolean System.String::Contains(System.String)
extern "C"  bool String_Contains_m1147431944 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::RegisterVuforiaInitializedCallback(System.Action)
extern "C"  void VuforiaARController_RegisterVuforiaInitializedCallback_m948457393 (VuforiaARController_t1876945237 * __this, Action_t1264377477 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::UnregisterVuforiaInitializedCallback(System.Action)
extern "C"  void VuforiaARController_UnregisterVuforiaInitializedCallback_m1653245485 (VuforiaARController_t1876945237 * __this, Action_t1264377477 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::FindObjectOfType<BlackMaskBehaviour>()
#define Object_FindObjectOfType_TisBlackMaskBehaviour_t3514099953_m1811966288(__this /* static, unused */, method) ((  BlackMaskBehaviour_t3514099953 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m1542987838_gshared)(__this /* static, unused */, method)
// System.Void TransitionManager::SetBlackMaskVisible(System.Boolean,System.Single)
extern "C"  void TransitionManager_SetBlackMaskVisible_m2346041137 (TransitionManager_t3900140235 * __this, bool ___visible0, float ___fadeFactor1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VideoBackgroundManager::SetVideoBackgroundEnabled(System.Boolean)
extern "C"  void VideoBackgroundManager_SetVideoBackgroundEnabled_m2132418493 (VideoBackgroundManager_t2198727358 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.MixedRealityController/Mode TransitionManager::GetMixedRealityMode()
extern "C"  int32_t TransitionManager_GetMixedRealityMode_m836765050 (TransitionManager_t3900140235 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.MixedRealityController Vuforia.MixedRealityController::get_Instance()
extern "C"  MixedRealityController_t13217384 * MixedRealityController_get_Instance_m2804694100 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MixedRealityController::SetMode(Vuforia.MixedRealityController/Mode)
extern "C"  bool MixedRealityController_SetMode_m611063014 (MixedRealityController_t13217384 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TransitionManager::UpdateVisibleObjects()
extern "C"  void TransitionManager_UpdateVisibleObjects_m3329821487 (TransitionManager_t3900140235 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
extern "C"  float Time_get_realtimeSinceStartup_m3141794964 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean TransitionManager::IsVideoBackgroundRenderingEnabled()
extern "C"  bool TransitionManager_IsVideoBackgroundRenderingEnabled_m1119413015 (TransitionManager_t3900140235 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean TransitionManager::get_InAR()
extern "C"  bool TransitionManager_get_InAR_m1084650543 (TransitionManager_t3900140235 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TransitionManager::ActivateDatasets(System.Boolean)
extern "C"  void TransitionManager_ActivateDatasets_m1018868641 (TransitionManager_t3900140235 * __this, bool ___enableDataset0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::SmoothStep(System.Single,System.Single,System.Single)
extern "C"  float Mathf_SmoothStep_m2878822371 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void BlackMaskBehaviour::SetFadeFactor(System.Single)
extern "C"  void BlackMaskBehaviour_SetFadeFactor_m3654852777 (BlackMaskBehaviour_t3514099953 * __this, float ___tf0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform TransitionManager::GetCameraRigRoot()
extern "C"  Transform_t3600365921 * TransitionManager_GetCameraRigRoot_m1570019008 (TransitionManager_t3900140235 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Renderer::get_enabled()
extern "C"  bool Renderer_get_enabled_m3482452518 (Renderer_t2627027031 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaBehaviour Vuforia.VuforiaBehaviour::get_Instance()
extern "C"  VuforiaBehaviour_t2151848540 * VuforiaBehaviour_get_Instance_m214402642 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.DigitalEyewearARController::get_CentralAnchorPoint()
extern "C"  Transform_t3600365921 * DigitalEyewearARController_get_CentralAnchorPoint_m2484323849 (DigitalEyewearARController_t1054226036 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_root()
extern "C"  Transform_t3600365921 * Transform_get_root_m2450402596 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::FindObjectOfType<TransitionManager>()
#define Object_FindObjectOfType_TisTransitionManager_t3900140235_m18610529(__this /* static, unused */, method) ((  TransitionManager_t3900140235 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m1542987838_gshared)(__this /* static, unused */, method)
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
extern "C"  void Renderer_set_material_m1157964140 (Renderer_t2627027031 * __this, Material_t340375123 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Ray__ctor_m168149494 (Ray_t3785851493 * __this, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C"  bool Physics_Raycast_m1743768310 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  p0, RaycastHit_t1056001966 * p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C"  Collider_t1773347010 * RaycastHit_get_collider_m1464180279 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ViewTrigger::set_Focused(System.Boolean)
extern "C"  void ViewTrigger_set_Focused_m3431439488 (ViewTrigger_t2398860653 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean ViewTrigger::get_Focused()
extern "C"  bool ViewTrigger_get_Focused_m3842531336 (ViewTrigger_t2398860653 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ViewTrigger::UpdateMaterials(System.Boolean)
extern "C"  void ViewTrigger_UpdateMaterials_m540877782 (ViewTrigger_t2398860653 * __this, bool ___focused0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TransitionManager::Play(System.Boolean)
extern "C"  void TransitionManager_Play_m1310268232 (TransitionManager_t3900140235 * __this, bool ___reverse0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ViewTrigger::ResetAfter(System.Single)
extern "C"  RuntimeObject* ViewTrigger_ResetAfter_m1577891685 (ViewTrigger_t2398860653 * __this, float ___seconds0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>()
#define Component_GetComponentsInChildren_TisRenderer_t2627027031_m2677127880(__this, method) ((  RendererU5BU5D_t3210418286* (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1664944732_gshared)(__this, method)
// UnityEngine.Shader UnityEngine.Material::get_shader()
extern "C"  Shader_t4151988712 * Material_get_shader_m1331119247 (Material_t340375123 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String)
extern "C"  bool String_Equals_m2270643605 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ViewTrigger/<ResetAfter>c__Iterator0::.ctor()
extern "C"  void U3CResetAfterU3Ec__Iterator0__ctor_m1134785442 (U3CResetAfterU3Ec__Iterator0_t4017133920 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void AboutManager::.ctor()
extern "C"  void AboutManager__ctor_m170845223 (AboutManager_t2961629990 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AboutManager::OnStartFullScreen(System.Boolean)
extern "C"  void AboutManager_OnStartFullScreen_m428894392 (AboutManager_t2961629990 * __this, bool ___willRunFullScreen0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AboutManager_OnStartFullScreen_m428894392_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___willRunFullScreen0;
		IL2CPP_RUNTIME_CLASS_INIT(TransitionManager_t3900140235_il2cpp_TypeInfo_var);
		((TransitionManager_t3900140235_StaticFields*)il2cpp_codegen_static_fields_for(TransitionManager_t3900140235_il2cpp_TypeInfo_var))->set_isFullScreenMode_8(L_0);
		AboutManager_LoadNextScene_m2149339385(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AboutManager::LoadNextScene()
extern "C"  void AboutManager_LoadNextScene_m2149339385 (AboutManager_t2961629990 * __this, const RuntimeMethod* method)
{
	Scene_t2348375561  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Scene_t2348375561  L_0 = SceneManager_GetActiveScene_m1825203488(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Scene_get_buildIndex_m270272723((&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m3463216446(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void AboutManager::Start()
extern "C"  void AboutManager_Start_m4010451457 (AboutManager_t2961629990 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AboutManager_Start_m4010451457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		ButtonU5BU5D_t2297175928* L_0 = Object_FindObjectsOfType_TisButton_t4055032469_m3637543179(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectsOfType_TisButton_t4055032469_m3637543179_RuntimeMethod_var);
		__this->set_buttons_3(L_0);
		AboutManager_UpdateAboutText_m3813400252(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AboutManager::Update()
extern "C"  void AboutManager_Update_m2786621989 (AboutManager_t2961629990 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void AboutManager::LateUpdate()
extern "C"  void AboutManager_LateUpdate_m3441262838 (AboutManager_t2961629990 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AboutManager_LateUpdate_m3441262838_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = XRSettings_get_enabled_m2032436980(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral894969387, /*hidden argument*/NULL);
		XRSettings_set_enabled_m575494292(NULL /*static, unused*/, (bool)1, /*hidden argument*/NULL);
		ButtonU5BU5D_t2297175928* L_1 = __this->get_buttons_3();
		NullCheck(L_1);
		int32_t L_2 = 1;
		Button_t4055032469 * L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		bool L_4 = XRSettings_get_enabled_m2032436980(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		Selectable_set_interactable_m3105888815(L_3, L_4, /*hidden argument*/NULL);
		bool L_5 = XRSettings_get_enabled_m2032436980(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		AboutManager_UpdateAboutText_m3813400252(__this, /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.Void AboutManager::UpdateAboutText()
extern "C"  void AboutManager_UpdateAboutText_m3813400252 (AboutManager_t2961629990 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AboutManager_UpdateAboutText_m3813400252_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B8_0 = NULL;
	{
		Text_t1901882714 * L_0 = __this->get_aboutText_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaUnity_t1788908542_il2cpp_TypeInfo_var);
		String_t* L_2 = VuforiaUnity_GetVuforiaLibraryVersion_m2580526827(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = Application_get_unityVersion_m1068543125(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntime_t1949122020_il2cpp_TypeInfo_var);
		VuforiaRuntime_t1949122020 * L_4 = VuforiaRuntime_get_Instance_m1058251676(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = VuforiaRuntime_get_HasInitialized_m185170626(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		G_B5_0 = _stringLiteral3072673938;
		goto IL_003b;
	}

IL_0036:
	{
		G_B5_0 = _stringLiteral4262463051;
	}

IL_003b:
	{
		V_2 = G_B5_0;
		bool L_6 = XRSettings_get_enabled_m2032436980(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_7 = XRSettings_get_loadedDeviceName_m2020127682(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral142579402, L_7, _stringLiteral2642543365, /*hidden argument*/NULL);
		G_B8_0 = L_8;
		goto IL_0064;
	}

IL_005f:
	{
		G_B8_0 = _stringLiteral1909641646;
	}

IL_0064:
	{
		V_3 = G_B8_0;
		StringU5BU5D_t1281789340* L_9 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9)));
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral3072566615);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3072566615);
		StringU5BU5D_t1281789340* L_10 = L_9;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_11);
		StringU5BU5D_t1281789340* L_12 = L_10;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral850093702);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral850093702);
		StringU5BU5D_t1281789340* L_13 = L_12;
		String_t* L_14 = V_1;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_14);
		StringU5BU5D_t1281789340* L_15 = L_13;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral1718486736);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1718486736);
		StringU5BU5D_t1281789340* L_16 = L_15;
		String_t* L_17 = V_2;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_17);
		StringU5BU5D_t1281789340* L_18 = L_16;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral903581647);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral903581647);
		StringU5BU5D_t1281789340* L_19 = L_18;
		String_t* L_20 = V_3;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_20);
		StringU5BU5D_t1281789340* L_21 = L_19;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral1539352067);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral1539352067);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m1809518182(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		Text_t1901882714 * L_23 = __this->get_aboutText_2();
		String_t* L_24 = V_4;
		NullCheck(L_23);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_24);
		String_t* L_25 = V_0;
		String_t* L_26 = V_1;
		String_t* L_27 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral3223883587, L_25, _stringLiteral509717202, L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
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
// System.Void AboutScreen::.ctor()
extern "C"  void AboutScreen__ctor_m346556219 (AboutScreen_t2183797299 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AboutScreen::OnStartAR()
extern "C"  void AboutScreen_OnStartAR_m2896384759 (AboutScreen_t2183797299 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AboutScreen_OnStartAR_m2896384759_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1518049465, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AboutScreen::Update()
extern "C"  void AboutScreen_Update_m1006106731 (AboutScreen_t2183797299 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AboutScreen_Update_m1006106731_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyUp_m2808015270(NULL /*static, unused*/, ((int32_t)13), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		AboutScreen_OnStartAR_m2896384759(__this, /*hidden argument*/NULL);
		goto IL_003d;
	}

IL_0017:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyUp_m2808015270(NULL /*static, unused*/, ((int32_t)330), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		AboutScreen_OnStartAR_m2896384759(__this, /*hidden argument*/NULL);
		goto IL_003d;
	}

IL_0031:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyUp_m2808015270(NULL /*static, unused*/, ((int32_t)27), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}

IL_003d:
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
// System.Void Astronaut::.ctor()
extern "C"  void Astronaut__ctor_m394844618 (Astronaut_t1874369735 * __this, const RuntimeMethod* method)
{
	{
		Augmentation__ctor_m362621642(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Astronaut::OnEnter()
extern "C"  void Astronaut_OnEnter_m1569468880 (Astronaut_t1874369735 * __this, const RuntimeMethod* method)
{
	{
		Augmentation_OnEnter_m744463222(__this, /*hidden argument*/NULL);
		Action_t1264377477 * L_0 = ((Augmentation_t2596699517 *)__this)->get_m_EvtOnEnter_2();
		NullCheck(L_0);
		Action_Invoke_m937035532(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Astronaut::OnExit()
extern "C"  void Astronaut_OnExit_m4067566376 (Astronaut_t1874369735 * __this, const RuntimeMethod* method)
{
	{
		Augmentation_OnExit_m971700158(__this, /*hidden argument*/NULL);
		DrillController_t3872647469 * L_0 = __this->get_m_Drill_9();
		NullCheck(L_0);
		L_0->set_m_IsDrilling_2((bool)0);
		Astronaut_set_IsWaving_m2086530614(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Astronaut::StartDrilling()
extern "C"  void Astronaut_StartDrilling_m3076404311 (Astronaut_t1874369735 * __this, const RuntimeMethod* method)
{
	{
		Astronaut_set_IsDrilling_m1001765503(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Astronaut::AnimEvt_ScaleUpDrill()
extern "C"  void Astronaut_AnimEvt_ScaleUpDrill_m2679101155 (Astronaut_t1874369735 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Astronaut_AnimEvt_ScaleUpDrill_m2679101155_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3739663615, /*hidden argument*/NULL);
		DrillController_t3872647469 * L_0 = __this->get_m_Drill_9();
		NullCheck(L_0);
		L_0->set_m_IsDrilling_2((bool)1);
		return;
	}
}
// System.Void Astronaut::AnimEvt_ScaleDownDrill()
extern "C"  void Astronaut_AnimEvt_ScaleDownDrill_m3488644721 (Astronaut_t1874369735 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Astronaut_AnimEvt_ScaleDownDrill_m3488644721_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3818128157, /*hidden argument*/NULL);
		DrillController_t3872647469 * L_0 = __this->get_m_Drill_9();
		NullCheck(L_0);
		L_0->set_m_IsDrilling_2((bool)0);
		return;
	}
}
// System.Void Astronaut::AnimEvt_PlayDrillEffect()
extern "C"  void Astronaut_AnimEvt_PlayDrillEffect_m3756976635 (Astronaut_t1874369735 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Astronaut_AnimEvt_PlayDrillEffect_m3756976635_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EmissionModule_t311448003  V_0;
	memset(&V_0, 0, sizeof(V_0));
	EmissionModule_t311448003  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3413064854, /*hidden argument*/NULL);
		ParticleSystem_t1800779281 * L_0 = __this->get_m_DrillEffectSmoke_10();
		NullCheck(L_0);
		EmissionModule_t311448003  L_1 = ParticleSystem_get_emission_m1034302947(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		EmissionModule_set_enabled_m353945573((&V_0), (bool)1, /*hidden argument*/NULL);
		ParticleSystem_t1800779281 * L_2 = __this->get_m_DrillEffectRocks_11();
		NullCheck(L_2);
		EmissionModule_t311448003  L_3 = ParticleSystem_get_emission_m1034302947(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		EmissionModule_set_enabled_m353945573((&V_1), (bool)1, /*hidden argument*/NULL);
		ParticleSystem_t1800779281 * L_4 = __this->get_m_DrillEffectSmoke_10();
		NullCheck(L_4);
		ParticleSystem_Play_m882713458(L_4, /*hidden argument*/NULL);
		ParticleSystem_t1800779281 * L_5 = __this->get_m_DrillEffectRocks_11();
		NullCheck(L_5);
		ParticleSystem_Play_m882713458(L_5, /*hidden argument*/NULL);
		RockPileController_t2893225296 * L_6 = __this->get_m_RockPile_12();
		NullCheck(L_6);
		RockPileController_FadeIn_m550595306(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Astronaut::AnimEvt_StopDrillEffect()
extern "C"  void Astronaut_AnimEvt_StopDrillEffect_m2350635108 (Astronaut_t1874369735 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Astronaut_AnimEvt_StopDrillEffect_m2350635108_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EmissionModule_t311448003  V_0;
	memset(&V_0, 0, sizeof(V_0));
	EmissionModule_t311448003  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral554646610, /*hidden argument*/NULL);
		ParticleSystem_t1800779281 * L_0 = __this->get_m_DrillEffectSmoke_10();
		NullCheck(L_0);
		EmissionModule_t311448003  L_1 = ParticleSystem_get_emission_m1034302947(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		EmissionModule_set_enabled_m353945573((&V_0), (bool)0, /*hidden argument*/NULL);
		ParticleSystem_t1800779281 * L_2 = __this->get_m_DrillEffectRocks_11();
		NullCheck(L_2);
		EmissionModule_t311448003  L_3 = ParticleSystem_get_emission_m1034302947(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		EmissionModule_set_enabled_m353945573((&V_1), (bool)0, /*hidden argument*/NULL);
		RockPileController_t2893225296 * L_4 = __this->get_m_RockPile_12();
		NullCheck(L_4);
		RockPileController_FadeOut_m3065701988(L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Astronaut::AnimEvt_StopWaving()
extern "C"  void Astronaut_AnimEvt_StopWaving_m1539524315 (Astronaut_t1874369735 * __this, const RuntimeMethod* method)
{
	{
		Astronaut_set_IsWaving_m2086530614(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Astronaut::AnimEvt_StartWaving()
extern "C"  void Astronaut_AnimEvt_StartWaving_m887706193 (Astronaut_t1874369735 * __this, const RuntimeMethod* method)
{
	{
		Astronaut_set_IsWaving_m2086530614(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Astronaut::get_IsDrilling()
extern "C"  bool Astronaut_get_IsDrilling_m3535295706 (Astronaut_t1874369735 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Astronaut_get_IsDrilling_m3535295706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = ((Augmentation_t2596699517 *)__this)->get_animator_4();
		NullCheck(L_0);
		bool L_1 = Animator_GetBool_m2865822416(L_0, _stringLiteral3194302366, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Astronaut::set_IsDrilling(System.Boolean)
extern "C"  void Astronaut_set_IsDrilling_m1001765503 (Astronaut_t1874369735 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Astronaut_set_IsDrilling_m1001765503_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = ((Augmentation_t2596699517 *)__this)->get_animator_4();
		bool L_1 = ___value0;
		NullCheck(L_0);
		Animator_SetBool_m234840832(L_0, _stringLiteral3194302366, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Astronaut::get_IsWaving()
extern "C"  bool Astronaut_get_IsWaving_m561973742 (Astronaut_t1874369735 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Astronaut_get_IsWaving_m561973742_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = ((Augmentation_t2596699517 *)__this)->get_animator_4();
		NullCheck(L_0);
		bool L_1 = Animator_GetBool_m2865822416(L_0, _stringLiteral1414324346, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Astronaut::set_IsWaving(System.Boolean)
extern "C"  void Astronaut_set_IsWaving_m2086530614 (Astronaut_t1874369735 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Astronaut_set_IsWaving_m2086530614_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = ((Augmentation_t2596699517 *)__this)->get_animator_4();
		bool L_1 = ___value0;
		NullCheck(L_0);
		Animator_SetBool_m234840832(L_0, _stringLiteral1414324346, L_1, /*hidden argument*/NULL);
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
// System.Void AstronautStateMachineBehaviour::.ctor()
extern "C"  void AstronautStateMachineBehaviour__ctor_m68215958 (AstronautStateMachineBehaviour_t3422698390 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AstronautStateMachineBehaviour__ctor_m68215958_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AugmentationStateMachineBehaviour_t3849818102_il2cpp_TypeInfo_var);
		AugmentationStateMachineBehaviour__ctor_m4199737316(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AstronautStateMachineBehaviour::DoStateEvent(UnityEngine.Animator,System.String)
extern "C"  void AstronautStateMachineBehaviour_DoStateEvent_m4030557946 (AstronautStateMachineBehaviour_t3422698390 * __this, Animator_t434523843 * ___animator0, String_t* ___methodName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AstronautStateMachineBehaviour_DoStateEvent_m4030557946_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Astronaut_t1874369735 * V_0 = NULL;
	Action_1_t2046837330 * V_1 = NULL;
	{
		Animator_t434523843 * L_0 = ___animator0;
		NullCheck(L_0);
		Astronaut_t1874369735 * L_1 = Component_GetComponent_TisAstronaut_t1874369735_m3770992714(L_0, /*hidden argument*/Component_GetComponent_TisAstronaut_t1874369735_m3770992714_RuntimeMethod_var);
		V_0 = L_1;
		Astronaut_t1874369735 * L_2 = V_0;
		String_t* L_3 = ___methodName1;
		Action_1_t2046837330 * L_4 = AugmentationStateMachineBehaviour_GetMethod_TisAstronaut_t1874369735_m4289488282(__this, L_2, L_3, /*hidden argument*/AugmentationStateMachineBehaviour_GetMethod_TisAstronaut_t1874369735_m4289488282_RuntimeMethod_var);
		V_1 = L_4;
		Action_1_t2046837330 * L_5 = V_1;
		Astronaut_t1874369735 * L_6 = V_0;
		NullCheck(L_5);
		Action_1_Invoke_m1045878271(L_5, L_6, /*hidden argument*/Action_1_Invoke_m1045878271_RuntimeMethod_var);
		return;
	}
}
// System.Type AstronautStateMachineBehaviour::GetTargetType()
extern "C"  Type_t * AstronautStateMachineBehaviour_GetTargetType_m2821986681 (AstronautStateMachineBehaviour_t3422698390 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AstronautStateMachineBehaviour_GetTargetType_m2821986681_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (Astronaut_t1874369735_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void AsyncSceneLoader::.ctor()
extern "C"  void AsyncSceneLoader__ctor_m4061046102 (AsyncSceneLoader_t621267272 * __this, const RuntimeMethod* method)
{
	{
		__this->set_loadingDelay_2((5.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AsyncSceneLoader::Start()
extern "C"  void AsyncSceneLoader_Start_m3052968032 (AsyncSceneLoader_t621267272 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_loadingDelay_2();
		RuntimeObject* L_1 = AsyncSceneLoader_LoadNextSceneAfter_m1751933459(__this, L_0, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator AsyncSceneLoader::LoadNextSceneAfter(System.Single)
extern "C"  RuntimeObject* AsyncSceneLoader_LoadNextSceneAfter_m1751933459 (AsyncSceneLoader_t621267272 * __this, float ___seconds0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AsyncSceneLoader_LoadNextSceneAfter_m1751933459_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170 * V_0 = NULL;
	{
		U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170 * L_0 = (U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170 *)il2cpp_codegen_object_new(U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170_il2cpp_TypeInfo_var);
		U3CLoadNextSceneAfterU3Ec__Iterator0__ctor_m1226795792(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170 * L_1 = V_0;
		float L_2 = ___seconds0;
		NullCheck(L_1);
		L_1->set_seconds_0(L_2);
		U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170 * L_3 = V_0;
		return L_3;
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
// System.Void AsyncSceneLoader/<LoadNextSceneAfter>c__Iterator0::.ctor()
extern "C"  void U3CLoadNextSceneAfterU3Ec__Iterator0__ctor_m1226795792 (U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean AsyncSceneLoader/<LoadNextSceneAfter>c__Iterator0::MoveNext()
extern "C"  bool U3CLoadNextSceneAfterU3Ec__Iterator0_MoveNext_m3855908786 (U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadNextSceneAfterU3Ec__Iterator0_MoveNext_m3855908786_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Scene_t2348375561  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_0061;
	}

IL_0021:
	{
		float L_2 = __this->get_seconds_0();
		WaitForSeconds_t1699091251 * L_3 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_3, L_2, /*hidden argument*/NULL);
		__this->set_U24current_1(L_3);
		bool L_4 = __this->get_U24disposing_2();
		if (L_4)
		{
			goto IL_0041;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0041:
	{
		goto IL_0063;
	}

IL_0046:
	{
		Scene_t2348375561  L_5 = SceneManager_GetActiveScene_m1825203488(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = Scene_get_buildIndex_m270272723((&V_1), /*hidden argument*/NULL);
		SceneManager_LoadScene_m3463216446(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)), /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_0061:
	{
		return (bool)0;
	}

IL_0063:
	{
		return (bool)1;
	}
}
// System.Object AsyncSceneLoader/<LoadNextSceneAfter>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CLoadNextSceneAfterU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1590379521 (U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object AsyncSceneLoader/<LoadNextSceneAfter>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CLoadNextSceneAfterU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1516849507 (U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void AsyncSceneLoader/<LoadNextSceneAfter>c__Iterator0::Dispose()
extern "C"  void U3CLoadNextSceneAfterU3Ec__Iterator0_Dispose_m2915084317 (U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void AsyncSceneLoader/<LoadNextSceneAfter>c__Iterator0::Reset()
extern "C"  void U3CLoadNextSceneAfterU3Ec__Iterator0_Reset_m3376656304 (U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadNextSceneAfterU3Ec__Iterator0_Reset_m3376656304_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CLoadNextSceneAfterU3Ec__Iterator0_Reset_m3376656304_RuntimeMethod_var);
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
// System.Void Augmentation::.ctor()
extern "C"  void Augmentation__ctor_m362621642 (Augmentation_t2596699517 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Augmentation__ctor_m362621642_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Augmentation_t2596699517 * G_B2_0 = NULL;
	Augmentation_t2596699517 * G_B1_0 = NULL;
	Augmentation_t2596699517 * G_B4_0 = NULL;
	Augmentation_t2596699517 * G_B3_0 = NULL;
	{
		Action_t1264377477 * L_0 = ((Augmentation_t2596699517_StaticFields*)il2cpp_codegen_static_fields_for(Augmentation_t2596699517_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_7();
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0019;
		}
	}
	{
		intptr_t L_1 = (intptr_t)Augmentation_U3Cm_EvtOnEnterU3Em__0_m2476492651_RuntimeMethod_var;
		Action_t1264377477 * L_2 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_2, NULL, L_1, /*hidden argument*/NULL);
		((Augmentation_t2596699517_StaticFields*)il2cpp_codegen_static_fields_for(Augmentation_t2596699517_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_7(L_2);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		Action_t1264377477 * L_3 = ((Augmentation_t2596699517_StaticFields*)il2cpp_codegen_static_fields_for(Augmentation_t2596699517_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_7();
		NullCheck(G_B2_0);
		G_B2_0->set_m_EvtOnEnter_2(L_3);
		Action_t1264377477 * L_4 = ((Augmentation_t2596699517_StaticFields*)il2cpp_codegen_static_fields_for(Augmentation_t2596699517_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_8();
		G_B3_0 = __this;
		if (L_4)
		{
			G_B4_0 = __this;
			goto IL_003c;
		}
	}
	{
		intptr_t L_5 = (intptr_t)Augmentation_U3Cm_EvtOnExitU3Em__1_m3929287321_RuntimeMethod_var;
		Action_t1264377477 * L_6 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_6, NULL, L_5, /*hidden argument*/NULL);
		((Augmentation_t2596699517_StaticFields*)il2cpp_codegen_static_fields_for(Augmentation_t2596699517_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1_8(L_6);
		G_B4_0 = G_B3_0;
	}

IL_003c:
	{
		Action_t1264377477 * L_7 = ((Augmentation_t2596699517_StaticFields*)il2cpp_codegen_static_fields_for(Augmentation_t2596699517_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_8();
		NullCheck(G_B4_0);
		G_B4_0->set_m_EvtOnExit_3(L_7);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Augmentation::Start()
extern "C"  void Augmentation_Start_m2586945440 (Augmentation_t2596699517 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Augmentation_Start_m2586945440_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = Component_GetComponent_TisAnimator_t434523843_m2351447238(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var);
		__this->set_animator_4(L_0);
		return;
	}
}
// System.Void Augmentation::Enable()
extern "C"  void Augmentation_Enable_m1555992381 (Augmentation_t2596699517 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Augmentation_Enable_m1555992381_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)1, /*hidden argument*/NULL);
		Animator_t434523843 * L_1 = __this->get_animator_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_005f;
		}
	}
	{
		RuntimeObject* L_3 = __this->get_waitCoroutine_6();
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_4 = __this->get_waitCoroutine_6();
		MonoBehaviour_StopCoroutine_m615723318(__this, L_4, /*hidden argument*/NULL);
	}

IL_0034:
	{
		intptr_t L_5 = (intptr_t)GetVirtualMethodInfo(__this, 6);
		Action_t1264377477 * L_6 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_6, __this, L_5, /*hidden argument*/NULL);
		RuntimeObject* L_7 = Augmentation_WaitForThen_m4086988269(__this, (1.0f), L_6, /*hidden argument*/NULL);
		__this->set_waitCoroutine_6(L_7);
		RuntimeObject* L_8 = __this->get_waitCoroutine_6();
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_8, /*hidden argument*/NULL);
	}

IL_005f:
	{
		return;
	}
}
// System.Void Augmentation::Disable()
extern "C"  void Augmentation_Disable_m1702586850 (Augmentation_t2596699517 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker0::Invoke(7 /* System.Void Augmentation::OnExit() */, __this);
		return;
	}
}
// System.Void Augmentation::Restore()
extern "C"  void Augmentation_Restore_m3188130895 (Augmentation_t2596699517 * __this, const RuntimeMethod* method)
{
	{
		Augmentation_Disable_m1702586850(__this, /*hidden argument*/NULL);
		Animator_t434523843 * L_0 = __this->get_animator_4();
		NullCheck(L_0);
		Animator_Rebind_m4018473738(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Augmentation::OnEnter()
extern "C"  void Augmentation_OnEnter_m744463222 (Augmentation_t2596699517 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Augmentation::OnExit()
extern "C"  void Augmentation_OnExit_m971700158 (Augmentation_t2596699517 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Augmentation_OnExit_m971700158_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_t1264377477 * L_0 = __this->get_m_EvtOnExit_3();
		NullCheck(L_0);
		Action_Invoke_m937035532(L_0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = Object_get_name_m4211327027(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral4265615363, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Augmentation::SetRenderersEnabled(System.Boolean)
extern "C"  void Augmentation_SetRenderersEnabled_m2414151497 (Augmentation_t2596699517 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Augmentation_SetRenderersEnabled_m2414151497_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t3210418286* V_0 = NULL;
	Renderer_t2627027031 * V_1 = NULL;
	RendererU5BU5D_t3210418286* V_2 = NULL;
	int32_t V_3 = 0;
	{
		RendererU5BU5D_t3210418286* L_0 = Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var);
		V_0 = L_0;
		RendererU5BU5D_t3210418286* L_1 = V_0;
		V_2 = L_1;
		V_3 = 0;
		goto IL_0020;
	}

IL_0011:
	{
		RendererU5BU5D_t3210418286* L_2 = V_2;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Renderer_t2627027031 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		Renderer_t2627027031 * L_6 = V_1;
		NullCheck(L_6);
		Renderer_set_enabled_m1727253150(L_6, (bool)1, /*hidden argument*/NULL);
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_8 = V_3;
		RendererU5BU5D_t3210418286* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_0011;
		}
	}
	{
		return;
	}
}
// System.Void Augmentation::SetCollidersEnabled(System.Boolean)
extern "C"  void Augmentation_SetCollidersEnabled_m2274333646 (Augmentation_t2596699517 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Augmentation_SetCollidersEnabled_m2274333646_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t4234922487* V_0 = NULL;
	Collider_t1773347010 * V_1 = NULL;
	ColliderU5BU5D_t4234922487* V_2 = NULL;
	int32_t V_3 = 0;
	{
		ColliderU5BU5D_t4234922487* L_0 = Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var);
		V_0 = L_0;
		ColliderU5BU5D_t4234922487* L_1 = V_0;
		V_2 = L_1;
		V_3 = 0;
		goto IL_0020;
	}

IL_0011:
	{
		ColliderU5BU5D_t4234922487* L_2 = V_2;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Collider_t1773347010 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		Collider_t1773347010 * L_6 = V_1;
		NullCheck(L_6);
		Collider_set_enabled_m1517463283(L_6, (bool)1, /*hidden argument*/NULL);
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_8 = V_3;
		ColliderU5BU5D_t4234922487* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_0011;
		}
	}
	{
		return;
	}
}
// System.Collections.IEnumerator Augmentation::WaitForThen(System.Single,System.Action)
extern "C"  RuntimeObject* Augmentation_WaitForThen_m4086988269 (Augmentation_t2596699517 * __this, float ___waitSeconds0, Action_t1264377477 * ___action1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Augmentation_WaitForThen_m4086988269_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CWaitForThenU3Ec__Iterator0_t751251344 * V_0 = NULL;
	{
		U3CWaitForThenU3Ec__Iterator0_t751251344 * L_0 = (U3CWaitForThenU3Ec__Iterator0_t751251344 *)il2cpp_codegen_object_new(U3CWaitForThenU3Ec__Iterator0_t751251344_il2cpp_TypeInfo_var);
		U3CWaitForThenU3Ec__Iterator0__ctor_m878806277(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CWaitForThenU3Ec__Iterator0_t751251344 * L_1 = V_0;
		float L_2 = ___waitSeconds0;
		NullCheck(L_1);
		L_1->set_waitSeconds_0(L_2);
		U3CWaitForThenU3Ec__Iterator0_t751251344 * L_3 = V_0;
		Action_t1264377477 * L_4 = ___action1;
		NullCheck(L_3);
		L_3->set_action_1(L_4);
		U3CWaitForThenU3Ec__Iterator0_t751251344 * L_5 = V_0;
		return L_5;
	}
}
// System.Void Augmentation::<m_EvtOnEnter>m__0()
extern "C"  void Augmentation_U3Cm_EvtOnEnterU3Em__0_m2476492651 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Augmentation::<m_EvtOnExit>m__1()
extern "C"  void Augmentation_U3Cm_EvtOnExitU3Em__1_m3929287321 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
// System.Void Augmentation/<WaitForThen>c__Iterator0::.ctor()
extern "C"  void U3CWaitForThenU3Ec__Iterator0__ctor_m878806277 (U3CWaitForThenU3Ec__Iterator0_t751251344 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Augmentation/<WaitForThen>c__Iterator0::MoveNext()
extern "C"  bool U3CWaitForThenU3Ec__Iterator0_MoveNext_m1871452942 (U3CWaitForThenU3Ec__Iterator0_t751251344 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWaitForThenU3Ec__Iterator0_MoveNext_m1871452942_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_0058;
	}

IL_0021:
	{
		float L_2 = __this->get_waitSeconds_0();
		WaitForSeconds_t1699091251 * L_3 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_3, L_2, /*hidden argument*/NULL);
		__this->set_U24current_2(L_3);
		bool L_4 = __this->get_U24disposing_3();
		if (L_4)
		{
			goto IL_0041;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_0041:
	{
		goto IL_005a;
	}

IL_0046:
	{
		Action_t1264377477 * L_5 = __this->get_action_1();
		NullCheck(L_5);
		Action_Invoke_m937035532(L_5, /*hidden argument*/NULL);
		__this->set_U24PC_4((-1));
	}

IL_0058:
	{
		return (bool)0;
	}

IL_005a:
	{
		return (bool)1;
	}
}
// System.Object Augmentation/<WaitForThen>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CWaitForThenU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3298835605 (U3CWaitForThenU3Ec__Iterator0_t751251344 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object Augmentation/<WaitForThen>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CWaitForThenU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3742196468 (U3CWaitForThenU3Ec__Iterator0_t751251344 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void Augmentation/<WaitForThen>c__Iterator0::Dispose()
extern "C"  void U3CWaitForThenU3Ec__Iterator0_Dispose_m2815530859 (U3CWaitForThenU3Ec__Iterator0_t751251344 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void Augmentation/<WaitForThen>c__Iterator0::Reset()
extern "C"  void U3CWaitForThenU3Ec__Iterator0_Reset_m1671170136 (U3CWaitForThenU3Ec__Iterator0_t751251344 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWaitForThenU3Ec__Iterator0_Reset_m1671170136_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CWaitForThenU3Ec__Iterator0_Reset_m1671170136_RuntimeMethod_var);
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
// System.Void AugmentationStateMachineBehaviour::.ctor()
extern "C"  void AugmentationStateMachineBehaviour__ctor_m4199737316 (AugmentationStateMachineBehaviour_t3849818102 * __this, const RuntimeMethod* method)
{
	{
		StateMachineBehaviour__ctor_m3367380209(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AugmentationStateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C"  void AugmentationStateMachineBehaviour_OnStateEnter_m2303877214 (AugmentationStateMachineBehaviour_t3849818102 * __this, Animator_t434523843 * ___animator0, AnimatorStateInfo_t509032636  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AugmentationStateMachineBehaviour_OnStateEnter_m2303877214_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = ___animator0;
		AnimatorStateInfo_t509032636  L_1 = ___stateInfo1;
		int32_t L_2 = ___layerIndex2;
		StateMachineBehaviour_OnStateEnter_m2782683618(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		String_t* L_3 = __this->get_m_OnEnterMethodName_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		Animator_t434523843 * L_5 = ___animator0;
		String_t* L_6 = __this->get_m_OnEnterMethodName_2();
		VirtActionInvoker2< Animator_t434523843 *, String_t* >::Invoke(7 /* System.Void AugmentationStateMachineBehaviour::DoStateEvent(UnityEngine.Animator,System.String) */, __this, L_5, L_6);
	}

IL_0026:
	{
		return;
	}
}
// System.Void AugmentationStateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C"  void AugmentationStateMachineBehaviour_OnStateExit_m3832066308 (AugmentationStateMachineBehaviour_t3849818102 * __this, Animator_t434523843 * ___animator0, AnimatorStateInfo_t509032636  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AugmentationStateMachineBehaviour_OnStateExit_m3832066308_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = ___animator0;
		AnimatorStateInfo_t509032636  L_1 = ___stateInfo1;
		int32_t L_2 = ___layerIndex2;
		StateMachineBehaviour_OnStateExit_m3287999912(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		String_t* L_3 = __this->get_m_OnExitMethodName_4();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		Animator_t434523843 * L_5 = ___animator0;
		String_t* L_6 = __this->get_m_OnExitMethodName_4();
		VirtActionInvoker2< Animator_t434523843 *, String_t* >::Invoke(7 /* System.Void AugmentationStateMachineBehaviour::DoStateEvent(UnityEngine.Animator,System.String) */, __this, L_5, L_6);
	}

IL_0026:
	{
		return;
	}
}
// System.Void AugmentationStateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C"  void AugmentationStateMachineBehaviour_OnStateUpdate_m1463826790 (AugmentationStateMachineBehaviour_t3849818102 * __this, Animator_t434523843 * ___animator0, AnimatorStateInfo_t509032636  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AugmentationStateMachineBehaviour_OnStateUpdate_m1463826790_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = ___animator0;
		AnimatorStateInfo_t509032636  L_1 = ___stateInfo1;
		int32_t L_2 = ___layerIndex2;
		StateMachineBehaviour_OnStateUpdate_m400934639(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		String_t* L_3 = __this->get_m_OnUpdateMethodName_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		Animator_t434523843 * L_5 = ___animator0;
		String_t* L_6 = __this->get_m_OnUpdateMethodName_3();
		VirtActionInvoker2< Animator_t434523843 *, String_t* >::Invoke(7 /* System.Void AugmentationStateMachineBehaviour::DoStateEvent(UnityEngine.Animator,System.String) */, __this, L_5, L_6);
	}

IL_0026:
	{
		return;
	}
}
// System.Void AugmentationStateMachineBehaviour::.cctor()
extern "C"  void AugmentationStateMachineBehaviour__cctor_m121416862 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AugmentationStateMachineBehaviour__cctor_m121416862_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3417996176 * L_0 = (Dictionary_2_t3417996176 *)il2cpp_codegen_object_new(Dictionary_2_t3417996176_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3885421510(L_0, /*hidden argument*/Dictionary_2__ctor_m3885421510_RuntimeMethod_var);
		((AugmentationStateMachineBehaviour_t3849818102_StaticFields*)il2cpp_codegen_static_fields_for(AugmentationStateMachineBehaviour_t3849818102_il2cpp_TypeInfo_var))->set_cachedDelegates_5(L_0);
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
// System.Void Autofocus::.ctor()
extern "C"  void Autofocus__ctor_m1631543291 (Autofocus_t1688188087 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Autofocus::Start()
extern "C"  void Autofocus_Start_m88897297 (Autofocus_t1688188087 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Autofocus_Start_m88897297_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VuforiaARController_t1876945237 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaARController_t1876945237_il2cpp_TypeInfo_var);
		VuforiaARController_t1876945237 * L_0 = VuforiaARController_get_Instance_m1100644214(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		VuforiaARController_t1876945237 * L_1 = V_0;
		intptr_t L_2 = (intptr_t)Autofocus_OnVuforiaStarted_m1997509596_RuntimeMethod_var;
		Action_t1264377477 * L_3 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		VuforiaARController_RegisterVuforiaStartedCallback_m3258152770(L_1, L_3, /*hidden argument*/NULL);
		VuforiaARController_t1876945237 * L_4 = V_0;
		intptr_t L_5 = (intptr_t)Autofocus_OnPaused_m1840425301_RuntimeMethod_var;
		Action_1_t269755560 * L_6 = (Action_1_t269755560 *)il2cpp_codegen_object_new(Action_1_t269755560_il2cpp_TypeInfo_var);
		Action_1__ctor_m2079027267(L_6, __this, L_5, /*hidden argument*/Action_1__ctor_m2079027267_RuntimeMethod_var);
		NullCheck(L_4);
		VuforiaARController_RegisterOnPauseCallback_m1833237148(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Autofocus::Update()
extern "C"  void Autofocus_Update_m3410805624 (Autofocus_t1688188087 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Autofocus_Update_m3410805624_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonUp_m2924350851(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_1 = Autofocus_TriggerAutofocus_m662759096(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_1, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void Autofocus::OnVuforiaStarted()
extern "C"  void Autofocus_OnVuforiaStarted_m1997509596 (Autofocus_t1688188087 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Autofocus_OnVuforiaStarted_m1997509596_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_0 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		CameraDevice_SetFocusMode_m2424803588(L_0, 2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Autofocus::OnPaused(System.Boolean)
extern "C"  void Autofocus_OnPaused_m1840425301 (Autofocus_t1688188087 * __this, bool ___paused0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Autofocus_OnPaused_m1840425301_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___paused0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_1 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		CameraDevice_SetFocusMode_m2424803588(L_1, 2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Collections.IEnumerator Autofocus::TriggerAutofocus()
extern "C"  RuntimeObject* Autofocus_TriggerAutofocus_m662759096 (Autofocus_t1688188087 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Autofocus_TriggerAutofocus_m662759096_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CTriggerAutofocusU3Ec__Iterator0_t1955189839 * V_0 = NULL;
	{
		U3CTriggerAutofocusU3Ec__Iterator0_t1955189839 * L_0 = (U3CTriggerAutofocusU3Ec__Iterator0_t1955189839 *)il2cpp_codegen_object_new(U3CTriggerAutofocusU3Ec__Iterator0_t1955189839_il2cpp_TypeInfo_var);
		U3CTriggerAutofocusU3Ec__Iterator0__ctor_m3130236765(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CTriggerAutofocusU3Ec__Iterator0_t1955189839 * L_1 = V_0;
		return L_1;
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
// System.Void Autofocus/<TriggerAutofocus>c__Iterator0::.ctor()
extern "C"  void U3CTriggerAutofocusU3Ec__Iterator0__ctor_m3130236765 (U3CTriggerAutofocusU3Ec__Iterator0_t1955189839 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Autofocus/<TriggerAutofocus>c__Iterator0::MoveNext()
extern "C"  bool U3CTriggerAutofocusU3Ec__Iterator0_MoveNext_m1853780646 (U3CTriggerAutofocusU3Ec__Iterator0_t1955189839 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTriggerAutofocusU3Ec__Iterator0_MoveNext_m1853780646_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_2();
		V_0 = L_0;
		__this->set_U24PC_2((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0051;
			}
		}
	}
	{
		goto IL_0064;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_2 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		CameraDevice_SetFocusMode_m2424803588(L_2, 1, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_3 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_3, (2.0f), /*hidden argument*/NULL);
		__this->set_U24current_0(L_3);
		bool L_4 = __this->get_U24disposing_1();
		if (L_4)
		{
			goto IL_004c;
		}
	}
	{
		__this->set_U24PC_2(1);
	}

IL_004c:
	{
		goto IL_0066;
	}

IL_0051:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_5 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		CameraDevice_SetFocusMode_m2424803588(L_5, 2, /*hidden argument*/NULL);
		__this->set_U24PC_2((-1));
	}

IL_0064:
	{
		return (bool)0;
	}

IL_0066:
	{
		return (bool)1;
	}
}
// System.Object Autofocus/<TriggerAutofocus>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CTriggerAutofocusU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1253293778 (U3CTriggerAutofocusU3Ec__Iterator0_t1955189839 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_0();
		return L_0;
	}
}
// System.Object Autofocus/<TriggerAutofocus>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CTriggerAutofocusU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3005611002 (U3CTriggerAutofocusU3Ec__Iterator0_t1955189839 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_0();
		return L_0;
	}
}
// System.Void Autofocus/<TriggerAutofocus>c__Iterator0::Dispose()
extern "C"  void U3CTriggerAutofocusU3Ec__Iterator0_Dispose_m3742907621 (U3CTriggerAutofocusU3Ec__Iterator0_t1955189839 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_1((bool)1);
		__this->set_U24PC_2((-1));
		return;
	}
}
// System.Void Autofocus/<TriggerAutofocus>c__Iterator0::Reset()
extern "C"  void U3CTriggerAutofocusU3Ec__Iterator0_Reset_m383134278 (U3CTriggerAutofocusU3Ec__Iterator0_t1955189839 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTriggerAutofocusU3Ec__Iterator0_Reset_m383134278_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CTriggerAutofocusU3Ec__Iterator0_Reset_m383134278_RuntimeMethod_var);
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
// System.Void BackToAbout::.ctor()
extern "C"  void BackToAbout__ctor_m1976489193 (BackToAbout_t1188110921 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BackToAbout::Start()
extern "C"  void BackToAbout_Start_m2983124003 (BackToAbout_t1188110921 * __this, const RuntimeMethod* method)
{
	{
		__this->set_mTapCount_3(0);
		__this->set_mTimeSinceLastTap_4((0.0f));
		return;
	}
}
// System.Void BackToAbout::Update()
extern "C"  void BackToAbout_Update_m2112129809 (BackToAbout_t1188110921 * __this, const RuntimeMethod* method)
{
	{
		BackToAbout_HandleTap_m3559493796(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BackToAbout::GoToAboutPage()
extern "C"  void BackToAbout_GoToAboutPage_m4071111343 (BackToAbout_t1188110921 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BackToAbout_GoToAboutPage_m4071111343_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1473361323, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BackToAbout::HandleTap()
extern "C"  void BackToAbout_HandleTap_m3559493796 (BackToAbout_t1188110921 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BackToAbout_HandleTap_m3559493796_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_mTapCount_3();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0045;
		}
	}
	{
		float L_1 = __this->get_mTimeSinceLastTap_4();
		float L_2 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_mTimeSinceLastTap_4(((float)il2cpp_codegen_add((float)L_1, (float)L_2)));
		float L_3 = __this->get_mTimeSinceLastTap_4();
		if ((!(((float)L_3) > ((float)(0.5f)))))
		{
			goto IL_0040;
		}
	}
	{
		__this->set_mTapCount_3(0);
		__this->set_mTimeSinceLastTap_4((0.0f));
	}

IL_0040:
	{
		goto IL_0069;
	}

IL_0045:
	{
		int32_t L_4 = __this->get_mTapCount_3();
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0069;
		}
	}
	{
		VirtActionInvoker0::Invoke(4 /* System.Void BackToAbout::OnDoubleTap() */, __this);
		__this->set_mTimeSinceLastTap_4((0.0f));
		__this->set_mTapCount_3(0);
	}

IL_0069:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_5 = Input_GetMouseButtonUp_m2924350851(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_6 = __this->get_mTapCount_3();
		__this->set_mTapCount_3(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
	}

IL_0082:
	{
		return;
	}
}
// System.Void BackToAbout::OnDoubleTap()
extern "C"  void BackToAbout_OnDoubleTap_m1264626533 (BackToAbout_t1188110921 * __this, const RuntimeMethod* method)
{
	{
		BackToAbout_GoToAboutPage_m4071111343(__this, /*hidden argument*/NULL);
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
// System.Void BlackMaskBehaviour::.ctor()
extern "C"  void BlackMaskBehaviour__ctor_m937919040 (BlackMaskBehaviour_t3514099953 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BlackMaskBehaviour::Start()
extern "C"  void BlackMaskBehaviour_Start_m1261749882 (BlackMaskBehaviour_t3514099953 * __this, const RuntimeMethod* method)
{
	{
		__this->set_mFadeFactor_2((0.0f));
		return;
	}
}
// System.Void BlackMaskBehaviour::Update()
extern "C"  void BlackMaskBehaviour_Update_m1296670792 (BlackMaskBehaviour_t3514099953 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BlackMaskBehaviour_Update_m1296670792_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Camera_t4157153871 * V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Matrix4x4_t1817901843  V_3;
	memset(&V_3, 0, sizeof(V_3));
	float V_4 = 0.0f;
	Matrix4x4_t1817901843  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Renderer_t2627027031 * V_6 = NULL;
	Renderer_t2627027031 * G_B4_0 = NULL;
	Renderer_t2627027031 * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	Renderer_t2627027031 * G_B5_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(DigitalEyewearARController_t1054226036_il2cpp_TypeInfo_var);
		DigitalEyewearARController_t1054226036 * L_0 = DigitalEyewearARController_get_Instance_m3573866503(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Camera_t4157153871 * L_1 = DigitalEyewearARController_get_PrimaryCamera_m3122713263(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Camera_t4157153871 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral820587791, /*hidden argument*/NULL);
		return;
	}

IL_0022:
	{
		Camera_t4157153871 * L_4 = V_0;
		NullCheck(L_4);
		float L_5 = Camera_get_nearClipPlane_m837839537(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Camera_t4157153871 * L_6 = V_0;
		NullCheck(L_6);
		Matrix4x4_t1817901843  L_7 = Camera_get_projectionMatrix_m667780853(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		float L_8 = Matrix4x4_get_Item_m134152955((&V_3), 0, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_9 = atanf(((float)((float)(1.0f)/(float)L_8)));
		V_2 = ((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_9));
		Camera_t4157153871 * L_10 = V_0;
		NullCheck(L_10);
		Matrix4x4_t1817901843  L_11 = Camera_get_projectionMatrix_m667780853(L_10, /*hidden argument*/NULL);
		V_5 = L_11;
		float L_12 = Matrix4x4_get_Item_m134152955((&V_5), 1, 1, /*hidden argument*/NULL);
		float L_13 = atanf(((float)((float)(1.0f)/(float)L_12)));
		V_4 = ((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_13));
		Transform_t3600365921 * L_14 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_15 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_16 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, (1.05f), L_15, /*hidden argument*/NULL);
		float L_17 = V_1;
		Vector3_t3722313464  L_18 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_localPosition_m4128471975(L_14, L_18, /*hidden argument*/NULL);
		Transform_t3600365921 * L_19 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_20 = V_1;
		float L_21 = V_2;
		float L_22 = tanf(((float)((float)L_21/(float)(2.0f))));
		float L_23 = V_1;
		float L_24 = V_4;
		float L_25 = tanf(((float)((float)L_24/(float)(2.0f))));
		Vector3_t3722313464  L_26;
		memset(&L_26, 0, sizeof(L_26));
		Vector3__ctor_m3353183577((&L_26), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(16.0f), (float)L_20)), (float)L_22)), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(16.0f), (float)L_23)), (float)L_25)), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_localScale_m3053443106(L_19, L_26, /*hidden argument*/NULL);
		Renderer_t2627027031 * L_27 = Component_GetComponent_TisRenderer_t2627027031_m2222376672(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m2222376672_RuntimeMethod_var);
		V_6 = L_27;
		Renderer_t2627027031 * L_28 = V_6;
		NullCheck(L_28);
		Material_t340375123 * L_29 = Renderer_get_material_m4171603682(L_28, /*hidden argument*/NULL);
		float L_30 = __this->get_mFadeFactor_2();
		NullCheck(L_29);
		Material_SetFloat_m3226510453(L_29, _stringLiteral2373215901, L_30, /*hidden argument*/NULL);
		Renderer_t2627027031 * L_31 = V_6;
		float L_32 = __this->get_mFadeFactor_2();
		G_B3_0 = L_31;
		if ((!(((float)L_32) > ((float)(0.02f)))))
		{
			G_B4_0 = L_31;
			goto IL_010d;
		}
	}
	{
		float L_33 = __this->get_mFadeFactor_2();
		G_B5_0 = ((((float)L_33) < ((float)(0.98f)))? 1 : 0);
		G_B5_1 = G_B3_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
	}

IL_010e:
	{
		NullCheck(G_B5_1);
		Renderer_set_enabled_m1727253150(G_B5_1, (bool)G_B5_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BlackMaskBehaviour::SetFadeFactor(System.Single)
extern "C"  void BlackMaskBehaviour_SetFadeFactor_m3654852777 (BlackMaskBehaviour_t3514099953 * __this, float ___tf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BlackMaskBehaviour_SetFadeFactor_m3654852777_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___tf0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_mFadeFactor_2(L_1);
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
// System.Void Button3D::.ctor()
extern "C"  void Button3D__ctor_m135420387 (Button3D_t3014406560 * __this, const RuntimeMethod* method)
{
	{
		__this->set_width_2((0.2f));
		__this->set_height_3((0.1f));
		__this->set_fadeDuration_4((1.6f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Button3D::Update()
extern "C"  void Button3D_Update_m2852069781 (Button3D_t3014406560 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Button3D_Update_m2852069781_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Camera_t4157153871 * V_0 = NULL;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Matrix4x4_t1817901843  V_9;
	memset(&V_9, 0, sizeof(V_9));
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(DigitalEyewearARController_t1054226036_il2cpp_TypeInfo_var);
		DigitalEyewearARController_t1054226036 * L_0 = DigitalEyewearARController_get_Instance_m3573866503(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Camera_t4157153871 * L_1 = DigitalEyewearARController_get_PrimaryCamera_m3122713263(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Camera_t4157153871 * L_2 = V_0;
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		Camera_t4157153871 * L_5 = V_0;
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = Transform_get_forward_m747522392(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		Camera_t4157153871 * L_8 = V_0;
		NullCheck(L_8);
		Transform_t3600365921 * L_9 = Component_get_transform_m3162698980(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t3722313464  L_10 = Transform_get_up_m3972993886(L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		Vector3_t3722313464  L_11 = V_3;
		Vector3_t3722313464  L_12 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_13 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = Vector3_op_Division_m510815599(NULL /*static, unused*/, L_13, (2.0f), /*hidden argument*/NULL);
		V_4 = L_14;
		float L_15 = (&V_4)->get_x_1();
		float L_16 = (&V_4)->get_z_3();
		Vector3__ctor_m3353183577((&V_5), L_15, (0.0f), L_16, /*hidden argument*/NULL);
		Vector3_Normalize_m914904454((&V_5), /*hidden argument*/NULL);
		Transform_t3600365921 * L_17 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_18 = V_1;
		Vector3_t3722313464  L_19 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_20 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, (1.5f), L_19, /*hidden argument*/NULL);
		Vector3_t3722313464  L_21 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_18, L_20, /*hidden argument*/NULL);
		Vector3_t3722313464  L_22 = V_5;
		Vector3_t3722313464  L_23 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_position_m3387557959(L_17, L_23, /*hidden argument*/NULL);
		Vector3_t3722313464  L_24 = V_1;
		Transform_t3600365921 * L_25 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t3722313464  L_26 = Transform_get_position_m36019626(L_25, /*hidden argument*/NULL);
		Vector3_t3722313464  L_27 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_24, L_26, /*hidden argument*/NULL);
		V_6 = L_27;
		float L_28 = Vector3_get_magnitude_m27958459((&V_6), /*hidden argument*/NULL);
		V_7 = L_28;
		float L_29 = V_7;
		Camera_t4157153871 * L_30 = V_0;
		NullCheck(L_30);
		float L_31 = Camera_get_nearClipPlane_m837839537(L_30, /*hidden argument*/NULL);
		if ((!(((float)L_29) > ((float)L_31))))
		{
			goto IL_0123;
		}
	}
	{
		Transform_t3600365921 * L_32 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Camera_t4157153871 * L_33 = V_0;
		NullCheck(L_33);
		Transform_t3600365921 * L_34 = Component_get_transform_m3162698980(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_t3722313464  L_35 = Transform_get_forward_m747522392(L_34, /*hidden argument*/NULL);
		Camera_t4157153871 * L_36 = V_0;
		NullCheck(L_36);
		Transform_t3600365921 * L_37 = Component_get_transform_m3162698980(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		Vector3_t3722313464  L_38 = Transform_get_up_m3972993886(L_37, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_39 = Quaternion_LookRotation_m3197602968(NULL /*static, unused*/, L_35, L_38, /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_set_rotation_m3524318132(L_32, L_39, /*hidden argument*/NULL);
		Camera_t4157153871 * L_40 = V_0;
		NullCheck(L_40);
		Matrix4x4_t1817901843  L_41 = Camera_get_projectionMatrix_m667780853(L_40, /*hidden argument*/NULL);
		V_9 = L_41;
		float L_42 = Matrix4x4_get_Item_m134152955((&V_9), 0, 0, /*hidden argument*/NULL);
		V_8 = ((float)((float)(1.0f)/(float)L_42));
		float L_43 = __this->get_width_2();
		float L_44 = V_8;
		float L_45 = V_7;
		V_10 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_43, (float)L_44)), (float)L_45));
		float L_46 = V_10;
		V_11 = ((float)((float)L_46/(float)(4.0f)));
		Transform_t3600365921 * L_47 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_48 = V_10;
		float L_49 = V_11;
		Vector3_t3722313464  L_50;
		memset(&L_50, 0, sizeof(L_50));
		Vector3__ctor_m3353183577((&L_50), L_48, L_49, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_47);
		Transform_set_localScale_m3053443106(L_47, L_50, /*hidden argument*/NULL);
	}

IL_0123:
	{
		return;
	}
}
// System.Void Button3D::LateUpdate()
extern "C"  void Button3D_LateUpdate_m545809021 (Button3D_t3014406560 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Button3D_LateUpdate_m545809021_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Camera_t4157153871 * V_0 = NULL;
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(DigitalEyewearARController_t1054226036_il2cpp_TypeInfo_var);
		DigitalEyewearARController_t1054226036 * L_0 = DigitalEyewearARController_get_Instance_m3573866503(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Camera_t4157153871 * L_1 = DigitalEyewearARController_get_PrimaryCamera_m3122713263(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Camera_t4157153871 * L_2 = V_0;
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3722313464  L_5 = Camera_WorldToViewportPoint_m1538355680(L_2, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_6 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = (&V_1)->get_x_0();
		if ((!(((float)L_7) > ((float)(0.2f)))))
		{
			goto IL_0094;
		}
	}
	{
		float L_8 = (&V_1)->get_x_0();
		if ((!(((float)L_8) < ((float)(0.8f)))))
		{
			goto IL_0094;
		}
	}
	{
		float L_9 = (&V_1)->get_y_1();
		if ((!(((float)L_9) > ((float)(0.2f)))))
		{
			goto IL_0094;
		}
	}
	{
		float L_10 = (&V_1)->get_y_1();
		if ((!(((float)L_10) < ((float)(0.8f)))))
		{
			goto IL_0094;
		}
	}
	{
		float L_11 = __this->get_mButtonAlpha_5();
		if ((!(((float)L_11) < ((float)(1.0f)))))
		{
			goto IL_008f;
		}
	}
	{
		float L_12 = __this->get_mButtonAlpha_5();
		float L_13 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_14 = __this->get_fadeDuration_4();
		__this->set_mButtonAlpha_5(((float)il2cpp_codegen_add((float)L_12, (float)((float)((float)L_13/(float)L_14)))));
	}

IL_008f:
	{
		goto IL_00bd;
	}

IL_0094:
	{
		float L_15 = __this->get_mButtonAlpha_5();
		if ((!(((float)L_15) > ((float)(0.0f)))))
		{
			goto IL_00bd;
		}
	}
	{
		float L_16 = __this->get_mButtonAlpha_5();
		float L_17 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_18 = __this->get_fadeDuration_4();
		__this->set_mButtonAlpha_5(((float)il2cpp_codegen_subtract((float)L_16, (float)((float)((float)L_17/(float)L_18)))));
	}

IL_00bd:
	{
		float L_19 = __this->get_mButtonAlpha_5();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_20 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		__this->set_mButtonAlpha_5(L_20);
		Renderer_t2627027031 * L_21 = Component_GetComponent_TisRenderer_t2627027031_m2222376672(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m2222376672_RuntimeMethod_var);
		NullCheck(L_21);
		Material_t340375123 * L_22 = Renderer_get_material_m4171603682(L_21, /*hidden argument*/NULL);
		float L_23 = __this->get_mButtonAlpha_5();
		Color_t2555686324  L_24;
		memset(&L_24, 0, sizeof(L_24));
		Color__ctor_m2943235014((&L_24), (1.0f), (1.0f), (1.0f), L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		Material_SetColor_m2020215303(L_22, _stringLiteral3354838037, L_24, /*hidden argument*/NULL);
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
// System.Void ButtonController::.ctor()
extern "C"  void ButtonController__ctor_m3710281285 (ButtonController_t4120738002 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ButtonController::Awake()
extern "C"  void ButtonController_Awake_m2036024024 (ButtonController_t4120738002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtonController_Awake_m2036024024_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		__this->set_m_myTransform_6(L_0);
		BoxCollider_t1640800422 * L_1 = Component_GetComponent_TisBoxCollider_t1640800422_m4104100802(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider_t1640800422_m4104100802_RuntimeMethod_var);
		__this->set_m_collider_4(L_1);
		MeshRenderer_t587009260 * L_2 = Component_GetComponent_TisMeshRenderer_t587009260_m3511415476(__this, /*hidden argument*/Component_GetComponent_TisMeshRenderer_t587009260_m3511415476_RuntimeMethod_var);
		__this->set_m_render_5(L_2);
		__this->set_m_isDown_7((bool)0);
		return;
	}
}
// System.Void ButtonController::OnMouseDown()
extern "C"  void ButtonController_OnMouseDown_m2988148934 (ButtonController_t4120738002 * __this, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = __this->get_m_myTransform_6();
		Vector3_t3722313464  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector3__ctor_m3353183577((&L_1), (1.2f), (1.2f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localScale_m3053443106(L_0, L_1, /*hidden argument*/NULL);
		__this->set_m_isDown_7((bool)1);
		return;
	}
}
// System.Void ButtonController::OnMouseUp()
extern "C"  void ButtonController_OnMouseUp_m1310830622 (ButtonController_t4120738002 * __this, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = __this->get_m_myTransform_6();
		Vector3_t3722313464  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector3__ctor_m3353183577((&L_1), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localScale_m3053443106(L_0, L_1, /*hidden argument*/NULL);
		__this->set_m_isDown_7((bool)0);
		return;
	}
}
// System.Void ButtonController::OnMouseExit()
extern "C"  void ButtonController_OnMouseExit_m466039053 (ButtonController_t4120738002 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_isDown_7();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		__this->set_m_isDown_7((bool)0);
		Transform_t3600365921 * L_1 = __this->get_m_myTransform_6();
		Vector3_t3722313464  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m3353183577((&L_2), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localScale_m3053443106(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void ButtonController::OnMouseUpAsButton()
extern "C"  void ButtonController_OnMouseUpAsButton_m45399995 (ButtonController_t4120738002 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_isDown_7((bool)0);
		ButtonManager_t2018100028 * L_0 = __this->get_m_manager_3();
		int32_t L_1 = __this->get_m_buttonType_2();
		NullCheck(L_0);
		ButtonManager_OnButtonClick_m3800887581(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ButtonController::ButtonDisable()
extern "C"  void ButtonController_ButtonDisable_m1056108927 (ButtonController_t4120738002 * __this, const RuntimeMethod* method)
{
	{
		BoxCollider_t1640800422 * L_0 = __this->get_m_collider_4();
		NullCheck(L_0);
		Collider_set_enabled_m1517463283(L_0, (bool)0, /*hidden argument*/NULL);
		MeshRenderer_t587009260 * L_1 = __this->get_m_render_5();
		NullCheck(L_1);
		Renderer_set_enabled_m1727253150(L_1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ButtonController::ButtonEnable()
extern "C"  void ButtonController_ButtonEnable_m2887820876 (ButtonController_t4120738002 * __this, const RuntimeMethod* method)
{
	{
		BoxCollider_t1640800422 * L_0 = __this->get_m_collider_4();
		NullCheck(L_0);
		Collider_set_enabled_m1517463283(L_0, (bool)1, /*hidden argument*/NULL);
		MeshRenderer_t587009260 * L_1 = __this->get_m_render_5();
		NullCheck(L_1);
		Renderer_set_enabled_m1727253150(L_1, (bool)1, /*hidden argument*/NULL);
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
// System.Void ButtonManager::.ctor()
extern "C"  void ButtonManager__ctor_m2848978668 (ButtonManager_t2018100028 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ButtonManager::Awake()
extern "C"  void ButtonManager_Awake_m1803494148 (ButtonManager_t2018100028 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_nowIndex_7(0);
		return;
	}
}
// System.Void ButtonManager::OnButtonClick(ButtonType)
extern "C"  void ButtonManager_OnButtonClick_m3800887581 (ButtonManager_t2018100028 * __this, int32_t ___type0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___type0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_004d;
			}
			case 2:
			{
				goto IL_0075;
			}
			case 3:
			{
				goto IL_008d;
			}
			case 4:
			{
				goto IL_00a5;
			}
			case 5:
			{
				goto IL_00bd;
			}
		}
	}
	{
		goto IL_00d5;
	}

IL_0025:
	{
		Animation_t3648466861 * L_1 = __this->get_m_objAnimation_2();
		AnimationClipU5BU5D_t1636626578* L_2 = __this->get_m_aniClips_4();
		int32_t L_3 = __this->get_m_nowIndex_7();
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
		V_0 = L_4;
		__this->set_m_nowIndex_7(L_4);
		int32_t L_5 = V_0;
		NullCheck(L_2);
		int32_t L_6 = L_5;
		AnimationClip_t2318505987 * L_7 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_1);
		Animation_set_clip_m2768026374(L_1, L_7, /*hidden argument*/NULL);
		goto IL_00d5;
	}

IL_004d:
	{
		Animation_t3648466861 * L_8 = __this->get_m_objAnimation_2();
		AnimationClipU5BU5D_t1636626578* L_9 = __this->get_m_aniClips_4();
		int32_t L_10 = __this->get_m_nowIndex_7();
		int32_t L_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		V_0 = L_11;
		__this->set_m_nowIndex_7(L_11);
		int32_t L_12 = V_0;
		NullCheck(L_9);
		int32_t L_13 = L_12;
		AnimationClip_t2318505987 * L_14 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_8);
		Animation_set_clip_m2768026374(L_8, L_14, /*hidden argument*/NULL);
		goto IL_00d5;
	}

IL_0075:
	{
		Material_t340375123 * L_15 = __this->get_m_objMaterial_3();
		TextureU5BU5D_t908295702* L_16 = __this->get_m_textures_5();
		NullCheck(L_16);
		int32_t L_17 = 0;
		Texture_t3661962703 * L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_15);
		Material_set_mainTexture_m544811714(L_15, L_18, /*hidden argument*/NULL);
		goto IL_00d5;
	}

IL_008d:
	{
		Material_t340375123 * L_19 = __this->get_m_objMaterial_3();
		TextureU5BU5D_t908295702* L_20 = __this->get_m_textures_5();
		NullCheck(L_20);
		int32_t L_21 = 1;
		Texture_t3661962703 * L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_19);
		Material_set_mainTexture_m544811714(L_19, L_22, /*hidden argument*/NULL);
		goto IL_00d5;
	}

IL_00a5:
	{
		Material_t340375123 * L_23 = __this->get_m_objMaterial_3();
		TextureU5BU5D_t908295702* L_24 = __this->get_m_textures_5();
		NullCheck(L_24);
		int32_t L_25 = 2;
		Texture_t3661962703 * L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_23);
		Material_set_mainTexture_m544811714(L_23, L_26, /*hidden argument*/NULL);
		goto IL_00d5;
	}

IL_00bd:
	{
		Material_t340375123 * L_27 = __this->get_m_objMaterial_3();
		TextureU5BU5D_t908295702* L_28 = __this->get_m_textures_5();
		NullCheck(L_28);
		int32_t L_29 = 3;
		Texture_t3661962703 * L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_27);
		Material_set_mainTexture_m544811714(L_27, L_30, /*hidden argument*/NULL);
		goto IL_00d5;
	}

IL_00d5:
	{
		Animation_t3648466861 * L_31 = __this->get_m_objAnimation_2();
		NullCheck(L_31);
		Animation_Play_m2798573761(L_31, /*hidden argument*/NULL);
		int32_t L_32 = __this->get_m_nowIndex_7();
		if (L_32)
		{
			goto IL_00fe;
		}
	}
	{
		ButtonControllerU5BU5D_t3107930023* L_33 = __this->get_m_buttons_6();
		NullCheck(L_33);
		int32_t L_34 = 0;
		ButtonController_t4120738002 * L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		ButtonController_ButtonDisable_m1056108927(L_35, /*hidden argument*/NULL);
		goto IL_0120;
	}

IL_00fe:
	{
		int32_t L_36 = __this->get_m_nowIndex_7();
		AnimationClipU5BU5D_t1636626578* L_37 = __this->get_m_aniClips_4();
		NullCheck(L_37);
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_37)->max_length)))), (int32_t)1))))))
		{
			goto IL_0120;
		}
	}
	{
		ButtonControllerU5BU5D_t3107930023* L_38 = __this->get_m_buttons_6();
		NullCheck(L_38);
		int32_t L_39 = 1;
		ButtonController_t4120738002 * L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		ButtonController_ButtonDisable_m1056108927(L_40, /*hidden argument*/NULL);
	}

IL_0120:
	{
		int32_t L_41 = __this->get_m_nowIndex_7();
		if ((!(((uint32_t)L_41) == ((uint32_t)1))))
		{
			goto IL_013e;
		}
	}
	{
		ButtonControllerU5BU5D_t3107930023* L_42 = __this->get_m_buttons_6();
		NullCheck(L_42);
		int32_t L_43 = 0;
		ButtonController_t4120738002 * L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_44);
		ButtonController_ButtonEnable_m2887820876(L_44, /*hidden argument*/NULL);
		goto IL_0160;
	}

IL_013e:
	{
		int32_t L_45 = __this->get_m_nowIndex_7();
		AnimationClipU5BU5D_t1636626578* L_46 = __this->get_m_aniClips_4();
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_46)->max_length)))), (int32_t)2))))))
		{
			goto IL_0160;
		}
	}
	{
		ButtonControllerU5BU5D_t3107930023* L_47 = __this->get_m_buttons_6();
		NullCheck(L_47);
		int32_t L_48 = 1;
		ButtonController_t4120738002 * L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_49);
		ButtonController_ButtonEnable_m2887820876(L_49, /*hidden argument*/NULL);
	}

IL_0160:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraSettings::.ctor()
extern "C"  void CameraSettings__ctor_m3533038972 (CameraSettings_t3152619780 * __this, const RuntimeMethod* method)
{
	{
		__this->set_mAutofocusEnabled_3((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraSettings::Start()
extern "C"  void CameraSettings_Start_m1913056950 (CameraSettings_t3152619780 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraSettings_Start_m1913056950_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VuforiaARController_t1876945237 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaARController_t1876945237_il2cpp_TypeInfo_var);
		VuforiaARController_t1876945237 * L_0 = VuforiaARController_get_Instance_m1100644214(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		VuforiaARController_t1876945237 * L_1 = V_0;
		intptr_t L_2 = (intptr_t)CameraSettings_OnVuforiaStarted_m924645186_RuntimeMethod_var;
		Action_t1264377477 * L_3 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		VuforiaARController_RegisterVuforiaStartedCallback_m3258152770(L_1, L_3, /*hidden argument*/NULL);
		VuforiaARController_t1876945237 * L_4 = V_0;
		intptr_t L_5 = (intptr_t)CameraSettings_OnPaused_m1743728020_RuntimeMethod_var;
		Action_1_t269755560 * L_6 = (Action_1_t269755560 *)il2cpp_codegen_object_new(Action_1_t269755560_il2cpp_TypeInfo_var);
		Action_1__ctor_m2079027267(L_6, __this, L_5, /*hidden argument*/Action_1__ctor_m2079027267_RuntimeMethod_var);
		NullCheck(L_4);
		VuforiaARController_RegisterOnPauseCallback_m1833237148(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean CameraSettings::IsFlashTorchEnabled()
extern "C"  bool CameraSettings_IsFlashTorchEnabled_m3875252701 (CameraSettings_t3152619780 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_mFlashTorchEnabled_4();
		return L_0;
	}
}
// System.Void CameraSettings::SwitchFlashTorch(System.Boolean)
extern "C"  void CameraSettings_SwitchFlashTorch_m1540789541 (CameraSettings_t3152619780 * __this, bool ___ON0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraSettings_SwitchFlashTorch_m1540789541_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_0 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_1 = ___ON0;
		NullCheck(L_0);
		bool L_2 = CameraDevice_SetFlashTorchMode_m1499936922(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		bool L_3 = ___ON0;
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral328110920, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		bool L_7 = ___ON0;
		__this->set_mFlashTorchEnabled_4(L_7);
		goto IL_004d;
	}

IL_0031:
	{
		bool L_8 = ___ON0;
		bool L_9 = L_8;
		RuntimeObject * L_10 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3558393413, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		__this->set_mFlashTorchEnabled_4((bool)0);
	}

IL_004d:
	{
		return;
	}
}
// System.Boolean CameraSettings::IsAutofocusEnabled()
extern "C"  bool CameraSettings_IsAutofocusEnabled_m386305083 (CameraSettings_t3152619780 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_mAutofocusEnabled_3();
		return L_0;
	}
}
// System.Void CameraSettings::SwitchAutofocus(System.Boolean)
extern "C"  void CameraSettings_SwitchAutofocus_m1104105893 (CameraSettings_t3152619780 * __this, bool ___ON0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraSettings_SwitchAutofocus_m1104105893_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___ON0;
		if (!L_0)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_1 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = CameraDevice_SetFocusMode_m2424803588(L_1, 2, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1601691866, /*hidden argument*/NULL);
		__this->set_mAutofocusEnabled_3((bool)1);
		goto IL_0049;
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1647848890, /*hidden argument*/NULL);
		__this->set_mAutofocusEnabled_3((bool)0);
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_3 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		CameraDevice_SetFocusMode_m2424803588(L_3, 0, /*hidden argument*/NULL);
	}

IL_0049:
	{
		goto IL_006b;
	}

IL_004e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3666098040, /*hidden argument*/NULL);
		__this->set_mAutofocusEnabled_3((bool)0);
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_4 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		CameraDevice_SetFocusMode_m2424803588(L_4, 0, /*hidden argument*/NULL);
	}

IL_006b:
	{
		return;
	}
}
// System.Void CameraSettings::TriggerAutofocusEvent()
extern "C"  void CameraSettings_TriggerAutofocusEvent_m898525935 (CameraSettings_t3152619780 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraSettings_TriggerAutofocusEvent_m898525935_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_0 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		CameraDevice_SetFocusMode_m2424803588(L_0, 1, /*hidden argument*/NULL);
		RuntimeObject* L_1 = CameraSettings_RestoreOriginalFocusMode_m3433876528(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraSettings::SelectCamera(Vuforia.CameraDevice/CameraDirection)
extern "C"  void CameraSettings_SelectCamera_m387205834 (CameraSettings_t3152619780 * __this, int32_t ___camDir0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___camDir0;
		bool L_1 = CameraSettings_RestartCamera_m1627822698(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___camDir0;
		__this->set_mActiveDirection_5(L_2);
		__this->set_mFlashTorchEnabled_4((bool)0);
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean CameraSettings::IsFrontCameraActive()
extern "C"  bool CameraSettings_IsFrontCameraActive_m282456036 (CameraSettings_t3152619780 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mActiveDirection_5();
		return (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// System.Boolean CameraSettings::RestartCamera(Vuforia.CameraDevice/CameraDirection)
extern "C"  bool CameraSettings_RestartCamera_m1627822698 (CameraSettings_t3152619780 * __this, int32_t ___direction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraSettings_RestartCamera_m1627822698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectTracker_t4177997237 * V_0 = NULL;
	{
		RuntimeObject* L_0 = TrackerManager_get_Instance_m777262631(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectTracker_t4177997237 * L_1 = GenericInterfaceFuncInvoker0< ObjectTracker_t4177997237 * >::Invoke(ITrackerManager_GetTracker_TisObjectTracker_t4177997237_m1548597255_RuntimeMethod_var, L_0);
		V_0 = L_1;
		ObjectTracker_t4177997237 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		ObjectTracker_t4177997237 * L_3 = V_0;
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(5 /* System.Void Vuforia.Tracker::Stop() */, L_3);
	}

IL_0017:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_4 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		CameraDevice_Stop_m1782631459(L_4, /*hidden argument*/NULL);
		CameraDevice_t960297568 * L_5 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		CameraDevice_Deinit_m726427492(L_5, /*hidden argument*/NULL);
		CameraDevice_t960297568 * L_6 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_7 = ___direction0;
		NullCheck(L_6);
		bool L_8 = CameraDevice_Init_m2722714107(L_6, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_005b;
		}
	}
	{
		RuntimeObject * L_9 = Box(CameraDirection_t637748435_il2cpp_TypeInfo_var, (&___direction0));
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		___direction0 = *(int32_t*)UnBox(L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral4178167562, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_12 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_12);
		bool L_13 = CameraDevice_Start_m2947498176(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject * L_14 = Box(CameraDirection_t637748435_il2cpp_TypeInfo_var, (&___direction0));
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		___direction0 = *(int32_t*)UnBox(L_14);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3976947749, L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0088:
	{
		ObjectTracker_t4177997237 * L_17 = V_0;
		if (!L_17)
		{
			goto IL_00a5;
		}
	}
	{
		ObjectTracker_t4177997237 * L_18 = V_0;
		NullCheck(L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean Vuforia.Tracker::Start() */, L_18);
		if (L_19)
		{
			goto IL_00a5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1322537578, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_00a5:
	{
		return (bool)1;
	}
}
// System.Void CameraSettings::OnVuforiaStarted()
extern "C"  void CameraSettings_OnVuforiaStarted_m924645186 (CameraSettings_t3152619780 * __this, const RuntimeMethod* method)
{
	{
		__this->set_mVuforiaStarted_2((bool)1);
		CameraSettings_SwitchAutofocus_m1104105893(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraSettings::OnPaused(System.Boolean)
extern "C"  void CameraSettings_OnPaused_m1743728020 (CameraSettings_t3152619780 * __this, bool ___paused0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraSettings_OnPaused_m1743728020_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ___paused0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		bool L_2 = __this->get_mVuforiaStarted_2();
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		bool L_3 = __this->get_mAutofocusEnabled_3();
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_4 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		CameraDevice_SetFocusMode_m2424803588(L_4, 2, /*hidden argument*/NULL);
		goto IL_003e;
	}

IL_0032:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_5 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		CameraDevice_SetFocusMode_m2424803588(L_5, 0, /*hidden argument*/NULL);
	}

IL_003e:
	{
		goto IL_004a;
	}

IL_0043:
	{
		__this->set_mFlashTorchEnabled_4((bool)0);
	}

IL_004a:
	{
		return;
	}
}
// System.Collections.IEnumerator CameraSettings::RestoreOriginalFocusMode()
extern "C"  RuntimeObject* CameraSettings_RestoreOriginalFocusMode_m3433876528 (CameraSettings_t3152619780 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraSettings_RestoreOriginalFocusMode_m3433876528_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229 * V_0 = NULL;
	{
		U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229 * L_0 = (U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229 *)il2cpp_codegen_object_new(U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229_il2cpp_TypeInfo_var);
		U3CRestoreOriginalFocusModeU3Ec__Iterator0__ctor_m1994535627(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_0(__this);
		U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229 * L_2 = V_0;
		return L_2;
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
// System.Void CameraSettings/<RestoreOriginalFocusMode>c__Iterator0::.ctor()
extern "C"  void U3CRestoreOriginalFocusModeU3Ec__Iterator0__ctor_m1994535627 (U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean CameraSettings/<RestoreOriginalFocusMode>c__Iterator0::MoveNext()
extern "C"  bool U3CRestoreOriginalFocusModeU3Ec__Iterator0_MoveNext_m3953872261 (U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRestoreOriginalFocusModeU3Ec__Iterator0_MoveNext_m3953872261_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0045;
			}
		}
	}
	{
		goto IL_0079;
	}

IL_0021:
	{
		WaitForSeconds_t1699091251 * L_2 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_2, (1.5f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_2);
		bool L_3 = __this->get_U24disposing_2();
		if (L_3)
		{
			goto IL_0040;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0040:
	{
		goto IL_007b;
	}

IL_0045:
	{
		CameraSettings_t3152619780 * L_4 = __this->get_U24this_0();
		NullCheck(L_4);
		bool L_5 = L_4->get_mAutofocusEnabled_3();
		if (!L_5)
		{
			goto IL_0066;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_6 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		CameraDevice_SetFocusMode_m2424803588(L_6, 2, /*hidden argument*/NULL);
		goto IL_0072;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_7 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		CameraDevice_SetFocusMode_m2424803588(L_7, 0, /*hidden argument*/NULL);
	}

IL_0072:
	{
		__this->set_U24PC_3((-1));
	}

IL_0079:
	{
		return (bool)0;
	}

IL_007b:
	{
		return (bool)1;
	}
}
// System.Object CameraSettings/<RestoreOriginalFocusMode>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CRestoreOriginalFocusModeU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1094649693 (U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object CameraSettings/<RestoreOriginalFocusMode>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CRestoreOriginalFocusModeU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1550947433 (U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void CameraSettings/<RestoreOriginalFocusMode>c__Iterator0::Dispose()
extern "C"  void U3CRestoreOriginalFocusModeU3Ec__Iterator0_Dispose_m2241939766 (U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void CameraSettings/<RestoreOriginalFocusMode>c__Iterator0::Reset()
extern "C"  void U3CRestoreOriginalFocusModeU3Ec__Iterator0_Reset_m884766291 (U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRestoreOriginalFocusModeU3Ec__Iterator0_Reset_m884766291_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CRestoreOriginalFocusModeU3Ec__Iterator0_Reset_m884766291_RuntimeMethod_var);
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
// System.Void DefaultInitializationErrorHandler::.ctor()
extern "C"  void DefaultInitializationErrorHandler__ctor_m2145257936 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler__ctor_m2145257936_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_mErrorText_2(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::OnVuforiaInitializationError(Vuforia.VuforiaUnity/InitError)
extern "C"  void DefaultInitializationErrorHandler_OnVuforiaInitializationError_m512807497 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___initError0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___initError0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = ___initError0;
		DefaultInitializationErrorHandler_SetErrorCode_m599033302(__this, L_1, /*hidden argument*/NULL);
		DefaultInitializationErrorHandler_SetErrorOccurred_m1940230672(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::Awake()
extern "C"  void DefaultInitializationErrorHandler_Awake_m1713298888 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_Awake_m1713298888_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntime_t1949122020_il2cpp_TypeInfo_var);
		VuforiaRuntime_t1949122020 * L_0 = VuforiaRuntime_get_Instance_m1058251676(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_1 = (intptr_t)DefaultInitializationErrorHandler_OnVuforiaInitializationError_m512807497_RuntimeMethod_var;
		Action_1_t3593217305 * L_2 = (Action_1_t3593217305 *)il2cpp_codegen_object_new(Action_1_t3593217305_il2cpp_TypeInfo_var);
		Action_1__ctor_m2713332384(L_2, __this, L_1, /*hidden argument*/Action_1__ctor_m2713332384_RuntimeMethod_var);
		NullCheck(L_0);
		VuforiaRuntime_RegisterVuforiaInitErrorCallback_m2728879505(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::Start()
extern "C"  void DefaultInitializationErrorHandler_Start_m2498604264 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	{
		DefaultInitializationErrorHandler_SetupGUIStyles_m3863535424(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::OnGUI()
extern "C"  void DefaultInitializationErrorHandler_OnGUI_m2338842741 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_OnGUI_m2338842741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_mErrorOccurred_3();
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_1 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t2360479859  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Rect__ctor_m2614021312((&L_3), (0.0f), (0.0f), (((float)((float)L_1))), (((float)((float)L_2))), /*hidden argument*/NULL);
		intptr_t L_4 = (intptr_t)DefaultInitializationErrorHandler_DrawWindowContent_m2208378571_RuntimeMethod_var;
		WindowFunction_t3146511083 * L_5 = (WindowFunction_t3146511083 *)il2cpp_codegen_object_new(WindowFunction_t3146511083_il2cpp_TypeInfo_var);
		WindowFunction__ctor_m2544237635(L_5, __this, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_Window_m1088326791(NULL /*static, unused*/, 0, L_3, L_5, L_6, /*hidden argument*/NULL);
	}

IL_003e:
	{
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::OnDestroy()
extern "C"  void DefaultInitializationErrorHandler_OnDestroy_m3668093536 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_OnDestroy_m3668093536_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntime_t1949122020_il2cpp_TypeInfo_var);
		VuforiaRuntime_t1949122020 * L_0 = VuforiaRuntime_get_Instance_m1058251676(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_1 = (intptr_t)DefaultInitializationErrorHandler_OnVuforiaInitializationError_m512807497_RuntimeMethod_var;
		Action_1_t3593217305 * L_2 = (Action_1_t3593217305 *)il2cpp_codegen_object_new(Action_1_t3593217305_il2cpp_TypeInfo_var);
		Action_1__ctor_m2713332384(L_2, __this, L_1, /*hidden argument*/Action_1__ctor_m2713332384_RuntimeMethod_var);
		NullCheck(L_0);
		VuforiaRuntime_UnregisterVuforiaInitErrorCallback_m1304340042(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::DrawWindowContent(System.Int32)
extern "C"  void DefaultInitializationErrorHandler_DrawWindowContent_m2208378571 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_DrawWindowContent_m2208378571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Rect_t2360479859  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Rect_t2360479859  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		int32_t L_0 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect__ctor_m2614021312((&V_0), (0.0f), (0.0f), (((float)((float)L_0))), (((float)((float)((int32_t)((int32_t)L_1/(int32_t)8))))), /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_4 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect__ctor_m2614021312((&V_1), (0.0f), (((float)((float)((int32_t)((int32_t)L_2/(int32_t)8))))), (((float)((float)L_3))), (((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_4/(int32_t)8)), (int32_t)6))))), /*hidden argument*/NULL);
		int32_t L_5 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_6 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_7 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_8 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect__ctor_m2614021312((&V_2), (0.0f), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)((int32_t)L_6/(int32_t)8))))))), (((float)((float)L_7))), (((float)((float)((int32_t)((int32_t)L_8/(int32_t)8))))), /*hidden argument*/NULL);
		Rect_t2360479859  L_9 = V_0;
		GUIStyle_t3956901511 * L_10 = __this->get_headerStyle_6();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_Label_m2420537077(NULL /*static, unused*/, L_9, _stringLiteral2016908147, L_10, /*hidden argument*/NULL);
		Rect_t2360479859  L_11 = V_1;
		String_t* L_12 = __this->get_mErrorText_2();
		GUIStyle_t3956901511 * L_13 = __this->get_bodyStyle_5();
		GUI_Label_m2420537077(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		Rect_t2360479859  L_14 = V_2;
		GUIStyle_t3956901511 * L_15 = __this->get_footerStyle_7();
		bool L_16 = GUI_Button_m2223708732(NULL /*static, unused*/, L_14, _stringLiteral3483484711, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		Application_Quit_m470877999(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::SetErrorCode(Vuforia.VuforiaUnity/InitError)
extern "C"  void DefaultInitializationErrorHandler_SetErrorCode_m599033302 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___errorCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_SetErrorCode_m599033302_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = ___errorCode0;
		switch (((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)10))))
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_00ac;
			}
			case 2:
			{
				goto IL_0091;
			}
			case 3:
			{
				goto IL_0071;
			}
			case 4:
			{
				goto IL_0081;
			}
			case 5:
			{
				goto IL_0056;
			}
			case 6:
			{
				goto IL_0046;
			}
			case 7:
			{
				goto IL_00cc;
			}
			case 8:
			{
				goto IL_00eb;
			}
			case 9:
			{
				goto IL_00fb;
			}
		}
	}
	{
		goto IL_010b;
	}

IL_0036:
	{
		__this->set_mErrorText_2(_stringLiteral3279329212);
		goto IL_010b;
	}

IL_0046:
	{
		__this->set_mErrorText_2(_stringLiteral3325583105);
		goto IL_010b;
	}

IL_0056:
	{
		String_t* L_1 = DefaultInitializationErrorHandler_getKeyInfo_m1864640064(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1253325676, L_1, /*hidden argument*/NULL);
		__this->set_mErrorText_2(L_2);
		goto IL_010b;
	}

IL_0071:
	{
		__this->set_mErrorText_2(_stringLiteral2959890895);
		goto IL_010b;
	}

IL_0081:
	{
		__this->set_mErrorText_2(_stringLiteral2293327149);
		goto IL_010b;
	}

IL_0091:
	{
		String_t* L_3 = DefaultInitializationErrorHandler_getKeyInfo_m1864640064(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2746077084, L_3, /*hidden argument*/NULL);
		__this->set_mErrorText_2(L_4);
		goto IL_010b;
	}

IL_00ac:
	{
		String_t* L_5 = DefaultInitializationErrorHandler_getKeyInfo_m1864640064(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral2746058527, L_5, _stringLiteral491174246, /*hidden argument*/NULL);
		__this->set_mErrorText_2(L_6);
		goto IL_010b;
	}

IL_00cc:
	{
		String_t* L_7 = Application_get_productName_m2401755738(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3183081100, L_7, _stringLiteral868600955, /*hidden argument*/NULL);
		__this->set_mErrorText_2(L_8);
		goto IL_010b;
	}

IL_00eb:
	{
		__this->set_mErrorText_2(_stringLiteral3122929577);
		goto IL_010b;
	}

IL_00fb:
	{
		__this->set_mErrorText_2(_stringLiteral3567432369);
		goto IL_010b;
	}

IL_010b:
	{
		RuntimeObject * L_9 = Box(InitError_t3420749710_il2cpp_TypeInfo_var, (&___errorCode0));
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		___errorCode0 = *(int32_t*)UnBox(L_9);
		NullCheck(L_10);
		String_t* L_11 = String_Replace_m1273907647(L_10, _stringLiteral3452614641, _stringLiteral3452614528, /*hidden argument*/NULL);
		String_t* L_12 = __this->get_mErrorText_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral229317972, L_11, _stringLiteral2072581803, L_12, /*hidden argument*/NULL);
		__this->set_mErrorText_2(L_13);
		String_t* L_14 = __this->get_mErrorText_2();
		String_t* L_15 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_14);
		String_t* L_16 = String_Replace_m1273907647(L_14, _stringLiteral229317972, L_15, /*hidden argument*/NULL);
		String_t* L_17 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_16);
		String_t* L_18 = String_Replace_m1273907647(L_16, _stringLiteral2642543365, L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		ObjectU5BU5D_t2843939325* L_19 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral3752705136);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3752705136);
		ObjectU5BU5D_t2843939325* L_20 = L_19;
		int32_t L_21 = ___errorCode0;
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(InitError_t3420749710_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_23);
		ObjectU5BU5D_t2843939325* L_24 = L_20;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral3453007782);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3453007782);
		ObjectU5BU5D_t2843939325* L_25 = L_24;
		String_t* L_26 = V_0;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_26);
		String_t* L_27 = String_Concat_m2971454694(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::SetErrorOccurred(System.Boolean)
extern "C"  void DefaultInitializationErrorHandler_SetErrorOccurred_m1940230672 (DefaultInitializationErrorHandler_t3109936861 * __this, bool ___errorOccurred0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___errorOccurred0;
		__this->set_mErrorOccurred_3(L_0);
		return;
	}
}
// System.String DefaultInitializationErrorHandler::getKeyInfo()
extern "C"  String_t* DefaultInitializationErrorHandler_getKeyInfo_m1864640064 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_getKeyInfo_m1864640064_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var);
		VuforiaConfiguration_t1763229349 * L_0 = VuforiaConfiguration_get_Instance_m3335903280(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GenericVuforiaConfiguration_t3697830469 * L_1 = VuforiaConfiguration_get_Vuforia_m1588208597(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GenericVuforiaConfiguration_get_LicenseKey_m2270076687(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m3847582255(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0079;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_5 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)7));
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral1431967569);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1431967569);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		String_t* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m3847582255(L_7, /*hidden argument*/NULL);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_10);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		ObjectU5BU5D_t2843939325* L_11 = L_6;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral3797279721);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3797279721);
		ObjectU5BU5D_t2843939325* L_12 = L_11;
		String_t* L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = String_Substring_m1610150815(L_13, 0, 5, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		ObjectU5BU5D_t2843939325* L_15 = L_12;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral1108443480);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral1108443480);
		ObjectU5BU5D_t2843939325* L_16 = L_15;
		String_t* L_17 = V_0;
		String_t* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m3847582255(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_20 = String_Substring_m1610150815(L_17, ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)5)), 5, /*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_20);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_20);
		ObjectU5BU5D_t2843939325* L_21 = L_16;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral2072975055);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral2072975055);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m2971454694(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		goto IL_00af;
	}

IL_0079:
	{
		ObjectU5BU5D_t2843939325* L_23 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral1431967569);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1431967569);
		ObjectU5BU5D_t2843939325* L_24 = L_23;
		String_t* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = String_get_Length_m3847582255(L_25, /*hidden argument*/NULL);
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_28);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_28);
		ObjectU5BU5D_t2843939325* L_29 = L_24;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral1498400317);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral1498400317);
		ObjectU5BU5D_t2843939325* L_30 = L_29;
		String_t* L_31 = V_0;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_31);
		ObjectU5BU5D_t2843939325* L_32 = L_30;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteral2072975055);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral2072975055);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_33 = String_Concat_m2971454694(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		V_1 = L_33;
	}

IL_00af:
	{
		String_t* L_34 = V_1;
		return L_34;
	}
}
// System.Void DefaultInitializationErrorHandler::SetupGUIStyles()
extern "C"  void DefaultInitializationErrorHandler_SetupGUIStyles_m3863535424 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_SetupGUIStyles_m3863535424_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001e;
	}

IL_0019:
	{
		int32_t L_3 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_001e:
	{
		V_0 = G_B3_0;
		int32_t L_4 = V_0;
		float L_5 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)((float)(((float)((float)L_4)))/(float)L_5));
		float L_6 = V_1;
		if ((!(((float)L_6) > ((float)(4.0f)))))
		{
			goto IL_0039;
		}
	}
	{
		G_B6_0 = 2;
		goto IL_003a;
	}

IL_0039:
	{
		G_B6_0 = 1;
	}

IL_003a:
	{
		V_2 = G_B6_0;
		Color_t2555686324  L_7 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_8 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749(__this, L_7, /*hidden argument*/NULL);
		__this->set_bodyTexture_8(L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_9 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		float L_10 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		float L_11 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		Color_t2555686324  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Color__ctor_m286683560((&L_12), L_9, L_10, L_11, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_13 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749(__this, L_12, /*hidden argument*/NULL);
		__this->set_headerTexture_9(L_13);
		float L_14 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (35.0f), /*hidden argument*/NULL);
		float L_15 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (178.0f), /*hidden argument*/NULL);
		float L_16 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (0.0f), /*hidden argument*/NULL);
		Color_t2555686324  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Color__ctor_m286683560((&L_17), L_14, L_15, L_16, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_18 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749(__this, L_17, /*hidden argument*/NULL);
		__this->set_footerTexture_10(L_18);
		GUIStyle_t3956901511 * L_19 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4038363858(L_19, /*hidden argument*/NULL);
		__this->set_bodyStyle_5(L_19);
		GUIStyle_t3956901511 * L_20 = __this->get_bodyStyle_5();
		NullCheck(L_20);
		GUIStyleState_t1397964415 * L_21 = GUIStyle_get_normal_m729441812(L_20, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_22 = __this->get_bodyTexture_8();
		NullCheck(L_21);
		GUIStyleState_set_background_m369476077(L_21, L_22, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_23 = __this->get_bodyStyle_5();
		Font_t1956802104 * L_24 = Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830(NULL /*static, unused*/, _stringLiteral2974894664, /*hidden argument*/Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830_RuntimeMethod_var);
		NullCheck(L_23);
		GUIStyle_set_font_m2490449107(L_23, L_24, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_25 = __this->get_bodyStyle_5();
		int32_t L_26 = V_2;
		float L_27 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_25);
		GUIStyle_set_fontSize_m1566850023(L_25, (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)18), (int32_t)L_26))))), (float)L_27))/(float)(160.0f)))))), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_28 = __this->get_bodyStyle_5();
		NullCheck(L_28);
		GUIStyleState_t1397964415 * L_29 = GUIStyle_get_normal_m729441812(L_28, /*hidden argument*/NULL);
		Color_t2555686324  L_30 = Color_get_black_m719512684(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_29);
		GUIStyleState_set_textColor_m1105876047(L_29, L_30, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_31 = __this->get_bodyStyle_5();
		NullCheck(L_31);
		GUIStyle_set_wordWrap_m1419501823(L_31, (bool)1, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_32 = __this->get_bodyStyle_5();
		NullCheck(L_32);
		GUIStyle_set_alignment_m3944619660(L_32, 4, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_33 = __this->get_bodyStyle_5();
		RectOffset_t1369453676 * L_34 = (RectOffset_t1369453676 *)il2cpp_codegen_object_new(RectOffset_t1369453676_il2cpp_TypeInfo_var);
		RectOffset__ctor_m732140021(L_34, ((int32_t)40), ((int32_t)40), 0, 0, /*hidden argument*/NULL);
		NullCheck(L_33);
		GUIStyle_set_padding_m3302456044(L_33, L_34, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_35 = __this->get_bodyStyle_5();
		GUIStyle_t3956901511 * L_36 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2912682974(L_36, L_35, /*hidden argument*/NULL);
		__this->set_headerStyle_6(L_36);
		GUIStyle_t3956901511 * L_37 = __this->get_headerStyle_6();
		NullCheck(L_37);
		GUIStyleState_t1397964415 * L_38 = GUIStyle_get_normal_m729441812(L_37, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_39 = __this->get_headerTexture_9();
		NullCheck(L_38);
		GUIStyleState_set_background_m369476077(L_38, L_39, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_40 = __this->get_headerStyle_6();
		int32_t L_41 = V_2;
		float L_42 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_40);
		GUIStyle_set_fontSize_m1566850023(L_40, (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)24), (int32_t)L_41))))), (float)L_42))/(float)(160.0f)))))), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_43 = __this->get_bodyStyle_5();
		GUIStyle_t3956901511 * L_44 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2912682974(L_44, L_43, /*hidden argument*/NULL);
		__this->set_footerStyle_7(L_44);
		GUIStyle_t3956901511 * L_45 = __this->get_footerStyle_7();
		NullCheck(L_45);
		GUIStyleState_t1397964415 * L_46 = GUIStyle_get_normal_m729441812(L_45, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_47 = __this->get_footerTexture_10();
		NullCheck(L_46);
		GUIStyleState_set_background_m369476077(L_46, L_47, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_48 = __this->get_footerStyle_7();
		NullCheck(L_48);
		GUIStyleState_t1397964415 * L_49 = GUIStyle_get_normal_m729441812(L_48, /*hidden argument*/NULL);
		Color_t2555686324  L_50 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_49);
		GUIStyleState_set_textColor_m1105876047(L_49, L_50, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_51 = __this->get_footerStyle_7();
		int32_t L_52 = V_2;
		float L_53 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_51);
		GUIStyle_set_fontSize_m1566850023(L_51, (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)28), (int32_t)L_52))))), (float)L_53))/(float)(160.0f)))))), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Texture2D DefaultInitializationErrorHandler::CreateSinglePixelTexture(UnityEngine.Color)
extern "C"  Texture2D_t3840446185 * DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749 (DefaultInitializationErrorHandler_t3109936861 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t3840446185 * V_0 = NULL;
	{
		Texture2D_t3840446185 * L_0 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m2862217990(L_0, 1, 1, 5, (bool)0, /*hidden argument*/NULL);
		V_0 = L_0;
		Texture2D_t3840446185 * L_1 = V_0;
		Color_t2555686324  L_2 = ___color0;
		NullCheck(L_1);
		Texture2D_SetPixel_m2984741184(L_1, 0, 0, L_2, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_3 = V_0;
		NullCheck(L_3);
		Texture2D_Apply_m2271746283(L_3, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_4 = V_0;
		return L_4;
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
// System.Void DefaultTrackableEventHandler::.ctor()
extern "C"  void DefaultTrackableEventHandler__ctor_m2856359002 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultTrackableEventHandler::Start()
extern "C"  void DefaultTrackableEventHandler_Start_m796446126 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_Start_m796446126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackableBehaviour_t1113559212 * L_0 = Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408(__this, /*hidden argument*/Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408_RuntimeMethod_var);
		__this->set_mTrackableBehaviour_2(L_0);
		TrackableBehaviour_t1113559212 * L_1 = __this->get_mTrackableBehaviour_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_3 = __this->get_mTrackableBehaviour_2();
		NullCheck(L_3);
		TrackableBehaviour_RegisterTrackableEventHandler_m2462783619(L_3, __this, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnDestroy()
extern "C"  void DefaultTrackableEventHandler_OnDestroy_m1080906236 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnDestroy_m1080906236_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackableBehaviour_t1113559212 * L_0 = __this->get_mTrackableBehaviour_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_2 = __this->get_mTrackableBehaviour_2();
		NullCheck(L_2);
		TrackableBehaviour_UnregisterTrackableEventHandler_m1201569614(L_2, __this, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnTrackableStateChanged(Vuforia.TrackableBehaviour/Status,Vuforia.TrackableBehaviour/Status)
extern "C"  void DefaultTrackableEventHandler_OnTrackableStateChanged_m77027111 (DefaultTrackableEventHandler_t1588957063 * __this, int32_t ___previousStatus0, int32_t ___newStatus1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnTrackableStateChanged_m77027111_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___newStatus1;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = ___newStatus1;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = ___newStatus1;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_003f;
		}
	}

IL_0015:
	{
		TrackableBehaviour_t1113559212 * L_3 = __this->get_mTrackableBehaviour_2();
		NullCheck(L_3);
		String_t* L_4 = TrackableBehaviour_get_TrackableName_m3644057705(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3820270571, L_4, _stringLiteral3073488411, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(7 /* System.Void DefaultTrackableEventHandler::OnTrackingFound() */, __this);
		goto IL_007d;
	}

IL_003f:
	{
		int32_t L_6 = ___previousStatus0;
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_7 = ___newStatus1;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0077;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_8 = __this->get_mTrackableBehaviour_2();
		NullCheck(L_8);
		String_t* L_9 = TrackableBehaviour_get_TrackableName_m3644057705(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3820270571, L_9, _stringLiteral3483481617, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(8 /* System.Void DefaultTrackableEventHandler::OnTrackingLost() */, __this);
		goto IL_007d;
	}

IL_0077:
	{
		VirtActionInvoker0::Invoke(8 /* System.Void DefaultTrackableEventHandler::OnTrackingLost() */, __this);
	}

IL_007d:
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnTrackingFound()
extern "C"  void DefaultTrackableEventHandler_OnTrackingFound_m4202593607 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnTrackingFound_m4202593607_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t3210418286* V_0 = NULL;
	ColliderU5BU5D_t4234922487* V_1 = NULL;
	CanvasU5BU5D_t682926938* V_2 = NULL;
	Renderer_t2627027031 * V_3 = NULL;
	RendererU5BU5D_t3210418286* V_4 = NULL;
	int32_t V_5 = 0;
	Collider_t1773347010 * V_6 = NULL;
	ColliderU5BU5D_t4234922487* V_7 = NULL;
	int32_t V_8 = 0;
	Canvas_t3310196443 * V_9 = NULL;
	CanvasU5BU5D_t682926938* V_10 = NULL;
	int32_t V_11 = 0;
	{
		RendererU5BU5D_t3210418286* L_0 = Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var);
		V_0 = L_0;
		ColliderU5BU5D_t4234922487* L_1 = Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var);
		V_1 = L_1;
		CanvasU5BU5D_t682926938* L_2 = Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007_RuntimeMethod_var);
		V_2 = L_2;
		RendererU5BU5D_t3210418286* L_3 = V_0;
		V_4 = L_3;
		V_5 = 0;
		goto IL_0036;
	}

IL_0023:
	{
		RendererU5BU5D_t3210418286* L_4 = V_4;
		int32_t L_5 = V_5;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Renderer_t2627027031 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		Renderer_t2627027031 * L_8 = V_3;
		NullCheck(L_8);
		Renderer_set_enabled_m1727253150(L_8, (bool)1, /*hidden argument*/NULL);
		int32_t L_9 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0036:
	{
		int32_t L_10 = V_5;
		RendererU5BU5D_t3210418286* L_11 = V_4;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_0023;
		}
	}
	{
		ColliderU5BU5D_t4234922487* L_12 = V_1;
		V_7 = L_12;
		V_8 = 0;
		goto IL_0061;
	}

IL_004c:
	{
		ColliderU5BU5D_t4234922487* L_13 = V_7;
		int32_t L_14 = V_8;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Collider_t1773347010 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		Collider_t1773347010 * L_17 = V_6;
		NullCheck(L_17);
		Collider_set_enabled_m1517463283(L_17, (bool)1, /*hidden argument*/NULL);
		int32_t L_18 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_19 = V_8;
		ColliderU5BU5D_t4234922487* L_20 = V_7;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_004c;
		}
	}
	{
		CanvasU5BU5D_t682926938* L_21 = V_2;
		V_10 = L_21;
		V_11 = 0;
		goto IL_008c;
	}

IL_0077:
	{
		CanvasU5BU5D_t682926938* L_22 = V_10;
		int32_t L_23 = V_11;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Canvas_t3310196443 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		Canvas_t3310196443 * L_26 = V_9;
		NullCheck(L_26);
		Behaviour_set_enabled_m20417929(L_26, (bool)1, /*hidden argument*/NULL);
		int32_t L_27 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_008c:
	{
		int32_t L_28 = V_11;
		CanvasU5BU5D_t682926938* L_29 = V_10;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
		{
			goto IL_0077;
		}
	}
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnTrackingLost()
extern "C"  void DefaultTrackableEventHandler_OnTrackingLost_m424172778 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnTrackingLost_m424172778_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t3210418286* V_0 = NULL;
	ColliderU5BU5D_t4234922487* V_1 = NULL;
	CanvasU5BU5D_t682926938* V_2 = NULL;
	Renderer_t2627027031 * V_3 = NULL;
	RendererU5BU5D_t3210418286* V_4 = NULL;
	int32_t V_5 = 0;
	Collider_t1773347010 * V_6 = NULL;
	ColliderU5BU5D_t4234922487* V_7 = NULL;
	int32_t V_8 = 0;
	Canvas_t3310196443 * V_9 = NULL;
	CanvasU5BU5D_t682926938* V_10 = NULL;
	int32_t V_11 = 0;
	{
		RendererU5BU5D_t3210418286* L_0 = Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var);
		V_0 = L_0;
		ColliderU5BU5D_t4234922487* L_1 = Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var);
		V_1 = L_1;
		CanvasU5BU5D_t682926938* L_2 = Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007_RuntimeMethod_var);
		V_2 = L_2;
		RendererU5BU5D_t3210418286* L_3 = V_0;
		V_4 = L_3;
		V_5 = 0;
		goto IL_0036;
	}

IL_0023:
	{
		RendererU5BU5D_t3210418286* L_4 = V_4;
		int32_t L_5 = V_5;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Renderer_t2627027031 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		Renderer_t2627027031 * L_8 = V_3;
		NullCheck(L_8);
		Renderer_set_enabled_m1727253150(L_8, (bool)0, /*hidden argument*/NULL);
		int32_t L_9 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0036:
	{
		int32_t L_10 = V_5;
		RendererU5BU5D_t3210418286* L_11 = V_4;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_0023;
		}
	}
	{
		ColliderU5BU5D_t4234922487* L_12 = V_1;
		V_7 = L_12;
		V_8 = 0;
		goto IL_0061;
	}

IL_004c:
	{
		ColliderU5BU5D_t4234922487* L_13 = V_7;
		int32_t L_14 = V_8;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Collider_t1773347010 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		Collider_t1773347010 * L_17 = V_6;
		NullCheck(L_17);
		Collider_set_enabled_m1517463283(L_17, (bool)0, /*hidden argument*/NULL);
		int32_t L_18 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_19 = V_8;
		ColliderU5BU5D_t4234922487* L_20 = V_7;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_004c;
		}
	}
	{
		CanvasU5BU5D_t682926938* L_21 = V_2;
		V_10 = L_21;
		V_11 = 0;
		goto IL_008c;
	}

IL_0077:
	{
		CanvasU5BU5D_t682926938* L_22 = V_10;
		int32_t L_23 = V_11;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Canvas_t3310196443 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		Canvas_t3310196443 * L_26 = V_9;
		NullCheck(L_26);
		Behaviour_set_enabled_m20417929(L_26, (bool)0, /*hidden argument*/NULL);
		int32_t L_27 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_008c:
	{
		int32_t L_28 = V_11;
		CanvasU5BU5D_t682926938* L_29 = V_10;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
		{
			goto IL_0077;
		}
	}
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
// System.Void DrillController::.ctor()
extern "C"  void DrillController__ctor_m2932943880 (DrillController_t3872647469 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DrillController::Update()
extern "C"  void DrillController_Update_m3578018862 (DrillController_t3872647469 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DrillController_Update_m3578018862_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_m_IsDrilling_2();
		if (!L_0)
		{
			goto IL_0078;
		}
	}
	{
		float L_1 = __this->get_drillLerpPercentage_3();
		if ((!(((float)L_1) < ((float)(1.0f)))))
		{
			goto IL_0078;
		}
	}
	{
		float L_2 = __this->get_drillLerpPercentage_3();
		float L_3 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_drillLerpPercentage_3(((float)il2cpp_codegen_add((float)L_2, (float)((float)il2cpp_codegen_multiply((float)L_3, (float)(3.0f))))));
		float L_4 = __this->get_drillLerpPercentage_3();
		if ((!(((float)L_4) > ((float)(1.0f)))))
		{
			goto IL_004e;
		}
	}
	{
		__this->set_drillLerpPercentage_3((1.0f));
	}

IL_004e:
	{
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, (5.0f), L_6, /*hidden argument*/NULL);
		float L_8 = __this->get_drillLerpPercentage_3();
		Vector3_t3722313464  L_9 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localScale_m3053443106(L_5, L_9, /*hidden argument*/NULL);
		goto IL_00eb;
	}

IL_0078:
	{
		bool L_10 = __this->get_m_IsDrilling_2();
		if (L_10)
		{
			goto IL_00eb;
		}
	}
	{
		float L_11 = __this->get_drillLerpPercentage_3();
		if ((!(((float)L_11) > ((float)(0.0f)))))
		{
			goto IL_00eb;
		}
	}
	{
		float L_12 = __this->get_drillLerpPercentage_3();
		float L_13 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_drillLerpPercentage_3(((float)il2cpp_codegen_subtract((float)L_12, (float)((float)il2cpp_codegen_multiply((float)L_13, (float)(3.0f))))));
		float L_14 = __this->get_drillLerpPercentage_3();
		if ((!(((float)L_14) < ((float)(0.0f)))))
		{
			goto IL_00c6;
		}
	}
	{
		__this->set_drillLerpPercentage_3((0.0f));
	}

IL_00c6:
	{
		Transform_t3600365921 * L_15 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_16 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_17 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, (5.0f), L_16, /*hidden argument*/NULL);
		float L_18 = __this->get_drillLerpPercentage_3();
		Vector3_t3722313464  L_19 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_localScale_m3053443106(L_15, L_19, /*hidden argument*/NULL);
	}

IL_00eb:
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
// System.Void Drone::.ctor()
extern "C"  void Drone__ctor_m4165782760 (Drone_t259598734 * __this, const RuntimeMethod* method)
{
	{
		Augmentation__ctor_m362621642(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Drone::OnEnter()
extern "C"  void Drone_OnEnter_m2969171167 (Drone_t259598734 * __this, const RuntimeMethod* method)
{
	{
		Augmentation_OnEnter_m744463222(__this, /*hidden argument*/NULL);
		Action_t1264377477 * L_0 = ((Augmentation_t2596699517 *)__this)->get_m_EvtOnEnter_2();
		NullCheck(L_0);
		Action_Invoke_m937035532(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Drone::OnExit()
extern "C"  void Drone_OnExit_m2675845545 (Drone_t259598734 * __this, const RuntimeMethod* method)
{
	{
		Augmentation_OnExit_m971700158(__this, /*hidden argument*/NULL);
		Drone_set_IsScanning_m2450867114(__this, (bool)0, /*hidden argument*/NULL);
		Drone_set_IsFacingObject_m27084245(__this, (bool)0, /*hidden argument*/NULL);
		Drone_set_IsShowingLaser_m723721754(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Drone::AnimEvt_StopScanning()
extern "C"  void Drone_AnimEvt_StopScanning_m2577662375 (Drone_t259598734 * __this, const RuntimeMethod* method)
{
	{
		Drone_set_IsScanning_m2450867114(__this, (bool)0, /*hidden argument*/NULL);
		Drone_set_IsShowingLaser_m723721754(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Drone::AnimEvt_StartScanning()
extern "C"  void Drone_AnimEvt_StartScanning_m2570250694 (Drone_t259598734 * __this, const RuntimeMethod* method)
{
	{
		Drone_set_IsShowingLaser_m723721754(__this, (bool)1, /*hidden argument*/NULL);
		Drone_set_IsScanning_m2450867114(__this, (bool)1, /*hidden argument*/NULL);
		Drone_set_IsFacingObject_m27084245(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Drone::get_IsFacingObject()
extern "C"  bool Drone_get_IsFacingObject_m4075302079 (Drone_t259598734 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Drone_get_IsFacingObject_m4075302079_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = ((Augmentation_t2596699517 *)__this)->get_animator_4();
		NullCheck(L_0);
		bool L_1 = Animator_GetBool_m2865822416(L_0, _stringLiteral779085831, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Drone::set_IsFacingObject(System.Boolean)
extern "C"  void Drone_set_IsFacingObject_m27084245 (Drone_t259598734 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Drone_set_IsFacingObject_m27084245_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = ((Augmentation_t2596699517 *)__this)->get_animator_4();
		bool L_1 = ___value0;
		NullCheck(L_0);
		Animator_SetBool_m234840832(L_0, _stringLiteral779085831, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Drone::get_IsScanning()
extern "C"  bool Drone_get_IsScanning_m3816545038 (Drone_t259598734 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Drone_get_IsScanning_m3816545038_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = ((Augmentation_t2596699517 *)__this)->get_animator_4();
		NullCheck(L_0);
		bool L_1 = Animator_GetBool_m2865822416(L_0, _stringLiteral2770001329, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Drone::set_IsScanning(System.Boolean)
extern "C"  void Drone_set_IsScanning_m2450867114 (Drone_t259598734 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Drone_set_IsScanning_m2450867114_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = ((Augmentation_t2596699517 *)__this)->get_animator_4();
		bool L_1 = ___value0;
		NullCheck(L_0);
		Animator_SetBool_m234840832(L_0, _stringLiteral2770001329, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Drone::get_IsShowingLaser()
extern "C"  bool Drone_get_IsShowingLaser_m2807121319 (Drone_t259598734 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Drone_get_IsShowingLaser_m2807121319_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = ((Augmentation_t2596699517 *)__this)->get_animator_4();
		NullCheck(L_0);
		bool L_1 = Animator_GetBool_m2865822416(L_0, _stringLiteral1093476094, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Drone::set_IsShowingLaser(System.Boolean)
extern "C"  void Drone_set_IsShowingLaser_m723721754 (Drone_t259598734 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Drone_set_IsShowingLaser_m723721754_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = ((Augmentation_t2596699517 *)__this)->get_animator_4();
		bool L_1 = ___value0;
		NullCheck(L_0);
		Animator_SetBool_m234840832(L_0, _stringLiteral1093476094, L_1, /*hidden argument*/NULL);
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
// System.Void FadeObject::.ctor()
extern "C"  void FadeObject__ctor_m2273968313 (FadeObject_t1880495183 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_FadeDuration_3((1.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FadeObject::Awake()
extern "C"  void FadeObject_Awake_m679399172 (FadeObject_t1880495183 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FadeObject_Awake_m679399172_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t2627027031 * V_0 = NULL;
	RendererU5BU5D_t3210418286* V_1 = NULL;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float G_B7_0 = 0.0f;
	{
		RendererU5BU5D_t3210418286* L_0 = __this->get_m_RenderersToFade_4();
		V_1 = L_0;
		V_2 = 0;
		goto IL_0027;
	}

IL_000e:
	{
		RendererU5BU5D_t3210418286* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Renderer_t2627027031 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		Renderer_t2627027031 * L_5 = V_0;
		Renderer_t2627027031 * L_6 = V_0;
		NullCheck(L_6);
		Material_t340375123 * L_7 = Renderer_get_sharedMaterial_m1936632411(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Material_t340375123 * L_8 = Object_Instantiate_TisMaterial_t340375123_m2709937581(NULL /*static, unused*/, L_7, /*hidden argument*/Object_Instantiate_TisMaterial_t340375123_m2709937581_RuntimeMethod_var);
		NullCheck(L_5);
		Renderer_set_sharedMaterial_m2374163090(L_5, L_8, /*hidden argument*/NULL);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0027:
	{
		int32_t L_10 = V_2;
		RendererU5BU5D_t3210418286* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		bool L_12 = __this->get_isInitialOpacitySet_6();
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		bool L_13 = __this->get_m_IsVisible_2();
		if (!L_13)
		{
			goto IL_0050;
		}
	}
	{
		G_B7_0 = (1.0f);
		goto IL_0055;
	}

IL_0050:
	{
		G_B7_0 = (0.0f);
	}

IL_0055:
	{
		V_3 = G_B7_0;
		float L_14 = V_3;
		FadeObject_SetInitialOpacity_m1171621798(__this, L_14, /*hidden argument*/NULL);
	}

IL_005d:
	{
		return;
	}
}
// System.Void FadeObject::Update()
extern "C"  void FadeObject_Update_m4012621983 (FadeObject_t1880495183 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_IsVisible_2();
		if (!L_0)
		{
			goto IL_0067;
		}
	}
	{
		float L_1 = __this->get_fadeRatio_5();
		if ((!(((float)L_1) < ((float)(1.0f)))))
		{
			goto IL_0067;
		}
	}
	{
		float L_2 = __this->get_fadeRatio_5();
		float L_3 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = __this->get_m_FadeDuration_3();
		__this->set_fadeRatio_5(((float)il2cpp_codegen_add((float)L_2, (float)((float)((float)L_3/(float)L_4)))));
		float L_5 = __this->get_fadeRatio_5();
		if ((!(((float)L_5) > ((float)(1.0f)))))
		{
			goto IL_0056;
		}
	}
	{
		__this->set_fadeRatio_5((1.0f));
		FadeObject_SetRenderingMode_m278453982(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0056:
	{
		float L_6 = __this->get_fadeRatio_5();
		FadeObject_SetOpacity_m1467358730(__this, L_6, /*hidden argument*/NULL);
		goto IL_00c9;
	}

IL_0067:
	{
		bool L_7 = __this->get_m_IsVisible_2();
		if (L_7)
		{
			goto IL_00c9;
		}
	}
	{
		float L_8 = __this->get_fadeRatio_5();
		if ((!(((float)L_8) > ((float)(0.0f)))))
		{
			goto IL_00c9;
		}
	}
	{
		float L_9 = __this->get_fadeRatio_5();
		float L_10 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_11 = __this->get_m_FadeDuration_3();
		__this->set_fadeRatio_5(((float)il2cpp_codegen_subtract((float)L_9, (float)((float)((float)L_10/(float)L_11)))));
		float L_12 = __this->get_fadeRatio_5();
		if ((!(((float)L_12) < ((float)(0.0f)))))
		{
			goto IL_00b6;
		}
	}
	{
		__this->set_fadeRatio_5((0.0f));
	}

IL_00b6:
	{
		float L_13 = __this->get_fadeRatio_5();
		FadeObject_SetOpacity_m1467358730(__this, L_13, /*hidden argument*/NULL);
		FadeObject_SetRenderingMode_m278453982(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_00c9:
	{
		return;
	}
}
// System.Void FadeObject::SetInitialOpacity(System.Single)
extern "C"  void FadeObject_SetInitialOpacity_m1171621798 (FadeObject_t1880495183 * __this, float ___opacity0, const RuntimeMethod* method)
{
	{
		float L_0 = ___opacity0;
		__this->set_fadeRatio_5(L_0);
		float L_1 = ___opacity0;
		FadeObject_SetOpacity_m1467358730(__this, L_1, /*hidden argument*/NULL);
		float L_2 = ___opacity0;
		FadeObject_SetRenderingMode_m278453982(__this, (bool)((((int32_t)((!(((float)L_2) >= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		__this->set_isInitialOpacitySet_6((bool)1);
		return;
	}
}
// System.Void FadeObject::SetOpacity(System.Single)
extern "C"  void FadeObject_SetOpacity_m1467358730 (FadeObject_t1880495183 * __this, float ___opacity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FadeObject_SetOpacity_m1467358730_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t2627027031 * V_0 = NULL;
	RendererU5BU5D_t3210418286* V_1 = NULL;
	int32_t V_2 = 0;
	Color_t2555686324  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		RendererU5BU5D_t3210418286* L_0 = __this->get_m_RenderersToFade_4();
		V_1 = L_0;
		V_2 = 0;
		goto IL_0055;
	}

IL_000e:
	{
		RendererU5BU5D_t3210418286* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Renderer_t2627027031 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		Renderer_t2627027031 * L_5 = V_0;
		NullCheck(L_5);
		Material_t340375123 * L_6 = Renderer_get_sharedMaterial_m1936632411(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7 = Material_HasProperty_m2704238996(L_6, _stringLiteral3957048425, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		Renderer_t2627027031 * L_8 = V_0;
		NullCheck(L_8);
		Material_t340375123 * L_9 = Renderer_get_sharedMaterial_m1936632411(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Color_t2555686324  L_10 = Material_GetColor_m2707324984(L_9, _stringLiteral3957048425, /*hidden argument*/NULL);
		V_3 = L_10;
		float L_11 = ___opacity0;
		(&V_3)->set_a_3(L_11);
		Renderer_t2627027031 * L_12 = V_0;
		NullCheck(L_12);
		Material_t340375123 * L_13 = Renderer_get_sharedMaterial_m1936632411(L_12, /*hidden argument*/NULL);
		Color_t2555686324  L_14 = V_3;
		NullCheck(L_13);
		Material_SetColor_m2020215303(L_13, _stringLiteral3957048425, L_14, /*hidden argument*/NULL);
	}

IL_0051:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0055:
	{
		int32_t L_16 = V_2;
		RendererU5BU5D_t3210418286* L_17 = V_1;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void FadeObject::SetRenderingMode(System.Boolean)
extern "C"  void FadeObject_SetRenderingMode_m278453982 (FadeObject_t1880495183 * __this, bool ___isOpaque0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FadeObject_SetRenderingMode_m278453982_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t2627027031 * V_0 = NULL;
	RendererU5BU5D_t3210418286* V_1 = NULL;
	int32_t V_2 = 0;
	Material_t340375123 * V_3 = NULL;
	{
		RendererU5BU5D_t3210418286* L_0 = __this->get_m_RenderersToFade_4();
		V_1 = L_0;
		V_2 = 0;
		goto IL_00c5;
	}

IL_000e:
	{
		RendererU5BU5D_t3210418286* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Renderer_t2627027031 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		Renderer_t2627027031 * L_5 = V_0;
		NullCheck(L_5);
		Material_t340375123 * L_6 = Renderer_get_sharedMaterial_m1936632411(L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		bool L_7 = ___isOpaque0;
		if (!L_7)
		{
			goto IL_0070;
		}
	}
	{
		Material_t340375123 * L_8 = V_3;
		NullCheck(L_8);
		Material_SetInt_m1783799378(L_8, _stringLiteral731044324, 1, /*hidden argument*/NULL);
		Material_t340375123 * L_9 = V_3;
		NullCheck(L_9);
		Material_SetInt_m1783799378(L_9, _stringLiteral1668731369, 0, /*hidden argument*/NULL);
		Material_t340375123 * L_10 = V_3;
		NullCheck(L_10);
		Material_SetInt_m1783799378(L_10, _stringLiteral1810507830, 1, /*hidden argument*/NULL);
		Material_t340375123 * L_11 = V_3;
		NullCheck(L_11);
		Material_DisableKeyword_m1245091008(L_11, _stringLiteral2191403227, /*hidden argument*/NULL);
		Material_t340375123 * L_12 = V_3;
		NullCheck(L_12);
		Material_DisableKeyword_m1245091008(L_12, _stringLiteral3949742573, /*hidden argument*/NULL);
		Material_t340375123 * L_13 = V_3;
		NullCheck(L_13);
		Material_DisableKeyword_m1245091008(L_13, _stringLiteral2875383692, /*hidden argument*/NULL);
		Material_t340375123 * L_14 = V_3;
		NullCheck(L_14);
		Material_set_renderQueue_m2897975967(L_14, (-1), /*hidden argument*/NULL);
		goto IL_00c1;
	}

IL_0070:
	{
		Material_t340375123 * L_15 = V_3;
		NullCheck(L_15);
		Material_SetInt_m1783799378(L_15, _stringLiteral731044324, 5, /*hidden argument*/NULL);
		Material_t340375123 * L_16 = V_3;
		NullCheck(L_16);
		Material_SetInt_m1783799378(L_16, _stringLiteral1668731369, ((int32_t)10), /*hidden argument*/NULL);
		Material_t340375123 * L_17 = V_3;
		NullCheck(L_17);
		Material_SetInt_m1783799378(L_17, _stringLiteral1810507830, 0, /*hidden argument*/NULL);
		Material_t340375123 * L_18 = V_3;
		NullCheck(L_18);
		Material_DisableKeyword_m1245091008(L_18, _stringLiteral2191403227, /*hidden argument*/NULL);
		Material_t340375123 * L_19 = V_3;
		NullCheck(L_19);
		Material_EnableKeyword_m329692301(L_19, _stringLiteral3949742573, /*hidden argument*/NULL);
		Material_t340375123 * L_20 = V_3;
		NullCheck(L_20);
		Material_DisableKeyword_m1245091008(L_20, _stringLiteral2875383692, /*hidden argument*/NULL);
		Material_t340375123 * L_21 = V_3;
		NullCheck(L_21);
		Material_set_renderQueue_m2897975967(L_21, ((int32_t)3000), /*hidden argument*/NULL);
	}

IL_00c1:
	{
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_00c5:
	{
		int32_t L_23 = V_2;
		RendererU5BU5D_t3210418286* L_24 = V_1;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_24)->max_length)))))))
		{
			goto IL_000e;
		}
	}
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
// System.Void FrameRateSettings::.ctor()
extern "C"  void FrameRateSettings__ctor_m863056381 (FrameRateSettings_t3598747490 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FrameRateSettings::Start()
extern "C"  void FrameRateSettings_Start_m580618101 (FrameRateSettings_t3598747490 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FrameRateSettings_Start_m580618101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaARController_t1876945237_il2cpp_TypeInfo_var);
		VuforiaARController_t1876945237 * L_0 = VuforiaARController_get_Instance_m1100644214(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_1 = (intptr_t)FrameRateSettings_OnVuforiaStarted_m2069567078_RuntimeMethod_var;
		Action_t1264377477 * L_2 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VuforiaARController_RegisterVuforiaStartedCallback_m3258152770(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FrameRateSettings::OnVuforiaStarted()
extern "C"  void FrameRateSettings_OnVuforiaStarted_m2069567078 (FrameRateSettings_t3598747490 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FrameRateSettings_OnVuforiaStarted_m2069567078_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRenderer_t3433045970_il2cpp_TypeInfo_var);
		VuforiaRenderer_t3433045970 * L_0 = VuforiaRenderer_get_Instance_m1013623488(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VuforiaRenderer_GetRecommendedFps_m561576480(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = Application_get_targetFrameRate_m1077623221(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral3233180876, L_6, _stringLiteral4120677989, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_0;
		Application_set_targetFrameRate_m3682352535(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
	}

IL_0037:
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
// System.Void InitErrorHandler::.ctor()
extern "C"  void InitErrorHandler__ctor_m3192923495 (InitErrorHandler_t2159361531 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InitErrorHandler::Awake()
extern "C"  void InitErrorHandler_Awake_m3752167262 (InitErrorHandler_t2159361531 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InitErrorHandler_Awake_m3752167262_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t1901882714 * L_0 = __this->get_errorText_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		Text_t1901882714 * L_2 = __this->get_errorText_2();
		NullCheck(L_2);
		CanvasU5BU5D_t682926938* L_3 = Component_GetComponentsInParent_TisCanvas_t3310196443_m1039379662(L_2, (bool)1, /*hidden argument*/Component_GetComponentsInParent_TisCanvas_t3310196443_m1039379662_RuntimeMethod_var);
		NullCheck(L_3);
		int32_t L_4 = 0;
		Canvas_t3310196443 * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		__this->set_errorCanvas_3(L_5);
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntime_t1949122020_il2cpp_TypeInfo_var);
		VuforiaRuntime_t1949122020 * L_6 = VuforiaRuntime_get_Instance_m1058251676(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_7 = (intptr_t)InitErrorHandler_OnInitError_m2884619828_RuntimeMethod_var;
		Action_1_t3593217305 * L_8 = (Action_1_t3593217305 *)il2cpp_codegen_object_new(Action_1_t3593217305_il2cpp_TypeInfo_var);
		Action_1__ctor_m2713332384(L_8, __this, L_7, /*hidden argument*/Action_1__ctor_m2713332384_RuntimeMethod_var);
		NullCheck(L_6);
		VuforiaRuntime_RegisterVuforiaInitErrorCallback_m2728879505(L_6, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InitErrorHandler::OnInitError(Vuforia.VuforiaUnity/InitError)
extern "C"  void InitErrorHandler_OnInitError_m2884619828 (InitErrorHandler_t2159361531 * __this, int32_t ___error0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___error0;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___error0;
		InitErrorHandler_ShowErrorMessage_m1141628225(__this, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	{
		return;
	}
}
// System.Void InitErrorHandler::ShowErrorMessage(Vuforia.VuforiaUnity/InitError)
extern "C"  void InitErrorHandler_ShowErrorMessage_m1141628225 (InitErrorHandler_t2159361531 * __this, int32_t ___errorCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InitErrorHandler_ShowErrorMessage_m1141628225_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = ___errorCode0;
		switch (((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)10))))
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_00ac;
			}
			case 2:
			{
				goto IL_0091;
			}
			case 3:
			{
				goto IL_0071;
			}
			case 4:
			{
				goto IL_0081;
			}
			case 5:
			{
				goto IL_0056;
			}
			case 6:
			{
				goto IL_0046;
			}
			case 7:
			{
				goto IL_00cc;
			}
			case 8:
			{
				goto IL_00eb;
			}
			case 9:
			{
				goto IL_00fb;
			}
		}
	}
	{
		goto IL_010b;
	}

IL_0036:
	{
		__this->set_errorMsg_5(_stringLiteral3279329212);
		goto IL_010b;
	}

IL_0046:
	{
		__this->set_errorMsg_5(_stringLiteral3258121531);
		goto IL_010b;
	}

IL_0056:
	{
		String_t* L_1 = InitErrorHandler_getKeyInfo_m2220979040(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1347979092, L_1, /*hidden argument*/NULL);
		__this->set_errorMsg_5(L_2);
		goto IL_010b;
	}

IL_0071:
	{
		__this->set_errorMsg_5(_stringLiteral2959890895);
		goto IL_010b;
	}

IL_0081:
	{
		__this->set_errorMsg_5(_stringLiteral2293327149);
		goto IL_010b;
	}

IL_0091:
	{
		String_t* L_3 = InitErrorHandler_getKeyInfo_m2220979040(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2746077084, L_3, /*hidden argument*/NULL);
		__this->set_errorMsg_5(L_4);
		goto IL_010b;
	}

IL_00ac:
	{
		String_t* L_5 = InitErrorHandler_getKeyInfo_m2220979040(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral276390372, L_5, _stringLiteral1119693748, /*hidden argument*/NULL);
		__this->set_errorMsg_5(L_6);
		goto IL_010b;
	}

IL_00cc:
	{
		String_t* L_7 = Application_get_productName_m2401755738(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3183081100, L_7, _stringLiteral868600955, /*hidden argument*/NULL);
		__this->set_errorMsg_5(L_8);
		goto IL_010b;
	}

IL_00eb:
	{
		__this->set_errorMsg_5(_stringLiteral3122929577);
		goto IL_010b;
	}

IL_00fb:
	{
		__this->set_errorMsg_5(_stringLiteral3567432369);
		goto IL_010b;
	}

IL_010b:
	{
		RuntimeObject * L_9 = Box(InitError_t3420749710_il2cpp_TypeInfo_var, (&___errorCode0));
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		___errorCode0 = *(int32_t*)UnBox(L_9);
		NullCheck(L_10);
		String_t* L_11 = String_Replace_m1273907647(L_10, _stringLiteral3452614641, _stringLiteral3452614528, /*hidden argument*/NULL);
		String_t* L_12 = __this->get_errorMsg_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral229317972, L_11, _stringLiteral2072581803, L_12, /*hidden argument*/NULL);
		__this->set_errorMsg_5(L_13);
		String_t* L_14 = __this->get_errorMsg_5();
		String_t* L_15 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_14);
		String_t* L_16 = String_Replace_m1273907647(L_14, _stringLiteral229317972, L_15, /*hidden argument*/NULL);
		String_t* L_17 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_16);
		String_t* L_18 = String_Replace_m1273907647(L_16, _stringLiteral2642543365, L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		ObjectU5BU5D_t2843939325* L_19 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral3752705136);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3752705136);
		ObjectU5BU5D_t2843939325* L_20 = L_19;
		int32_t L_21 = ___errorCode0;
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(InitError_t3420749710_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_23);
		ObjectU5BU5D_t2843939325* L_24 = L_20;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral3453007782);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3453007782);
		ObjectU5BU5D_t2843939325* L_25 = L_24;
		String_t* L_26 = V_0;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_26);
		String_t* L_27 = String_Concat_m2971454694(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		Text_t1901882714 * L_28 = __this->get_errorText_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_29 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_01b5;
		}
	}
	{
		Text_t1901882714 * L_30 = __this->get_errorText_2();
		String_t* L_31 = __this->get_errorMsg_5();
		NullCheck(L_30);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_30, L_31);
	}

IL_01b5:
	{
		Canvas_t3310196443 * L_32 = __this->get_errorCanvas_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_33 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_01fc;
		}
	}
	{
		Canvas_t3310196443 * L_34 = __this->get_errorCanvas_3();
		NullCheck(L_34);
		Transform_t3600365921 * L_35 = Component_get_transform_m3162698980(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_t3600365921 * L_36 = Transform_get_parent_m835071599(L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_37 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_36);
		Transform_set_position_m3387557959(L_36, L_37, /*hidden argument*/NULL);
		Canvas_t3310196443 * L_38 = __this->get_errorCanvas_3();
		NullCheck(L_38);
		GameObject_t1113636619 * L_39 = Component_get_gameObject_m442555142(L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		GameObject_SetActive_m796801857(L_39, (bool)1, /*hidden argument*/NULL);
		Canvas_t3310196443 * L_40 = __this->get_errorCanvas_3();
		NullCheck(L_40);
		Behaviour_set_enabled_m20417929(L_40, (bool)1, /*hidden argument*/NULL);
	}

IL_01fc:
	{
		return;
	}
}
// System.String InitErrorHandler::getKeyInfo()
extern "C"  String_t* InitErrorHandler_getKeyInfo_m2220979040 (InitErrorHandler_t2159361531 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InitErrorHandler_getKeyInfo_m2220979040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var);
		VuforiaConfiguration_t1763229349 * L_0 = VuforiaConfiguration_get_Instance_m3335903280(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GenericVuforiaConfiguration_t3697830469 * L_1 = VuforiaConfiguration_get_Vuforia_m1588208597(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GenericVuforiaConfiguration_get_LicenseKey_m2270076687(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m3847582255(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0079;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_5 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)7));
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral1431967569);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1431967569);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		String_t* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m3847582255(L_7, /*hidden argument*/NULL);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_10);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		ObjectU5BU5D_t2843939325* L_11 = L_6;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral3797279721);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3797279721);
		ObjectU5BU5D_t2843939325* L_12 = L_11;
		String_t* L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = String_Substring_m1610150815(L_13, 0, 5, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		ObjectU5BU5D_t2843939325* L_15 = L_12;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral1108443480);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral1108443480);
		ObjectU5BU5D_t2843939325* L_16 = L_15;
		String_t* L_17 = V_0;
		String_t* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m3847582255(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_20 = String_Substring_m1610150815(L_17, ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)5)), 5, /*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_20);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_20);
		ObjectU5BU5D_t2843939325* L_21 = L_16;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral2072975055);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral2072975055);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m2971454694(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		goto IL_00af;
	}

IL_0079:
	{
		ObjectU5BU5D_t2843939325* L_23 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral1431967569);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1431967569);
		ObjectU5BU5D_t2843939325* L_24 = L_23;
		String_t* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = String_get_Length_m3847582255(L_25, /*hidden argument*/NULL);
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_28);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_28);
		ObjectU5BU5D_t2843939325* L_29 = L_24;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral1498400317);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral1498400317);
		ObjectU5BU5D_t2843939325* L_30 = L_29;
		String_t* L_31 = V_0;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_31);
		ObjectU5BU5D_t2843939325* L_32 = L_30;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteral2072975055);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral2072975055);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_33 = String_Concat_m2971454694(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		V_1 = L_33;
	}

IL_00af:
	{
		String_t* L_34 = V_1;
		return L_34;
	}
}
// System.Void InitErrorHandler::OnErrorDialogClose()
extern "C"  void InitErrorHandler_OnErrorDialogClose_m1431281891 (InitErrorHandler_t2159361531 * __this, const RuntimeMethod* method)
{
	{
		Application_Quit_m470877999(NULL /*static, unused*/, /*hidden argument*/NULL);
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
// System.Void LoadingScreen::.ctor()
extern "C"  void LoadingScreen__ctor_m3828008876 (LoadingScreen_t2154736699 * __this, const RuntimeMethod* method)
{
	{
		__this->set_mChangeLevel_2((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LoadingScreen::Start()
extern "C"  void LoadingScreen_Start_m3016827352 (LoadingScreen_t2154736699 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoadingScreen_Start_m3016827352_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RawImage_t3182918964 * L_0 = Component_GetComponentInChildren_TisRawImage_t3182918964_m4000174733(__this, /*hidden argument*/Component_GetComponentInChildren_TisRawImage_t3182918964_m4000174733_RuntimeMethod_var);
		__this->set_mUISpinner_3(L_0);
		Application_set_backgroundLoadingPriority_m1116453950(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		__this->set_mChangeLevel_2((bool)1);
		return;
	}
}
// System.Void LoadingScreen::Update()
extern "C"  void LoadingScreen_Update_m69320718 (LoadingScreen_t2154736699 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoadingScreen_Update_m69320718_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RawImage_t3182918964 * L_0 = __this->get_mUISpinner_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RawImage_t3182918964 * L_2 = __this->get_mUISpinner_3();
		NullCheck(L_2);
		RectTransform_t3704657025 * L_3 = Graphic_get_rectTransform_m1167152468(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_5 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_Rotate_m1749346957(L_3, L_4, ((float)il2cpp_codegen_multiply((float)(90.0f), (float)L_5)), /*hidden argument*/NULL);
	}

IL_0030:
	{
		bool L_6 = __this->get_mChangeLevel_2();
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		LoadingScreen_LoadNextSceneAsync_m3801488710(__this, /*hidden argument*/NULL);
		__this->set_mChangeLevel_2((bool)0);
	}

IL_0048:
	{
		return;
	}
}
// System.Void LoadingScreen::LoadNextSceneAsync()
extern "C"  void LoadingScreen_LoadNextSceneAsync_m3801488710 (LoadingScreen_t2154736699 * __this, const RuntimeMethod* method)
{
	Scene_t2348375561  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Scene_t2348375561  L_0 = SceneManager_GetActiveScene_m1825203488(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Scene_get_buildIndex_m270272723((&V_0), /*hidden argument*/NULL);
		SceneManager_LoadSceneAsync_m3240398665(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
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
// System.Void MenuAnimator::.ctor()
extern "C"  void MenuAnimator__ctor_m2002699033 (MenuAnimator_t2112910832 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuAnimator__ctor_m2002699033_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_mVisiblePos_2(L_0);
		Vector3_t3722313464  L_1 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Vector3_op_UnaryNegation_m1951478815(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_2, (2000.0f), /*hidden argument*/NULL);
		__this->set_mInvisiblePos_3(L_3);
		__this->set_SlidingTime_8((0.3f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuAnimator::Start()
extern "C"  void MenuAnimator_Start_m1688760679 (MenuAnimator_t2112910832 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuAnimator_Start_m1688760679_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Vector3_op_UnaryNegation_m1951478815(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_1, (((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_2))))), /*hidden argument*/NULL);
		__this->set_mInvisiblePos_3(L_3);
		__this->set_mVisibility_4((0.0f));
		__this->set_mVisible_5((bool)0);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = __this->get_mInvisiblePos_3();
		NullCheck(L_4);
		Transform_set_position_m3387557959(L_4, L_5, /*hidden argument*/NULL);
		CanvasU5BU5D_t682926938* L_6 = Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007_RuntimeMethod_var);
		NullCheck(L_6);
		int32_t L_7 = 0;
		Canvas_t3310196443 * L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		__this->set_mCanvas_6(L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		MenuOptions_t1951716431 * L_9 = Object_FindObjectOfType_TisMenuOptions_t1951716431_m1050906446(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisMenuOptions_t1951716431_m1050906446_RuntimeMethod_var);
		__this->set_mMenuOptions_7(L_9);
		return;
	}
}
// System.Void MenuAnimator::Update()
extern "C"  void MenuAnimator_Update_m3695532741 (MenuAnimator_t2112910832 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuAnimator_Update_m3695532741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Vector3_op_UnaryNegation_m1951478815(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_1, (((float)((float)L_2))), /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_3, (2.0f), /*hidden argument*/NULL);
		__this->set_mInvisiblePos_3(L_4);
		bool L_5 = __this->get_mVisible_5();
		if (!L_5)
		{
			goto IL_00be;
		}
	}
	{
		Canvas_t3310196443 * L_6 = __this->get_mCanvas_6();
		NullCheck(L_6);
		GameObject_t1113636619 * L_7 = Component_get_gameObject_m442555142(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_m796801857(L_7, (bool)1, /*hidden argument*/NULL);
		Canvas_t3310196443 * L_8 = __this->get_mCanvas_6();
		NullCheck(L_8);
		bool L_9 = Behaviour_get_enabled_m753527255(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		Canvas_t3310196443 * L_10 = __this->get_mCanvas_6();
		NullCheck(L_10);
		Behaviour_set_enabled_m20417929(L_10, (bool)1, /*hidden argument*/NULL);
	}

IL_005d:
	{
		float L_11 = __this->get_mVisibility_4();
		if ((!(((float)L_11) < ((float)(1.0f)))))
		{
			goto IL_00b9;
		}
	}
	{
		float L_12 = __this->get_mVisibility_4();
		float L_13 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_14 = __this->get_SlidingTime_8();
		__this->set_mVisibility_4(((float)il2cpp_codegen_add((float)L_12, (float)((float)((float)L_13/(float)L_14)))));
		float L_15 = __this->get_mVisibility_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_16 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		__this->set_mVisibility_4(L_16);
		Transform_t3600365921 * L_17 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_18 = __this->get_mInvisiblePos_3();
		Vector3_t3722313464  L_19 = __this->get_mVisiblePos_2();
		float L_20 = __this->get_mVisibility_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_21 = Vector3_Slerp_m802114822(NULL /*static, unused*/, L_18, L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_position_m3387557959(L_17, L_21, /*hidden argument*/NULL);
	}

IL_00b9:
	{
		goto IL_016d;
	}

IL_00be:
	{
		float L_22 = __this->get_mVisibility_4();
		if ((!(((float)L_22) > ((float)(0.0f)))))
		{
			goto IL_015c;
		}
	}
	{
		float L_23 = __this->get_mVisibility_4();
		float L_24 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_25 = __this->get_SlidingTime_8();
		__this->set_mVisibility_4(((float)il2cpp_codegen_subtract((float)L_23, (float)((float)((float)L_24/(float)L_25)))));
		float L_26 = __this->get_mVisibility_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_27 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		__this->set_mVisibility_4(L_27);
		Transform_t3600365921 * L_28 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_29 = __this->get_mInvisiblePos_3();
		Vector3_t3722313464  L_30 = __this->get_mVisiblePos_2();
		float L_31 = __this->get_mVisibility_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_32 = Vector3_Slerp_m802114822(NULL /*static, unused*/, L_29, L_30, L_31, /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_set_position_m3387557959(L_28, L_32, /*hidden argument*/NULL);
		float L_33 = __this->get_mVisibility_4();
		if ((!(((float)L_33) < ((float)(0.01f)))))
		{
			goto IL_0157;
		}
	}
	{
		Canvas_t3310196443 * L_34 = __this->get_mCanvas_6();
		NullCheck(L_34);
		bool L_35 = Behaviour_get_enabled_m753527255(L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_0157;
		}
	}
	{
		Canvas_t3310196443 * L_36 = __this->get_mCanvas_6();
		NullCheck(L_36);
		GameObject_t1113636619 * L_37 = Component_get_gameObject_m442555142(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		GameObject_SetActive_m796801857(L_37, (bool)0, /*hidden argument*/NULL);
		Canvas_t3310196443 * L_38 = __this->get_mCanvas_6();
		NullCheck(L_38);
		Behaviour_set_enabled_m20417929(L_38, (bool)0, /*hidden argument*/NULL);
	}

IL_0157:
	{
		goto IL_016d;
	}

IL_015c:
	{
		Transform_t3600365921 * L_39 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_40 = __this->get_mInvisiblePos_3();
		NullCheck(L_39);
		Transform_set_position_m3387557959(L_39, L_40, /*hidden argument*/NULL);
	}

IL_016d:
	{
		return;
	}
}
// System.Void MenuAnimator::Show()
extern "C"  void MenuAnimator_Show_m982174260 (MenuAnimator_t2112910832 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuAnimator_Show_m982174260_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_mVisible_5((bool)1);
		MenuOptions_t1951716431 * L_0 = __this->get_mMenuOptions_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		MenuOptions_t1951716431 * L_2 = __this->get_mMenuOptions_7();
		NullCheck(L_2);
		MenuOptions_UpdateUI_m2695051465(L_2, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void MenuAnimator::Hide()
extern "C"  void MenuAnimator_Hide_m1323916210 (MenuAnimator_t2112910832 * __this, const RuntimeMethod* method)
{
	{
		__this->set_mVisible_5((bool)0);
		return;
	}
}
// System.Boolean MenuAnimator::IsVisible()
extern "C"  bool MenuAnimator_IsVisible_m928022866 (MenuAnimator_t2112910832 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_mVisibility_4();
		return (bool)((((float)L_0) > ((float)(0.05f)))? 1 : 0);
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
// System.Void MenuOptions::.ctor()
extern "C"  void MenuOptions__ctor_m1083420456 (MenuOptions_t1951716431 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuOptions::Start()
extern "C"  void MenuOptions_Start_m2289807458 (MenuOptions_t1951716431 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuOptions_Start_m2289807458_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VuforiaARController_t1876945237 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		CameraSettings_t3152619780 * L_0 = Object_FindObjectOfType_TisCameraSettings_t3152619780_m4203198741(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisCameraSettings_t3152619780_m4203198741_RuntimeMethod_var);
		__this->set_mCamSettings_2(L_0);
		TrackableSettings_t2862243993 * L_1 = Object_FindObjectOfType_TisTrackableSettings_t2862243993_m1852430619(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisTrackableSettings_t2862243993_m1852430619_RuntimeMethod_var);
		__this->set_mTrackableSettings_3(L_1);
		MenuAnimator_t2112910832 * L_2 = Object_FindObjectOfType_TisMenuAnimator_t2112910832_m1830680649(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisMenuAnimator_t2112910832_m1830680649_RuntimeMethod_var);
		__this->set_mMenuAnim_4(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaARController_t1876945237_il2cpp_TypeInfo_var);
		VuforiaARController_t1876945237 * L_3 = VuforiaARController_get_Instance_m1100644214(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		VuforiaARController_t1876945237 * L_4 = V_0;
		intptr_t L_5 = (intptr_t)MenuOptions_OnPaused_m1134986695_RuntimeMethod_var;
		Action_1_t269755560 * L_6 = (Action_1_t269755560 *)il2cpp_codegen_object_new(Action_1_t269755560_il2cpp_TypeInfo_var);
		Action_1__ctor_m2079027267(L_6, __this, L_5, /*hidden argument*/Action_1__ctor_m2079027267_RuntimeMethod_var);
		NullCheck(L_4);
		VuforiaARController_RegisterOnPauseCallback_m1833237148(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuOptions::ShowAboutPage()
extern "C"  void MenuOptions_ShowAboutPage_m3278612116 (MenuOptions_t1951716431 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuOptions_ShowAboutPage_m3278612116_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1473361323, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuOptions::ToggleAutofocus()
extern "C"  void MenuOptions_ToggleAutofocus_m677591208 (MenuOptions_t1951716431 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuOptions_ToggleAutofocus_m677591208_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Toggle_t2735377061 * V_0 = NULL;
	{
		Toggle_t2735377061 * L_0 = MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125(__this, _stringLiteral683363693, /*hidden argument*/MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125_RuntimeMethod_var);
		V_0 = L_0;
		Toggle_t2735377061 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		CameraSettings_t3152619780 * L_3 = __this->get_mCamSettings_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		CameraSettings_t3152619780 * L_5 = __this->get_mCamSettings_2();
		Toggle_t2735377061 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = Toggle_get_isOn_m1428293607(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		CameraSettings_SwitchAutofocus_m1104105893(L_5, L_7, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return;
	}
}
// System.Void MenuOptions::ToggleTorch()
extern "C"  void MenuOptions_ToggleTorch_m1503051540 (MenuOptions_t1951716431 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuOptions_ToggleTorch_m1503051540_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Toggle_t2735377061 * V_0 = NULL;
	{
		Toggle_t2735377061 * L_0 = MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125(__this, _stringLiteral351316669, /*hidden argument*/MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125_RuntimeMethod_var);
		V_0 = L_0;
		Toggle_t2735377061 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0049;
		}
	}
	{
		CameraSettings_t3152619780 * L_3 = __this->get_mCamSettings_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		CameraSettings_t3152619780 * L_5 = __this->get_mCamSettings_2();
		Toggle_t2735377061 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = Toggle_get_isOn_m1428293607(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		CameraSettings_SwitchFlashTorch_m1540789541(L_5, L_7, /*hidden argument*/NULL);
		Toggle_t2735377061 * L_8 = V_0;
		CameraSettings_t3152619780 * L_9 = __this->get_mCamSettings_2();
		NullCheck(L_9);
		bool L_10 = CameraSettings_IsFlashTorchEnabled_m3875252701(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Toggle_set_isOn_m3548357404(L_8, L_10, /*hidden argument*/NULL);
	}

IL_0049:
	{
		return;
	}
}
// System.Void MenuOptions::ToggleFrontCamera()
extern "C"  void MenuOptions_ToggleFrontCamera_m1000892130 (MenuOptions_t1951716431 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuOptions_ToggleFrontCamera_m1000892130_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Toggle_t2735377061 * V_0 = NULL;
	CameraSettings_t3152619780 * G_B3_0 = NULL;
	CameraSettings_t3152619780 * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	CameraSettings_t3152619780 * G_B4_1 = NULL;
	{
		CameraSettings_t3152619780 * L_0 = __this->get_mCamSettings_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_006a;
		}
	}
	{
		CameraSettings_t3152619780 * L_2 = __this->get_mCamSettings_2();
		CameraSettings_t3152619780 * L_3 = __this->get_mCamSettings_2();
		NullCheck(L_3);
		bool L_4 = CameraSettings_IsFrontCameraActive_m282456036(L_3, /*hidden argument*/NULL);
		G_B2_0 = L_2;
		if (!L_4)
		{
			G_B3_0 = L_2;
			goto IL_002c;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_002d;
	}

IL_002c:
	{
		G_B4_0 = 2;
		G_B4_1 = G_B3_0;
	}

IL_002d:
	{
		NullCheck(G_B4_1);
		CameraSettings_SelectCamera_m387205834(G_B4_1, G_B4_0, /*hidden argument*/NULL);
		Toggle_t2735377061 * L_5 = MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125(__this, _stringLiteral351316669, /*hidden argument*/MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125_RuntimeMethod_var);
		V_0 = L_5;
		CameraSettings_t3152619780 * L_6 = __this->get_mCamSettings_2();
		NullCheck(L_6);
		bool L_7 = CameraSettings_IsFrontCameraActive_m282456036(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		Toggle_t2735377061 * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_006a;
		}
	}
	{
		Toggle_t2735377061 * L_10 = V_0;
		NullCheck(L_10);
		bool L_11 = Toggle_get_isOn_m1428293607(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		MenuOptions_ToggleTorch_m1503051540(__this, /*hidden argument*/NULL);
	}

IL_006a:
	{
		return;
	}
}
// System.Void MenuOptions::ToggleExtendedTracking()
extern "C"  void MenuOptions_ToggleExtendedTracking_m3362773293 (MenuOptions_t1951716431 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuOptions_ToggleExtendedTracking_m3362773293_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Toggle_t2735377061 * V_0 = NULL;
	{
		Toggle_t2735377061 * L_0 = MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125(__this, _stringLiteral1531511922, /*hidden argument*/MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125_RuntimeMethod_var);
		V_0 = L_0;
		Toggle_t2735377061 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		TrackableSettings_t2862243993 * L_3 = __this->get_mTrackableSettings_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		TrackableSettings_t2862243993 * L_5 = __this->get_mTrackableSettings_3();
		Toggle_t2735377061 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = Toggle_get_isOn_m1428293607(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< bool >::Invoke(4 /* System.Void TrackableSettings::SwitchExtendedTracking(System.Boolean) */, L_5, L_7);
	}

IL_0038:
	{
		return;
	}
}
// System.Void MenuOptions::ActivateDataset(System.String)
extern "C"  void MenuOptions_ActivateDataset_m942511626 (MenuOptions_t1951716431 * __this, String_t* ___datasetName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuOptions_ActivateDataset_m942511626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackableSettings_t2862243993 * L_0 = __this->get_mTrackableSettings_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		TrackableSettings_t2862243993 * L_2 = __this->get_mTrackableSettings_3();
		String_t* L_3 = ___datasetName0;
		NullCheck(L_2);
		TrackableSettings_ActivateDataSet_m4118878993(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void MenuOptions::UpdateUI()
extern "C"  void MenuOptions_UpdateUI_m2695051465 (MenuOptions_t1951716431 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuOptions_UpdateUI_m2695051465_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Toggle_t2735377061 * V_0 = NULL;
	Toggle_t2735377061 * V_1 = NULL;
	Toggle_t2735377061 * V_2 = NULL;
	Toggle_t2735377061 * V_3 = NULL;
	{
		Toggle_t2735377061 * L_0 = MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125(__this, _stringLiteral1531511922, /*hidden argument*/MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125_RuntimeMethod_var);
		V_0 = L_0;
		Toggle_t2735377061 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		TrackableSettings_t2862243993 * L_3 = __this->get_mTrackableSettings_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		Toggle_t2735377061 * L_5 = V_0;
		TrackableSettings_t2862243993 * L_6 = __this->get_mTrackableSettings_3();
		NullCheck(L_6);
		bool L_7 = TrackableSettings_IsExtendedTrackingEnabled_m1319587722(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Toggle_set_isOn_m3548357404(L_5, L_7, /*hidden argument*/NULL);
	}

IL_0038:
	{
		Toggle_t2735377061 * L_8 = MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125(__this, _stringLiteral351316669, /*hidden argument*/MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125_RuntimeMethod_var);
		V_1 = L_8;
		Toggle_t2735377061 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0070;
		}
	}
	{
		CameraSettings_t3152619780 * L_11 = __this->get_mCamSettings_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		Toggle_t2735377061 * L_13 = V_1;
		CameraSettings_t3152619780 * L_14 = __this->get_mCamSettings_2();
		NullCheck(L_14);
		bool L_15 = CameraSettings_IsFlashTorchEnabled_m3875252701(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		Toggle_set_isOn_m3548357404(L_13, L_15, /*hidden argument*/NULL);
	}

IL_0070:
	{
		Toggle_t2735377061 * L_16 = MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125(__this, _stringLiteral683363693, /*hidden argument*/MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125_RuntimeMethod_var);
		V_2 = L_16;
		Toggle_t2735377061 * L_17 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00a8;
		}
	}
	{
		CameraSettings_t3152619780 * L_19 = __this->get_mCamSettings_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_20 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00a8;
		}
	}
	{
		Toggle_t2735377061 * L_21 = V_2;
		CameraSettings_t3152619780 * L_22 = __this->get_mCamSettings_2();
		NullCheck(L_22);
		bool L_23 = CameraSettings_IsAutofocusEnabled_m386305083(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		Toggle_set_isOn_m3548357404(L_21, L_23, /*hidden argument*/NULL);
	}

IL_00a8:
	{
		Toggle_t2735377061 * L_24 = MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125(__this, _stringLiteral2627208917, /*hidden argument*/MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125_RuntimeMethod_var);
		V_3 = L_24;
		Toggle_t2735377061 * L_25 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_26 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00e0;
		}
	}
	{
		CameraSettings_t3152619780 * L_27 = __this->get_mCamSettings_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_28 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00e0;
		}
	}
	{
		Toggle_t2735377061 * L_29 = V_3;
		CameraSettings_t3152619780 * L_30 = __this->get_mCamSettings_2();
		NullCheck(L_30);
		bool L_31 = CameraSettings_IsFrontCameraActive_m282456036(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		Toggle_set_isOn_m3548357404(L_29, L_31, /*hidden argument*/NULL);
	}

IL_00e0:
	{
		return;
	}
}
// System.Void MenuOptions::RestartObjectTracker()
extern "C"  void MenuOptions_RestartObjectTracker_m4287611783 (MenuOptions_t1951716431 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuOptions_RestartObjectTracker_m4287611783_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectTracker_t4177997237 * V_0 = NULL;
	DataSet_t3286034874 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = TrackerManager_get_Instance_m777262631(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectTracker_t4177997237 * L_1 = GenericInterfaceFuncInvoker0< ObjectTracker_t4177997237 * >::Invoke(ITrackerManager_GetTracker_TisObjectTracker_t4177997237_m1548597255_RuntimeMethod_var, L_0);
		V_0 = L_1;
		ObjectTracker_t4177997237 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_006e;
		}
	}
	{
		ObjectTracker_t4177997237 * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean Vuforia.Tracker::get_IsActive() */, L_3);
		if (!L_4)
		{
			goto IL_006e;
		}
	}
	{
		ObjectTracker_t4177997237 * L_5 = V_0;
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(5 /* System.Void Vuforia.Tracker::Stop() */, L_5);
		ObjectTracker_t4177997237 * L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7 = ObjectTracker_GetDataSets_m1245718448(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		RuntimeObject* L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Vuforia.DataSet>::GetEnumerator() */, IEnumerable_1_t2265887763_il2cpp_TypeInfo_var, L_7);
		V_2 = L_8;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004a;
		}

IL_0033:
		{
			RuntimeObject* L_9 = V_2;
			NullCheck(L_9);
			DataSet_t3286034874 * L_10 = InterfaceFuncInvoker0< DataSet_t3286034874 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Vuforia.DataSet>::get_Current() */, IEnumerator_1_t3718605342_il2cpp_TypeInfo_var, L_9);
			V_1 = L_10;
			ObjectTracker_t4177997237 * L_11 = V_0;
			DataSet_t3286034874 * L_12 = V_1;
			NullCheck(L_11);
			ObjectTracker_DeactivateDataSet_m2094146088(L_11, L_12, /*hidden argument*/NULL);
			ObjectTracker_t4177997237 * L_13 = V_0;
			DataSet_t3286034874 * L_14 = V_1;
			NullCheck(L_13);
			ObjectTracker_ActivateDataSet_m3009523340(L_13, L_14, /*hidden argument*/NULL);
		}

IL_004a:
		{
			RuntimeObject* L_15 = V_2;
			NullCheck(L_15);
			bool L_16 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_0033;
			}
		}

IL_0055:
		{
			IL2CPP_LEAVE(0x67, FINALLY_005a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005a;
	}

FINALLY_005a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_17 = V_2;
			if (!L_17)
			{
				goto IL_0066;
			}
		}

IL_0060:
		{
			RuntimeObject* L_18 = V_2;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_18);
		}

IL_0066:
		{
			IL2CPP_END_FINALLY(90)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(90)
	{
		IL2CPP_JUMP_TBL(0x67, IL_0067)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0067:
	{
		ObjectTracker_t4177997237 * L_19 = V_0;
		NullCheck(L_19);
		VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean Vuforia.Tracker::Start() */, L_19);
	}

IL_006e:
	{
		return;
	}
}
// System.Void MenuOptions::CloseMenu()
extern "C"  void MenuOptions_CloseMenu_m2198615225 (MenuOptions_t1951716431 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuOptions_CloseMenu_m2198615225_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MenuAnimator_t2112910832 * L_0 = __this->get_mMenuAnim_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		MenuAnimator_t2112910832 * L_2 = __this->get_mMenuAnim_4();
		NullCheck(L_2);
		MenuAnimator_Hide_m1323916210(L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void MenuOptions::OnPaused(System.Boolean)
extern "C"  void MenuOptions_OnPaused_m1134986695 (MenuOptions_t1951716431 * __this, bool ___paused0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuOptions_OnPaused_m1134986695_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Toggle_t2735377061 * V_1 = NULL;
	{
		bool L_0 = ___paused0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		Toggle_t2735377061 * L_2 = MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125(__this, _stringLiteral351316669, /*hidden argument*/MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125_RuntimeMethod_var);
		V_1 = L_2;
		Toggle_t2735377061 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		Toggle_t2735377061 * L_5 = V_1;
		CameraSettings_t3152619780 * L_6 = __this->get_mCamSettings_2();
		NullCheck(L_6);
		bool L_7 = CameraSettings_IsFlashTorchEnabled_m3875252701(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Toggle_set_isOn_m3548357404(L_5, L_7, /*hidden argument*/NULL);
	}

IL_0034:
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
// System.Void Reticle::.ctor()
extern "C"  void Reticle__ctor_m2129635103 (Reticle_t3233312302 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Reticle::Update()
extern "C"  void Reticle_Update_m3916231512 (Reticle_t3233312302 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Reticle_Update_m3916231512_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Camera_t4157153871 * V_0 = NULL;
	Matrix4x4_t1817901843  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Matrix4x4_t1817901843  V_2;
	memset(&V_2, 0, sizeof(V_2));
	BackgroundPlaneBehaviour_t3333547397 * V_3 = NULL;
	float V_4 = 0.0f;
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	float V_6 = 0.0f;
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	float V_8 = 0.0f;
	Matrix4x4_t1817901843  V_9;
	memset(&V_9, 0, sizeof(V_9));
	float V_10 = 0.0f;
	Matrix4x4_t1817901843  V_11;
	memset(&V_11, 0, sizeof(V_11));
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	Camera_t4157153871 * G_B2_0 = NULL;
	Camera_t4157153871 * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(DigitalEyewearARController_t1054226036_il2cpp_TypeInfo_var);
		DigitalEyewearARController_t1054226036 * L_0 = DigitalEyewearARController_get_Instance_m3573866503(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Camera_t4157153871 * L_1 = DigitalEyewearARController_get_PrimaryCamera_m3122713263(L_0, /*hidden argument*/NULL);
		Camera_t4157153871 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0016;
		}
	}
	{
		Camera_t4157153871 * L_3 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B2_0 = L_3;
	}

IL_0016:
	{
		V_0 = G_B2_0;
		Camera_t4157153871 * L_4 = V_0;
		NullCheck(L_4);
		Matrix4x4_t1817901843  L_5 = Camera_get_projectionMatrix_m667780853(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = (&V_1)->get_m00_0();
		if ((((float)L_6) > ((float)(0.0f))))
		{
			goto IL_0047;
		}
	}
	{
		Camera_t4157153871 * L_7 = V_0;
		NullCheck(L_7);
		Matrix4x4_t1817901843  L_8 = Camera_get_projectionMatrix_m667780853(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		float L_9 = (&V_2)->get_m00_0();
		if ((!(((float)L_9) < ((float)(0.0f)))))
		{
			goto IL_0168;
		}
	}

IL_0047:
	{
		IL2CPP_RUNTIME_CLASS_INIT(VideoBackgroundManager_t2198727358_il2cpp_TypeInfo_var);
		VideoBackgroundManager_t2198727358 * L_10 = VideoBackgroundManager_get_Instance_m3877548062(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		bool L_11 = VideoBackgroundManager_get_VideoBackgroundEnabled_m4107503792(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00c2;
		}
	}
	{
		Camera_t4157153871 * L_12 = V_0;
		NullCheck(L_12);
		BackgroundPlaneBehaviour_t3333547397 * L_13 = Component_GetComponentInChildren_TisBackgroundPlaneBehaviour_t3333547397_m2601826740(L_12, /*hidden argument*/Component_GetComponentInChildren_TisBackgroundPlaneBehaviour_t3333547397_m2601826740_RuntimeMethod_var);
		V_3 = L_13;
		BackgroundPlaneBehaviour_t3333547397 * L_14 = V_3;
		NullCheck(L_14);
		Transform_t3600365921 * L_15 = Component_get_transform_m3162698980(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t3722313464  L_16 = Transform_get_localPosition_m4234289348(L_15, /*hidden argument*/NULL);
		V_5 = L_16;
		float L_17 = (&V_5)->get_z_3();
		V_4 = L_17;
		float L_18 = V_4;
		Camera_t4157153871 * L_19 = V_0;
		NullCheck(L_19);
		float L_20 = Camera_get_nearClipPlane_m837839537(L_19, /*hidden argument*/NULL);
		if ((!(((float)L_18) > ((float)L_20))))
		{
			goto IL_009c;
		}
	}
	{
		Transform_t3600365921 * L_21 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_22 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_23 = V_4;
		Vector3_t3722313464  L_24 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_localPosition_m4128471975(L_21, L_24, /*hidden argument*/NULL);
		goto IL_00bd;
	}

IL_009c:
	{
		Transform_t3600365921 * L_25 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_26 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		Camera_t4157153871 * L_27 = V_0;
		NullCheck(L_27);
		float L_28 = Camera_get_nearClipPlane_m837839537(L_27, /*hidden argument*/NULL);
		Vector3_t3722313464  L_29 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_26, ((float)il2cpp_codegen_add((float)L_28, (float)(0.5f))), /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_localPosition_m4128471975(L_25, L_29, /*hidden argument*/NULL);
	}

IL_00bd:
	{
		goto IL_00e3;
	}

IL_00c2:
	{
		Transform_t3600365921 * L_30 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_31 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		Camera_t4157153871 * L_32 = V_0;
		NullCheck(L_32);
		float L_33 = Camera_get_nearClipPlane_m837839537(L_32, /*hidden argument*/NULL);
		Vector3_t3722313464  L_34 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_31, ((float)il2cpp_codegen_add((float)L_33, (float)(0.5f))), /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_localPosition_m4128471975(L_30, L_34, /*hidden argument*/NULL);
	}

IL_00e3:
	{
		Transform_t3600365921 * L_35 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		Vector3_t3722313464  L_36 = Transform_get_localPosition_m4234289348(L_35, /*hidden argument*/NULL);
		V_7 = L_36;
		float L_37 = (&V_7)->get_z_3();
		V_6 = L_37;
		Camera_t4157153871 * L_38 = V_0;
		NullCheck(L_38);
		Matrix4x4_t1817901843  L_39 = Camera_get_projectionMatrix_m667780853(L_38, /*hidden argument*/NULL);
		V_9 = L_39;
		float L_40 = Matrix4x4_get_Item_m134152955((&V_9), 0, 0, /*hidden argument*/NULL);
		V_8 = ((float)((float)(1.0f)/(float)L_40));
		Camera_t4157153871 * L_41 = V_0;
		NullCheck(L_41);
		Matrix4x4_t1817901843  L_42 = Camera_get_projectionMatrix_m667780853(L_41, /*hidden argument*/NULL);
		V_11 = L_42;
		float L_43 = Matrix4x4_get_Item_m134152955((&V_11), 1, 1, /*hidden argument*/NULL);
		V_10 = ((float)((float)(1.0f)/(float)L_43));
		float L_44 = V_8;
		float L_45 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_46 = Mathf_Max_m3146388979(NULL /*static, unused*/, L_44, L_45, /*hidden argument*/NULL);
		V_12 = L_46;
		float L_47 = V_12;
		float L_48 = V_6;
		V_13 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_47)), (float)L_48));
		Transform_t3600365921 * L_49 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_50 = V_13;
		float L_51 = V_13;
		Vector3_t3722313464  L_52;
		memset(&L_52, 0, sizeof(L_52));
		Vector3__ctor_m3353183577((&L_52), ((float)il2cpp_codegen_multiply((float)(0.012f), (float)L_50)), ((float)il2cpp_codegen_multiply((float)(0.012f), (float)L_51)), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_49);
		Transform_set_localScale_m3053443106(L_49, L_52, /*hidden argument*/NULL);
	}

IL_0168:
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
// System.Void RockPileController::.ctor()
extern "C"  void RockPileController__ctor_m124027350 (RockPileController_t2893225296 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RockPileController::Awake()
extern "C"  void RockPileController_Awake_m1550536447 (RockPileController_t2893225296 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RockPileController_Awake_m1550536447_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FadeObject_t1880495183 * L_0 = Component_GetComponent_TisFadeObject_t1880495183_m1857147924(__this, /*hidden argument*/Component_GetComponent_TisFadeObject_t1880495183_m1857147924_RuntimeMethod_var);
		__this->set_fadeController_3(L_0);
		return;
	}
}
// System.Void RockPileController::FadeOut()
extern "C"  void RockPileController_FadeOut_m3065701988 (RockPileController_t2893225296 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RockPileController_FadeOut_m3065701988_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FadeObject_t1880495183 * V_0 = NULL;
	{
		FadeObject_t1880495183 * L_0 = __this->get_fadeController_3();
		NullCheck(L_0);
		L_0->set_m_IsVisible_2((bool)0);
		Transform_t3600365921 * L_1 = __this->get_m_GrabbableRock_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		Transform_t3600365921 * L_3 = __this->get_m_GrabbableRock_2();
		NullCheck(L_3);
		FadeObject_t1880495183 * L_4 = Component_GetComponent_TisFadeObject_t1880495183_m1857147924(L_3, /*hidden argument*/Component_GetComponent_TisFadeObject_t1880495183_m1857147924_RuntimeMethod_var);
		V_0 = L_4;
		FadeObject_t1880495183 * L_5 = V_0;
		NullCheck(L_5);
		L_5->set_m_IsVisible_2((bool)0);
	}

IL_0030:
	{
		return;
	}
}
// System.Void RockPileController::FadeIn()
extern "C"  void RockPileController_FadeIn_m550595306 (RockPileController_t2893225296 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RockPileController_FadeIn_m550595306_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FadeObject_t1880495183 * V_0 = NULL;
	{
		FadeObject_t1880495183 * L_0 = __this->get_fadeController_3();
		NullCheck(L_0);
		L_0->set_m_IsVisible_2((bool)1);
		Transform_t3600365921 * L_1 = __this->get_m_GrabbableRock_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		Transform_t3600365921 * L_3 = __this->get_m_GrabbableRock_2();
		NullCheck(L_3);
		FadeObject_t1880495183 * L_4 = Component_GetComponent_TisFadeObject_t1880495183_m1857147924(L_3, /*hidden argument*/Component_GetComponent_TisFadeObject_t1880495183_m1857147924_RuntimeMethod_var);
		V_0 = L_4;
		FadeObject_t1880495183 * L_5 = V_0;
		NullCheck(L_5);
		L_5->set_m_IsVisible_2((bool)1);
	}

IL_0030:
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
// System.Void TapHandler::.ctor()
extern "C"  void TapHandler__ctor_m1076312137 (TapHandler_t334234343 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TapHandler::Start()
extern "C"  void TapHandler_Start_m554074027 (TapHandler_t334234343 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapHandler_Start_m554074027_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_mTapCount_5(0);
		__this->set_mTimeSinceLastTap_3((0.0f));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		MenuAnimator_t2112910832 * L_0 = Object_FindObjectOfType_TisMenuAnimator_t2112910832_m1830680649(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisMenuAnimator_t2112910832_m1830680649_RuntimeMethod_var);
		__this->set_mMenuAnim_4(L_0);
		return;
	}
}
// System.Void TapHandler::Update()
extern "C"  void TapHandler_Update_m2328515667 (TapHandler_t334234343 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapHandler_Update_m2328515667_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MenuAnimator_t2112910832 * L_0 = __this->get_mMenuAnim_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		MenuAnimator_t2112910832 * L_2 = __this->get_mMenuAnim_4();
		NullCheck(L_2);
		bool L_3 = MenuAnimator_IsVisible_m928022866(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		__this->set_mTapCount_5(0);
		__this->set_mTimeSinceLastTap_3((0.0f));
		goto IL_003d;
	}

IL_0037:
	{
		TapHandler_HandleTap_m1322678531(__this, /*hidden argument*/NULL);
	}

IL_003d:
	{
		return;
	}
}
// System.Void TapHandler::HandleTap()
extern "C"  void TapHandler_HandleTap_m1322678531 (TapHandler_t334234343 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapHandler_HandleTap_m1322678531_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_mTapCount_5();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_004b;
		}
	}
	{
		float L_1 = __this->get_mTimeSinceLastTap_3();
		float L_2 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_mTimeSinceLastTap_3(((float)il2cpp_codegen_add((float)L_1, (float)L_2)));
		float L_3 = __this->get_mTimeSinceLastTap_3();
		if ((!(((float)L_3) > ((float)(0.5f)))))
		{
			goto IL_0046;
		}
	}
	{
		VirtActionInvoker0::Invoke(5 /* System.Void TapHandler::OnSingleTapConfirmed() */, __this);
		__this->set_mTapCount_5(0);
		__this->set_mTimeSinceLastTap_3((0.0f));
	}

IL_0046:
	{
		goto IL_006f;
	}

IL_004b:
	{
		int32_t L_4 = __this->get_mTapCount_5();
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_006f;
		}
	}
	{
		VirtActionInvoker0::Invoke(6 /* System.Void TapHandler::OnDoubleTap() */, __this);
		__this->set_mTimeSinceLastTap_3((0.0f));
		__this->set_mTapCount_5(0);
	}

IL_006f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_5 = Input_GetMouseButtonUp_m2924350851(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_6 = __this->get_mTapCount_5();
		__this->set_mTapCount_5(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		int32_t L_7 = __this->get_mTapCount_5();
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_009a;
		}
	}
	{
		VirtActionInvoker0::Invoke(4 /* System.Void TapHandler::OnSingleTap() */, __this);
	}

IL_009a:
	{
		return;
	}
}
// System.Void TapHandler::OnSingleTap()
extern "C"  void TapHandler_OnSingleTap_m3625150319 (TapHandler_t334234343 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void TapHandler::OnSingleTapConfirmed()
extern "C"  void TapHandler_OnSingleTapConfirmed_m3372274260 (TapHandler_t334234343 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapHandler_OnSingleTapConfirmed_m3372274260_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CameraSettings_t3152619780 * V_0 = NULL;
	{
		CameraSettings_t3152619780 * L_0 = Component_GetComponentInChildren_TisCameraSettings_t3152619780_m2209036194(__this, /*hidden argument*/Component_GetComponentInChildren_TisCameraSettings_t3152619780_m2209036194_RuntimeMethod_var);
		V_0 = L_0;
		CameraSettings_t3152619780 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		CameraSettings_t3152619780 * L_3 = V_0;
		NullCheck(L_3);
		CameraSettings_TriggerAutofocusEvent_m898525935(L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void TapHandler::OnDoubleTap()
extern "C"  void TapHandler_OnDoubleTap_m2928608177 (TapHandler_t334234343 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapHandler_OnDoubleTap_m2928608177_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MenuAnimator_t2112910832 * L_0 = __this->get_mMenuAnim_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		MenuAnimator_t2112910832 * L_2 = __this->get_mMenuAnim_4();
		NullCheck(L_2);
		bool L_3 = MenuAnimator_IsVisible_m928022866(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		MenuAnimator_t2112910832 * L_4 = __this->get_mMenuAnim_4();
		NullCheck(L_4);
		MenuAnimator_Show_m982174260(L_4, /*hidden argument*/NULL);
	}

IL_002b:
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
// System.Void TrackableSettings::.ctor()
extern "C"  void TrackableSettings__ctor_m1376286375 (TrackableSettings_t2862243993 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TrackableSettings::IsExtendedTrackingEnabled()
extern "C"  bool TrackableSettings_IsExtendedTrackingEnabled_m1319587722 (TrackableSettings_t2862243993 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_mExtTrackingEnabled_2();
		return L_0;
	}
}
// System.Void TrackableSettings::SwitchExtendedTracking(System.Boolean)
extern "C"  void TrackableSettings_SwitchExtendedTracking_m1275921245 (TrackableSettings_t2862243993 * __this, bool ___enableExtendedTracking0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableSettings_SwitchExtendedTracking_m1275921245_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StateManager_t1982749557 * V_0 = NULL;
	bool V_1 = false;
	TrackableBehaviour_t1113559212 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	TrackableSettings_t2862243993 * G_B17_0 = NULL;
	TrackableSettings_t2862243993 * G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	TrackableSettings_t2862243993 * G_B18_1 = NULL;
	{
		RuntimeObject* L_0 = TrackerManager_get_Instance_m777262631(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		StateManager_t1982749557 * L_1 = InterfaceFuncInvoker0< StateManager_t1982749557 * >::Invoke(3 /* Vuforia.StateManager Vuforia.ITrackerManager::GetStateManager() */, ITrackerManager_t607206903_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		V_1 = (bool)1;
		StateManager_t1982749557 * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = StateManager_GetTrackableBehaviours_m3331997292(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour>::GetEnumerator() */, IEnumerable_1_t93412101_il2cpp_TypeInfo_var, L_3);
		V_3 = L_4;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009d;
		}

IL_001e:
		{
			RuntimeObject* L_5 = V_3;
			NullCheck(L_5);
			TrackableBehaviour_t1113559212 * L_6 = InterfaceFuncInvoker0< TrackableBehaviour_t1113559212 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Vuforia.TrackableBehaviour>::get_Current() */, IEnumerator_1_t1546129680_il2cpp_TypeInfo_var, L_5);
			V_2 = L_6;
			TrackableBehaviour_t1113559212 * L_7 = V_2;
			if (!((DataSetTrackableBehaviour_t3430730379 *)IsInstClass((RuntimeObject*)L_7, DataSetTrackableBehaviour_t3430730379_il2cpp_TypeInfo_var)))
			{
				goto IL_009d;
			}
		}

IL_0030:
		{
			TrackableBehaviour_t1113559212 * L_8 = V_2;
			NullCheck(L_8);
			RuntimeObject* L_9 = VirtFuncInvoker0< RuntimeObject* >::Invoke(4 /* Vuforia.Trackable Vuforia.TrackableBehaviour::get_Trackable() */, L_8);
			if (!((RuntimeObject*)IsInst((RuntimeObject*)L_9, ObjectTarget_t3212252422_il2cpp_TypeInfo_var)))
			{
				goto IL_009d;
			}
		}

IL_0040:
		{
			TrackableBehaviour_t1113559212 * L_10 = V_2;
			NullCheck(L_10);
			RuntimeObject* L_11 = VirtFuncInvoker0< RuntimeObject* >::Invoke(4 /* Vuforia.Trackable Vuforia.TrackableBehaviour::get_Trackable() */, L_10);
			V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, ObjectTarget_t3212252422_il2cpp_TypeInfo_var));
			bool L_12 = ___enableExtendedTracking0;
			if (!L_12)
			{
				goto IL_0095;
			}
		}

IL_0053:
		{
			RuntimeObject* L_13 = V_4;
			NullCheck(L_13);
			bool L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Vuforia.ObjectTarget::StartExtendedTracking() */, ObjectTarget_t3212252422_il2cpp_TypeInfo_var, L_13);
			V_1 = L_14;
			bool L_15 = V_1;
			if (!L_15)
			{
				goto IL_007b;
			}
		}

IL_0061:
		{
			TrackableBehaviour_t1113559212 * L_16 = V_2;
			NullCheck(L_16);
			String_t* L_17 = TrackableBehaviour_get_TrackableName_m3644057705(L_16, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_18 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3229819917, L_17, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_Log_m4051431634(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
			goto IL_0090;
		}

IL_007b:
		{
			TrackableBehaviour_t1113559212 * L_19 = V_2;
			NullCheck(L_19);
			String_t* L_20 = TrackableBehaviour_get_TrackableName_m3644057705(L_19, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_21 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3563699894, L_20, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogError_m2850623458(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		}

IL_0090:
		{
			goto IL_009d;
		}

IL_0095:
		{
			RuntimeObject* L_22 = V_4;
			NullCheck(L_22);
			InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Vuforia.ObjectTarget::StopExtendedTracking() */, ObjectTarget_t3212252422_il2cpp_TypeInfo_var, L_22);
		}

IL_009d:
		{
			RuntimeObject* L_23 = V_3;
			NullCheck(L_23);
			bool L_24 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_23);
			if (L_24)
			{
				goto IL_001e;
			}
		}

IL_00a8:
		{
			IL2CPP_LEAVE(0xBA, FINALLY_00ad);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ad;
	}

FINALLY_00ad:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_25 = V_3;
			if (!L_25)
			{
				goto IL_00b9;
			}
		}

IL_00b3:
		{
			RuntimeObject* L_26 = V_3;
			NullCheck(L_26);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_26);
		}

IL_00b9:
		{
			IL2CPP_END_FINALLY(173)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(173)
	{
		IL2CPP_JUMP_TBL(0xBA, IL_00ba)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ba:
	{
		bool L_27 = V_1;
		G_B16_0 = __this;
		if (!L_27)
		{
			G_B17_0 = __this;
			goto IL_00c4;
		}
	}
	{
		bool L_28 = ___enableExtendedTracking0;
		G_B18_0 = ((int32_t)(L_28));
		G_B18_1 = G_B16_0;
		goto IL_00c5;
	}

IL_00c4:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_00c5:
	{
		NullCheck(G_B18_1);
		G_B18_1->set_mExtTrackingEnabled_2((bool)G_B18_0);
		return;
	}
}
// System.String TrackableSettings::GetActiveDatasetName()
extern "C"  String_t* TrackableSettings_GetActiveDatasetName_m1771968640 (TrackableSettings_t2862243993 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableSettings_GetActiveDatasetName_m1771968640_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectTracker_t4177997237 * V_0 = NULL;
	List_1_t463142320 * V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		RuntimeObject* L_0 = TrackerManager_get_Instance_m777262631(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectTracker_t4177997237 * L_1 = GenericInterfaceFuncInvoker0< ObjectTracker_t4177997237 * >::Invoke(ITrackerManager_GetTracker_TisObjectTracker_t4177997237_m1548597255_RuntimeMethod_var, L_0);
		V_0 = L_1;
		ObjectTracker_t4177997237 * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = ObjectTracker_GetActiveDataSets_m254019146(L_2, /*hidden argument*/NULL);
		List_1_t463142320 * L_4 = Enumerable_ToList_TisDataSet_t3286034874_m1984750843(NULL /*static, unused*/, L_3, /*hidden argument*/Enumerable_ToList_TisDataSet_t3286034874_m1984750843_RuntimeMethod_var);
		V_1 = L_4;
		List_1_t463142320 * L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Count_m3978133574(L_5, /*hidden argument*/List_1_get_Count_m3978133574_RuntimeMethod_var);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		List_1_t463142320 * L_7 = V_1;
		DataSet_t3286034874 * L_8 = Enumerable_ElementAt_TisDataSet_t3286034874_m1304043092(NULL /*static, unused*/, L_7, 0, /*hidden argument*/Enumerable_ElementAt_TisDataSet_t3286034874_m1304043092_RuntimeMethod_var);
		NullCheck(L_8);
		String_t* L_9 = DataSet_get_Path_m176743276(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		String_t* L_10 = V_2;
		String_t* L_11 = V_2;
		NullCheck(L_11);
		int32_t L_12 = String_LastIndexOf_m2676535141(L_11, _stringLiteral3452614529, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_13 = String_Substring_m2848979100(L_10, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_13;
		String_t* L_14 = V_3;
		NullCheck(_stringLiteral3932363835);
		CharU5BU5D_t3528271667* L_15 = String_ToCharArray_m1492846834(_stringLiteral3932363835, /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_16 = String_TrimEnd_m3824727301(L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0055:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_17;
	}
}
// System.Void TrackableSettings::ActivateDataSet(System.String)
extern "C"  void TrackableSettings_ActivateDataSet_m4118878993 (TrackableSettings_t2862243993 * __this, String_t* ___datasetName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableSettings_ActivateDataSet_m4118878993_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectTracker_t4177997237 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	List_1_t463142320 * V_3 = NULL;
	DataSet_t3286034874 * V_4 = NULL;
	Enumerator_t2352386197  V_5;
	memset(&V_5, 0, sizeof(V_5));
	DataSet_t3286034874 * V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = TrackerManager_get_Instance_m777262631(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectTracker_t4177997237 * L_1 = GenericInterfaceFuncInvoker0< ObjectTracker_t4177997237 * >::Invoke(ITrackerManager_GetTracker_TisObjectTracker_t4177997237_m1548597255_RuntimeMethod_var, L_0);
		V_0 = L_1;
		ObjectTracker_t4177997237 * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = ObjectTracker_GetDataSets_m1245718448(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		ObjectTracker_t4177997237 * L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = ObjectTracker_GetActiveDataSets_m254019146(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		RuntimeObject* L_6 = V_2;
		List_1_t463142320 * L_7 = Enumerable_ToList_TisDataSet_t3286034874_m1984750843(NULL /*static, unused*/, L_6, /*hidden argument*/Enumerable_ToList_TisDataSet_t3286034874_m1984750843_RuntimeMethod_var);
		V_3 = L_7;
		List_1_t463142320 * L_8 = V_3;
		NullCheck(L_8);
		Enumerator_t2352386197  L_9 = List_1_GetEnumerator_m6144716(L_8, /*hidden argument*/List_1_GetEnumerator_m6144716_RuntimeMethod_var);
		V_5 = L_9;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003f;
		}

IL_002d:
		{
			DataSet_t3286034874 * L_10 = Enumerator_get_Current_m1064371760((&V_5), /*hidden argument*/Enumerator_get_Current_m1064371760_RuntimeMethod_var);
			V_4 = L_10;
			ObjectTracker_t4177997237 * L_11 = V_0;
			DataSet_t3286034874 * L_12 = V_4;
			NullCheck(L_11);
			ObjectTracker_DeactivateDataSet_m2094146088(L_11, L_12, /*hidden argument*/NULL);
		}

IL_003f:
		{
			bool L_13 = Enumerator_MoveNext_m1234730920((&V_5), /*hidden argument*/Enumerator_MoveNext_m1234730920_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_002d;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x5E, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1247034833((&V_5), /*hidden argument*/Enumerator_Dispose_m1247034833_RuntimeMethod_var);
		IL2CPP_END_FINALLY(80)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005e:
	{
		ObjectTracker_t4177997237 * L_14 = V_0;
		NullCheck(L_14);
		VirtActionInvoker0::Invoke(5 /* System.Void Vuforia.Tracker::Stop() */, L_14);
		RuntimeObject* L_15 = V_1;
		NullCheck(L_15);
		RuntimeObject* L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Vuforia.DataSet>::GetEnumerator() */, IEnumerable_1_t2265887763_il2cpp_TypeInfo_var, L_15);
		V_7 = L_16;
	}

IL_006c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0095;
		}

IL_0071:
		{
			RuntimeObject* L_17 = V_7;
			NullCheck(L_17);
			DataSet_t3286034874 * L_18 = InterfaceFuncInvoker0< DataSet_t3286034874 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Vuforia.DataSet>::get_Current() */, IEnumerator_1_t3718605342_il2cpp_TypeInfo_var, L_17);
			V_6 = L_18;
			DataSet_t3286034874 * L_19 = V_6;
			NullCheck(L_19);
			String_t* L_20 = DataSet_get_Path_m176743276(L_19, /*hidden argument*/NULL);
			String_t* L_21 = ___datasetName0;
			NullCheck(L_20);
			bool L_22 = String_Contains_m1147431944(L_20, L_21, /*hidden argument*/NULL);
			if (!L_22)
			{
				goto IL_0095;
			}
		}

IL_008c:
		{
			ObjectTracker_t4177997237 * L_23 = V_0;
			DataSet_t3286034874 * L_24 = V_6;
			NullCheck(L_23);
			ObjectTracker_ActivateDataSet_m3009523340(L_23, L_24, /*hidden argument*/NULL);
		}

IL_0095:
		{
			RuntimeObject* L_25 = V_7;
			NullCheck(L_25);
			bool L_26 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_0071;
			}
		}

IL_00a1:
		{
			IL2CPP_LEAVE(0xB5, FINALLY_00a6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a6;
	}

FINALLY_00a6:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_27 = V_7;
			if (!L_27)
			{
				goto IL_00b4;
			}
		}

IL_00ad:
		{
			RuntimeObject* L_28 = V_7;
			NullCheck(L_28);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_28);
		}

IL_00b4:
		{
			IL2CPP_END_FINALLY(166)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(166)
	{
		IL2CPP_JUMP_TBL(0xB5, IL_00b5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b5:
	{
		ObjectTracker_t4177997237 * L_29 = V_0;
		NullCheck(L_29);
		VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean Vuforia.Tracker::Start() */, L_29);
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
// System.Void TransitionManager::.ctor()
extern "C"  void TransitionManager__ctor_m1753232628 (TransitionManager_t3900140235 * __this, const RuntimeMethod* method)
{
	{
		__this->set_transitionDuration_11((1.5f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TransitionManager::get_InAR()
extern "C"  bool TransitionManager_get_InAR_m1084650543 (TransitionManager_t3900140235 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_mTransitionCursor_2();
		return (bool)((((int32_t)((!(((float)L_0) <= ((float)(0.66f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void TransitionManager::Awake()
extern "C"  void TransitionManager_Awake_m1104503036 (TransitionManager_t3900140235 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionManager_Awake_m1104503036_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaARController_t1876945237_il2cpp_TypeInfo_var);
		VuforiaARController_t1876945237 * L_0 = VuforiaARController_get_Instance_m1100644214(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_1 = (intptr_t)TransitionManager_SetStereoViewDivider_m717389777_RuntimeMethod_var;
		Action_t1264377477 * L_2 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VuforiaARController_RegisterVuforiaInitializedCallback_m948457393(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TransitionManager::OnDestroy()
extern "C"  void TransitionManager_OnDestroy_m1111708761 (TransitionManager_t3900140235 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionManager_OnDestroy_m1111708761_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaARController_t1876945237_il2cpp_TypeInfo_var);
		VuforiaARController_t1876945237 * L_0 = VuforiaARController_get_Instance_m1100644214(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_1 = (intptr_t)TransitionManager_SetStereoViewDivider_m717389777_RuntimeMethod_var;
		Action_t1264377477 * L_2 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VuforiaARController_UnregisterVuforiaInitializedCallback_m1653245485(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TransitionManager::Start()
extern "C"  void TransitionManager_Start_m3045972892 (TransitionManager_t3900140235 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionManager_Start_m3045972892_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_mTransitionCursor_2((0.0f));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		BlackMaskBehaviour_t3514099953 * L_0 = Object_FindObjectOfType_TisBlackMaskBehaviour_t3514099953_m1811966288(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisBlackMaskBehaviour_t3514099953_m1811966288_RuntimeMethod_var);
		__this->set_mBlackMask_6(L_0);
		TransitionManager_SetBlackMaskVisible_m2346041137(__this, (bool)0, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VideoBackgroundManager_t2198727358_il2cpp_TypeInfo_var);
		VideoBackgroundManager_t2198727358 * L_1 = VideoBackgroundManager_get_Instance_m3877548062(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		VideoBackgroundManager_SetVideoBackgroundEnabled_m2132418493(L_1, (bool)1, /*hidden argument*/NULL);
		int32_t L_2 = TransitionManager_GetMixedRealityMode_m836765050(__this, /*hidden argument*/NULL);
		__this->set_mCurrentMode_7(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityController_t13217384_il2cpp_TypeInfo_var);
		MixedRealityController_t13217384 * L_3 = MixedRealityController_get_Instance_m2804694100(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_4 = __this->get_mCurrentMode_7();
		NullCheck(L_3);
		MixedRealityController_SetMode_m611063014(L_3, L_4, /*hidden argument*/NULL);
		TransitionManager_UpdateVisibleObjects_m3329821487(__this, /*hidden argument*/NULL);
		float L_5 = Time_get_realtimeSinceStartup_m3141794964(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_mCurrentTime_3(L_5);
		return;
	}
}
// System.Void TransitionManager::Update()
extern "C"  void TransitionManager_Update_m2541854394 (TransitionManager_t3900140235 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionManager_Update_m2541854394_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	int32_t G_B18_0 = 0;
	{
		float L_0 = Time_get_realtimeSinceStartup_m3141794964(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = __this->get_mCurrentTime_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_3 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, ((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)), /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = V_0;
		__this->set_mCurrentTime_3(L_4);
		bool L_5 = TransitionManager_IsVideoBackgroundRenderingEnabled_m1119413015(__this, /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = TransitionManager_GetMixedRealityMode_m836765050(__this, /*hidden argument*/NULL);
		V_3 = L_6;
		int32_t L_7 = __this->get_mCurrentMode_7();
		int32_t L_8 = V_3;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0041;
		}
	}
	{
		bool L_9 = TransitionManager_get_InAR_m1084650543(__this, /*hidden argument*/NULL);
		bool L_10 = V_2;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_00b0;
		}
	}

IL_0041:
	{
		int32_t L_11 = V_3;
		__this->set_mCurrentMode_7(L_11);
		int32_t L_12 = __this->get_mCurrentMode_7();
		if ((((int32_t)L_12) == ((int32_t)3)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_13 = __this->get_mCurrentMode_7();
		if ((!(((uint32_t)L_13) == ((uint32_t)7))))
		{
			goto IL_0071;
		}
	}

IL_0060:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2389443647, /*hidden argument*/NULL);
		TransitionManager_ActivateDatasets_m1018868641(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0071:
	{
		int32_t L_14 = __this->get_mCurrentMode_7();
		if (!L_14)
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_15 = __this->get_mCurrentMode_7();
		if ((!(((uint32_t)L_15) == ((uint32_t)4))))
		{
			goto IL_0099;
		}
	}

IL_0088:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3231251126, /*hidden argument*/NULL);
		TransitionManager_ActivateDatasets_m1018868641(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0099:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityController_t13217384_il2cpp_TypeInfo_var);
		MixedRealityController_t13217384 * L_16 = MixedRealityController_get_Instance_m2804694100(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_17 = __this->get_mCurrentMode_7();
		NullCheck(L_16);
		MixedRealityController_SetMode_m611063014(L_16, L_17, /*hidden argument*/NULL);
		TransitionManager_UpdateVisibleObjects_m3329821487(__this, /*hidden argument*/NULL);
	}

IL_00b0:
	{
		bool L_18 = __this->get_mPlaying_4();
		if (!L_18)
		{
			goto IL_01ad;
		}
	}
	{
		V_4 = (0.0f);
		float L_19 = __this->get_mTransitionCursor_2();
		if ((!(((float)L_19) < ((float)(0.33f)))))
		{
			goto IL_00f4;
		}
	}
	{
		float L_20 = __this->get_mTransitionCursor_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_21 = Mathf_SmoothStep_m2878822371(NULL /*static, unused*/, (0.0f), (1.0f), ((float)((float)L_20/(float)(0.33f))), /*hidden argument*/NULL);
		V_4 = L_21;
		goto IL_0133;
	}

IL_00f4:
	{
		float L_22 = __this->get_mTransitionCursor_2();
		if ((!(((float)L_22) < ((float)(0.66f)))))
		{
			goto IL_0110;
		}
	}
	{
		V_4 = (1.0f);
		goto IL_0133;
	}

IL_0110:
	{
		float L_23 = __this->get_mTransitionCursor_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_24 = Mathf_SmoothStep_m2878822371(NULL /*static, unused*/, (1.0f), (0.0f), ((float)((float)((float)il2cpp_codegen_subtract((float)L_23, (float)(0.66f)))/(float)(0.33f))), /*hidden argument*/NULL);
		V_4 = L_24;
	}

IL_0133:
	{
		float L_25 = V_4;
		TransitionManager_SetBlackMaskVisible_m2346041137(__this, (bool)1, L_25, /*hidden argument*/NULL);
		bool L_26 = __this->get_mBackward_5();
		if (!L_26)
		{
			goto IL_014d;
		}
	}
	{
		G_B18_0 = (-1);
		goto IL_014e;
	}

IL_014d:
	{
		G_B18_0 = 1;
	}

IL_014e:
	{
		float L_27 = V_1;
		float L_28 = __this->get_transitionDuration_11();
		V_5 = ((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)G_B18_0))), (float)L_27))/(float)L_28));
		float L_29 = __this->get_mTransitionCursor_2();
		float L_30 = V_5;
		__this->set_mTransitionCursor_2(((float)il2cpp_codegen_add((float)L_29, (float)L_30)));
		float L_31 = __this->get_mTransitionCursor_2();
		if ((((float)L_31) <= ((float)(0.0f))))
		{
			goto IL_0189;
		}
	}
	{
		float L_32 = __this->get_mTransitionCursor_2();
		if ((!(((float)L_32) >= ((float)(1.0f)))))
		{
			goto IL_01ad;
		}
	}

IL_0189:
	{
		float L_33 = __this->get_mTransitionCursor_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_34 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		__this->set_mTransitionCursor_2(L_34);
		__this->set_mPlaying_4((bool)0);
		TransitionManager_SetBlackMaskVisible_m2346041137(__this, (bool)0, (0.0f), /*hidden argument*/NULL);
	}

IL_01ad:
	{
		return;
	}
}
// System.Void TransitionManager::Play(System.Boolean)
extern "C"  void TransitionManager_Play_m1310268232 (TransitionManager_t3900140235 * __this, bool ___reverse0, const RuntimeMethod* method)
{
	TransitionManager_t3900140235 * G_B3_0 = NULL;
	TransitionManager_t3900140235 * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	TransitionManager_t3900140235 * G_B4_1 = NULL;
	{
		bool L_0 = __this->get_mPlaying_4();
		if (L_0)
		{
			goto IL_0032;
		}
	}
	{
		__this->set_mPlaying_4((bool)1);
		bool L_1 = ___reverse0;
		__this->set_mBackward_5(L_1);
		bool L_2 = __this->get_mBackward_5();
		G_B2_0 = __this;
		if (!L_2)
		{
			G_B3_0 = __this;
			goto IL_002b;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_002c;
	}

IL_002b:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_002c:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_mTransitionCursor_2((((float)((float)G_B4_0))));
	}

IL_0032:
	{
		return;
	}
}
// System.Void TransitionManager::SetStereoViewDivider()
extern "C"  void TransitionManager_SetStereoViewDivider_m717389777 (TransitionManager_t3900140235 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionManager_SetStereoViewDivider_m717389777_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TransitionManager_t3900140235_il2cpp_TypeInfo_var);
		bool L_0 = ((TransitionManager_t3900140235_StaticFields*)il2cpp_codegen_static_fields_for(TransitionManager_t3900140235_il2cpp_TypeInfo_var))->get_isFullScreenMode_8();
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		Canvas_t3310196443 * L_1 = __this->get_StereoViewDivider_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		Canvas_t3310196443 * L_3 = __this->get_StereoViewDivider_12();
		NullCheck(L_3);
		Behaviour_set_enabled_m20417929(L_3, (bool)1, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Void TransitionManager::ActivateDatasets(System.Boolean)
extern "C"  void TransitionManager_ActivateDatasets_m1018868641 (TransitionManager_t3900140235 * __this, bool ___enableDataset0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionManager_ActivateDatasets_m1018868641_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectTracker_t4177997237 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	DataSet_t3286034874 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = TrackerManager_get_Instance_m777262631(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectTracker_t4177997237 * L_1 = GenericInterfaceFuncInvoker0< ObjectTracker_t4177997237 * >::Invoke(ITrackerManager_GetTracker_TisObjectTracker_t4177997237_m1548597255_RuntimeMethod_var, L_0);
		V_0 = L_1;
		ObjectTracker_t4177997237 * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = ObjectTracker_GetDataSets_m1245718448(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Vuforia.DataSet>::GetEnumerator() */, IEnumerable_1_t2265887763_il2cpp_TypeInfo_var, L_4);
		V_3 = L_5;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_001e:
		{
			RuntimeObject* L_6 = V_3;
			NullCheck(L_6);
			DataSet_t3286034874 * L_7 = InterfaceFuncInvoker0< DataSet_t3286034874 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Vuforia.DataSet>::get_Current() */, IEnumerator_1_t3718605342_il2cpp_TypeInfo_var, L_6);
			V_2 = L_7;
			bool L_8 = ___enableDataset0;
			if (!L_8)
			{
				goto IL_0038;
			}
		}

IL_002b:
		{
			ObjectTracker_t4177997237 * L_9 = V_0;
			DataSet_t3286034874 * L_10 = V_2;
			NullCheck(L_9);
			ObjectTracker_ActivateDataSet_m3009523340(L_9, L_10, /*hidden argument*/NULL);
			goto IL_0040;
		}

IL_0038:
		{
			ObjectTracker_t4177997237 * L_11 = V_0;
			DataSet_t3286034874 * L_12 = V_2;
			NullCheck(L_11);
			ObjectTracker_DeactivateDataSet_m2094146088(L_11, L_12, /*hidden argument*/NULL);
		}

IL_0040:
		{
			RuntimeObject* L_13 = V_3;
			NullCheck(L_13);
			bool L_14 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_001e;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x5D, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_15 = V_3;
			if (!L_15)
			{
				goto IL_005c;
			}
		}

IL_0056:
		{
			RuntimeObject* L_16 = V_3;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_16);
		}

IL_005c:
		{
			IL2CPP_END_FINALLY(80)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005d:
	{
		return;
	}
}
// Vuforia.MixedRealityController/Mode TransitionManager::GetMixedRealityMode()
extern "C"  int32_t TransitionManager_GetMixedRealityMode_m836765050 (TransitionManager_t3900140235 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionManager_GetMixedRealityMode_m836765050_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B8_0 = 0;
	{
		bool L_0 = TransitionManager_get_InAR_m1084650543(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TransitionManager_t3900140235_il2cpp_TypeInfo_var);
		bool L_1 = ((TransitionManager_t3900140235_StaticFields*)il2cpp_codegen_static_fields_for(TransitionManager_t3900140235_il2cpp_TypeInfo_var))->get_isFullScreenMode_8();
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_001c;
	}

IL_001b:
	{
		G_B4_0 = 4;
	}

IL_001c:
	{
		return (int32_t)(G_B4_0);
	}

IL_001d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TransitionManager_t3900140235_il2cpp_TypeInfo_var);
		bool L_2 = ((TransitionManager_t3900140235_StaticFields*)il2cpp_codegen_static_fields_for(TransitionManager_t3900140235_il2cpp_TypeInfo_var))->get_isFullScreenMode_8();
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		G_B8_0 = 3;
		goto IL_002e;
	}

IL_002d:
	{
		G_B8_0 = 7;
	}

IL_002e:
	{
		return (int32_t)(G_B8_0);
	}
}
// System.Void TransitionManager::UpdateVisibleObjects()
extern "C"  void TransitionManager_UpdateVisibleObjects_m3329821487 (TransitionManager_t3900140235 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionManager_UpdateVisibleObjects_m3329821487_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	GameObjectU5BU5D_t3328599146* V_1 = NULL;
	int32_t V_2 = 0;
	{
		GameObjectU5BU5D_t3328599146* L_0 = __this->get_VROnlyObjects_10();
		V_1 = L_0;
		V_2 = 0;
		goto IL_0025;
	}

IL_000e:
	{
		GameObjectU5BU5D_t3328599146* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t1113636619 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		GameObject_t1113636619 * L_5 = V_0;
		bool L_6 = TransitionManager_get_InAR_m1084650543(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m796801857(L_5, (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0025:
	{
		int32_t L_8 = V_2;
		GameObjectU5BU5D_t3328599146* L_9 = V_1;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		bool L_10 = TransitionManager_get_InAR_m1084650543(__this, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_00be;
		}
	}
	{
		Animator_t434523843 * L_11 = __this->get_m_Astronaut_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0062;
		}
	}
	{
		Animator_t434523843 * L_13 = __this->get_m_Astronaut_13();
		bool L_14 = TransitionManager_get_InAR_m1084650543(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Animator_SetBool_m234840832(L_13, _stringLiteral3194302366, (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0062:
	{
		Animator_t434523843 * L_15 = __this->get_m_Drone_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_15, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00be;
		}
	}
	{
		Animator_t434523843 * L_17 = __this->get_m_Drone_14();
		bool L_18 = TransitionManager_get_InAR_m1084650543(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Animator_SetBool_m234840832(L_17, _stringLiteral2770001329, (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		Animator_t434523843 * L_19 = __this->get_m_Drone_14();
		bool L_20 = TransitionManager_get_InAR_m1084650543(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Animator_SetBool_m234840832(L_19, _stringLiteral1093476094, (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		Animator_t434523843 * L_21 = __this->get_m_Drone_14();
		bool L_22 = TransitionManager_get_InAR_m1084650543(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		Animator_SetBool_m234840832(L_21, _stringLiteral779085831, (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_00be:
	{
		return;
	}
}
// System.Void TransitionManager::SetBlackMaskVisible(System.Boolean,System.Single)
extern "C"  void TransitionManager_SetBlackMaskVisible_m2346041137 (TransitionManager_t3900140235 * __this, bool ___visible0, float ___fadeFactor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionManager_SetBlackMaskVisible_m2346041137_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		BlackMaskBehaviour_t3514099953 * L_0 = __this->get_mBlackMask_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		BlackMaskBehaviour_t3514099953 * L_2 = __this->get_mBlackMask_6();
		NullCheck(L_2);
		Renderer_t2627027031 * L_3 = Component_GetComponent_TisRenderer_t2627027031_m2222376672(L_2, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m2222376672_RuntimeMethod_var);
		bool L_4 = ___visible0;
		NullCheck(L_3);
		Renderer_set_enabled_m1727253150(L_3, L_4, /*hidden argument*/NULL);
		BlackMaskBehaviour_t3514099953 * L_5 = __this->get_mBlackMask_6();
		float L_6 = ___fadeFactor1;
		NullCheck(L_5);
		BlackMaskBehaviour_SetFadeFactor_m3654852777(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Boolean TransitionManager::IsVideoBackgroundRenderingEnabled()
extern "C"  bool TransitionManager_IsVideoBackgroundRenderingEnabled_m1119413015 (TransitionManager_t3900140235 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionManager_IsVideoBackgroundRenderingEnabled_m1119413015_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BackgroundPlaneBehaviour_t3333547397 * V_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		Transform_t3600365921 * L_0 = TransitionManager_GetCameraRigRoot_m1570019008(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		BackgroundPlaneBehaviour_t3333547397 * L_1 = Component_GetComponentInChildren_TisBackgroundPlaneBehaviour_t3333547397_m2601826740(L_0, /*hidden argument*/Component_GetComponentInChildren_TisBackgroundPlaneBehaviour_t3333547397_m2601826740_RuntimeMethod_var);
		V_0 = L_1;
		BackgroundPlaneBehaviour_t3333547397 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		BackgroundPlaneBehaviour_t3333547397 * L_4 = V_0;
		NullCheck(L_4);
		MeshRenderer_t587009260 * L_5 = Component_GetComponent_TisMeshRenderer_t587009260_m3511415476(L_4, /*hidden argument*/Component_GetComponent_TisMeshRenderer_t587009260_m3511415476_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6 = Renderer_get_enabled_m3482452518(L_5, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
	}

IL_0025:
	{
		return (bool)G_B3_0;
	}
}
// UnityEngine.Transform TransitionManager::GetCameraRigRoot()
extern "C"  Transform_t3600365921 * TransitionManager_GetCameraRigRoot_m1570019008 (TransitionManager_t3900140235 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionManager_GetCameraRigRoot_m1570019008_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DigitalEyewearARController_t1054226036 * V_0 = NULL;
	VuforiaBehaviour_t2151848540 * V_1 = NULL;
	Transform_t3600365921 * G_B3_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(DigitalEyewearARController_t1054226036_il2cpp_TypeInfo_var);
		DigitalEyewearARController_t1054226036 * L_0 = DigitalEyewearARController_get_Instance_m3573866503(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaBehaviour_t2151848540_il2cpp_TypeInfo_var);
		VuforiaBehaviour_t2151848540 * L_1 = VuforiaBehaviour_get_Instance_m214402642(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		DigitalEyewearARController_t1054226036 * L_2 = V_0;
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = DigitalEyewearARController_get_CentralAnchorPoint_m2484323849(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		DigitalEyewearARController_t1054226036 * L_5 = V_0;
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = DigitalEyewearARController_get_CentralAnchorPoint_m2484323849(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = Transform_get_root_m2450402596(L_7, /*hidden argument*/NULL);
		G_B3_0 = L_8;
		goto IL_0037;
	}

IL_0031:
	{
		VuforiaBehaviour_t2151848540 * L_9 = V_1;
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(L_9, /*hidden argument*/NULL);
		G_B3_0 = L_10;
	}

IL_0037:
	{
		return G_B3_0;
	}
}
// System.Void TransitionManager::.cctor()
extern "C"  void TransitionManager__cctor_m3444121455 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionManager__cctor_m3444121455_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((TransitionManager_t3900140235_StaticFields*)il2cpp_codegen_static_fields_for(TransitionManager_t3900140235_il2cpp_TypeInfo_var))->set_isFullScreenMode_8((bool)1);
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
// System.Void ViewTrigger::.ctor()
extern "C"  void ViewTrigger__ctor_m956170812 (ViewTrigger_t2398860653 * __this, const RuntimeMethod* method)
{
	{
		__this->set_activationTime_3((1.5f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ViewTrigger::get_Focused()
extern "C"  bool ViewTrigger_get_Focused_m3842531336 (ViewTrigger_t2398860653 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CFocusedU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void ViewTrigger::set_Focused(System.Boolean)
extern "C"  void ViewTrigger_set_Focused_m3431439488 (ViewTrigger_t2398860653 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CFocusedU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void ViewTrigger::Start()
extern "C"  void ViewTrigger_Start_m3171850746 (ViewTrigger_t2398860653 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ViewTrigger_Start_m3171850746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_t4157153871 * L_0 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		__this->set_cameraTransform_10(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		TransitionManager_t3900140235 * L_2 = Object_FindObjectOfType_TisTransitionManager_t3900140235_m18610529(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisTransitionManager_t3900140235_m18610529_RuntimeMethod_var);
		__this->set_mTransitionManager_9(L_2);
		Renderer_t2627027031 * L_3 = Component_GetComponent_TisRenderer_t2627027031_m2222376672(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m2222376672_RuntimeMethod_var);
		Material_t340375123 * L_4 = __this->get_nonFocusedMaterial_5();
		NullCheck(L_3);
		Renderer_set_material_m1157964140(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ViewTrigger::Update()
extern "C"  void ViewTrigger_Update_m842461432 (ViewTrigger_t2398860653 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ViewTrigger_Update_m842461432_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t1056001966  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Ray_t3785851493  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	ViewTrigger_t2398860653 * G_B2_0 = NULL;
	ViewTrigger_t2398860653 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ViewTrigger_t2398860653 * G_B3_1 = NULL;
	int32_t G_B8_0 = 0;
	{
		Transform_t3600365921 * L_0 = __this->get_cameraTransform_10();
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		Transform_t3600365921 * L_2 = __this->get_cameraTransform_10();
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Transform_get_forward_m747522392(L_2, /*hidden argument*/NULL);
		Ray__ctor_m168149494((&V_1), L_1, L_3, /*hidden argument*/NULL);
		Ray_t3785851493  L_4 = V_1;
		Physics_Raycast_m1743768310(NULL /*static, unused*/, L_4, (&V_0), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		Collider_t1773347010 * L_5 = RaycastHit_get_collider_m1464180279((&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (!L_6)
		{
			G_B2_0 = __this;
			goto IL_0056;
		}
	}
	{
		Collider_t1773347010 * L_7 = RaycastHit_get_collider_m1464180279((&V_0), /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_t1113636619 * L_8 = Component_get_gameObject_m442555142(L_7, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_9 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_10));
		G_B3_1 = G_B1_0;
		goto IL_0057;
	}

IL_0056:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0057:
	{
		NullCheck(G_B3_1);
		ViewTrigger_set_Focused_m3431439488(G_B3_1, (bool)G_B3_0, /*hidden argument*/NULL);
		bool L_11 = __this->get_mTriggered_8();
		if (!L_11)
		{
			goto IL_0068;
		}
	}
	{
		return;
	}

IL_0068:
	{
		bool L_12 = ViewTrigger_get_Focused_m3842531336(__this, /*hidden argument*/NULL);
		ViewTrigger_UpdateMaterials_m540877782(__this, L_12, /*hidden argument*/NULL);
		if (0)
		{
			goto IL_0082;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_13 = Input_GetMouseButtonUp_m2924350851(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_13));
		goto IL_0083;
	}

IL_0082:
	{
		G_B8_0 = 1;
	}

IL_0083:
	{
		V_2 = (bool)G_B8_0;
		bool L_14 = ViewTrigger_get_Focused_m3842531336(__this, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0103;
		}
	}
	{
		float L_15 = __this->get_mFocusedTime_7();
		float L_16 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_mFocusedTime_7(((float)il2cpp_codegen_add((float)L_15, (float)L_16)));
		float L_17 = __this->get_mFocusedTime_7();
		float L_18 = __this->get_activationTime_3();
		if ((((float)L_17) > ((float)L_18)))
		{
			goto IL_00b8;
		}
	}
	{
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_00fe;
		}
	}

IL_00b8:
	{
		__this->set_mTriggered_8((bool)1);
		__this->set_mFocusedTime_7((0.0f));
		int32_t L_20 = __this->get_triggerType_2();
		V_3 = (bool)((((int32_t)L_20) == ((int32_t)1))? 1 : 0);
		TransitionManager_t3900140235 * L_21 = __this->get_mTransitionManager_9();
		bool L_22 = V_3;
		NullCheck(L_21);
		TransitionManager_Play_m1310268232(L_21, L_22, /*hidden argument*/NULL);
		TransitionManager_t3900140235 * L_23 = __this->get_mTransitionManager_9();
		NullCheck(L_23);
		float L_24 = L_23->get_transitionDuration_11();
		RuntimeObject* L_25 = ViewTrigger_ResetAfter_m1577891685(__this, ((float)il2cpp_codegen_multiply((float)(0.3f), (float)L_24)), /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_25, /*hidden argument*/NULL);
	}

IL_00fe:
	{
		goto IL_010e;
	}

IL_0103:
	{
		__this->set_mFocusedTime_7((0.0f));
	}

IL_010e:
	{
		return;
	}
}
// System.Void ViewTrigger::UpdateMaterials(System.Boolean)
extern "C"  void ViewTrigger_UpdateMaterials_m540877782 (ViewTrigger_t2398860653 * __this, bool ___focused0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ViewTrigger_UpdateMaterials_m540877782_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t2627027031 * V_0 = NULL;
	float V_1 = 0.0f;
	Renderer_t2627027031 * V_2 = NULL;
	RendererU5BU5D_t3210418286* V_3 = NULL;
	int32_t V_4 = 0;
	Renderer_t2627027031 * G_B2_0 = NULL;
	Renderer_t2627027031 * G_B1_0 = NULL;
	Material_t340375123 * G_B3_0 = NULL;
	Renderer_t2627027031 * G_B3_1 = NULL;
	float G_B6_0 = 0.0f;
	{
		Renderer_t2627027031 * L_0 = Component_GetComponent_TisRenderer_t2627027031_m2222376672(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m2222376672_RuntimeMethod_var);
		V_0 = L_0;
		Renderer_t2627027031 * L_1 = V_0;
		bool L_2 = ___focused0;
		G_B1_0 = L_1;
		if (!L_2)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
	}
	{
		Material_t340375123 * L_3 = __this->get_focusedMaterial_4();
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_001f;
	}

IL_0019:
	{
		Material_t340375123 * L_4 = __this->get_nonFocusedMaterial_5();
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_001f:
	{
		NullCheck(G_B3_1);
		Renderer_set_material_m1157964140(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		bool L_5 = ___focused0;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		float L_6 = __this->get_mFocusedTime_7();
		float L_7 = __this->get_activationTime_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_8 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, ((float)((float)L_6/(float)L_7)), /*hidden argument*/NULL);
		G_B6_0 = L_8;
		goto IL_0046;
	}

IL_0041:
	{
		G_B6_0 = (0.0f);
	}

IL_0046:
	{
		V_1 = G_B6_0;
		RendererU5BU5D_t3210418286* L_9 = Component_GetComponentsInChildren_TisRenderer_t2627027031_m2677127880(__this, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t2627027031_m2677127880_RuntimeMethod_var);
		V_3 = L_9;
		V_4 = 0;
		goto IL_0091;
	}

IL_0056:
	{
		RendererU5BU5D_t3210418286* L_10 = V_3;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Renderer_t2627027031 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_2 = L_13;
		Renderer_t2627027031 * L_14 = V_2;
		NullCheck(L_14);
		Material_t340375123 * L_15 = Renderer_get_material_m4171603682(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Shader_t4151988712 * L_16 = Material_get_shader_m1331119247(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		String_t* L_17 = Object_get_name_m4211327027(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		bool L_18 = String_Equals_m2270643605(L_17, _stringLiteral717063174, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_008b;
		}
	}
	{
		Renderer_t2627027031 * L_19 = V_2;
		NullCheck(L_19);
		Material_t340375123 * L_20 = Renderer_get_material_m4171603682(L_19, /*hidden argument*/NULL);
		float L_21 = V_1;
		NullCheck(L_20);
		Material_SetFloat_m3226510453(L_20, _stringLiteral2410870734, L_21, /*hidden argument*/NULL);
	}

IL_008b:
	{
		int32_t L_22 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_23 = V_4;
		RendererU5BU5D_t3210418286* L_24 = V_3;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_24)->max_length)))))))
		{
			goto IL_0056;
		}
	}
	{
		return;
	}
}
// System.Collections.IEnumerator ViewTrigger::ResetAfter(System.Single)
extern "C"  RuntimeObject* ViewTrigger_ResetAfter_m1577891685 (ViewTrigger_t2398860653 * __this, float ___seconds0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ViewTrigger_ResetAfter_m1577891685_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CResetAfterU3Ec__Iterator0_t4017133920 * V_0 = NULL;
	{
		U3CResetAfterU3Ec__Iterator0_t4017133920 * L_0 = (U3CResetAfterU3Ec__Iterator0_t4017133920 *)il2cpp_codegen_object_new(U3CResetAfterU3Ec__Iterator0_t4017133920_il2cpp_TypeInfo_var);
		U3CResetAfterU3Ec__Iterator0__ctor_m1134785442(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CResetAfterU3Ec__Iterator0_t4017133920 * L_1 = V_0;
		float L_2 = ___seconds0;
		NullCheck(L_1);
		L_1->set_seconds_0(L_2);
		U3CResetAfterU3Ec__Iterator0_t4017133920 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_1(__this);
		U3CResetAfterU3Ec__Iterator0_t4017133920 * L_4 = V_0;
		return L_4;
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
// System.Void ViewTrigger/<ResetAfter>c__Iterator0::.ctor()
extern "C"  void U3CResetAfterU3Ec__Iterator0__ctor_m1134785442 (U3CResetAfterU3Ec__Iterator0_t4017133920 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ViewTrigger/<ResetAfter>c__Iterator0::MoveNext()
extern "C"  bool U3CResetAfterU3Ec__Iterator0_MoveNext_m3498358698 (U3CResetAfterU3Ec__Iterator0_t4017133920 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CResetAfterU3Ec__Iterator0_MoveNext_m3498358698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_00b5;
	}

IL_0021:
	{
		float L_2 = __this->get_seconds_0();
		float L_3 = L_2;
		RuntimeObject * L_4 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral926174776, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		float L_6 = __this->get_seconds_0();
		WaitForSeconds_t1699091251 * L_7 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_7, L_6, /*hidden argument*/NULL);
		__this->set_U24current_2(L_7);
		bool L_8 = __this->get_U24disposing_3();
		if (L_8)
		{
			goto IL_005b;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_005b:
	{
		goto IL_00b7;
	}

IL_0060:
	{
		ViewTrigger_t2398860653 * L_9 = __this->get_U24this_1();
		NullCheck(L_9);
		String_t* L_10 = Object_get_name_m4211327027(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral114570317, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		ViewTrigger_t2398860653 * L_12 = __this->get_U24this_1();
		NullCheck(L_12);
		L_12->set_mTriggered_8((bool)0);
		ViewTrigger_t2398860653 * L_13 = __this->get_U24this_1();
		NullCheck(L_13);
		L_13->set_mFocusedTime_7((0.0f));
		ViewTrigger_t2398860653 * L_14 = __this->get_U24this_1();
		NullCheck(L_14);
		ViewTrigger_set_Focused_m3431439488(L_14, (bool)0, /*hidden argument*/NULL);
		ViewTrigger_t2398860653 * L_15 = __this->get_U24this_1();
		NullCheck(L_15);
		ViewTrigger_UpdateMaterials_m540877782(L_15, (bool)0, /*hidden argument*/NULL);
		__this->set_U24PC_4((-1));
	}

IL_00b5:
	{
		return (bool)0;
	}

IL_00b7:
	{
		return (bool)1;
	}
}
// System.Object ViewTrigger/<ResetAfter>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CResetAfterU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3028258698 (U3CResetAfterU3Ec__Iterator0_t4017133920 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object ViewTrigger/<ResetAfter>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CResetAfterU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m2265457074 (U3CResetAfterU3Ec__Iterator0_t4017133920 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void ViewTrigger/<ResetAfter>c__Iterator0::Dispose()
extern "C"  void U3CResetAfterU3Ec__Iterator0_Dispose_m92537955 (U3CResetAfterU3Ec__Iterator0_t4017133920 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void ViewTrigger/<ResetAfter>c__Iterator0::Reset()
extern "C"  void U3CResetAfterU3Ec__Iterator0_Reset_m3313695853 (U3CResetAfterU3Ec__Iterator0_t4017133920 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CResetAfterU3Ec__Iterator0_Reset_m3313695853_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0,U3CResetAfterU3Ec__Iterator0_Reset_m3313695853_RuntimeMethod_var);
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
