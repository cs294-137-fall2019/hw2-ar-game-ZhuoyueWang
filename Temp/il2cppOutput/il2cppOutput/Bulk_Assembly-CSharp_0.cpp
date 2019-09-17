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

// ARButton1
struct ARButton1_t09208D2FE593BBF36E5648836272C02E4E61F48D;
// ARButton2
struct ARButton2_tE314BFE8581C8F25E1BE86557D47AC3E600374E6;
// ARButtonManager
struct ARButtonManager_t7EB96079B3DCC57D6B61DC5C01094FA30CCDD5A8;
// BallController
struct BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB;
// BallMover
struct BallMover_t696C670720FE1CD8219B87A8278193B52C1E9413;
// DisappearingText
struct DisappearingText_t81FE874B6F64EE4B044980D452139CBC79CB1B15;
// OnTouch3D
struct OnTouch3D_t1B7024D522D88EB871840E2DEA458F2DFAF0E2D2;
// PlaceGameBoard
struct PlaceGameBoard_t8091E3D27BDFE9409A418B1DFE0E2D26E187F90A;
// Rotator
struct Rotator_t8E318BD1376632CD4EE2113010F16B4BC26E15A8;
// StartButton
struct StartButton_t90FFC983737848D23F33776967997408511D1352;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs>
struct Action_1_t5A0A4549E7215F9A5DA4C7A647D06B3689691A8F;
// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>
struct Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARPlane>
struct Dictionary_2_t6D25680AC083D6735B2252FAAF8ECB333ED0B8F0;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_tB4ACC0E738125FD48DF94969067CC04FE44C01DD;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPlane>
struct List_1_t2517CE2CABA3F0EFDEC91E3FA83D4F0417EFF51B;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_tE22AC27B04238DDEA6B873A77D0222DA9B480F52;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_tCF216E059678E6F86943670619732CE72CD5BC19;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct List_1_t208402DC43C0E4E5C961FFC8BB18B8A0F1D3091A;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_t67EA06DFF28CCF87DA1E9B7EB486336F8B486A7C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_t71A8ADBEF293474EAEA02AD88A071AD903A3B475;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_tE207337DE1F503EEC6370260BFAB53232F5224B3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t127C0519F4FBF1149F38B4E895BA95F8E83EE659;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t5D589FB938B29FA2A1EF1FEC2CBA1201FF0C9A02;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Experimental.ISubsystemDescriptor
struct ISubsystemDescriptor_tDF5EB3ED639A15690D2CB9993789BB21F24D3934;
// UnityEngine.Experimental.Subsystem`1<System.Object>
struct Subsystem_1_t3C9464E9C57AFD87BCA00E457B3C2FCB3AFA269E;
// UnityEngine.Experimental.Subsystem`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct Subsystem_1_t30A0E0214407A620CECF452A54D6676F5A6574B9;
// UnityEngine.Experimental.XR.Interaction.BasePoseProvider
struct BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.SpatialTracking.TrackedPoseDriver
struct TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_tC2613B8C888EBC3F92BF68E60F0A3E4DCCFAD69A;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t2DDAC1FD38DF991C190FAEF8144A68AFBC541E94;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7;
// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC;
// UnityEngine.XR.ARFoundation.ARSession/<CheckAvailability>d__17
struct U3CCheckAvailabilityU3Ed__17_t60F7D023CEFAE9EA91E8CDB81293B9D984039D1B;
// UnityEngine.XR.ARFoundation.ARSession/<Initialize>d__20
struct U3CInitializeU3Ed__20_t9A81C14367242A53C21B440CCA714B3C378E60BF;
// UnityEngine.XR.ARFoundation.ARSession/<Install>d__18
struct U3CInstallU3Ed__18_t57C93156E2C9C00B61AC295C86B51B88C8561566;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tD635899BA0B41E9F3CE205D105ED47637E2AB0E2;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF;
// UnityEngine.XR.ARFoundation.ARSession[]
struct ARSessionU5BU5D_t59BB2CF66CA69B5754D409F8589E8ECB48BF0C7E;
// UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>
struct ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11;
// UnityEngine.XR.ARFoundation.ARTrackableManager`4<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackableManager_4_t85857EDF2FEA2C5522B55CA4D1FDDCBA49FBB427;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>
struct SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct SubsystemLifecycleManager_2_t166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3;
// UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>
struct Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>
struct Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider
struct IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079;

extern RuntimeClass* ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tE22AC27B04238DDEA6B873A77D0222DA9B480F52_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* OnTouch3D_t1B7024D522D88EB871840E2DEA458F2DFAF0E2D2_il2cpp_TypeInfo_var;
extern RuntimeClass* Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
extern RuntimeClass* SubsystemLifecycleManager_2_t166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3_il2cpp_TypeInfo_var;
extern RuntimeClass* Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CCheckAvailabilityU3Ed__17_t60F7D023CEFAE9EA91E8CDB81293B9D984039D1B_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CInitializeU3Ed__20_t9A81C14367242A53C21B440CCA714B3C378E60BF_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CInstallU3Ed__18_t57C93156E2C9C00B61AC295C86B51B88C8561566_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral040F06FD774092478D450774F5BA30C5DA78ACC8;
extern String_t* _stringLiteral0DB7C7BB0714C630642B5CBE581ADD7128F908DF;
extern String_t* _stringLiteral239A3C2F25D64246C5E6BCE1C630A0AE1CA9462A;
extern String_t* _stringLiteral31E4A097644F6472E57F703619D8C22C2D03BEC4;
extern String_t* _stringLiteral3F8DA3C08BC90A82D2F0A4CEA76BA7E21B5ACCB8;
extern String_t* _stringLiteral42EA63FFF995283010C2EB4C65D78714CA4706E4;
extern String_t* _stringLiteral4A3BBDAB52FE5BCDBFB18F184652DBAA28C4DD80;
extern String_t* _stringLiteral5727D140A7AC4EAB885DD48F310E898DFBF3D746;
extern String_t* _stringLiteral6008C1B9A15E3BD46B8ED38927233E7A0E57E21E;
extern String_t* _stringLiteral63ABFCDE7273ABD8F7996B1A50D5B0CA54CF28D3;
extern String_t* _stringLiteral836A09EE87CB2E910237FD08E2D5EC26E2ACA47D;
extern String_t* _stringLiteral8F7BE0B2815F0D5F0175578D148359ACD80D4A57;
extern String_t* _stringLiteral97E6A4B7284FF60EC6DACEBE36E538B49E3C15F4;
extern String_t* _stringLiteral9BD4B3A961534A860DA7D4D3C8723AA314B31AD5;
extern String_t* _stringLiteralA2A5FCFF23681B30836B2F48243F3971AA380408;
extern String_t* _stringLiteralCC8A256E93699B8B62E6270708BBACA487BE37EC;
extern String_t* _stringLiteralCF172521BC7A24A2B0AD76B71B168015620E6043;
extern String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
extern String_t* _stringLiteralF2B514B25684DE761EF0E0E4F386F3D5B3E68033;
extern String_t* _stringLiteralF2C471D390D4680C1EBF5AB59814E011DC5FDB4D;
extern String_t* _stringLiteralFD0B883AAA8FCFAE7EAE8B7D96A74D864868BCD2;
extern const RuntimeMethod* ARSessionOrigin_MakeContentAppearAt_m19B910A50B06642F43303C33E0B86AF39DA322CD_RuntimeMethod_var;
extern const RuntimeMethod* ARSessionOrigin_MakeContentAppearAt_m1B12B238B3E4687822E05DAA2B98CF76D2DD1905_RuntimeMethod_var;
extern const RuntimeMethod* ARTrackableManager_4_SetTrackablesActive_m04B8A0D1B72A834DA22B4E7389F7E0B3978903D2_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m588298D1CA0383E663E3FF5B4D0FDBED75EF7D60_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisARPlaneManager_tC2613B8C888EBC3F92BF68E60F0A3E4DCCFAD69A_m455AA97B2C4D63D9097F33F6D48444A891B5234A_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7_m71DCE7466C02DBA59A1618314D7FA98D931BD522_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisOnTouch3D_t1B7024D522D88EB871840E2DEA458F2DFAF0E2D2_m97E02014BB00D2533DD18DB201452FCF7CE8A035_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisPlaceGameBoard_t8091E3D27BDFE9409A418B1DFE0E2D26E187F90A_mCEF859C3BC828C724206F862271DBA3696D86DD6_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisTrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A_m9D292B4E1EA83C0976E8950376D313E65A8A7E67_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisBallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB_m1917A2D55D0658361EDAD097677276948BC3B157_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m7C43359DBAA0872D17EFDD3554B9BCCE557DC775_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_mEB0CDED8A9ADCC0F235881A5D34D41085EC4780C_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m0046B0A356552D7B951C2CEEE5F1375DAF72054A_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m40902128B21C9D7174C484E5264CF392E07EC258_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_mA52EAAB235BDE102E8518F30412F14422B05C9E0_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m553C06F3C7AF691CFB4457CFAFB109DDCB4ED9B3_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m88FE4B6F43A2CD95BB9ECF8D801F206618FFFFB8_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_mFA1DFF7102266DFFCA6630C79C553225EE591AAE_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Item_m0E0D8F10934225F83BFBD84DEA568F92CD75DDCE_RuntimeMethod_var;
extern const RuntimeMethod* Object_FindObjectsOfType_TisARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_m717AB67321FD6E41C6ABC6A1B97E1010A3E382CE_RuntimeMethod_var;
extern const RuntimeMethod* Promise_1_get_result_m68CA6282F7A775424E9C70D3E9AE1F1DB9D6D53F_RuntimeMethod_var;
extern const RuntimeMethod* Promise_1_get_result_mD780D5F7F8042B92389DCA99E58D379C4898C256_RuntimeMethod_var;
extern const RuntimeMethod* SubsystemLifecycleManager_2_CreateSubsystemIfNecessary_m2F891BFFDB630974126B497C64236D6829512C40_RuntimeMethod_var;
extern const RuntimeMethod* SubsystemLifecycleManager_2_OnDestroy_mAF4A50B01BDBF5EBCF7841E9FC52718D51222317_RuntimeMethod_var;
extern const RuntimeMethod* SubsystemLifecycleManager_2_OnDisable_m3FDAA1FFCE3D14EBE1DC9776D64FD792ACF28412_RuntimeMethod_var;
extern const RuntimeMethod* SubsystemLifecycleManager_2__ctor_m9DA5E4AAF458FD649E821445CA4C9CDEBB6D7C93_RuntimeMethod_var;
extern const RuntimeMethod* SubsystemLifecycleManager_2_get_descriptor_mACB947E64926B6F80F28A2A443EA4CC9ED1E42E9_RuntimeMethod_var;
extern const RuntimeMethod* SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B_RuntimeMethod_var;
extern const RuntimeMethod* Subsystem_1_get_SubsystemDescriptor_m7D9A1F7F1631768F5DE2EC7DA7FC3FCCA24336C7_RuntimeMethod_var;
extern const RuntimeMethod* U3CCheckAvailabilityU3Ed__17_System_Collections_IEnumerator_Reset_m22BAA43B6D8CB0C3C4C2ABF481A9F4A7C640A6FD_RuntimeMethod_var;
extern const RuntimeMethod* U3CInitializeU3Ed__20_System_Collections_IEnumerator_Reset_mE8D8D1C6F40FC94E9CFE8B4D5B6504D92F41E5F7_RuntimeMethod_var;
extern const RuntimeMethod* U3CInstallU3Ed__18_MoveNext_mB6E53844628669B35F6BD80D8E3442325E3241C7_RuntimeMethod_var;
extern const RuntimeMethod* U3CInstallU3Ed__18_System_Collections_IEnumerator_Reset_m3215B1B04EBC631B08240AB17E5ABF68AC492F33_RuntimeMethod_var;
extern const uint32_t ARButton2_OnTouch_mA58EB57E6F4F22A9A5DEDA21907F7C726E373C78_MetadataUsageId;
extern const uint32_t ARButtonManager_Start_m8FEDD14C014B0CB725EC44E3B96146A9CD6EE170_MetadataUsageId;
extern const uint32_t ARButtonManager_Update_m1F441A250A7B6718AD8BE1CD0FB8BABC885DEB31_MetadataUsageId;
extern const uint32_t ARSessionOrigin_Awake_mF38CA1C5FC651AF466368ABF30A4DD929C08DC2B_MetadataUsageId;
extern const uint32_t ARSessionOrigin_GetCameraOriginPose_m9EB7958C94053A5DA209DA66008248E84CF31A32_MetadataUsageId;
extern const uint32_t ARSessionOrigin_MakeContentAppearAt_m19B910A50B06642F43303C33E0B86AF39DA322CD_MetadataUsageId;
extern const uint32_t ARSessionOrigin_MakeContentAppearAt_m1B12B238B3E4687822E05DAA2B98CF76D2DD1905_MetadataUsageId;
extern const uint32_t ARSessionOrigin_Update_m35CAE0FD83D5D103FBEC3D0BE206290860762759_MetadataUsageId;
extern const uint32_t ARSessionOrigin_get_contentOffsetTransform_mD50A9BCBD6EF6E22A4FC6C0B57ED3C301588ADBD_MetadataUsageId;
extern const uint32_t ARSession_Awake_mC87E839C6887060A94715B6E5C504D075B9F6D8C_MetadataUsageId;
extern const uint32_t ARSession_CheckAvailability_m00CF59963BF0112BA01A706D1835F682C2D364C9_MetadataUsageId;
extern const uint32_t ARSession_Initialize_mB23569D59077BAF767A502C71EBCEEB16197F574_MetadataUsageId;
extern const uint32_t ARSession_Install_m8E803A370473F826186C07040596F5C1D6DC3A53_MetadataUsageId;
extern const uint32_t ARSession_OnApplicationPause_m3A3701CBE2A918F3EB2472F75F93BD5872B8A6F6_MetadataUsageId;
extern const uint32_t ARSession_OnDestroy_m0AAC9F2B3205EE9FE4CE3D903BD811C75689C66E_MetadataUsageId;
extern const uint32_t ARSession_OnDisable_m7A441A0FC31FB042E68A2351E5600D5F9808C802_MetadataUsageId;
extern const uint32_t ARSession_OnEnable_m50ADA47DECCB938F9BD8B389F77153BC1E5BF80D_MetadataUsageId;
extern const uint32_t ARSession_Reset_mC83E2AD459A84CEBD12DEC4970BD418D1F52937B_MetadataUsageId;
extern const uint32_t ARSession_SetMatchFrameRateEnabled_mAF625DD431B80D4A7FDEA5738B34C483E15B71D2_MetadataUsageId;
extern const uint32_t ARSession_StartSubsystem_mEF96EEA17C85A58E001487B2BF31263B68F9C6D5_MetadataUsageId;
extern const uint32_t ARSession_Update_mEF65D186AFA81E4BD71E806A3DB0E11BC78265C3_MetadataUsageId;
extern const uint32_t ARSession_WarnIfMultipleARSessions_mAA5943BCF8559425E6AACD1DAF859D3E7A104C48_MetadataUsageId;
extern const uint32_t ARSession__ctor_mE820D4FA810265B10198EF8034307B2F8885F796_MetadataUsageId;
extern const uint32_t ARSession_add_stateChanged_mF4B2081C4A6ECCD67780E0889BBE1E63BFED78F7_MetadataUsageId;
extern const uint32_t ARSession_get_state_m805612298E9ED122411DA5633370B26B2BF07AE2_MetadataUsageId;
extern const uint32_t ARSession_remove_stateChanged_m668C0EB61D2219B41BA470A261B6702E722352D2_MetadataUsageId;
extern const uint32_t ARSession_set_matchFrameRate_m2DF9A7942DDFFB8CB6CFFCE9610FC095E599987D_MetadataUsageId;
extern const uint32_t ARSession_set_state_mA395527F1EABE6201E08E27F210CADBA384368F5_MetadataUsageId;
extern const uint32_t BallController_BallPop_mC4ABF3C8C2F7A37F4DB3FF60C515EC2DF8C86570_MetadataUsageId;
extern const uint32_t BallController_BallReset_mFC3777D33778E31E6031A83045D9C3A97A3B43A8_MetadataUsageId;
extern const uint32_t BallController_ConfigDifficulty_m8AB02B25FFCA92597F76DE54168B20FECE323B4D_MetadataUsageId;
extern const uint32_t BallController_GameOver_mB457E78E7F8597E370F6769452021FB4B3C140EB_MetadataUsageId;
extern const uint32_t BallController_Start_m405732FD42FA3034EB64668BA2A2BDAA5E4E2999_MetadataUsageId;
extern const uint32_t BallController_UpdateScore_mB2415FF436B1D7D3D9A6D828272ADC5CD3A43C11_MetadataUsageId;
extern const uint32_t BallMover_OnTouch_m8C57E818CEC22F4A597C2F7C26F61F35774C544E_MetadataUsageId;
extern const uint32_t BallMover_Start_m1C73A4E8C02EE8F685F700EE237E990600C7D06B_MetadataUsageId;
extern const uint32_t PlaceGameBoard_AllowMoveGameBoard_mCFE2E953E743B711EF9F1415944248F2E59CD5C5_MetadataUsageId;
extern const uint32_t PlaceGameBoard_Start_mEDEC5D66DD3EA3BBE97FC6169BCB05021733C7BC_MetadataUsageId;
extern const uint32_t PlaceGameBoard_Update_m900B9397DFF606D214BD134B653138411F62D330_MetadataUsageId;
extern const uint32_t Rotator_LateUpdate_m8F9DB548F1E412803C7B83F33A0C85ECE11FAB9E_MetadataUsageId;
extern const uint32_t StartButton_OnTouch_mCB99785481CCBB899B87E03D24EA00A9114662BE_MetadataUsageId;
extern const uint32_t U3CCheckAvailabilityU3Ed__17_MoveNext_mF21E0B6188BEBD68250E0506A1BC9BC58A5A6655_MetadataUsageId;
extern const uint32_t U3CCheckAvailabilityU3Ed__17_System_Collections_IEnumerator_Reset_m22BAA43B6D8CB0C3C4C2ABF481A9F4A7C640A6FD_MetadataUsageId;
extern const uint32_t U3CInitializeU3Ed__20_System_Collections_IEnumerator_Reset_mE8D8D1C6F40FC94E9CFE8B4D5B6504D92F41E5F7_MetadataUsageId;
extern const uint32_t U3CInstallU3Ed__18_MoveNext_mB6E53844628669B35F6BD80D8E3442325E3241C7_MetadataUsageId;
extern const uint32_t U3CInstallU3Ed__18_System_Collections_IEnumerator_Reset_m3215B1B04EBC631B08240AB17E5ABF68AC492F33_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct ARSessionU5BU5D_t59BB2CF66CA69B5754D409F8589E8ECB48BF0C7E;


#ifndef U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#define U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
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
#ifndef LIST_1_T19FD9E99EF958D3D6E17E5C441DC4F57D73516FE_H
#define LIST_1_T19FD9E99EF958D3D6E17E5C441DC4F57D73516FE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Boolean>
struct  List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE, ____items_1)); }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* get__items_1() const { return ____items_1; }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE_StaticFields, ____emptyArray_5)); }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T19FD9E99EF958D3D6E17E5C441DC4F57D73516FE_H
#ifndef LIST_1_T1863EF4EE1FDEED14D460C85AF61BE0850892F6D_H
#define LIST_1_T1863EF4EE1FDEED14D460C85AF61BE0850892F6D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct  List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D, ____items_1)); }
	inline TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D_StaticFields, ____emptyArray_5)); }
	inline TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1863EF4EE1FDEED14D460C85AF61BE0850892F6D_H
#ifndef LIST_1_TE22AC27B04238DDEA6B873A77D0222DA9B480F52_H
#define LIST_1_TE22AC27B04238DDEA6B873A77D0222DA9B480F52_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct  List_1_tE22AC27B04238DDEA6B873A77D0222DA9B480F52  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t2DDAC1FD38DF991C190FAEF8144A68AFBC541E94* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE22AC27B04238DDEA6B873A77D0222DA9B480F52, ____items_1)); }
	inline ARRaycastHitU5BU5D_t2DDAC1FD38DF991C190FAEF8144A68AFBC541E94* get__items_1() const { return ____items_1; }
	inline ARRaycastHitU5BU5D_t2DDAC1FD38DF991C190FAEF8144A68AFBC541E94** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ARRaycastHitU5BU5D_t2DDAC1FD38DF991C190FAEF8144A68AFBC541E94* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE22AC27B04238DDEA6B873A77D0222DA9B480F52, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE22AC27B04238DDEA6B873A77D0222DA9B480F52, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE22AC27B04238DDEA6B873A77D0222DA9B480F52, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tE22AC27B04238DDEA6B873A77D0222DA9B480F52_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ARRaycastHitU5BU5D_t2DDAC1FD38DF991C190FAEF8144A68AFBC541E94* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE22AC27B04238DDEA6B873A77D0222DA9B480F52_StaticFields, ____emptyArray_5)); }
	inline ARRaycastHitU5BU5D_t2DDAC1FD38DF991C190FAEF8144A68AFBC541E94* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ARRaycastHitU5BU5D_t2DDAC1FD38DF991C190FAEF8144A68AFBC541E94** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ARRaycastHitU5BU5D_t2DDAC1FD38DF991C190FAEF8144A68AFBC541E94* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TE22AC27B04238DDEA6B873A77D0222DA9B480F52_H
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
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
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
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
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
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
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
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
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef CUSTOMYIELDINSTRUCTION_T819BB0973AFF22766749FF087B8AEFEAF3C2CB7D_H
#define CUSTOMYIELDINSTRUCTION_T819BB0973AFF22766749FF087B8AEFEAF3C2CB7D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T819BB0973AFF22766749FF087B8AEFEAF3C2CB7D_H
#ifndef SUBSYSTEM_T9D40133A9FEB984E2C3695B077DA4DDFC91CA181_H
#define SUBSYSTEM_T9D40133A9FEB984E2C3695B077DA4DDFC91CA181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Subsystem
struct  Subsystem_t9D40133A9FEB984E2C3695B077DA4DDFC91CA181  : public RuntimeObject
{
public:
	// UnityEngine.Experimental.ISubsystemDescriptor UnityEngine.Experimental.Subsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_0;

public:
	inline static int32_t get_offset_of_m_subsystemDescriptor_0() { return static_cast<int32_t>(offsetof(Subsystem_t9D40133A9FEB984E2C3695B077DA4DDFC91CA181, ___m_subsystemDescriptor_0)); }
	inline RuntimeObject* get_m_subsystemDescriptor_0() const { return ___m_subsystemDescriptor_0; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_0() { return &___m_subsystemDescriptor_0; }
	inline void set_m_subsystemDescriptor_0(RuntimeObject* value)
	{
		___m_subsystemDescriptor_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_subsystemDescriptor_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEM_T9D40133A9FEB984E2C3695B077DA4DDFC91CA181_H
#ifndef SUBSYSTEMDESCRIPTOR_T39CE9D1BAAE27EC6FC62A49C82C06B1119F7EEC4_H
#define SUBSYSTEMDESCRIPTOR_T39CE9D1BAAE27EC6FC62A49C82C06B1119F7EEC4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.SubsystemDescriptor
struct  SubsystemDescriptor_t39CE9D1BAAE27EC6FC62A49C82C06B1119F7EEC4  : public RuntimeObject
{
public:
	// System.String UnityEngine.Experimental.SubsystemDescriptor::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.Experimental.SubsystemDescriptor::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemDescriptor_t39CE9D1BAAE27EC6FC62A49C82C06B1119F7EEC4, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CidU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemDescriptor_t39CE9D1BAAE27EC6FC62A49C82C06B1119F7EEC4, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEMDESCRIPTOR_T39CE9D1BAAE27EC6FC62A49C82C06B1119F7EEC4_H
#ifndef U3CCHECKAVAILABILITYU3ED__17_T60F7D023CEFAE9EA91E8CDB81293B9D984039D1B_H
#define U3CCHECKAVAILABILITYU3ED__17_T60F7D023CEFAE9EA91E8CDB81293B9D984039D1B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARFoundation.ARSession_<CheckAvailability>d__17
struct  U3CCheckAvailabilityU3Ed__17_t60F7D023CEFAE9EA91E8CDB81293B9D984039D1B  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession_<CheckAvailability>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.ARFoundation.ARSession_<CheckAvailability>d__17::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability> UnityEngine.XR.ARFoundation.ARSession_<CheckAvailability>d__17::<availabilityPromise>5__2
	Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * ___U3CavailabilityPromiseU3E5__2_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCheckAvailabilityU3Ed__17_t60F7D023CEFAE9EA91E8CDB81293B9D984039D1B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCheckAvailabilityU3Ed__17_t60F7D023CEFAE9EA91E8CDB81293B9D984039D1B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CavailabilityPromiseU3E5__2_2() { return static_cast<int32_t>(offsetof(U3CCheckAvailabilityU3Ed__17_t60F7D023CEFAE9EA91E8CDB81293B9D984039D1B, ___U3CavailabilityPromiseU3E5__2_2)); }
	inline Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * get_U3CavailabilityPromiseU3E5__2_2() const { return ___U3CavailabilityPromiseU3E5__2_2; }
	inline Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B ** get_address_of_U3CavailabilityPromiseU3E5__2_2() { return &___U3CavailabilityPromiseU3E5__2_2; }
	inline void set_U3CavailabilityPromiseU3E5__2_2(Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * value)
	{
		___U3CavailabilityPromiseU3E5__2_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CavailabilityPromiseU3E5__2_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCHECKAVAILABILITYU3ED__17_T60F7D023CEFAE9EA91E8CDB81293B9D984039D1B_H
#ifndef U3CINITIALIZEU3ED__20_T9A81C14367242A53C21B440CCA714B3C378E60BF_H
#define U3CINITIALIZEU3ED__20_T9A81C14367242A53C21B440CCA714B3C378E60BF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARFoundation.ARSession_<Initialize>d__20
struct  U3CInitializeU3Ed__20_t9A81C14367242A53C21B440CCA714B3C378E60BF  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession_<Initialize>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.ARFoundation.ARSession_<Initialize>d__20::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.XR.ARFoundation.ARSession UnityEngine.XR.ARFoundation.ARSession_<Initialize>d__20::<>4__this
	ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ed__20_t9A81C14367242A53C21B440CCA714B3C378E60BF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ed__20_t9A81C14367242A53C21B440CCA714B3C378E60BF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ed__20_t9A81C14367242A53C21B440CCA714B3C378E60BF, ___U3CU3E4__this_2)); }
	inline ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CINITIALIZEU3ED__20_T9A81C14367242A53C21B440CCA714B3C378E60BF_H
#ifndef U3CINSTALLU3ED__18_T57C93156E2C9C00B61AC295C86B51B88C8561566_H
#define U3CINSTALLU3ED__18_T57C93156E2C9C00B61AC295C86B51B88C8561566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARFoundation.ARSession_<Install>d__18
struct  U3CInstallU3Ed__18_t57C93156E2C9C00B61AC295C86B51B88C8561566  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession_<Install>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.ARFoundation.ARSession_<Install>d__18::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus> UnityEngine.XR.ARFoundation.ARSession_<Install>d__18::<installPromise>5__2
	Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * ___U3CinstallPromiseU3E5__2_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInstallU3Ed__18_t57C93156E2C9C00B61AC295C86B51B88C8561566, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CInstallU3Ed__18_t57C93156E2C9C00B61AC295C86B51B88C8561566, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CinstallPromiseU3E5__2_2() { return static_cast<int32_t>(offsetof(U3CInstallU3Ed__18_t57C93156E2C9C00B61AC295C86B51B88C8561566, ___U3CinstallPromiseU3E5__2_2)); }
	inline Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * get_U3CinstallPromiseU3E5__2_2() const { return ___U3CinstallPromiseU3E5__2_2; }
	inline Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 ** get_address_of_U3CinstallPromiseU3E5__2_2() { return &___U3CinstallPromiseU3E5__2_2; }
	inline void set_U3CinstallPromiseU3E5__2_2(Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * value)
	{
		___U3CinstallPromiseU3E5__2_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CinstallPromiseU3E5__2_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CINSTALLU3ED__18_T57C93156E2C9C00B61AC295C86B51B88C8561566_H
#ifndef YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#define YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
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
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#define COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
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
#endif // COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifndef SUBSYSTEMDESCRIPTOR_1_T999BC3F05F1F174685ED49ECA369CC8E2B203F2E_H
#define SUBSYSTEMDESCRIPTOR_1_T999BC3F05F1F174685ED49ECA369CC8E2B203F2E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct  SubsystemDescriptor_1_t999BC3F05F1F174685ED49ECA369CC8E2B203F2E  : public SubsystemDescriptor_t39CE9D1BAAE27EC6FC62A49C82C06B1119F7EEC4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEMDESCRIPTOR_1_T999BC3F05F1F174685ED49ECA369CC8E2B203F2E_H
#ifndef SUBSYSTEM_1_T30A0E0214407A620CECF452A54D6676F5A6574B9_H
#define SUBSYSTEM_1_T30A0E0214407A620CECF452A54D6676F5A6574B9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Subsystem`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct  Subsystem_1_t30A0E0214407A620CECF452A54D6676F5A6574B9  : public Subsystem_t9D40133A9FEB984E2C3695B077DA4DDFC91CA181
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEM_1_T30A0E0214407A620CECF452A54D6676F5A6574B9_H
#ifndef QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#define QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifndef VECTOR2INT_T339DA203C037FA6BCFC926C36DC2194D52D5F905_H
#define VECTOR2INT_T339DA203C037FA6BCFC926C36DC2194D52D5F905_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2Int
struct  Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_One_3)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Up_4)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Down_5)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Left_6)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Right_7)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Right_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2INT_T339DA203C037FA6BCFC926C36DC2194D52D5F905_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef TRACKABLEID_TA7E19AFE62176E25E3759548887E9068E1E4AE47_H
#define TRACKABLEID_TA7E19AFE62176E25E3759548887E9068E1E4AE47_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.TrackableId
struct  TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields, ___s_InvalidId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___s_InvalidId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEID_TA7E19AFE62176E25E3759548887E9068E1E4AE47_H
#ifndef ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#define ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
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
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#define INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#ifndef INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#define INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#ifndef NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#define NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifndef COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#define COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
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
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef POSE_T2997DE3CB3863E4D78FCF42B46FC481818823F29_H
#define POSE_T2997DE3CB3863E4D78FCF42B46FC481818823F29_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Pose
struct  Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___rotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields, ___k_Identity_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___k_Identity_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSE_T2997DE3CB3863E4D78FCF42B46FC481818823F29_H
#ifndef RAY_TE2163D4CB3E6B267E29F8ABE41684490E4A614B2_H
#define RAY_TE2163D4CB3E6B267E29F8ABE41684490E4A614B2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Origin_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Direction_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_TE2163D4CB3E6B267E29F8ABE41684490E4A614B2_H
#ifndef RAYCASTHIT_T19695F18F9265FE5425062BBA6A4D330480538C3_H
#define RAYCASTHIT_T19695F18F9265FE5425062BBA6A4D330480538C3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Point_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Normal_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_UV_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYCASTHIT_T19695F18F9265FE5425062BBA6A4D330480538C3_H
#ifndef SCREENORIENTATION_T4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51_H
#define SCREENORIENTATION_T4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScreenOrientation
struct  ScreenOrientation_t4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51 
{
public:
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScreenOrientation_t4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENORIENTATION_T4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51_H
#ifndef DEVICETYPE_TC20CDCE75CB9BCB7EEF098A83B16071A0C86D198_H
#define DEVICETYPE_TC20CDCE75CB9BCB7EEF098A83B16071A0C86D198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpatialTracking.TrackedPoseDriver_DeviceType
struct  DeviceType_tC20CDCE75CB9BCB7EEF098A83B16071A0C86D198 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver_DeviceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceType_tC20CDCE75CB9BCB7EEF098A83B16071A0C86D198, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICETYPE_TC20CDCE75CB9BCB7EEF098A83B16071A0C86D198_H
#ifndef TRACKEDPOSE_TBECB0ED5440415EE75C061C0588F16CF0D8E5DFA_H
#define TRACKEDPOSE_TBECB0ED5440415EE75C061C0588F16CF0D8E5DFA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpatialTracking.TrackedPoseDriver_TrackedPose
struct  TrackedPose_tBECB0ED5440415EE75C061C0588F16CF0D8E5DFA 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver_TrackedPose::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedPose_tBECB0ED5440415EE75C061C0588F16CF0D8E5DFA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKEDPOSE_TBECB0ED5440415EE75C061C0588F16CF0D8E5DFA_H
#ifndef TRACKINGTYPE_T54A99FD46DD997F9BDD94EB51082AEA72640B28A_H
#define TRACKINGTYPE_T54A99FD46DD997F9BDD94EB51082AEA72640B28A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpatialTracking.TrackedPoseDriver_TrackingType
struct  TrackingType_t54A99FD46DD997F9BDD94EB51082AEA72640B28A 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver_TrackingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingType_t54A99FD46DD997F9BDD94EB51082AEA72640B28A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKINGTYPE_T54A99FD46DD997F9BDD94EB51082AEA72640B28A_H
#ifndef UPDATETYPE_T2E40BE3577C3CE3CB868167C75BA759A2B76BB10_H
#define UPDATETYPE_T2E40BE3577C3CE3CB868167C75BA759A2B76BB10_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpatialTracking.TrackedPoseDriver_UpdateType
struct  UpdateType_t2E40BE3577C3CE3CB868167C75BA759A2B76BB10 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver_UpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateType_t2E40BE3577C3CE3CB868167C75BA759A2B76BB10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATETYPE_T2E40BE3577C3CE3CB868167C75BA759A2B76BB10_H
#ifndef TOUCHPHASE_TD902305F0B673116C42548A58E8BEED50177A33D_H
#define TOUCHPHASE_TD902305F0B673116C42548A58E8BEED50177A33D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchPhase
struct  TouchPhase_tD902305F0B673116C42548A58E8BEED50177A33D 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tD902305F0B673116C42548A58E8BEED50177A33D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHPHASE_TD902305F0B673116C42548A58E8BEED50177A33D_H
#ifndef TOUCHTYPE_T27DBEAB2242247A15EDE96D740F7EB73ACC938DB_H
#define TOUCHTYPE_T27DBEAB2242247A15EDE96D740F7EB73ACC938DB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchType
struct  TouchType_t27DBEAB2242247A15EDE96D740F7EB73ACC938DB 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t27DBEAB2242247A15EDE96D740F7EB73ACC938DB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHTYPE_T27DBEAB2242247A15EDE96D740F7EB73ACC938DB_H
#ifndef ARSESSIONSTATE_T2368AD70809571FD82D99E976A2083F7BAB15419_H
#define ARSESSIONSTATE_T2368AD70809571FD82D99E976A2083F7BAB15419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARFoundation.ARSessionState
struct  ARSessionState_t2368AD70809571FD82D99E976A2083F7BAB15419 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.ARSessionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARSessionState_t2368AD70809571FD82D99E976A2083F7BAB15419, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARSESSIONSTATE_T2368AD70809571FD82D99E976A2083F7BAB15419_H
#ifndef PLANEDETECTIONMODE_TB8D6919E8ADF45E17C3E196B1561BAE5DFE44C2F_H
#define PLANEDETECTIONMODE_TB8D6919E8ADF45E17C3E196B1561BAE5DFE44C2F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.PlaneDetectionMode
struct  PlaneDetectionMode_tB8D6919E8ADF45E17C3E196B1561BAE5DFE44C2F 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneDetectionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneDetectionMode_tB8D6919E8ADF45E17C3E196B1561BAE5DFE44C2F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANEDETECTIONMODE_TB8D6919E8ADF45E17C3E196B1561BAE5DFE44C2F_H
#ifndef SESSIONAVAILABILITY_T5D8A6E743297DB42DFE5004CB3F6EF1A0EEAB5B9_H
#define SESSIONAVAILABILITY_T5D8A6E743297DB42DFE5004CB3F6EF1A0EEAB5B9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.SessionAvailability
struct  SessionAvailability_t5D8A6E743297DB42DFE5004CB3F6EF1A0EEAB5B9 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionAvailability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionAvailability_t5D8A6E743297DB42DFE5004CB3F6EF1A0EEAB5B9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SESSIONAVAILABILITY_T5D8A6E743297DB42DFE5004CB3F6EF1A0EEAB5B9_H
#ifndef SESSIONINSTALLATIONSTATUS_T4030D915111F62D249BC71DE05C3BB4C856AADDF_H
#define SESSIONINSTALLATIONSTATUS_T4030D915111F62D249BC71DE05C3BB4C856AADDF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.SessionInstallationStatus
struct  SessionInstallationStatus_t4030D915111F62D249BC71DE05C3BB4C856AADDF 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionInstallationStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionInstallationStatus_t4030D915111F62D249BC71DE05C3BB4C856AADDF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SESSIONINSTALLATIONSTATUS_T4030D915111F62D249BC71DE05C3BB4C856AADDF_H
#ifndef TRACKABLETYPE_T078FFF635AE2E4FC51E7D7DB8AB1CB884D30EA1F_H
#define TRACKABLETYPE_T078FFF635AE2E4FC51E7D7DB8AB1CB884D30EA1F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.TrackableType
struct  TrackableType_t078FFF635AE2E4FC51E7D7DB8AB1CB884D30EA1F 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackableType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackableType_t078FFF635AE2E4FC51E7D7DB8AB1CB884D30EA1F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLETYPE_T078FFF635AE2E4FC51E7D7DB8AB1CB884D30EA1F_H
#ifndef TRACKINGSTATE_T124D9E603E4E0453A85409CF7762EE8C946233F6_H
#define TRACKINGSTATE_T124D9E603E4E0453A85409CF7762EE8C946233F6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.TrackingState
struct  TrackingState_t124D9E603E4E0453A85409CF7762EE8C946233F6 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_t124D9E603E4E0453A85409CF7762EE8C946233F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKINGSTATE_T124D9E603E4E0453A85409CF7762EE8C946233F6_H
#ifndef XRSESSIONSUBSYSTEM_T9B9C16B4BDB611559FB6FA728BE399001E47EFF0_H
#define XRSESSIONSUBSYSTEM_T9B9C16B4BDB611559FB6FA728BE399001E47EFF0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct  XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0  : public Subsystem_1_t30A0E0214407A620CECF452A54D6676F5A6574B9
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_Running
	bool ___m_Running_1;
	// UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_Provider
	IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * ___m_Provider_2;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}

	inline static int32_t get_offset_of_m_Provider_2() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0, ___m_Provider_2)); }
	inline IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * get_m_Provider_2() const { return ___m_Provider_2; }
	inline IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 ** get_address_of_m_Provider_2() { return &___m_Provider_2; }
	inline void set_m_Provider_2(IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * value)
	{
		___m_Provider_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Provider_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRSESSIONSUBSYSTEM_T9B9C16B4BDB611559FB6FA728BE399001E47EFF0_H
#ifndef XRSESSIONSUBSYSTEMDESCRIPTOR_TAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079_H
#define XRSESSIONSUBSYSTEMDESCRIPTOR_TAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct  XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079  : public SubsystemDescriptor_1_t999BC3F05F1F174685ED49ECA369CC8E2B203F2E
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::<supportsInstall>k__BackingField
	bool ___U3CsupportsInstallU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::<supportsMatchFrameRate>k__BackingField
	bool ___U3CsupportsMatchFrameRateU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsupportsInstallU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079, ___U3CsupportsInstallU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsInstallU3Ek__BackingField_2() const { return ___U3CsupportsInstallU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsInstallU3Ek__BackingField_2() { return &___U3CsupportsInstallU3Ek__BackingField_2; }
	inline void set_U3CsupportsInstallU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsInstallU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsMatchFrameRateU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079, ___U3CsupportsMatchFrameRateU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsMatchFrameRateU3Ek__BackingField_3() const { return ___U3CsupportsMatchFrameRateU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsMatchFrameRateU3Ek__BackingField_3() { return &___U3CsupportsMatchFrameRateU3Ek__BackingField_3; }
	inline void set_U3CsupportsMatchFrameRateU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsMatchFrameRateU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRSESSIONSUBSYSTEMDESCRIPTOR_TAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079_H
#ifndef ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#define ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#define GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifndef TOUCH_T806752C775BA713A91B6588A07CA98417CABC003_H
#define TOUCH_T806752C775BA713A91B6588A07CA98417CABC003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Touch
struct  Touch_t806752C775BA713A91B6588A07CA98417CABC003 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_Position_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_RawPosition_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_PositionDelta_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_t806752C775BA713A91B6588A07CA98417CABC003, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCH_T806752C775BA713A91B6588A07CA98417CABC003_H
#ifndef ARSESSIONSTATECHANGEDEVENTARGS_TAB726C94F3164280811C27B77D92B0189C302082_H
#define ARSESSIONSTATECHANGEDEVENTARGS_TAB726C94F3164280811C27B77D92B0189C302082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs
struct  ARSessionStateChangedEventArgs_tAB726C94F3164280811C27B77D92B0189C302082 
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs::<state>k__BackingField
	int32_t ___U3CstateU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CstateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARSessionStateChangedEventArgs_tAB726C94F3164280811C27B77D92B0189C302082, ___U3CstateU3Ek__BackingField_0)); }
	inline int32_t get_U3CstateU3Ek__BackingField_0() const { return ___U3CstateU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CstateU3Ek__BackingField_0() { return &___U3CstateU3Ek__BackingField_0; }
	inline void set_U3CstateU3Ek__BackingField_0(int32_t value)
	{
		___U3CstateU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARSESSIONSTATECHANGEDEVENTARGS_TAB726C94F3164280811C27B77D92B0189C302082_H
#ifndef PROMISE_1_T7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B_H
#define PROMISE_1_T7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct  Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROMISE_1_T7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B_H
#ifndef PROMISE_1_TE8B65103AAD59FA1265B1977CE59DC6DA5220626_H
#define PROMISE_1_TE8B65103AAD59FA1265B1977CE59DC6DA5220626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>
struct  Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROMISE_1_TE8B65103AAD59FA1265B1977CE59DC6DA5220626_H
#ifndef XRRAYCASTHIT_T2DE122E601B75E2070D4A542A13E2486DEE60E82_H
#define XRRAYCASTHIT_T2DE122E601B75E2070D4A542A13E2486DEE60E82_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct  XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_1;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_2;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_3;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82, ___m_TrackableId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82, ___m_Pose_1)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_Distance_2() { return static_cast<int32_t>(offsetof(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82, ___m_Distance_2)); }
	inline float get_m_Distance_2() const { return ___m_Distance_2; }
	inline float* get_address_of_m_Distance_2() { return &___m_Distance_2; }
	inline void set_m_Distance_2(float value)
	{
		___m_Distance_2 = value;
	}

	inline static int32_t get_offset_of_m_HitType_3() { return static_cast<int32_t>(offsetof(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82, ___m_HitType_3)); }
	inline int32_t get_m_HitType_3() const { return ___m_HitType_3; }
	inline int32_t* get_address_of_m_HitType_3() { return &___m_HitType_3; }
	inline void set_m_HitType_3(int32_t value)
	{
		___m_HitType_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRRAYCASTHIT_T2DE122E601B75E2070D4A542A13E2486DEE60E82_H
#ifndef XRSESSIONUPDATEPARAMS_TAA765EB179BD3BAB22FA143AF178D328B30EAD16_H
#define XRSESSIONUPDATEPARAMS_TAA765EB179BD3BAB22FA143AF178D328B30EAD16_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.XRSessionUpdateParams
struct  XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 
{
public:
	// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::<screenOrientation>k__BackingField
	int32_t ___U3CscreenOrientationU3Ek__BackingField_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::<screenDimensions>k__BackingField
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___U3CscreenDimensionsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CscreenOrientationU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16, ___U3CscreenOrientationU3Ek__BackingField_0)); }
	inline int32_t get_U3CscreenOrientationU3Ek__BackingField_0() const { return ___U3CscreenOrientationU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CscreenOrientationU3Ek__BackingField_0() { return &___U3CscreenOrientationU3Ek__BackingField_0; }
	inline void set_U3CscreenOrientationU3Ek__BackingField_0(int32_t value)
	{
		___U3CscreenOrientationU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CscreenDimensionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16, ___U3CscreenDimensionsU3Ek__BackingField_1)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_U3CscreenDimensionsU3Ek__BackingField_1() const { return ___U3CscreenDimensionsU3Ek__BackingField_1; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_U3CscreenDimensionsU3Ek__BackingField_1() { return &___U3CscreenDimensionsU3Ek__BackingField_1; }
	inline void set_U3CscreenDimensionsU3Ek__BackingField_1(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___U3CscreenDimensionsU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRSESSIONUPDATEPARAMS_TAA765EB179BD3BAB22FA143AF178D328B30EAD16_H
#ifndef ACTION_1_T675D80EB5B146D48758125B0CB33D213FDAB08CD_H
#define ACTION_1_T675D80EB5B146D48758125B0CB33D213FDAB08CD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>
struct  Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T675D80EB5B146D48758125B0CB33D213FDAB08CD_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef ARRAYCASTHIT_T509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC_H
#define ARRAYCASTHIT_T509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARFoundation.ARRaycastHit
struct  ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC 
{
public:
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  ___m_Hit_1;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_Transform_2;

public:
	inline static int32_t get_offset_of_U3CdistanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC, ___U3CdistanceU3Ek__BackingField_0)); }
	inline float get_U3CdistanceU3Ek__BackingField_0() const { return ___U3CdistanceU3Ek__BackingField_0; }
	inline float* get_address_of_U3CdistanceU3Ek__BackingField_0() { return &___U3CdistanceU3Ek__BackingField_0; }
	inline void set_U3CdistanceU3Ek__BackingField_0(float value)
	{
		___U3CdistanceU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Hit_1() { return static_cast<int32_t>(offsetof(ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC, ___m_Hit_1)); }
	inline XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  get_m_Hit_1() const { return ___m_Hit_1; }
	inline XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * get_address_of_m_Hit_1() { return &___m_Hit_1; }
	inline void set_m_Hit_1(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  value)
	{
		___m_Hit_1 = value;
	}

	inline static int32_t get_offset_of_m_Transform_2() { return static_cast<int32_t>(offsetof(ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC, ___m_Transform_2)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_Transform_2() const { return ___m_Transform_2; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_Transform_2() { return &___m_Transform_2; }
	inline void set_m_Transform_2(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_Transform_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Transform_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  ___m_Hit_1;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_Transform_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  ___m_Hit_1;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_Transform_2;
};
#endif // ARRAYCASTHIT_T509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC_H
#ifndef CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#define CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef ARBUTTON1_T09208D2FE593BBF36E5648836272C02E4E61F48D_H
#define ARBUTTON1_T09208D2FE593BBF36E5648836272C02E4E61F48D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ARButton1
struct  ARButton1_t09208D2FE593BBF36E5648836272C02E4E61F48D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single ARButton1::debounceTime
	float ___debounceTime_4;
	// System.Single ARButton1::remainingDebounceTime
	float ___remainingDebounceTime_5;

public:
	inline static int32_t get_offset_of_debounceTime_4() { return static_cast<int32_t>(offsetof(ARButton1_t09208D2FE593BBF36E5648836272C02E4E61F48D, ___debounceTime_4)); }
	inline float get_debounceTime_4() const { return ___debounceTime_4; }
	inline float* get_address_of_debounceTime_4() { return &___debounceTime_4; }
	inline void set_debounceTime_4(float value)
	{
		___debounceTime_4 = value;
	}

	inline static int32_t get_offset_of_remainingDebounceTime_5() { return static_cast<int32_t>(offsetof(ARButton1_t09208D2FE593BBF36E5648836272C02E4E61F48D, ___remainingDebounceTime_5)); }
	inline float get_remainingDebounceTime_5() const { return ___remainingDebounceTime_5; }
	inline float* get_address_of_remainingDebounceTime_5() { return &___remainingDebounceTime_5; }
	inline void set_remainingDebounceTime_5(float value)
	{
		___remainingDebounceTime_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARBUTTON1_T09208D2FE593BBF36E5648836272C02E4E61F48D_H
#ifndef ARBUTTON2_TE314BFE8581C8F25E1BE86557D47AC3E600374E6_H
#define ARBUTTON2_TE314BFE8581C8F25E1BE86557D47AC3E600374E6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ARButton2
struct  ARButton2_tE314BFE8581C8F25E1BE86557D47AC3E600374E6  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Text ARButton2::messageText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___messageText_4;

public:
	inline static int32_t get_offset_of_messageText_4() { return static_cast<int32_t>(offsetof(ARButton2_tE314BFE8581C8F25E1BE86557D47AC3E600374E6, ___messageText_4)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_messageText_4() const { return ___messageText_4; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_messageText_4() { return &___messageText_4; }
	inline void set_messageText_4(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___messageText_4 = value;
		Il2CppCodeGenWriteBarrier((&___messageText_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARBUTTON2_TE314BFE8581C8F25E1BE86557D47AC3E600374E6_H
#ifndef ARBUTTONMANAGER_T7EB96079B3DCC57D6B61DC5C01094FA30CCDD5A8_H
#define ARBUTTONMANAGER_T7EB96079B3DCC57D6B61DC5C01094FA30CCDD5A8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ARButtonManager
struct  ARButtonManager_t7EB96079B3DCC57D6B61DC5C01094FA30CCDD5A8  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Camera ARButtonManager::arCamera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___arCamera_4;
	// PlaceGameBoard ARButtonManager::placeGameBoard
	PlaceGameBoard_t8091E3D27BDFE9409A418B1DFE0E2D26E187F90A * ___placeGameBoard_5;

public:
	inline static int32_t get_offset_of_arCamera_4() { return static_cast<int32_t>(offsetof(ARButtonManager_t7EB96079B3DCC57D6B61DC5C01094FA30CCDD5A8, ___arCamera_4)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_arCamera_4() const { return ___arCamera_4; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_arCamera_4() { return &___arCamera_4; }
	inline void set_arCamera_4(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___arCamera_4 = value;
		Il2CppCodeGenWriteBarrier((&___arCamera_4), value);
	}

	inline static int32_t get_offset_of_placeGameBoard_5() { return static_cast<int32_t>(offsetof(ARButtonManager_t7EB96079B3DCC57D6B61DC5C01094FA30CCDD5A8, ___placeGameBoard_5)); }
	inline PlaceGameBoard_t8091E3D27BDFE9409A418B1DFE0E2D26E187F90A * get_placeGameBoard_5() const { return ___placeGameBoard_5; }
	inline PlaceGameBoard_t8091E3D27BDFE9409A418B1DFE0E2D26E187F90A ** get_address_of_placeGameBoard_5() { return &___placeGameBoard_5; }
	inline void set_placeGameBoard_5(PlaceGameBoard_t8091E3D27BDFE9409A418B1DFE0E2D26E187F90A * value)
	{
		___placeGameBoard_5 = value;
		Il2CppCodeGenWriteBarrier((&___placeGameBoard_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARBUTTONMANAGER_T7EB96079B3DCC57D6B61DC5C01094FA30CCDD5A8_H
#ifndef BALLCONTROLLER_T619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB_H
#define BALLCONTROLLER_T619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BallController
struct  BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Text BallController::scoreText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___scoreText_4;
	// UnityEngine.UI.Text BallController::messageText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___messageText_5;
	// UnityEngine.GameObject BallController::startButton
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___startButton_6;
	// System.Single BallController::popDistance
	float ___popDistance_7;
	// System.Collections.Generic.List`1<UnityEngine.Transform> BallController::balls
	List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * ___balls_8;
	// System.Collections.Generic.List`1<System.Boolean> BallController::popped
	List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * ___popped_9;
	// System.Single BallController::loopCount
	float ___loopCount_10;
	// System.Single BallController::popCount
	float ___popCount_11;
	// System.Single BallController::popDuration
	float ___popDuration_12;
	// System.Single BallController::loopTime
	float ___loopTime_13;
	// System.Int32 BallController::popIndex
	int32_t ___popIndex_14;
	// System.Int32 BallController::score
	int32_t ___score_15;
	// System.Int32 BallController::remainLife
	int32_t ___remainLife_16;

public:
	inline static int32_t get_offset_of_scoreText_4() { return static_cast<int32_t>(offsetof(BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB, ___scoreText_4)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_scoreText_4() const { return ___scoreText_4; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_scoreText_4() { return &___scoreText_4; }
	inline void set_scoreText_4(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___scoreText_4 = value;
		Il2CppCodeGenWriteBarrier((&___scoreText_4), value);
	}

	inline static int32_t get_offset_of_messageText_5() { return static_cast<int32_t>(offsetof(BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB, ___messageText_5)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_messageText_5() const { return ___messageText_5; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_messageText_5() { return &___messageText_5; }
	inline void set_messageText_5(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___messageText_5 = value;
		Il2CppCodeGenWriteBarrier((&___messageText_5), value);
	}

	inline static int32_t get_offset_of_startButton_6() { return static_cast<int32_t>(offsetof(BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB, ___startButton_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_startButton_6() const { return ___startButton_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_startButton_6() { return &___startButton_6; }
	inline void set_startButton_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___startButton_6 = value;
		Il2CppCodeGenWriteBarrier((&___startButton_6), value);
	}

	inline static int32_t get_offset_of_popDistance_7() { return static_cast<int32_t>(offsetof(BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB, ___popDistance_7)); }
	inline float get_popDistance_7() const { return ___popDistance_7; }
	inline float* get_address_of_popDistance_7() { return &___popDistance_7; }
	inline void set_popDistance_7(float value)
	{
		___popDistance_7 = value;
	}

	inline static int32_t get_offset_of_balls_8() { return static_cast<int32_t>(offsetof(BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB, ___balls_8)); }
	inline List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * get_balls_8() const { return ___balls_8; }
	inline List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D ** get_address_of_balls_8() { return &___balls_8; }
	inline void set_balls_8(List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * value)
	{
		___balls_8 = value;
		Il2CppCodeGenWriteBarrier((&___balls_8), value);
	}

	inline static int32_t get_offset_of_popped_9() { return static_cast<int32_t>(offsetof(BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB, ___popped_9)); }
	inline List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * get_popped_9() const { return ___popped_9; }
	inline List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE ** get_address_of_popped_9() { return &___popped_9; }
	inline void set_popped_9(List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * value)
	{
		___popped_9 = value;
		Il2CppCodeGenWriteBarrier((&___popped_9), value);
	}

	inline static int32_t get_offset_of_loopCount_10() { return static_cast<int32_t>(offsetof(BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB, ___loopCount_10)); }
	inline float get_loopCount_10() const { return ___loopCount_10; }
	inline float* get_address_of_loopCount_10() { return &___loopCount_10; }
	inline void set_loopCount_10(float value)
	{
		___loopCount_10 = value;
	}

	inline static int32_t get_offset_of_popCount_11() { return static_cast<int32_t>(offsetof(BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB, ___popCount_11)); }
	inline float get_popCount_11() const { return ___popCount_11; }
	inline float* get_address_of_popCount_11() { return &___popCount_11; }
	inline void set_popCount_11(float value)
	{
		___popCount_11 = value;
	}

	inline static int32_t get_offset_of_popDuration_12() { return static_cast<int32_t>(offsetof(BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB, ___popDuration_12)); }
	inline float get_popDuration_12() const { return ___popDuration_12; }
	inline float* get_address_of_popDuration_12() { return &___popDuration_12; }
	inline void set_popDuration_12(float value)
	{
		___popDuration_12 = value;
	}

	inline static int32_t get_offset_of_loopTime_13() { return static_cast<int32_t>(offsetof(BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB, ___loopTime_13)); }
	inline float get_loopTime_13() const { return ___loopTime_13; }
	inline float* get_address_of_loopTime_13() { return &___loopTime_13; }
	inline void set_loopTime_13(float value)
	{
		___loopTime_13 = value;
	}

	inline static int32_t get_offset_of_popIndex_14() { return static_cast<int32_t>(offsetof(BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB, ___popIndex_14)); }
	inline int32_t get_popIndex_14() const { return ___popIndex_14; }
	inline int32_t* get_address_of_popIndex_14() { return &___popIndex_14; }
	inline void set_popIndex_14(int32_t value)
	{
		___popIndex_14 = value;
	}

	inline static int32_t get_offset_of_score_15() { return static_cast<int32_t>(offsetof(BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB, ___score_15)); }
	inline int32_t get_score_15() const { return ___score_15; }
	inline int32_t* get_address_of_score_15() { return &___score_15; }
	inline void set_score_15(int32_t value)
	{
		___score_15 = value;
	}

	inline static int32_t get_offset_of_remainLife_16() { return static_cast<int32_t>(offsetof(BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB, ___remainLife_16)); }
	inline int32_t get_remainLife_16() const { return ___remainLife_16; }
	inline int32_t* get_address_of_remainLife_16() { return &___remainLife_16; }
	inline void set_remainLife_16(int32_t value)
	{
		___remainLife_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BALLCONTROLLER_T619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB_H
#ifndef BALLMOVER_T696C670720FE1CD8219B87A8278193B52C1E9413_H
#define BALLMOVER_T696C670720FE1CD8219B87A8278193B52C1E9413_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BallMover
struct  BallMover_t696C670720FE1CD8219B87A8278193B52C1E9413  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single BallMover::delayTime
	float ___delayTime_4;
	// System.Single BallMover::downDistance
	float ___downDistance_5;
	// System.Boolean BallMover::hidden
	bool ___hidden_6;
	// System.Single BallMover::remainHiddenTime
	float ___remainHiddenTime_7;
	// UnityEngine.GameObject BallMover::father
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___father_8;
	// BallController BallMover::fathersWond
	BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB * ___fathersWond_9;

public:
	inline static int32_t get_offset_of_delayTime_4() { return static_cast<int32_t>(offsetof(BallMover_t696C670720FE1CD8219B87A8278193B52C1E9413, ___delayTime_4)); }
	inline float get_delayTime_4() const { return ___delayTime_4; }
	inline float* get_address_of_delayTime_4() { return &___delayTime_4; }
	inline void set_delayTime_4(float value)
	{
		___delayTime_4 = value;
	}

	inline static int32_t get_offset_of_downDistance_5() { return static_cast<int32_t>(offsetof(BallMover_t696C670720FE1CD8219B87A8278193B52C1E9413, ___downDistance_5)); }
	inline float get_downDistance_5() const { return ___downDistance_5; }
	inline float* get_address_of_downDistance_5() { return &___downDistance_5; }
	inline void set_downDistance_5(float value)
	{
		___downDistance_5 = value;
	}

	inline static int32_t get_offset_of_hidden_6() { return static_cast<int32_t>(offsetof(BallMover_t696C670720FE1CD8219B87A8278193B52C1E9413, ___hidden_6)); }
	inline bool get_hidden_6() const { return ___hidden_6; }
	inline bool* get_address_of_hidden_6() { return &___hidden_6; }
	inline void set_hidden_6(bool value)
	{
		___hidden_6 = value;
	}

	inline static int32_t get_offset_of_remainHiddenTime_7() { return static_cast<int32_t>(offsetof(BallMover_t696C670720FE1CD8219B87A8278193B52C1E9413, ___remainHiddenTime_7)); }
	inline float get_remainHiddenTime_7() const { return ___remainHiddenTime_7; }
	inline float* get_address_of_remainHiddenTime_7() { return &___remainHiddenTime_7; }
	inline void set_remainHiddenTime_7(float value)
	{
		___remainHiddenTime_7 = value;
	}

	inline static int32_t get_offset_of_father_8() { return static_cast<int32_t>(offsetof(BallMover_t696C670720FE1CD8219B87A8278193B52C1E9413, ___father_8)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_father_8() const { return ___father_8; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_father_8() { return &___father_8; }
	inline void set_father_8(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___father_8 = value;
		Il2CppCodeGenWriteBarrier((&___father_8), value);
	}

	inline static int32_t get_offset_of_fathersWond_9() { return static_cast<int32_t>(offsetof(BallMover_t696C670720FE1CD8219B87A8278193B52C1E9413, ___fathersWond_9)); }
	inline BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB * get_fathersWond_9() const { return ___fathersWond_9; }
	inline BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB ** get_address_of_fathersWond_9() { return &___fathersWond_9; }
	inline void set_fathersWond_9(BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB * value)
	{
		___fathersWond_9 = value;
		Il2CppCodeGenWriteBarrier((&___fathersWond_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BALLMOVER_T696C670720FE1CD8219B87A8278193B52C1E9413_H
#ifndef DISAPPEARINGTEXT_T81FE874B6F64EE4B044980D452139CBC79CB1B15_H
#define DISAPPEARINGTEXT_T81FE874B6F64EE4B044980D452139CBC79CB1B15_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DisappearingText
struct  DisappearingText_t81FE874B6F64EE4B044980D452139CBC79CB1B15  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single DisappearingText::displayTime
	float ___displayTime_4;
	// System.Single DisappearingText::timeRemaining
	float ___timeRemaining_5;

public:
	inline static int32_t get_offset_of_displayTime_4() { return static_cast<int32_t>(offsetof(DisappearingText_t81FE874B6F64EE4B044980D452139CBC79CB1B15, ___displayTime_4)); }
	inline float get_displayTime_4() const { return ___displayTime_4; }
	inline float* get_address_of_displayTime_4() { return &___displayTime_4; }
	inline void set_displayTime_4(float value)
	{
		___displayTime_4 = value;
	}

	inline static int32_t get_offset_of_timeRemaining_5() { return static_cast<int32_t>(offsetof(DisappearingText_t81FE874B6F64EE4B044980D452139CBC79CB1B15, ___timeRemaining_5)); }
	inline float get_timeRemaining_5() const { return ___timeRemaining_5; }
	inline float* get_address_of_timeRemaining_5() { return &___timeRemaining_5; }
	inline void set_timeRemaining_5(float value)
	{
		___timeRemaining_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISAPPEARINGTEXT_T81FE874B6F64EE4B044980D452139CBC79CB1B15_H
#ifndef PLACEGAMEBOARD_T8091E3D27BDFE9409A418B1DFE0E2D26E187F90A_H
#define PLACEGAMEBOARD_T8091E3D27BDFE9409A418B1DFE0E2D26E187F90A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlaceGameBoard
struct  PlaceGameBoard_t8091E3D27BDFE9409A418B1DFE0E2D26E187F90A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject PlaceGameBoard::gameBoard
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameBoard_4;
	// UnityEngine.XR.ARFoundation.ARRaycastManager PlaceGameBoard::raycastManager
	ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7 * ___raycastManager_5;
	// UnityEngine.XR.ARFoundation.ARPlaneManager PlaceGameBoard::planeManager
	ARPlaneManager_tC2613B8C888EBC3F92BF68E60F0A3E4DCCFAD69A * ___planeManager_6;
	// System.Boolean PlaceGameBoard::placed
	bool ___placed_7;

public:
	inline static int32_t get_offset_of_gameBoard_4() { return static_cast<int32_t>(offsetof(PlaceGameBoard_t8091E3D27BDFE9409A418B1DFE0E2D26E187F90A, ___gameBoard_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_gameBoard_4() const { return ___gameBoard_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_gameBoard_4() { return &___gameBoard_4; }
	inline void set_gameBoard_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___gameBoard_4 = value;
		Il2CppCodeGenWriteBarrier((&___gameBoard_4), value);
	}

	inline static int32_t get_offset_of_raycastManager_5() { return static_cast<int32_t>(offsetof(PlaceGameBoard_t8091E3D27BDFE9409A418B1DFE0E2D26E187F90A, ___raycastManager_5)); }
	inline ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7 * get_raycastManager_5() const { return ___raycastManager_5; }
	inline ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7 ** get_address_of_raycastManager_5() { return &___raycastManager_5; }
	inline void set_raycastManager_5(ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7 * value)
	{
		___raycastManager_5 = value;
		Il2CppCodeGenWriteBarrier((&___raycastManager_5), value);
	}

	inline static int32_t get_offset_of_planeManager_6() { return static_cast<int32_t>(offsetof(PlaceGameBoard_t8091E3D27BDFE9409A418B1DFE0E2D26E187F90A, ___planeManager_6)); }
	inline ARPlaneManager_tC2613B8C888EBC3F92BF68E60F0A3E4DCCFAD69A * get_planeManager_6() const { return ___planeManager_6; }
	inline ARPlaneManager_tC2613B8C888EBC3F92BF68E60F0A3E4DCCFAD69A ** get_address_of_planeManager_6() { return &___planeManager_6; }
	inline void set_planeManager_6(ARPlaneManager_tC2613B8C888EBC3F92BF68E60F0A3E4DCCFAD69A * value)
	{
		___planeManager_6 = value;
		Il2CppCodeGenWriteBarrier((&___planeManager_6), value);
	}

	inline static int32_t get_offset_of_placed_7() { return static_cast<int32_t>(offsetof(PlaceGameBoard_t8091E3D27BDFE9409A418B1DFE0E2D26E187F90A, ___placed_7)); }
	inline bool get_placed_7() const { return ___placed_7; }
	inline bool* get_address_of_placed_7() { return &___placed_7; }
	inline void set_placed_7(bool value)
	{
		___placed_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLACEGAMEBOARD_T8091E3D27BDFE9409A418B1DFE0E2D26E187F90A_H
#ifndef ROTATOR_T8E318BD1376632CD4EE2113010F16B4BC26E15A8_H
#define ROTATOR_T8E318BD1376632CD4EE2113010F16B4BC26E15A8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Rotator
struct  Rotator_t8E318BD1376632CD4EE2113010F16B4BC26E15A8  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROTATOR_T8E318BD1376632CD4EE2113010F16B4BC26E15A8_H
#ifndef STARTBUTTON_T90FFC983737848D23F33776967997408511D1352_H
#define STARTBUTTON_T90FFC983737848D23F33776967997408511D1352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StartButton
struct  StartButton_t90FFC983737848D23F33776967997408511D1352  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject StartButton::objectToStart
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___objectToStart_4;
	// System.Single StartButton::debounceTime
	float ___debounceTime_5;
	// System.Single StartButton::popDuration
	float ___popDuration_6;
	// System.Single StartButton::loopTime
	float ___loopTime_7;
	// System.Single StartButton::remainingDebounceTime
	float ___remainingDebounceTime_8;

public:
	inline static int32_t get_offset_of_objectToStart_4() { return static_cast<int32_t>(offsetof(StartButton_t90FFC983737848D23F33776967997408511D1352, ___objectToStart_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_objectToStart_4() const { return ___objectToStart_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_objectToStart_4() { return &___objectToStart_4; }
	inline void set_objectToStart_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___objectToStart_4 = value;
		Il2CppCodeGenWriteBarrier((&___objectToStart_4), value);
	}

	inline static int32_t get_offset_of_debounceTime_5() { return static_cast<int32_t>(offsetof(StartButton_t90FFC983737848D23F33776967997408511D1352, ___debounceTime_5)); }
	inline float get_debounceTime_5() const { return ___debounceTime_5; }
	inline float* get_address_of_debounceTime_5() { return &___debounceTime_5; }
	inline void set_debounceTime_5(float value)
	{
		___debounceTime_5 = value;
	}

	inline static int32_t get_offset_of_popDuration_6() { return static_cast<int32_t>(offsetof(StartButton_t90FFC983737848D23F33776967997408511D1352, ___popDuration_6)); }
	inline float get_popDuration_6() const { return ___popDuration_6; }
	inline float* get_address_of_popDuration_6() { return &___popDuration_6; }
	inline void set_popDuration_6(float value)
	{
		___popDuration_6 = value;
	}

	inline static int32_t get_offset_of_loopTime_7() { return static_cast<int32_t>(offsetof(StartButton_t90FFC983737848D23F33776967997408511D1352, ___loopTime_7)); }
	inline float get_loopTime_7() const { return ___loopTime_7; }
	inline float* get_address_of_loopTime_7() { return &___loopTime_7; }
	inline void set_loopTime_7(float value)
	{
		___loopTime_7 = value;
	}

	inline static int32_t get_offset_of_remainingDebounceTime_8() { return static_cast<int32_t>(offsetof(StartButton_t90FFC983737848D23F33776967997408511D1352, ___remainingDebounceTime_8)); }
	inline float get_remainingDebounceTime_8() const { return ___remainingDebounceTime_8; }
	inline float* get_address_of_remainingDebounceTime_8() { return &___remainingDebounceTime_8; }
	inline void set_remainingDebounceTime_8(float value)
	{
		___remainingDebounceTime_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STARTBUTTON_T90FFC983737848D23F33776967997408511D1352_H
#ifndef UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#define UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#ifndef TRACKEDPOSEDRIVER_T7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A_H
#define TRACKEDPOSEDRIVER_T7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpatialTracking.TrackedPoseDriver
struct  TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.SpatialTracking.TrackedPoseDriver_DeviceType UnityEngine.SpatialTracking.TrackedPoseDriver::m_Device
	int32_t ___m_Device_4;
	// UnityEngine.SpatialTracking.TrackedPoseDriver_TrackedPose UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseSource
	int32_t ___m_PoseSource_5;
	// UnityEngine.Experimental.XR.Interaction.BasePoseProvider UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseProviderComponent
	BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * ___m_PoseProviderComponent_6;
	// UnityEngine.SpatialTracking.TrackedPoseDriver_TrackingType UnityEngine.SpatialTracking.TrackedPoseDriver::m_TrackingType
	int32_t ___m_TrackingType_7;
	// UnityEngine.SpatialTracking.TrackedPoseDriver_UpdateType UnityEngine.SpatialTracking.TrackedPoseDriver::m_UpdateType
	int32_t ___m_UpdateType_8;
	// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::m_UseRelativeTransform
	bool ___m_UseRelativeTransform_9;
	// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::m_OriginPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_OriginPose_10;

public:
	inline static int32_t get_offset_of_m_Device_4() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_Device_4)); }
	inline int32_t get_m_Device_4() const { return ___m_Device_4; }
	inline int32_t* get_address_of_m_Device_4() { return &___m_Device_4; }
	inline void set_m_Device_4(int32_t value)
	{
		___m_Device_4 = value;
	}

	inline static int32_t get_offset_of_m_PoseSource_5() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_PoseSource_5)); }
	inline int32_t get_m_PoseSource_5() const { return ___m_PoseSource_5; }
	inline int32_t* get_address_of_m_PoseSource_5() { return &___m_PoseSource_5; }
	inline void set_m_PoseSource_5(int32_t value)
	{
		___m_PoseSource_5 = value;
	}

	inline static int32_t get_offset_of_m_PoseProviderComponent_6() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_PoseProviderComponent_6)); }
	inline BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * get_m_PoseProviderComponent_6() const { return ___m_PoseProviderComponent_6; }
	inline BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B ** get_address_of_m_PoseProviderComponent_6() { return &___m_PoseProviderComponent_6; }
	inline void set_m_PoseProviderComponent_6(BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * value)
	{
		___m_PoseProviderComponent_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_PoseProviderComponent_6), value);
	}

	inline static int32_t get_offset_of_m_TrackingType_7() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_TrackingType_7)); }
	inline int32_t get_m_TrackingType_7() const { return ___m_TrackingType_7; }
	inline int32_t* get_address_of_m_TrackingType_7() { return &___m_TrackingType_7; }
	inline void set_m_TrackingType_7(int32_t value)
	{
		___m_TrackingType_7 = value;
	}

	inline static int32_t get_offset_of_m_UpdateType_8() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_UpdateType_8)); }
	inline int32_t get_m_UpdateType_8() const { return ___m_UpdateType_8; }
	inline int32_t* get_address_of_m_UpdateType_8() { return &___m_UpdateType_8; }
	inline void set_m_UpdateType_8(int32_t value)
	{
		___m_UpdateType_8 = value;
	}

	inline static int32_t get_offset_of_m_UseRelativeTransform_9() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_UseRelativeTransform_9)); }
	inline bool get_m_UseRelativeTransform_9() const { return ___m_UseRelativeTransform_9; }
	inline bool* get_address_of_m_UseRelativeTransform_9() { return &___m_UseRelativeTransform_9; }
	inline void set_m_UseRelativeTransform_9(bool value)
	{
		___m_UseRelativeTransform_9 = value;
	}

	inline static int32_t get_offset_of_m_OriginPose_10() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_OriginPose_10)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_OriginPose_10() const { return ___m_OriginPose_10; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_OriginPose_10() { return &___m_OriginPose_10; }
	inline void set_m_OriginPose_10(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_OriginPose_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKEDPOSEDRIVER_T7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A_H
#ifndef ARSESSIONORIGIN_TD635899BA0B41E9F3CE205D105ED47637E2AB0E2_H
#define ARSESSIONORIGIN_TD635899BA0B41E9F3CE205D105ED47637E2AB0E2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct  ARSessionOrigin_tD635899BA0B41E9F3CE205D105ED47637E2AB0E2  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::m_Camera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___m_Camera_4;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::<trackablesParent>k__BackingField
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___U3CtrackablesParentU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARSessionOrigin::m_ContentOffsetGameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_ContentOffsetGameObject_6;

public:
	inline static int32_t get_offset_of_m_Camera_4() { return static_cast<int32_t>(offsetof(ARSessionOrigin_tD635899BA0B41E9F3CE205D105ED47637E2AB0E2, ___m_Camera_4)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_m_Camera_4() const { return ___m_Camera_4; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_m_Camera_4() { return &___m_Camera_4; }
	inline void set_m_Camera_4(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___m_Camera_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Camera_4), value);
	}

	inline static int32_t get_offset_of_U3CtrackablesParentU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARSessionOrigin_tD635899BA0B41E9F3CE205D105ED47637E2AB0E2, ___U3CtrackablesParentU3Ek__BackingField_5)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_U3CtrackablesParentU3Ek__BackingField_5() const { return ___U3CtrackablesParentU3Ek__BackingField_5; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_U3CtrackablesParentU3Ek__BackingField_5() { return &___U3CtrackablesParentU3Ek__BackingField_5; }
	inline void set_U3CtrackablesParentU3Ek__BackingField_5(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___U3CtrackablesParentU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtrackablesParentU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_m_ContentOffsetGameObject_6() { return static_cast<int32_t>(offsetof(ARSessionOrigin_tD635899BA0B41E9F3CE205D105ED47637E2AB0E2, ___m_ContentOffsetGameObject_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_ContentOffsetGameObject_6() const { return ___m_ContentOffsetGameObject_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_ContentOffsetGameObject_6() { return &___m_ContentOffsetGameObject_6; }
	inline void set_m_ContentOffsetGameObject_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_ContentOffsetGameObject_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_ContentOffsetGameObject_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARSESSIONORIGIN_TD635899BA0B41E9F3CE205D105ED47637E2AB0E2_H
#ifndef SUBSYSTEMLIFECYCLEMANAGER_2_T9D47C0F6720519423CB26A57D0E42E538BFD3621_H
#define SUBSYSTEMLIFECYCLEMANAGER_2_T9D47C0F6720519423CB26A57D0E42E538BFD3621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct  SubsystemLifecycleManager_2_t9D47C0F6720519423CB26A57D0E42E538BFD3621  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2::<subsystem>k__BackingField
	XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909 * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_2_t9D47C0F6720519423CB26A57D0E42E538BFD3621, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909 * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909 ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909 * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsubsystemU3Ek__BackingField_4), value);
	}
};

struct SubsystemLifecycleManager_2_t9D47C0F6720519423CB26A57D0E42E538BFD3621_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2::s_SubsystemDescriptors
	List_1_t208402DC43C0E4E5C961FFC8BB18B8A0F1D3091A * ___s_SubsystemDescriptors_5;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_2_t9D47C0F6720519423CB26A57D0E42E538BFD3621_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_t208402DC43C0E4E5C961FFC8BB18B8A0F1D3091A * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_t208402DC43C0E4E5C961FFC8BB18B8A0F1D3091A ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_t208402DC43C0E4E5C961FFC8BB18B8A0F1D3091A * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_SubsystemDescriptors_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEMLIFECYCLEMANAGER_2_T9D47C0F6720519423CB26A57D0E42E538BFD3621_H
#ifndef SUBSYSTEMLIFECYCLEMANAGER_2_TDE11645ED850AA7739D57BAF17A648834DB2CD5B_H
#define SUBSYSTEMLIFECYCLEMANAGER_2_TDE11645ED850AA7739D57BAF17A648834DB2CD5B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct  SubsystemLifecycleManager_2_tDE11645ED850AA7739D57BAF17A648834DB2CD5B  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2::<subsystem>k__BackingField
	XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20 * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_2_tDE11645ED850AA7739D57BAF17A648834DB2CD5B, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20 * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20 ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20 * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsubsystemU3Ek__BackingField_4), value);
	}
};

struct SubsystemLifecycleManager_2_tDE11645ED850AA7739D57BAF17A648834DB2CD5B_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2::s_SubsystemDescriptors
	List_1_t67EA06DFF28CCF87DA1E9B7EB486336F8B486A7C * ___s_SubsystemDescriptors_5;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_2_tDE11645ED850AA7739D57BAF17A648834DB2CD5B_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_t67EA06DFF28CCF87DA1E9B7EB486336F8B486A7C * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_t67EA06DFF28CCF87DA1E9B7EB486336F8B486A7C ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_t67EA06DFF28CCF87DA1E9B7EB486336F8B486A7C * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_SubsystemDescriptors_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEMLIFECYCLEMANAGER_2_TDE11645ED850AA7739D57BAF17A648834DB2CD5B_H
#ifndef SUBSYSTEMLIFECYCLEMANAGER_2_T166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3_H
#define SUBSYSTEMLIFECYCLEMANAGER_2_T166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct  SubsystemLifecycleManager_2_t166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2::<subsystem>k__BackingField
	XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_2_t166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsubsystemU3Ek__BackingField_4), value);
	}
};

struct SubsystemLifecycleManager_2_t166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2::s_SubsystemDescriptors
	List_1_t71A8ADBEF293474EAEA02AD88A071AD903A3B475 * ___s_SubsystemDescriptors_5;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_2_t166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_t71A8ADBEF293474EAEA02AD88A071AD903A3B475 * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_t71A8ADBEF293474EAEA02AD88A071AD903A3B475 ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_t71A8ADBEF293474EAEA02AD88A071AD903A3B475 * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_SubsystemDescriptors_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEMLIFECYCLEMANAGER_2_T166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3_H
#ifndef GRAPHIC_TBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_H
#define GRAPHIC_TBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_8;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_9;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_10;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_11;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_12;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_14;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_16;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_19;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_6), value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_8)); }
	inline bool get_m_RaycastTarget_8() const { return ___m_RaycastTarget_8; }
	inline bool* get_address_of_m_RaycastTarget_8() { return &___m_RaycastTarget_8; }
	inline void set_m_RaycastTarget_8(bool value)
	{
		___m_RaycastTarget_8 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_9)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_9() const { return ___m_RectTransform_9; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_9() { return &___m_RectTransform_9; }
	inline void set_m_RectTransform_9(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_9), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_10)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_10() const { return ___m_CanvasRenderer_10; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_10() { return &___m_CanvasRenderer_10; }
	inline void set_m_CanvasRenderer_10(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_10), value);
	}

	inline static int32_t get_offset_of_m_Canvas_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_11)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_11() const { return ___m_Canvas_11; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_11() { return &___m_Canvas_11; }
	inline void set_m_Canvas_11(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_11), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_12)); }
	inline bool get_m_VertsDirty_12() const { return ___m_VertsDirty_12; }
	inline bool* get_address_of_m_VertsDirty_12() { return &___m_VertsDirty_12; }
	inline void set_m_VertsDirty_12(bool value)
	{
		___m_VertsDirty_12 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_13)); }
	inline bool get_m_MaterialDirty_13() const { return ___m_MaterialDirty_13; }
	inline bool* get_address_of_m_MaterialDirty_13() { return &___m_MaterialDirty_13; }
	inline void set_m_MaterialDirty_13(bool value)
	{
		___m_MaterialDirty_13 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_14)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_14() const { return ___m_OnDirtyLayoutCallback_14; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_14() { return &___m_OnDirtyLayoutCallback_14; }
	inline void set_m_OnDirtyLayoutCallback_14(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_14), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_15)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_15() const { return ___m_OnDirtyVertsCallback_15; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_15() { return &___m_OnDirtyVertsCallback_15; }
	inline void set_m_OnDirtyVertsCallback_15(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_15), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_16() const { return ___m_OnDirtyMaterialCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_16() { return &___m_OnDirtyMaterialCallback_16; }
	inline void set_m_OnDirtyMaterialCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_16), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_19)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_19() const { return ___m_ColorTweenRunner_19; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_19() { return &___m_ColorTweenRunner_19; }
	inline void set_m_ColorTweenRunner_19(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_19), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_20(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_20 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_17;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_18;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_4), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_5), value);
	}

	inline static int32_t get_offset_of_s_Mesh_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_17)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_17() const { return ___s_Mesh_17; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_17() { return &___s_Mesh_17; }
	inline void set_s_Mesh_17(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_17), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_18)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_18() const { return ___s_VertexHelper_18; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_18() { return &___s_VertexHelper_18; }
	inline void set_s_VertexHelper_18(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_TBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_H
#ifndef ARRAYCASTMANAGER_T81A9513150BA5BE536DF064F1C6DE73349A60BE7_H
#define ARRAYCASTMANAGER_T81A9513150BA5BE536DF064F1C6DE73349A60BE7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct  ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7  : public SubsystemLifecycleManager_2_tDE11645ED850AA7739D57BAF17A648834DB2CD5B
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARRaycastManager::m_SessionOrigin
	ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * ___m_SessionOrigin_8;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t5D589FB938B29FA2A1EF1FEC2CBA1201FF0C9A02 * ___m_RaycastViewportDelegate_9;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_t127C0519F4FBF1149F38B4E895BA95F8E83EE659 * ___m_RaycastRayDelegate_10;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_tCF216E059678E6F86943670619732CE72CD5BC19 * ___m_Raycasters_11;

public:
	inline static int32_t get_offset_of_m_SessionOrigin_8() { return static_cast<int32_t>(offsetof(ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7, ___m_SessionOrigin_8)); }
	inline ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * get_m_SessionOrigin_8() const { return ___m_SessionOrigin_8; }
	inline ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF ** get_address_of_m_SessionOrigin_8() { return &___m_SessionOrigin_8; }
	inline void set_m_SessionOrigin_8(ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * value)
	{
		___m_SessionOrigin_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_SessionOrigin_8), value);
	}

	inline static int32_t get_offset_of_m_RaycastViewportDelegate_9() { return static_cast<int32_t>(offsetof(ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7, ___m_RaycastViewportDelegate_9)); }
	inline Func_4_t5D589FB938B29FA2A1EF1FEC2CBA1201FF0C9A02 * get_m_RaycastViewportDelegate_9() const { return ___m_RaycastViewportDelegate_9; }
	inline Func_4_t5D589FB938B29FA2A1EF1FEC2CBA1201FF0C9A02 ** get_address_of_m_RaycastViewportDelegate_9() { return &___m_RaycastViewportDelegate_9; }
	inline void set_m_RaycastViewportDelegate_9(Func_4_t5D589FB938B29FA2A1EF1FEC2CBA1201FF0C9A02 * value)
	{
		___m_RaycastViewportDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RaycastViewportDelegate_9), value);
	}

	inline static int32_t get_offset_of_m_RaycastRayDelegate_10() { return static_cast<int32_t>(offsetof(ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7, ___m_RaycastRayDelegate_10)); }
	inline Func_4_t127C0519F4FBF1149F38B4E895BA95F8E83EE659 * get_m_RaycastRayDelegate_10() const { return ___m_RaycastRayDelegate_10; }
	inline Func_4_t127C0519F4FBF1149F38B4E895BA95F8E83EE659 ** get_address_of_m_RaycastRayDelegate_10() { return &___m_RaycastRayDelegate_10; }
	inline void set_m_RaycastRayDelegate_10(Func_4_t127C0519F4FBF1149F38B4E895BA95F8E83EE659 * value)
	{
		___m_RaycastRayDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_RaycastRayDelegate_10), value);
	}

	inline static int32_t get_offset_of_m_Raycasters_11() { return static_cast<int32_t>(offsetof(ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7, ___m_Raycasters_11)); }
	inline List_1_tCF216E059678E6F86943670619732CE72CD5BC19 * get_m_Raycasters_11() const { return ___m_Raycasters_11; }
	inline List_1_tCF216E059678E6F86943670619732CE72CD5BC19 ** get_address_of_m_Raycasters_11() { return &___m_Raycasters_11; }
	inline void set_m_Raycasters_11(List_1_tCF216E059678E6F86943670619732CE72CD5BC19 * value)
	{
		___m_Raycasters_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Raycasters_11), value);
	}
};

struct ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7_StaticFields
{
public:
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_tE207337DE1F503EEC6370260BFAB53232F5224B3 * ___s_RaycastHitComparer_6;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_tB4ACC0E738125FD48DF94969067CC04FE44C01DD * ___s_NativeRaycastHits_7;

public:
	inline static int32_t get_offset_of_s_RaycastHitComparer_6() { return static_cast<int32_t>(offsetof(ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7_StaticFields, ___s_RaycastHitComparer_6)); }
	inline Comparison_1_tE207337DE1F503EEC6370260BFAB53232F5224B3 * get_s_RaycastHitComparer_6() const { return ___s_RaycastHitComparer_6; }
	inline Comparison_1_tE207337DE1F503EEC6370260BFAB53232F5224B3 ** get_address_of_s_RaycastHitComparer_6() { return &___s_RaycastHitComparer_6; }
	inline void set_s_RaycastHitComparer_6(Comparison_1_tE207337DE1F503EEC6370260BFAB53232F5224B3 * value)
	{
		___s_RaycastHitComparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___s_RaycastHitComparer_6), value);
	}

	inline static int32_t get_offset_of_s_NativeRaycastHits_7() { return static_cast<int32_t>(offsetof(ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7_StaticFields, ___s_NativeRaycastHits_7)); }
	inline List_1_tB4ACC0E738125FD48DF94969067CC04FE44C01DD * get_s_NativeRaycastHits_7() const { return ___s_NativeRaycastHits_7; }
	inline List_1_tB4ACC0E738125FD48DF94969067CC04FE44C01DD ** get_address_of_s_NativeRaycastHits_7() { return &___s_NativeRaycastHits_7; }
	inline void set_s_NativeRaycastHits_7(List_1_tB4ACC0E738125FD48DF94969067CC04FE44C01DD * value)
	{
		___s_NativeRaycastHits_7 = value;
		Il2CppCodeGenWriteBarrier((&___s_NativeRaycastHits_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYCASTMANAGER_T81A9513150BA5BE536DF064F1C6DE73349A60BE7_H
#ifndef ARSESSION_TD0921BB3112091777B3BC60BBCC3617A4F15E2DC_H
#define ARSESSION_TD0921BB3112091777B3BC60BBCC3617A4F15E2DC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARFoundation.ARSession
struct  ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC  : public SubsystemLifecycleManager_2_t166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_AttemptUpdate
	bool ___m_AttemptUpdate_6;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_MatchFrameRate
	bool ___m_MatchFrameRate_7;

public:
	inline static int32_t get_offset_of_m_AttemptUpdate_6() { return static_cast<int32_t>(offsetof(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC, ___m_AttemptUpdate_6)); }
	inline bool get_m_AttemptUpdate_6() const { return ___m_AttemptUpdate_6; }
	inline bool* get_address_of_m_AttemptUpdate_6() { return &___m_AttemptUpdate_6; }
	inline void set_m_AttemptUpdate_6(bool value)
	{
		___m_AttemptUpdate_6 = value;
	}

	inline static int32_t get_offset_of_m_MatchFrameRate_7() { return static_cast<int32_t>(offsetof(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC, ___m_MatchFrameRate_7)); }
	inline bool get_m_MatchFrameRate_7() const { return ___m_MatchFrameRate_7; }
	inline bool* get_address_of_m_MatchFrameRate_7() { return &___m_MatchFrameRate_7; }
	inline void set_m_MatchFrameRate_7(bool value)
	{
		___m_MatchFrameRate_7 = value;
	}
};

struct ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_StaticFields
{
public:
	// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs> UnityEngine.XR.ARFoundation.ARSession::stateChanged
	Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * ___stateChanged_8;
	// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::s_State
	int32_t ___s_State_9;
	// UnityEngine.XR.ARSubsystems.SessionAvailability UnityEngine.XR.ARFoundation.ARSession::s_Availability
	int32_t ___s_Availability_10;
	// UnityEngine.XR.ARFoundation.ARSession UnityEngine.XR.ARFoundation.ARSession::s_Instance
	ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * ___s_Instance_11;

public:
	inline static int32_t get_offset_of_stateChanged_8() { return static_cast<int32_t>(offsetof(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_StaticFields, ___stateChanged_8)); }
	inline Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * get_stateChanged_8() const { return ___stateChanged_8; }
	inline Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD ** get_address_of_stateChanged_8() { return &___stateChanged_8; }
	inline void set_stateChanged_8(Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * value)
	{
		___stateChanged_8 = value;
		Il2CppCodeGenWriteBarrier((&___stateChanged_8), value);
	}

	inline static int32_t get_offset_of_s_State_9() { return static_cast<int32_t>(offsetof(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_StaticFields, ___s_State_9)); }
	inline int32_t get_s_State_9() const { return ___s_State_9; }
	inline int32_t* get_address_of_s_State_9() { return &___s_State_9; }
	inline void set_s_State_9(int32_t value)
	{
		___s_State_9 = value;
	}

	inline static int32_t get_offset_of_s_Availability_10() { return static_cast<int32_t>(offsetof(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_StaticFields, ___s_Availability_10)); }
	inline int32_t get_s_Availability_10() const { return ___s_Availability_10; }
	inline int32_t* get_address_of_s_Availability_10() { return &___s_Availability_10; }
	inline void set_s_Availability_10(int32_t value)
	{
		___s_Availability_10 = value;
	}

	inline static int32_t get_offset_of_s_Instance_11() { return static_cast<int32_t>(offsetof(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_StaticFields, ___s_Instance_11)); }
	inline ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * get_s_Instance_11() const { return ___s_Instance_11; }
	inline ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC ** get_address_of_s_Instance_11() { return &___s_Instance_11; }
	inline void set_s_Instance_11(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * value)
	{
		___s_Instance_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_Instance_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARSESSION_TD0921BB3112091777B3BC60BBCC3617A4F15E2DC_H
#ifndef ARTRACKABLEMANAGER_4_T85857EDF2FEA2C5522B55CA4D1FDDCBA49FBB427_H
#define ARTRACKABLEMANAGER_4_T85857EDF2FEA2C5522B55CA4D1FDDCBA49FBB427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARFoundation.ARTrackableManager`4<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct  ARTrackableManager_4_t85857EDF2FEA2C5522B55CA4D1FDDCBA49FBB427  : public SubsystemLifecycleManager_2_t9D47C0F6720519423CB26A57D0E42E538BFD3621
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`4::<sessionOrigin>k__BackingField
	ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * ___U3CsessionOriginU3Ek__BackingField_6;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::m_Trackables
	Dictionary_2_t6D25680AC083D6735B2252FAAF8ECB333ED0B8F0 * ___m_Trackables_7;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::m_PendingAdds
	Dictionary_2_t6D25680AC083D6735B2252FAAF8ECB333ED0B8F0 * ___m_PendingAdds_8;

public:
	inline static int32_t get_offset_of_U3CsessionOriginU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_t85857EDF2FEA2C5522B55CA4D1FDDCBA49FBB427, ___U3CsessionOriginU3Ek__BackingField_6)); }
	inline ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * get_U3CsessionOriginU3Ek__BackingField_6() const { return ___U3CsessionOriginU3Ek__BackingField_6; }
	inline ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF ** get_address_of_U3CsessionOriginU3Ek__BackingField_6() { return &___U3CsessionOriginU3Ek__BackingField_6; }
	inline void set_U3CsessionOriginU3Ek__BackingField_6(ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * value)
	{
		___U3CsessionOriginU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsessionOriginU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_m_Trackables_7() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_t85857EDF2FEA2C5522B55CA4D1FDDCBA49FBB427, ___m_Trackables_7)); }
	inline Dictionary_2_t6D25680AC083D6735B2252FAAF8ECB333ED0B8F0 * get_m_Trackables_7() const { return ___m_Trackables_7; }
	inline Dictionary_2_t6D25680AC083D6735B2252FAAF8ECB333ED0B8F0 ** get_address_of_m_Trackables_7() { return &___m_Trackables_7; }
	inline void set_m_Trackables_7(Dictionary_2_t6D25680AC083D6735B2252FAAF8ECB333ED0B8F0 * value)
	{
		___m_Trackables_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Trackables_7), value);
	}

	inline static int32_t get_offset_of_m_PendingAdds_8() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_t85857EDF2FEA2C5522B55CA4D1FDDCBA49FBB427, ___m_PendingAdds_8)); }
	inline Dictionary_2_t6D25680AC083D6735B2252FAAF8ECB333ED0B8F0 * get_m_PendingAdds_8() const { return ___m_PendingAdds_8; }
	inline Dictionary_2_t6D25680AC083D6735B2252FAAF8ECB333ED0B8F0 ** get_address_of_m_PendingAdds_8() { return &___m_PendingAdds_8; }
	inline void set_m_PendingAdds_8(Dictionary_2_t6D25680AC083D6735B2252FAAF8ECB333ED0B8F0 * value)
	{
		___m_PendingAdds_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_PendingAdds_8), value);
	}
};

struct ARTrackableManager_4_t85857EDF2FEA2C5522B55CA4D1FDDCBA49FBB427_StaticFields
{
public:
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::s_Added
	List_1_t2517CE2CABA3F0EFDEC91E3FA83D4F0417EFF51B * ___s_Added_9;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::s_Updated
	List_1_t2517CE2CABA3F0EFDEC91E3FA83D4F0417EFF51B * ___s_Updated_10;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`4::s_Removed
	List_1_t2517CE2CABA3F0EFDEC91E3FA83D4F0417EFF51B * ___s_Removed_11;

public:
	inline static int32_t get_offset_of_s_Added_9() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_t85857EDF2FEA2C5522B55CA4D1FDDCBA49FBB427_StaticFields, ___s_Added_9)); }
	inline List_1_t2517CE2CABA3F0EFDEC91E3FA83D4F0417EFF51B * get_s_Added_9() const { return ___s_Added_9; }
	inline List_1_t2517CE2CABA3F0EFDEC91E3FA83D4F0417EFF51B ** get_address_of_s_Added_9() { return &___s_Added_9; }
	inline void set_s_Added_9(List_1_t2517CE2CABA3F0EFDEC91E3FA83D4F0417EFF51B * value)
	{
		___s_Added_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_Added_9), value);
	}

	inline static int32_t get_offset_of_s_Updated_10() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_t85857EDF2FEA2C5522B55CA4D1FDDCBA49FBB427_StaticFields, ___s_Updated_10)); }
	inline List_1_t2517CE2CABA3F0EFDEC91E3FA83D4F0417EFF51B * get_s_Updated_10() const { return ___s_Updated_10; }
	inline List_1_t2517CE2CABA3F0EFDEC91E3FA83D4F0417EFF51B ** get_address_of_s_Updated_10() { return &___s_Updated_10; }
	inline void set_s_Updated_10(List_1_t2517CE2CABA3F0EFDEC91E3FA83D4F0417EFF51B * value)
	{
		___s_Updated_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_Updated_10), value);
	}

	inline static int32_t get_offset_of_s_Removed_11() { return static_cast<int32_t>(offsetof(ARTrackableManager_4_t85857EDF2FEA2C5522B55CA4D1FDDCBA49FBB427_StaticFields, ___s_Removed_11)); }
	inline List_1_t2517CE2CABA3F0EFDEC91E3FA83D4F0417EFF51B * get_s_Removed_11() const { return ___s_Removed_11; }
	inline List_1_t2517CE2CABA3F0EFDEC91E3FA83D4F0417EFF51B ** get_address_of_s_Removed_11() { return &___s_Removed_11; }
	inline void set_s_Removed_11(List_1_t2517CE2CABA3F0EFDEC91E3FA83D4F0417EFF51B * value)
	{
		___s_Removed_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_Removed_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARTRACKABLEMANAGER_4_T85857EDF2FEA2C5522B55CA4D1FDDCBA49FBB427_H
#ifndef MASKABLEGRAPHIC_TDA46A5925C6A2101217C9F52C855B5C1A36A7A0F_H
#define MASKABLEGRAPHIC_TDA46A5925C6A2101217C9F52C855B5C1A36A7A0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_21;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_22;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_23;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_25;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_26;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_27;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_28;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_29;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_21)); }
	inline bool get_m_ShouldRecalculateStencil_21() const { return ___m_ShouldRecalculateStencil_21; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_21() { return &___m_ShouldRecalculateStencil_21; }
	inline void set_m_ShouldRecalculateStencil_21(bool value)
	{
		___m_ShouldRecalculateStencil_21 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_22)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_22() const { return ___m_MaskMaterial_22; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_22() { return &___m_MaskMaterial_22; }
	inline void set_m_MaskMaterial_22(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_22), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_23)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_23() const { return ___m_ParentMask_23; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_23() { return &___m_ParentMask_23; }
	inline void set_m_ParentMask_23(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_23), value);
	}

	inline static int32_t get_offset_of_m_Maskable_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_24)); }
	inline bool get_m_Maskable_24() const { return ___m_Maskable_24; }
	inline bool* get_address_of_m_Maskable_24() { return &___m_Maskable_24; }
	inline void set_m_Maskable_24(bool value)
	{
		___m_Maskable_24 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_25)); }
	inline bool get_m_IncludeForMasking_25() const { return ___m_IncludeForMasking_25; }
	inline bool* get_address_of_m_IncludeForMasking_25() { return &___m_IncludeForMasking_25; }
	inline void set_m_IncludeForMasking_25(bool value)
	{
		___m_IncludeForMasking_25 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_26)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_26() const { return ___m_OnCullStateChanged_26; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_26() { return &___m_OnCullStateChanged_26; }
	inline void set_m_OnCullStateChanged_26(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_26), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_27)); }
	inline bool get_m_ShouldRecalculate_27() const { return ___m_ShouldRecalculate_27; }
	inline bool* get_address_of_m_ShouldRecalculate_27() { return &___m_ShouldRecalculate_27; }
	inline void set_m_ShouldRecalculate_27(bool value)
	{
		___m_ShouldRecalculate_27 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_28)); }
	inline int32_t get_m_StencilValue_28() const { return ___m_StencilValue_28; }
	inline int32_t* get_address_of_m_StencilValue_28() { return &___m_StencilValue_28; }
	inline void set_m_StencilValue_28(int32_t value)
	{
		___m_StencilValue_28 = value;
	}

	inline static int32_t get_offset_of_m_Corners_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_29)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_29() const { return ___m_Corners_29; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_29() { return &___m_Corners_29; }
	inline void set_m_Corners_29(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_TDA46A5925C6A2101217C9F52C855B5C1A36A7A0F_H
#ifndef ARPLANEMANAGER_TC2613B8C888EBC3F92BF68E60F0A3E4DCCFAD69A_H
#define ARPLANEMANAGER_TC2613B8C888EBC3F92BF68E60F0A3E4DCCFAD69A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARFoundation.ARPlaneManager
struct  ARPlaneManager_tC2613B8C888EBC3F92BF68E60F0A3E4DCCFAD69A  : public ARTrackableManager_4_t85857EDF2FEA2C5522B55CA4D1FDDCBA49FBB427
{
public:
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARPlaneManager::m_PlanePrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_PlanePrefab_12;
	// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARFoundation.ARPlaneManager::m_DetectionMode
	int32_t ___m_DetectionMode_13;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlaneManager::planesChanged
	Action_1_t5A0A4549E7215F9A5DA4C7A647D06B3689691A8F * ___planesChanged_14;

public:
	inline static int32_t get_offset_of_m_PlanePrefab_12() { return static_cast<int32_t>(offsetof(ARPlaneManager_tC2613B8C888EBC3F92BF68E60F0A3E4DCCFAD69A, ___m_PlanePrefab_12)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_PlanePrefab_12() const { return ___m_PlanePrefab_12; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_PlanePrefab_12() { return &___m_PlanePrefab_12; }
	inline void set_m_PlanePrefab_12(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_PlanePrefab_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_PlanePrefab_12), value);
	}

	inline static int32_t get_offset_of_m_DetectionMode_13() { return static_cast<int32_t>(offsetof(ARPlaneManager_tC2613B8C888EBC3F92BF68E60F0A3E4DCCFAD69A, ___m_DetectionMode_13)); }
	inline int32_t get_m_DetectionMode_13() const { return ___m_DetectionMode_13; }
	inline int32_t* get_address_of_m_DetectionMode_13() { return &___m_DetectionMode_13; }
	inline void set_m_DetectionMode_13(int32_t value)
	{
		___m_DetectionMode_13 = value;
	}

	inline static int32_t get_offset_of_planesChanged_14() { return static_cast<int32_t>(offsetof(ARPlaneManager_tC2613B8C888EBC3F92BF68E60F0A3E4DCCFAD69A, ___planesChanged_14)); }
	inline Action_1_t5A0A4549E7215F9A5DA4C7A647D06B3689691A8F * get_planesChanged_14() const { return ___planesChanged_14; }
	inline Action_1_t5A0A4549E7215F9A5DA4C7A647D06B3689691A8F ** get_address_of_planesChanged_14() { return &___planesChanged_14; }
	inline void set_planesChanged_14(Action_1_t5A0A4549E7215F9A5DA4C7A647D06B3689691A8F * value)
	{
		___planesChanged_14 = value;
		Il2CppCodeGenWriteBarrier((&___planesChanged_14), value);
	}
};

struct ARPlaneManager_tC2613B8C888EBC3F92BF68E60F0A3E4DCCFAD69A_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlaneManager::s_PlaneSpaceBoundary
	List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___s_PlaneSpaceBoundary_15;

public:
	inline static int32_t get_offset_of_s_PlaneSpaceBoundary_15() { return static_cast<int32_t>(offsetof(ARPlaneManager_tC2613B8C888EBC3F92BF68E60F0A3E4DCCFAD69A_StaticFields, ___s_PlaneSpaceBoundary_15)); }
	inline List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * get_s_PlaneSpaceBoundary_15() const { return ___s_PlaneSpaceBoundary_15; }
	inline List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB ** get_address_of_s_PlaneSpaceBoundary_15() { return &___s_PlaneSpaceBoundary_15; }
	inline void set_s_PlaneSpaceBoundary_15(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * value)
	{
		___s_PlaneSpaceBoundary_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_PlaneSpaceBoundary_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPLANEMANAGER_TC2613B8C888EBC3F92BF68E60F0A3E4DCCFAD69A_H
#ifndef TEXT_TE9317B57477F4B50AA4C16F460DE6F82DAD6D030_H
#define TEXT_TE9317B57477F4B50AA4C16F460DE6F82DAD6D030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_30;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_31;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_32;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_33;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_35;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_36;

public:
	inline static int32_t get_offset_of_m_FontData_30() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_30)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_30() const { return ___m_FontData_30; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_30() { return &___m_FontData_30; }
	inline void set_m_FontData_30(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_30), value);
	}

	inline static int32_t get_offset_of_m_Text_31() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_31)); }
	inline String_t* get_m_Text_31() const { return ___m_Text_31; }
	inline String_t** get_address_of_m_Text_31() { return &___m_Text_31; }
	inline void set_m_Text_31(String_t* value)
	{
		___m_Text_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_31), value);
	}

	inline static int32_t get_offset_of_m_TextCache_32() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_32)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_32() const { return ___m_TextCache_32; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_32() { return &___m_TextCache_32; }
	inline void set_m_TextCache_32(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_32), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_33() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_33)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_33() const { return ___m_TextCacheForLayout_33; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_33() { return &___m_TextCacheForLayout_33; }
	inline void set_m_TextCacheForLayout_33(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_33), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_35)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_35() const { return ___m_DisableFontTextureRebuiltCallback_35; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_35() { return &___m_DisableFontTextureRebuiltCallback_35; }
	inline void set_m_DisableFontTextureRebuiltCallback_35(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_35 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_36)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_36() const { return ___m_TempVerts_36; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_36() { return &___m_TempVerts_36; }
	inline void set_m_TempVerts_36(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_36), value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_34;

public:
	inline static int32_t get_offset_of_s_DefaultText_34() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_34)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_34() const { return ___s_DefaultText_34; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_34() { return &___s_DefaultText_34; }
	inline void set_s_DefaultText_34(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_34), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_TE9317B57477F4B50AA4C16F460DE6F82DAD6D030_H
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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
// UnityEngine.XR.ARFoundation.ARSession[]
struct ARSessionU5BU5D_t59BB2CF66CA69B5754D409F8589E8ECB48BF0C7E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * m_Items[1];

public:
	inline ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m40902128B21C9D7174C484E5264CF392E07EC258_gshared (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Boolean>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m7C43359DBAA0872D17EFDD3554B9BCCE557DC775_gshared (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * __this, bool p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Boolean>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool List_1_get_Item_m553C06F3C7AF691CFB4457CFAFB109DDCB4ED9B3_gshared (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * __this, int32_t p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Boolean>::set_Item(System.Int32,!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_set_Item_m0E0D8F10934225F83BFBD84DEA568F92CD75DDCE_gshared (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * __this, int32_t p0, bool p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_mA52EAAB235BDE102E8518F30412F14422B05C9E0_gshared (List_1_tE22AC27B04238DDEA6B873A77D0222DA9B480F52 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC  List_1_get_Item_mFA1DFF7102266DFFCA6630C79C553225EE591AAE_gshared (List_1_tE22AC27B04238DDEA6B873A77D0222DA9B480F52 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::SetTrackablesActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ARTrackableManager_4_SetTrackablesActive_mA211F88E50B08A75B3A5D2E7ABB5426EC1C4A288_gshared (ARTrackableManager_4_tC7D7F2BE7A971C14BDFC097BBB52D2476E380E11 * __this, bool p0, const RuntimeMethod* method);
// !1 UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::get_descriptor()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SubsystemLifecycleManager_2_get_descriptor_m838B61F4A4E192402B0CB4BBDF223E105CA65E92_gshared (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m588298D1CA0383E663E3FF5B4D0FDBED75EF7D60_gshared (Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * __this, ARSessionStateChangedEventArgs_tAB726C94F3164280811C27B77D92B0189C302082  p0, const RuntimeMethod* method);
// !0 UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::get_subsystem()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SubsystemLifecycleManager_2_get_subsystem_m4B541054CC60E616694357611534CDDA7DC5D1A0_gshared (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Object_FindObjectsOfType_TisRuntimeObject_mE570B614F68E0A19BD5F65061CDA9BEE6EDBD159_gshared (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::CreateSubsystemIfNecessary()
extern "C" IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_CreateSubsystemIfNecessary_mA14FBB6F49F5E6A16B3675A839828DA593DAA98D_gshared (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_OnDisable_m25006859B7FEE85010D68C57CE9D2C1F982C98D6_gshared (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_OnDestroy_m66F15685F03F120643E52A0A31D652A7A8E4C06F_gshared (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2__ctor_m0654A5B287B1F79A654C5EBCA3D2B846860D7623_gshared (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 * __this, const RuntimeMethod* method);
// !0 UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::get_result()
extern "C" IL2CPP_METHOD_ATTR int32_t Promise_1_get_result_m369355E10FC5D95CDE097DD715AC0E18DA725AFB_gshared (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 * __this, const RuntimeMethod* method);
// !0 UnityEngine.Experimental.Subsystem`1<System.Object>::get_SubsystemDescriptor()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Subsystem_1_get_SubsystemDescriptor_mD96F2CEA4EF5CB4A047906E686D94D50BB0E1C69_gshared (Subsystem_1_t3C9464E9C57AFD87BCA00E457B3C2FCB3AFA269E * __this, const RuntimeMethod* method);

// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_Translate_m0F354939D5084DDFF6B9902E62D3DCA7A3B53EA3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<PlaceGameBoard>()
inline PlaceGameBoard_t8091E3D27BDFE9409A418B1DFE0E2D26E187F90A * Component_GetComponent_TisPlaceGameBoard_t8091E3D27BDFE9409A418B1DFE0E2D26E187F90A_mCEF859C3BC828C724206F862271DBA3696D86DD6 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  PlaceGameBoard_t8091E3D27BDFE9409A418B1DFE0E2D26E187F90A * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Int32 UnityEngine.Input::get_touchCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m2A22A8E963E14F1221F768412663C8D11F806CD6 (const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Touch_t806752C775BA713A91B6588A07CA98417CABC003  Input_GetTouch_m1ABE5E9866FD4C5FDFC5DD8FF4E7DCEDE2DD9313 (int32_t p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Touch_get_position_mC0913727A83103C5E2B56A5D76AB8F911A79D1E9 (Touch_t806752C775BA713A91B6588A07CA98417CABC003 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  Camera_ScreenPointToRay_m27638E78502DB6D6D7113F81AF7C210773B828F3 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_mE1590EE4E2DC950A9FC2437E98EE8CD2EC2DEE67 (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  p0, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * p1, float p2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * RaycastHit_get_transform_m3C0BEE7439CA37F82FD5216143B92BF32F995279 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
extern "C" IL2CPP_METHOD_ATTR String_t* Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<OnTouch3D>()
inline RuntimeObject* Component_GetComponent_TisOnTouch3D_t1B7024D522D88EB871840E2DEA458F2DFAF0E2D2_m97E02014BB00D2533DD18DB201452FCF7CE8A035 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_m0046B0A356552D7B951C2CEEE5F1375DAF72054A (List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mE98B6C5F644AE362EC1D58C10506327D6A5878FC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(!0)
inline void List_1_Add_mEB0CDED8A9ADCC0F235881A5D34D41085EC4780C (List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D *, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor()
inline void List_1__ctor_m40902128B21C9D7174C484E5264CF392E07EC258 (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *, const RuntimeMethod*))List_1__ctor_m40902128B21C9D7174C484E5264CF392E07EC258_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Boolean>::Add(!0)
inline void List_1_Add_m7C43359DBAA0872D17EFDD3554B9BCCE557DC775 (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * __this, bool p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *, bool, const RuntimeMethod*))List_1_Add_m7C43359DBAA0872D17EFDD3554B9BCCE557DC775_gshared)(__this, p0, method);
}
// System.Void BallController::UpdateScore()
extern "C" IL2CPP_METHOD_ATTR void BallController_UpdateScore_mB2415FF436B1D7D3D9A6D828272ADC5CD3A43C11 (BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB * __this, const RuntimeMethod* method);
// System.Void BallController::Start()
extern "C" IL2CPP_METHOD_ATTR void BallController_Start_m405732FD42FA3034EB64668BA2A2BDAA5E4E2999 (BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384 (float p0, float p1, const RuntimeMethod* method);
// System.Void BallController::BallPop(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void BallController_BallPop_mC4ABF3C8C2F7A37F4DB3FF60C515EC2DF8C86570 (BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB * __this, int32_t ___popIndex0, const RuntimeMethod* method);
// System.Void BallController::BallReset(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void BallController_BallReset_mFC3777D33778E31E6031A83045D9C3A97A3B43A8 (BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB * __this, int32_t ___popIndex0, bool ___hit1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Boolean>::get_Item(System.Int32)
inline bool List_1_get_Item_m553C06F3C7AF691CFB4457CFAFB109DDCB4ED9B3 (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *, int32_t, const RuntimeMethod*))List_1_get_Item_m553C06F3C7AF691CFB4457CFAFB109DDCB4ED9B3_gshared)(__this, p0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * List_1_get_Item_m88FE4B6F43A2CD95BB9ECF8D801F206618FFFFB8 (List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * (*) (List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.Boolean>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m0E0D8F10934225F83BFBD84DEA568F92CD75DDCE (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * __this, int32_t p0, bool p1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *, int32_t, bool, const RuntimeMethod*))List_1_set_Item_m0E0D8F10934225F83BFBD84DEA568F92CD75DDCE_gshared)(__this, p0, p1, method);
}
// System.Void BallController::GameOver()
extern "C" IL2CPP_METHOD_ATTR void BallController_GameOver_mB457E78E7F8597E370F6769452021FB4B3C140EB (BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<BallController>()
inline BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB * GameObject_GetComponent_TisBallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB_m1917A2D55D0658361EDAD097677276948BC3B157 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared)(__this, method);
}
// System.Int32 UnityEngine.Transform::GetSiblingIndex()
extern "C" IL2CPP_METHOD_ATTR int32_t Transform_GetSiblingIndex_m6FEF9F4DAB8BEAB964A806F3CEE387C1F462B4C1 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARRaycastManager>()
inline ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7 * Component_GetComponent_TisARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7_m71DCE7466C02DBA59A1618314D7FA98D931BD522 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlaneManager>()
inline ARPlaneManager_tC2613B8C888EBC3F92BF68E60F0A3E4DCCFAD69A * Component_GetComponent_TisARPlaneManager_tC2613B8C888EBC3F92BF68E60F0A3E4DCCFAD69A_m455AA97B2C4D63D9097F33F6D48444A891B5234A (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  ARPlaneManager_tC2613B8C888EBC3F92BF68E60F0A3E4DCCFAD69A * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_mA52EAAB235BDE102E8518F30412F14422B05C9E0 (List_1_tE22AC27B04238DDEA6B873A77D0222DA9B480F52 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE22AC27B04238DDEA6B873A77D0222DA9B480F52 *, const RuntimeMethod*))List_1__ctor_mA52EAAB235BDE102E8518F30412F14422B05C9E0_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
extern "C" IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mCBD053A6B0264981FCBF4244825A47F1DE0696F6 (ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, List_1_tE22AC27B04238DDEA6B873A77D0222DA9B480F52 * p1, int32_t p2, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC  List_1_get_Item_mFA1DFF7102266DFFCA6630C79C553225EE591AAE (List_1_tE22AC27B04238DDEA6B873A77D0222DA9B480F52 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC  (*) (List_1_tE22AC27B04238DDEA6B873A77D0222DA9B480F52 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFA1DFF7102266DFFCA6630C79C553225EE591AAE_gshared)(__this, p0, method);
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
extern "C" IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ARRaycastHit_get_pose_m5CCFFED6C4A101EA42083A8661956A2B4B4C4A0D (ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`4<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>::SetTrackablesActive(System.Boolean)
inline void ARTrackableManager_4_SetTrackablesActive_m04B8A0D1B72A834DA22B4E7389F7E0B3978903D2 (ARTrackableManager_4_t85857EDF2FEA2C5522B55CA4D1FDDCBA49FBB427 * __this, bool p0, const RuntimeMethod* method)
{
	((  void (*) (ARTrackableManager_4_t85857EDF2FEA2C5522B55CA4D1FDDCBA49FBB427 *, bool, const RuntimeMethod*))ARTrackableManager_4_SetTrackablesActive_mA211F88E50B08A75B3A5D2E7ABB5426EC1C4A288_gshared)(__this, p0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_Rotate_m610B6793DCC2F987290D328942E649B5B7DE0F9A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void BallController::ConfigDifficulty(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void BallController_ConfigDifficulty_m8AB02B25FFCA92597F76DE54168B20FECE323B4D (BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB * __this, float ___t10, float ___t21, const RuntimeMethod* method);
// !1 UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>::get_descriptor()
inline XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * SubsystemLifecycleManager_2_get_descriptor_mACB947E64926B6F80F28A2A443EA4CC9ED1E42E9 (SubsystemLifecycleManager_2_t166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3 * __this, const RuntimeMethod* method)
{
	return ((  XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * (*) (SubsystemLifecycleManager_2_t166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3 *, const RuntimeMethod*))SubsystemLifecycleManager_2_get_descriptor_m838B61F4A4E192402B0CB4BBDF223E105CA65E92_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARSession::SetMatchFrameRateEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ARSession_SetMatchFrameRateEnabled_mAF625DD431B80D4A7FDEA5738B34C483E15B71D2 (ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * __this, bool ___enabled0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * p0, Delegate_t * p1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * p0, Delegate_t * p1, const RuntimeMethod* method);
// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::get_state()
extern "C" IL2CPP_METHOD_ATTR int32_t ARSession_get_state_m805612298E9ED122411DA5633370B26B2BF07AE2 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs::.ctor(UnityEngine.XR.ARFoundation.ARSessionState)
extern "C" IL2CPP_METHOD_ATTR void ARSessionStateChangedEventArgs__ctor_m2460DA6B8BCE863C3AFF06E110B795CE63305717 (ARSessionStateChangedEventArgs_tAB726C94F3164280811C27B77D92B0189C302082 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m588298D1CA0383E663E3FF5B4D0FDBED75EF7D60 (Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * __this, ARSessionStateChangedEventArgs_tAB726C94F3164280811C27B77D92B0189C302082  p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD *, ARSessionStateChangedEventArgs_tAB726C94F3164280811C27B77D92B0189C302082 , const RuntimeMethod*))Action_1_Invoke_m588298D1CA0383E663E3FF5B4D0FDBED75EF7D60_gshared)(__this, p0, method);
}
// !0 UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>::get_subsystem()
inline XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B (SubsystemLifecycleManager_2_t166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3 * __this, const RuntimeMethod* method)
{
	return ((  XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * (*) (SubsystemLifecycleManager_2_t166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3 *, const RuntimeMethod*))SubsystemLifecycleManager_2_get_subsystem_m4B541054CC60E616694357611534CDDA7DC5D1A0_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::Reset()
extern "C" IL2CPP_METHOD_ATTR void XRSessionSubsystem_Reset_mA6596EEA8C670E2561986B54BB34E0F15A0D5836 (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.ARSession::set_state(UnityEngine.XR.ARFoundation.ARSessionState)
extern "C" IL2CPP_METHOD_ATTR void ARSession_set_state_mA395527F1EABE6201E08E27F210CADBA384368F5 (int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::get_supportsMatchFrameRate()
extern "C" IL2CPP_METHOD_ATTR bool XRSessionSubsystemDescriptor_get_supportsMatchFrameRate_m66DA7D5EE88322AF2EE5FC3B1BF8203115C2CA8F (XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::set_matchFrameRate(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XRSessionSubsystem_set_matchFrameRate_m5AE7252065F093953386D31D79BCA9C1C7BC256A (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, bool p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_matchFrameRate()
extern "C" IL2CPP_METHOD_ATTR bool XRSessionSubsystem_get_matchFrameRate_m1A5153DC073507175C7D0E47FC649DBB690FEEEC (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_frameRate()
extern "C" IL2CPP_METHOD_ATTR int32_t XRSessionSubsystem_get_frameRate_m9C029A08839E039C3459DF5CE4A5E5CFAD3DC7DE (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_mC20C40E50BAB994B10DDAC0E3C26A851025337BC (int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.QualitySettings::set_vSyncCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void QualitySettings_set_vSyncCount_m9214E19E48E3EB1419C5C810294B80A355BA588C (int32_t p0, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<UnityEngine.XR.ARFoundation.ARSession>()
inline ARSessionU5BU5D_t59BB2CF66CA69B5754D409F8589E8ECB48BF0C7E* Object_FindObjectsOfType_TisARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_m717AB67321FD6E41C6ABC6A1B97E1010A3E382CE (const RuntimeMethod* method)
{
	return ((  ARSessionU5BU5D_t59BB2CF66CA69B5754D409F8589E8ECB48BF0C7E* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_mE570B614F68E0A19BD5F65061CDA9BEE6EDBD159_gshared)(method);
}
// System.String UnityEngine.Object::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_m29C3DA389E1AA2C1C48C9100F1E83EAE72772FDB (String_t* p0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.ARSession/<CheckAvailability>d__17::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CCheckAvailabilityU3Ed__17__ctor_m2E04DD874E65E37DE275AECFD351CD1239950CE3 (U3CCheckAvailabilityU3Ed__17_t60F7D023CEFAE9EA91E8CDB81293B9D984039D1B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.ARSession/<Install>d__18::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CInstallU3Ed__18__ctor_m06E7BA1501487BDB6FFEAB48FA87C855A5E1A7DE (U3CInstallU3Ed__18_t57C93156E2C9C00B61AC295C86B51B88C8561566 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>::CreateSubsystemIfNecessary()
inline void SubsystemLifecycleManager_2_CreateSubsystemIfNecessary_m2F891BFFDB630974126B497C64236D6829512C40 (SubsystemLifecycleManager_2_t166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemLifecycleManager_2_t166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3 *, const RuntimeMethod*))SubsystemLifecycleManager_2_CreateSubsystemIfNecessary_mA14FBB6F49F5E6A16B3675A839828DA593DAA98D_gshared)(__this, method);
}
// System.Collections.IEnumerator UnityEngine.XR.ARFoundation.ARSession::Initialize()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ARSession_Initialize_mB23569D59077BAF767A502C71EBCEEB16197F574 (ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.ARSession/<Initialize>d__20::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__20__ctor_m8868807E89B676990DA6308C120C03B31B2F73F8 (U3CInitializeU3Ed__20_t9A81C14367242A53C21B440CCA714B3C378E60BF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_running()
extern "C" IL2CPP_METHOD_ATTR bool XRSessionSubsystem_get_running_m232754CAC70AAC3E051F0607A1B884CB06D80E8C (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method);
// UnityEngine.ScreenOrientation UnityEngine.Screen::get_orientation()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_orientation_m7977C7ECC2E3F22BB5DF7661951843FCC7E645B0 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::set_screenOrientation(UnityEngine.ScreenOrientation)
extern "C" IL2CPP_METHOD_ATTR void XRSessionUpdateParams_set_screenOrientation_m7C20FD52988E0F21604700B5CDA93FBA63DD28C6 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150 (const RuntimeMethod* method);
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Vector2Int__ctor_m501C34762BA7ECDDCFC25C19A4B9C93BC15004E1 (Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::set_screenDimensions(UnityEngine.Vector2Int)
extern "C" IL2CPP_METHOD_ATTR void XRSessionUpdateParams_set_screenDimensions_m41570268847916BA02DD2427BDDB08B3D466A905 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
extern "C" IL2CPP_METHOD_ATTR void XRSessionSubsystem_Update_m168E0641976ED5CD2084BD32692044A2D361B945 (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  p0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_trackingState()
extern "C" IL2CPP_METHOD_ATTR int32_t XRSessionSubsystem_get_trackingState_m6CEDC16CB9B224A0302A83BC2C22FC4C0905EB30 (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::OnApplicationPause()
extern "C" IL2CPP_METHOD_ATTR void XRSessionSubsystem_OnApplicationPause_mE53A32290C253F808E5B14A11B7917286E86B08A (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::OnApplicationResume()
extern "C" IL2CPP_METHOD_ATTR void XRSessionSubsystem_OnApplicationResume_m4103D0866A4152C9A52E52A306D85EBAD8405F2F (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>::OnDisable()
inline void SubsystemLifecycleManager_2_OnDisable_m3FDAA1FFCE3D14EBE1DC9776D64FD792ACF28412 (SubsystemLifecycleManager_2_t166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemLifecycleManager_2_t166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3 *, const RuntimeMethod*))SubsystemLifecycleManager_2_OnDisable_m25006859B7FEE85010D68C57CE9D2C1F982C98D6_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>::OnDestroy()
inline void SubsystemLifecycleManager_2_OnDestroy_mAF4A50B01BDBF5EBCF7841E9FC52718D51222317 (SubsystemLifecycleManager_2_t166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemLifecycleManager_2_t166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3 *, const RuntimeMethod*))SubsystemLifecycleManager_2_OnDestroy_m66F15685F03F120643E52A0A31D652A7A8E4C06F_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>::.ctor()
inline void SubsystemLifecycleManager_2__ctor_m9DA5E4AAF458FD649E821445CA4C9CDEBB6D7C93 (SubsystemLifecycleManager_2_t166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemLifecycleManager_2_t166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3 *, const RuntimeMethod*))SubsystemLifecycleManager_2__ctor_m0654A5B287B1F79A654C5EBCA3D2B846860D7623_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::GetAvailabilityAsync()
extern "C" IL2CPP_METHOD_ATTR Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * XRSessionSubsystem_GetAvailabilityAsync_mE1444BD33C0A1EAD4982FC0AE64D1251635487ED (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method);
// !0 UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>::get_result()
inline int32_t Promise_1_get_result_mD780D5F7F8042B92389DCA99E58D379C4898C256 (Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B *, const RuntimeMethod*))Promise_1_get_result_m369355E10FC5D95CDE097DD715AC0E18DA725AFB_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.SessionAvailabilityExtensions::IsSupported(UnityEngine.XR.ARSubsystems.SessionAvailability)
extern "C" IL2CPP_METHOD_ATTR bool SessionAvailabilityExtensions_IsSupported_mA0E371DBCB2DB69E066EA4DCADC76721AAD04ABA (int32_t p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.SessionAvailabilityExtensions::IsInstalled(UnityEngine.XR.ARSubsystems.SessionAvailability)
extern "C" IL2CPP_METHOD_ATTR bool SessionAvailabilityExtensions_IsInstalled_m30AE248D1BBF1C669EE32FE5976A35C16152DC9C (int32_t p0, const RuntimeMethod* method);
// !0 UnityEngine.Experimental.Subsystem`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>::get_SubsystemDescriptor()
inline XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * Subsystem_1_get_SubsystemDescriptor_m7D9A1F7F1631768F5DE2EC7DA7FC3FCCA24336C7 (Subsystem_1_t30A0E0214407A620CECF452A54D6676F5A6574B9 * __this, const RuntimeMethod* method)
{
	return ((  XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * (*) (Subsystem_1_t30A0E0214407A620CECF452A54D6676F5A6574B9 *, const RuntimeMethod*))Subsystem_1_get_SubsystemDescriptor_mD96F2CEA4EF5CB4A047906E686D94D50BB0E1C69_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::get_supportsInstall()
extern "C" IL2CPP_METHOD_ATTR bool XRSessionSubsystemDescriptor_get_supportsInstall_m2AA89682007FE1D8BB811FD152DE326FF7BB5A99 (XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.XR.ARFoundation.ARSession::CheckAvailability()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ARSession_CheckAvailability_m00CF59963BF0112BA01A706D1835F682C2D364C9 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C" IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARFoundation.ARSession::get_attemptUpdate()
extern "C" IL2CPP_METHOD_ATTR bool ARSession_get_attemptUpdate_mEC43EE5443F783D3B8A0CDB802990AB48BC53424 (ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.XR.ARFoundation.ARSession::Install()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ARSession_Install_m8E803A370473F826186C07040596F5C1D6DC3A53 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.ARSession::StartSubsystem()
extern "C" IL2CPP_METHOD_ATTR void ARSession_StartSubsystem_mEF96EEA17C85A58E001487B2BF31263B68F9C6D5 (ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::InstallAsync()
extern "C" IL2CPP_METHOD_ATTR Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * XRSessionSubsystem_InstallAsync_m35E08EF7130491F2E498C990109FA7323A2ABCCC (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method);
// !0 UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>::get_result()
inline int32_t Promise_1_get_result_m68CA6282F7A775424E9C70D3E9AE1F1DB9D6D53F (Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 *, const RuntimeMethod*))Promise_1_get_result_m369355E10FC5D95CDE097DD715AC0E18DA725AFB_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p0, bool p1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.ARSessionOrigin::MakeContentAppearAt(UnityEngine.Transform,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void ARSessionOrigin_MakeContentAppearAt_m1B12B238B3E4687822E05DAA2B98CF76D2DD1905 (ARSessionOrigin_tD635899BA0B41E9F3CE205D105ED47637E2AB0E2 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___content0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.ARSessionOrigin::MakeContentAppearAt(UnityEngine.Transform,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void ARSessionOrigin_MakeContentAppearAt_m19B910A50B06642F43303C33E0B86AF39DA322CD (ARSessionOrigin_tD635899BA0B41E9F3CE205D105ED47637E2AB0E2 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___content0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::get_contentOffsetTransform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ARSessionOrigin_get_contentOffsetTransform_mD50A9BCBD6EF6E22A4FC6C0B57ED3C301588ADBD (ARSessionOrigin_tD635899BA0B41E9F3CE205D105ED47637E2AB0E2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.ARSessionOrigin::set_trackablesParent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void ARSessionOrigin_set_trackablesParent_m13A5C682FCBB70C31C9316E91691EF8953441C3C (ARSessionOrigin_tD635899BA0B41E9F3CE205D105ED47637E2AB0E2 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::get_trackablesParent()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ARSessionOrigin_get_trackablesParent_mF5ECBEC772E556D80D8FBF1D80BEA90FBD6EF05F (ARSessionOrigin_tD635899BA0B41E9F3CE205D105ED47637E2AB0E2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::get_camera()
extern "C" IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ARSessionOrigin_get_camera_m042ECD1B468E6F2EDA4199841CDA7007BC385F27 (ARSessionOrigin_tD635899BA0B41E9F3CE205D105ED47637E2AB0E2 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpatialTracking.TrackedPoseDriver>()
inline TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * Component_GetComponent_TisTrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A_m9D292B4E1EA83C0976E8950376D313E65A8A7E67 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::get_UseRelativeTransform()
extern "C" IL2CPP_METHOD_ATTR bool TrackedPoseDriver_get_UseRelativeTransform_mCF2BECEE5B73345DAF1FF0F4781CBFF2C5CF2BEC (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_mDA6D2E63A498C8A9AB9A11DD7EA3B96567390C70 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p1, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::get_originPose()
extern "C" IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  TrackedPoseDriver_get_originPose_m15486C45FA6B5B84DE98275AA1DD9ED9467D9C1D (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.XR.ARFoundation.TransformExtensions::TransformPose(UnityEngine.Transform,UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  TransformExtensions_TransformPose_m677CE84C622BD23C3DDB2953DDB820E1934B0144 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  p1, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.Pose::get_identity()
extern "C" IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  Pose_get_identity_m19458DF84EAADD5E9302CABDC385B97DC91ECCBF (const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARSessionOrigin::GetCameraOriginPose()
extern "C" IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ARSessionOrigin_GetCameraOriginPose_m9EB7958C94053A5DA209DA66008248E84CF31A32 (ARSessionOrigin_tD635899BA0B41E9F3CE205D105ED47637E2AB0E2 * __this, const RuntimeMethod* method);
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
// System.Void ARButton1::Start()
extern "C" IL2CPP_METHOD_ATTR void ARButton1_Start_mB3370996E36F68A6BA386BDB9FF77A812C4C07F0 (ARButton1_t09208D2FE593BBF36E5648836272C02E4E61F48D * __this, const RuntimeMethod* method)
{
	{
		__this->set_remainingDebounceTime_5((0.0f));
		return;
	}
}
// System.Void ARButton1::Update()
extern "C" IL2CPP_METHOD_ATTR void ARButton1_Update_m14579318A53F90A70A8155C8C2FF2EA20932C195 (ARButton1_t09208D2FE593BBF36E5648836272C02E4E61F48D * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_remainingDebounceTime_5();
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_001f;
		}
	}
	{
		float L_1 = __this->get_remainingDebounceTime_5();
		float L_2 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_remainingDebounceTime_5(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
	}

IL_001f:
	{
		return;
	}
}
// System.Void ARButton1::OnTouch()
extern "C" IL2CPP_METHOD_ATTR void ARButton1_OnTouch_mF69F3083BB2405FD8682434E26B7DBB59F262B7C (ARButton1_t09208D2FE593BBF36E5648836272C02E4E61F48D * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_remainingDebounceTime_5();
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_003d;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_3), (0.0f), (0.1f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_Translate_m0F354939D5084DDFF6B9902E62D3DCA7A3B53EA3(L_2, L_3, /*hidden argument*/NULL);
		float L_4 = __this->get_debounceTime_4();
		__this->set_remainingDebounceTime_5(L_4);
	}

IL_003d:
	{
		return;
	}
}
// System.Void ARButton1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ARButton1__ctor_m557CE34C660045BA6580276FAC6C0E9BBD379144 (ARButton1_t09208D2FE593BBF36E5648836272C02E4E61F48D * __this, const RuntimeMethod* method)
{
	{
		__this->set_debounceTime_4((0.3f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void ARButton2::OnTouch()
extern "C" IL2CPP_METHOD_ATTR void ARButton2_OnTouch_mA58EB57E6F4F22A9A5DEDA21907F7C726E373C78 (ARButton2_tE314BFE8581C8F25E1BE86557D47AC3E600374E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARButton2_OnTouch_mA58EB57E6F4F22A9A5DEDA21907F7C726E373C78_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_messageText_4();
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_1, (bool)1, /*hidden argument*/NULL);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_2 = __this->get_messageText_4();
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteral5727D140A7AC4EAB885DD48F310E898DFBF3D746);
		return;
	}
}
// System.Void ARButton2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ARButton2__ctor_m1046C56374A3F100082F5D269B73E07837887346 (ARButton2_tE314BFE8581C8F25E1BE86557D47AC3E600374E6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void ARButtonManager::Start()
extern "C" IL2CPP_METHOD_ATTR void ARButtonManager_Start_m8FEDD14C014B0CB725EC44E3B96146A9CD6EE170 (ARButtonManager_t7EB96079B3DCC57D6B61DC5C01094FA30CCDD5A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARButtonManager_Start_m8FEDD14C014B0CB725EC44E3B96146A9CD6EE170_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlaceGameBoard_t8091E3D27BDFE9409A418B1DFE0E2D26E187F90A * L_0 = Component_GetComponent_TisPlaceGameBoard_t8091E3D27BDFE9409A418B1DFE0E2D26E187F90A_mCEF859C3BC828C724206F862271DBA3696D86DD6(__this, /*hidden argument*/Component_GetComponent_TisPlaceGameBoard_t8091E3D27BDFE9409A418B1DFE0E2D26E187F90A_mCEF859C3BC828C724206F862271DBA3696D86DD6_RuntimeMethod_var);
		__this->set_placeGameBoard_5(L_0);
		return;
	}
}
// System.Void ARButtonManager::Update()
extern "C" IL2CPP_METHOD_ATTR void ARButtonManager_Update_m1F441A250A7B6718AD8BE1CD0FB8BABC885DEB31 (ARButtonManager_t7EB96079B3DCC57D6B61DC5C01094FA30CCDD5A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARButtonManager_Update_m1F441A250A7B6718AD8BE1CD0FB8BABC885DEB31_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Touch_t806752C775BA713A91B6588A07CA98417CABC003  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		int32_t L_0 = Input_get_touchCount_m2A22A8E963E14F1221F768412663C8D11F806CD6(/*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		Touch_t806752C775BA713A91B6588A07CA98417CABC003  L_1 = Input_GetTouch_m1ABE5E9866FD4C5FDFC5DD8FF4E7DCEDE2DD9313(0, /*hidden argument*/NULL);
		V_2 = L_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = Touch_get_position_mC0913727A83103C5E2B56A5D76AB8F911A79D1E9((Touch_t806752C775BA713A91B6588A07CA98417CABC003 *)(&V_2), /*hidden argument*/NULL);
		V_0 = L_2;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_3 = __this->get_arCamera_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_6 = Camera_ScreenPointToRay_m27638E78502DB6D6D7113F81AF7C210773B828F3(L_3, L_5, /*hidden argument*/NULL);
		bool L_7 = Physics_Raycast_mE1590EE4E2DC950A9FC2437E98EE8CD2EC2DEE67(L_6, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), (100.0f), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005f;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = RaycastHit_get_transform_m3C0BEE7439CA37F82FD5216143B92BF32F995279((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_8, /*hidden argument*/NULL);
		bool L_10 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_9, _stringLiteral239A3C2F25D64246C5E6BCE1C630A0AE1CA9462A, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = RaycastHit_get_transform_m3C0BEE7439CA37F82FD5216143B92BF32F995279((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_11);
		RuntimeObject* L_12 = Component_GetComponent_TisOnTouch3D_t1B7024D522D88EB871840E2DEA458F2DFAF0E2D2_m97E02014BB00D2533DD18DB201452FCF7CE8A035(L_11, /*hidden argument*/Component_GetComponent_TisOnTouch3D_t1B7024D522D88EB871840E2DEA458F2DFAF0E2D2_m97E02014BB00D2533DD18DB201452FCF7CE8A035_RuntimeMethod_var);
		NullCheck(L_12);
		InterfaceActionInvoker0::Invoke(0 /* System.Void OnTouch3D::OnTouch() */, OnTouch3D_t1B7024D522D88EB871840E2DEA458F2DFAF0E2D2_il2cpp_TypeInfo_var, L_12);
	}

IL_005f:
	{
		return;
	}
}
// System.Void ARButtonManager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ARButtonManager__ctor_m99C5F84B85F6952A926DCAE3E7C19757DA66D340 (ARButtonManager_t7EB96079B3DCC57D6B61DC5C01094FA30CCDD5A8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void BallController::Start()
extern "C" IL2CPP_METHOD_ATTR void BallController_Start_m405732FD42FA3034EB64668BA2A2BDAA5E4E2999 (BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallController_Start_m405732FD42FA3034EB64668BA2A2BDAA5E4E2999_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * L_0 = (List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D *)il2cpp_codegen_object_new(List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D_il2cpp_TypeInfo_var);
		List_1__ctor_m0046B0A356552D7B951C2CEEE5F1375DAF72054A(L_0, /*hidden argument*/List_1__ctor_m0046B0A356552D7B951C2CEEE5F1375DAF72054A_RuntimeMethod_var);
		__this->set_balls_8(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = Transform_GetEnumerator_mE98B6C5F644AE362EC1D58C10506327D6A5878FC(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0031;
		}

IL_0019:
		{
			RuntimeObject* L_3 = V_0;
			NullCheck(L_3);
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_3);
			V_1 = ((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)CastclassClass((RuntimeObject*)L_4, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var));
			List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * L_5 = __this->get_balls_8();
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = V_1;
			NullCheck(L_5);
			List_1_Add_mEB0CDED8A9ADCC0F235881A5D34D41085EC4780C(L_5, L_6, /*hidden argument*/List_1_Add_mEB0CDED8A9ADCC0F235881A5D34D41085EC4780C_RuntimeMethod_var);
		}

IL_0031:
		{
			RuntimeObject* L_7 = V_0;
			NullCheck(L_7);
			bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_0019;
			}
		}

IL_0039:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_9 = V_0;
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_10 = V_2;
			if (!L_10)
			{
				goto IL_004b;
			}
		}

IL_0045:
		{
			RuntimeObject* L_11 = V_2;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_11);
		}

IL_004b:
		{
			IL2CPP_END_FINALLY(59)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004c:
	{
		List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * L_12 = (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)il2cpp_codegen_object_new(List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE_il2cpp_TypeInfo_var);
		List_1__ctor_m40902128B21C9D7174C484E5264CF392E07EC258(L_12, /*hidden argument*/List_1__ctor_m40902128B21C9D7174C484E5264CF392E07EC258_RuntimeMethod_var);
		__this->set_popped_9(L_12);
		V_3 = 0;
		goto IL_006b;
	}

IL_005b:
	{
		List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * L_13 = __this->get_popped_9();
		NullCheck(L_13);
		List_1_Add_m7C43359DBAA0872D17EFDD3554B9BCCE557DC775(L_13, (bool)0, /*hidden argument*/List_1_Add_m7C43359DBAA0872D17EFDD3554B9BCCE557DC775_RuntimeMethod_var);
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_006b:
	{
		int32_t L_15 = V_3;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)9))))
		{
			goto IL_005b;
		}
	}
	{
		float L_16 = __this->get_loopTime_13();
		__this->set_loopCount_10(L_16);
		__this->set_popCount_11((0.0f));
		__this->set_score_15(0);
		__this->set_remainLife_16(3);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_17 = __this->get_scoreText_4();
		NullCheck(L_17);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_18, (bool)1, /*hidden argument*/NULL);
		BallController_UpdateScore_mB2415FF436B1D7D3D9A6D828272ADC5CD3A43C11(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = __this->get_startButton_6();
		NullCheck(L_19);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_19, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BallController::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void BallController_OnEnable_m2B7717595AF50DEFC33E26B1BE9E3F0ECF9B5C82 (BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB * __this, const RuntimeMethod* method)
{
	{
		BallController_Start_m405732FD42FA3034EB64668BA2A2BDAA5E4E2999(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BallController::Update()
extern "C" IL2CPP_METHOD_ATTR void BallController_Update_m7DE367F95D3994A02B7E7F5C46AE97874E809CEC (BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_loopCount_10();
		float L_1 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_loopCount_10(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		float L_2 = __this->get_loopCount_10();
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_004d;
		}
	}
	{
		float L_3 = __this->get_loopTime_13();
		__this->set_loopCount_10(L_3);
		float L_4 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384((1.0f), (9.0f), /*hidden argument*/NULL);
		__this->set_popIndex_14((((int32_t)((int32_t)(int32_t)L_4))));
		int32_t L_5 = __this->get_popIndex_14();
		BallController_BallPop_mC4ABF3C8C2F7A37F4DB3FF60C515EC2DF8C86570(__this, L_5, /*hidden argument*/NULL);
	}

IL_004d:
	{
		float L_6 = __this->get_popCount_11();
		if ((!(((float)L_6) > ((float)(0.0f)))))
		{
			goto IL_0086;
		}
	}
	{
		float L_7 = __this->get_popCount_11();
		float L_8 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_popCount_11(((float)il2cpp_codegen_subtract((float)L_7, (float)L_8)));
		float L_9 = __this->get_popCount_11();
		if ((!(((float)L_9) <= ((float)(0.0f)))))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_10 = __this->get_popIndex_14();
		BallController_BallReset_mFC3777D33778E31E6031A83045D9C3A97A3B43A8(__this, L_10, (bool)0, /*hidden argument*/NULL);
	}

IL_0086:
	{
		return;
	}
}
// System.Void BallController::BallPop(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void BallController_BallPop_mC4ABF3C8C2F7A37F4DB3FF60C515EC2DF8C86570 (BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB * __this, int32_t ___popIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallController_BallPop_mC4ABF3C8C2F7A37F4DB3FF60C515EC2DF8C86570_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___popIndex0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___popIndex0;
		if ((((int32_t)L_1) <= ((int32_t)8)))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral31E4A097644F6472E57F703619D8C22C2D03BEC4, /*hidden argument*/NULL);
	}

IL_0012:
	{
		List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * L_2 = __this->get_popped_9();
		int32_t L_3 = ___popIndex0;
		NullCheck(L_2);
		bool L_4 = List_1_get_Item_m553C06F3C7AF691CFB4457CFAFB109DDCB4ED9B3(L_2, L_3, /*hidden argument*/List_1_get_Item_m553C06F3C7AF691CFB4457CFAFB109DDCB4ED9B3_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0069;
		}
	}
	{
		float L_5 = __this->get_popDuration_12();
		__this->set_popCount_11(L_5);
		List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * L_6 = __this->get_balls_8();
		int32_t L_7 = ___popIndex0;
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = List_1_get_Item_m88FE4B6F43A2CD95BB9ECF8D801F206618FFFFB8(L_6, L_7, /*hidden argument*/List_1_get_Item_m88FE4B6F43A2CD95BB9ECF8D801F206618FFFFB8_RuntimeMethod_var);
		NullCheck(L_8);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_9, /*hidden argument*/NULL);
		float L_11 = __this->get_popDistance_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_12), (0.0f), L_11, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_Translate_m0F354939D5084DDFF6B9902E62D3DCA7A3B53EA3(L_10, L_12, /*hidden argument*/NULL);
		List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * L_13 = __this->get_popped_9();
		int32_t L_14 = ___popIndex0;
		NullCheck(L_13);
		List_1_set_Item_m0E0D8F10934225F83BFBD84DEA568F92CD75DDCE(L_13, L_14, (bool)1, /*hidden argument*/List_1_set_Item_m0E0D8F10934225F83BFBD84DEA568F92CD75DDCE_RuntimeMethod_var);
	}

IL_0069:
	{
		return;
	}
}
// System.Void BallController::BallReset(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void BallController_BallReset_mFC3777D33778E31E6031A83045D9C3A97A3B43A8 (BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB * __this, int32_t ___popIndex0, bool ___hit1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallController_BallReset_mFC3777D33778E31E6031A83045D9C3A97A3B43A8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___popIndex0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___popIndex0;
		if ((((int32_t)L_1) <= ((int32_t)8)))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral31E4A097644F6472E57F703619D8C22C2D03BEC4, /*hidden argument*/NULL);
	}

IL_0012:
	{
		List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * L_2 = __this->get_popped_9();
		int32_t L_3 = ___popIndex0;
		NullCheck(L_2);
		bool L_4 = List_1_get_Item_m553C06F3C7AF691CFB4457CFAFB109DDCB4ED9B3(L_2, L_3, /*hidden argument*/List_1_get_Item_m553C06F3C7AF691CFB4457CFAFB109DDCB4ED9B3_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0090;
		}
	}
	{
		bool L_5 = ___hit1;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_6 = __this->get_score_15();
		__this->set_score_15(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		goto IL_0041;
	}

IL_0033:
	{
		int32_t L_7 = __this->get_remainLife_16();
		__this->set_remainLife_16(((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)));
	}

IL_0041:
	{
		BallController_UpdateScore_mB2415FF436B1D7D3D9A6D828272ADC5CD3A43C11(__this, /*hidden argument*/NULL);
		__this->set_popCount_11((0.0f));
		List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * L_8 = __this->get_balls_8();
		int32_t L_9 = ___popIndex0;
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = List_1_get_Item_m88FE4B6F43A2CD95BB9ECF8D801F206618FFFFB8(L_8, L_9, /*hidden argument*/List_1_get_Item_m88FE4B6F43A2CD95BB9ECF8D801F206618FFFFB8_RuntimeMethod_var);
		NullCheck(L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_11, /*hidden argument*/NULL);
		float L_13 = __this->get_popDistance_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_14), (0.0f), ((-L_13)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_Translate_m0F354939D5084DDFF6B9902E62D3DCA7A3B53EA3(L_12, L_14, /*hidden argument*/NULL);
		List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * L_15 = __this->get_popped_9();
		int32_t L_16 = ___popIndex0;
		NullCheck(L_15);
		List_1_set_Item_m0E0D8F10934225F83BFBD84DEA568F92CD75DDCE(L_15, L_16, (bool)0, /*hidden argument*/List_1_set_Item_m0E0D8F10934225F83BFBD84DEA568F92CD75DDCE_RuntimeMethod_var);
	}

IL_0090:
	{
		return;
	}
}
// System.Void BallController::UpdateScore()
extern "C" IL2CPP_METHOD_ATTR void BallController_UpdateScore_mB2415FF436B1D7D3D9A6D828272ADC5CD3A43C11 (BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallController_UpdateScore_mB2415FF436B1D7D3D9A6D828272ADC5CD3A43C11_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_remainLife_16();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		BallController_GameOver_mB457E78E7F8597E370F6769452021FB4B3C140EB(__this, /*hidden argument*/NULL);
	}

IL_000f:
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_1 = __this->get_scoreText_4();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralF2B514B25684DE761EF0E0E4F386F3D5B3E68033);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralF2B514B25684DE761EF0E0E4F386F3D5B3E68033);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		int32_t L_5 = __this->get_score_15();
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral8F7BE0B2815F0D5F0175578D148359ACD80D4A57);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral8F7BE0B2815F0D5F0175578D148359ACD80D4A57);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_8;
		int32_t L_10 = __this->get_remainLife_16();
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_12);
		String_t* L_13 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_9, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_13);
		return;
	}
}
// System.Void BallController::GameOver()
extern "C" IL2CPP_METHOD_ATTR void BallController_GameOver_mB457E78E7F8597E370F6769452021FB4B3C140EB (BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallController_GameOver_mB457E78E7F8597E370F6769452021FB4B3C140EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_messageText_5();
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_1, (bool)1, /*hidden argument*/NULL);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_2 = __this->get_messageText_5();
		int32_t L_3 = __this->get_score_15();
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralF2C471D390D4680C1EBF5AB59814E011DC5FDB4D, L_5, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_6);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_7, (bool)0, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_startButton_6();
		NullCheck(L_8);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_8, (bool)1, /*hidden argument*/NULL);
		__this->set_score_15(0);
		__this->set_remainLife_16(3);
		return;
	}
}
// System.Void BallController::ConfigDifficulty(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void BallController_ConfigDifficulty_m8AB02B25FFCA92597F76DE54168B20FECE323B4D (BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB * __this, float ___t10, float ___t21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallController_ConfigDifficulty_m8AB02B25FFCA92597F76DE54168B20FECE323B4D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___t10;
		__this->set_loopTime_13(L_0);
		float L_1 = ___t21;
		__this->set_popDuration_12(L_1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral4A3BBDAB52FE5BCDBFB18F184652DBAA28C4DD80);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral4A3BBDAB52FE5BCDBFB18F184652DBAA28C4DD80);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		float L_5 = ___t10;
		float L_6 = L_5;
		RuntimeObject * L_7 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralA2A5FCFF23681B30836B2F48243F3971AA380408);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralA2A5FCFF23681B30836B2F48243F3971AA380408);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_8;
		float L_10 = ___t21;
		float L_11 = L_10;
		RuntimeObject * L_12 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_12);
		String_t* L_13 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_13, /*hidden argument*/NULL);
		BallController_Start_m405732FD42FA3034EB64668BA2A2BDAA5E4E2999(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BallController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BallController__ctor_m55701F03B0F911828F5BD0AF22795C6488791176 (BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void BallMover::Start()
extern "C" IL2CPP_METHOD_ATTR void BallMover_Start_m1C73A4E8C02EE8F685F700EE237E990600C7D06B (BallMover_t696C670720FE1CD8219B87A8278193B52C1E9413 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallMover_Start_m1C73A4E8C02EE8F685F700EE237E990600C7D06B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_2, /*hidden argument*/NULL);
		__this->set_father_8(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_father_8();
		NullCheck(L_4);
		BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB * L_5 = GameObject_GetComponent_TisBallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB_m1917A2D55D0658361EDAD097677276948BC3B157(L_4, /*hidden argument*/GameObject_GetComponent_TisBallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB_m1917A2D55D0658361EDAD097677276948BC3B157_RuntimeMethod_var);
		__this->set_fathersWond_9(L_5);
		return;
	}
}
// System.Void BallMover::Update()
extern "C" IL2CPP_METHOD_ATTR void BallMover_Update_mA25147E36E400D01175DF38D0F42139C9E991D57 (BallMover_t696C670720FE1CD8219B87A8278193B52C1E9413 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void BallMover::OnTouch()
extern "C" IL2CPP_METHOD_ATTR void BallMover_OnTouch_m8C57E818CEC22F4A597C2F7C26F61F35774C544E (BallMover_t696C670720FE1CD8219B87A8278193B52C1E9413 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallMover_OnTouch_m8C57E818CEC22F4A597C2F7C26F61F35774C544E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = Transform_GetSiblingIndex_m6FEF9F4DAB8BEAB964A806F3CEE387C1F462B4C1(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB * L_2 = __this->get_fathersWond_9();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		BallController_BallReset_mFC3777D33778E31E6031A83045D9C3A97A3B43A8(L_2, L_3, (bool)1, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralCF172521BC7A24A2B0AD76B71B168015620E6043, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BallMover::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BallMover__ctor_m7FD26EC6B58EB19B8D51B5D72339ACBF577C8BB7 (BallMover_t696C670720FE1CD8219B87A8278193B52C1E9413 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void DisappearingText::Start()
extern "C" IL2CPP_METHOD_ATTR void DisappearingText_Start_mA1C69903F41C978B02091CE6E5179DEDC7E694F0 (DisappearingText_t81FE874B6F64EE4B044980D452139CBC79CB1B15 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_displayTime_4();
		__this->set_timeRemaining_5(L_0);
		return;
	}
}
// System.Void DisappearingText::Update()
extern "C" IL2CPP_METHOD_ATTR void DisappearingText_Update_m50C04D550BCA5C49701F6A707C2C4B422CE940C5 (DisappearingText_t81FE874B6F64EE4B044980D452139CBC79CB1B15 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_timeRemaining_5();
		float L_1 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_timeRemaining_5(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		float L_2 = __this->get_timeRemaining_5();
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_0037;
		}
	}
	{
		float L_3 = __this->get_displayTime_4();
		__this->set_timeRemaining_5(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_4, (bool)0, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void DisappearingText::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DisappearingText__ctor_m0031D0A830C578B201D9621657C7A6A4C69FF0B3 (DisappearingText_t81FE874B6F64EE4B044980D452139CBC79CB1B15 * __this, const RuntimeMethod* method)
{
	{
		__this->set_displayTime_4((1.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void PlaceGameBoard::Start()
extern "C" IL2CPP_METHOD_ATTR void PlaceGameBoard_Start_mEDEC5D66DD3EA3BBE97FC6169BCB05021733C7BC (PlaceGameBoard_t8091E3D27BDFE9409A418B1DFE0E2D26E187F90A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlaceGameBoard_Start_mEDEC5D66DD3EA3BBE97FC6169BCB05021733C7BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7 * L_0 = Component_GetComponent_TisARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7_m71DCE7466C02DBA59A1618314D7FA98D931BD522(__this, /*hidden argument*/Component_GetComponent_TisARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7_m71DCE7466C02DBA59A1618314D7FA98D931BD522_RuntimeMethod_var);
		__this->set_raycastManager_5(L_0);
		ARPlaneManager_tC2613B8C888EBC3F92BF68E60F0A3E4DCCFAD69A * L_1 = Component_GetComponent_TisARPlaneManager_tC2613B8C888EBC3F92BF68E60F0A3E4DCCFAD69A_m455AA97B2C4D63D9097F33F6D48444A891B5234A(__this, /*hidden argument*/Component_GetComponent_TisARPlaneManager_tC2613B8C888EBC3F92BF68E60F0A3E4DCCFAD69A_m455AA97B2C4D63D9097F33F6D48444A891B5234A_RuntimeMethod_var);
		__this->set_planeManager_6(L_1);
		return;
	}
}
// System.Void PlaceGameBoard::Update()
extern "C" IL2CPP_METHOD_ATTR void PlaceGameBoard_Update_m900B9397DFF606D214BD134B653138411F62D330 (PlaceGameBoard_t8091E3D27BDFE9409A418B1DFE0E2D26E187F90A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlaceGameBoard_Update_m900B9397DFF606D214BD134B653138411F62D330_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset(&V_0, 0, sizeof(V_0));
	List_1_tE22AC27B04238DDEA6B873A77D0222DA9B480F52 * V_1 = NULL;
	Touch_t806752C775BA713A91B6588A07CA98417CABC003  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  V_3;
	memset(&V_3, 0, sizeof(V_3));
	ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		bool L_0 = __this->get_placed_7();
		if (L_0)
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_1 = Input_get_touchCount_m2A22A8E963E14F1221F768412663C8D11F806CD6(/*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		Touch_t806752C775BA713A91B6588A07CA98417CABC003  L_2 = Input_GetTouch_m1ABE5E9866FD4C5FDFC5DD8FF4E7DCEDE2DD9313(0, /*hidden argument*/NULL);
		V_2 = L_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = Touch_get_position_mC0913727A83103C5E2B56A5D76AB8F911A79D1E9((Touch_t806752C775BA713A91B6588A07CA98417CABC003 *)(&V_2), /*hidden argument*/NULL);
		V_0 = L_3;
		List_1_tE22AC27B04238DDEA6B873A77D0222DA9B480F52 * L_4 = (List_1_tE22AC27B04238DDEA6B873A77D0222DA9B480F52 *)il2cpp_codegen_object_new(List_1_tE22AC27B04238DDEA6B873A77D0222DA9B480F52_il2cpp_TypeInfo_var);
		List_1__ctor_mA52EAAB235BDE102E8518F30412F14422B05C9E0(L_4, /*hidden argument*/List_1__ctor_mA52EAAB235BDE102E8518F30412F14422B05C9E0_RuntimeMethod_var);
		V_1 = L_4;
		ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7 * L_5 = __this->get_raycastManager_5();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = V_0;
		List_1_tE22AC27B04238DDEA6B873A77D0222DA9B480F52 * L_7 = V_1;
		NullCheck(L_5);
		bool L_8 = ARRaycastManager_Raycast_mCBD053A6B0264981FCBF4244825A47F1DE0696F6(L_5, L_6, L_7, 1, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0088;
		}
	}
	{
		List_1_tE22AC27B04238DDEA6B873A77D0222DA9B480F52 * L_9 = V_1;
		NullCheck(L_9);
		ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC  L_10 = List_1_get_Item_mFA1DFF7102266DFFCA6630C79C553225EE591AAE(L_9, 0, /*hidden argument*/List_1_get_Item_mFA1DFF7102266DFFCA6630C79C553225EE591AAE_RuntimeMethod_var);
		V_4 = L_10;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_11 = ARRaycastHit_get_pose_m5CCFFED6C4A101EA42083A8661956A2B4B4C4A0D((ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC *)(&V_4), /*hidden argument*/NULL);
		V_3 = L_11;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = __this->get_gameBoard_4();
		NullCheck(L_12);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_12, (bool)1, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = __this->get_gameBoard_4();
		NullCheck(L_13);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_13, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_15 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = L_15.get_position_0();
		NullCheck(L_14);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_14, L_16, /*hidden argument*/NULL);
		__this->set_placed_7((bool)1);
		ARPlaneManager_tC2613B8C888EBC3F92BF68E60F0A3E4DCCFAD69A * L_17 = __this->get_planeManager_6();
		NullCheck(L_17);
		ARTrackableManager_4_SetTrackablesActive_m04B8A0D1B72A834DA22B4E7389F7E0B3978903D2(L_17, (bool)0, /*hidden argument*/ARTrackableManager_4_SetTrackablesActive_m04B8A0D1B72A834DA22B4E7389F7E0B3978903D2_RuntimeMethod_var);
		return;
	}

IL_007c:
	{
		ARPlaneManager_tC2613B8C888EBC3F92BF68E60F0A3E4DCCFAD69A * L_18 = __this->get_planeManager_6();
		NullCheck(L_18);
		ARTrackableManager_4_SetTrackablesActive_m04B8A0D1B72A834DA22B4E7389F7E0B3978903D2(L_18, (bool)0, /*hidden argument*/ARTrackableManager_4_SetTrackablesActive_m04B8A0D1B72A834DA22B4E7389F7E0B3978903D2_RuntimeMethod_var);
	}

IL_0088:
	{
		return;
	}
}
// System.Void PlaceGameBoard::AllowMoveGameBoard()
extern "C" IL2CPP_METHOD_ATTR void PlaceGameBoard_AllowMoveGameBoard_mCFE2E953E743B711EF9F1415944248F2E59CD5C5 (PlaceGameBoard_t8091E3D27BDFE9409A418B1DFE0E2D26E187F90A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlaceGameBoard_AllowMoveGameBoard_mCFE2E953E743B711EF9F1415944248F2E59CD5C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_placed_7((bool)0);
		ARPlaneManager_tC2613B8C888EBC3F92BF68E60F0A3E4DCCFAD69A * L_0 = __this->get_planeManager_6();
		NullCheck(L_0);
		ARTrackableManager_4_SetTrackablesActive_m04B8A0D1B72A834DA22B4E7389F7E0B3978903D2(L_0, (bool)1, /*hidden argument*/ARTrackableManager_4_SetTrackablesActive_m04B8A0D1B72A834DA22B4E7389F7E0B3978903D2_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral63ABFCDE7273ABD8F7996B1A50D5B0CA54CF28D3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PlaceGameBoard::Placed()
extern "C" IL2CPP_METHOD_ATTR bool PlaceGameBoard_Placed_m927BB30C805404E79B6F29D47EEA9AD56BA8CFC7 (PlaceGameBoard_t8091E3D27BDFE9409A418B1DFE0E2D26E187F90A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_placed_7();
		return L_0;
	}
}
// System.Void PlaceGameBoard::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PlaceGameBoard__ctor_m9F889248F6295E6FF1112098E4744DEC6BD19266 (PlaceGameBoard_t8091E3D27BDFE9409A418B1DFE0E2D26E187F90A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Rotator::LateUpdate()
extern "C" IL2CPP_METHOD_ATTR void Rotator_LateUpdate_m8F9DB548F1E412803C7B83F33A0C85ECE11FAB9E (Rotator_t8E318BD1376632CD4EE2113010F16B4BC26E15A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rotator_LateUpdate_m8F9DB548F1E412803C7B83F33A0C85ECE11FAB9E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_1), (15.0f), (30.0f), (45.0f), /*hidden argument*/NULL);
		float L_2 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_m610B6793DCC2F987290D328942E649B5B7DE0F9A(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Rotator::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Rotator__ctor_m1529510FC18D463FF7B3D27951F78ED3BDE25E90 (Rotator_t8E318BD1376632CD4EE2113010F16B4BC26E15A8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void StartButton::Start()
extern "C" IL2CPP_METHOD_ATTR void StartButton_Start_mB9F4D5B0AF77000A09CB00656525167BCBD3A11A (StartButton_t90FFC983737848D23F33776967997408511D1352 * __this, const RuntimeMethod* method)
{
	{
		__this->set_remainingDebounceTime_8((0.0f));
		return;
	}
}
// System.Void StartButton::Update()
extern "C" IL2CPP_METHOD_ATTR void StartButton_Update_m2122453D662D233B3F0A9C8FCC06C752764068CF (StartButton_t90FFC983737848D23F33776967997408511D1352 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_remainingDebounceTime_8();
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_001f;
		}
	}
	{
		float L_1 = __this->get_remainingDebounceTime_8();
		float L_2 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_remainingDebounceTime_8(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
	}

IL_001f:
	{
		return;
	}
}
// System.Void StartButton::OnTouch()
extern "C" IL2CPP_METHOD_ATTR void StartButton_OnTouch_mCB99785481CCBB899B87E03D24EA00A9114662BE (StartButton_t90FFC983737848D23F33776967997408511D1352 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StartButton_OnTouch_mCB99785481CCBB899B87E03D24EA00A9114662BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_6, (bool)0, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = __this->get_objectToStart_4();
		NullCheck(L_7);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_7, (bool)1, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_objectToStart_4();
		NullCheck(L_8);
		BallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB * L_9 = GameObject_GetComponent_TisBallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB_m1917A2D55D0658361EDAD097677276948BC3B157(L_8, /*hidden argument*/GameObject_GetComponent_TisBallController_t619B134AED97BB2EC8F511A7DCDC62EAF1EF80EB_m1917A2D55D0658361EDAD097677276948BC3B157_RuntimeMethod_var);
		float L_10 = __this->get_loopTime_7();
		float L_11 = __this->get_popDuration_6();
		NullCheck(L_9);
		BallController_ConfigDifficulty_m8AB02B25FFCA92597F76DE54168B20FECE323B4D(L_9, L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StartButton::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StartButton__ctor_mC820149893E504C7BBB9127E9D15AE651C6C62F5 (StartButton_t90FFC983737848D23F33776967997408511D1352 * __this, const RuntimeMethod* method)
{
	{
		__this->set_debounceTime_5((0.3f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.XR.ARFoundation.ARSession::get_attemptUpdate()
extern "C" IL2CPP_METHOD_ATTR bool ARSession_get_attemptUpdate_mEC43EE5443F783D3B8A0CDB802990AB48BC53424 (ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_AttemptUpdate_6();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSession::set_attemptUpdate(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ARSession_set_attemptUpdate_mE270CCCC98238795B6B5A3DEA5006E7915CBE981 (ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_AttemptUpdate_6(L_0);
		return;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.ARSession::get_matchFrameRate()
extern "C" IL2CPP_METHOD_ATTR bool ARSession_get_matchFrameRate_m8D3FBABA53CF5874B1FE781AEB6544FAFE64B5BC (ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_MatchFrameRate_7();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSession::set_matchFrameRate(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ARSession_set_matchFrameRate_m2DF9A7942DDFFB8CB6CFFCE9610FC095E599987D (ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARSession_set_matchFrameRate_m2DF9A7942DDFFB8CB6CFFCE9610FC095E599987D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_m_MatchFrameRate_7();
		bool L_1 = ___value0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * L_2 = SubsystemLifecycleManager_2_get_descriptor_mACB947E64926B6F80F28A2A443EA4CC9ED1E42E9(__this, /*hidden argument*/SubsystemLifecycleManager_2_get_descriptor_mACB947E64926B6F80F28A2A443EA4CC9ED1E42E9_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		bool L_3 = ___value0;
		ARSession_SetMatchFrameRateEnabled_mAF625DD431B80D4A7FDEA5738B34C483E15B71D2(__this, L_3, /*hidden argument*/NULL);
		return;
	}

IL_001a:
	{
		bool L_4 = ___value0;
		__this->set_m_MatchFrameRate_7(L_4);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSession::add_stateChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void ARSession_add_stateChanged_mF4B2081C4A6ECCD67780E0889BBE1E63BFED78F7 (Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARSession_add_stateChanged_mF4B2081C4A6ECCD67780E0889BBE1E63BFED78F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * V_0 = NULL;
	Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * V_1 = NULL;
	Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * V_2 = NULL;
	{
		Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * L_0 = ((ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_il2cpp_TypeInfo_var))->get_stateChanged_8();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * L_1 = V_0;
		V_1 = L_1;
		Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * L_2 = V_1;
		Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD *)CastclassSealed((RuntimeObject*)L_4, Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD_il2cpp_TypeInfo_var));
		Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * L_5 = V_2;
		Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * L_6 = V_1;
		Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * L_7 = InterlockedCompareExchangeImpl<Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD *>((Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD **)(((ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_il2cpp_TypeInfo_var))->get_address_of_stateChanged_8()), L_5, L_6);
		V_0 = L_7;
		Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * L_8 = V_0;
		Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD *)L_8) == ((RuntimeObject*)(Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSession::remove_stateChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void ARSession_remove_stateChanged_m668C0EB61D2219B41BA470A261B6702E722352D2 (Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARSession_remove_stateChanged_m668C0EB61D2219B41BA470A261B6702E722352D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * V_0 = NULL;
	Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * V_1 = NULL;
	Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * V_2 = NULL;
	{
		Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * L_0 = ((ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_il2cpp_TypeInfo_var))->get_stateChanged_8();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * L_1 = V_0;
		V_1 = L_1;
		Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * L_2 = V_1;
		Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD *)CastclassSealed((RuntimeObject*)L_4, Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD_il2cpp_TypeInfo_var));
		Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * L_5 = V_2;
		Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * L_6 = V_1;
		Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * L_7 = InterlockedCompareExchangeImpl<Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD *>((Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD **)(((ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_il2cpp_TypeInfo_var))->get_address_of_stateChanged_8()), L_5, L_6);
		V_0 = L_7;
		Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * L_8 = V_0;
		Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD *)L_8) == ((RuntimeObject*)(Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::get_state()
extern "C" IL2CPP_METHOD_ATTR int32_t ARSession_get_state_m805612298E9ED122411DA5633370B26B2BF07AE2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARSession_get_state_m805612298E9ED122411DA5633370B26B2BF07AE2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ((ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_il2cpp_TypeInfo_var))->get_s_State_9();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSession::set_state(UnityEngine.XR.ARFoundation.ARSessionState)
extern "C" IL2CPP_METHOD_ATTR void ARSession_set_state_mA395527F1EABE6201E08E27F210CADBA384368F5 (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARSession_set_state_mA395527F1EABE6201E08E27F210CADBA384368F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ((ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_il2cpp_TypeInfo_var))->get_s_State_9();
		int32_t L_1 = ___value0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_2 = ___value0;
		((ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_il2cpp_TypeInfo_var))->set_s_State_9(L_2);
		Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * L_3 = ((ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_il2cpp_TypeInfo_var))->get_stateChanged_8();
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * L_4 = ((ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_il2cpp_TypeInfo_var))->get_stateChanged_8();
		int32_t L_5 = ARSession_get_state_m805612298E9ED122411DA5633370B26B2BF07AE2(/*hidden argument*/NULL);
		ARSessionStateChangedEventArgs_tAB726C94F3164280811C27B77D92B0189C302082  L_6;
		memset(&L_6, 0, sizeof(L_6));
		ARSessionStateChangedEventArgs__ctor_m2460DA6B8BCE863C3AFF06E110B795CE63305717((&L_6), L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Action_1_Invoke_m588298D1CA0383E663E3FF5B4D0FDBED75EF7D60(L_4, L_6, /*hidden argument*/Action_1_Invoke_m588298D1CA0383E663E3FF5B4D0FDBED75EF7D60_RuntimeMethod_var);
	}

IL_002a:
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSession::Reset()
extern "C" IL2CPP_METHOD_ATTR void ARSession_Reset_mC83E2AD459A84CEBD12DEC4970BD418D1F52937B (ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARSession_Reset_mC83E2AD459A84CEBD12DEC4970BD418D1F52937B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * L_0 = SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B(__this, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * L_1 = SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B(__this, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B_RuntimeMethod_var);
		NullCheck(L_1);
		XRSessionSubsystem_Reset_mA6596EEA8C670E2561986B54BB34E0F15A0D5836(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		int32_t L_2 = ARSession_get_state_m805612298E9ED122411DA5633370B26B2BF07AE2(/*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)5)))
		{
			goto IL_0021;
		}
	}
	{
		ARSession_set_state_mA395527F1EABE6201E08E27F210CADBA384368F5(6, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSession::SetMatchFrameRateEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ARSession_SetMatchFrameRateEnabled_mAF625DD431B80D4A7FDEA5738B34C483E15B71D2 (ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARSession_SetMatchFrameRateEnabled_mAF625DD431B80D4A7FDEA5738B34C483E15B71D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * L_0 = SubsystemLifecycleManager_2_get_descriptor_mACB947E64926B6F80F28A2A443EA4CC9ED1E42E9(__this, /*hidden argument*/SubsystemLifecycleManager_2_get_descriptor_mACB947E64926B6F80F28A2A443EA4CC9ED1E42E9_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1 = XRSessionSubsystemDescriptor_get_supportsMatchFrameRate_m66DA7D5EE88322AF2EE5FC3B1BF8203115C2CA8F(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * L_2 = SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B(__this, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B_RuntimeMethod_var);
		bool L_3 = ___enabled0;
		NullCheck(L_2);
		XRSessionSubsystem_set_matchFrameRate_m5AE7252065F093953386D31D79BCA9C1C7BC256A(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0019:
	{
		XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * L_4 = SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B(__this, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B_RuntimeMethod_var);
		NullCheck(L_4);
		bool L_5 = XRSessionSubsystem_get_matchFrameRate_m1A5153DC073507175C7D0E47FC649DBB690FEEEC(L_4, /*hidden argument*/NULL);
		__this->set_m_MatchFrameRate_7(L_5);
		bool L_6 = __this->get_m_MatchFrameRate_7();
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * L_7 = SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B(__this, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B_RuntimeMethod_var);
		NullCheck(L_7);
		int32_t L_8 = XRSessionSubsystem_get_frameRate_m9C029A08839E039C3459DF5CE4A5E5CFAD3DC7DE(L_7, /*hidden argument*/NULL);
		Application_set_targetFrameRate_mC20C40E50BAB994B10DDAC0E3C26A851025337BC(L_8, /*hidden argument*/NULL);
		QualitySettings_set_vSyncCount_m9214E19E48E3EB1419C5C810294B80A355BA588C(0, /*hidden argument*/NULL);
	}

IL_0048:
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSession::WarnIfMultipleARSessions()
extern "C" IL2CPP_METHOD_ATTR void ARSession_WarnIfMultipleARSessions_mAA5943BCF8559425E6AACD1DAF859D3E7A104C48 (ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARSession_WarnIfMultipleARSessions_mAA5943BCF8559425E6AACD1DAF859D3E7A104C48_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARSessionU5BU5D_t59BB2CF66CA69B5754D409F8589E8ECB48BF0C7E* V_0 = NULL;
	String_t* V_1 = NULL;
	ARSessionU5BU5D_t59BB2CF66CA69B5754D409F8589E8ECB48BF0C7E* V_2 = NULL;
	int32_t V_3 = 0;
	ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * V_4 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		ARSessionU5BU5D_t59BB2CF66CA69B5754D409F8589E8ECB48BF0C7E* L_0 = Object_FindObjectsOfType_TisARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_m717AB67321FD6E41C6ABC6A1B97E1010A3E382CE(/*hidden argument*/Object_FindObjectsOfType_TisARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_m717AB67321FD6E41C6ABC6A1B97E1010A3E382CE_RuntimeMethod_var);
		V_0 = L_0;
		ARSessionU5BU5D_t59BB2CF66CA69B5754D409F8589E8ECB48BF0C7E* L_1 = V_0;
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))) <= ((int32_t)1)))
		{
			goto IL_0053;
		}
	}
	{
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		ARSessionU5BU5D_t59BB2CF66CA69B5754D409F8589E8ECB48BF0C7E* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_0039;
	}

IL_0018:
	{
		ARSessionU5BU5D_t59BB2CF66CA69B5754D409F8589E8ECB48BF0C7E* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_4 = L_6;
		String_t* L_7 = V_1;
		ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * L_8 = V_4;
		NullCheck(L_8);
		String_t* L_9 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_8, /*hidden argument*/NULL);
		String_t* L_10 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral97E6A4B7284FF60EC6DACEBE36E538B49E3C15F4, L_9, /*hidden argument*/NULL);
		String_t* L_11 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_7, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0039:
	{
		int32_t L_13 = V_3;
		ARSessionU5BU5D_t59BB2CF66CA69B5754D409F8589E8ECB48BF0C7E* L_14 = V_2;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_0018;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = L_15;
		String_t* L_17 = V_1;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_17);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m29C3DA389E1AA2C1C48C9100F1E83EAE72772FDB(_stringLiteral9BD4B3A961534A860DA7D4D3C8723AA314B31AD5, L_16, /*hidden argument*/NULL);
	}

IL_0053:
	{
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.XR.ARFoundation.ARSession::CheckAvailability()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ARSession_CheckAvailability_m00CF59963BF0112BA01A706D1835F682C2D364C9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARSession_CheckAvailability_m00CF59963BF0112BA01A706D1835F682C2D364C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCheckAvailabilityU3Ed__17_t60F7D023CEFAE9EA91E8CDB81293B9D984039D1B * L_0 = (U3CCheckAvailabilityU3Ed__17_t60F7D023CEFAE9EA91E8CDB81293B9D984039D1B *)il2cpp_codegen_object_new(U3CCheckAvailabilityU3Ed__17_t60F7D023CEFAE9EA91E8CDB81293B9D984039D1B_il2cpp_TypeInfo_var);
		U3CCheckAvailabilityU3Ed__17__ctor_m2E04DD874E65E37DE275AECFD351CD1239950CE3(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.IEnumerator UnityEngine.XR.ARFoundation.ARSession::Install()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ARSession_Install_m8E803A370473F826186C07040596F5C1D6DC3A53 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARSession_Install_m8E803A370473F826186C07040596F5C1D6DC3A53_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CInstallU3Ed__18_t57C93156E2C9C00B61AC295C86B51B88C8561566 * L_0 = (U3CInstallU3Ed__18_t57C93156E2C9C00B61AC295C86B51B88C8561566 *)il2cpp_codegen_object_new(U3CInstallU3Ed__18_t57C93156E2C9C00B61AC295C86B51B88C8561566_il2cpp_TypeInfo_var);
		U3CInstallU3Ed__18__ctor_m06E7BA1501487BDB6FFEAB48FA87C855A5E1A7DE(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSession::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void ARSession_OnEnable_m50ADA47DECCB938F9BD8B389F77153BC1E5BF80D (ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARSession_OnEnable_m50ADA47DECCB938F9BD8B389F77153BC1E5BF80D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemLifecycleManager_2_CreateSubsystemIfNecessary_m2F891BFFDB630974126B497C64236D6829512C40(__this, /*hidden argument*/SubsystemLifecycleManager_2_CreateSubsystemIfNecessary_m2F891BFFDB630974126B497C64236D6829512C40_RuntimeMethod_var);
		XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * L_0 = SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B(__this, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = ARSession_Initialize_mB23569D59077BAF767A502C71EBCEEB16197F574(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_1, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.XR.ARFoundation.ARSession::Initialize()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ARSession_Initialize_mB23569D59077BAF767A502C71EBCEEB16197F574 (ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARSession_Initialize_mB23569D59077BAF767A502C71EBCEEB16197F574_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CInitializeU3Ed__20_t9A81C14367242A53C21B440CCA714B3C378E60BF * L_0 = (U3CInitializeU3Ed__20_t9A81C14367242A53C21B440CCA714B3C378E60BF *)il2cpp_codegen_object_new(U3CInitializeU3Ed__20_t9A81C14367242A53C21B440CCA714B3C378E60BF_il2cpp_TypeInfo_var);
		U3CInitializeU3Ed__20__ctor_m8868807E89B676990DA6308C120C03B31B2F73F8(L_0, 0, /*hidden argument*/NULL);
		U3CInitializeU3Ed__20_t9A81C14367242A53C21B440CCA714B3C378E60BF * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSession::StartSubsystem()
extern "C" IL2CPP_METHOD_ATTR void ARSession_StartSubsystem_mEF96EEA17C85A58E001487B2BF31263B68F9C6D5 (ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARSession_StartSubsystem_mEF96EEA17C85A58E001487B2BF31263B68F9C6D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_m_MatchFrameRate_7();
		ARSession_SetMatchFrameRateEnabled_mAF625DD431B80D4A7FDEA5738B34C483E15B71D2(__this, L_0, /*hidden argument*/NULL);
		XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * L_1 = SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B(__this, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B_RuntimeMethod_var);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.Experimental.Subsystem::Start() */, L_1);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSession::Awake()
extern "C" IL2CPP_METHOD_ATTR void ARSession_Awake_mC87E839C6887060A94715B6E5C504D075B9F6D8C (ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARSession_Awake_mC87E839C6887060A94715B6E5C504D075B9F6D8C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_il2cpp_TypeInfo_var))->set_s_Instance_11(__this);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSession::Update()
extern "C" IL2CPP_METHOD_ATTR void ARSession_Update_mEF65D186AFA81E4BD71E806A3DB0E11BC78265C3 (ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARSession_Update_mEF65D186AFA81E4BD71E806A3DB0E11BC78265C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * L_0 = SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B(__this, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_006d;
		}
	}
	{
		XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * L_1 = SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B(__this, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B_RuntimeMethod_var);
		NullCheck(L_1);
		bool L_2 = XRSessionSubsystem_get_running_m232754CAC70AAC3E051F0607A1B884CB06D80E8C(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_006d;
		}
	}
	{
		XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * L_3 = SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B(__this, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 ));
		int32_t L_4 = Screen_get_orientation_m7977C7ECC2E3F22BB5DF7661951843FCC7E645B0(/*hidden argument*/NULL);
		XRSessionUpdateParams_set_screenOrientation_m7C20FD52988E0F21604700B5CDA93FBA63DD28C6((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)(&V_0), L_4, /*hidden argument*/NULL);
		int32_t L_5 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_6 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector2Int__ctor_m501C34762BA7ECDDCFC25C19A4B9C93BC15004E1((&L_7), L_5, L_6, /*hidden argument*/NULL);
		XRSessionUpdateParams_set_screenDimensions_m41570268847916BA02DD2427BDDB08B3D466A905((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)(&V_0), L_7, /*hidden argument*/NULL);
		XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  L_8 = V_0;
		NullCheck(L_3);
		XRSessionSubsystem_Update_m168E0641976ED5CD2084BD32692044A2D361B945(L_3, L_8, /*hidden argument*/NULL);
		XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * L_9 = SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B(__this, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B_RuntimeMethod_var);
		NullCheck(L_9);
		int32_t L_10 = XRSessionSubsystem_get_trackingState_m6CEDC16CB9B224A0302A83BC2C22FC4C0905EB30(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_11) > ((uint32_t)1))))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)2)))
		{
			goto IL_0067;
		}
	}
	{
		return;
	}

IL_0060:
	{
		ARSession_set_state_mA395527F1EABE6201E08E27F210CADBA384368F5(6, /*hidden argument*/NULL);
		return;
	}

IL_0067:
	{
		ARSession_set_state_mA395527F1EABE6201E08E27F210CADBA384368F5(7, /*hidden argument*/NULL);
	}

IL_006d:
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSession::OnApplicationPause(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ARSession_OnApplicationPause_m3A3701CBE2A918F3EB2472F75F93BD5872B8A6F6 (ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * __this, bool ___paused0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARSession_OnApplicationPause_m3A3701CBE2A918F3EB2472F75F93BD5872B8A6F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * L_0 = SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B(__this, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		bool L_1 = ___paused0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * L_2 = SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B(__this, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B_RuntimeMethod_var);
		NullCheck(L_2);
		XRSessionSubsystem_OnApplicationPause_mE53A32290C253F808E5B14A11B7917286E86B08A(L_2, /*hidden argument*/NULL);
		return;
	}

IL_0018:
	{
		XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * L_3 = SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B(__this, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B_RuntimeMethod_var);
		NullCheck(L_3);
		XRSessionSubsystem_OnApplicationResume_m4103D0866A4152C9A52E52A306D85EBAD8405F2F(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSession::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void ARSession_OnDisable_m7A441A0FC31FB042E68A2351E5600D5F9808C802 (ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARSession_OnDisable_m7A441A0FC31FB042E68A2351E5600D5F9808C802_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemLifecycleManager_2_OnDisable_m3FDAA1FFCE3D14EBE1DC9776D64FD792ACF28412(__this, /*hidden argument*/SubsystemLifecycleManager_2_OnDisable_m3FDAA1FFCE3D14EBE1DC9776D64FD792ACF28412_RuntimeMethod_var);
		int32_t L_0 = ARSession_get_state_m805612298E9ED122411DA5633370B26B2BF07AE2(/*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)5)))
		{
			goto IL_0014;
		}
	}
	{
		ARSession_set_state_mA395527F1EABE6201E08E27F210CADBA384368F5(5, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSession::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void ARSession_OnDestroy_m0AAC9F2B3205EE9FE4CE3D903BD811C75689C66E (ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARSession_OnDestroy_m0AAC9F2B3205EE9FE4CE3D903BD811C75689C66E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemLifecycleManager_2_OnDestroy_mAF4A50B01BDBF5EBCF7841E9FC52718D51222317(__this, /*hidden argument*/SubsystemLifecycleManager_2_OnDestroy_mAF4A50B01BDBF5EBCF7841E9FC52718D51222317_RuntimeMethod_var);
		int32_t L_0 = ARSession_get_state_m805612298E9ED122411DA5633370B26B2BF07AE2(/*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)5)))
		{
			goto IL_0014;
		}
	}
	{
		ARSession_set_state_mA395527F1EABE6201E08E27F210CADBA384368F5(5, /*hidden argument*/NULL);
	}

IL_0014:
	{
		((ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_il2cpp_TypeInfo_var))->set_s_Instance_11((ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC *)NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSession::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ARSession__ctor_mE820D4FA810265B10198EF8034307B2F8885F796 (ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARSession__ctor_mE820D4FA810265B10198EF8034307B2F8885F796_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_AttemptUpdate_6((bool)1);
		__this->set_m_MatchFrameRate_7((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemLifecycleManager_2_t166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3_il2cpp_TypeInfo_var);
		SubsystemLifecycleManager_2__ctor_m9DA5E4AAF458FD649E821445CA4C9CDEBB6D7C93(__this, /*hidden argument*/SubsystemLifecycleManager_2__ctor_m9DA5E4AAF458FD649E821445CA4C9CDEBB6D7C93_RuntimeMethod_var);
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
// System.Void UnityEngine.XR.ARFoundation.ARSession_<CheckAvailability>d__17::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CCheckAvailabilityU3Ed__17__ctor_m2E04DD874E65E37DE275AECFD351CD1239950CE3 (U3CCheckAvailabilityU3Ed__17_t60F7D023CEFAE9EA91E8CDB81293B9D984039D1B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSession_<CheckAvailability>d__17::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CCheckAvailabilityU3Ed__17_System_IDisposable_Dispose_mD6E64558D40FAF036E11C11F234B2D39542EF938 (U3CCheckAvailabilityU3Ed__17_t60F7D023CEFAE9EA91E8CDB81293B9D984039D1B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.ARSession_<CheckAvailability>d__17::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CCheckAvailabilityU3Ed__17_MoveNext_mF21E0B6188BEBD68250E0506A1BC9BC58A5A6655 (U3CCheckAvailabilityU3Ed__17_t60F7D023CEFAE9EA91E8CDB81293B9D984039D1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCheckAvailabilityU3Ed__17_MoveNext_mF21E0B6188BEBD68250E0506A1BC9BC58A5A6655_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B20_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
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
				goto IL_0034;
			}
			case 2:
			{
				goto IL_00a7;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_003b;
	}

IL_0024:
	{
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0034:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_003b:
	{
		int32_t L_2 = ARSession_get_state_m805612298E9ED122411DA5633370B26B2BF07AE2(/*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_3 = ARSession_get_state_m805612298E9ED122411DA5633370B26B2BF07AE2(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		return (bool)0;
	}

IL_004c:
	{
		ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * L_4 = ((ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_il2cpp_TypeInfo_var))->get_s_Instance_11();
		NullCheck(L_4);
		SubsystemLifecycleManager_2_CreateSubsystemIfNecessary_m2F891BFFDB630974126B497C64236D6829512C40(L_4, /*hidden argument*/SubsystemLifecycleManager_2_CreateSubsystemIfNecessary_m2F891BFFDB630974126B497C64236D6829512C40_RuntimeMethod_var);
		ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * L_5 = ((ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_il2cpp_TypeInfo_var))->get_s_Instance_11();
		NullCheck(L_5);
		XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * L_6 = SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B(L_5, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_006d;
		}
	}
	{
		ARSession_set_state_mA395527F1EABE6201E08E27F210CADBA384368F5(1, /*hidden argument*/NULL);
		goto IL_0124;
	}

IL_006d:
	{
		int32_t L_7 = ARSession_get_state_m805612298E9ED122411DA5633370B26B2BF07AE2(/*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0124;
		}
	}
	{
		ARSession_set_state_mA395527F1EABE6201E08E27F210CADBA384368F5(2, /*hidden argument*/NULL);
		ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * L_8 = ((ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_il2cpp_TypeInfo_var))->get_s_Instance_11();
		NullCheck(L_8);
		XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * L_9 = SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B(L_8, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B_RuntimeMethod_var);
		NullCheck(L_9);
		Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * L_10 = XRSessionSubsystem_GetAvailabilityAsync_mE1444BD33C0A1EAD4982FC0AE64D1251635487ED(L_9, /*hidden argument*/NULL);
		__this->set_U3CavailabilityPromiseU3E5__2_2(L_10);
		Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * L_11 = __this->get_U3CavailabilityPromiseU3E5__2_2();
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00a7:
	{
		__this->set_U3CU3E1__state_0((-1));
		Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * L_12 = __this->get_U3CavailabilityPromiseU3E5__2_2();
		NullCheck(L_12);
		int32_t L_13 = Promise_1_get_result_mD780D5F7F8042B92389DCA99E58D379C4898C256(L_12, /*hidden argument*/Promise_1_get_result_mD780D5F7F8042B92389DCA99E58D379C4898C256_RuntimeMethod_var);
		((ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_il2cpp_TypeInfo_var))->set_s_Availability_10(L_13);
		int32_t L_14 = ((ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_il2cpp_TypeInfo_var))->get_s_Availability_10();
		bool L_15 = SessionAvailabilityExtensions_IsSupported_mA0E371DBCB2DB69E066EA4DCADC76721AAD04ABA(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00de;
		}
	}
	{
		int32_t L_16 = ((ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_il2cpp_TypeInfo_var))->get_s_Availability_10();
		bool L_17 = SessionAvailabilityExtensions_IsInstalled_m30AE248D1BBF1C669EE32FE5976A35C16152DC9C(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00de;
		}
	}
	{
		ARSession_set_state_mA395527F1EABE6201E08E27F210CADBA384368F5(5, /*hidden argument*/NULL);
		goto IL_011d;
	}

IL_00de:
	{
		int32_t L_18 = ((ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_il2cpp_TypeInfo_var))->get_s_Availability_10();
		bool L_19 = SessionAvailabilityExtensions_IsSupported_mA0E371DBCB2DB69E066EA4DCADC76721AAD04ABA(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0117;
		}
	}
	{
		int32_t L_20 = ((ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_il2cpp_TypeInfo_var))->get_s_Availability_10();
		bool L_21 = SessionAvailabilityExtensions_IsInstalled_m30AE248D1BBF1C669EE32FE5976A35C16152DC9C(L_20, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_0117;
		}
	}
	{
		ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * L_22 = ((ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_il2cpp_TypeInfo_var))->get_s_Instance_11();
		NullCheck(L_22);
		XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * L_23 = SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B(L_22, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B_RuntimeMethod_var);
		NullCheck(L_23);
		XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * L_24 = Subsystem_1_get_SubsystemDescriptor_m7D9A1F7F1631768F5DE2EC7DA7FC3FCCA24336C7(L_23, /*hidden argument*/Subsystem_1_get_SubsystemDescriptor_m7D9A1F7F1631768F5DE2EC7DA7FC3FCCA24336C7_RuntimeMethod_var);
		NullCheck(L_24);
		bool L_25 = XRSessionSubsystemDescriptor_get_supportsInstall_m2AA89682007FE1D8BB811FD152DE326FF7BB5A99(L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_010f;
		}
	}
	{
		G_B20_0 = 1;
		goto IL_0110;
	}

IL_010f:
	{
		G_B20_0 = 3;
	}

IL_0110:
	{
		ARSession_set_state_mA395527F1EABE6201E08E27F210CADBA384368F5(G_B20_0, /*hidden argument*/NULL);
		goto IL_011d;
	}

IL_0117:
	{
		ARSession_set_state_mA395527F1EABE6201E08E27F210CADBA384368F5(1, /*hidden argument*/NULL);
	}

IL_011d:
	{
		__this->set_U3CavailabilityPromiseU3E5__2_2((Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B *)NULL);
	}

IL_0124:
	{
		return (bool)0;
	}
}
// System.Object UnityEngine.XR.ARFoundation.ARSession_<CheckAvailability>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CCheckAvailabilityU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB692DDE101F150F7C05CCF307B95F2EA918C9ABF (U3CCheckAvailabilityU3Ed__17_t60F7D023CEFAE9EA91E8CDB81293B9D984039D1B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSession_<CheckAvailability>d__17::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CCheckAvailabilityU3Ed__17_System_Collections_IEnumerator_Reset_m22BAA43B6D8CB0C3C4C2ABF481A9F4A7C640A6FD (U3CCheckAvailabilityU3Ed__17_t60F7D023CEFAE9EA91E8CDB81293B9D984039D1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCheckAvailabilityU3Ed__17_System_Collections_IEnumerator_Reset_m22BAA43B6D8CB0C3C4C2ABF481A9F4A7C640A6FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CCheckAvailabilityU3Ed__17_System_Collections_IEnumerator_Reset_m22BAA43B6D8CB0C3C4C2ABF481A9F4A7C640A6FD_RuntimeMethod_var);
	}
}
// System.Object UnityEngine.XR.ARFoundation.ARSession_<CheckAvailability>d__17::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CCheckAvailabilityU3Ed__17_System_Collections_IEnumerator_get_Current_mC56A8ACD3959F4A616EFF2C1B28F82EC84C8EA59 (U3CCheckAvailabilityU3Ed__17_t60F7D023CEFAE9EA91E8CDB81293B9D984039D1B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void UnityEngine.XR.ARFoundation.ARSession_<Initialize>d__20::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__20__ctor_m8868807E89B676990DA6308C120C03B31B2F73F8 (U3CInitializeU3Ed__20_t9A81C14367242A53C21B440CCA714B3C378E60BF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSession_<Initialize>d__20::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__20_System_IDisposable_Dispose_mC41F4BD4A14BB0272F4339CD82549C75FA3BBF0D (U3CInitializeU3Ed__20_t9A81C14367242A53C21B440CCA714B3C378E60BF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.ARSession_<Initialize>d__20::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CInitializeU3Ed__20_MoveNext_mAC6E61B7B92BD49FC38B47B85C0724BEE13D5DAC (U3CInitializeU3Ed__20_t9A81C14367242A53C21B440CCA714B3C378E60BF * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0045;
			}
			case 2:
			{
				goto IL_0082;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_3 = ARSession_get_state_m805612298E9ED122411DA5633370B26B2BF07AE2(/*hidden argument*/NULL);
		if ((((int32_t)L_3) > ((int32_t)2)))
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_4 = ARSession_CheckAvailability_m00CF59963BF0112BA01A706D1835F682C2D364C9(/*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0045:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_004c:
	{
		ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * L_5 = V_1;
		NullCheck(L_5);
		bool L_6 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0056;
		}
	}
	{
		return (bool)0;
	}

IL_0056:
	{
		int32_t L_7 = ARSession_get_state_m805612298E9ED122411DA5633370B26B2BF07AE2(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)3))))
		{
			goto IL_0066;
		}
	}
	{
		ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * L_8 = V_1;
		NullCheck(L_8);
		bool L_9 = ARSession_get_attemptUpdate_mEC43EE5443F783D3B8A0CDB802990AB48BC53424(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_006e;
		}
	}

IL_0066:
	{
		int32_t L_10 = ARSession_get_state_m805612298E9ED122411DA5633370B26B2BF07AE2(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)4))))
		{
			goto IL_0089;
		}
	}

IL_006e:
	{
		RuntimeObject* L_11 = ARSession_Install_m8E803A370473F826186C07040596F5C1D6DC3A53(/*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0082:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0089:
	{
		int32_t L_12 = ARSession_get_state_m805612298E9ED122411DA5633370B26B2BF07AE2(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)5))))
		{
			goto IL_00a1;
		}
	}
	{
		ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * L_13 = V_1;
		NullCheck(L_13);
		bool L_14 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00a1;
		}
	}
	{
		ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * L_15 = V_1;
		NullCheck(L_15);
		ARSession_StartSubsystem_mEF96EEA17C85A58E001487B2BF31263B68F9C6D5(L_15, /*hidden argument*/NULL);
		goto IL_00a8;
	}

IL_00a1:
	{
		ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * L_16 = V_1;
		NullCheck(L_16);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_16, (bool)0, /*hidden argument*/NULL);
	}

IL_00a8:
	{
		return (bool)0;
	}
}
// System.Object UnityEngine.XR.ARFoundation.ARSession_<Initialize>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CInitializeU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2C604DFE4191F3B1F01F89CE9A077137DA684741 (U3CInitializeU3Ed__20_t9A81C14367242A53C21B440CCA714B3C378E60BF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSession_<Initialize>d__20::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__20_System_Collections_IEnumerator_Reset_mE8D8D1C6F40FC94E9CFE8B4D5B6504D92F41E5F7 (U3CInitializeU3Ed__20_t9A81C14367242A53C21B440CCA714B3C378E60BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CInitializeU3Ed__20_System_Collections_IEnumerator_Reset_mE8D8D1C6F40FC94E9CFE8B4D5B6504D92F41E5F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CInitializeU3Ed__20_System_Collections_IEnumerator_Reset_mE8D8D1C6F40FC94E9CFE8B4D5B6504D92F41E5F7_RuntimeMethod_var);
	}
}
// System.Object UnityEngine.XR.ARFoundation.ARSession_<Initialize>d__20::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CInitializeU3Ed__20_System_Collections_IEnumerator_get_Current_mC7093C4C07401CDD4240E7D4A7D6D6EF260956BD (U3CInitializeU3Ed__20_t9A81C14367242A53C21B440CCA714B3C378E60BF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void UnityEngine.XR.ARFoundation.ARSession_<Install>d__18::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CInstallU3Ed__18__ctor_m06E7BA1501487BDB6FFEAB48FA87C855A5E1A7DE (U3CInstallU3Ed__18_t57C93156E2C9C00B61AC295C86B51B88C8561566 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSession_<Install>d__18::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CInstallU3Ed__18_System_IDisposable_Dispose_m70E84E8BB962BD54B398B7117CDFE7E2C194154F (U3CInstallU3Ed__18_t57C93156E2C9C00B61AC295C86B51B88C8561566 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.ARSession_<Install>d__18::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CInstallU3Ed__18_MoveNext_mB6E53844628669B35F6BD80D8E3442325E3241C7 (U3CInstallU3Ed__18_t57C93156E2C9C00B61AC295C86B51B88C8561566 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CInstallU3Ed__18_MoveNext_mB6E53844628669B35F6BD80D8E3442325E3241C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
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
				goto IL_0034;
			}
			case 2:
			{
				goto IL_00d8;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_003b;
	}

IL_0024:
	{
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0034:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_003b:
	{
		int32_t L_2 = ARSession_get_state_m805612298E9ED122411DA5633370B26B2BF07AE2(/*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_3 = ARSession_get_state_m805612298E9ED122411DA5633370B26B2BF07AE2(/*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_4 = ARSession_get_state_m805612298E9ED122411DA5633370B26B2BF07AE2(/*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5 = V_2;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0079;
			}
			case 1:
			{
				goto IL_0086;
			}
			case 2:
			{
				goto IL_0091;
			}
			case 3:
			{
				goto IL_0091;
			}
			case 4:
			{
				goto IL_0091;
			}
			case 5:
			{
				goto IL_0084;
			}
			case 6:
			{
				goto IL_0084;
			}
			case 7:
			{
				goto IL_0084;
			}
		}
	}
	{
		goto IL_0091;
	}

IL_0079:
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_6 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_6, _stringLiteral6008C1B9A15E3BD46B8ED38927233E7A0E57E21E, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, U3CInstallU3Ed__18_MoveNext_mB6E53844628669B35F6BD80D8E3442325E3241C7_RuntimeMethod_var);
	}

IL_0084:
	{
		return (bool)0;
	}

IL_0086:
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_7 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_7, _stringLiteral42EA63FFF995283010C2EB4C65D78714CA4706E4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, U3CInstallU3Ed__18_MoveNext_mB6E53844628669B35F6BD80D8E3442325E3241C7_RuntimeMethod_var);
	}

IL_0091:
	{
		ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * L_8 = ((ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_il2cpp_TypeInfo_var))->get_s_Instance_11();
		NullCheck(L_8);
		XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * L_9 = SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B(L_8, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_00a8;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_10 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_10, _stringLiteralFD0B883AAA8FCFAE7EAE8B7D96A74D864868BCD2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, U3CInstallU3Ed__18_MoveNext_mB6E53844628669B35F6BD80D8E3442325E3241C7_RuntimeMethod_var);
	}

IL_00a8:
	{
		ARSession_set_state_mA395527F1EABE6201E08E27F210CADBA384368F5(4, /*hidden argument*/NULL);
		ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC * L_11 = ((ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_il2cpp_TypeInfo_var))->get_s_Instance_11();
		NullCheck(L_11);
		XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * L_12 = SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B(L_11, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B_RuntimeMethod_var);
		NullCheck(L_12);
		Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * L_13 = XRSessionSubsystem_InstallAsync_m35E08EF7130491F2E498C990109FA7323A2ABCCC(L_12, /*hidden argument*/NULL);
		__this->set_U3CinstallPromiseU3E5__2_2(L_13);
		Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * L_14 = __this->get_U3CinstallPromiseU3E5__2_2();
		__this->set_U3CU3E2__current_1(L_14);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00d8:
	{
		__this->set_U3CU3E1__state_0((-1));
		Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * L_15 = __this->get_U3CinstallPromiseU3E5__2_2();
		NullCheck(L_15);
		int32_t L_16 = Promise_1_get_result_m68CA6282F7A775424E9C70D3E9AE1F1DB9D6D53F(L_15, /*hidden argument*/Promise_1_get_result_m68CA6282F7A775424E9C70D3E9AE1F1DB9D6D53F_RuntimeMethod_var);
		V_1 = L_16;
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) == ((int32_t)1)))
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) == ((int32_t)2)))
		{
			goto IL_0109;
		}
	}
	{
		goto IL_0111;
	}

IL_00f5:
	{
		ARSession_set_state_mA395527F1EABE6201E08E27F210CADBA384368F5(5, /*hidden argument*/NULL);
		int32_t L_19 = ((ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_il2cpp_TypeInfo_var))->get_s_Availability_10();
		((ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_tD0921BB3112091777B3BC60BBCC3617A4F15E2DC_il2cpp_TypeInfo_var))->set_s_Availability_10(((int32_t)((int32_t)L_19|(int32_t)4)));
		goto IL_0117;
	}

IL_0109:
	{
		ARSession_set_state_mA395527F1EABE6201E08E27F210CADBA384368F5(3, /*hidden argument*/NULL);
		goto IL_0117;
	}

IL_0111:
	{
		ARSession_set_state_mA395527F1EABE6201E08E27F210CADBA384368F5(1, /*hidden argument*/NULL);
	}

IL_0117:
	{
		return (bool)0;
	}
}
// System.Object UnityEngine.XR.ARFoundation.ARSession_<Install>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CInstallU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF6D303104FDFDDC534BEB4D44884A5FB91E75783 (U3CInstallU3Ed__18_t57C93156E2C9C00B61AC295C86B51B88C8561566 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSession_<Install>d__18::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CInstallU3Ed__18_System_Collections_IEnumerator_Reset_m3215B1B04EBC631B08240AB17E5ABF68AC492F33 (U3CInstallU3Ed__18_t57C93156E2C9C00B61AC295C86B51B88C8561566 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CInstallU3Ed__18_System_Collections_IEnumerator_Reset_m3215B1B04EBC631B08240AB17E5ABF68AC492F33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CInstallU3Ed__18_System_Collections_IEnumerator_Reset_m3215B1B04EBC631B08240AB17E5ABF68AC492F33_RuntimeMethod_var);
	}
}
// System.Object UnityEngine.XR.ARFoundation.ARSession_<Install>d__18::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CInstallU3Ed__18_System_Collections_IEnumerator_get_Current_m416CF0EEF3C4F1C1DA0C8ED9587E2A7FBE7A3A4E (U3CInstallU3Ed__18_t57C93156E2C9C00B61AC295C86B51B88C8561566 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::get_camera()
extern "C" IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ARSessionOrigin_get_camera_m042ECD1B468E6F2EDA4199841CDA7007BC385F27 (ARSessionOrigin_tD635899BA0B41E9F3CE205D105ED47637E2AB0E2 * __this, const RuntimeMethod* method)
{
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_m_Camera_4();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSessionOrigin::set_camera(UnityEngine.Camera)
extern "C" IL2CPP_METHOD_ATTR void ARSessionOrigin_set_camera_mC8CADE7FCD0D6F211DB5EC4190AE4A4CC78F2F14 (ARSessionOrigin_tD635899BA0B41E9F3CE205D105ED47637E2AB0E2 * __this, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___value0, const RuntimeMethod* method)
{
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = ___value0;
		__this->set_m_Camera_4(L_0);
		return;
	}
}
// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::get_trackablesParent()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ARSessionOrigin_get_trackablesParent_mF5ECBEC772E556D80D8FBF1D80BEA90FBD6EF05F (ARSessionOrigin_tD635899BA0B41E9F3CE205D105ED47637E2AB0E2 * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_U3CtrackablesParentU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSessionOrigin::set_trackablesParent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void ARSessionOrigin_set_trackablesParent_m13A5C682FCBB70C31C9316E91691EF8953441C3C (ARSessionOrigin_tD635899BA0B41E9F3CE205D105ED47637E2AB0E2 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___value0;
		__this->set_U3CtrackablesParentU3Ek__BackingField_5(L_0);
		return;
	}
}
// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::get_contentOffsetTransform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ARSessionOrigin_get_contentOffsetTransform_mD50A9BCBD6EF6E22A4FC6C0B57ED3C301588ADBD (ARSessionOrigin_tD635899BA0B41E9F3CE205D105ED47637E2AB0E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARSessionOrigin_get_contentOffsetTransform_mD50A9BCBD6EF6E22A4FC6C0B57ED3C301588ADBD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_1 = NULL;
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_m_ContentOffsetGameObject_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0081;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_2, _stringLiteralCC8A256E93699B8B62E6270708BBACA487BE37EC, /*hidden argument*/NULL);
		__this->set_m_ContentOffsetGameObject_6(L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_m_ContentOffsetGameObject_6();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_3, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35(L_4, L_5, (bool)0, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0073;
	}

IL_0039:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = V_1;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = __this->get_m_ContentOffsetGameObject_6();
		NullCheck(L_10);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_9, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = V_1;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = __this->get_m_ContentOffsetGameObject_6();
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35(L_13, L_15, (bool)1, /*hidden argument*/NULL);
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1));
	}

IL_006f:
	{
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0073:
	{
		int32_t L_18 = V_0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		int32_t L_20 = Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724(L_19, /*hidden argument*/NULL);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0039;
		}
	}

IL_0081:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_21 = __this->get_m_ContentOffsetGameObject_6();
		NullCheck(L_21);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_21, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSessionOrigin::MakeContentAppearAt(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void ARSessionOrigin_MakeContentAppearAt_m4FF1B29D2870AC51B0589528B7218296E23C751B (ARSessionOrigin_tD635899BA0B41E9F3CE205D105ED47637E2AB0E2 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___content0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___content0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___position1;
		ARSessionOrigin_MakeContentAppearAt_m1B12B238B3E4687822E05DAA2B98CF76D2DD1905(__this, L_0, L_1, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = ___content0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = ___rotation2;
		ARSessionOrigin_MakeContentAppearAt_m19B910A50B06642F43303C33E0B86AF39DA322CD(__this, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSessionOrigin::MakeContentAppearAt(UnityEngine.Transform,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void ARSessionOrigin_MakeContentAppearAt_m1B12B238B3E4687822E05DAA2B98CF76D2DD1905 (ARSessionOrigin_tD635899BA0B41E9F3CE205D105ED47637E2AB0E2 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___content0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARSessionOrigin_MakeContentAppearAt_m1B12B238B3E4687822E05DAA2B98CF76D2DD1905_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___content0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_2 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_2, _stringLiteral040F06FD774092478D450774F5BA30C5DA78ACC8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, ARSessionOrigin_MakeContentAppearAt_m1B12B238B3E4687822E05DAA2B98CF76D2DD1905_RuntimeMethod_var);
	}

IL_0014:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = ARSessionOrigin_get_contentOffsetTransform_mD50A9BCBD6EF6E22A4FC6C0B57ED3C301588ADBD(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = L_3;
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = ___position1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_7, L_8, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_5, L_9, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_4, L_10, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = ___content0;
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_11, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSessionOrigin::MakeContentAppearAt(UnityEngine.Transform,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void ARSessionOrigin_MakeContentAppearAt_m19B910A50B06642F43303C33E0B86AF39DA322CD (ARSessionOrigin_tD635899BA0B41E9F3CE205D105ED47637E2AB0E2 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___content0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARSessionOrigin_MakeContentAppearAt_m19B910A50B06642F43303C33E0B86AF39DA322CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___content0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_2 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_2, _stringLiteral040F06FD774092478D450774F5BA30C5DA78ACC8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, ARSessionOrigin_MakeContentAppearAt_m19B910A50B06642F43303C33E0B86AF39DA322CD_RuntimeMethod_var);
	}

IL_0014:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = ___rotation1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_4, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = ___content0;
		NullCheck(L_6);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_6, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_5, L_7, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_3, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSessionOrigin::Awake()
extern "C" IL2CPP_METHOD_ATTR void ARSessionOrigin_Awake_mF38CA1C5FC651AF466368ABF30A4DD929C08DC2B (ARSessionOrigin_tD635899BA0B41E9F3CE205D105ED47637E2AB0E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARSessionOrigin_Awake_mF38CA1C5FC651AF466368ABF30A4DD929C08DC2B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * V_0 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_1 = NULL;
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_0, _stringLiteral836A09EE87CB2E910237FD08E2D5EC26E2ACA47D, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_0, /*hidden argument*/NULL);
		ARSessionOrigin_set_trackablesParent_m13A5C682FCBB70C31C9316E91691EF8953441C3C(__this, L_1, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = ARSessionOrigin_get_trackablesParent_mF5ECBEC772E556D80D8FBF1D80BEA90FBD6EF05F(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35(L_2, L_3, (bool)0, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = ARSessionOrigin_get_trackablesParent_mF5ECBEC772E556D80D8FBF1D80BEA90FBD6EF05F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_4, L_5, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = ARSessionOrigin_get_trackablesParent_mF5ECBEC772E556D80D8FBF1D80BEA90FBD6EF05F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_6, L_7, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = ARSessionOrigin_get_trackablesParent_mF5ECBEC772E556D80D8FBF1D80BEA90FBD6EF05F(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_8, L_9, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_10 = ARSessionOrigin_get_camera_m042ECD1B468E6F2EDA4199841CDA7007BC385F27(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_10, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_010e;
		}
	}
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_12 = ARSessionOrigin_get_camera_m042ECD1B468E6F2EDA4199841CDA7007BC385F27(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * L_13 = Component_GetComponent_TisTrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A_m9D292B4E1EA83C0976E8950376D313E65A8A7E67(L_12, /*hidden argument*/Component_GetComponent_TisTrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A_m9D292B4E1EA83C0976E8950376D313E65A8A7E67_RuntimeMethod_var);
		V_0 = L_13;
		TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_14, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_009c;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_16;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_18 = ARSessionOrigin_get_camera_m042ECD1B468E6F2EDA4199841CDA7007BC385F27(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_19 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_19);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m29C3DA389E1AA2C1C48C9100F1E83EAE72772FDB(_stringLiteral3F8DA3C08BC90A82D2F0A4CEA76BA7E21B5ACCB8, L_17, /*hidden argument*/NULL);
		return;
	}

IL_009c:
	{
		TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * L_20 = V_0;
		NullCheck(L_20);
		bool L_21 = TrackedPoseDriver_get_UseRelativeTransform_mCF2BECEE5B73345DAF1FF0F4781CBFF2C5CF2BEC(L_20, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_010e;
		}
	}
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_22 = ARSessionOrigin_get_camera_m042ECD1B468E6F2EDA4199841CDA7007BC385F27(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = V_1;
		NullCheck(L_24);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_27 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_25, L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00d4;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = V_1;
		NullCheck(L_28);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_29 = Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE(L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_30 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		bool L_31 = Quaternion_op_Inequality_mDA6D2E63A498C8A9AB9A11DD7EA3B96567390C70(L_29, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_010e;
		}
	}

IL_00d4:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_32 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_33 = L_32;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_34 = ARSessionOrigin_get_camera_m042ECD1B468E6F2EDA4199841CDA7007BC385F27(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		String_t* L_35 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_34, /*hidden argument*/NULL);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_35);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_35);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_36 = L_33;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_37 = V_1;
		NullCheck(L_37);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_37, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = L_38;
		RuntimeObject * L_40 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_40);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_40);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_41 = L_36;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_42 = V_1;
		NullCheck(L_42);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_43 = Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE(L_42, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_44 = L_43;
		RuntimeObject * L_45 = Box(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var, &L_44);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_45);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_45);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m29C3DA389E1AA2C1C48C9100F1E83EAE72772FDB(_stringLiteral0DB7C7BB0714C630642B5CBE581ADD7128F908DF, L_41, /*hidden argument*/NULL);
	}

IL_010e:
	{
		return;
	}
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARSessionOrigin::GetCameraOriginPose()
extern "C" IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ARSessionOrigin_GetCameraOriginPose_m9EB7958C94053A5DA209DA66008248E84CF31A32 (ARSessionOrigin_tD635899BA0B41E9F3CE205D105ED47637E2AB0E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARSessionOrigin_GetCameraOriginPose_m9EB7958C94053A5DA209DA66008248E84CF31A32_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * V_0 = NULL;
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_2 = NULL;
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = ARSessionOrigin_get_camera_m042ECD1B468E6F2EDA4199841CDA7007BC385F27(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * L_1 = Component_GetComponent_TisTrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A_m9D292B4E1EA83C0976E8950376D313E65A8A7E67(L_0, /*hidden argument*/Component_GetComponent_TisTrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A_m9D292B4E1EA83C0976E8950376D313E65A8A7E67_RuntimeMethod_var);
		V_0 = L_1;
		TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * L_4 = V_0;
		NullCheck(L_4);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_5 = TrackedPoseDriver_get_originPose_m15486C45FA6B5B84DE98275AA1DD9ED9467D9C1D(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_6 = ARSessionOrigin_get_camera_m042ECD1B468E6F2EDA4199841CDA7007BC385F27(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_9, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0038;
		}
	}
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_11 = V_1;
		return L_11;
	}

IL_0038:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = V_2;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_13 = V_1;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_14 = TransformExtensions_TransformPose_m677CE84C622BD23C3DDB2953DDB820E1934B0144(L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_15 = Pose_get_identity_m19458DF84EAADD5E9302CABDC385B97DC91ECCBF(/*hidden argument*/NULL);
		return L_15;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSessionOrigin::Update()
extern "C" IL2CPP_METHOD_ATTR void ARSessionOrigin_Update_m35CAE0FD83D5D103FBEC3D0BE206290860762759 (ARSessionOrigin_tD635899BA0B41E9F3CE205D105ED47637E2AB0E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARSessionOrigin_Update_m35CAE0FD83D5D103FBEC3D0BE206290860762759_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = ARSessionOrigin_get_camera_m042ECD1B468E6F2EDA4199841CDA7007BC385F27(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_2 = ARSessionOrigin_GetCameraOriginPose_m9EB7958C94053A5DA209DA66008248E84CF31A32(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = ARSessionOrigin_get_trackablesParent_mF5ECBEC772E556D80D8FBF1D80BEA90FBD6EF05F(__this, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_4 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = L_4.get_position_0();
		NullCheck(L_3);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_3, L_5, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = ARSessionOrigin_get_trackablesParent_mF5ECBEC772E556D80D8FBF1D80BEA90FBD6EF05F(__this, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_7 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = L_7.get_rotation_1();
		NullCheck(L_6);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_6, L_8, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSessionOrigin::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ARSessionOrigin__ctor_m2982AB5CB5F0B478220C9A1A986D8459A7ED5C7E (ARSessionOrigin_tD635899BA0B41E9F3CE205D105ED47637E2AB0E2 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
