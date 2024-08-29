#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Poke>
struct List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708;
// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Predicate`1<UnityEngine.GameObject>
struct Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Poke[]
struct PokeU5BU5D_t69D12367C0A827935A7E1FCD5CDDDABA8B302DFA;
// PokemonScriptableObjectEnemy[]
struct PokemonScriptableObjectEnemyU5BU5D_t52F1A2ECBC98A8CDC8F2CC76386A9AFD3F520A00;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// ChangeMapCore
struct ChangeMapCore_t50C557EAE2615C982809A62FAB5EAFDFEE4346BF;
// Cheat
struct Cheat_t4ED8823AA3C034E784124AA28F0DCAB7A4A6AB40;
// ChooseStarter
struct ChooseStarter_t912FC58203BE5BA335051A5201E48B131D863FD4;
// ClickScript
struct ClickScript_t4B24BB07677BC6765DD67260652B6F47C6BF309F;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Data
struct Data_tD68044ADE8612868F3B424B065920F50C65B5CCE;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// EnemyCore
struct EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GestionUIPanel
struct GestionUIPanel_t62B5CEB7B9B4B03F1FEA92085B3CAE918FF8D319;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// IncrementPrefabsWithScriptableObject
struct IncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7;
// IncrementPrefabsWithScriptableObjectStorage
struct IncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3;
// InstanciatePokemon
struct InstanciatePokemon_tDF0A8C405EF4A0171FFF22108615868A8835F610;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// MenuInterraction
struct MenuInterraction_t5F80DECE49CEF61C996CD13727F8D4A83A495DA6;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MusicManager
struct MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// PlayerCore
struct PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459;
// Poke
struct Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7;
// Pokemon
struct Pokemon_tB45F2D3C833A5BC0ADA15722A03744FE8552E588;
// PokemonScriptableObjectEnemy
struct PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF;
// PokemonScriptableObjectPlayer
struct PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE;
// PokemonScriptableObjectShop
struct PokemonScriptableObjectShop_tACBEF0C6F0B0725664A9438B860D3A7432ABB545;
// PopUpInfo
struct PopUpInfo_tAD1073FE05EFD0F458EB7944B5951032F236EA2E;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SaveData3
struct SaveData3_t6A98FFD6760807C16AD260C3E9C335927F7EFC47;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TableType
struct TableType_t4F8D447FAEEA8C0F3609B4BD58E1EE94D88A7E09;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UIPokemonShop
struct UIPokemonShop_tAE361E81FC9B65FB7ACA5D12CB546AA4F99C3C2E;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// WinBadgesOrLigues
struct WinBadgesOrLigues_t0333DDB55F7891A171F154295F2F4B7FC3F2D26B;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// IncrementPrefabsWithScriptableObject/<>c
struct U3CU3Ec_t5CCCDC0BA9F500588A6104857350D5038BD8E42E;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// MenuInterraction/<RoutineAffichageMessage>d__9
struct U3CRoutineAffichageMessageU3Ed__9_t55EA49C04717F2B7ABDF3C47E7EB1253EBD94BE4;
// MusicManager/<ChangeMusic>d__5
struct U3CChangeMusicU3Ed__5_t20247B8D03CD56297DF42B6CE2F538CAD66D6414;
// MusicManager/<NoMusicTransfert>d__6
struct U3CNoMusicTransfertU3Ed__6_tAF5B0DD1F74BCFA265F442FFF5D78BD22549BEE9;
// PlayerCore/<>c__DisplayClass27_0
struct U3CU3Ec__DisplayClass27_0_tB1172B89E35EF7C31682B601659EECDEEE37900C;
// PlayerCore/<>c__DisplayClass27_1
struct U3CU3Ec__DisplayClass27_1_t46F6E4DE8C1420F756308E3D33CED23A5943E7EF;
// PlayerCore/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_tE931918B7DF190A5DDACF236875527C88DCA3C41;
// PopUpInfo/<fermetureAuto>d__6
struct U3CfermetureAutoU3Ed__6_t7EE26AD7B428A6897545728EB4FF4C3899DDC1B4;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// WinBadgesOrLigues/<Win>d__6
struct U3CWinU3Ed__6_tD1E23B3CE118867FE5C7336125C505FBA3BF52EE;

IL2CPP_EXTERN_C RuntimeClass* Data_tD68044ADE8612868F3B424B065920F50C65B5CCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeviceType_tEC9DF281BE5EA013E3F57441442CCE5A2DFF44C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SaveData3_t6A98FFD6760807C16AD260C3E9C335927F7EFC47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CChangeMusicU3Ed__5_t20247B8D03CD56297DF42B6CE2F538CAD66D6414_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CNoMusicTransfertU3Ed__6_tAF5B0DD1F74BCFA265F442FFF5D78BD22549BEE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRoutineAffichageMessageU3Ed__9_t55EA49C04717F2B7ABDF3C47E7EB1253EBD94BE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass27_0_tB1172B89E35EF7C31682B601659EECDEEE37900C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass27_1_t46F6E4DE8C1420F756308E3D33CED23A5943E7EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass29_0_tE931918B7DF190A5DDACF236875527C88DCA3C41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5CCCDC0BA9F500588A6104857350D5038BD8E42E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWinU3Ed__6_tD1E23B3CE118867FE5C7336125C505FBA3BF52EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CfermetureAutoU3Ed__6_t7EE26AD7B428A6897545728EB4FF4C3899DDC1B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05485A48DCC7CBA56F6007B728288FA7274B45BB;
IL2CPP_EXTERN_C String_t* _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306;
IL2CPP_EXTERN_C String_t* _stringLiteral0B6D1EACB61B10A0E3503E4C7DD4EECB230E0D66;
IL2CPP_EXTERN_C String_t* _stringLiteral1981081F0C0FB591D6C0DBFFF3DB12AD619970D3;
IL2CPP_EXTERN_C String_t* _stringLiteral19B61D8D49D50BFA635C198669884C8B3C438DA5;
IL2CPP_EXTERN_C String_t* _stringLiteral1AA37969BCCEF136D0AFFC2CF1DA26E48FBEC039;
IL2CPP_EXTERN_C String_t* _stringLiteral1D831CC5FBA843EC452F164399E6762480BAC1EB;
IL2CPP_EXTERN_C String_t* _stringLiteral20ABD2AF34DCB9A803D0FF87825C15C1A05DA05E;
IL2CPP_EXTERN_C String_t* _stringLiteral21552CE750FC0DB7EE700F765261997E52D44309;
IL2CPP_EXTERN_C String_t* _stringLiteral248673350E53D91402C332FC73903A50CE8C7FAB;
IL2CPP_EXTERN_C String_t* _stringLiteral27D719910FB31C46D9F1432022D54AD1DE1CA6FF;
IL2CPP_EXTERN_C String_t* _stringLiteral2903739E981B923A0C4EF242CAF7C5EF490D766D;
IL2CPP_EXTERN_C String_t* _stringLiteral292255F88C4AEF260DC4938999FDAE7D5F83B3AA;
IL2CPP_EXTERN_C String_t* _stringLiteral39861698AABFA4CF7D217CADD214709766197D35;
IL2CPP_EXTERN_C String_t* _stringLiteral3B0E38E8A8694EB456D42503AFB2E940DB3D6A0B;
IL2CPP_EXTERN_C String_t* _stringLiteral3DEBE551FFF770B7208FBBBF4291FFC0BB9B7ECD;
IL2CPP_EXTERN_C String_t* _stringLiteral49263516E7E9B988032AA5C5327155DDF305738F;
IL2CPP_EXTERN_C String_t* _stringLiteral58D4F02FFFE246215C14338C767F51C9E6A5C163;
IL2CPP_EXTERN_C String_t* _stringLiteral6EB66D8C918A3B23E19C404CB3D9980DA693A46D;
IL2CPP_EXTERN_C String_t* _stringLiteral794F749EE0FA37993B6136DCE128A5CA83A1CD61;
IL2CPP_EXTERN_C String_t* _stringLiteral825923C120A44C6891F0E08C60E5E745D9BA30A8;
IL2CPP_EXTERN_C String_t* _stringLiteral8333032E8C60A0FB5251B7998C708169B0899CDF;
IL2CPP_EXTERN_C String_t* _stringLiteral8AF5F2E5B5BD21F9F72683062BE85804C4B6042D;
IL2CPP_EXTERN_C String_t* _stringLiteral8BF1A130D782F57F44234B152D673BC5D8C71C12;
IL2CPP_EXTERN_C String_t* _stringLiteral8E00288BE8E6D23DF9E4EDA73329A5F0D0B74278;
IL2CPP_EXTERN_C String_t* _stringLiteral949A8BEA31A7E10FE0AA02A3C2A54389F9D3FCB4;
IL2CPP_EXTERN_C String_t* _stringLiteral9C89DD96E5B64A0AEAA1B8E27B998454672C54E0;
IL2CPP_EXTERN_C String_t* _stringLiteralA0E0F4376F635ABD06BA01D7D97F0577633F9671;
IL2CPP_EXTERN_C String_t* _stringLiteralA146EC4B411621CD061AAA3BB4F4646AA46A7868;
IL2CPP_EXTERN_C String_t* _stringLiteralAEAB750E145FB3B516C4250CCD017EA599FCCE8D;
IL2CPP_EXTERN_C String_t* _stringLiteralB6AF2E06FCCD58DA89B7BCD8119A3BFDC03285EF;
IL2CPP_EXTERN_C String_t* _stringLiteralC318561B667A89DAC927091F0FF2F9BFB48FC0CF;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3;
IL2CPP_EXTERN_C String_t* _stringLiteralD2E0DF779A65305A3D712FB2833489B378419070;
IL2CPP_EXTERN_C String_t* _stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F;
IL2CPP_EXTERN_C String_t* _stringLiteralD6752631A7BF02AB890F51BA70CDA8ABF969E712;
IL2CPP_EXTERN_C String_t* _stringLiteralD721CB378CEB20826D36BE35B41F17508474401D;
IL2CPP_EXTERN_C String_t* _stringLiteralDA088E5330059BFBF9D7BC392C2F4C0FA85912E3;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA3E6369954B3EFCF5E8CA41E9B54A7B0C3F71C4;
IL2CPP_EXTERN_C String_t* _stringLiteralDCF1463BFD171A19E8180B8948F12CE858C71A31;
IL2CPP_EXTERN_C String_t* _stringLiteralE78726DE90EF414F6BAE456D807A90A133A52C3E;
IL2CPP_EXTERN_C String_t* _stringLiteralEBA9FD4D4F041497DD1FC1B4FC3B07FC837D7E5C;
IL2CPP_EXTERN_C String_t* _stringLiteralEC19981D10E4DFF34F5764FEEB856880224D055D;
IL2CPP_EXTERN_C String_t* _stringLiteralEDDFC548A57FAB7C14CA7A86AF85A333F909865D;
IL2CPP_EXTERN_C String_t* _stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223;
IL2CPP_EXTERN_C String_t* _stringLiteralF5B0AB7378048C14E815E6D10EC971BEE9EC5523;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGestionUIPanel_t62B5CEB7B9B4B03F1FEA92085B3CAE918FF8D319_m2B4E1DEF12D0B2646B982AFDF3CA0DF1C8229009_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC2944E5125933569A7157B7C90399BEF9C44313C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m779FA5FCE005ABE1D7E9C78A5B14684BA7FA864A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m91DC3318511183BDAADD91C8791135AE5A2B71ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisChooseStarter_t912FC58203BE5BA335051A5201E48B131D863FD4_m877614F2D6345C82CC42CBBCF3C78BBF0EE670D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_m8D8A17457C2F9D76018A5CDDB7C21FDCC6156C29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTableType_t4F8D447FAEEA8C0F3609B4BD58E1EE94D88A7E09_mAB4897B3CDA15C8981E395E7110EE78B8CD0D16C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisUIPokemonShop_tAE361E81FC9B65FB7ACA5D12CB546AA4F99C3C2E_m37789B220B55646448F02C40B6CEB5D5CE3F2569_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IncrementPrefabsWithScriptableObjectStorage_U3CStartU3Eb__2_0_m91FC131222CB02525F12FFE40DC77AE120EF3939_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IncrementPrefabsWithScriptableObject_U3CStartU3Eb__2_1_m3B9C73F82E7D9AC1633C5DCB20707E6EFBA47C46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisData_tD68044ADE8612868F3B424B065920F50C65B5CCE_mDD30F97326D48545982A2725699D35786A998AB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7FCD69D0014C21BC22D8CCDA59CFB4ACA7CD6600_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m287A2DC6A1FC1EF8920E8244CF0BFC04723260F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_m16F098D3BC103A12E2E2FF5C4666F90864B7658B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAll_m1D3CBAACE91557F72BF74D9572E9E7A435E5F338_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD45F9492B19AB597D9741153BB51DD8F94F09737_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE2C875BD1394315BBADB39E649B762DA1EADA540_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m50B2B076888A333E177402056C615E5979B75375_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CChangeMusicU3Ed__5_System_Collections_IEnumerator_Reset_m63CBF3BE8E063CEA0FADC875B73E750D99FC646E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CNoMusicTransfertU3Ed__6_System_Collections_IEnumerator_Reset_m42579BB42EB9EFBEE6CE347E23C9899957A0B636_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRoutineAffichageMessageU3Ed__9_System_Collections_IEnumerator_Reset_m4F740510D94665295E567A6A22E90CE4112AA9E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__2_0_mE7850484B98C21B3D446BD1E8E815934663DF564_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass27_0_U3CInstantiateShop2U3Eb__0_mB622D959559193436835B0FC5B87F0A54B5BA86D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass27_1_U3CInstantiateShop2U3Eb__1_m030788AD2617CC019495E101A89B054B793A6BA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass29_0_U3CAddPokemonU3Eb__0_mA657CF822E6BA6FEFF73F0318E27E0DB9ACF7196_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWinU3Ed__6_System_Collections_IEnumerator_Reset_m756787262D2817EE38559424B53AB6EE4875438A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CfermetureAutoU3Ed__6_System_Collections_IEnumerator_Reset_mFE3907FB3D4B8ED68AB2E783860E05D7A3A24A4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIPokemonShop_U3CStartU3Eb__4_0_mFF58CFF05AF9AC6168191E40BDCFA9E6D4DFD70D_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PokemonScriptableObjectEnemyU5BU5D_t52F1A2ECBC98A8CDC8F2CC76386A9AFD3F520A00;
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Poke>
struct List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PokeU5BU5D_t69D12367C0A827935A7E1FCD5CDDDABA8B302DFA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PokeU5BU5D_t69D12367C0A827935A7E1FCD5CDDDABA8B302DFA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Data
struct Data_tD68044ADE8612868F3B424B065920F50C65B5CCE  : public RuntimeObject
{
	// System.Int32 Data::coin
	int32_t ___coin_0;
	// System.Boolean Data::multiExp
	bool ___multiExp_1;
	// System.Collections.Generic.List`1<Poke> Data::equipe
	List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708* ___equipe_2;
	// System.Collections.Generic.List`1<Poke> Data::stockage
	List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708* ___stockage_3;
	// System.Collections.Generic.List`1<System.String> Data::pokedex
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___pokedex_4;
	// System.Collections.Generic.List`1<System.String> Data::badgePlayerObtainName
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___badgePlayerObtainName_5;
};

// Poke
struct Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7  : public RuntimeObject
{
	// System.Int32 Poke::id
	int32_t ___id_0;
	// System.String Poke::namePoke
	String_t* ___namePoke_1;
	// System.Int32 Poke::lvl
	int32_t ___lvl_2;
	// System.Int32 Poke::damage
	int32_t ___damage_3;
	// System.Int32 Poke::xp
	int32_t ___xp_4;
	// System.Int32 Poke::maxXp
	int32_t ___maxXp_5;
	// System.Boolean Poke::isStarter
	bool ___isStarter_6;
};

// Pokemon
struct Pokemon_tB45F2D3C833A5BC0ADA15722A03744FE8552E588  : public RuntimeObject
{
	// System.Int32 Pokemon::id
	int32_t ___id_0;
	// System.Int32 Pokemon::lvl
	int32_t ___lvl_1;
	// System.Int32 Pokemon::maxHp
	int32_t ___maxHp_2;
	// System.Int32 Pokemon::hp
	int32_t ___hp_3;
	// System.Int32 Pokemon::coinGiven
	int32_t ___coinGiven_4;
	// System.String Pokemon::namePoke
	String_t* ___namePoke_5;
	// UnityEngine.Sprite Pokemon::sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite_6;
	// System.Int32 Pokemon::xpGiven
	int32_t ___xpGiven_7;
	// System.String Pokemon::type1
	String_t* ___type1_8;
	// System.String Pokemon::type2
	String_t* ___type2_9;
	// System.Boolean Pokemon::estEnemy
	bool ___estEnemy_10;
	// System.Boolean Pokemon::estPlayer
	bool ___estPlayer_11;
	// System.Boolean Pokemon::estStorage
	bool ___estStorage_12;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// IncrementPrefabsWithScriptableObject/<>c
struct U3CU3Ec_t5CCCDC0BA9F500588A6104857350D5038BD8E42E  : public RuntimeObject
{
};

struct U3CU3Ec_t5CCCDC0BA9F500588A6104857350D5038BD8E42E_StaticFields
{
	// IncrementPrefabsWithScriptableObject/<>c IncrementPrefabsWithScriptableObject/<>c::<>9
	U3CU3Ec_t5CCCDC0BA9F500588A6104857350D5038BD8E42E* ___U3CU3E9_0;
	// UnityEngine.Events.UnityAction IncrementPrefabsWithScriptableObject/<>c::<>9__2_0
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___U3CU3E9__2_0_1;
};

// MenuInterraction/<RoutineAffichageMessage>d__9
struct U3CRoutineAffichageMessageU3Ed__9_t55EA49C04717F2B7ABDF3C47E7EB1253EBD94BE4  : public RuntimeObject
{
	// System.Int32 MenuInterraction/<RoutineAffichageMessage>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MenuInterraction/<RoutineAffichageMessage>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MenuInterraction MenuInterraction/<RoutineAffichageMessage>d__9::<>4__this
	MenuInterraction_t5F80DECE49CEF61C996CD13727F8D4A83A495DA6* ___U3CU3E4__this_2;
};

// MusicManager/<ChangeMusic>d__5
struct U3CChangeMusicU3Ed__5_t20247B8D03CD56297DF42B6CE2F538CAD66D6414  : public RuntimeObject
{
	// System.Int32 MusicManager/<ChangeMusic>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MusicManager/<ChangeMusic>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MusicManager MusicManager/<ChangeMusic>d__5::<>4__this
	MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* ___U3CU3E4__this_2;
	// UnityEngine.AudioClip MusicManager/<ChangeMusic>d__5::currentClipIn
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___currentClipIn_3;
};

// MusicManager/<NoMusicTransfert>d__6
struct U3CNoMusicTransfertU3Ed__6_tAF5B0DD1F74BCFA265F442FFF5D78BD22549BEE9  : public RuntimeObject
{
	// System.Int32 MusicManager/<NoMusicTransfert>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MusicManager/<NoMusicTransfert>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MusicManager MusicManager/<NoMusicTransfert>d__6::<>4__this
	MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* ___U3CU3E4__this_2;
};

// PlayerCore/<>c__DisplayClass27_0
struct U3CU3Ec__DisplayClass27_0_tB1172B89E35EF7C31682B601659EECDEEE37900C  : public RuntimeObject
{
	// System.Int32 PlayerCore/<>c__DisplayClass27_0::i
	int32_t ___i_0;
	// PlayerCore PlayerCore/<>c__DisplayClass27_0::<>4__this
	PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* ___U3CU3E4__this_1;
};

// PlayerCore/<>c__DisplayClass27_1
struct U3CU3Ec__DisplayClass27_1_t46F6E4DE8C1420F756308E3D33CED23A5943E7EF  : public RuntimeObject
{
	// System.Int32 PlayerCore/<>c__DisplayClass27_1::i
	int32_t ___i_0;
	// PlayerCore PlayerCore/<>c__DisplayClass27_1::<>4__this
	PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* ___U3CU3E4__this_1;
};

// PlayerCore/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_tE931918B7DF190A5DDACF236875527C88DCA3C41  : public RuntimeObject
{
	// PlayerCore PlayerCore/<>c__DisplayClass29_0::<>4__this
	PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* ___U3CU3E4__this_0;
	// System.Int32 PlayerCore/<>c__DisplayClass29_0::i
	int32_t ___i_1;
	// System.Predicate`1<UnityEngine.GameObject> PlayerCore/<>c__DisplayClass29_0::<>9__0
	Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F* ___U3CU3E9__0_2;
};

// PopUpInfo/<fermetureAuto>d__6
struct U3CfermetureAutoU3Ed__6_t7EE26AD7B428A6897545728EB4FF4C3899DDC1B4  : public RuntimeObject
{
	// System.Int32 PopUpInfo/<fermetureAuto>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PopUpInfo/<fermetureAuto>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PopUpInfo PopUpInfo/<fermetureAuto>d__6::<>4__this
	PopUpInfo_tAD1073FE05EFD0F458EB7944B5951032F236EA2E* ___U3CU3E4__this_2;
};

// WinBadgesOrLigues/<Win>d__6
struct U3CWinU3Ed__6_tD1E23B3CE118867FE5C7336125C505FBA3BF52EE  : public RuntimeObject
{
	// System.Int32 WinBadgesOrLigues/<Win>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WinBadgesOrLigues/<Win>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// WinBadgesOrLigues WinBadgesOrLigues/<Win>d__6::<>4__this
	WinBadgesOrLigues_t0333DDB55F7891A171F154295F2F4B7FC3F2D26B* ___U3CU3E4__this_2;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Sprite>
struct Enumerator_tD2EB3DD5FD266C0F9F7DE350E94815F08A9F9324 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	String_t* ____current_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
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
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
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
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Predicate`1<UnityEngine.GameObject>
struct Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// PokemonScriptableObjectEnemy
struct PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Int32 PokemonScriptableObjectEnemy::id
	int32_t ___id_4;
	// System.Int32 PokemonScriptableObjectEnemy::lvl
	int32_t ___lvl_5;
	// System.Int32 PokemonScriptableObjectEnemy::maxHp
	int32_t ___maxHp_6;
	// System.Int32 PokemonScriptableObjectEnemy::hp
	int32_t ___hp_7;
	// System.Int32 PokemonScriptableObjectEnemy::coinGiven
	int32_t ___coinGiven_8;
	// System.String PokemonScriptableObjectEnemy::namePoke
	String_t* ___namePoke_9;
	// UnityEngine.Sprite PokemonScriptableObjectEnemy::sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite_10;
	// System.Int32 PokemonScriptableObjectEnemy::xpGiven
	int32_t ___xpGiven_11;
	// System.String PokemonScriptableObjectEnemy::type1
	String_t* ___type1_12;
	// System.String PokemonScriptableObjectEnemy::type2
	String_t* ___type2_13;
};

// PokemonScriptableObjectPlayer
struct PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Int32 PokemonScriptableObjectPlayer::id
	int32_t ___id_4;
	// System.Int32 PokemonScriptableObjectPlayer::lvl
	int32_t ___lvl_5;
	// System.Int32 PokemonScriptableObjectPlayer::damage
	int32_t ___damage_6;
	// System.String PokemonScriptableObjectPlayer::namePoke
	String_t* ___namePoke_7;
	// UnityEngine.Sprite PokemonScriptableObjectPlayer::sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite_8;
	// System.Int32 PokemonScriptableObjectPlayer::xp
	int32_t ___xp_9;
	// System.Int32 PokemonScriptableObjectPlayer::maxXp
	int32_t ___maxXp_10;
	// System.Boolean PokemonScriptableObjectPlayer::isStarter
	bool ___isStarter_11;
	// System.String PokemonScriptableObjectPlayer::type1
	String_t* ___type1_12;
	// System.String PokemonScriptableObjectPlayer::type2
	String_t* ___type2_13;
};

// PokemonScriptableObjectShop
struct PokemonScriptableObjectShop_tACBEF0C6F0B0725664A9438B860D3A7432ABB545  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String PokemonScriptableObjectShop::namePoke
	String_t* ___namePoke_4;
	// UnityEngine.Sprite PokemonScriptableObjectShop::sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite_5;
	// System.Int32 PokemonScriptableObjectShop::cost
	int32_t ___cost_6;
	// System.String PokemonScriptableObjectShop::type1
	String_t* ___type1_7;
	// System.String PokemonScriptableObjectShop::type2
	String_t* ___type2_8;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// ChangeMapCore
struct ChangeMapCore_t50C557EAE2615C982809A62FAB5EAFDFEE4346BF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// EnemyCore ChangeMapCore::enemyScript
	EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* ___enemyScript_4;
	// PlayerCore ChangeMapCore::playerScript
	PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* ___playerScript_5;
	// UnityEngine.GameObject ChangeMapCore::routeNameText
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___routeNameText_6;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> ChangeMapCore::RoutePanelBack
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ___RoutePanelBack_7;
	// UnityEngine.GameObject ChangeMapCore::RoutePanelBackObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___RoutePanelBackObject_8;
	// PokemonScriptableObjectEnemy[] ChangeMapCore::pokemonRoute
	PokemonScriptableObjectEnemyU5BU5D_t52F1A2ECBC98A8CDC8F2CC76386A9AFD3F520A00* ___pokemonRoute_9;
};

// Cheat
struct Cheat_t4ED8823AA3C034E784124AA28F0DCAB7A4A6AB40  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Cheat::cheatPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cheatPanel_4;
	// PlayerCore Cheat::player
	PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* ___player_5;
	// EnemyCore Cheat::enemy
	EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* ___enemy_6;
};

// ChooseStarter
struct ChooseStarter_t912FC58203BE5BA335051A5201E48B131D863FD4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ChooseStarter::bulbizarrePrefabs
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bulbizarrePrefabs_4;
	// UnityEngine.GameObject ChooseStarter::salamechePrefabs
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___salamechePrefabs_5;
	// UnityEngine.GameObject ChooseStarter::carapucePrefabs
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___carapucePrefabs_6;
	// UnityEngine.AudioSource ChooseStarter::objetMusic
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___objetMusic_7;
};

// ClickScript
struct ClickScript_t4B24BB07677BC6765DD67260652B6F47C6BF309F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// EnemyCore ClickScript::enemy
	EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* ___enemy_4;
	// PlayerCore ClickScript::player
	PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* ___player_5;
	// TableType ClickScript::tableType
	TableType_t4F8D447FAEEA8C0F3609B4BD58E1EE94D88A7E09* ___tableType_6;
	// TMPro.TextMeshProUGUI ClickScript::damageTypeText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___damageTypeText_7;
	// TMPro.TextMeshProUGUI ClickScript::damageTypeTextChampion
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___damageTypeTextChampion_8;
};

// EnemyCore
struct EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PokemonScriptableObjectEnemy EnemyCore::pokemonObject
	PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* ___pokemonObject_4;
	// UnityEngine.GameObject EnemyCore::enemyPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemyPrefab_5;
	// UnityEngine.UI.Slider EnemyCore::pokemonHpSliderBar
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___pokemonHpSliderBar_6;
	// PokemonScriptableObjectEnemy[] EnemyCore::pokemonInstanceObject
	PokemonScriptableObjectEnemyU5BU5D_t52F1A2ECBC98A8CDC8F2CC76386A9AFD3F520A00* ___pokemonInstanceObject_7;
	// ClickScript EnemyCore::scriptClick
	ClickScript_t4B24BB07677BC6765DD67260652B6F47C6BF309F* ___scriptClick_8;
	// TableType EnemyCore::scriptTableType
	TableType_t4F8D447FAEEA8C0F3609B4BD58E1EE94D88A7E09* ___scriptTableType_9;
	// UnityEngine.GameObject EnemyCore::objectForPokemonType
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objectForPokemonType_10;
	// UnityEngine.GameObject EnemyCore::objectForPokemonTypeChampion
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objectForPokemonTypeChampion_11;
	// System.Int32 EnemyCore::aleaPokemonInstanceObject
	int32_t ___aleaPokemonInstanceObject_12;
	// PokemonScriptableObjectEnemy EnemyCore::pokemonChampionObject
	PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* ___pokemonChampionObject_13;
	// UnityEngine.GameObject EnemyCore::championPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___championPanel_14;
	// PokemonScriptableObjectEnemy[] EnemyCore::pokemonInstanceObjectChampion
	PokemonScriptableObjectEnemyU5BU5D_t52F1A2ECBC98A8CDC8F2CC76386A9AFD3F520A00* ___pokemonInstanceObjectChampion_15;
	// System.Boolean EnemyCore::isInChampionsFight
	bool ___isInChampionsFight_16;
	// System.Single EnemyCore::fightTimer
	float ___fightTimer_17;
	// UnityEngine.UI.Slider EnemyCore::timerChampionSliderBar
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___timerChampionSliderBar_18;
	// UnityEngine.UI.Slider EnemyCore::pokemonHpChampionSliderBar
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___pokemonHpChampionSliderBar_19;
	// System.Int32 EnemyCore::indexPokemonChampionUse
	int32_t ___indexPokemonChampionUse_20;
	// UnityEngine.GameObject[] EnemyCore::numberOfPokemonChampion
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___numberOfPokemonChampion_21;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> EnemyCore::badgeAvailable
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___badgeAvailable_22;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> EnemyCore::badgePlayerObtain
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___badgePlayerObtain_23;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> EnemyCore::champions
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ___champions_24;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> EnemyCore::routeActivate
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___routeActivate_25;
	// WinBadgesOrLigues EnemyCore::winScript
	WinBadgesOrLigues_t0333DDB55F7891A171F154295F2F4B7FC3F2D26B* ___winScript_26;
};

// GestionUIPanel
struct GestionUIPanel_t62B5CEB7B9B4B03F1FEA92085B3CAE918FF8D319  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GestionUIPanel::panelPokemon
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___panelPokemon_4;
	// UnityEngine.GameObject GestionUIPanel::panelStorage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___panelStorage_5;
	// UnityEngine.GameObject GestionUIPanel::panelShop
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___panelShop_6;
	// UnityEngine.GameObject GestionUIPanel::panelMap
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___panelMap_7;
	// UnityEngine.GameObject GestionUIPanel::panelPokedollars
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___panelPokedollars_8;
	// UnityEngine.GameObject GestionUIPanel::iconePokemon
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___iconePokemon_9;
	// UnityEngine.GameObject GestionUIPanel::iconeStorage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___iconeStorage_10;
	// UnityEngine.GameObject GestionUIPanel::iconeShop
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___iconeShop_11;
	// UnityEngine.GameObject GestionUIPanel::iconeMap
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___iconeMap_12;
	// UnityEngine.GameObject GestionUIPanel::panelChampionsFight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___panelChampionsFight_13;
};

// IncrementPrefabsWithScriptableObject
struct IncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PokemonScriptableObjectPlayer IncrementPrefabsWithScriptableObject::pokemon
	PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* ___pokemon_4;
	// UnityEngine.GameObject IncrementPrefabsWithScriptableObject::storagePrefabs
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___storagePrefabs_5;
};

// IncrementPrefabsWithScriptableObjectStorage
struct IncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PokemonScriptableObjectPlayer IncrementPrefabsWithScriptableObjectStorage::pokemon
	PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* ___pokemon_4;
	// UnityEngine.GameObject IncrementPrefabsWithScriptableObjectStorage::pokemonPrefabs
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pokemonPrefabs_5;
};

// InstanciatePokemon
struct InstanciatePokemon_tDF0A8C405EF4A0171FFF22108615868A8835F610  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 InstanciatePokemon::posPokeInstantiate
	int32_t ___posPokeInstantiate_4;
	// UnityEngine.GameObject InstanciatePokemon::poke
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___poke_5;
	// System.Int32 InstanciatePokemon::posXShopInstantiate
	int32_t ___posXShopInstantiate_6;
	// System.Int32 InstanciatePokemon::posYShopInstantiate
	int32_t ___posYShopInstantiate_7;
	// System.Int32 InstanciatePokemon::compteurShop
	int32_t ___compteurShop_8;
	// UnityEngine.GameObject InstanciatePokemon::shop
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shop_9;
	// System.Int32 InstanciatePokemon::posXStorageInstantiate
	int32_t ___posXStorageInstantiate_10;
	// System.Int32 InstanciatePokemon::posYStorageInstantiate
	int32_t ___posYStorageInstantiate_11;
	// System.Int32 InstanciatePokemon::compteurStorage
	int32_t ___compteurStorage_12;
	// UnityEngine.GameObject InstanciatePokemon::storage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___storage_13;
};

// MenuInterraction
struct MenuInterraction_t5F80DECE49CEF61C996CD13727F8D4A83A495DA6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MenuInterraction::boutonContinuer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boutonContinuer_4;
	// UnityEngine.GameObject MenuInterraction::boutonNewGame
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boutonNewGame_5;
	// TMPro.TextMeshProUGUI MenuInterraction::message
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___message_6;
};

// MusicManager
struct MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource MusicManager::objetMusic
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___objetMusic_4;
	// UnityEngine.AudioClip[] MusicManager::music
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___music_5;
	// UnityEngine.AudioClip MusicManager::currentClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___currentClip_6;
};

// PlayerCore
struct PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean PlayerCore::activerTestForStarter
	bool ___activerTestForStarter_5;
	// UnityEngine.GameObject PlayerCore::tempoStarter
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tempoStarter_6;
	// InstanciatePokemon PlayerCore::instanceStarter
	InstanciatePokemon_tDF0A8C405EF4A0171FFF22108615868A8835F610* ___instanceStarter_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PlayerCore::playerPokemon
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___playerPokemon_8;
	// System.Int32 PlayerCore::maxPlayerPokemon
	int32_t ___maxPlayerPokemon_9;
	// System.Boolean PlayerCore::goStorage
	bool ___goStorage_10;
	// UnityEngine.GameObject PlayerCore::currentPlayerPokemon
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentPlayerPokemon_11;
	// UnityEngine.GameObject PlayerCore::oldCurrentPlayerPokemon
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___oldCurrentPlayerPokemon_12;
	// PokemonScriptableObjectPlayer PlayerCore::currentPlayerPokemonStats
	PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* ___currentPlayerPokemonStats_13;
	// System.Int32 PlayerCore::sliderCurrentPokemon
	int32_t ___sliderCurrentPokemon_14;
	// System.Int32 PlayerCore::coin
	int32_t ___coin_15;
	// UnityEngine.GameObject PlayerCore::coinUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___coinUI_16;
	// EnemyCore PlayerCore::enemyPokemon
	EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* ___enemyPokemon_17;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PlayerCore::shopPokemon
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___shopPokemon_18;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PlayerCore::storagePokemon
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___storagePokemon_19;
};

struct PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_StaticFields
{
	// UnityEngine.GameObject PlayerCore::starter
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___starter_4;
};

// PopUpInfo
struct PopUpInfo_tAD1073FE05EFD0F458EB7944B5951032F236EA2E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PopUpInfo::popUpPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___popUpPanel_4;
	// System.String PopUpInfo::textPopUp
	String_t* ___textPopUp_5;
};

// SaveData3
struct SaveData3_t6A98FFD6760807C16AD260C3E9C335927F7EFC47  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Data SaveData3::dataForSave
	Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* ___dataForSave_5;
	// Data SaveData3::dataForLoad
	Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* ___dataForLoad_6;
	// PlayerCore SaveData3::player
	PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* ___player_7;
	// EnemyCore SaveData3::enemy
	EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* ___enemy_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SaveData3::allPrefabPokemon
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___allPrefabPokemon_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SaveData3::allPrefabPokemonStorage
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___allPrefabPokemonStorage_10;
};

struct SaveData3_t6A98FFD6760807C16AD260C3E9C335927F7EFC47_StaticFields
{
	// System.Boolean SaveData3::onContinue
	bool ___onContinue_4;
};

// TableType
struct TableType_t4F8D447FAEEA8C0F3609B4BD58E1EE94D88A7E09  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.Sprite> TableType::listSpritesForType
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ___listSpritesForType_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIPokemonShop
struct UIPokemonShop_tAE361E81FC9B65FB7ACA5D12CB546AA4F99C3C2E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PokemonScriptableObjectShop UIPokemonShop::statPokemonShop
	PokemonScriptableObjectShop_tACBEF0C6F0B0725664A9438B860D3A7432ABB545* ___statPokemonShop_4;
	// UnityEngine.GameObject UIPokemonShop::pokemonObjectShop
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pokemonObjectShop_5;
	// UnityEngine.GameObject UIPokemonShop::pokemonObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pokemonObject_6;
	// UnityEngine.GameObject UIPokemonShop::storageObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___storageObject_7;
};

// WinBadgesOrLigues
struct WinBadgesOrLigues_t0333DDB55F7891A171F154295F2F4B7FC3F2D26B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean WinBadgesOrLigues::winBadge
	bool ___winBadge_4;
	// UnityEngine.GameObject WinBadgesOrLigues::panelWin
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___panelWin_5;
	// UnityEngine.Sprite WinBadgesOrLigues::spriteBadge
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___spriteBadge_6;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_Started
	bool ___m_Started_16;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_IsTrackingUIToolkitPanels
	bool ___m_IsTrackingUIToolkitPanels_17;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// PokemonScriptableObjectEnemy[]
struct PokemonScriptableObjectEnemyU5BU5D_t52F1A2ECBC98A8CDC8F2CC76386A9AFD3F520A00  : public RuntimeArray
{
	ALIGN_FIELD (8) PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* m_Items[1];

	inline PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3  : public RuntimeArray
{
	ALIGN_FIELD (8) Touch_t03E51455ED508492B3F278903A0114FA0E87B417 m_Items[1];

	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* m_Items[1];

	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___item1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m1A8DE2A7640CC473609F3ADAC38FDB960520636D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TMPro.TMP_Text>()
inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Slider>()
inline Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, float ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TableType>()
inline TableType_t4F8D447FAEEA8C0F3609B4BD58E1EE94D88A7E09* GameObject_GetComponent_TisTableType_t4F8D447FAEEA8C0F3609B4BD58E1EE94D88A7E09_mAB4897B3CDA15C8981E395E7110EE78B8CD0D16C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TableType_t4F8D447FAEEA8C0F3609B4BD58E1EE94D88A7E09* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Sprite TableType::SpriteForType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* TableType_SpriteForType_mF5F2224C5A7E6A6A4F27268F91A008ACF3EA58A7 (TableType_t4F8D447FAEEA8C0F3609B4BD58E1EE94D88A7E09* __this, String_t* ___type0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<PlayerCore>()
inline PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* GameObject_GetComponent_TisPlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_m8D8A17457C2F9D76018A5CDDB7C21FDCC6156C29 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void PlayerCore::SelectCurrentPokemon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore_SelectCurrentPokemon_m73E0321B9344A4449A5F240AE71B5F4045EC731B (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, const RuntimeMethod* method) ;
// System.Void PlayerCore::StoragePokemon(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore_StoragePokemon_mBB76F9F7A8F9C1CC5B5D26F404C8061D31606E00 (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab0, const RuntimeMethod* method) ;
// System.Void IncrementPrefabsWithScriptableObject/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB3AE5BFF3255423312BC5F10F73E6D49B08706ED (U3CU3Ec_t5CCCDC0BA9F500588A6104857350D5038BD8E42E* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void PlayerCore::AddPokemon(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore_AddPokemon_mC16110C15F4D3FEE4C5F569D53A97AF398FB03B5 (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TMPro.TMP_Text>()
inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void ChangeMapCore::ChooseRoutePanelBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeMapCore_ChooseRoutePanelBack_mF26C8B3A6AAAE4B80E1584320DA0C246B6865B83 (ChangeMapCore_t50C557EAE2615C982809A62FAB5EAFDFEE4346BF* __this, const RuntimeMethod* method) ;
// System.Void EnemyCore::InstancePokemonEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyCore_InstancePokemonEnemy_m2A221B326465D1F3B5DC6188DDBE69A19A869B2E (EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<GestionUIPanel>()
inline GestionUIPanel_t62B5CEB7B9B4B03F1FEA92085B3CAE918FF8D319* Component_GetComponent_TisGestionUIPanel_t62B5CEB7B9B4B03F1FEA92085B3CAE918FF8D319_m2B4E1DEF12D0B2646B982AFDF3CA0DF1C8229009 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  GestionUIPanel_t62B5CEB7B9B4B03F1FEA92085B3CAE918FF8D319* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void GestionUIPanel::OpenPanelPokemon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestionUIPanel_OpenPanelPokemon_m485057C445E6F2A4E04E73EE98AC90B10F820B14 (GestionUIPanel_t62B5CEB7B9B4B03F1FEA92085B3CAE918FF8D319* __this, const RuntimeMethod* method) ;
// System.Void EnemyCore::EndChampionFight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyCore_EndChampionFight_m5078B043036462986E455BCEA2B7B3B0FE6B1A62 (EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Sprite>::get_Item(System.Int32)
inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354 (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void PlayerCore::LevelUpPlayerPokemon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore_LevelUpPlayerPokemon_mDEB65F9310705DFFC7F6E49B649F9CD879204500 (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, const RuntimeMethod* method) ;
// System.Void EnemyCore::WinChampionfight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyCore_WinChampionfight_mEA1F41A91973A7E722317B288FD111B1802084D1 (EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* __this, bool ___load0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<IncrementPrefabsWithScriptableObject>()
inline IncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7* GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  IncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// UnityEngine.DeviceType UnityEngine.SystemInfo::get_deviceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_deviceType_mB67B9AC09C2BE8A8B0AED6765AD70719D15C889F (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842 (int32_t ___key0, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void ClickScript::AppliquerDamage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickScript_AppliquerDamage_mF4785CF888D9BE9A51B43341878B5AF8E6A2A282 (ClickScript_t4B24BB07677BC6765DD67260652B6F47C6BF309F* __this, bool ___estChampion0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF (const RuntimeMethod* method) ;
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* Input_get_touches_m884B92DD9A389F7985AB275A9717AC629C258B6B (const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Touch::get_fingerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_m238732B4FDEA343976D798FF04DB34C3221243C2 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, int32_t ___pointerId0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// System.String TableType::ResultatTableType(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TableType_ResultatTableType_m125564E0AB6BCC1EF9580FC646949A19E43E225E (String_t* ___typeAttaque10, String_t* ___typeAttaque21, String_t* ___typeDefense12, String_t* ___typeDefense23, const RuntimeMethod* method) ;
// System.Void PlayerCore::OnDeathPokemon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore_OnDeathPokemon_m9ECB501759B841AFA5396A16EC33B41525176D17 (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, const RuntimeMethod* method) ;
// System.Void EnemyCore::OnDeathPokemon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyCore_OnDeathPokemon_m55795BAA793A4D3EDEE71FBE44945AA369940DEA (EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void EnemyCore::OnDeathPokemonChampion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyCore_OnDeathPokemonChampion_mD6EDC7DC507EE410F49A31B62ED0F657D037F548 (EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void EnemyCore::DefeatChampionFight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyCore_DefeatChampionFight_mEF95AFAF26EDCC512486B18B9D5D097B2FAEC516 (EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void EnemyCore::PokemonChampion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyCore_PokemonChampion_mA6F3F0C76283E51534CFE9BE1CF96FC51129AB40 (EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Insert(System.Int32,T)
inline void List_1_Insert_m16F098D3BC103A12E2E2FF5C4666F90864B7658B (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared)(__this, ___index0, ___item1, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(T)
inline bool List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Sprite>::Remove(T)
inline bool List_1_Remove_mD45F9492B19AB597D9741153BB51DD8F94F09737 (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void EnemyCore::ActivationRoute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyCore_ActivationRoute_m51EE9F4961A87BFBC3430DBACB0AA13447A9F602 (EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* __this, const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.UI.Image::get_sprite()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// System.Void WinBadgesOrLigues::RemplirVarWin(UnityEngine.Sprite,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinBadgesOrLigues_RemplirVarWin_m8EA7BD3EDEA281CFFC0CBD62DC070256633AAE01_inline (WinBadgesOrLigues_t0333DDB55F7891A171F154295F2F4B7FC3F2D26B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___spriteBadgeTemp0, String_t* ___textWinTemp1, const RuntimeMethod* method) ;
// System.Void WinBadgesOrLigues::startCorou()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinBadgesOrLigues_startCorou_mEAE59B28ED4ECED51DF5D4464DC3CFA7059515B7 (WinBadgesOrLigues_t0333DDB55F7891A171F154295F2F4B7FC3F2D26B* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetAsLastSibling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetAsLastSibling_m848AF1A0B4C7912FE88D8CBCF92B83D57B2B917E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9 (String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void MusicManager::Route1Et2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicManager_Route1Et2_m64CB5855B637195B6397C1A53D7A0BDFA13222DB (MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* __this, const RuntimeMethod* method) ;
// System.Void MusicManager/<ChangeMusic>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeMusicU3Ed__5__ctor_m6425F685FB2F1DFB2FFC00F940113DED58BCF655 (U3CChangeMusicU3Ed__5_t20247B8D03CD56297DF42B6CE2F538CAD66D6414* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void MusicManager/<NoMusicTransfert>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNoMusicTransfertU3Ed__6__ctor_mFF6A59B731C793AAB4D86A7AF53B2149D2F6A3B2 (U3CNoMusicTransfertU3Ed__6_tAF5B0DD1F74BCFA265F442FFF5D78BD22549BEE9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MusicManager::NoMusicTransfert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MusicManager_NoMusicTransfert_m4977E7E4324CC4A7F3A6E12A6CA3A1CEDAE503AA (MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MusicManager::ChangeMusic(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MusicManager_ChangeMusic_m15031195B144DA14EA3CD35F2B023856E04B30A6 (MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___currentClipIn0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<ChooseStarter>()
inline ChooseStarter_t912FC58203BE5BA335051A5201E48B131D863FD4* GameObject_GetComponent_TisChooseStarter_t912FC58203BE5BA335051A5201E48B131D863FD4_m877614F2D6345C82CC42CBBCF3C78BBF0EE670D4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ChooseStarter_t912FC58203BE5BA335051A5201E48B131D863FD4* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void InstanciatePokemon::InstantiatePokemon(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstanciatePokemon_InstantiatePokemon_mA162E874CBBE858F3117F7E06A28DBA87BCD35C4 (InstanciatePokemon_tDF0A8C405EF4A0171FFF22108615868A8835F610* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefabPoke0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void PlayerCore::InstantiateShop2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore_InstantiateShop2_mD68E74986F4ABC4C432CC935F169FC03FF4C51A1 (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, const RuntimeMethod* method) ;
// System.Void PlayerCore::RefreshCoinUi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore_RefreshCoinUi_mFDA27DBF35C4FBC1C71FB09971759D88296BC99B (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UIPokemonShop>()
inline UIPokemonShop_tAE361E81FC9B65FB7ACA5D12CB546AA4F99C3C2E* GameObject_GetComponent_TisUIPokemonShop_tAE361E81FC9B65FB7ACA5D12CB546AA4F99C3C2E_m37789B220B55646448F02C40B6CEB5D5CE3F2569 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UIPokemonShop_tAE361E81FC9B65FB7ACA5D12CB546AA4F99C3C2E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void InstanciatePokemon::InstantiateStorage(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstanciatePokemon_InstantiateStorage_m1CC49A4AE87FD37C2BC6079EE5C24E33AAA9FFA6 (InstanciatePokemon_tDF0A8C405EF4A0171FFF22108615868A8835F610* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefabPoke0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void PlayerCore::ClearUIShop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore_ClearUIShop_mAFECCD8E25E0D7B9A523AD2530C42FA902D82EB4 (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, const RuntimeMethod* method) ;
// System.Void PlayerCore/<>c__DisplayClass27_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0__ctor_m9740B823618E833E25723542FEB9D0F2DB86AC6B (U3CU3Ec__DisplayClass27_0_tB1172B89E35EF7C31682B601659EECDEEE37900C* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<UnityEngine.GameObject>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mA6DFC557EC23A389E927DA976D39231E29AA5B5E (Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAll(System.Predicate`1<T>)
inline int32_t List_1_RemoveAll_m1D3CBAACE91557F72BF74D9572E9E7A435E5F338 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F* ___match0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F*, const RuntimeMethod*))List_1_RemoveAll_m1A8DE2A7640CC473609F3ADAC38FDB960520636D_gshared)(__this, ___match0, method);
}
// System.Void PlayerCore/<>c__DisplayClass27_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_1__ctor_m35C0FCAF13193E72101781407B43862AC38B3BE9 (U3CU3Ec__DisplayClass27_1_t46F6E4DE8C1420F756308E3D33CED23A5943E7EF* __this, const RuntimeMethod* method) ;
// System.Void InstanciatePokemon::InstantiateShop(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstanciatePokemon_InstantiateShop_mAC29CFBE26814FD51912C5D8D236580C8F1A5759 (InstanciatePokemon_tDF0A8C405EF4A0171FFF22108615868A8835F610* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefabPoke0, const RuntimeMethod* method) ;
// System.Void PlayerCore::ClearUIPokemon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore_ClearUIPokemon_mAE963C708560048022FBAD0399A46AC6F5D15B72 (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, const RuntimeMethod* method) ;
// System.Void PlayerCore::ClearUIStorage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore_ClearUIStorage_m6B061AB2125A04B5C4A5ECD8BA24FADDC16026A8 (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, const RuntimeMethod* method) ;
// System.Void PlayerCore/<>c__DisplayClass29_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0__ctor_m0F48772182A8FC59E9A75718C6D0D8FDF1AC36FD (U3CU3Ec__DisplayClass29_0_tE931918B7DF190A5DDACF236875527C88DCA3C41* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.String TableType::TableDesTypes(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TableType_TableDesTypes_mBB42E30C3762DEEC37A2C97C873F30C23B03EFF3 (String_t* ___typeAttaque0, String_t* ___typeDefense1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7 (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Sprite>::GetEnumerator()
inline Enumerator_tD2EB3DD5FD266C0F9F7DE350E94815F08A9F9324 List_1_GetEnumerator_m287A2DC6A1FC1EF8920E8244CF0BFC04723260F3 (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD2EB3DD5FD266C0F9F7DE350E94815F08A9F9324 (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Sprite>::Dispose()
inline void Enumerator_Dispose_mC2944E5125933569A7157B7C90399BEF9C44313C (Enumerator_tD2EB3DD5FD266C0F9F7DE350E94815F08A9F9324* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD2EB3DD5FD266C0F9F7DE350E94815F08A9F9324*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Sprite>::get_Current()
inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Enumerator_get_Current_m91DC3318511183BDAADD91C8791135AE5A2B71ED_inline (Enumerator_tD2EB3DD5FD266C0F9F7DE350E94815F08A9F9324* __this, const RuntimeMethod* method)
{
	return ((  Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* (*) (Enumerator_tD2EB3DD5FD266C0F9F7DE350E94815F08A9F9324*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Sprite>::MoveNext()
inline bool Enumerator_MoveNext_m779FA5FCE005ABE1D7E9C78A5B14684BA7FA864A (Enumerator_tD2EB3DD5FD266C0F9F7DE350E94815F08A9F9324* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD2EB3DD5FD266C0F9F7DE350E94815F08A9F9324*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Collections.IEnumerator PopUpInfo::fermetureAuto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PopUpInfo_fermetureAuto_m759C8805988B47E1B05D29296BB08214B1C26F5C (PopUpInfo_tAD1073FE05EFD0F458EB7944B5951032F236EA2E* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void PopUpInfo/<fermetureAuto>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CfermetureAutoU3Ed__6__ctor_mE7FCF885ED8D412674B1E8D0C211962AACC25EB7 (U3CfermetureAutoU3Ed__6_t7EE26AD7B428A6897545728EB4FF4C3899DDC1B4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void SaveData3::LoadToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData3_LoadToJson_m73D5DDDBBB6D47E133AEA1911040E150BF053C55 (SaveData3_t6A98FFD6760807C16AD260C3E9C335927F7EFC47* __this, const RuntimeMethod* method) ;
// System.Void Data::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Data__ctor_mAD0738081D5922E1E6C75A516F6564FBB8468214 (Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* __this, const RuntimeMethod* method) ;
// System.Void Poke::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Poke__ctor_mE57B7C9505F53F884591555068C6B0383D596E86 (Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Poke>::Add(T)
inline void List_1_Add_m7FCD69D0014C21BC22D8CCDA59CFB4ACA7CD6600_inline (List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708* __this, Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708*, Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T UnityEngine.GameObject::GetComponent<IncrementPrefabsWithScriptableObjectStorage>()
inline IncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3* GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  IncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<Poke>::get_Item(System.Int32)
inline Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356 (List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* (*) (List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void PlayerCore::AddPokemonForLoad(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore_AddPokemonForLoad_mF76A1E7188FDCE3F95C0A6E6F5A880F3BDA4452C (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___poke0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Poke>::get_Count()
inline int32_t List_1_get_Count_m50B2B076888A333E177402056C615E5979B75375_inline (List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void PlayerCore::AddPokemonStorageForLoad(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore_AddPokemonStorageForLoad_m073189036944A8802DC6D794268ACB1F47A2580C (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___poke0, const RuntimeMethod* method) ;
// System.Void SaveData3::SaveAllData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData3_SaveAllData_mA99FD44305E010915F80C0642D759B333B3F4254 (SaveData3_t6A98FFD6760807C16AD260C3E9C335927F7EFC47* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mA7B20656D12861446AAA157DF6E9ACBBD78EC0AC (RuntimeObject* ___obj0, bool ___prettyPrint1, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17 (const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mB5CB249F5370D49747243BCA9C56CCC48D3E6A08 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllText_mE462D8448CA65183AA5D464210706167E0EF19EB (String_t* ___path0, String_t* ___contents1, const RuntimeMethod* method) ;
// System.String System.IO.File::ReadAllText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* File_ReadAllText_m5635BE83C14358AB1721547180F43103F777CEB5 (String_t* ___path0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<Data>(System.String)
inline Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* JsonUtility_FromJson_TisData_tD68044ADE8612868F3B424B065920F50C65B5CCE_mDD30F97326D48545982A2725699D35786A998AB8 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared)(___json0, method);
}
// System.Void SaveData3::LoadAllData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData3_LoadAllData_m1A3EFC32504D2E997F8F2CC7FB5CF707C0F09AC5 (SaveData3_t6A98FFD6760807C16AD260C3E9C335927F7EFC47* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Poke>::.ctor()
inline void List_1__ctor_mE2C875BD1394315BBADB39E649B762DA1EADA540 (List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void PlayerCore::BuyPokemon(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore_BuyPokemon_m26D0B3F50BFA24B90E2CA11EA6FB9FAFE7964057 (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___poke0, const RuntimeMethod* method) ;
// System.Void PlayerCore::BuyPokemonStorage(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore_BuyPokemonStorage_m5E44641D148C3C0D65F7CFC973E77CC328D5243C (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___poke0, const RuntimeMethod* method) ;
// System.Void WinBadgesOrLigues/<Win>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWinU3Ed__6__ctor_mB1B65B1C866EBC38FE2E9348EB8A37E2A35DC8D6 (U3CWinU3Ed__6_tD1E23B3CE118867FE5C7336125C505FBA3BF52EE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator WinBadgesOrLigues::Win()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WinBadgesOrLigues_Win_m2F4F4AF80B1E259C72960BED3C504328434E7DE6 (WinBadgesOrLigues_t0333DDB55F7891A171F154295F2F4B7FC3F2D26B* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void MenuInterraction/<RoutineAffichageMessage>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoutineAffichageMessageU3Ed__9__ctor_m78364B5E6AAEDC61E90D8CAEF2080B8CB78170B0 (U3CRoutineAffichageMessageU3Ed__9_t55EA49C04717F2B7ABDF3C47E7EB1253EBD94BE4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___item0, method);
}
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
// System.Void PokemonScriptableObjectEnemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PokemonScriptableObjectEnemy__ctor_m7F0A0F1BD4815401BD794AAFF1CE818427B6FCF1 (PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void PokemonScriptableObjectPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PokemonScriptableObjectPlayer__ctor_m052ACD980D42143052C33990D9C96D6DB678B1AE (PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void PokemonScriptableObjectShop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PokemonScriptableObjectShop__ctor_m47AF5D2D123FAA67F76CD60A488F21B8D75284FD (PokemonScriptableObjectShop_tACBEF0C6F0B0725664A9438B860D3A7432ABB545* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void IncrementPrefabsWithScriptableObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementPrefabsWithScriptableObject_Start_m17FE802B1836821F3E8EB219769D9077E27FDD32 (IncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTableType_t4F8D447FAEEA8C0F3609B4BD58E1EE94D88A7E09_mAB4897B3CDA15C8981E395E7110EE78B8CD0D16C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IncrementPrefabsWithScriptableObject_U3CStartU3Eb__2_1_m3B9C73F82E7D9AC1633C5DCB20707E6EFBA47C46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__2_0_mE7850484B98C21B3D446BD1E8E815934663DF564_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5CCCDC0BA9F500588A6104857350D5038BD8E42E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E00288BE8E6D23DF9E4EDA73329A5F0D0B74278);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC318561B667A89DAC927091F0FF2F9BFB48FC0CF);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B2_0 = NULL;
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* G_B2_1 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B1_0 = NULL;
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* G_B1_1 = NULL;
	{
		// this.transform.GetChild(0).GetComponent<TMP_Text>().text = pokemon.namePoke;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_0, 0, NULL);
		NullCheck(L_1);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2;
		L_2 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(L_1, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_3 = __this->___pokemon_4;
		NullCheck(L_3);
		String_t* L_4 = L_3->___namePoke_7;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_4);
		// this.transform.GetChild(1).GetComponent<Image>().sprite = pokemon.sprite;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_5, 1, NULL);
		NullCheck(L_6);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7;
		L_7 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_6, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_8 = __this->___pokemon_4;
		NullCheck(L_8);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_9 = L_8->___sprite_8;
		NullCheck(L_7);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_7, L_9, NULL);
		// this.transform.GetChild(2).GetComponent<TMP_Text>().text = "Lvl." + pokemon.lvl.ToString();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_10, 2, NULL);
		NullCheck(L_11);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_12;
		L_12 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(L_11, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_13 = __this->___pokemon_4;
		NullCheck(L_13);
		int32_t* L_14 = (&L_13->___lvl_5);
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralC318561B667A89DAC927091F0FF2F9BFB48FC0CF, L_15, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_12, L_16);
		// this.transform.GetChild(3).GetComponent<Slider>().maxValue = pokemon.maxXp;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_17, 3, NULL);
		NullCheck(L_18);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_19;
		L_19 = Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA(L_18, Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_20 = __this->___pokemon_4;
		NullCheck(L_20);
		int32_t L_21 = L_20->___maxXp_10;
		NullCheck(L_19);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_19, ((float)L_21), NULL);
		// this.transform.GetChild(3).GetComponent<Slider>().value = pokemon.xp;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_22, 3, NULL);
		NullCheck(L_23);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_24;
		L_24 = Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA(L_23, Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_25 = __this->___pokemon_4;
		NullCheck(L_25);
		int32_t L_26 = L_25->___xp_9;
		NullCheck(L_24);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_24, ((float)L_26));
		// this.transform.GetChild(4).GetComponent<Button>().onClick.AddListener(() => {
		//     GameObject.Find("Player").GetComponent<PlayerCore>().SelectCurrentPokemon();
		// });
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_27, 4, NULL);
		NullCheck(L_28);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_29;
		L_29 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_28, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		NullCheck(L_29);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_30;
		L_30 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_29, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t5CCCDC0BA9F500588A6104857350D5038BD8E42E_il2cpp_TypeInfo_var);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_31 = ((U3CU3Ec_t5CCCDC0BA9F500588A6104857350D5038BD8E42E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5CCCDC0BA9F500588A6104857350D5038BD8E42E_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_32 = L_31;
		G_B1_0 = L_32;
		G_B1_1 = L_30;
		if (L_32)
		{
			G_B2_0 = L_32;
			G_B2_1 = L_30;
			goto IL_00eb;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t5CCCDC0BA9F500588A6104857350D5038BD8E42E_il2cpp_TypeInfo_var);
		U3CU3Ec_t5CCCDC0BA9F500588A6104857350D5038BD8E42E* L_33 = ((U3CU3Ec_t5CCCDC0BA9F500588A6104857350D5038BD8E42E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5CCCDC0BA9F500588A6104857350D5038BD8E42E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_34 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_34, L_33, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__2_0_mE7850484B98C21B3D446BD1E8E815934663DF564_RuntimeMethod_var), NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_35 = L_34;
		((U3CU3Ec_t5CCCDC0BA9F500588A6104857350D5038BD8E42E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5CCCDC0BA9F500588A6104857350D5038BD8E42E_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t5CCCDC0BA9F500588A6104857350D5038BD8E42E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5CCCDC0BA9F500588A6104857350D5038BD8E42E_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1), (void*)L_35);
		G_B2_0 = L_35;
		G_B2_1 = G_B1_1;
	}

IL_00eb:
	{
		NullCheck(G_B2_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(G_B2_1, G_B2_0, NULL);
		// this.transform.GetChild(5).GetComponent<Button>().onClick.AddListener(() => {
		//     GameObject.Find("Player").GetComponent<PlayerCore>().SelectCurrentPokemon();
		//     GameObject.Find("Player").GetComponent<PlayerCore>().StoragePokemon(storagePrefabs);
		// });
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_36, 5, NULL);
		NullCheck(L_37);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_38;
		L_38 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_37, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		NullCheck(L_38);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_39;
		L_39 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_38, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_40 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_40, __this, (intptr_t)((void*)IncrementPrefabsWithScriptableObject_U3CStartU3Eb__2_1_m3B9C73F82E7D9AC1633C5DCB20707E6EFBA47C46_RuntimeMethod_var), NULL);
		NullCheck(L_39);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_39, L_40, NULL);
		// this.transform.GetChild(6).gameObject.transform.GetChild(0).GetComponent<Image>().sprite = GameObject.Find("TableType").GetComponent<TableType>().SpriteForType(pokemon.type1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_41, 6, NULL);
		NullCheck(L_42);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43;
		L_43 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_42, NULL);
		NullCheck(L_43);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_43, NULL);
		NullCheck(L_44);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_44, 0, NULL);
		NullCheck(L_45);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46;
		L_46 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_45, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47;
		L_47 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral8E00288BE8E6D23DF9E4EDA73329A5F0D0B74278, NULL);
		NullCheck(L_47);
		TableType_t4F8D447FAEEA8C0F3609B4BD58E1EE94D88A7E09* L_48;
		L_48 = GameObject_GetComponent_TisTableType_t4F8D447FAEEA8C0F3609B4BD58E1EE94D88A7E09_mAB4897B3CDA15C8981E395E7110EE78B8CD0D16C(L_47, GameObject_GetComponent_TisTableType_t4F8D447FAEEA8C0F3609B4BD58E1EE94D88A7E09_mAB4897B3CDA15C8981E395E7110EE78B8CD0D16C_RuntimeMethod_var);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_49 = __this->___pokemon_4;
		NullCheck(L_49);
		String_t* L_50 = L_49->___type1_12;
		NullCheck(L_48);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_51;
		L_51 = TableType_SpriteForType_mF5F2224C5A7E6A6A4F27268F91A008ACF3EA58A7(L_48, L_50, NULL);
		NullCheck(L_46);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_46, L_51, NULL);
		// this.transform.GetChild(6).gameObject.transform.GetChild(1).GetComponent<Image>().sprite = GameObject.Find("TableType").GetComponent<TableType>().SpriteForType(pokemon.type2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_52);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53;
		L_53 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_52, 6, NULL);
		NullCheck(L_53);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54;
		L_54 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_53, NULL);
		NullCheck(L_54);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_54, NULL);
		NullCheck(L_55);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56;
		L_56 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_55, 1, NULL);
		NullCheck(L_56);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_57;
		L_57 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_56, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58;
		L_58 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral8E00288BE8E6D23DF9E4EDA73329A5F0D0B74278, NULL);
		NullCheck(L_58);
		TableType_t4F8D447FAEEA8C0F3609B4BD58E1EE94D88A7E09* L_59;
		L_59 = GameObject_GetComponent_TisTableType_t4F8D447FAEEA8C0F3609B4BD58E1EE94D88A7E09_mAB4897B3CDA15C8981E395E7110EE78B8CD0D16C(L_58, GameObject_GetComponent_TisTableType_t4F8D447FAEEA8C0F3609B4BD58E1EE94D88A7E09_mAB4897B3CDA15C8981E395E7110EE78B8CD0D16C_RuntimeMethod_var);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_60 = __this->___pokemon_4;
		NullCheck(L_60);
		String_t* L_61 = L_60->___type2_13;
		NullCheck(L_59);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_62;
		L_62 = TableType_SpriteForType_mF5F2224C5A7E6A6A4F27268F91A008ACF3EA58A7(L_59, L_61, NULL);
		NullCheck(L_57);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_57, L_62, NULL);
		// }
		return;
	}
}
// System.Void IncrementPrefabsWithScriptableObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementPrefabsWithScriptableObject_Update_mD56DB73B3DAC737FFFA272AC1C55A005BF3490AF (IncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void IncrementPrefabsWithScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementPrefabsWithScriptableObject__ctor_m5588F3FD4549C100BD0D33778F2EB34E01DCB3ED (IncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void IncrementPrefabsWithScriptableObject::<Start>b__2_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementPrefabsWithScriptableObject_U3CStartU3Eb__2_1_m3B9C73F82E7D9AC1633C5DCB20707E6EFBA47C46 (IncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_m8D8A17457C2F9D76018A5CDDB7C21FDCC6156C29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject.Find("Player").GetComponent<PlayerCore>().SelectCurrentPokemon();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_0);
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_1;
		L_1 = GameObject_GetComponent_TisPlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_m8D8A17457C2F9D76018A5CDDB7C21FDCC6156C29(L_0, GameObject_GetComponent_TisPlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_m8D8A17457C2F9D76018A5CDDB7C21FDCC6156C29_RuntimeMethod_var);
		NullCheck(L_1);
		PlayerCore_SelectCurrentPokemon_m73E0321B9344A4449A5F240AE71B5F4045EC731B(L_1, NULL);
		// GameObject.Find("Player").GetComponent<PlayerCore>().StoragePokemon(storagePrefabs);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_2);
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_3;
		L_3 = GameObject_GetComponent_TisPlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_m8D8A17457C2F9D76018A5CDDB7C21FDCC6156C29(L_2, GameObject_GetComponent_TisPlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_m8D8A17457C2F9D76018A5CDDB7C21FDCC6156C29_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___storagePrefabs_5;
		NullCheck(L_3);
		PlayerCore_StoragePokemon_mBB76F9F7A8F9C1CC5B5D26F404C8061D31606E00(L_3, L_4, NULL);
		// });
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
// System.Void IncrementPrefabsWithScriptableObject/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4623372BE5D53B162EFB1D94118069AC21F3F5E1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5CCCDC0BA9F500588A6104857350D5038BD8E42E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5CCCDC0BA9F500588A6104857350D5038BD8E42E* L_0 = (U3CU3Ec_t5CCCDC0BA9F500588A6104857350D5038BD8E42E*)il2cpp_codegen_object_new(U3CU3Ec_t5CCCDC0BA9F500588A6104857350D5038BD8E42E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mB3AE5BFF3255423312BC5F10F73E6D49B08706ED(L_0, NULL);
		((U3CU3Ec_t5CCCDC0BA9F500588A6104857350D5038BD8E42E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5CCCDC0BA9F500588A6104857350D5038BD8E42E_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t5CCCDC0BA9F500588A6104857350D5038BD8E42E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5CCCDC0BA9F500588A6104857350D5038BD8E42E_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void IncrementPrefabsWithScriptableObject/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB3AE5BFF3255423312BC5F10F73E6D49B08706ED (U3CU3Ec_t5CCCDC0BA9F500588A6104857350D5038BD8E42E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void IncrementPrefabsWithScriptableObject/<>c::<Start>b__2_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__2_0_mE7850484B98C21B3D446BD1E8E815934663DF564 (U3CU3Ec_t5CCCDC0BA9F500588A6104857350D5038BD8E42E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_m8D8A17457C2F9D76018A5CDDB7C21FDCC6156C29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject.Find("Player").GetComponent<PlayerCore>().SelectCurrentPokemon();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_0);
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_1;
		L_1 = GameObject_GetComponent_TisPlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_m8D8A17457C2F9D76018A5CDDB7C21FDCC6156C29(L_0, GameObject_GetComponent_TisPlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_m8D8A17457C2F9D76018A5CDDB7C21FDCC6156C29_RuntimeMethod_var);
		NullCheck(L_1);
		PlayerCore_SelectCurrentPokemon_m73E0321B9344A4449A5F240AE71B5F4045EC731B(L_1, NULL);
		// });
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
// System.Void IncrementPrefabsWithScriptableObjectStorage::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementPrefabsWithScriptableObjectStorage_Start_m64EFBF996919D23D1ADEDE0C962137FCE63696E4 (IncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTableType_t4F8D447FAEEA8C0F3609B4BD58E1EE94D88A7E09_mAB4897B3CDA15C8981E395E7110EE78B8CD0D16C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IncrementPrefabsWithScriptableObjectStorage_U3CStartU3Eb__2_0_m91FC131222CB02525F12FFE40DC77AE120EF3939_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E00288BE8E6D23DF9E4EDA73329A5F0D0B74278);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC318561B667A89DAC927091F0FF2F9BFB48FC0CF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.transform.GetChild(0).GetComponent<TMP_Text>().text = pokemon.namePoke;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_0, 0, NULL);
		NullCheck(L_1);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2;
		L_2 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(L_1, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_3 = __this->___pokemon_4;
		NullCheck(L_3);
		String_t* L_4 = L_3->___namePoke_7;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_4);
		// this.transform.GetChild(1).GetComponent<Image>().sprite = pokemon.sprite;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_5, 1, NULL);
		NullCheck(L_6);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7;
		L_7 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_6, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_8 = __this->___pokemon_4;
		NullCheck(L_8);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_9 = L_8->___sprite_8;
		NullCheck(L_7);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_7, L_9, NULL);
		// this.transform.GetChild(2).GetComponent<TMP_Text>().text = "Lvl." + pokemon.lvl.ToString();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_10, 2, NULL);
		NullCheck(L_11);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_12;
		L_12 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(L_11, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_13 = __this->___pokemon_4;
		NullCheck(L_13);
		int32_t* L_14 = (&L_13->___lvl_5);
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralC318561B667A89DAC927091F0FF2F9BFB48FC0CF, L_15, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_12, L_16);
		// this.transform.GetChild(3).GetComponent<Slider>().maxValue = pokemon.maxXp;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_17, 3, NULL);
		NullCheck(L_18);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_19;
		L_19 = Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA(L_18, Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_20 = __this->___pokemon_4;
		NullCheck(L_20);
		int32_t L_21 = L_20->___maxXp_10;
		NullCheck(L_19);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_19, ((float)L_21), NULL);
		// this.transform.GetChild(3).GetComponent<Slider>().value = pokemon.xp;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_22, 3, NULL);
		NullCheck(L_23);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_24;
		L_24 = Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA(L_23, Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_25 = __this->___pokemon_4;
		NullCheck(L_25);
		int32_t L_26 = L_25->___xp_9;
		NullCheck(L_24);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_24, ((float)L_26));
		// this.transform.GetChild(4).GetComponent<Button>().onClick.AddListener(() => {
		//     GameObject.Find("Player").GetComponent<PlayerCore>().AddPokemon(pokemonPrefabs);
		// });
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_27, 4, NULL);
		NullCheck(L_28);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_29;
		L_29 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_28, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		NullCheck(L_29);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_30;
		L_30 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_29, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_31 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_31, __this, (intptr_t)((void*)IncrementPrefabsWithScriptableObjectStorage_U3CStartU3Eb__2_0_m91FC131222CB02525F12FFE40DC77AE120EF3939_RuntimeMethod_var), NULL);
		NullCheck(L_30);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_30, L_31, NULL);
		// this.transform.GetChild(5).gameObject.transform.GetChild(0).GetComponent<Image>().sprite = GameObject.Find("TableType").GetComponent<TableType>().SpriteForType(pokemon.type1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_32, 5, NULL);
		NullCheck(L_33);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_33, NULL);
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_34, NULL);
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_35, 0, NULL);
		NullCheck(L_36);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_37;
		L_37 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_36, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral8E00288BE8E6D23DF9E4EDA73329A5F0D0B74278, NULL);
		NullCheck(L_38);
		TableType_t4F8D447FAEEA8C0F3609B4BD58E1EE94D88A7E09* L_39;
		L_39 = GameObject_GetComponent_TisTableType_t4F8D447FAEEA8C0F3609B4BD58E1EE94D88A7E09_mAB4897B3CDA15C8981E395E7110EE78B8CD0D16C(L_38, GameObject_GetComponent_TisTableType_t4F8D447FAEEA8C0F3609B4BD58E1EE94D88A7E09_mAB4897B3CDA15C8981E395E7110EE78B8CD0D16C_RuntimeMethod_var);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_40 = __this->___pokemon_4;
		NullCheck(L_40);
		String_t* L_41 = L_40->___type1_12;
		NullCheck(L_39);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_42;
		L_42 = TableType_SpriteForType_mF5F2224C5A7E6A6A4F27268F91A008ACF3EA58A7(L_39, L_41, NULL);
		NullCheck(L_37);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_37, L_42, NULL);
		// this.transform.GetChild(5).gameObject.transform.GetChild(1).GetComponent<Image>().sprite = GameObject.Find("TableType").GetComponent<TableType>().SpriteForType(pokemon.type2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_43);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_43, 5, NULL);
		NullCheck(L_44);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45;
		L_45 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_44, NULL);
		NullCheck(L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_45, NULL);
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_46, 1, NULL);
		NullCheck(L_47);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48;
		L_48 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_47, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49;
		L_49 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral8E00288BE8E6D23DF9E4EDA73329A5F0D0B74278, NULL);
		NullCheck(L_49);
		TableType_t4F8D447FAEEA8C0F3609B4BD58E1EE94D88A7E09* L_50;
		L_50 = GameObject_GetComponent_TisTableType_t4F8D447FAEEA8C0F3609B4BD58E1EE94D88A7E09_mAB4897B3CDA15C8981E395E7110EE78B8CD0D16C(L_49, GameObject_GetComponent_TisTableType_t4F8D447FAEEA8C0F3609B4BD58E1EE94D88A7E09_mAB4897B3CDA15C8981E395E7110EE78B8CD0D16C_RuntimeMethod_var);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_51 = __this->___pokemon_4;
		NullCheck(L_51);
		String_t* L_52 = L_51->___type2_13;
		NullCheck(L_50);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_53;
		L_53 = TableType_SpriteForType_mF5F2224C5A7E6A6A4F27268F91A008ACF3EA58A7(L_50, L_52, NULL);
		NullCheck(L_48);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_48, L_53, NULL);
		// }
		return;
	}
}
// System.Void IncrementPrefabsWithScriptableObjectStorage::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementPrefabsWithScriptableObjectStorage_Update_mB417D26A604CC6D05C466C748BCBF4D22A2AAF7E (IncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void IncrementPrefabsWithScriptableObjectStorage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementPrefabsWithScriptableObjectStorage__ctor_m698EBD1D79147225CBC91CFE877E457BCA120955 (IncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void IncrementPrefabsWithScriptableObjectStorage::<Start>b__2_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementPrefabsWithScriptableObjectStorage_U3CStartU3Eb__2_0_m91FC131222CB02525F12FFE40DC77AE120EF3939 (IncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_m8D8A17457C2F9D76018A5CDDB7C21FDCC6156C29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject.Find("Player").GetComponent<PlayerCore>().AddPokemon(pokemonPrefabs);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_0);
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_1;
		L_1 = GameObject_GetComponent_TisPlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_m8D8A17457C2F9D76018A5CDDB7C21FDCC6156C29(L_0, GameObject_GetComponent_TisPlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_m8D8A17457C2F9D76018A5CDDB7C21FDCC6156C29_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___pokemonPrefabs_5;
		NullCheck(L_1);
		PlayerCore_AddPokemon_mC16110C15F4D3FEE4C5F569D53A97AF398FB03B5(L_1, L_2, NULL);
		// });
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
// System.Void ChangeMapCore::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeMapCore_Start_m2A104B9BB4C491122E6DABB39D72A065813F5A3B (ChangeMapCore_t50C557EAE2615C982809A62FAB5EAFDFEE4346BF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ChangeMapCore::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeMapCore_Update_mBAB897F426B809740FC8DF2D498513869EBC16FA (ChangeMapCore_t50C557EAE2615C982809A62FAB5EAFDFEE4346BF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ChangeMapCore::Route()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeMapCore_Route_mFD5F47830AF15909ED47DE714B8F3694C2C48DAE (ChangeMapCore_t50C557EAE2615C982809A62FAB5EAFDFEE4346BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGestionUIPanel_t62B5CEB7B9B4B03F1FEA92085B3CAE918FF8D319_m2B4E1DEF12D0B2646B982AFDF3CA0DF1C8229009_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// routeNameText.GetComponent<TMP_Text>().text = this.gameObject.name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___routeNameText_6;
		NullCheck(L_0);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1;
		L_1 = GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3(L_0, GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_3);
		// ChooseRoutePanelBack();
		ChangeMapCore_ChooseRoutePanelBack_mF26C8B3A6AAAE4B80E1584320DA0C246B6865B83(__this, NULL);
		// enemyScript.pokemonInstanceObject = pokemonRoute;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_4 = __this->___enemyScript_4;
		PokemonScriptableObjectEnemyU5BU5D_t52F1A2ECBC98A8CDC8F2CC76386A9AFD3F520A00* L_5 = __this->___pokemonRoute_9;
		NullCheck(L_4);
		L_4->___pokemonInstanceObject_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___pokemonInstanceObject_7), (void*)L_5);
		// enemyScript.InstancePokemonEnemy();
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_6 = __this->___enemyScript_4;
		NullCheck(L_6);
		EnemyCore_InstancePokemonEnemy_m2A221B326465D1F3B5DC6188DDBE69A19A869B2E(L_6, NULL);
		// playerScript.GetComponent<GestionUIPanel>().OpenPanelPokemon();
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_7 = __this->___playerScript_5;
		NullCheck(L_7);
		GestionUIPanel_t62B5CEB7B9B4B03F1FEA92085B3CAE918FF8D319* L_8;
		L_8 = Component_GetComponent_TisGestionUIPanel_t62B5CEB7B9B4B03F1FEA92085B3CAE918FF8D319_m2B4E1DEF12D0B2646B982AFDF3CA0DF1C8229009(L_7, Component_GetComponent_TisGestionUIPanel_t62B5CEB7B9B4B03F1FEA92085B3CAE918FF8D319_m2B4E1DEF12D0B2646B982AFDF3CA0DF1C8229009_RuntimeMethod_var);
		NullCheck(L_8);
		GestionUIPanel_OpenPanelPokemon_m485057C445E6F2A4E04E73EE98AC90B10F820B14(L_8, NULL);
		// enemyScript.EndChampionFight();
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_9 = __this->___enemyScript_4;
		NullCheck(L_9);
		EnemyCore_EndChampionFight_m5078B043036462986E455BCEA2B7B3B0FE6B1A62(L_9, NULL);
		// }
		return;
	}
}
// System.Void ChangeMapCore::PokemonChampion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeMapCore_PokemonChampion_m1F5E682040AE694E28FB77814CE1912C15CB4891 (ChangeMapCore_t50C557EAE2615C982809A62FAB5EAFDFEE4346BF* __this, const RuntimeMethod* method) 
{
	{
		// enemyScript.pokemonInstanceObjectChampion = pokemonRoute;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_0 = __this->___enemyScript_4;
		PokemonScriptableObjectEnemyU5BU5D_t52F1A2ECBC98A8CDC8F2CC76386A9AFD3F520A00* L_1 = __this->___pokemonRoute_9;
		NullCheck(L_0);
		L_0->___pokemonInstanceObjectChampion_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___pokemonInstanceObjectChampion_15), (void*)L_1);
		// }
		return;
	}
}
// System.Void ChangeMapCore::ChooseRoutePanelBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeMapCore_ChooseRoutePanelBack_mF26C8B3A6AAAE4B80E1584320DA0C246B6865B83 (ChangeMapCore_t50C557EAE2615C982809A62FAB5EAFDFEE4346BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20ABD2AF34DCB9A803D0FF87825C15C1A05DA05E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2903739E981B923A0C4EF242CAF7C5EF490D766D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8333032E8C60A0FB5251B7998C708169B0899CDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA146EC4B411621CD061AAA3BB4F4646AA46A7868);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6752631A7BF02AB890F51BA70CDA8ABF969E712);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(this.gameObject.tag == "Route")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteral8333032E8C60A0FB5251B7998C708169B0899CDF, NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// RoutePanelBackObject.GetComponent<Image>().sprite = RoutePanelBack[0];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___RoutePanelBackObject_8;
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_3, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_5 = __this->___RoutePanelBack_7;
		NullCheck(L_5);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6;
		L_6 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_5, 0, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		NullCheck(L_4);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_4, L_6, NULL);
	}

IL_0033:
	{
		// if (this.gameObject.tag == "Chenal")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_7, NULL);
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral2903739E981B923A0C4EF242CAF7C5EF490D766D, NULL);
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		// RoutePanelBackObject.GetComponent<Image>().sprite = RoutePanelBack[1];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___RoutePanelBackObject_8;
		NullCheck(L_10);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11;
		L_11 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_10, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_12 = __this->___RoutePanelBack_7;
		NullCheck(L_12);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_13;
		L_13 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_12, 1, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		NullCheck(L_11);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_11, L_13, NULL);
	}

IL_0066:
	{
		// if (this.gameObject.tag == "Foret")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_14, NULL);
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteralA146EC4B411621CD061AAA3BB4F4646AA46A7868, NULL);
		if (!L_16)
		{
			goto IL_0099;
		}
	}
	{
		// RoutePanelBackObject.GetComponent<Image>().sprite = RoutePanelBack[2];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___RoutePanelBackObject_8;
		NullCheck(L_17);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18;
		L_18 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_17, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_19 = __this->___RoutePanelBack_7;
		NullCheck(L_19);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_20;
		L_20 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_19, 2, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		NullCheck(L_18);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_18, L_20, NULL);
	}

IL_0099:
	{
		// if (this.gameObject.tag == "Grotte")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_21);
		String_t* L_22;
		L_22 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_21, NULL);
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralD6752631A7BF02AB890F51BA70CDA8ABF969E712, NULL);
		if (!L_23)
		{
			goto IL_00cc;
		}
	}
	{
		// RoutePanelBackObject.GetComponent<Image>().sprite = RoutePanelBack[3];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___RoutePanelBackObject_8;
		NullCheck(L_24);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_25;
		L_25 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_24, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_26 = __this->___RoutePanelBack_7;
		NullCheck(L_26);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_27;
		L_27 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_26, 3, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		NullCheck(L_25);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_25, L_27, NULL);
	}

IL_00cc:
	{
		// if (this.gameObject.tag == "Centrale")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_28);
		String_t* L_29;
		L_29 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_28, NULL);
		bool L_30;
		L_30 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_29, _stringLiteral20ABD2AF34DCB9A803D0FF87825C15C1A05DA05E, NULL);
		if (!L_30)
		{
			goto IL_00ff;
		}
	}
	{
		// RoutePanelBackObject.GetComponent<Image>().sprite = RoutePanelBack[4];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___RoutePanelBackObject_8;
		NullCheck(L_31);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_32;
		L_32 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_31, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_33 = __this->___RoutePanelBack_7;
		NullCheck(L_33);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_34;
		L_34 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_33, 4, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		NullCheck(L_32);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_32, L_34, NULL);
	}

IL_00ff:
	{
		// }
		return;
	}
}
// System.Void ChangeMapCore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeMapCore__ctor_mF3132DD5C996F51EB8022A5C5F542E55FC94F6FD (ChangeMapCore_t50C557EAE2615C982809A62FAB5EAFDFEE4346BF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Cheat::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cheat_Start_m65FB2EE516B69AB0D041920D4C0DDBA642E30E73 (Cheat_t4ED8823AA3C034E784124AA28F0DCAB7A4A6AB40* __this, const RuntimeMethod* method) 
{
	{
		// cheatPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___cheatPanel_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Cheat::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cheat_Update_m237C1EC0E4FE6D50F78249CB3EC48CE0F317A606 (Cheat_t4ED8823AA3C034E784124AA28F0DCAB7A4A6AB40* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Cheat::OpenCheatPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cheat_OpenCheatPanel_mA777A8620A848636A8418E89A240BA490B963ECF (Cheat_t4ED8823AA3C034E784124AA28F0DCAB7A4A6AB40* __this, const RuntimeMethod* method) 
{
	{
		// cheatPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___cheatPanel_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Cheat::CloseCheatPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cheat_CloseCheatPanel_m6D875925EC61C1187F7BE148FE5C9ACC79833F84 (Cheat_t4ED8823AA3C034E784124AA28F0DCAB7A4A6AB40* __this, const RuntimeMethod* method) 
{
	{
		// cheatPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___cheatPanel_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Cheat::CoinCheat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cheat_CoinCheat_mB1E0475994384BEAAC8FA8602FBFC5E502A46071 (Cheat_t4ED8823AA3C034E784124AA28F0DCAB7A4A6AB40* __this, const RuntimeMethod* method) 
{
	{
		// player.coin += 10000;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_0 = __this->___player_5;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___coin_15;
		NullCheck(L_1);
		L_1->___coin_15 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)10000)));
		// }
		return;
	}
}
// System.Void Cheat::LvlSelectedPokeCheat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cheat_LvlSelectedPokeCheat_m37EADFDAD9C5C04AF7513F714631E1120FD0E77B (Cheat_t4ED8823AA3C034E784124AA28F0DCAB7A4A6AB40* __this, const RuntimeMethod* method) 
{
	{
		// player.currentPlayerPokemonStats.xp = 50000000;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_0 = __this->___player_5;
		NullCheck(L_0);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_1 = L_0->___currentPlayerPokemonStats_13;
		NullCheck(L_1);
		L_1->___xp_9 = ((int32_t)50000000);
		// player.LevelUpPlayerPokemon();
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_2 = __this->___player_5;
		NullCheck(L_2);
		PlayerCore_LevelUpPlayerPokemon_mDEB65F9310705DFFC7F6E49B649F9CD879204500(L_2, NULL);
		// }
		return;
	}
}
// System.Void Cheat::ObtainAllBadgeCheat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cheat_ObtainAllBadgeCheat_mCC297BCBC7A75D8688CA76507A778F964CD63000 (Cheat_t4ED8823AA3C034E784124AA28F0DCAB7A4A6AB40* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < 8; i++)
		V_0 = 0;
		goto IL_0014;
	}

IL_0004:
	{
		// enemy.WinChampionfight();
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_0 = __this->___enemy_6;
		NullCheck(L_0);
		EnemyCore_WinChampionfight_mEA1F41A91973A7E722317B288FD111B1802084D1(L_0, (bool)0, NULL);
		// for (int i = 0; i < 8; i++)
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0014:
	{
		// for (int i = 0; i < 8; i++)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)8)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Cheat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cheat__ctor_m646CB9441CC041E38C72FBB640E669DA7454F66F (Cheat_t4ED8823AA3C034E784124AA28F0DCAB7A4A6AB40* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ChooseStarter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChooseStarter_Start_m670236CC690EBB9DFF35161996C58BFCA67572D2 (ChooseStarter_t912FC58203BE5BA335051A5201E48B131D863FD4* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ChooseStarter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChooseStarter_Update_mE64D8521E100F7DAAFAE521382C1A7DE9B28CD7F (ChooseStarter_t912FC58203BE5BA335051A5201E48B131D863FD4* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ChooseStarter::Starter1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChooseStarter_Starter1_m38FB88D7838E2B1F51B37EAD4037A0F85F63DB79 (ChooseStarter_t912FC58203BE5BA335051A5201E48B131D863FD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bulbizarrePrefabs.GetComponent<IncrementPrefabsWithScriptableObject>().pokemon.isStarter = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___bulbizarrePrefabs_4;
		NullCheck(L_0);
		IncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7* L_1;
		L_1 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C(L_0, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C_RuntimeMethod_var);
		NullCheck(L_1);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_2 = L_1->___pokemon_4;
		NullCheck(L_2);
		L_2->___isStarter_11 = (bool)1;
		// PlayerCore.starter = bulbizarrePrefabs;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___bulbizarrePrefabs_4;
		((PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_il2cpp_TypeInfo_var))->___starter_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_il2cpp_TypeInfo_var))->___starter_4), (void*)L_3);
		// objetMusic.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___objetMusic_7;
		NullCheck(L_4);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_4, NULL);
		// SceneManager.LoadScene("Game");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, NULL);
		// }
		return;
	}
}
// System.Void ChooseStarter::Starter2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChooseStarter_Starter2_m95191C1CD98FB18B03EDD191751A2BFA6F44C68D (ChooseStarter_t912FC58203BE5BA335051A5201E48B131D863FD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		s_Il2CppMethodInitialized = true;
	}
	{
		// salamechePrefabs.GetComponent<IncrementPrefabsWithScriptableObject>().pokemon.isStarter = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___salamechePrefabs_5;
		NullCheck(L_0);
		IncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7* L_1;
		L_1 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C(L_0, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C_RuntimeMethod_var);
		NullCheck(L_1);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_2 = L_1->___pokemon_4;
		NullCheck(L_2);
		L_2->___isStarter_11 = (bool)1;
		// PlayerCore.starter = salamechePrefabs;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___salamechePrefabs_5;
		((PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_il2cpp_TypeInfo_var))->___starter_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_il2cpp_TypeInfo_var))->___starter_4), (void*)L_3);
		// objetMusic.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___objetMusic_7;
		NullCheck(L_4);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_4, NULL);
		// SceneManager.LoadScene("Game");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, NULL);
		// }
		return;
	}
}
// System.Void ChooseStarter::Starter3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChooseStarter_Starter3_mA76EEC60EF2C63BB77A48455BA9AC06E5A869749 (ChooseStarter_t912FC58203BE5BA335051A5201E48B131D863FD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		s_Il2CppMethodInitialized = true;
	}
	{
		// carapucePrefabs.GetComponent<IncrementPrefabsWithScriptableObject>().pokemon.isStarter = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___carapucePrefabs_6;
		NullCheck(L_0);
		IncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7* L_1;
		L_1 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C(L_0, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C_RuntimeMethod_var);
		NullCheck(L_1);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_2 = L_1->___pokemon_4;
		NullCheck(L_2);
		L_2->___isStarter_11 = (bool)1;
		// PlayerCore.starter = carapucePrefabs;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___carapucePrefabs_6;
		((PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_il2cpp_TypeInfo_var))->___starter_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_il2cpp_TypeInfo_var))->___starter_4), (void*)L_3);
		// objetMusic.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___objetMusic_7;
		NullCheck(L_4);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_4, NULL);
		// SceneManager.LoadScene("Game");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, NULL);
		// }
		return;
	}
}
// System.Void ChooseStarter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChooseStarter__ctor_mADE44082C0C424160CA4EDFBE79FD73E801C2928 (ChooseStarter_t912FC58203BE5BA335051A5201E48B131D863FD4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ClickScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickScript_Start_mCB73B205D722E28AA79169B261ACEF1A1B27C436 (ClickScript_t4B24BB07677BC6765DD67260652B6F47C6BF309F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceType_tEC9DF281BE5EA013E3F57441442CCE5A2DFF44C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print(SystemInfo.deviceType);
		int32_t L_0;
		L_0 = SystemInfo_get_deviceType_mB67B9AC09C2BE8A8B0AED6765AD70719D15C889F(NULL);
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(DeviceType_tEC9DF281BE5EA013E3F57441442CCE5A2DFF44C4_il2cpp_TypeInfo_var, &L_1);
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_2, NULL);
		// damageTypeText.text = "";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___damageTypeText_7;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Void ClickScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickScript_Update_m212D0596AE4A3404F7A4807B2B5C8B23DDDCA88C (ClickScript_t4B24BB07677BC6765DD67260652B6F47C6BF309F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral825923C120A44C6891F0E08C60E5E745D9BA30A8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SystemInfo.deviceType == DeviceType.Desktop)
		int32_t L_0;
		L_0 = SystemInfo_get_deviceType_mB67B9AC09C2BE8A8B0AED6765AD70719D15C889F(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_005d;
		}
	}
	{
		// if (Input.GetKeyUp(KeyCode.Mouse0))
		bool L_1;
		L_1 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)323), NULL);
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
		// if (!EventSystem.current.IsPointerOverGameObject() && player.currentPlayerPokemon != null)
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_2;
		L_2 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38(L_2, NULL);
		if (L_3)
		{
			goto IL_005d;
		}
	}
	{
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_4 = __this->___player_5;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___currentPlayerPokemon_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_005d;
		}
	}
	{
		// if(enemy.isInChampionsFight == false)
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_7 = __this->___enemy_4;
		NullCheck(L_7);
		bool L_8 = L_7->___isInChampionsFight_16;
		if (L_8)
		{
			goto IL_0049;
		}
	}
	{
		// AppliquerDamage(false);
		ClickScript_AppliquerDamage_mF4785CF888D9BE9A51B43341878B5AF8E6A2A282(__this, (bool)0, NULL);
		goto IL_005d;
	}

IL_0049:
	{
		// else if(enemy.isInChampionsFight == true)
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_9 = __this->___enemy_4;
		NullCheck(L_9);
		bool L_10 = L_9->___isInChampionsFight_16;
		if (!L_10)
		{
			goto IL_005d;
		}
	}
	{
		// AppliquerDamage(true);
		ClickScript_AppliquerDamage_mF4785CF888D9BE9A51B43341878B5AF8E6A2A282(__this, (bool)1, NULL);
	}

IL_005d:
	{
		// if (SystemInfo.deviceType == DeviceType.Handheld)
		int32_t L_11;
		L_11 = SystemInfo_get_deviceType_mB67B9AC09C2BE8A8B0AED6765AD70719D15C889F(NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_00e2;
		}
	}
	{
		// if (Input.touchCount > 0 && Input.touches[0].phase == TouchPhase.Began)
		int32_t L_12;
		L_12 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_13;
		L_13 = Input_get_touches_m884B92DD9A389F7985AB275A9717AC629C258B6B(NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0(((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		if (L_14)
		{
			goto IL_00e2;
		}
	}
	{
		// if (!EventSystem.current.IsPointerOverGameObject(Input.touches[0].fingerId) && player.currentPlayerPokemon != null)
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_15;
		L_15 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_16;
		L_16 = Input_get_touches_m884B92DD9A389F7985AB275A9717AC629C258B6B(NULL);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD(((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		NullCheck(L_15);
		bool L_18;
		L_18 = EventSystem_IsPointerOverGameObject_m238732B4FDEA343976D798FF04DB34C3221243C2(L_15, L_17, NULL);
		if (L_18)
		{
			goto IL_00e2;
		}
	}
	{
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_19 = __this->___player_5;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = L_19->___currentPlayerPokemon_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_00e2;
		}
	}
	{
		// if (enemy.isInChampionsFight == false)
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_22 = __this->___enemy_4;
		NullCheck(L_22);
		bool L_23 = L_22->___isInChampionsFight_16;
		if (L_23)
		{
			goto IL_00ce;
		}
	}
	{
		// print("ok android");
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(_stringLiteral825923C120A44C6891F0E08C60E5E745D9BA30A8, NULL);
		// AppliquerDamage(false);
		ClickScript_AppliquerDamage_mF4785CF888D9BE9A51B43341878B5AF8E6A2A282(__this, (bool)0, NULL);
		goto IL_00e2;
	}

IL_00ce:
	{
		// else if (enemy.isInChampionsFight == true)
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_24 = __this->___enemy_4;
		NullCheck(L_24);
		bool L_25 = L_24->___isInChampionsFight_16;
		if (!L_25)
		{
			goto IL_00e2;
		}
	}
	{
		// AppliquerDamage(true);
		ClickScript_AppliquerDamage_mF4785CF888D9BE9A51B43341878B5AF8E6A2A282(__this, (bool)1, NULL);
	}

IL_00e2:
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_26;
		L_26 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)27), NULL);
		if (!L_26)
		{
			goto IL_00f0;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
	}

IL_00f0:
	{
		// }
		return;
	}
}
// System.Void ClickScript::AppliquerDamage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickScript_AppliquerDamage_mF4785CF888D9BE9A51B43341878B5AF8E6A2A282 (ClickScript_t4B24BB07677BC6765DD67260652B6F47C6BF309F* __this, bool ___estChampion0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B6D1EACB61B10A0E3503E4C7DD4EECB230E0D66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19B61D8D49D50BFA635C198669884C8B3C438DA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AA37969BCCEF136D0AFFC2CF1DA26E48FBEC039);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AF5F2E5B5BD21F9F72683062BE85804C4B6042D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BF1A130D782F57F44234B152D673BC5D8C71C12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA088E5330059BFBF9D7BC392C2F4C0FA85912E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!estChampion)
		bool L_0 = ___estChampion0;
		if (L_0)
		{
			goto IL_02a3;
		}
	}
	{
		// if (TableType.ResultatTableType(player.currentPlayerPokemonStats.type1, player.currentPlayerPokemonStats.type2, enemy.pokemonObject.type1, enemy.pokemonObject.type2) == "aucun")
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_1 = __this->___player_5;
		NullCheck(L_1);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_2 = L_1->___currentPlayerPokemonStats_13;
		NullCheck(L_2);
		String_t* L_3 = L_2->___type1_12;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_4 = __this->___player_5;
		NullCheck(L_4);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_5 = L_4->___currentPlayerPokemonStats_13;
		NullCheck(L_5);
		String_t* L_6 = L_5->___type2_13;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_7 = __this->___enemy_4;
		NullCheck(L_7);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_8 = L_7->___pokemonObject_4;
		NullCheck(L_8);
		String_t* L_9 = L_8->___type1_12;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_10 = __this->___enemy_4;
		NullCheck(L_10);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_11 = L_10->___pokemonObject_4;
		NullCheck(L_11);
		String_t* L_12 = L_11->___type2_13;
		String_t* L_13;
		L_13 = TableType_ResultatTableType_m125564E0AB6BCC1EF9580FC646949A19E43E225E(L_3, L_6, L_9, L_12, NULL);
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteral0B6D1EACB61B10A0E3503E4C7DD4EECB230E0D66, NULL);
		if (!L_14)
		{
			goto IL_0095;
		}
	}
	{
		// damageTypeText.text = "Aucun effet";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_15 = __this->___damageTypeText_7;
		NullCheck(L_15);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_15, _stringLiteral1AA37969BCCEF136D0AFFC2CF1DA26E48FBEC039);
		// enemy.pokemonObject.hp -= player.currentPlayerPokemonStats.damage * 0;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_16 = __this->___enemy_4;
		NullCheck(L_16);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_17 = L_16->___pokemonObject_4;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_18 = L_17;
		NullCheck(L_18);
		int32_t L_19 = L_18->___hp_7;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_20 = __this->___player_5;
		NullCheck(L_20);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_21 = L_20->___currentPlayerPokemonStats_13;
		NullCheck(L_21);
		int32_t L_22 = L_21->___damage_6;
		NullCheck(L_18);
		L_18->___hp_7 = ((int32_t)il2cpp_codegen_subtract(L_19, 0));
		goto IL_0276;
	}

IL_0095:
	{
		// else if (TableType.ResultatTableType(player.currentPlayerPokemonStats.type1, player.currentPlayerPokemonStats.type2, enemy.pokemonObject.type1, enemy.pokemonObject.type2) == "normal")
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_23 = __this->___player_5;
		NullCheck(L_23);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_24 = L_23->___currentPlayerPokemonStats_13;
		NullCheck(L_24);
		String_t* L_25 = L_24->___type1_12;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_26 = __this->___player_5;
		NullCheck(L_26);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_27 = L_26->___currentPlayerPokemonStats_13;
		NullCheck(L_27);
		String_t* L_28 = L_27->___type2_13;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_29 = __this->___enemy_4;
		NullCheck(L_29);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_30 = L_29->___pokemonObject_4;
		NullCheck(L_30);
		String_t* L_31 = L_30->___type1_12;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_32 = __this->___enemy_4;
		NullCheck(L_32);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_33 = L_32->___pokemonObject_4;
		NullCheck(L_33);
		String_t* L_34 = L_33->___type2_13;
		String_t* L_35;
		L_35 = TableType_ResultatTableType_m125564E0AB6BCC1EF9580FC646949A19E43E225E(L_25, L_28, L_31, L_34, NULL);
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3, NULL);
		if (!L_36)
		{
			goto IL_0122;
		}
	}
	{
		// damageTypeText.text = "";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_37 = __this->___damageTypeText_7;
		NullCheck(L_37);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_37, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// enemy.pokemonObject.hp -= player.currentPlayerPokemonStats.damage;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_38 = __this->___enemy_4;
		NullCheck(L_38);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_39 = L_38->___pokemonObject_4;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_40 = L_39;
		NullCheck(L_40);
		int32_t L_41 = L_40->___hp_7;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_42 = __this->___player_5;
		NullCheck(L_42);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_43 = L_42->___currentPlayerPokemonStats_13;
		NullCheck(L_43);
		int32_t L_44 = L_43->___damage_6;
		NullCheck(L_40);
		L_40->___hp_7 = ((int32_t)il2cpp_codegen_subtract(L_41, L_44));
		goto IL_0276;
	}

IL_0122:
	{
		// else if (TableType.ResultatTableType(player.currentPlayerPokemonStats.type1, player.currentPlayerPokemonStats.type2, enemy.pokemonObject.type1, enemy.pokemonObject.type2) == "faible")
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_45 = __this->___player_5;
		NullCheck(L_45);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_46 = L_45->___currentPlayerPokemonStats_13;
		NullCheck(L_46);
		String_t* L_47 = L_46->___type1_12;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_48 = __this->___player_5;
		NullCheck(L_48);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_49 = L_48->___currentPlayerPokemonStats_13;
		NullCheck(L_49);
		String_t* L_50 = L_49->___type2_13;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_51 = __this->___enemy_4;
		NullCheck(L_51);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_52 = L_51->___pokemonObject_4;
		NullCheck(L_52);
		String_t* L_53 = L_52->___type1_12;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_54 = __this->___enemy_4;
		NullCheck(L_54);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_55 = L_54->___pokemonObject_4;
		NullCheck(L_55);
		String_t* L_56 = L_55->___type2_13;
		String_t* L_57;
		L_57 = TableType_ResultatTableType_m125564E0AB6BCC1EF9580FC646949A19E43E225E(L_47, L_50, L_53, L_56, NULL);
		bool L_58;
		L_58 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_57, _stringLiteralDA088E5330059BFBF9D7BC392C2F4C0FA85912E3, NULL);
		if (!L_58)
		{
			goto IL_01ec;
		}
	}
	{
		// damageTypeText.text = "Ce n'est pas tr?s efficace";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_59 = __this->___damageTypeText_7;
		NullCheck(L_59);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_59, _stringLiteral19B61D8D49D50BFA635C198669884C8B3C438DA5);
		// if (player.currentPlayerPokemonStats.damage / 2 == 0)
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_60 = __this->___player_5;
		NullCheck(L_60);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_61 = L_60->___currentPlayerPokemonStats_13;
		NullCheck(L_61);
		int32_t L_62 = L_61->___damage_6;
		if (((int32_t)(L_62/2)))
		{
			goto IL_01be;
		}
	}
	{
		// enemy.pokemonObject.hp -= player.currentPlayerPokemonStats.damage;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_63 = __this->___enemy_4;
		NullCheck(L_63);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_64 = L_63->___pokemonObject_4;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_65 = L_64;
		NullCheck(L_65);
		int32_t L_66 = L_65->___hp_7;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_67 = __this->___player_5;
		NullCheck(L_67);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_68 = L_67->___currentPlayerPokemonStats_13;
		NullCheck(L_68);
		int32_t L_69 = L_68->___damage_6;
		NullCheck(L_65);
		L_65->___hp_7 = ((int32_t)il2cpp_codegen_subtract(L_66, L_69));
	}

IL_01be:
	{
		// enemy.pokemonObject.hp -= player.currentPlayerPokemonStats.damage / 2;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_70 = __this->___enemy_4;
		NullCheck(L_70);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_71 = L_70->___pokemonObject_4;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_72 = L_71;
		NullCheck(L_72);
		int32_t L_73 = L_72->___hp_7;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_74 = __this->___player_5;
		NullCheck(L_74);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_75 = L_74->___currentPlayerPokemonStats_13;
		NullCheck(L_75);
		int32_t L_76 = L_75->___damage_6;
		NullCheck(L_72);
		L_72->___hp_7 = ((int32_t)il2cpp_codegen_subtract(L_73, ((int32_t)(L_76/2))));
		goto IL_0276;
	}

IL_01ec:
	{
		// else if (TableType.ResultatTableType(player.currentPlayerPokemonStats.type1, player.currentPlayerPokemonStats.type2, enemy.pokemonObject.type1, enemy.pokemonObject.type2) == "fort")
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_77 = __this->___player_5;
		NullCheck(L_77);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_78 = L_77->___currentPlayerPokemonStats_13;
		NullCheck(L_78);
		String_t* L_79 = L_78->___type1_12;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_80 = __this->___player_5;
		NullCheck(L_80);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_81 = L_80->___currentPlayerPokemonStats_13;
		NullCheck(L_81);
		String_t* L_82 = L_81->___type2_13;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_83 = __this->___enemy_4;
		NullCheck(L_83);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_84 = L_83->___pokemonObject_4;
		NullCheck(L_84);
		String_t* L_85 = L_84->___type1_12;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_86 = __this->___enemy_4;
		NullCheck(L_86);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_87 = L_86->___pokemonObject_4;
		NullCheck(L_87);
		String_t* L_88 = L_87->___type2_13;
		String_t* L_89;
		L_89 = TableType_ResultatTableType_m125564E0AB6BCC1EF9580FC646949A19E43E225E(L_79, L_82, L_85, L_88, NULL);
		bool L_90;
		L_90 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_89, _stringLiteral8BF1A130D782F57F44234B152D673BC5D8C71C12, NULL);
		if (!L_90)
		{
			goto IL_0276;
		}
	}
	{
		// damageTypeText.text = "C'est super efficace";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_91 = __this->___damageTypeText_7;
		NullCheck(L_91);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_91, _stringLiteral8AF5F2E5B5BD21F9F72683062BE85804C4B6042D);
		// enemy.pokemonObject.hp -= player.currentPlayerPokemonStats.damage * 2;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_92 = __this->___enemy_4;
		NullCheck(L_92);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_93 = L_92->___pokemonObject_4;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_94 = L_93;
		NullCheck(L_94);
		int32_t L_95 = L_94->___hp_7;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_96 = __this->___player_5;
		NullCheck(L_96);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_97 = L_96->___currentPlayerPokemonStats_13;
		NullCheck(L_97);
		int32_t L_98 = L_97->___damage_6;
		NullCheck(L_94);
		L_94->___hp_7 = ((int32_t)il2cpp_codegen_subtract(L_95, ((int32_t)il2cpp_codegen_multiply(L_98, 2))));
	}

IL_0276:
	{
		// if (enemy.pokemonObject.hp <= 0)
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_99 = __this->___enemy_4;
		NullCheck(L_99);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_100 = L_99->___pokemonObject_4;
		NullCheck(L_100);
		int32_t L_101 = L_100->___hp_7;
		if ((((int32_t)L_101) > ((int32_t)0)))
		{
			goto IL_0586;
		}
	}
	{
		// player.OnDeathPokemon();
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_102 = __this->___player_5;
		NullCheck(L_102);
		PlayerCore_OnDeathPokemon_m9ECB501759B841AFA5396A16EC33B41525176D17(L_102, NULL);
		// enemy.OnDeathPokemon();
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_103 = __this->___enemy_4;
		NullCheck(L_103);
		EnemyCore_OnDeathPokemon_m55795BAA793A4D3EDEE71FBE44945AA369940DEA(L_103, NULL);
		return;
	}

IL_02a3:
	{
		// Debug.Log(TableType.ResultatTableType(player.currentPlayerPokemonStats.type1, player.currentPlayerPokemonStats.type2, enemy.pokemonChampionObject.type1, enemy.pokemonChampionObject.type2));
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_104 = __this->___player_5;
		NullCheck(L_104);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_105 = L_104->___currentPlayerPokemonStats_13;
		NullCheck(L_105);
		String_t* L_106 = L_105->___type1_12;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_107 = __this->___player_5;
		NullCheck(L_107);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_108 = L_107->___currentPlayerPokemonStats_13;
		NullCheck(L_108);
		String_t* L_109 = L_108->___type2_13;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_110 = __this->___enemy_4;
		NullCheck(L_110);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_111 = L_110->___pokemonChampionObject_13;
		NullCheck(L_111);
		String_t* L_112 = L_111->___type1_12;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_113 = __this->___enemy_4;
		NullCheck(L_113);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_114 = L_113->___pokemonChampionObject_13;
		NullCheck(L_114);
		String_t* L_115 = L_114->___type2_13;
		String_t* L_116;
		L_116 = TableType_ResultatTableType_m125564E0AB6BCC1EF9580FC646949A19E43E225E(L_106, L_109, L_112, L_115, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_116, NULL);
		// if (TableType.ResultatTableType(player.currentPlayerPokemonStats.type1, player.currentPlayerPokemonStats.type2, enemy.pokemonChampionObject.type1, enemy.pokemonChampionObject.type2) == "aucun")
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_117 = __this->___player_5;
		NullCheck(L_117);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_118 = L_117->___currentPlayerPokemonStats_13;
		NullCheck(L_118);
		String_t* L_119 = L_118->___type1_12;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_120 = __this->___player_5;
		NullCheck(L_120);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_121 = L_120->___currentPlayerPokemonStats_13;
		NullCheck(L_121);
		String_t* L_122 = L_121->___type2_13;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_123 = __this->___enemy_4;
		NullCheck(L_123);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_124 = L_123->___pokemonChampionObject_13;
		NullCheck(L_124);
		String_t* L_125 = L_124->___type1_12;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_126 = __this->___enemy_4;
		NullCheck(L_126);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_127 = L_126->___pokemonChampionObject_13;
		NullCheck(L_127);
		String_t* L_128 = L_127->___type2_13;
		String_t* L_129;
		L_129 = TableType_ResultatTableType_m125564E0AB6BCC1EF9580FC646949A19E43E225E(L_119, L_122, L_125, L_128, NULL);
		bool L_130;
		L_130 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_129, _stringLiteral0B6D1EACB61B10A0E3503E4C7DD4EECB230E0D66, NULL);
		if (!L_130)
		{
			goto IL_037c;
		}
	}
	{
		// damageTypeTextChampion.text = "Aucun effet";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_131 = __this->___damageTypeTextChampion_8;
		NullCheck(L_131);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_131, _stringLiteral1AA37969BCCEF136D0AFFC2CF1DA26E48FBEC039);
		// enemy.pokemonChampionObject.hp -= player.currentPlayerPokemonStats.damage * 0;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_132 = __this->___enemy_4;
		NullCheck(L_132);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_133 = L_132->___pokemonChampionObject_13;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_134 = L_133;
		NullCheck(L_134);
		int32_t L_135 = L_134->___hp_7;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_136 = __this->___player_5;
		NullCheck(L_136);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_137 = L_136->___currentPlayerPokemonStats_13;
		NullCheck(L_137);
		int32_t L_138 = L_137->___damage_6;
		NullCheck(L_134);
		L_134->___hp_7 = ((int32_t)il2cpp_codegen_subtract(L_135, 0));
		goto IL_055d;
	}

IL_037c:
	{
		// else if (TableType.ResultatTableType(player.currentPlayerPokemonStats.type1, player.currentPlayerPokemonStats.type2, enemy.pokemonChampionObject.type1, enemy.pokemonChampionObject.type2) == "normal")
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_139 = __this->___player_5;
		NullCheck(L_139);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_140 = L_139->___currentPlayerPokemonStats_13;
		NullCheck(L_140);
		String_t* L_141 = L_140->___type1_12;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_142 = __this->___player_5;
		NullCheck(L_142);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_143 = L_142->___currentPlayerPokemonStats_13;
		NullCheck(L_143);
		String_t* L_144 = L_143->___type2_13;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_145 = __this->___enemy_4;
		NullCheck(L_145);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_146 = L_145->___pokemonChampionObject_13;
		NullCheck(L_146);
		String_t* L_147 = L_146->___type1_12;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_148 = __this->___enemy_4;
		NullCheck(L_148);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_149 = L_148->___pokemonChampionObject_13;
		NullCheck(L_149);
		String_t* L_150 = L_149->___type2_13;
		String_t* L_151;
		L_151 = TableType_ResultatTableType_m125564E0AB6BCC1EF9580FC646949A19E43E225E(L_141, L_144, L_147, L_150, NULL);
		bool L_152;
		L_152 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_151, _stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3, NULL);
		if (!L_152)
		{
			goto IL_0409;
		}
	}
	{
		// damageTypeTextChampion.text = "";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_153 = __this->___damageTypeTextChampion_8;
		NullCheck(L_153);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_153, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// enemy.pokemonChampionObject.hp -= player.currentPlayerPokemonStats.damage;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_154 = __this->___enemy_4;
		NullCheck(L_154);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_155 = L_154->___pokemonChampionObject_13;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_156 = L_155;
		NullCheck(L_156);
		int32_t L_157 = L_156->___hp_7;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_158 = __this->___player_5;
		NullCheck(L_158);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_159 = L_158->___currentPlayerPokemonStats_13;
		NullCheck(L_159);
		int32_t L_160 = L_159->___damage_6;
		NullCheck(L_156);
		L_156->___hp_7 = ((int32_t)il2cpp_codegen_subtract(L_157, L_160));
		goto IL_055d;
	}

IL_0409:
	{
		// else if (TableType.ResultatTableType(player.currentPlayerPokemonStats.type1, player.currentPlayerPokemonStats.type2, enemy.pokemonChampionObject.type1, enemy.pokemonChampionObject.type2) == "faible")
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_161 = __this->___player_5;
		NullCheck(L_161);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_162 = L_161->___currentPlayerPokemonStats_13;
		NullCheck(L_162);
		String_t* L_163 = L_162->___type1_12;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_164 = __this->___player_5;
		NullCheck(L_164);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_165 = L_164->___currentPlayerPokemonStats_13;
		NullCheck(L_165);
		String_t* L_166 = L_165->___type2_13;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_167 = __this->___enemy_4;
		NullCheck(L_167);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_168 = L_167->___pokemonChampionObject_13;
		NullCheck(L_168);
		String_t* L_169 = L_168->___type1_12;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_170 = __this->___enemy_4;
		NullCheck(L_170);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_171 = L_170->___pokemonChampionObject_13;
		NullCheck(L_171);
		String_t* L_172 = L_171->___type2_13;
		String_t* L_173;
		L_173 = TableType_ResultatTableType_m125564E0AB6BCC1EF9580FC646949A19E43E225E(L_163, L_166, L_169, L_172, NULL);
		bool L_174;
		L_174 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_173, _stringLiteralDA088E5330059BFBF9D7BC392C2F4C0FA85912E3, NULL);
		if (!L_174)
		{
			goto IL_04d3;
		}
	}
	{
		// damageTypeTextChampion.text = "Ce n'est pas tr?s efficace";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_175 = __this->___damageTypeTextChampion_8;
		NullCheck(L_175);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_175, _stringLiteral19B61D8D49D50BFA635C198669884C8B3C438DA5);
		// if (player.currentPlayerPokemonStats.damage / 2 == 0)
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_176 = __this->___player_5;
		NullCheck(L_176);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_177 = L_176->___currentPlayerPokemonStats_13;
		NullCheck(L_177);
		int32_t L_178 = L_177->___damage_6;
		if (((int32_t)(L_178/2)))
		{
			goto IL_04a5;
		}
	}
	{
		// enemy.pokemonChampionObject.hp -= player.currentPlayerPokemonStats.damage;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_179 = __this->___enemy_4;
		NullCheck(L_179);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_180 = L_179->___pokemonChampionObject_13;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_181 = L_180;
		NullCheck(L_181);
		int32_t L_182 = L_181->___hp_7;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_183 = __this->___player_5;
		NullCheck(L_183);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_184 = L_183->___currentPlayerPokemonStats_13;
		NullCheck(L_184);
		int32_t L_185 = L_184->___damage_6;
		NullCheck(L_181);
		L_181->___hp_7 = ((int32_t)il2cpp_codegen_subtract(L_182, L_185));
	}

IL_04a5:
	{
		// enemy.pokemonChampionObject.hp -= player.currentPlayerPokemonStats.damage / 2;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_186 = __this->___enemy_4;
		NullCheck(L_186);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_187 = L_186->___pokemonChampionObject_13;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_188 = L_187;
		NullCheck(L_188);
		int32_t L_189 = L_188->___hp_7;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_190 = __this->___player_5;
		NullCheck(L_190);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_191 = L_190->___currentPlayerPokemonStats_13;
		NullCheck(L_191);
		int32_t L_192 = L_191->___damage_6;
		NullCheck(L_188);
		L_188->___hp_7 = ((int32_t)il2cpp_codegen_subtract(L_189, ((int32_t)(L_192/2))));
		goto IL_055d;
	}

IL_04d3:
	{
		// else if (TableType.ResultatTableType(player.currentPlayerPokemonStats.type1, player.currentPlayerPokemonStats.type2, enemy.pokemonChampionObject.type1, enemy.pokemonChampionObject.type2) == "fort")
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_193 = __this->___player_5;
		NullCheck(L_193);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_194 = L_193->___currentPlayerPokemonStats_13;
		NullCheck(L_194);
		String_t* L_195 = L_194->___type1_12;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_196 = __this->___player_5;
		NullCheck(L_196);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_197 = L_196->___currentPlayerPokemonStats_13;
		NullCheck(L_197);
		String_t* L_198 = L_197->___type2_13;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_199 = __this->___enemy_4;
		NullCheck(L_199);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_200 = L_199->___pokemonChampionObject_13;
		NullCheck(L_200);
		String_t* L_201 = L_200->___type1_12;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_202 = __this->___enemy_4;
		NullCheck(L_202);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_203 = L_202->___pokemonChampionObject_13;
		NullCheck(L_203);
		String_t* L_204 = L_203->___type2_13;
		String_t* L_205;
		L_205 = TableType_ResultatTableType_m125564E0AB6BCC1EF9580FC646949A19E43E225E(L_195, L_198, L_201, L_204, NULL);
		bool L_206;
		L_206 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_205, _stringLiteral8BF1A130D782F57F44234B152D673BC5D8C71C12, NULL);
		if (!L_206)
		{
			goto IL_055d;
		}
	}
	{
		// damageTypeTextChampion.text = "C'est super efficace";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_207 = __this->___damageTypeTextChampion_8;
		NullCheck(L_207);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_207, _stringLiteral8AF5F2E5B5BD21F9F72683062BE85804C4B6042D);
		// enemy.pokemonChampionObject.hp -= player.currentPlayerPokemonStats.damage * 2;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_208 = __this->___enemy_4;
		NullCheck(L_208);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_209 = L_208->___pokemonChampionObject_13;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_210 = L_209;
		NullCheck(L_210);
		int32_t L_211 = L_210->___hp_7;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_212 = __this->___player_5;
		NullCheck(L_212);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_213 = L_212->___currentPlayerPokemonStats_13;
		NullCheck(L_213);
		int32_t L_214 = L_213->___damage_6;
		NullCheck(L_210);
		L_210->___hp_7 = ((int32_t)il2cpp_codegen_subtract(L_211, ((int32_t)il2cpp_codegen_multiply(L_214, 2))));
	}

IL_055d:
	{
		// if (enemy.pokemonChampionObject.hp <= 0)
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_215 = __this->___enemy_4;
		NullCheck(L_215);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_216 = L_215->___pokemonChampionObject_13;
		NullCheck(L_216);
		int32_t L_217 = L_216->___hp_7;
		if ((((int32_t)L_217) > ((int32_t)0)))
		{
			goto IL_0586;
		}
	}
	{
		// player.OnDeathPokemon();
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_218 = __this->___player_5;
		NullCheck(L_218);
		PlayerCore_OnDeathPokemon_m9ECB501759B841AFA5396A16EC33B41525176D17(L_218, NULL);
		// enemy.OnDeathPokemonChampion();
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_219 = __this->___enemy_4;
		NullCheck(L_219);
		EnemyCore_OnDeathPokemonChampion_mD6EDC7DC507EE410F49A31B62ED0F657D037F548(L_219, NULL);
	}

IL_0586:
	{
		// }
		return;
	}
}
// System.Void ClickScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickScript__ctor_m8045598F96CD0825CD0725CA02BD8B0A28EE7B2B (ClickScript_t4B24BB07677BC6765DD67260652B6F47C6BF309F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EnemyCore::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyCore_Start_mFBF1DA107463BF751C7B621DB4B512DB2D3A499A (EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// fightTimer = 20f;
		__this->___fightTimer_17 = (20.0f);
		// timerChampionSliderBar.maxValue = fightTimer;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___timerChampionSliderBar_18;
		float L_1 = __this->___fightTimer_17;
		NullCheck(L_0);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_0, L_1, NULL);
		// for(int i = 0; i<routeActivate.Count - 1; i++)
		V_0 = 0;
		goto IL_0036;
	}

IL_0020:
	{
		// routeActivate[i].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___routeActivate_25;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_2, L_3, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// for(int i = 0; i<routeActivate.Count - 1; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0036:
	{
		// for(int i = 0; i<routeActivate.Count - 1; i++)
		int32_t L_6 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = __this->___routeActivate_25;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_7, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_8, 1)))))
		{
			goto IL_0020;
		}
	}
	{
		// InstancePokemonEnemy();
		EnemyCore_InstancePokemonEnemy_m2A221B326465D1F3B5DC6188DDBE69A19A869B2E(__this, NULL);
		// }
		return;
	}
}
// System.Void EnemyCore::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyCore_Update_m5D1FBCDE97FCD0F7A4A060D65FA83EBA82D0DA7F (EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// enemyPrefab.transform.GetChild(5).gameObject.GetComponent<TMP_Text>().text = pokemonObject.hp.ToString();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___enemyPrefab_5;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_1, 5, NULL);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4;
		L_4 = GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3(L_3, GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_5 = __this->___pokemonObject_4;
		NullCheck(L_5);
		int32_t* L_6 = (&L_5->___hp_7);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_6, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_7);
		// pokemonHpSliderBar.value = pokemonObject.hp;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_8 = __this->___pokemonHpSliderBar_6;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_9 = __this->___pokemonObject_4;
		NullCheck(L_9);
		int32_t L_10 = L_9->___hp_7;
		NullCheck(L_8);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_8, ((float)L_10));
		// championPanel.transform.GetChild(1).gameObject.GetComponent<TMP_Text>().text = (Mathf.Round(fightTimer * 100f) / 100f).ToString();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___championPanel_14;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_12, 1, NULL);
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		NullCheck(L_14);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_15;
		L_15 = GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3(L_14, GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		float L_16 = __this->___fightTimer_17;
		float L_17;
		L_17 = bankers_roundf(((float)il2cpp_codegen_multiply(L_16, (100.0f))));
		V_0 = ((float)(L_17/(100.0f)));
		String_t* L_18;
		L_18 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		NullCheck(L_15);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_15, L_18);
		// timerChampionSliderBar.value = fightTimer;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_19 = __this->___timerChampionSliderBar_18;
		float L_20 = __this->___fightTimer_17;
		NullCheck(L_19);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_19, L_20);
		// if (isInChampionsFight)
		bool L_21 = __this->___isInChampionsFight_16;
		if (!L_21)
		{
			goto IL_010b;
		}
	}
	{
		// fightTimer -= Time.deltaTime;
		float L_22 = __this->___fightTimer_17;
		float L_23;
		L_23 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___fightTimer_17 = ((float)il2cpp_codegen_subtract(L_22, L_23));
		// championPanel.transform.GetChild(5).gameObject.GetComponent<TMP_Text>().text = pokemonChampionObject.hp.ToString();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___championPanel_14;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_25, 5, NULL);
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_26, NULL);
		NullCheck(L_27);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_28;
		L_28 = GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3(L_27, GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_29 = __this->___pokemonChampionObject_13;
		NullCheck(L_29);
		int32_t* L_30 = (&L_29->___hp_7);
		String_t* L_31;
		L_31 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_30, NULL);
		NullCheck(L_28);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_28, L_31);
		// pokemonHpChampionSliderBar.value = pokemonChampionObject.hp;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_32 = __this->___pokemonHpChampionSliderBar_19;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_33 = __this->___pokemonChampionObject_13;
		NullCheck(L_33);
		int32_t L_34 = L_33->___hp_7;
		NullCheck(L_32);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_32, ((float)L_34));
		// if (fightTimer <= 0)
		float L_35 = __this->___fightTimer_17;
		if ((!(((float)L_35) <= ((float)(0.0f)))))
		{
			goto IL_010b;
		}
	}
	{
		// DefeatChampionFight();
		EnemyCore_DefeatChampionFight_mEF95AFAF26EDCC512486B18B9D5D097B2FAEC516(__this, NULL);
	}

IL_010b:
	{
		// }
		return;
	}
}
// System.Void EnemyCore::OnDeathPokemon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyCore_OnDeathPokemon_m55795BAA793A4D3EDEE71FBE44945AA369940DEA (EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* __this, const RuntimeMethod* method) 
{
	{
		// InstancePokemonEnemy();
		EnemyCore_InstancePokemonEnemy_m2A221B326465D1F3B5DC6188DDBE69A19A869B2E(__this, NULL);
		// }
		return;
	}
}
// System.Void EnemyCore::InstancePokemonEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyCore_InstancePokemonEnemy_m2A221B326465D1F3B5DC6188DDBE69A19A869B2E (EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5B0AB7378048C14E815E6D10EC971BEE9EC5523);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < pokemonInstanceObject.Length; i++)
		V_0 = 0;
		goto IL_0022;
	}

IL_0004:
	{
		// pokemonInstanceObject[i].hp = pokemonInstanceObject[i].maxHp;
		PokemonScriptableObjectEnemyU5BU5D_t52F1A2ECBC98A8CDC8F2CC76386A9AFD3F520A00* L_0 = __this->___pokemonInstanceObject_7;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		PokemonScriptableObjectEnemyU5BU5D_t52F1A2ECBC98A8CDC8F2CC76386A9AFD3F520A00* L_4 = __this->___pokemonInstanceObject_7;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		int32_t L_8 = L_7->___maxHp_6;
		NullCheck(L_3);
		L_3->___hp_7 = L_8;
		// for (int i = 0; i < pokemonInstanceObject.Length; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0022:
	{
		// for (int i = 0; i < pokemonInstanceObject.Length; i++)
		int32_t L_10 = V_0;
		PokemonScriptableObjectEnemyU5BU5D_t52F1A2ECBC98A8CDC8F2CC76386A9AFD3F520A00* L_11 = __this->___pokemonInstanceObject_7;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// aleaPokemonInstanceObject = Random.Range(0, pokemonInstanceObject.Length);
		PokemonScriptableObjectEnemyU5BU5D_t52F1A2ECBC98A8CDC8F2CC76386A9AFD3F520A00* L_12 = __this->___pokemonInstanceObject_7;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)(((RuntimeArray*)L_12)->max_length)), NULL);
		__this->___aleaPokemonInstanceObject_12 = L_13;
		// pokemonObject = pokemonInstanceObject[aleaPokemonInstanceObject];
		PokemonScriptableObjectEnemyU5BU5D_t52F1A2ECBC98A8CDC8F2CC76386A9AFD3F520A00* L_14 = __this->___pokemonInstanceObject_7;
		int32_t L_15 = __this->___aleaPokemonInstanceObject_12;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		__this->___pokemonObject_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pokemonObject_4), (void*)L_17);
		// enemyPrefab.transform.GetChild(2).gameObject.GetComponent<TMP_Text>().text = pokemonObject.namePoke.ToString() + " lvl." + pokemonObject.lvl.ToString();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___enemyPrefab_5;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_19, 2, NULL);
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_20, NULL);
		NullCheck(L_21);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_22;
		L_22 = GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3(L_21, GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_23 = __this->___pokemonObject_4;
		NullCheck(L_23);
		String_t* L_24 = L_23->___namePoke_9;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_24);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_26 = __this->___pokemonObject_4;
		NullCheck(L_26);
		int32_t* L_27 = (&L_26->___lvl_5);
		String_t* L_28;
		L_28 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_27, NULL);
		String_t* L_29;
		L_29 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_25, _stringLiteralF5B0AB7378048C14E815E6D10EC971BEE9EC5523, L_28, NULL);
		NullCheck(L_22);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_22, L_29);
		// enemyPrefab.transform.GetChild(3).gameObject.GetComponent<Image>().sprite = pokemonObject.sprite;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___enemyPrefab_5;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_31, 3, NULL);
		NullCheck(L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_32, NULL);
		NullCheck(L_33);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_34;
		L_34 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_33, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_35 = __this->___pokemonObject_4;
		NullCheck(L_35);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_36 = L_35->___sprite_10;
		NullCheck(L_34);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_34, L_36, NULL);
		// enemyPrefab.transform.GetChild(5).gameObject.GetComponent<TMP_Text>().text = pokemonObject.hp.ToString();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___enemyPrefab_5;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_37, NULL);
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_38, 5, NULL);
		NullCheck(L_39);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40;
		L_40 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_39, NULL);
		NullCheck(L_40);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_41;
		L_41 = GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3(L_40, GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_42 = __this->___pokemonObject_4;
		NullCheck(L_42);
		int32_t* L_43 = (&L_42->___hp_7);
		String_t* L_44;
		L_44 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_43, NULL);
		NullCheck(L_41);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_41, L_44);
		// pokemonHpSliderBar.maxValue = pokemonObject.maxHp;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_45 = __this->___pokemonHpSliderBar_6;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_46 = __this->___pokemonObject_4;
		NullCheck(L_46);
		int32_t L_47 = L_46->___maxHp_6;
		NullCheck(L_45);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_45, ((float)L_47), NULL);
		// pokemonHpSliderBar.value = pokemonObject.maxHp;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_48 = __this->___pokemonHpSliderBar_6;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_49 = __this->___pokemonObject_4;
		NullCheck(L_49);
		int32_t L_50 = L_49->___maxHp_6;
		NullCheck(L_48);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_48, ((float)L_50));
		// objectForPokemonType.transform.GetChild(0).gameObject.GetComponent<Image>().sprite = scriptTableType.SpriteForType(pokemonObject.type1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = __this->___objectForPokemonType_10;
		NullCheck(L_51);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_51, NULL);
		NullCheck(L_52);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53;
		L_53 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_52, 0, NULL);
		NullCheck(L_53);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54;
		L_54 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_53, NULL);
		NullCheck(L_54);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_55;
		L_55 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_54, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		TableType_t4F8D447FAEEA8C0F3609B4BD58E1EE94D88A7E09* L_56 = __this->___scriptTableType_9;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_57 = __this->___pokemonObject_4;
		NullCheck(L_57);
		String_t* L_58 = L_57->___type1_12;
		NullCheck(L_56);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_59;
		L_59 = TableType_SpriteForType_mF5F2224C5A7E6A6A4F27268F91A008ACF3EA58A7(L_56, L_58, NULL);
		NullCheck(L_55);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_55, L_59, NULL);
		// objectForPokemonType.transform.GetChild(1).gameObject.GetComponent<Image>().sprite = scriptTableType.SpriteForType(pokemonObject.type2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60 = __this->___objectForPokemonType_10;
		NullCheck(L_60);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61;
		L_61 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_60, NULL);
		NullCheck(L_61);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62;
		L_62 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_61, 1, NULL);
		NullCheck(L_62);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63;
		L_63 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_62, NULL);
		NullCheck(L_63);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_64;
		L_64 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_63, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		TableType_t4F8D447FAEEA8C0F3609B4BD58E1EE94D88A7E09* L_65 = __this->___scriptTableType_9;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_66 = __this->___pokemonObject_4;
		NullCheck(L_66);
		String_t* L_67 = L_66->___type2_13;
		NullCheck(L_65);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_68;
		L_68 = TableType_SpriteForType_mF5F2224C5A7E6A6A4F27268F91A008ACF3EA58A7(L_65, L_67, NULL);
		NullCheck(L_64);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_64, L_68, NULL);
		// scriptClick.damageTypeText.text = "";
		ClickScript_t4B24BB07677BC6765DD67260652B6F47C6BF309F* L_69 = __this->___scriptClick_8;
		NullCheck(L_69);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_70 = L_69->___damageTypeText_7;
		NullCheck(L_70);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_70, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Void EnemyCore::InstancePokemonEnemyChampion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyCore_InstancePokemonEnemyChampion_mD68359D808CA4B2F8AADC70280D433E15EB92D2E (EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5B0AB7378048C14E815E6D10EC971BEE9EC5523);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// championPanel.transform.GetChild(6).gameObject.GetComponent<Image>().sprite = champions[0];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___championPanel_14;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_1, 6, NULL);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_3, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_5 = __this->___champions_24;
		NullCheck(L_5);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6;
		L_6 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_5, 0, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		NullCheck(L_4);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_4, L_6, NULL);
		// for (int i = 0; i < pokemonInstanceObjectChampion.Length; i++)
		V_0 = 0;
		goto IL_004e;
	}

IL_0030:
	{
		// pokemonInstanceObjectChampion[i].hp = pokemonInstanceObjectChampion[i].maxHp;
		PokemonScriptableObjectEnemyU5BU5D_t52F1A2ECBC98A8CDC8F2CC76386A9AFD3F520A00* L_7 = __this->___pokemonInstanceObjectChampion_15;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		PokemonScriptableObjectEnemyU5BU5D_t52F1A2ECBC98A8CDC8F2CC76386A9AFD3F520A00* L_11 = __this->___pokemonInstanceObjectChampion_15;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		int32_t L_15 = L_14->___maxHp_6;
		NullCheck(L_10);
		L_10->___hp_7 = L_15;
		// for (int i = 0; i < pokemonInstanceObjectChampion.Length; i++)
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_004e:
	{
		// for (int i = 0; i < pokemonInstanceObjectChampion.Length; i++)
		int32_t L_17 = V_0;
		PokemonScriptableObjectEnemyU5BU5D_t52F1A2ECBC98A8CDC8F2CC76386A9AFD3F520A00* L_18 = __this->___pokemonInstanceObjectChampion_15;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0030;
		}
	}
	{
		// isInChampionsFight = true;
		__this->___isInChampionsFight_16 = (bool)1;
		// PokemonChampion();
		EnemyCore_PokemonChampion_mA6F3F0C76283E51534CFE9BE1CF96FC51129AB40(__this, NULL);
		// pokemonChampionObject = pokemonInstanceObjectChampion[indexPokemonChampionUse];
		PokemonScriptableObjectEnemyU5BU5D_t52F1A2ECBC98A8CDC8F2CC76386A9AFD3F520A00* L_19 = __this->___pokemonInstanceObjectChampion_15;
		int32_t L_20 = __this->___indexPokemonChampionUse_20;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		__this->___pokemonChampionObject_13 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pokemonChampionObject_13), (void*)L_22);
		// championPanel.transform.GetChild(3).gameObject.GetComponent<TMP_Text>().text = pokemonChampionObject.namePoke.ToString() + " lvl." + pokemonChampionObject.lvl.ToString();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___championPanel_14;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_24, 3, NULL);
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_25, NULL);
		NullCheck(L_26);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_27;
		L_27 = GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3(L_26, GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_28 = __this->___pokemonChampionObject_13;
		NullCheck(L_28);
		String_t* L_29 = L_28->___namePoke_9;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_29);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_31 = __this->___pokemonChampionObject_13;
		NullCheck(L_31);
		int32_t* L_32 = (&L_31->___lvl_5);
		String_t* L_33;
		L_33 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_32, NULL);
		String_t* L_34;
		L_34 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_30, _stringLiteralF5B0AB7378048C14E815E6D10EC971BEE9EC5523, L_33, NULL);
		NullCheck(L_27);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_27, L_34);
		// championPanel.transform.GetChild(2).gameObject.GetComponent<Image>().sprite = pokemonChampionObject.sprite;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___championPanel_14;
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_35, NULL);
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_36, 2, NULL);
		NullCheck(L_37);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_37, NULL);
		NullCheck(L_38);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_39;
		L_39 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_38, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_40 = __this->___pokemonChampionObject_13;
		NullCheck(L_40);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_41 = L_40->___sprite_10;
		NullCheck(L_39);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_39, L_41, NULL);
		// championPanel.transform.GetChild(5).gameObject.GetComponent<TMP_Text>().text = pokemonChampionObject.hp.ToString();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->___championPanel_14;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_42, NULL);
		NullCheck(L_43);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_43, 5, NULL);
		NullCheck(L_44);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45;
		L_45 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_44, NULL);
		NullCheck(L_45);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_46;
		L_46 = GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3(L_45, GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_47 = __this->___pokemonChampionObject_13;
		NullCheck(L_47);
		int32_t* L_48 = (&L_47->___hp_7);
		String_t* L_49;
		L_49 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_48, NULL);
		NullCheck(L_46);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_46, L_49);
		// pokemonHpChampionSliderBar.maxValue = pokemonChampionObject.maxHp;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_50 = __this->___pokemonHpChampionSliderBar_19;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_51 = __this->___pokemonChampionObject_13;
		NullCheck(L_51);
		int32_t L_52 = L_51->___maxHp_6;
		NullCheck(L_50);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_50, ((float)L_52), NULL);
		// pokemonHpChampionSliderBar.value = pokemonChampionObject.maxHp;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_53 = __this->___pokemonHpChampionSliderBar_19;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_54 = __this->___pokemonChampionObject_13;
		NullCheck(L_54);
		int32_t L_55 = L_54->___maxHp_6;
		NullCheck(L_53);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_53, ((float)L_55));
		// objectForPokemonTypeChampion.transform.GetChild(0).gameObject.GetComponent<Image>().sprite = scriptTableType.SpriteForType(pokemonChampionObject.type1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = __this->___objectForPokemonTypeChampion_11;
		NullCheck(L_56);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57;
		L_57 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_56, NULL);
		NullCheck(L_57);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_57, 0, NULL);
		NullCheck(L_58);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59;
		L_59 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_58, NULL);
		NullCheck(L_59);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_60;
		L_60 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_59, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		TableType_t4F8D447FAEEA8C0F3609B4BD58E1EE94D88A7E09* L_61 = __this->___scriptTableType_9;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_62 = __this->___pokemonChampionObject_13;
		NullCheck(L_62);
		String_t* L_63 = L_62->___type1_12;
		NullCheck(L_61);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_64;
		L_64 = TableType_SpriteForType_mF5F2224C5A7E6A6A4F27268F91A008ACF3EA58A7(L_61, L_63, NULL);
		NullCheck(L_60);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_60, L_64, NULL);
		// objectForPokemonTypeChampion.transform.GetChild(1).gameObject.GetComponent<Image>().sprite = scriptTableType.SpriteForType(pokemonChampionObject.type2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_65 = __this->___objectForPokemonTypeChampion_11;
		NullCheck(L_65);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66;
		L_66 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_65, NULL);
		NullCheck(L_66);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67;
		L_67 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_66, 1, NULL);
		NullCheck(L_67);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68;
		L_68 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_67, NULL);
		NullCheck(L_68);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_69;
		L_69 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_68, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		TableType_t4F8D447FAEEA8C0F3609B4BD58E1EE94D88A7E09* L_70 = __this->___scriptTableType_9;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_71 = __this->___pokemonChampionObject_13;
		NullCheck(L_71);
		String_t* L_72 = L_71->___type2_13;
		NullCheck(L_70);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_73;
		L_73 = TableType_SpriteForType_mF5F2224C5A7E6A6A4F27268F91A008ACF3EA58A7(L_70, L_72, NULL);
		NullCheck(L_69);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_69, L_73, NULL);
		// scriptClick.damageTypeText.text = "";
		ClickScript_t4B24BB07677BC6765DD67260652B6F47C6BF309F* L_74 = __this->___scriptClick_8;
		NullCheck(L_74);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_75 = L_74->___damageTypeText_7;
		NullCheck(L_75);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_75, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Void EnemyCore::OnDeathPokemonChampion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyCore_OnDeathPokemonChampion_mD6EDC7DC507EE410F49A31B62ED0F657D037F548 (EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5B0AB7378048C14E815E6D10EC971BEE9EC5523);
		s_Il2CppMethodInitialized = true;
	}
	{
		// numberOfPokemonChampion[indexPokemonChampionUse].GetComponent<Image>().color = new Color32(125, 125, 125, 255);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___numberOfPokemonChampion_21;
		int32_t L_1 = __this->___indexPokemonChampionUse_20;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_3, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_5), (uint8_t)((int32_t)125), (uint8_t)((int32_t)125), (uint8_t)((int32_t)125), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_5, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_6);
		// if (indexPokemonChampionUse < pokemonInstanceObjectChampion.Length -1)
		int32_t L_7 = __this->___indexPokemonChampionUse_20;
		PokemonScriptableObjectEnemyU5BU5D_t52F1A2ECBC98A8CDC8F2CC76386A9AFD3F520A00* L_8 = __this->___pokemonInstanceObjectChampion_15;
		NullCheck(L_8);
		if ((((int32_t)L_7) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), 1)))))
		{
			goto IL_004e;
		}
	}
	{
		// indexPokemonChampionUse++;
		int32_t L_9 = __this->___indexPokemonChampionUse_20;
		__this->___indexPokemonChampionUse_20 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		goto IL_0055;
	}

IL_004e:
	{
		// WinChampionfight();
		EnemyCore_WinChampionfight_mEA1F41A91973A7E722317B288FD111B1802084D1(__this, (bool)0, NULL);
	}

IL_0055:
	{
		// pokemonChampionObject.hp = pokemonChampionObject.maxHp;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_10 = __this->___pokemonChampionObject_13;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_11 = __this->___pokemonChampionObject_13;
		NullCheck(L_11);
		int32_t L_12 = L_11->___maxHp_6;
		NullCheck(L_10);
		L_10->___hp_7 = L_12;
		// pokemonChampionObject = pokemonInstanceObjectChampion[indexPokemonChampionUse];
		PokemonScriptableObjectEnemyU5BU5D_t52F1A2ECBC98A8CDC8F2CC76386A9AFD3F520A00* L_13 = __this->___pokemonInstanceObjectChampion_15;
		int32_t L_14 = __this->___indexPokemonChampionUse_20;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		__this->___pokemonChampionObject_13 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pokemonChampionObject_13), (void*)L_16);
		// championPanel.transform.GetChild(3).gameObject.GetComponent<TMP_Text>().text = pokemonChampionObject.namePoke.ToString() + " lvl." + pokemonChampionObject.lvl.ToString();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___championPanel_14;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_18, 3, NULL);
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_19, NULL);
		NullCheck(L_20);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_21;
		L_21 = GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3(L_20, GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_22 = __this->___pokemonChampionObject_13;
		NullCheck(L_22);
		String_t* L_23 = L_22->___namePoke_9;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_25 = __this->___pokemonChampionObject_13;
		NullCheck(L_25);
		int32_t* L_26 = (&L_25->___lvl_5);
		String_t* L_27;
		L_27 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_26, NULL);
		String_t* L_28;
		L_28 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_24, _stringLiteralF5B0AB7378048C14E815E6D10EC971BEE9EC5523, L_27, NULL);
		NullCheck(L_21);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_21, L_28);
		// championPanel.transform.GetChild(2).gameObject.GetComponent<Image>().sprite = pokemonChampionObject.sprite;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___championPanel_14;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_30, 2, NULL);
		NullCheck(L_31);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_31, NULL);
		NullCheck(L_32);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_33;
		L_33 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_32, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_34 = __this->___pokemonChampionObject_13;
		NullCheck(L_34);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_35 = L_34->___sprite_10;
		NullCheck(L_33);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_33, L_35, NULL);
		// championPanel.transform.GetChild(5).gameObject.GetComponent<TMP_Text>().text = pokemonChampionObject.hp.ToString();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___championPanel_14;
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_36, NULL);
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_37, 5, NULL);
		NullCheck(L_38);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_38, NULL);
		NullCheck(L_39);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_40;
		L_40 = GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3(L_39, GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_41 = __this->___pokemonChampionObject_13;
		NullCheck(L_41);
		int32_t* L_42 = (&L_41->___hp_7);
		String_t* L_43;
		L_43 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_42, NULL);
		NullCheck(L_40);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_40, L_43);
		// pokemonHpChampionSliderBar.maxValue = pokemonChampionObject.maxHp;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_44 = __this->___pokemonHpChampionSliderBar_19;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_45 = __this->___pokemonChampionObject_13;
		NullCheck(L_45);
		int32_t L_46 = L_45->___maxHp_6;
		NullCheck(L_44);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_44, ((float)L_46), NULL);
		// pokemonHpChampionSliderBar.value = pokemonChampionObject.maxHp;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_47 = __this->___pokemonHpChampionSliderBar_19;
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_48 = __this->___pokemonChampionObject_13;
		NullCheck(L_48);
		int32_t L_49 = L_48->___maxHp_6;
		NullCheck(L_47);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_47, ((float)L_49));
		// scriptClick.damageTypeText.text = "";
		ClickScript_t4B24BB07677BC6765DD67260652B6F47C6BF309F* L_50 = __this->___scriptClick_8;
		NullCheck(L_50);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_51 = L_50->___damageTypeText_7;
		NullCheck(L_51);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_51, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Void EnemyCore::DefeatChampionFight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyCore_DefeatChampionFight_mEF95AFAF26EDCC512486B18B9D5D097B2FAEC516 (EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* __this, const RuntimeMethod* method) 
{
	{
		// EndChampionFight();
		EnemyCore_EndChampionFight_m5078B043036462986E455BCEA2B7B3B0FE6B1A62(__this, NULL);
		// }
		return;
	}
}
// System.Void EnemyCore::WinChampionfight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyCore_WinChampionfight_mEA1F41A91973A7E722317B288FD111B1802084D1 (EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* __this, bool ___load0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_m16F098D3BC103A12E2E2FF5C4666F90864B7658B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD45F9492B19AB597D9741153BB51DD8F94F09737_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// badgePlayerObtain.Insert(0, badgeAvailable[0]);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___badgePlayerObtain_23;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = __this->___badgeAvailable_22;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_1, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_Insert_m16F098D3BC103A12E2E2FF5C4666F90864B7658B(L_0, 0, L_2, List_1_Insert_m16F098D3BC103A12E2E2FF5C4666F90864B7658B_RuntimeMethod_var);
		// badgeAvailable.Remove(badgeAvailable[0]);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___badgeAvailable_22;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___badgeAvailable_22;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_4, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_3);
		bool L_6;
		L_6 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_3, L_5, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		// champions.Remove(champions[0]);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_7 = __this->___champions_24;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_8 = __this->___champions_24;
		NullCheck(L_8);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_9;
		L_9 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_8, 0, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		NullCheck(L_7);
		bool L_10;
		L_10 = List_1_Remove_mD45F9492B19AB597D9741153BB51DD8F94F09737(L_7, L_9, List_1_Remove_mD45F9492B19AB597D9741153BB51DD8F94F09737_RuntimeMethod_var);
		// badgePlayerObtain[0].GetComponent<Image>().color = new Color32(255, 255, 255, 255);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_11 = __this->___badgePlayerObtain_23;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_11, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_12);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13;
		L_13 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_12, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_14;
		memset((&L_14), 0, sizeof(L_14));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_14), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		L_15 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_14, NULL);
		NullCheck(L_13);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_15);
		// if(badgeAvailable.Count != 0)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_16 = __this->___badgeAvailable_22;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_16, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_00b4;
		}
	}
	{
		// badgeAvailable[0].GetComponent<Image>().color = new Color32(125, 125, 125, 255);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_18 = __this->___badgeAvailable_22;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_18, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_19);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_20;
		L_20 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_19, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_21;
		memset((&L_21), 0, sizeof(L_21));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_21), (uint8_t)((int32_t)125), (uint8_t)((int32_t)125), (uint8_t)((int32_t)125), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_21, NULL);
		NullCheck(L_20);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_20, L_22);
	}

IL_00b4:
	{
		// badgePlayerObtain[0].GetComponent<Button>().enabled = false;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_23 = __this->___badgePlayerObtain_23;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_23, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_24);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_25;
		L_25 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_24, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_25);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_25, (bool)0, NULL);
		// if (badgeAvailable.Count != 0)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_26 = __this->___badgeAvailable_22;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_26, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if (!L_27)
		{
			goto IL_00ef;
		}
	}
	{
		// badgeAvailable[0].GetComponent<Button>().enabled = true;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_28 = __this->___badgeAvailable_22;
		NullCheck(L_28);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_28, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_29);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_30;
		L_30 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_29, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_30);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_30, (bool)1, NULL);
	}

IL_00ef:
	{
		// ActivationRoute();
		EnemyCore_ActivationRoute_m51EE9F4961A87BFBC3430DBACB0AA13447A9F602(__this, NULL);
		// winScript.RemplirVarWin(badgePlayerObtain[0].GetComponent<Image>().sprite, badgePlayerObtain[0].name);
		WinBadgesOrLigues_t0333DDB55F7891A171F154295F2F4B7FC3F2D26B* L_31 = __this->___winScript_26;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_32 = __this->___badgePlayerObtain_23;
		NullCheck(L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_32, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_33);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_34;
		L_34 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_33, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		NullCheck(L_34);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_35;
		L_35 = Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline(L_34, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_36 = __this->___badgePlayerObtain_23;
		NullCheck(L_36);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_36, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_37);
		String_t* L_38;
		L_38 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_37, NULL);
		NullCheck(L_31);
		WinBadgesOrLigues_RemplirVarWin_m8EA7BD3EDEA281CFFC0CBD62DC070256633AAE01_inline(L_31, L_35, L_38, NULL);
		// if (!load)
		bool L_39 = ___load0;
		if (L_39)
		{
			goto IL_0135;
		}
	}
	{
		// winScript.startCorou();
		WinBadgesOrLigues_t0333DDB55F7891A171F154295F2F4B7FC3F2D26B* L_40 = __this->___winScript_26;
		NullCheck(L_40);
		WinBadgesOrLigues_startCorou_mEAE59B28ED4ECED51DF5D4464DC3CFA7059515B7(L_40, NULL);
	}

IL_0135:
	{
		// EndChampionFight();
		EnemyCore_EndChampionFight_m5078B043036462986E455BCEA2B7B3B0FE6B1A62(__this, NULL);
		// }
		return;
	}
}
// System.Void EnemyCore::EndChampionFight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyCore_EndChampionFight_m5078B043036462986E455BCEA2B7B3B0FE6B1A62 (EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* __this, const RuntimeMethod* method) 
{
	{
		// championPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___championPanel_14;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// isInChampionsFight = false;
		__this->___isInChampionsFight_16 = (bool)0;
		// fightTimer = 20f;
		__this->___fightTimer_17 = (20.0f);
		// indexPokemonChampionUse = 0;
		__this->___indexPokemonChampionUse_20 = 0;
		// InstancePokemonEnemy();
		EnemyCore_InstancePokemonEnemy_m2A221B326465D1F3B5DC6188DDBE69A19A869B2E(__this, NULL);
		// }
		return;
	}
}
// System.Void EnemyCore::PokemonChampion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyCore_PokemonChampion_mA6F3F0C76283E51534CFE9BE1CF96FC51129AB40 (EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < pokemonInstanceObjectChampion.Length; i++)
		V_0 = 0;
		goto IL_0038;
	}

IL_0004:
	{
		// numberOfPokemonChampion[i].GetComponent<Image>().color = new Color32(255, 255, 255, 255);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___numberOfPokemonChampion_21;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_3, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_5), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_5, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_6);
		// for (int i = 0; i < pokemonInstanceObjectChampion.Length; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0038:
	{
		// for (int i = 0; i < pokemonInstanceObjectChampion.Length; i++)
		int32_t L_8 = V_0;
		PokemonScriptableObjectEnemyU5BU5D_t52F1A2ECBC98A8CDC8F2CC76386A9AFD3F520A00* L_9 = __this->___pokemonInstanceObjectChampion_15;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void EnemyCore::ActivationRoute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyCore_ActivationRoute_m51EE9F4961A87BFBC3430DBACB0AA13447A9F602 (EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// if (badgePlayerObtain.Count == 1)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___badgePlayerObtain_23;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0044;
		}
	}
	{
		// for(int i = 0; i <= 2; i++)
		V_0 = 0;
		goto IL_0040;
	}

IL_0012:
	{
		// routeActivate[0].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___routeActivate_25;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_2, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// routeActivate.Remove(routeActivate[0]);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___routeActivate_25;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->___routeActivate_25;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_5, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_4);
		bool L_7;
		L_7 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_4, L_6, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		// for(int i = 0; i <= 2; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0040:
	{
		// for(int i = 0; i <= 2; i++)
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) <= ((int32_t)2)))
		{
			goto IL_0012;
		}
	}

IL_0044:
	{
		// if (badgePlayerObtain.Count == 2)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_10 = __this->___badgePlayerObtain_23;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_10, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_0088;
		}
	}
	{
		// for (int i = 0; i <= 8; i++)
		V_1 = 0;
		goto IL_0084;
	}

IL_0056:
	{
		// routeActivate[0].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_12 = __this->___routeActivate_25;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_12, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
		// routeActivate.Remove(routeActivate[0]);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_14 = __this->___routeActivate_25;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_15 = __this->___routeActivate_25;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_15, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_14);
		bool L_17;
		L_17 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_14, L_16, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		// for (int i = 0; i <= 8; i++)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0084:
	{
		// for (int i = 0; i <= 8; i++)
		int32_t L_19 = V_1;
		if ((((int32_t)L_19) <= ((int32_t)8)))
		{
			goto IL_0056;
		}
	}

IL_0088:
	{
		// if (badgePlayerObtain.Count == 3)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_20 = __this->___badgePlayerObtain_23;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_20, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((!(((uint32_t)L_21) == ((uint32_t)3))))
		{
			goto IL_00cc;
		}
	}
	{
		// for (int i = 0; i <= 2; i++)
		V_2 = 0;
		goto IL_00c8;
	}

IL_009a:
	{
		// routeActivate[0].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_22 = __this->___routeActivate_25;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_22, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)1, NULL);
		// routeActivate.Remove(routeActivate[0]);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_24 = __this->___routeActivate_25;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_25 = __this->___routeActivate_25;
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_25, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_24);
		bool L_27;
		L_27 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_24, L_26, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		// for (int i = 0; i <= 2; i++)
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c8:
	{
		// for (int i = 0; i <= 2; i++)
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) <= ((int32_t)2)))
		{
			goto IL_009a;
		}
	}

IL_00cc:
	{
		// if (badgePlayerObtain.Count == 4)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_30 = __this->___badgePlayerObtain_23;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_30, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((!(((uint32_t)L_31) == ((uint32_t)4))))
		{
			goto IL_0110;
		}
	}
	{
		// for (int i = 0; i <= 2; i++)
		V_3 = 0;
		goto IL_010c;
	}

IL_00de:
	{
		// routeActivate[0].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_32 = __this->___routeActivate_25;
		NullCheck(L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_32, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_33);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)1, NULL);
		// routeActivate.Remove(routeActivate[0]);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_34 = __this->___routeActivate_25;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_35 = __this->___routeActivate_25;
		NullCheck(L_35);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_35, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_34);
		bool L_37;
		L_37 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_34, L_36, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		// for (int i = 0; i <= 2; i++)
		int32_t L_38 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_010c:
	{
		// for (int i = 0; i <= 2; i++)
		int32_t L_39 = V_3;
		if ((((int32_t)L_39) <= ((int32_t)2)))
		{
			goto IL_00de;
		}
	}

IL_0110:
	{
		// if (badgePlayerObtain.Count == 5)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_40 = __this->___badgePlayerObtain_23;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_40, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((!(((uint32_t)L_41) == ((uint32_t)5))))
		{
			goto IL_0158;
		}
	}
	{
		// for(int i = 0; i <= 3; i++)
		V_4 = 0;
		goto IL_0153;
	}

IL_0123:
	{
		// routeActivate[0].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_42 = __this->___routeActivate_25;
		NullCheck(L_42);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43;
		L_43 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_42, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_43);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_43, (bool)1, NULL);
		// routeActivate.Remove(routeActivate[0]);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_44 = __this->___routeActivate_25;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_45 = __this->___routeActivate_25;
		NullCheck(L_45);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46;
		L_46 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_45, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_44);
		bool L_47;
		L_47 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_44, L_46, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		// for(int i = 0; i <= 3; i++)
		int32_t L_48 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_0153:
	{
		// for(int i = 0; i <= 3; i++)
		int32_t L_49 = V_4;
		if ((((int32_t)L_49) <= ((int32_t)3)))
		{
			goto IL_0123;
		}
	}

IL_0158:
	{
		// if (badgePlayerObtain.Count == 6)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_50 = __this->___badgePlayerObtain_23;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_50, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((!(((uint32_t)L_51) == ((uint32_t)6))))
		{
			goto IL_01a0;
		}
	}
	{
		// for (int i = 0; i <= 2; i++)
		V_5 = 0;
		goto IL_019b;
	}

IL_016b:
	{
		// routeActivate[0].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_52 = __this->___routeActivate_25;
		NullCheck(L_52);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53;
		L_53 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_52, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_53);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_53, (bool)1, NULL);
		// routeActivate.Remove(routeActivate[0]);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_54 = __this->___routeActivate_25;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_55 = __this->___routeActivate_25;
		NullCheck(L_55);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56;
		L_56 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_55, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_54);
		bool L_57;
		L_57 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_54, L_56, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		// for (int i = 0; i <= 2; i++)
		int32_t L_58 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_019b:
	{
		// for (int i = 0; i <= 2; i++)
		int32_t L_59 = V_5;
		if ((((int32_t)L_59) <= ((int32_t)2)))
		{
			goto IL_016b;
		}
	}

IL_01a0:
	{
		// if (badgePlayerObtain.Count == 7)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_60 = __this->___badgePlayerObtain_23;
		NullCheck(L_60);
		int32_t L_61;
		L_61 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_60, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((!(((uint32_t)L_61) == ((uint32_t)7))))
		{
			goto IL_01d8;
		}
	}
	{
		// routeActivate[0].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_62 = __this->___routeActivate_25;
		NullCheck(L_62);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63;
		L_63 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_62, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_63);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_63, (bool)1, NULL);
		// routeActivate.Remove(routeActivate[0]);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_64 = __this->___routeActivate_25;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_65 = __this->___routeActivate_25;
		NullCheck(L_65);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66;
		L_66 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_65, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_64);
		bool L_67;
		L_67 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_64, L_66, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
	}

IL_01d8:
	{
		// if (badgePlayerObtain.Count == 8)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_68 = __this->___badgePlayerObtain_23;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_68, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((!(((uint32_t)L_69) == ((uint32_t)8))))
		{
			goto IL_0220;
		}
	}
	{
		// for(int i = 0; i <= 2; i++)
		V_6 = 0;
		goto IL_021b;
	}

IL_01eb:
	{
		// routeActivate[0].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_70 = __this->___routeActivate_25;
		NullCheck(L_70);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71;
		L_71 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_70, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_71);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_71, (bool)1, NULL);
		// routeActivate.Remove(routeActivate[0]);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_72 = __this->___routeActivate_25;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_73 = __this->___routeActivate_25;
		NullCheck(L_73);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_74;
		L_74 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_73, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_72);
		bool L_75;
		L_75 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_72, L_74, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		// for(int i = 0; i <= 2; i++)
		int32_t L_76 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_021b:
	{
		// for(int i = 0; i <= 2; i++)
		int32_t L_77 = V_6;
		if ((((int32_t)L_77) <= ((int32_t)2)))
		{
			goto IL_01eb;
		}
	}

IL_0220:
	{
		// }
		return;
	}
}
// System.Void EnemyCore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyCore__ctor_mCF30D4629A7F2AAC406368B536C3B68AEC3462E9 (EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GestionUIPanel::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestionUIPanel_Start_mE31D92ECD3B655B65F24B8F362B6183FD5B595E3 (GestionUIPanel_t62B5CEB7B9B4B03F1FEA92085B3CAE918FF8D319* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// panelChampionsFight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___panelChampionsFight_13;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// panelMap.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___panelMap_7;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// iconeStorage.GetComponent<Image>().color = new Color32(100, 100, 100, 255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___iconeStorage_10;
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_2, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_4), (uint8_t)((int32_t)100), (uint8_t)((int32_t)100), (uint8_t)((int32_t)100), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_4, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_5);
		// iconeShop.GetComponent<Image>().color = new Color32(100, 100, 100, 255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___iconeShop_11;
		NullCheck(L_6);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7;
		L_7 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_6, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_8), (uint8_t)((int32_t)100), (uint8_t)((int32_t)100), (uint8_t)((int32_t)100), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_8, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_9);
		// iconeMap.GetComponent<Image>().color = new Color32(100, 100, 100, 255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___iconeMap_12;
		NullCheck(L_10);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11;
		L_11 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_10, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), (uint8_t)((int32_t)100), (uint8_t)((int32_t)100), (uint8_t)((int32_t)100), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_12, NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_13);
		// panelPokemon.transform.parent.SetAsLastSibling();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___panelPokemon_4;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_15, NULL);
		NullCheck(L_16);
		Transform_SetAsLastSibling_m848AF1A0B4C7912FE88D8CBCF92B83D57B2B917E(L_16, NULL);
		// panelPokedollars.transform.SetAsLastSibling();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___panelPokedollars_8;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		NullCheck(L_18);
		Transform_SetAsLastSibling_m848AF1A0B4C7912FE88D8CBCF92B83D57B2B917E(L_18, NULL);
		// }
		return;
	}
}
// System.Void GestionUIPanel::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestionUIPanel_Update_m7E61AE7D7CBD8EB9FAEDECFE90F46FAE038F8B8E (GestionUIPanel_t62B5CEB7B9B4B03F1FEA92085B3CAE918FF8D319* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GestionUIPanel::OpenPanelPokemon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestionUIPanel_OpenPanelPokemon_m485057C445E6F2A4E04E73EE98AC90B10F820B14 (GestionUIPanel_t62B5CEB7B9B4B03F1FEA92085B3CAE918FF8D319* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// iconePokemon.GetComponent<Image>().color = new Color32(255, 255, 255, 255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___iconePokemon_9;
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_0, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_2), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_2, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_3);
		// iconeStorage.GetComponent<Image>().color = new Color32(100, 100, 100, 255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___iconeStorage_10;
		NullCheck(L_4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5;
		L_5 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_4, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_6), (uint8_t)((int32_t)100), (uint8_t)((int32_t)100), (uint8_t)((int32_t)100), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_6, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_7);
		// iconeShop.GetComponent<Image>().color = new Color32(100, 100, 100, 255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___iconeShop_11;
		NullCheck(L_8);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9;
		L_9 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_8, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_10;
		memset((&L_10), 0, sizeof(L_10));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_10), (uint8_t)((int32_t)100), (uint8_t)((int32_t)100), (uint8_t)((int32_t)100), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_10, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_11);
		// iconeMap.GetComponent<Image>().color = new Color32(100, 100, 100, 255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___iconeMap_12;
		NullCheck(L_12);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13;
		L_13 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_12, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_14;
		memset((&L_14), 0, sizeof(L_14));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_14), (uint8_t)((int32_t)100), (uint8_t)((int32_t)100), (uint8_t)((int32_t)100), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		L_15 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_14, NULL);
		NullCheck(L_13);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_15);
		// panelPokemon.transform.parent.SetAsLastSibling();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___panelPokemon_4;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_17, NULL);
		NullCheck(L_18);
		Transform_SetAsLastSibling_m848AF1A0B4C7912FE88D8CBCF92B83D57B2B917E(L_18, NULL);
		// panelPokedollars.transform.SetAsLastSibling();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___panelPokedollars_8;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		NullCheck(L_20);
		Transform_SetAsLastSibling_m848AF1A0B4C7912FE88D8CBCF92B83D57B2B917E(L_20, NULL);
		// panelMap.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___panelMap_7;
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GestionUIPanel::OpenPanelStorage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestionUIPanel_OpenPanelStorage_m22C4E60561077F1287E280836F797842B3FC3CF9 (GestionUIPanel_t62B5CEB7B9B4B03F1FEA92085B3CAE918FF8D319* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// iconePokemon.GetComponent<Image>().color = new Color32(100, 100, 100, 255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___iconePokemon_9;
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_0, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_2), (uint8_t)((int32_t)100), (uint8_t)((int32_t)100), (uint8_t)((int32_t)100), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_2, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_3);
		// iconeStorage.GetComponent<Image>().color = new Color32(255, 255, 255, 255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___iconeStorage_10;
		NullCheck(L_4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5;
		L_5 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_4, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_6), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_6, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_7);
		// iconeShop.GetComponent<Image>().color = new Color32(100, 100, 100, 255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___iconeShop_11;
		NullCheck(L_8);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9;
		L_9 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_8, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_10;
		memset((&L_10), 0, sizeof(L_10));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_10), (uint8_t)((int32_t)100), (uint8_t)((int32_t)100), (uint8_t)((int32_t)100), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_10, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_11);
		// iconeMap.GetComponent<Image>().color = new Color32(100, 100, 100, 255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___iconeMap_12;
		NullCheck(L_12);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13;
		L_13 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_12, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_14;
		memset((&L_14), 0, sizeof(L_14));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_14), (uint8_t)((int32_t)100), (uint8_t)((int32_t)100), (uint8_t)((int32_t)100), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		L_15 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_14, NULL);
		NullCheck(L_13);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_15);
		// panelStorage.transform.parent.SetAsLastSibling();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___panelStorage_5;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_17, NULL);
		NullCheck(L_18);
		Transform_SetAsLastSibling_m848AF1A0B4C7912FE88D8CBCF92B83D57B2B917E(L_18, NULL);
		// panelPokedollars.transform.SetAsLastSibling();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___panelPokedollars_8;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		NullCheck(L_20);
		Transform_SetAsLastSibling_m848AF1A0B4C7912FE88D8CBCF92B83D57B2B917E(L_20, NULL);
		// panelMap.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___panelMap_7;
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GestionUIPanel::OpenPanelShop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestionUIPanel_OpenPanelShop_m3FE1D55DFA4B9315D42BDAD153A12A0B3CBB74D9 (GestionUIPanel_t62B5CEB7B9B4B03F1FEA92085B3CAE918FF8D319* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// iconePokemon.GetComponent<Image>().color = new Color32(100, 100, 100, 255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___iconePokemon_9;
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_0, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_2), (uint8_t)((int32_t)100), (uint8_t)((int32_t)100), (uint8_t)((int32_t)100), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_2, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_3);
		// iconeStorage.GetComponent<Image>().color = new Color32(100, 100, 100, 255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___iconeStorage_10;
		NullCheck(L_4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5;
		L_5 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_4, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_6), (uint8_t)((int32_t)100), (uint8_t)((int32_t)100), (uint8_t)((int32_t)100), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_6, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_7);
		// iconeShop.GetComponent<Image>().color = new Color32(255, 255, 255, 255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___iconeShop_11;
		NullCheck(L_8);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9;
		L_9 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_8, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_10;
		memset((&L_10), 0, sizeof(L_10));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_10), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_10, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_11);
		// iconeMap.GetComponent<Image>().color = new Color32(100, 100, 100, 255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___iconeMap_12;
		NullCheck(L_12);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13;
		L_13 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_12, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_14;
		memset((&L_14), 0, sizeof(L_14));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_14), (uint8_t)((int32_t)100), (uint8_t)((int32_t)100), (uint8_t)((int32_t)100), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		L_15 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_14, NULL);
		NullCheck(L_13);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_15);
		// panelShop.transform.parent.SetAsLastSibling();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___panelShop_6;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_17, NULL);
		NullCheck(L_18);
		Transform_SetAsLastSibling_m848AF1A0B4C7912FE88D8CBCF92B83D57B2B917E(L_18, NULL);
		// panelPokedollars.transform.SetAsLastSibling();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___panelPokedollars_8;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		NullCheck(L_20);
		Transform_SetAsLastSibling_m848AF1A0B4C7912FE88D8CBCF92B83D57B2B917E(L_20, NULL);
		// panelMap.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___panelMap_7;
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GestionUIPanel::OpenPanelMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestionUIPanel_OpenPanelMap_mD2DB74906EF7B2EFAD2509E18F84C149C0FFFC08 (GestionUIPanel_t62B5CEB7B9B4B03F1FEA92085B3CAE918FF8D319* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// iconePokemon.GetComponent<Image>().color = new Color32(100, 100, 100, 255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___iconePokemon_9;
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_0, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_2), (uint8_t)((int32_t)100), (uint8_t)((int32_t)100), (uint8_t)((int32_t)100), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_2, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_3);
		// iconeStorage.GetComponent<Image>().color = new Color32(100, 100, 100, 255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___iconeStorage_10;
		NullCheck(L_4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5;
		L_5 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_4, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_6), (uint8_t)((int32_t)100), (uint8_t)((int32_t)100), (uint8_t)((int32_t)100), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_6, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_7);
		// iconeShop.GetComponent<Image>().color = new Color32(100, 100, 100, 255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___iconeShop_11;
		NullCheck(L_8);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9;
		L_9 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_8, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_10;
		memset((&L_10), 0, sizeof(L_10));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_10), (uint8_t)((int32_t)100), (uint8_t)((int32_t)100), (uint8_t)((int32_t)100), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_10, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_11);
		// iconeMap.GetComponent<Image>().color = new Color32(255, 255, 255, 255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___iconeMap_12;
		NullCheck(L_12);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13;
		L_13 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_12, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_14;
		memset((&L_14), 0, sizeof(L_14));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_14), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		L_15 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_14, NULL);
		NullCheck(L_13);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_15);
		// panelMap.transform.parent.SetAsLastSibling();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___panelMap_7;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_17, NULL);
		NullCheck(L_18);
		Transform_SetAsLastSibling_m848AF1A0B4C7912FE88D8CBCF92B83D57B2B917E(L_18, NULL);
		// panelMap.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___panelMap_7;
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GestionUIPanel::OpenPanelChampionsFight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestionUIPanel_OpenPanelChampionsFight_m4E949EC84AED8AA51F57A8B449A236253345360F (GestionUIPanel_t62B5CEB7B9B4B03F1FEA92085B3CAE918FF8D319* __this, const RuntimeMethod* method) 
{
	{
		// panelChampionsFight.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___panelChampionsFight_13;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// OpenPanelPokemon();
		GestionUIPanel_OpenPanelPokemon_m485057C445E6F2A4E04E73EE98AC90B10F820B14(__this, NULL);
		// }
		return;
	}
}
// System.Void GestionUIPanel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestionUIPanel__ctor_m817FB9B615C8EE8D4304CB8D7C8DA1E97FCB1397 (GestionUIPanel_t62B5CEB7B9B4B03F1FEA92085B3CAE918FF8D319* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void InstanciatePokemon::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstanciatePokemon_Start_mF31A3F4E23E78A39C3C1C5F98936648FF5001910 (InstanciatePokemon_tDF0A8C405EF4A0171FFF22108615868A8835F610* __this, const RuntimeMethod* method) 
{
	{
		// posPokeInstantiate = 0;
		__this->___posPokeInstantiate_4 = 0;
		// posXShopInstantiate = 0;
		__this->___posXShopInstantiate_6 = 0;
		// posYShopInstantiate = 0;
		__this->___posYShopInstantiate_7 = 0;
		// compteurShop = 0;
		__this->___compteurShop_8 = 0;
		// }
		return;
	}
}
// System.Void InstanciatePokemon::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstanciatePokemon_Update_mE4C1D5BE912C0E08A2440FDC1AA1D4937C4B6565 (InstanciatePokemon_tDF0A8C405EF4A0171FFF22108615868A8835F610* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void InstanciatePokemon::InstantiatePokemon(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstanciatePokemon_InstantiatePokemon_mA162E874CBBE858F3117F7E06A28DBA87BCD35C4 (InstanciatePokemon_tDF0A8C405EF4A0171FFF22108615868A8835F610* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefabPoke0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral248673350E53D91402C332FC73903A50CE8C7FAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// poke = Instantiate(prefabPoke, new Vector3(posPokeInstantiate+50, -100, 0), Quaternion.identity) as GameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___prefabPoke0;
		int32_t L_1 = __this->___posPokeInstantiate_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), ((float)((int32_t)il2cpp_codegen_add(L_1, ((int32_t)50)))), (-100.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_0, L_2, L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		__this->___poke_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___poke_5), (void*)L_4);
		// poke.transform.SetParent(GameObject.FindGameObjectWithTag("Pokemon").transform, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___poke_5;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteral248673350E53D91402C332FC73903A50CE8C7FAB, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_6);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_6, L_8, (bool)0, NULL);
		// poke.name = poke.name.Replace("(Clone)", "");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___poke_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___poke_5;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_11, _stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		NullCheck(L_9);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_9, L_12, NULL);
		// posPokeInstantiate += 250;
		int32_t L_13 = __this->___posPokeInstantiate_4;
		__this->___posPokeInstantiate_4 = ((int32_t)il2cpp_codegen_add(L_13, ((int32_t)250)));
		// }
		return;
	}
}
// System.Void InstanciatePokemon::InstantiateShop(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstanciatePokemon_InstantiateShop_mAC29CFBE26814FD51912C5D8D236580C8F1A5759 (InstanciatePokemon_tDF0A8C405EF4A0171FFF22108615868A8835F610* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefabPoke0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(compteurShop == 7)
		int32_t L_0 = __this->___compteurShop_8;
		if ((!(((uint32_t)L_0) == ((uint32_t)7))))
		{
			goto IL_0029;
		}
	}
	{
		// posYShopInstantiate -= 300;
		int32_t L_1 = __this->___posYShopInstantiate_7;
		__this->___posYShopInstantiate_7 = ((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)300)));
		// posXShopInstantiate = 0;
		__this->___posXShopInstantiate_6 = 0;
		// compteurShop = 0;
		__this->___compteurShop_8 = 0;
	}

IL_0029:
	{
		// shop = Instantiate(prefabPoke, new Vector3(posXShopInstantiate+25, posYShopInstantiate-25, 0), Quaternion.identity) as GameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___prefabPoke0;
		int32_t L_3 = __this->___posXShopInstantiate_6;
		int32_t L_4 = __this->___posYShopInstantiate_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), ((float)((int32_t)il2cpp_codegen_add(L_3, ((int32_t)25)))), ((float)((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)25)))), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_2, L_5, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		__this->___shop_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shop_9), (void*)L_7);
		// shop.transform.SetParent(GameObject.FindGameObjectWithTag("Shop").transform, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___shop_9;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223, NULL);
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_9);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_9, L_11, (bool)0, NULL);
		// shop.name = shop.name.Replace("(Clone)", "");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___shop_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___shop_9;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_13, NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_14, _stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		NullCheck(L_12);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_12, L_15, NULL);
		// posXShopInstantiate += 250;
		int32_t L_16 = __this->___posXShopInstantiate_6;
		__this->___posXShopInstantiate_6 = ((int32_t)il2cpp_codegen_add(L_16, ((int32_t)250)));
		// compteurShop++;
		int32_t L_17 = __this->___compteurShop_8;
		__this->___compteurShop_8 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		// }
		return;
	}
}
// System.Void InstanciatePokemon::InstantiateStorage(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstanciatePokemon_InstantiateStorage_m1CC49A4AE87FD37C2BC6079EE5C24E33AAA9FFA6 (InstanciatePokemon_tDF0A8C405EF4A0171FFF22108615868A8835F610* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefabPoke0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C89DD96E5B64A0AEAA1B8E27B998454672C54E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (compteurStorage == 6)
		int32_t L_0 = __this->___compteurStorage_12;
		if ((!(((uint32_t)L_0) == ((uint32_t)6))))
		{
			goto IL_0029;
		}
	}
	{
		// posYStorageInstantiate -= 400;
		int32_t L_1 = __this->___posYStorageInstantiate_11;
		__this->___posYStorageInstantiate_11 = ((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)400)));
		// posXStorageInstantiate = 0;
		__this->___posXStorageInstantiate_10 = 0;
		// compteurStorage = 0;
		__this->___compteurStorage_12 = 0;
	}

IL_0029:
	{
		// storage = Instantiate(prefabPoke, new Vector3(posXStorageInstantiate + 50, posYStorageInstantiate - 100, 0), Quaternion.identity) as GameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___prefabPoke0;
		int32_t L_3 = __this->___posXStorageInstantiate_10;
		int32_t L_4 = __this->___posYStorageInstantiate_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), ((float)((int32_t)il2cpp_codegen_add(L_3, ((int32_t)50)))), ((float)((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)100)))), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_2, L_5, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		__this->___storage_13 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___storage_13), (void*)L_7);
		// storage.transform.SetParent(GameObject.FindGameObjectWithTag("Storage").transform, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___storage_13;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteral9C89DD96E5B64A0AEAA1B8E27B998454672C54E0, NULL);
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_9);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_9, L_11, (bool)0, NULL);
		// storage.name = storage.name.Replace("(Clone)", "");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___storage_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___storage_13;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_13, NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_14, _stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		NullCheck(L_12);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_12, L_15, NULL);
		// posXStorageInstantiate += 250;
		int32_t L_16 = __this->___posXStorageInstantiate_10;
		__this->___posXStorageInstantiate_10 = ((int32_t)il2cpp_codegen_add(L_16, ((int32_t)250)));
		// compteurStorage++;
		int32_t L_17 = __this->___compteurStorage_12;
		__this->___compteurStorage_12 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		// }
		return;
	}
}
// System.Void InstanciatePokemon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstanciatePokemon__ctor_mE362BD669674E2425B6A95D7377EADEB113DD0B1 (InstanciatePokemon_tDF0A8C405EF4A0171FFF22108615868A8835F610* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MusicManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicManager_Start_m3E06516484A5F01B8CDCC846C0BBFEDA81499F4B (MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* __this, const RuntimeMethod* method) 
{
	{
		// Route1Et2();
		MusicManager_Route1Et2_m64CB5855B637195B6397C1A53D7A0BDFA13222DB(__this, NULL);
		// }
		return;
	}
}
// System.Void MusicManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicManager_Update_m49A7036316DDBB17AC4A45EB7155F00304C75563 (MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator MusicManager::ChangeMusic(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MusicManager_ChangeMusic_m15031195B144DA14EA3CD35F2B023856E04B30A6 (MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___currentClipIn0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CChangeMusicU3Ed__5_t20247B8D03CD56297DF42B6CE2F538CAD66D6414_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CChangeMusicU3Ed__5_t20247B8D03CD56297DF42B6CE2F538CAD66D6414* L_0 = (U3CChangeMusicU3Ed__5_t20247B8D03CD56297DF42B6CE2F538CAD66D6414*)il2cpp_codegen_object_new(U3CChangeMusicU3Ed__5_t20247B8D03CD56297DF42B6CE2F538CAD66D6414_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CChangeMusicU3Ed__5__ctor_m6425F685FB2F1DFB2FFC00F940113DED58BCF655(L_0, 0, NULL);
		U3CChangeMusicU3Ed__5_t20247B8D03CD56297DF42B6CE2F538CAD66D6414* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CChangeMusicU3Ed__5_t20247B8D03CD56297DF42B6CE2F538CAD66D6414* L_2 = L_1;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = ___currentClipIn0;
		NullCheck(L_2);
		L_2->___currentClipIn_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___currentClipIn_3), (void*)L_3);
		return L_2;
	}
}
// System.Collections.IEnumerator MusicManager::NoMusicTransfert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MusicManager_NoMusicTransfert_m4977E7E4324CC4A7F3A6E12A6CA3A1CEDAE503AA (MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CNoMusicTransfertU3Ed__6_tAF5B0DD1F74BCFA265F442FFF5D78BD22549BEE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CNoMusicTransfertU3Ed__6_tAF5B0DD1F74BCFA265F442FFF5D78BD22549BEE9* L_0 = (U3CNoMusicTransfertU3Ed__6_tAF5B0DD1F74BCFA265F442FFF5D78BD22549BEE9*)il2cpp_codegen_object_new(U3CNoMusicTransfertU3Ed__6_tAF5B0DD1F74BCFA265F442FFF5D78BD22549BEE9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CNoMusicTransfertU3Ed__6__ctor_mFF6A59B731C793AAB4D86A7AF53B2149D2F6A3B2(L_0, 0, NULL);
		U3CNoMusicTransfertU3Ed__6_tAF5B0DD1F74BCFA265F442FFF5D78BD22549BEE9* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void MusicManager::noMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicManager_noMusic_m83034C9AF4263A52C8C6EA7E610204FD28261A3E (MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(NoMusicTransfert());
		RuntimeObject* L_0;
		L_0 = MusicManager_NoMusicTransfert_m4977E7E4324CC4A7F3A6E12A6CA3A1CEDAE503AA(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void MusicManager::Route1Et2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicManager_Route1Et2_m64CB5855B637195B6397C1A53D7A0BDFA13222DB (MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(ChangeMusic(music[0]));
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_0 = __this->___music_5;
		NullCheck(L_0);
		int32_t L_1 = 0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		RuntimeObject* L_3;
		L_3 = MusicManager_ChangeMusic_m15031195B144DA14EA3CD35F2B023856E04B30A6(__this, L_2, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void MusicManager::ForetJade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicManager_ForetJade_m8436258C3012CB9A2A46B693AEDF526F058B6A30 (MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(ChangeMusic(music[1]));
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_0 = __this->___music_5;
		NullCheck(L_0);
		int32_t L_1 = 1;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		RuntimeObject* L_3;
		L_3 = MusicManager_ChangeMusic_m15031195B144DA14EA3CD35F2B023856E04B30A6(__this, L_2, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void MusicManager::MontSelenite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicManager_MontSelenite_m002B4BD2537BABEFBD2255ACC230F7F529F55D9E (MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(ChangeMusic(music[2]));
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_0 = __this->___music_5;
		NullCheck(L_0);
		int32_t L_1 = 2;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		RuntimeObject* L_3;
		L_3 = MusicManager_ChangeMusic_m15031195B144DA14EA3CD35F2B023856E04B30A6(__this, L_2, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void MusicManager::Route4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicManager_Route4_mE047A122DC31BBB9E8C775B47DD6323813BF7CF4 (MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(ChangeMusic(music[3]));
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_0 = __this->___music_5;
		NullCheck(L_0);
		int32_t L_1 = 3;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		RuntimeObject* L_3;
		L_3 = MusicManager_ChangeMusic_m15031195B144DA14EA3CD35F2B023856E04B30A6(__this, L_2, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void MusicManager::Route24Et25()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicManager_Route24Et25_mE0437982807DCE2AF2D5438772FE8A0EB7969FD9 (MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(ChangeMusic(music[4]));
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_0 = __this->___music_5;
		NullCheck(L_0);
		int32_t L_1 = 4;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		RuntimeObject* L_3;
		L_3 = MusicManager_ChangeMusic_m15031195B144DA14EA3CD35F2B023856E04B30A6(__this, L_2, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void MusicManager::Chenal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicManager_Chenal_m5A6723AD50C25CB606D1F60E29BC3FC9CB690A8D (MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(ChangeMusic(music[5]));
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_0 = __this->___music_5;
		NullCheck(L_0);
		int32_t L_1 = 5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		RuntimeObject* L_3;
		L_3 = MusicManager_ChangeMusic_m15031195B144DA14EA3CD35F2B023856E04B30A6(__this, L_2, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void MusicManager::RouteVictoire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicManager_RouteVictoire_m976D5D7AFBDDA64F96E740B154AF9F026F0B157A (MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(ChangeMusic(music[6]));
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_0 = __this->___music_5;
		NullCheck(L_0);
		int32_t L_1 = 6;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		RuntimeObject* L_3;
		L_3 = MusicManager_ChangeMusic_m15031195B144DA14EA3CD35F2B023856E04B30A6(__this, L_2, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void MusicManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicManager__ctor_m41A178D621B3011F8901EE68A91A5850A5E59904 (MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MusicManager/<ChangeMusic>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeMusicU3Ed__5__ctor_m6425F685FB2F1DFB2FFC00F940113DED58BCF655 (U3CChangeMusicU3Ed__5_t20247B8D03CD56297DF42B6CE2F538CAD66D6414* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MusicManager/<ChangeMusic>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeMusicU3Ed__5_System_IDisposable_Dispose_mD3FFCECDDB54C169C6CB43942190D364871A2F09 (U3CChangeMusicU3Ed__5_t20247B8D03CD56297DF42B6CE2F538CAD66D6414* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MusicManager/<ChangeMusic>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CChangeMusicU3Ed__5_MoveNext_m9E5A93E316F04D8301F38577DBD3B0B4674FFF29 (U3CChangeMusicU3Ed__5_t20247B8D03CD56297DF42B6CE2F538CAD66D6414* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_008c;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if(currentClip == null || currentClipIn.name != currentClip.name)
		MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* L_4 = V_1;
		NullCheck(L_4);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = L_4->___currentClip_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_6)
		{
			goto IL_0049;
		}
	}
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_7 = __this->___currentClipIn_3;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_7, NULL);
		MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* L_9 = V_1;
		NullCheck(L_9);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_10 = L_9->___currentClip_6;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		bool L_12;
		L_12 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_8, L_11, NULL);
		if (!L_12)
		{
			goto IL_0093;
		}
	}

IL_0049:
	{
		// currentClip = currentClipIn;
		MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* L_13 = V_1;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_14 = __this->___currentClipIn_3;
		NullCheck(L_13);
		L_13->___currentClip_6 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___currentClip_6), (void*)L_14);
		// objetMusic.Stop();
		MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* L_15 = V_1;
		NullCheck(L_15);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_16 = L_15->___objetMusic_4;
		NullCheck(L_16);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_16, NULL);
		// objetMusic.clip = currentClipIn;
		MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* L_17 = V_1;
		NullCheck(L_17);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_18 = L_17->___objetMusic_4;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_19 = __this->___currentClipIn_3;
		NullCheck(L_18);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_18, L_19, NULL);
		// objetMusic.Play();
		MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* L_20 = V_1;
		NullCheck(L_20);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_21 = L_20->___objetMusic_4;
		NullCheck(L_21);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_21, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_008c:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0093:
	{
		// }
		return (bool)0;
	}
}
// System.Object MusicManager/<ChangeMusic>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CChangeMusicU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3D0533D8485C2C75D40A0CE977CBF27AB9472DB1 (U3CChangeMusicU3Ed__5_t20247B8D03CD56297DF42B6CE2F538CAD66D6414* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MusicManager/<ChangeMusic>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeMusicU3Ed__5_System_Collections_IEnumerator_Reset_m63CBF3BE8E063CEA0FADC875B73E750D99FC646E (U3CChangeMusicU3Ed__5_t20247B8D03CD56297DF42B6CE2F538CAD66D6414* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CChangeMusicU3Ed__5_System_Collections_IEnumerator_Reset_m63CBF3BE8E063CEA0FADC875B73E750D99FC646E_RuntimeMethod_var)));
	}
}
// System.Object MusicManager/<ChangeMusic>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CChangeMusicU3Ed__5_System_Collections_IEnumerator_get_Current_m5AFD291D278E9789629CC2133A95F294361F7C10 (U3CChangeMusicU3Ed__5_t20247B8D03CD56297DF42B6CE2F538CAD66D6414* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void MusicManager/<NoMusicTransfert>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNoMusicTransfertU3Ed__6__ctor_mFF6A59B731C793AAB4D86A7AF53B2149D2F6A3B2 (U3CNoMusicTransfertU3Ed__6_tAF5B0DD1F74BCFA265F442FFF5D78BD22549BEE9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MusicManager/<NoMusicTransfert>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNoMusicTransfertU3Ed__6_System_IDisposable_Dispose_m8970C5A3A878A45036582BD0F489A22D28F11FD6 (U3CNoMusicTransfertU3Ed__6_tAF5B0DD1F74BCFA265F442FFF5D78BD22549BEE9* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MusicManager/<NoMusicTransfert>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CNoMusicTransfertU3Ed__6_MoveNext_m0DA8D97DE4AABAA8A33E080ED0DA4C95783A535F (U3CNoMusicTransfertU3Ed__6_tAF5B0DD1F74BCFA265F442FFF5D78BD22549BEE9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// objetMusic.Stop();
		MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* L_4 = V_1;
		NullCheck(L_4);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = L_4->___objetMusic_4;
		NullCheck(L_5);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_5, NULL);
		// objetMusic.clip = null;
		MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* L_6 = V_1;
		NullCheck(L_6);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = L_6->___objetMusic_4;
		NullCheck(L_7);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_7, (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)NULL, NULL);
		// currentClip = null;
		MusicManager_t50343E4230B62B127D8AA186232F1B8D0FF38FDC* L_8 = V_1;
		NullCheck(L_8);
		L_8->___currentClip_6 = (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___currentClip_6), (void*)(AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object MusicManager/<NoMusicTransfert>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CNoMusicTransfertU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE0E3DE1AC76AED58EC43415B63EB3F33920A1E29 (U3CNoMusicTransfertU3Ed__6_tAF5B0DD1F74BCFA265F442FFF5D78BD22549BEE9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MusicManager/<NoMusicTransfert>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNoMusicTransfertU3Ed__6_System_Collections_IEnumerator_Reset_m42579BB42EB9EFBEE6CE347E23C9899957A0B636 (U3CNoMusicTransfertU3Ed__6_tAF5B0DD1F74BCFA265F442FFF5D78BD22549BEE9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CNoMusicTransfertU3Ed__6_System_Collections_IEnumerator_Reset_m42579BB42EB9EFBEE6CE347E23C9899957A0B636_RuntimeMethod_var)));
	}
}
// System.Object MusicManager/<NoMusicTransfert>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CNoMusicTransfertU3Ed__6_System_Collections_IEnumerator_get_Current_mB1C05A96CAE8D52AA5DC734E97378474CF03E0EA (U3CNoMusicTransfertU3Ed__6_tAF5B0DD1F74BCFA265F442FFF5D78BD22549BEE9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void PlayerCore::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore_Start_m82BC6EE9CE72A60DF7C4C7F60835F622EA732583 (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisChooseStarter_t912FC58203BE5BA335051A5201E48B131D863FD4_m877614F2D6345C82CC42CBBCF3C78BBF0EE670D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveData3_t6A98FFD6760807C16AD260C3E9C335927F7EFC47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// maxPlayerPokemon = 6;
		__this->___maxPlayerPokemon_9 = 6;
		// if (activerTestForStarter && tempoStarter != null)
		bool L_0 = __this->___activerTestForStarter_5;
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___tempoStarter_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// starter = tempoStarter.GetComponent<ChooseStarter>().bulbizarrePrefabs;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___tempoStarter_6;
		NullCheck(L_3);
		ChooseStarter_t912FC58203BE5BA335051A5201E48B131D863FD4* L_4;
		L_4 = GameObject_GetComponent_TisChooseStarter_t912FC58203BE5BA335051A5201E48B131D863FD4_m877614F2D6345C82CC42CBBCF3C78BBF0EE670D4(L_3, GameObject_GetComponent_TisChooseStarter_t912FC58203BE5BA335051A5201E48B131D863FD4_m877614F2D6345C82CC42CBBCF3C78BBF0EE670D4_RuntimeMethod_var);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___bulbizarrePrefabs_4;
		((PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_il2cpp_TypeInfo_var))->___starter_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_il2cpp_TypeInfo_var))->___starter_4), (void*)L_5);
	}

IL_0032:
	{
		// if (! SaveData3.onContinue)
		bool L_6 = ((SaveData3_t6A98FFD6760807C16AD260C3E9C335927F7EFC47_StaticFields*)il2cpp_codegen_static_fields_for(SaveData3_t6A98FFD6760807C16AD260C3E9C335927F7EFC47_il2cpp_TypeInfo_var))->___onContinue_4;
		if (L_6)
		{
			goto IL_00c2;
		}
	}
	{
		// instanceStarter.InstantiatePokemon(starter);
		InstanciatePokemon_tDF0A8C405EF4A0171FFF22108615868A8835F610* L_7 = __this->___instanceStarter_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ((PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_il2cpp_TypeInfo_var))->___starter_4;
		NullCheck(L_7);
		InstanciatePokemon_InstantiatePokemon_mA162E874CBBE858F3117F7E06A28DBA87BCD35C4(L_7, L_8, NULL);
		// playerPokemon.Add(starter);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = __this->___playerPokemon_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = ((PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_il2cpp_TypeInfo_var))->___starter_4;
		NullCheck(L_9);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_9, L_10, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// currentPlayerPokemon = instanceStarter.poke;
		InstanciatePokemon_tDF0A8C405EF4A0171FFF22108615868A8835F610* L_11 = __this->___instanceStarter_7;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11->___poke_5;
		__this->___currentPlayerPokemon_11 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentPlayerPokemon_11), (void*)L_12);
		// currentPlayerPokemonStats = currentPlayerPokemon.GetComponent<IncrementPrefabsWithScriptableObject>().pokemon;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___currentPlayerPokemon_11;
		NullCheck(L_13);
		IncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7* L_14;
		L_14 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C(L_13, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C_RuntimeMethod_var);
		NullCheck(L_14);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_15 = L_14->___pokemon_4;
		__this->___currentPlayerPokemonStats_13 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentPlayerPokemonStats_13), (void*)L_15);
		// currentPlayerPokemon.transform.GetChild(1).GetComponent<Image>().color = new Color32(255, 255, 255, 255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___currentPlayerPokemon_11;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_17, 1, NULL);
		NullCheck(L_18);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19;
		L_19 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_18, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_20;
		memset((&L_20), 0, sizeof(L_20));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_20), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21;
		L_21 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_20, NULL);
		NullCheck(L_19);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_19, L_21);
		// InstantiateShop2();
		PlayerCore_InstantiateShop2_mD68E74986F4ABC4C432CC935F169FC03FF4C51A1(__this, NULL);
	}

IL_00c2:
	{
		// currentPlayerPokemon = GameObject.Find(playerPokemon[0].name);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_22 = __this->___playerPokemon_8;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_22, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_23, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(L_24, NULL);
		__this->___currentPlayerPokemon_11 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentPlayerPokemon_11), (void*)L_25);
		// oldCurrentPlayerPokemon = GameObject.Find(playerPokemon[0].name);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_26 = __this->___playerPokemon_8;
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_26, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_27);
		String_t* L_28;
		L_28 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_27, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(L_28, NULL);
		__this->___oldCurrentPlayerPokemon_12 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___oldCurrentPlayerPokemon_12), (void*)L_29);
		// if (currentPlayerPokemon != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___currentPlayerPokemon_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_30, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_31)
		{
			goto IL_0157;
		}
	}
	{
		// currentPlayerPokemonStats = currentPlayerPokemon.GetComponent<IncrementPrefabsWithScriptableObject>().pokemon;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___currentPlayerPokemon_11;
		NullCheck(L_32);
		IncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7* L_33;
		L_33 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C(L_32, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C_RuntimeMethod_var);
		NullCheck(L_33);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_34 = L_33->___pokemon_4;
		__this->___currentPlayerPokemonStats_13 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentPlayerPokemonStats_13), (void*)L_34);
		// currentPlayerPokemon.transform.GetChild(1).GetComponent<Image>().color = new Color32(255, 255, 255, 255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___currentPlayerPokemon_11;
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_35, NULL);
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_36, 1, NULL);
		NullCheck(L_37);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_38;
		L_38 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_37, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_39;
		memset((&L_39), 0, sizeof(L_39));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_39), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_39, NULL);
		NullCheck(L_38);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_38, L_40);
	}

IL_0157:
	{
		// }
		return;
	}
}
// System.Void PlayerCore::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore_Update_m3E3EBAC970418A6A2146BFE2E7663B40D1CF9375 (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(currentPlayerPokemon != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___currentPlayerPokemon_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0062;
		}
	}
	{
		// currentPlayerPokemon.transform.GetChild(3).GetComponent<Slider>().maxValue = currentPlayerPokemonStats.maxXp;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___currentPlayerPokemon_11;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_3, 3, NULL);
		NullCheck(L_4);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5;
		L_5 = Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA(L_4, Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_6 = __this->___currentPlayerPokemonStats_13;
		NullCheck(L_6);
		int32_t L_7 = L_6->___maxXp_10;
		NullCheck(L_5);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_5, ((float)L_7), NULL);
		// currentPlayerPokemon.transform.GetChild(3).GetComponent<Slider>().value = currentPlayerPokemonStats.xp;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___currentPlayerPokemon_11;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_9, 3, NULL);
		NullCheck(L_10);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_11;
		L_11 = Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA(L_10, Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_12 = __this->___currentPlayerPokemonStats_13;
		NullCheck(L_12);
		int32_t L_13 = L_12->___xp_9;
		NullCheck(L_11);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_11, ((float)L_13));
		// RefreshCoinUi();
		PlayerCore_RefreshCoinUi_mFDA27DBF35C4FBC1C71FB09971759D88296BC99B(__this, NULL);
	}

IL_0062:
	{
		// if(playerPokemon.Count == maxPlayerPokemon)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_14 = __this->___playerPokemon_8;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_14, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_16 = __this->___maxPlayerPokemon_9;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_007d;
		}
	}
	{
		// goStorage = true;
		__this->___goStorage_10 = (bool)1;
		return;
	}

IL_007d:
	{
		// goStorage = false;
		__this->___goStorage_10 = (bool)0;
		// }
		return;
	}
}
// System.Void PlayerCore::LevelUpPlayerPokemon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore_LevelUpPlayerPokemon_mDEB65F9310705DFFC7F6E49B649F9CD879204500 (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC318561B667A89DAC927091F0FF2F9BFB48FC0CF);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_009b;
	}

IL_0005:
	{
		// currentPlayerPokemonStats.xp -= currentPlayerPokemonStats.maxXp;
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_0 = __this->___currentPlayerPokemonStats_13;
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___xp_9;
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_3 = __this->___currentPlayerPokemonStats_13;
		NullCheck(L_3);
		int32_t L_4 = L_3->___maxXp_10;
		NullCheck(L_1);
		L_1->___xp_9 = ((int32_t)il2cpp_codegen_subtract(L_2, L_4));
		// currentPlayerPokemonStats.maxXp = (int)(currentPlayerPokemonStats.maxXp * 1.3f);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_5 = __this->___currentPlayerPokemonStats_13;
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_6 = __this->___currentPlayerPokemonStats_13;
		NullCheck(L_6);
		int32_t L_7 = L_6->___maxXp_10;
		NullCheck(L_5);
		L_5->___maxXp_10 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_7), (1.29999995f))));
		// currentPlayerPokemonStats.lvl += 1;
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_8 = __this->___currentPlayerPokemonStats_13;
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_9 = L_8;
		NullCheck(L_9);
		int32_t L_10 = L_9->___lvl_5;
		NullCheck(L_9);
		L_9->___lvl_5 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		// currentPlayerPokemonStats.damage += 2;
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_11 = __this->___currentPlayerPokemonStats_13;
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_12 = L_11;
		NullCheck(L_12);
		int32_t L_13 = L_12->___damage_6;
		NullCheck(L_12);
		L_12->___damage_6 = ((int32_t)il2cpp_codegen_add(L_13, 2));
		// currentPlayerPokemon.transform.GetChild(2).GetComponent<TMP_Text>().text = "Lvl." + currentPlayerPokemonStats.lvl.ToString();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___currentPlayerPokemon_11;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_15, 2, NULL);
		NullCheck(L_16);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_17;
		L_17 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(L_16, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_18 = __this->___currentPlayerPokemonStats_13;
		NullCheck(L_18);
		int32_t* L_19 = (&L_18->___lvl_5);
		String_t* L_20;
		L_20 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_19, NULL);
		String_t* L_21;
		L_21 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralC318561B667A89DAC927091F0FF2F9BFB48FC0CF, L_20, NULL);
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_17, L_21);
	}

IL_009b:
	{
		// while(currentPlayerPokemonStats.xp > currentPlayerPokemonStats.maxXp)
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_22 = __this->___currentPlayerPokemonStats_13;
		NullCheck(L_22);
		int32_t L_23 = L_22->___xp_9;
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_24 = __this->___currentPlayerPokemonStats_13;
		NullCheck(L_24);
		int32_t L_25 = L_24->___maxXp_10;
		if ((((int32_t)L_23) > ((int32_t)L_25)))
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PlayerCore::OnDeathPokemon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore_OnDeathPokemon_m9ECB501759B841AFA5396A16EC33B41525176D17 (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, const RuntimeMethod* method) 
{
	{
		// if (enemyPokemon.isInChampionsFight)
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_0 = __this->___enemyPokemon_17;
		NullCheck(L_0);
		bool L_1 = L_0->___isInChampionsFight_16;
		if (!L_1)
		{
			goto IL_004e;
		}
	}
	{
		// coin += enemyPokemon.pokemonChampionObject.coinGiven;
		int32_t L_2 = __this->___coin_15;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_3 = __this->___enemyPokemon_17;
		NullCheck(L_3);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_4 = L_3->___pokemonChampionObject_13;
		NullCheck(L_4);
		int32_t L_5 = L_4->___coinGiven_8;
		__this->___coin_15 = ((int32_t)il2cpp_codegen_add(L_2, L_5));
		// currentPlayerPokemonStats.xp += enemyPokemon.pokemonChampionObject.xpGiven;
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_6 = __this->___currentPlayerPokemonStats_13;
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8 = L_7->___xp_9;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_9 = __this->___enemyPokemon_17;
		NullCheck(L_9);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_10 = L_9->___pokemonChampionObject_13;
		NullCheck(L_10);
		int32_t L_11 = L_10->___xpGiven_11;
		NullCheck(L_7);
		L_7->___xp_9 = ((int32_t)il2cpp_codegen_add(L_8, L_11));
		goto IL_008d;
	}

IL_004e:
	{
		// coin += enemyPokemon.pokemonObject.coinGiven;
		int32_t L_12 = __this->___coin_15;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_13 = __this->___enemyPokemon_17;
		NullCheck(L_13);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_14 = L_13->___pokemonObject_4;
		NullCheck(L_14);
		int32_t L_15 = L_14->___coinGiven_8;
		__this->___coin_15 = ((int32_t)il2cpp_codegen_add(L_12, L_15));
		// currentPlayerPokemonStats.xp += enemyPokemon.pokemonObject.xpGiven;
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_16 = __this->___currentPlayerPokemonStats_13;
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_17 = L_16;
		NullCheck(L_17);
		int32_t L_18 = L_17->___xp_9;
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_19 = __this->___enemyPokemon_17;
		NullCheck(L_19);
		PokemonScriptableObjectEnemy_t4B2988D25DB3BB694536868B25416971B89964EF* L_20 = L_19->___pokemonObject_4;
		NullCheck(L_20);
		int32_t L_21 = L_20->___xpGiven_11;
		NullCheck(L_17);
		L_17->___xp_9 = ((int32_t)il2cpp_codegen_add(L_18, L_21));
	}

IL_008d:
	{
		// if (currentPlayerPokemonStats.xp >= currentPlayerPokemonStats.maxXp)
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_22 = __this->___currentPlayerPokemonStats_13;
		NullCheck(L_22);
		int32_t L_23 = L_22->___xp_9;
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_24 = __this->___currentPlayerPokemonStats_13;
		NullCheck(L_24);
		int32_t L_25 = L_24->___maxXp_10;
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_00ab;
		}
	}
	{
		// LevelUpPlayerPokemon();
		PlayerCore_LevelUpPlayerPokemon_mDEB65F9310705DFFC7F6E49B649F9CD879204500(__this, NULL);
	}

IL_00ab:
	{
		// }
		return;
	}
}
// System.Void PlayerCore::SelectCurrentPokemon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore_SelectCurrentPokemon_m73E0321B9344A4449A5F240AE71B5F4045EC731B (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject currentSelected = EventSystem.current.currentSelectedGameObject.transform.parent.gameObject;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_2, NULL);
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		V_0 = L_4;
		// oldCurrentPlayerPokemon = currentPlayerPokemon;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___currentPlayerPokemon_11;
		__this->___oldCurrentPlayerPokemon_12 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___oldCurrentPlayerPokemon_12), (void*)L_5);
		// currentPlayerPokemon = currentSelected;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_0;
		__this->___currentPlayerPokemon_11 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentPlayerPokemon_11), (void*)L_6);
		// if (currentPlayerPokemon != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___currentPlayerPokemon_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_00cb;
		}
	}
	{
		// currentPlayerPokemonStats = currentPlayerPokemon.GetComponent<IncrementPrefabsWithScriptableObject>().pokemon;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___currentPlayerPokemon_11;
		NullCheck(L_9);
		IncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7* L_10;
		L_10 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C(L_9, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C_RuntimeMethod_var);
		NullCheck(L_10);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_11 = L_10->___pokemon_4;
		__this->___currentPlayerPokemonStats_13 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentPlayerPokemonStats_13), (void*)L_11);
		// if (oldCurrentPlayerPokemon != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___oldCurrentPlayerPokemon_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_0092;
		}
	}
	{
		// oldCurrentPlayerPokemon.transform.GetChild(1).GetComponent<Image>().color = new Color32(94, 94, 94, 255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___oldCurrentPlayerPokemon_12;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_15, 1, NULL);
		NullCheck(L_16);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17;
		L_17 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_16, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_18;
		memset((&L_18), 0, sizeof(L_18));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_18), (uint8_t)((int32_t)94), (uint8_t)((int32_t)94), (uint8_t)((int32_t)94), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_18, NULL);
		NullCheck(L_17);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_17, L_19);
	}

IL_0092:
	{
		// currentPlayerPokemon.transform.GetChild(1).GetComponent<Image>().color = new Color32(255, 255, 255, 255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___currentPlayerPokemon_11;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_21, 1, NULL);
		NullCheck(L_22);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_23;
		L_23 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_22, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_24;
		memset((&L_24), 0, sizeof(L_24));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_24), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25;
		L_25 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_24, NULL);
		NullCheck(L_23);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_23, L_25);
	}

IL_00cb:
	{
		// }
		return;
	}
}
// System.Void PlayerCore::BuyPokemon(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore_BuyPokemon_m26D0B3F50BFA24B90E2CA11EA6FB9FAFE7964057 (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___poke0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUIPokemonShop_tAE361E81FC9B65FB7ACA5D12CB546AA4F99C3C2E_m37789B220B55646448F02C40B6CEB5D5CE3F2569_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject currentShopSelected = EventSystem.current.currentSelectedGameObject.transform.parent.gameObject;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_2, NULL);
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		V_0 = L_4;
		// if (coin >= currentShopSelected.GetComponent<UIPokemonShop>().statPokemonShop.cost)
		int32_t L_5 = __this->___coin_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_0;
		NullCheck(L_6);
		UIPokemonShop_tAE361E81FC9B65FB7ACA5D12CB546AA4F99C3C2E* L_7;
		L_7 = GameObject_GetComponent_TisUIPokemonShop_tAE361E81FC9B65FB7ACA5D12CB546AA4F99C3C2E_m37789B220B55646448F02C40B6CEB5D5CE3F2569(L_6, GameObject_GetComponent_TisUIPokemonShop_tAE361E81FC9B65FB7ACA5D12CB546AA4F99C3C2E_m37789B220B55646448F02C40B6CEB5D5CE3F2569_RuntimeMethod_var);
		NullCheck(L_7);
		PokemonScriptableObjectShop_tACBEF0C6F0B0725664A9438B860D3A7432ABB545* L_8 = L_7->___statPokemonShop_4;
		NullCheck(L_8);
		int32_t L_9 = L_8->___cost_6;
		if ((((int32_t)L_5) < ((int32_t)L_9)))
		{
			goto IL_0056;
		}
	}
	{
		// AddPokemon(poke);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = ___poke0;
		PlayerCore_AddPokemon_mC16110C15F4D3FEE4C5F569D53A97AF398FB03B5(__this, L_10, NULL);
		// coin -= currentShopSelected.GetComponent<UIPokemonShop>().statPokemonShop.cost;
		int32_t L_11 = __this->___coin_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_0;
		NullCheck(L_12);
		UIPokemonShop_tAE361E81FC9B65FB7ACA5D12CB546AA4F99C3C2E* L_13;
		L_13 = GameObject_GetComponent_TisUIPokemonShop_tAE361E81FC9B65FB7ACA5D12CB546AA4F99C3C2E_m37789B220B55646448F02C40B6CEB5D5CE3F2569(L_12, GameObject_GetComponent_TisUIPokemonShop_tAE361E81FC9B65FB7ACA5D12CB546AA4F99C3C2E_m37789B220B55646448F02C40B6CEB5D5CE3F2569_RuntimeMethod_var);
		NullCheck(L_13);
		PokemonScriptableObjectShop_tACBEF0C6F0B0725664A9438B860D3A7432ABB545* L_14 = L_13->___statPokemonShop_4;
		NullCheck(L_14);
		int32_t L_15 = L_14->___cost_6;
		__this->___coin_15 = ((int32_t)il2cpp_codegen_subtract(L_11, L_15));
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void PlayerCore::BuyPokemonStorage(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore_BuyPokemonStorage_m5E44641D148C3C0D65F7CFC973E77CC328D5243C (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___poke0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(goStorage)
		bool L_0 = __this->___goStorage_10;
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		// instanceStarter.InstantiateStorage(poke);
		InstanciatePokemon_tDF0A8C405EF4A0171FFF22108615868A8835F610* L_1 = __this->___instanceStarter_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___poke0;
		NullCheck(L_1);
		InstanciatePokemon_InstantiateStorage_m1CC49A4AE87FD37C2BC6079EE5C24E33AAA9FFA6(L_1, L_2, NULL);
		// storagePokemon.Add(poke);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___storagePokemon_19;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___poke0;
		NullCheck(L_3);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_3, L_4, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// InstantiateShop2();
		PlayerCore_InstantiateShop2_mD68E74986F4ABC4C432CC935F169FC03FF4C51A1(__this, NULL);
		// AddPokemon(poke);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___poke0;
		PlayerCore_AddPokemon_mC16110C15F4D3FEE4C5F569D53A97AF398FB03B5(__this, L_5, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void PlayerCore::RefreshCoinUi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore_RefreshCoinUi_mFDA27DBF35C4FBC1C71FB09971759D88296BC99B (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0E0F4376F635ABD06BA01D7D97F0577633F9671);
		s_Il2CppMethodInitialized = true;
	}
	{
		// coinUI.GetComponent<TMP_Text>().text = coin.ToString() + " PokeDollars";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___coinUI_16;
		NullCheck(L_0);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1;
		L_1 = GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3(L_0, GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		int32_t* L_2 = (&__this->___coin_15);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_3, _stringLiteralA0E0F4376F635ABD06BA01D7D97F0577633F9671, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_4);
		// }
		return;
	}
}
// System.Void PlayerCore::ClearUIShop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore_ClearUIShop_mAFECCD8E25E0D7B9A523AD2530C42FA902D82EB4 (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int childs = GameObject.FindGameObjectWithTag("Shop").transform.childCount;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_1, NULL);
		// for (int i = childs - 1; i >= 0; i--)
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		goto IL_003c;
	}

IL_0019:
	{
		// GameObject.Destroy(GameObject.FindGameObjectWithTag("Shop").transform.GetChild(i).gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteralEDE684886DA2E28B5693BD98ADADE77C0E010223, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_4, L_5, NULL);
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_7, NULL);
		// for (int i = childs - 1; i >= 0; i--)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_003c:
	{
		// for (int i = childs - 1; i >= 0; i--)
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		// instanceStarter.posXShopInstantiate = 0;
		InstanciatePokemon_tDF0A8C405EF4A0171FFF22108615868A8835F610* L_10 = __this->___instanceStarter_7;
		NullCheck(L_10);
		L_10->___posXShopInstantiate_6 = 0;
		// }
		return;
	}
}
// System.Void PlayerCore::ClearUIPokemon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore_ClearUIPokemon_mAE963C708560048022FBAD0399A46AC6F5D15B72 (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral248673350E53D91402C332FC73903A50CE8C7FAB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int childs = GameObject.FindGameObjectWithTag("Pokemon").transform.childCount;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteral248673350E53D91402C332FC73903A50CE8C7FAB, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_1, NULL);
		// for (int i = childs - 1; i >= 0; i--)
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		goto IL_003c;
	}

IL_0019:
	{
		// GameObject.Destroy(GameObject.FindGameObjectWithTag("Pokemon").transform.GetChild(i).gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteral248673350E53D91402C332FC73903A50CE8C7FAB, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_4, L_5, NULL);
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_7, NULL);
		// for (int i = childs - 1; i >= 0; i--)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_003c:
	{
		// for (int i = childs - 1; i >= 0; i--)
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		// instanceStarter.posPokeInstantiate = 0;
		InstanciatePokemon_tDF0A8C405EF4A0171FFF22108615868A8835F610* L_10 = __this->___instanceStarter_7;
		NullCheck(L_10);
		L_10->___posPokeInstantiate_4 = 0;
		// }
		return;
	}
}
// System.Void PlayerCore::ClearUIStorage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore_ClearUIStorage_m6B061AB2125A04B5C4A5ECD8BA24FADDC16026A8 (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C89DD96E5B64A0AEAA1B8E27B998454672C54E0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int childs = GameObject.FindGameObjectWithTag("Storage").transform.childCount;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteral9C89DD96E5B64A0AEAA1B8E27B998454672C54E0, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_1, NULL);
		// for (int i = childs - 1; i >= 0; i--)
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		goto IL_003c;
	}

IL_0019:
	{
		// GameObject.Destroy(GameObject.FindGameObjectWithTag("Storage").transform.GetChild(i).gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteral9C89DD96E5B64A0AEAA1B8E27B998454672C54E0, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_4, L_5, NULL);
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_7, NULL);
		// for (int i = childs - 1; i >= 0; i--)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_003c:
	{
		// for (int i = childs - 1; i >= 0; i--)
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		// instanceStarter.posXStorageInstantiate = 0;
		InstanciatePokemon_tDF0A8C405EF4A0171FFF22108615868A8835F610* L_10 = __this->___instanceStarter_7;
		NullCheck(L_10);
		L_10->___posXStorageInstantiate_10 = 0;
		// instanceStarter.posYStorageInstantiate = 0;
		InstanciatePokemon_tDF0A8C405EF4A0171FFF22108615868A8835F610* L_11 = __this->___instanceStarter_7;
		NullCheck(L_11);
		L_11->___posYStorageInstantiate_11 = 0;
		// instanceStarter.compteurStorage = 0;
		InstanciatePokemon_tDF0A8C405EF4A0171FFF22108615868A8835F610* L_12 = __this->___instanceStarter_7;
		NullCheck(L_12);
		L_12->___compteurStorage_12 = 0;
		// }
		return;
	}
}
// System.Void PlayerCore::InstantiateShop2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore_InstantiateShop2_mD68E74986F4ABC4C432CC935F169FC03FF4C51A1 (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAll_m1D3CBAACE91557F72BF74D9572E9E7A435E5F338_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass27_0_U3CInstantiateShop2U3Eb__0_mB622D959559193436835B0FC5B87F0A54B5BA86D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass27_0_tB1172B89E35EF7C31682B601659EECDEEE37900C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass27_1_U3CInstantiateShop2U3Eb__1_m030788AD2617CC019495E101A89B054B793A6BA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass27_1_t46F6E4DE8C1420F756308E3D33CED23A5943E7EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass27_0_tB1172B89E35EF7C31682B601659EECDEEE37900C* V_0 = NULL;
	int32_t V_1 = 0;
	U3CU3Ec__DisplayClass27_1_t46F6E4DE8C1420F756308E3D33CED23A5943E7EF* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// ClearUIShop();
		PlayerCore_ClearUIShop_mAFECCD8E25E0D7B9A523AD2530C42FA902D82EB4(__this, NULL);
		U3CU3Ec__DisplayClass27_0_tB1172B89E35EF7C31682B601659EECDEEE37900C* L_0 = (U3CU3Ec__DisplayClass27_0_tB1172B89E35EF7C31682B601659EECDEEE37900C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass27_0_tB1172B89E35EF7C31682B601659EECDEEE37900C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass27_0__ctor_m9740B823618E833E25723542FEB9D0F2DB86AC6B(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass27_0_tB1172B89E35EF7C31682B601659EECDEEE37900C* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_1), (void*)__this);
		// for (int i = 0; i < playerPokemon.Count; i++)
		U3CU3Ec__DisplayClass27_0_tB1172B89E35EF7C31682B601659EECDEEE37900C* L_2 = V_0;
		NullCheck(L_2);
		L_2->___i_0 = 0;
		goto IL_0044;
	}

IL_001c:
	{
		// shopPokemon.RemoveAll(shopPokemon => shopPokemon.name == playerPokemon[i].name);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___shopPokemon_18;
		U3CU3Ec__DisplayClass27_0_tB1172B89E35EF7C31682B601659EECDEEE37900C* L_4 = V_0;
		Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F* L_5 = (Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F*)il2cpp_codegen_object_new(Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_mA6DFC557EC23A389E927DA976D39231E29AA5B5E(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass27_0_U3CInstantiateShop2U3Eb__0_mB622D959559193436835B0FC5B87F0A54B5BA86D_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		int32_t L_6;
		L_6 = List_1_RemoveAll_m1D3CBAACE91557F72BF74D9572E9E7A435E5F338(L_3, L_5, List_1_RemoveAll_m1D3CBAACE91557F72BF74D9572E9E7A435E5F338_RuntimeMethod_var);
		// for (int i = 0; i < playerPokemon.Count; i++)
		U3CU3Ec__DisplayClass27_0_tB1172B89E35EF7C31682B601659EECDEEE37900C* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___i_0;
		V_1 = L_8;
		U3CU3Ec__DisplayClass27_0_tB1172B89E35EF7C31682B601659EECDEEE37900C* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		L_9->___i_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0044:
	{
		// for (int i = 0; i < playerPokemon.Count; i++)
		U3CU3Ec__DisplayClass27_0_tB1172B89E35EF7C31682B601659EECDEEE37900C* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___i_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_13 = __this->___playerPokemon_8;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_13, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_001c;
		}
	}
	{
		U3CU3Ec__DisplayClass27_1_t46F6E4DE8C1420F756308E3D33CED23A5943E7EF* L_15 = (U3CU3Ec__DisplayClass27_1_t46F6E4DE8C1420F756308E3D33CED23A5943E7EF*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass27_1_t46F6E4DE8C1420F756308E3D33CED23A5943E7EF_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		U3CU3Ec__DisplayClass27_1__ctor_m35C0FCAF13193E72101781407B43862AC38B3BE9(L_15, NULL);
		V_2 = L_15;
		U3CU3Ec__DisplayClass27_1_t46F6E4DE8C1420F756308E3D33CED23A5943E7EF* L_16 = V_2;
		NullCheck(L_16);
		L_16->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___U3CU3E4__this_1), (void*)__this);
		// for (int i = 0; i < storagePokemon.Count; i++)
		U3CU3Ec__DisplayClass27_1_t46F6E4DE8C1420F756308E3D33CED23A5943E7EF* L_17 = V_2;
		NullCheck(L_17);
		L_17->___i_0 = 0;
		goto IL_0095;
	}

IL_006d:
	{
		// shopPokemon.RemoveAll(shopPokemon => shopPokemon.name == storagePokemon[i].name);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_18 = __this->___shopPokemon_18;
		U3CU3Ec__DisplayClass27_1_t46F6E4DE8C1420F756308E3D33CED23A5943E7EF* L_19 = V_2;
		Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F* L_20 = (Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F*)il2cpp_codegen_object_new(Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Predicate_1__ctor_mA6DFC557EC23A389E927DA976D39231E29AA5B5E(L_20, L_19, (intptr_t)((void*)U3CU3Ec__DisplayClass27_1_U3CInstantiateShop2U3Eb__1_m030788AD2617CC019495E101A89B054B793A6BA5_RuntimeMethod_var), NULL);
		NullCheck(L_18);
		int32_t L_21;
		L_21 = List_1_RemoveAll_m1D3CBAACE91557F72BF74D9572E9E7A435E5F338(L_18, L_20, List_1_RemoveAll_m1D3CBAACE91557F72BF74D9572E9E7A435E5F338_RuntimeMethod_var);
		// for (int i = 0; i < storagePokemon.Count; i++)
		U3CU3Ec__DisplayClass27_1_t46F6E4DE8C1420F756308E3D33CED23A5943E7EF* L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23 = L_22->___i_0;
		V_1 = L_23;
		U3CU3Ec__DisplayClass27_1_t46F6E4DE8C1420F756308E3D33CED23A5943E7EF* L_24 = V_2;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		L_24->___i_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0095:
	{
		// for (int i = 0; i < storagePokemon.Count; i++)
		U3CU3Ec__DisplayClass27_1_t46F6E4DE8C1420F756308E3D33CED23A5943E7EF* L_26 = V_2;
		NullCheck(L_26);
		int32_t L_27 = L_26->___i_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_28 = __this->___storagePokemon_19;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_28, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_006d;
		}
	}
	{
		// instanceStarter.posYShopInstantiate = 0;
		InstanciatePokemon_tDF0A8C405EF4A0171FFF22108615868A8835F610* L_30 = __this->___instanceStarter_7;
		NullCheck(L_30);
		L_30->___posYShopInstantiate_7 = 0;
		// instanceStarter.compteurShop = 0;
		InstanciatePokemon_tDF0A8C405EF4A0171FFF22108615868A8835F610* L_31 = __this->___instanceStarter_7;
		NullCheck(L_31);
		L_31->___compteurShop_8 = 0;
		// for (int i = 0; i < shopPokemon.Count; i++)
		V_3 = 0;
		goto IL_00df;
	}

IL_00c4:
	{
		// instanceStarter.InstantiateShop(shopPokemon[i]);
		InstanciatePokemon_tDF0A8C405EF4A0171FFF22108615868A8835F610* L_32 = __this->___instanceStarter_7;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_33 = __this->___shopPokemon_18;
		int32_t L_34 = V_3;
		NullCheck(L_33);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
		L_35 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_33, L_34, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_32);
		InstanciatePokemon_InstantiateShop_mAC29CFBE26814FD51912C5D8D236580C8F1A5759(L_32, L_35, NULL);
		// for (int i = 0; i < shopPokemon.Count; i++)
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00df:
	{
		// for (int i = 0; i < shopPokemon.Count; i++)
		int32_t L_37 = V_3;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_38 = __this->___shopPokemon_18;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_38, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_37) < ((int32_t)L_39)))
		{
			goto IL_00c4;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PlayerCore::StoragePokemon(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore_StoragePokemon_mBB76F9F7A8F9C1CC5B5D26F404C8061D31606E00 (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if (currentPlayerPokemon != null && playerPokemon.Count > 1)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___currentPlayerPokemon_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_00e5;
		}
	}
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___playerPokemon_8;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_2, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)1)))
		{
			goto IL_00e5;
		}
	}
	{
		// for (int i = 0; i < playerPokemon.Count; i++)
		V_0 = 0;
		goto IL_0071;
	}

IL_0026:
	{
		// if (playerPokemon[i].name == currentPlayerPokemon.name)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___playerPokemon_8;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_4, L_5, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___currentPlayerPokemon_11;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		bool L_10;
		L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		// storagePokemon.Add(prefab);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_11 = __this->___storagePokemon_19;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = ___prefab0;
		NullCheck(L_11);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_11, L_12, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// playerPokemon.Remove(playerPokemon[i]);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_13 = __this->___playerPokemon_8;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_14 = __this->___playerPokemon_8;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_14, L_15, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_13);
		bool L_17;
		L_17 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_13, L_16, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
	}

IL_006d:
	{
		// for (int i = 0; i < playerPokemon.Count; i++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0071:
	{
		// for (int i = 0; i < playerPokemon.Count; i++)
		int32_t L_19 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_20 = __this->___playerPokemon_8;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_20, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0026;
		}
	}
	{
		// ClearUIPokemon();
		PlayerCore_ClearUIPokemon_mAE963C708560048022FBAD0399A46AC6F5D15B72(__this, NULL);
		// for (int i = 0; i < playerPokemon.Count; i++)
		V_1 = 0;
		goto IL_00a4;
	}

IL_0089:
	{
		// instanceStarter.InstantiatePokemon(playerPokemon[i]);
		InstanciatePokemon_tDF0A8C405EF4A0171FFF22108615868A8835F610* L_22 = __this->___instanceStarter_7;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_23 = __this->___playerPokemon_8;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_23, L_24, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_22);
		InstanciatePokemon_InstantiatePokemon_mA162E874CBBE858F3117F7E06A28DBA87BCD35C4(L_22, L_25, NULL);
		// for (int i = 0; i < playerPokemon.Count; i++)
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00a4:
	{
		// for (int i = 0; i < playerPokemon.Count; i++)
		int32_t L_27 = V_1;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_28 = __this->___playerPokemon_8;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_28, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0089;
		}
	}
	{
		// ClearUIStorage();
		PlayerCore_ClearUIStorage_m6B061AB2125A04B5C4A5ECD8BA24FADDC16026A8(__this, NULL);
		// for (int i = 0; i < storagePokemon.Count; i++)
		V_2 = 0;
		goto IL_00d7;
	}

IL_00bc:
	{
		// instanceStarter.InstantiateStorage(storagePokemon[i]);
		InstanciatePokemon_tDF0A8C405EF4A0171FFF22108615868A8835F610* L_30 = __this->___instanceStarter_7;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_31 = __this->___storagePokemon_19;
		int32_t L_32 = V_2;
		NullCheck(L_31);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_31, L_32, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_30);
		InstanciatePokemon_InstantiateStorage_m1CC49A4AE87FD37C2BC6079EE5C24E33AAA9FFA6(L_30, L_33, NULL);
		// for (int i = 0; i < storagePokemon.Count; i++)
		int32_t L_34 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d7:
	{
		// for (int i = 0; i < storagePokemon.Count; i++)
		int32_t L_35 = V_2;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_36 = __this->___storagePokemon_19;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_36, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_00bc;
		}
	}

IL_00e5:
	{
		// }
		return;
	}
}
// System.Void PlayerCore::AddPokemon(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore_AddPokemon_mC16110C15F4D3FEE4C5F569D53A97AF398FB03B5 (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAll_m1D3CBAACE91557F72BF74D9572E9E7A435E5F338_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass29_0_U3CAddPokemonU3Eb__0_mA657CF822E6BA6FEFF73F0318E27E0DB9ACF7196_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass29_0_tE931918B7DF190A5DDACF236875527C88DCA3C41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass29_0_tE931918B7DF190A5DDACF236875527C88DCA3C41* V_0 = NULL;
	Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F* G_B4_0 = NULL;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* G_B4_1 = NULL;
	Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F* G_B3_0 = NULL;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* G_B3_1 = NULL;
	{
		U3CU3Ec__DisplayClass29_0_tE931918B7DF190A5DDACF236875527C88DCA3C41* L_0 = (U3CU3Ec__DisplayClass29_0_tE931918B7DF190A5DDACF236875527C88DCA3C41*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass29_0_tE931918B7DF190A5DDACF236875527C88DCA3C41_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass29_0__ctor_m0F48772182A8FC59E9A75718C6D0D8FDF1AC36FD(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass29_0_tE931918B7DF190A5DDACF236875527C88DCA3C41* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		// if (playerPokemon.Count < maxPlayerPokemon)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___playerPokemon_8;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_2, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_4 = __this->___maxPlayerPokemon_9;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_00f1;
		}
	}
	{
		// playerPokemon.Add(prefab);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->___playerPokemon_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___prefab0;
		NullCheck(L_5);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_5, L_6, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// for (int i = 0; i < playerPokemon.Count; i++)
		U3CU3Ec__DisplayClass29_0_tE931918B7DF190A5DDACF236875527C88DCA3C41* L_7 = V_0;
		NullCheck(L_7);
		L_7->___i_1 = 0;
		goto IL_0073;
	}

IL_0038:
	{
		// storagePokemon.RemoveAll(storagePokemon => storagePokemon.name == playerPokemon[i].name);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = __this->___storagePokemon_19;
		U3CU3Ec__DisplayClass29_0_tE931918B7DF190A5DDACF236875527C88DCA3C41* L_9 = V_0;
		NullCheck(L_9);
		Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F* L_10 = L_9->___U3CU3E9__0_2;
		Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F* L_11 = L_10;
		G_B3_0 = L_11;
		G_B3_1 = L_8;
		if (L_11)
		{
			G_B4_0 = L_11;
			G_B4_1 = L_8;
			goto IL_005d;
		}
	}
	{
		U3CU3Ec__DisplayClass29_0_tE931918B7DF190A5DDACF236875527C88DCA3C41* L_12 = V_0;
		U3CU3Ec__DisplayClass29_0_tE931918B7DF190A5DDACF236875527C88DCA3C41* L_13 = V_0;
		Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F* L_14 = (Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F*)il2cpp_codegen_object_new(Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Predicate_1__ctor_mA6DFC557EC23A389E927DA976D39231E29AA5B5E(L_14, L_13, (intptr_t)((void*)U3CU3Ec__DisplayClass29_0_U3CAddPokemonU3Eb__0_mA657CF822E6BA6FEFF73F0318E27E0DB9ACF7196_RuntimeMethod_var), NULL);
		Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F* L_15 = L_14;
		V_1 = L_15;
		NullCheck(L_12);
		L_12->___U3CU3E9__0_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___U3CU3E9__0_2), (void*)L_15);
		Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F* L_16 = V_1;
		G_B4_0 = L_16;
		G_B4_1 = G_B3_1;
	}

IL_005d:
	{
		NullCheck(G_B4_1);
		int32_t L_17;
		L_17 = List_1_RemoveAll_m1D3CBAACE91557F72BF74D9572E9E7A435E5F338(G_B4_1, G_B4_0, List_1_RemoveAll_m1D3CBAACE91557F72BF74D9572E9E7A435E5F338_RuntimeMethod_var);
		// for (int i = 0; i < playerPokemon.Count; i++)
		U3CU3Ec__DisplayClass29_0_tE931918B7DF190A5DDACF236875527C88DCA3C41* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = L_18->___i_1;
		V_2 = L_19;
		U3CU3Ec__DisplayClass29_0_tE931918B7DF190A5DDACF236875527C88DCA3C41* L_20 = V_0;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		L_20->___i_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0073:
	{
		// for (int i = 0; i < playerPokemon.Count; i++)
		U3CU3Ec__DisplayClass29_0_tE931918B7DF190A5DDACF236875527C88DCA3C41* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = L_22->___i_1;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_24 = __this->___playerPokemon_8;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_24, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_0038;
		}
	}
	{
		// ClearUIPokemon();
		PlayerCore_ClearUIPokemon_mAE963C708560048022FBAD0399A46AC6F5D15B72(__this, NULL);
		// for (int i = 0; i < playerPokemon.Count; i++)
		V_3 = 0;
		goto IL_00ab;
	}

IL_0090:
	{
		// instanceStarter.InstantiatePokemon(playerPokemon[i]);
		InstanciatePokemon_tDF0A8C405EF4A0171FFF22108615868A8835F610* L_26 = __this->___instanceStarter_7;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_27 = __this->___playerPokemon_8;
		int32_t L_28 = V_3;
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_27, L_28, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_26);
		InstanciatePokemon_InstantiatePokemon_mA162E874CBBE858F3117F7E06A28DBA87BCD35C4(L_26, L_29, NULL);
		// for (int i = 0; i < playerPokemon.Count; i++)
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00ab:
	{
		// for (int i = 0; i < playerPokemon.Count; i++)
		int32_t L_31 = V_3;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_32 = __this->___playerPokemon_8;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_32, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_31) < ((int32_t)L_33)))
		{
			goto IL_0090;
		}
	}
	{
		// ClearUIStorage();
		PlayerCore_ClearUIStorage_m6B061AB2125A04B5C4A5ECD8BA24FADDC16026A8(__this, NULL);
		// for (int i = 0; i < storagePokemon.Count; i++)
		V_4 = 0;
		goto IL_00e2;
	}

IL_00c4:
	{
		// instanceStarter.InstantiateStorage(storagePokemon[i]);
		InstanciatePokemon_tDF0A8C405EF4A0171FFF22108615868A8835F610* L_34 = __this->___instanceStarter_7;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_35 = __this->___storagePokemon_19;
		int32_t L_36 = V_4;
		NullCheck(L_35);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_35, L_36, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_34);
		InstanciatePokemon_InstantiateStorage_m1CC49A4AE87FD37C2BC6079EE5C24E33AAA9FFA6(L_34, L_37, NULL);
		// for (int i = 0; i < storagePokemon.Count; i++)
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00e2:
	{
		// for (int i = 0; i < storagePokemon.Count; i++)
		int32_t L_39 = V_4;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_40 = __this->___storagePokemon_19;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_40, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_39) < ((int32_t)L_41)))
		{
			goto IL_00c4;
		}
	}

IL_00f1:
	{
		// }
		return;
	}
}
// System.Void PlayerCore::AddPokemonForLoad(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore_AddPokemonForLoad_mF76A1E7188FDCE3F95C0A6E6F5A880F3BDA4452C (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___poke0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerPokemon.Add(poke);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___playerPokemon_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___poke0;
		NullCheck(L_0);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_0, L_1, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// instanceStarter.InstantiatePokemon(poke);
		InstanciatePokemon_tDF0A8C405EF4A0171FFF22108615868A8835F610* L_2 = __this->___instanceStarter_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___poke0;
		NullCheck(L_2);
		InstanciatePokemon_InstantiatePokemon_mA162E874CBBE858F3117F7E06A28DBA87BCD35C4(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void PlayerCore::AddPokemonStorageForLoad(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore_AddPokemonStorageForLoad_m073189036944A8802DC6D794268ACB1F47A2580C (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___poke0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// storagePokemon.Add(poke);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___storagePokemon_19;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___poke0;
		NullCheck(L_0);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_0, L_1, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// instanceStarter.InstantiateStorage(poke);
		InstanciatePokemon_tDF0A8C405EF4A0171FFF22108615868A8835F610* L_2 = __this->___instanceStarter_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___poke0;
		NullCheck(L_2);
		InstanciatePokemon_InstantiateStorage_m1CC49A4AE87FD37C2BC6079EE5C24E33AAA9FFA6(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void PlayerCore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCore__ctor_m0C42B8B2DD9E28E29835BDD2CD7EECFBA8C3C419 (PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlayerCore/<>c__DisplayClass27_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0__ctor_m9740B823618E833E25723542FEB9D0F2DB86AC6B (U3CU3Ec__DisplayClass27_0_tB1172B89E35EF7C31682B601659EECDEEE37900C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean PlayerCore/<>c__DisplayClass27_0::<InstantiateShop2>b__0(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass27_0_U3CInstantiateShop2U3Eb__0_mB622D959559193436835B0FC5B87F0A54B5BA86D (U3CU3Ec__DisplayClass27_0_tB1172B89E35EF7C31682B601659EECDEEE37900C* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shopPokemon0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// shopPokemon.RemoveAll(shopPokemon => shopPokemon.name == playerPokemon[i].name);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___shopPokemon0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_2 = __this->___U3CU3E4__this_1;
		NullCheck(L_2);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = L_2->___playerPokemon_8;
		int32_t L_4 = __this->___i_0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_3, L_4, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, L_6, NULL);
		return L_7;
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
// System.Void PlayerCore/<>c__DisplayClass27_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_1__ctor_m35C0FCAF13193E72101781407B43862AC38B3BE9 (U3CU3Ec__DisplayClass27_1_t46F6E4DE8C1420F756308E3D33CED23A5943E7EF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean PlayerCore/<>c__DisplayClass27_1::<InstantiateShop2>b__1(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass27_1_U3CInstantiateShop2U3Eb__1_m030788AD2617CC019495E101A89B054B793A6BA5 (U3CU3Ec__DisplayClass27_1_t46F6E4DE8C1420F756308E3D33CED23A5943E7EF* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shopPokemon0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// shopPokemon.RemoveAll(shopPokemon => shopPokemon.name == storagePokemon[i].name);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___shopPokemon0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_2 = __this->___U3CU3E4__this_1;
		NullCheck(L_2);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = L_2->___storagePokemon_19;
		int32_t L_4 = __this->___i_0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_3, L_4, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, L_6, NULL);
		return L_7;
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
// System.Void PlayerCore/<>c__DisplayClass29_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0__ctor_m0F48772182A8FC59E9A75718C6D0D8FDF1AC36FD (U3CU3Ec__DisplayClass29_0_tE931918B7DF190A5DDACF236875527C88DCA3C41* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean PlayerCore/<>c__DisplayClass29_0::<AddPokemon>b__0(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass29_0_U3CAddPokemonU3Eb__0_mA657CF822E6BA6FEFF73F0318E27E0DB9ACF7196 (U3CU3Ec__DisplayClass29_0_tE931918B7DF190A5DDACF236875527C88DCA3C41* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___storagePokemon0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// storagePokemon.RemoveAll(storagePokemon => storagePokemon.name == playerPokemon[i].name);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___storagePokemon0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_2 = __this->___U3CU3E4__this_0;
		NullCheck(L_2);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = L_2->___playerPokemon_8;
		int32_t L_4 = __this->___i_1;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_3, L_4, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, L_6, NULL);
		return L_7;
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
// System.Void Pokemon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pokemon__ctor_mF8DBBF0039C2B0BC9F046A69DED93D6701B6E9EF (Pokemon_tB45F2D3C833A5BC0ADA15722A03744FE8552E588* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.String TableType::TableDesTypes(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TableType_TableDesTypes_mBB42E30C3762DEEC37A2C97C873F30C23B03EFF3 (String_t* ___typeAttaque0, String_t* ___typeDefense1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B6D1EACB61B10A0E3503E4C7DD4EECB230E0D66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1981081F0C0FB591D6C0DBFFF3DB12AD619970D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D831CC5FBA843EC452F164399E6762480BAC1EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27D719910FB31C46D9F1432022D54AD1DE1CA6FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral292255F88C4AEF260DC4938999FDAE7D5F83B3AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39861698AABFA4CF7D217CADD214709766197D35);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B0E38E8A8694EB456D42503AFB2E940DB3D6A0B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DEBE551FFF770B7208FBBBF4291FFC0BB9B7ECD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49263516E7E9B988032AA5C5327155DDF305738F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58D4F02FFFE246215C14338C767F51C9E6A5C163);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral794F749EE0FA37993B6136DCE128A5CA83A1CD61);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BF1A130D782F57F44234B152D673BC5D8C71C12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6AF2E06FCCD58DA89B7BCD8119A3BFDC03285EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2E0DF779A65305A3D712FB2833489B378419070);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD721CB378CEB20826D36BE35B41F17508474401D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA088E5330059BFBF9D7BC392C2F4C0FA85912E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA3E6369954B3EFCF5E8CA41E9B54A7B0C3F71C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCF1463BFD171A19E8180B8948F12CE858C71A31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC19981D10E4DFF34F5764FEEB856880224D055D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDDFC548A57FAB7C14CA7A86AF85A333F909865D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(typeAttaque == "normal")
		String_t* L_0 = ___typeAttaque0;
		bool L_1;
		L_1 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, _stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3, NULL);
		if (!L_1)
		{
			goto IL_0046;
		}
	}
	{
		// if (typeDefense == "spectre")
		String_t* L_2 = ___typeDefense1;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral49263516E7E9B988032AA5C5327155DDF305738F, NULL);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// return "aucun";
		return _stringLiteral0B6D1EACB61B10A0E3503E4C7DD4EECB230E0D66;
	}

IL_0020:
	{
		// if (typeDefense == "roche" || typeDefense == "acier")
		String_t* L_4 = ___typeDefense1;
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, _stringLiteralEDDFC548A57FAB7C14CA7A86AF85A333F909865D, NULL);
		if (L_5)
		{
			goto IL_003a;
		}
	}
	{
		String_t* L_6 = ___typeDefense1;
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralD2E0DF779A65305A3D712FB2833489B378419070, NULL);
		if (!L_7)
		{
			goto IL_0040;
		}
	}

IL_003a:
	{
		// return "faible";
		return _stringLiteralDA088E5330059BFBF9D7BC392C2F4C0FA85912E3;
	}

IL_0040:
	{
		// return "normal";
		return _stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3;
	}

IL_0046:
	{
		// else if (typeAttaque == "plante")
		String_t* L_8 = ___typeAttaque0;
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteralDCF1463BFD171A19E8180B8948F12CE858C71A31, NULL);
		if (!L_9)
		{
			goto IL_00ea;
		}
	}
	{
		// if (typeDefense == "plante" || typeDefense == "feu" || typeDefense == "poison"
		//     || typeDefense == "vol" || typeDefense == "insecte" || typeDefense == "dragon"
		//     || typeDefense == "acier")
		String_t* L_10 = ___typeDefense1;
		bool L_11;
		L_11 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_10, _stringLiteralDCF1463BFD171A19E8180B8948F12CE858C71A31, NULL);
		if (L_11)
		{
			goto IL_00b1;
		}
	}
	{
		String_t* L_12 = ___typeDefense1;
		bool L_13;
		L_13 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_12, _stringLiteral1981081F0C0FB591D6C0DBFFF3DB12AD619970D3, NULL);
		if (L_13)
		{
			goto IL_00b1;
		}
	}
	{
		String_t* L_14 = ___typeDefense1;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteral794F749EE0FA37993B6136DCE128A5CA83A1CD61, NULL);
		if (L_15)
		{
			goto IL_00b1;
		}
	}
	{
		String_t* L_16 = ___typeDefense1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteral3DEBE551FFF770B7208FBBBF4291FFC0BB9B7ECD, NULL);
		if (L_17)
		{
			goto IL_00b1;
		}
	}
	{
		String_t* L_18 = ___typeDefense1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral1D831CC5FBA843EC452F164399E6762480BAC1EB, NULL);
		if (L_19)
		{
			goto IL_00b1;
		}
	}
	{
		String_t* L_20 = ___typeDefense1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteral58D4F02FFFE246215C14338C767F51C9E6A5C163, NULL);
		if (L_21)
		{
			goto IL_00b1;
		}
	}
	{
		String_t* L_22 = ___typeDefense1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteralD2E0DF779A65305A3D712FB2833489B378419070, NULL);
		if (!L_23)
		{
			goto IL_00b7;
		}
	}

IL_00b1:
	{
		// return "faible";
		return _stringLiteralDA088E5330059BFBF9D7BC392C2F4C0FA85912E3;
	}

IL_00b7:
	{
		// if (typeDefense == "eau" || typeDefense == "sol" || typeDefense == "roche")
		String_t* L_24 = ___typeDefense1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral3B0E38E8A8694EB456D42503AFB2E940DB3D6A0B, NULL);
		if (L_25)
		{
			goto IL_00de;
		}
	}
	{
		String_t* L_26 = ___typeDefense1;
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteralEC19981D10E4DFF34F5764FEEB856880224D055D, NULL);
		if (L_27)
		{
			goto IL_00de;
		}
	}
	{
		String_t* L_28 = ___typeDefense1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteralEDDFC548A57FAB7C14CA7A86AF85A333F909865D, NULL);
		if (!L_29)
		{
			goto IL_00e4;
		}
	}

IL_00de:
	{
		// return "fort";
		return _stringLiteral8BF1A130D782F57F44234B152D673BC5D8C71C12;
	}

IL_00e4:
	{
		// return "normal";
		return _stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3;
	}

IL_00ea:
	{
		// else if (typeAttaque == "feu")
		String_t* L_30 = ___typeAttaque0;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteral1981081F0C0FB591D6C0DBFFF3DB12AD619970D3, NULL);
		if (!L_31)
		{
			goto IL_0171;
		}
	}
	{
		// if (typeDefense == "feu" || typeDefense == "eau" || typeDefense == "roche"
		//     || typeDefense == "dragon")
		String_t* L_32 = ___typeDefense1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral1981081F0C0FB591D6C0DBFFF3DB12AD619970D3, NULL);
		if (L_33)
		{
			goto IL_012b;
		}
	}
	{
		String_t* L_34 = ___typeDefense1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral3B0E38E8A8694EB456D42503AFB2E940DB3D6A0B, NULL);
		if (L_35)
		{
			goto IL_012b;
		}
	}
	{
		String_t* L_36 = ___typeDefense1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralEDDFC548A57FAB7C14CA7A86AF85A333F909865D, NULL);
		if (L_37)
		{
			goto IL_012b;
		}
	}
	{
		String_t* L_38 = ___typeDefense1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteral58D4F02FFFE246215C14338C767F51C9E6A5C163, NULL);
		if (!L_39)
		{
			goto IL_0131;
		}
	}

IL_012b:
	{
		// return "faible";
		return _stringLiteralDA088E5330059BFBF9D7BC392C2F4C0FA85912E3;
	}

IL_0131:
	{
		// if (typeDefense == "plante" || typeDefense == "glace" || typeDefense == "insecte"
		//     || typeDefense == "acier")
		String_t* L_40 = ___typeDefense1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralDCF1463BFD171A19E8180B8948F12CE858C71A31, NULL);
		if (L_41)
		{
			goto IL_0165;
		}
	}
	{
		String_t* L_42 = ___typeDefense1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralB6AF2E06FCCD58DA89B7BCD8119A3BFDC03285EF, NULL);
		if (L_43)
		{
			goto IL_0165;
		}
	}
	{
		String_t* L_44 = ___typeDefense1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteral1D831CC5FBA843EC452F164399E6762480BAC1EB, NULL);
		if (L_45)
		{
			goto IL_0165;
		}
	}
	{
		String_t* L_46 = ___typeDefense1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralD2E0DF779A65305A3D712FB2833489B378419070, NULL);
		if (!L_47)
		{
			goto IL_016b;
		}
	}

IL_0165:
	{
		// return "fort";
		return _stringLiteral8BF1A130D782F57F44234B152D673BC5D8C71C12;
	}

IL_016b:
	{
		// return "normal";
		return _stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3;
	}

IL_0171:
	{
		// else if (typeAttaque == "eau")
		String_t* L_48 = ___typeAttaque0;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral3B0E38E8A8694EB456D42503AFB2E940DB3D6A0B, NULL);
		if (!L_49)
		{
			goto IL_01eb;
		}
	}
	{
		// if (typeDefense == "plante" || typeDefense == "eau" || typeDefense == "dragon" || typeDefense == "electrik")
		String_t* L_50 = ___typeDefense1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteralDCF1463BFD171A19E8180B8948F12CE858C71A31, NULL);
		if (L_51)
		{
			goto IL_01b2;
		}
	}
	{
		String_t* L_52 = ___typeDefense1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral3B0E38E8A8694EB456D42503AFB2E940DB3D6A0B, NULL);
		if (L_53)
		{
			goto IL_01b2;
		}
	}
	{
		String_t* L_54 = ___typeDefense1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral58D4F02FFFE246215C14338C767F51C9E6A5C163, NULL);
		if (L_55)
		{
			goto IL_01b2;
		}
	}
	{
		String_t* L_56 = ___typeDefense1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteral292255F88C4AEF260DC4938999FDAE7D5F83B3AA, NULL);
		if (!L_57)
		{
			goto IL_01b8;
		}
	}

IL_01b2:
	{
		// return "faible";
		return _stringLiteralDA088E5330059BFBF9D7BC392C2F4C0FA85912E3;
	}

IL_01b8:
	{
		// if (typeDefense == "feu" || typeDefense == "sol" || typeDefense == "roche")
		String_t* L_58 = ___typeDefense1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral1981081F0C0FB591D6C0DBFFF3DB12AD619970D3, NULL);
		if (L_59)
		{
			goto IL_01df;
		}
	}
	{
		String_t* L_60 = ___typeDefense1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteralEC19981D10E4DFF34F5764FEEB856880224D055D, NULL);
		if (L_61)
		{
			goto IL_01df;
		}
	}
	{
		String_t* L_62 = ___typeDefense1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteralEDDFC548A57FAB7C14CA7A86AF85A333F909865D, NULL);
		if (!L_63)
		{
			goto IL_01e5;
		}
	}

IL_01df:
	{
		// return "fort";
		return _stringLiteral8BF1A130D782F57F44234B152D673BC5D8C71C12;
	}

IL_01e5:
	{
		// return "normal";
		return _stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3;
	}

IL_01eb:
	{
		// else if (typeAttaque == "electrik")
		String_t* L_64 = ___typeAttaque0;
		bool L_65;
		L_65 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_64, _stringLiteral292255F88C4AEF260DC4938999FDAE7D5F83B3AA, NULL);
		if (!L_65)
		{
			goto IL_025e;
		}
	}
	{
		// if (typeDefense == "sol")
		String_t* L_66 = ___typeDefense1;
		bool L_67;
		L_67 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_66, _stringLiteralEC19981D10E4DFF34F5764FEEB856880224D055D, NULL);
		if (!L_67)
		{
			goto IL_020b;
		}
	}
	{
		// return "aucun";
		return _stringLiteral0B6D1EACB61B10A0E3503E4C7DD4EECB230E0D66;
	}

IL_020b:
	{
		// if (typeDefense == "plante" || typeDefense == "electrik" || typeDefense == "dragon")
		String_t* L_68 = ___typeDefense1;
		bool L_69;
		L_69 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_68, _stringLiteralDCF1463BFD171A19E8180B8948F12CE858C71A31, NULL);
		if (L_69)
		{
			goto IL_0232;
		}
	}
	{
		String_t* L_70 = ___typeDefense1;
		bool L_71;
		L_71 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_70, _stringLiteral292255F88C4AEF260DC4938999FDAE7D5F83B3AA, NULL);
		if (L_71)
		{
			goto IL_0232;
		}
	}
	{
		String_t* L_72 = ___typeDefense1;
		bool L_73;
		L_73 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_72, _stringLiteral58D4F02FFFE246215C14338C767F51C9E6A5C163, NULL);
		if (!L_73)
		{
			goto IL_0238;
		}
	}

IL_0232:
	{
		// return "faible";
		return _stringLiteralDA088E5330059BFBF9D7BC392C2F4C0FA85912E3;
	}

IL_0238:
	{
		// if (typeDefense == "eau" || typeDefense == "vol")
		String_t* L_74 = ___typeDefense1;
		bool L_75;
		L_75 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_74, _stringLiteral3B0E38E8A8694EB456D42503AFB2E940DB3D6A0B, NULL);
		if (L_75)
		{
			goto IL_0252;
		}
	}
	{
		String_t* L_76 = ___typeDefense1;
		bool L_77;
		L_77 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_76, _stringLiteral3DEBE551FFF770B7208FBBBF4291FFC0BB9B7ECD, NULL);
		if (!L_77)
		{
			goto IL_0258;
		}
	}

IL_0252:
	{
		// return "fort";
		return _stringLiteral8BF1A130D782F57F44234B152D673BC5D8C71C12;
	}

IL_0258:
	{
		// return "normal";
		return _stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3;
	}

IL_025e:
	{
		// else if (typeAttaque == "glace")
		String_t* L_78 = ___typeAttaque0;
		bool L_79;
		L_79 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_78, _stringLiteralB6AF2E06FCCD58DA89B7BCD8119A3BFDC03285EF, NULL);
		if (!L_79)
		{
			goto IL_02e5;
		}
	}
	{
		// if (typeDefense == "feu" || typeDefense == "eau" || typeDefense == "glace" || typeDefense == "acier")
		String_t* L_80 = ___typeDefense1;
		bool L_81;
		L_81 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_80, _stringLiteral1981081F0C0FB591D6C0DBFFF3DB12AD619970D3, NULL);
		if (L_81)
		{
			goto IL_029f;
		}
	}
	{
		String_t* L_82 = ___typeDefense1;
		bool L_83;
		L_83 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_82, _stringLiteral3B0E38E8A8694EB456D42503AFB2E940DB3D6A0B, NULL);
		if (L_83)
		{
			goto IL_029f;
		}
	}
	{
		String_t* L_84 = ___typeDefense1;
		bool L_85;
		L_85 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_84, _stringLiteralB6AF2E06FCCD58DA89B7BCD8119A3BFDC03285EF, NULL);
		if (L_85)
		{
			goto IL_029f;
		}
	}
	{
		String_t* L_86 = ___typeDefense1;
		bool L_87;
		L_87 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_86, _stringLiteralD2E0DF779A65305A3D712FB2833489B378419070, NULL);
		if (!L_87)
		{
			goto IL_02a5;
		}
	}

IL_029f:
	{
		// return "faible";
		return _stringLiteralDA088E5330059BFBF9D7BC392C2F4C0FA85912E3;
	}

IL_02a5:
	{
		// if (typeDefense == "plante" || typeDefense == "sol" || typeDefense == "vol" || typeDefense == "dragon")
		String_t* L_88 = ___typeDefense1;
		bool L_89;
		L_89 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_88, _stringLiteralDCF1463BFD171A19E8180B8948F12CE858C71A31, NULL);
		if (L_89)
		{
			goto IL_02d9;
		}
	}
	{
		String_t* L_90 = ___typeDefense1;
		bool L_91;
		L_91 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_90, _stringLiteralEC19981D10E4DFF34F5764FEEB856880224D055D, NULL);
		if (L_91)
		{
			goto IL_02d9;
		}
	}
	{
		String_t* L_92 = ___typeDefense1;
		bool L_93;
		L_93 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_92, _stringLiteral3DEBE551FFF770B7208FBBBF4291FFC0BB9B7ECD, NULL);
		if (L_93)
		{
			goto IL_02d9;
		}
	}
	{
		String_t* L_94 = ___typeDefense1;
		bool L_95;
		L_95 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_94, _stringLiteral58D4F02FFFE246215C14338C767F51C9E6A5C163, NULL);
		if (!L_95)
		{
			goto IL_02df;
		}
	}

IL_02d9:
	{
		// return "fort";
		return _stringLiteral8BF1A130D782F57F44234B152D673BC5D8C71C12;
	}

IL_02df:
	{
		// return "normal";
		return _stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3;
	}

IL_02e5:
	{
		// else if (typeAttaque == "combat")
		String_t* L_96 = ___typeAttaque0;
		bool L_97;
		L_97 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_96, _stringLiteralD721CB378CEB20826D36BE35B41F17508474401D, NULL);
		if (!L_97)
		{
			goto IL_038f;
		}
	}
	{
		// if (typeDefense == "spectre")
		String_t* L_98 = ___typeDefense1;
		bool L_99;
		L_99 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_98, _stringLiteral49263516E7E9B988032AA5C5327155DDF305738F, NULL);
		if (!L_99)
		{
			goto IL_0308;
		}
	}
	{
		// return "aucun";
		return _stringLiteral0B6D1EACB61B10A0E3503E4C7DD4EECB230E0D66;
	}

IL_0308:
	{
		// if (typeDefense == "poison" || typeDefense == "vol" || typeDefense == "psy" || typeDefense == "insecte")
		String_t* L_100 = ___typeDefense1;
		bool L_101;
		L_101 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_100, _stringLiteral794F749EE0FA37993B6136DCE128A5CA83A1CD61, NULL);
		if (L_101)
		{
			goto IL_033c;
		}
	}
	{
		String_t* L_102 = ___typeDefense1;
		bool L_103;
		L_103 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_102, _stringLiteral3DEBE551FFF770B7208FBBBF4291FFC0BB9B7ECD, NULL);
		if (L_103)
		{
			goto IL_033c;
		}
	}
	{
		String_t* L_104 = ___typeDefense1;
		bool L_105;
		L_105 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_104, _stringLiteral39861698AABFA4CF7D217CADD214709766197D35, NULL);
		if (L_105)
		{
			goto IL_033c;
		}
	}
	{
		String_t* L_106 = ___typeDefense1;
		bool L_107;
		L_107 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_106, _stringLiteral1D831CC5FBA843EC452F164399E6762480BAC1EB, NULL);
		if (!L_107)
		{
			goto IL_0342;
		}
	}

IL_033c:
	{
		// return "faible";
		return _stringLiteralDA088E5330059BFBF9D7BC392C2F4C0FA85912E3;
	}

IL_0342:
	{
		// if (typeDefense == "normal" || typeDefense == "glace" || typeDefense == "roche" || typeDefense == "tenebre" || typeDefense == "acier")
		String_t* L_108 = ___typeDefense1;
		bool L_109;
		L_109 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_108, _stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3, NULL);
		if (L_109)
		{
			goto IL_0383;
		}
	}
	{
		String_t* L_110 = ___typeDefense1;
		bool L_111;
		L_111 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_110, _stringLiteralB6AF2E06FCCD58DA89B7BCD8119A3BFDC03285EF, NULL);
		if (L_111)
		{
			goto IL_0383;
		}
	}
	{
		String_t* L_112 = ___typeDefense1;
		bool L_113;
		L_113 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_112, _stringLiteralEDDFC548A57FAB7C14CA7A86AF85A333F909865D, NULL);
		if (L_113)
		{
			goto IL_0383;
		}
	}
	{
		String_t* L_114 = ___typeDefense1;
		bool L_115;
		L_115 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_114, _stringLiteral27D719910FB31C46D9F1432022D54AD1DE1CA6FF, NULL);
		if (L_115)
		{
			goto IL_0383;
		}
	}
	{
		String_t* L_116 = ___typeDefense1;
		bool L_117;
		L_117 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_116, _stringLiteralD2E0DF779A65305A3D712FB2833489B378419070, NULL);
		if (!L_117)
		{
			goto IL_0389;
		}
	}

IL_0383:
	{
		// return "fort";
		return _stringLiteral8BF1A130D782F57F44234B152D673BC5D8C71C12;
	}

IL_0389:
	{
		// return "normal";
		return _stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3;
	}

IL_038f:
	{
		// else if (typeAttaque == "poison")
		String_t* L_118 = ___typeAttaque0;
		bool L_119;
		L_119 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_118, _stringLiteral794F749EE0FA37993B6136DCE128A5CA83A1CD61, NULL);
		if (!L_119)
		{
			goto IL_0402;
		}
	}
	{
		// if (typeDefense == "acier")
		String_t* L_120 = ___typeDefense1;
		bool L_121;
		L_121 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_120, _stringLiteralD2E0DF779A65305A3D712FB2833489B378419070, NULL);
		if (!L_121)
		{
			goto IL_03af;
		}
	}
	{
		// return "aucun";
		return _stringLiteral0B6D1EACB61B10A0E3503E4C7DD4EECB230E0D66;
	}

IL_03af:
	{
		// if (typeDefense == "poison" || typeDefense == "sol" || typeDefense == "roche" || typeDefense == "spectre")
		String_t* L_122 = ___typeDefense1;
		bool L_123;
		L_123 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_122, _stringLiteral794F749EE0FA37993B6136DCE128A5CA83A1CD61, NULL);
		if (L_123)
		{
			goto IL_03e3;
		}
	}
	{
		String_t* L_124 = ___typeDefense1;
		bool L_125;
		L_125 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_124, _stringLiteralEC19981D10E4DFF34F5764FEEB856880224D055D, NULL);
		if (L_125)
		{
			goto IL_03e3;
		}
	}
	{
		String_t* L_126 = ___typeDefense1;
		bool L_127;
		L_127 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_126, _stringLiteralEDDFC548A57FAB7C14CA7A86AF85A333F909865D, NULL);
		if (L_127)
		{
			goto IL_03e3;
		}
	}
	{
		String_t* L_128 = ___typeDefense1;
		bool L_129;
		L_129 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_128, _stringLiteral49263516E7E9B988032AA5C5327155DDF305738F, NULL);
		if (!L_129)
		{
			goto IL_03e9;
		}
	}

IL_03e3:
	{
		// return "faible";
		return _stringLiteralDA088E5330059BFBF9D7BC392C2F4C0FA85912E3;
	}

IL_03e9:
	{
		// if (typeDefense == "plante")
		String_t* L_130 = ___typeDefense1;
		bool L_131;
		L_131 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_130, _stringLiteralDCF1463BFD171A19E8180B8948F12CE858C71A31, NULL);
		if (!L_131)
		{
			goto IL_03fc;
		}
	}
	{
		// return "fort";
		return _stringLiteral8BF1A130D782F57F44234B152D673BC5D8C71C12;
	}

IL_03fc:
	{
		// return "normal";
		return _stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3;
	}

IL_0402:
	{
		// else if (typeAttaque == "sol")
		String_t* L_132 = ___typeAttaque0;
		bool L_133;
		L_133 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_132, _stringLiteralEC19981D10E4DFF34F5764FEEB856880224D055D, NULL);
		if (!L_133)
		{
			goto IL_0492;
		}
	}
	{
		// if (typeDefense == "vol")
		String_t* L_134 = ___typeDefense1;
		bool L_135;
		L_135 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_134, _stringLiteral3DEBE551FFF770B7208FBBBF4291FFC0BB9B7ECD, NULL);
		if (!L_135)
		{
			goto IL_0425;
		}
	}
	{
		// return "aucun";
		return _stringLiteral0B6D1EACB61B10A0E3503E4C7DD4EECB230E0D66;
	}

IL_0425:
	{
		// if (typeDefense == "plante" || typeDefense == "psy")
		String_t* L_136 = ___typeDefense1;
		bool L_137;
		L_137 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_136, _stringLiteralDCF1463BFD171A19E8180B8948F12CE858C71A31, NULL);
		if (L_137)
		{
			goto IL_043f;
		}
	}
	{
		String_t* L_138 = ___typeDefense1;
		bool L_139;
		L_139 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_138, _stringLiteral39861698AABFA4CF7D217CADD214709766197D35, NULL);
		if (!L_139)
		{
			goto IL_0445;
		}
	}

IL_043f:
	{
		// return "faible";
		return _stringLiteralDA088E5330059BFBF9D7BC392C2F4C0FA85912E3;
	}

IL_0445:
	{
		// if (typeDefense == "feu" || typeDefense == "electrik" || typeDefense == "roche" || typeDefense == "poison" || typeDefense == "acier")
		String_t* L_140 = ___typeDefense1;
		bool L_141;
		L_141 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_140, _stringLiteral1981081F0C0FB591D6C0DBFFF3DB12AD619970D3, NULL);
		if (L_141)
		{
			goto IL_0486;
		}
	}
	{
		String_t* L_142 = ___typeDefense1;
		bool L_143;
		L_143 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_142, _stringLiteral292255F88C4AEF260DC4938999FDAE7D5F83B3AA, NULL);
		if (L_143)
		{
			goto IL_0486;
		}
	}
	{
		String_t* L_144 = ___typeDefense1;
		bool L_145;
		L_145 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_144, _stringLiteralEDDFC548A57FAB7C14CA7A86AF85A333F909865D, NULL);
		if (L_145)
		{
			goto IL_0486;
		}
	}
	{
		String_t* L_146 = ___typeDefense1;
		bool L_147;
		L_147 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_146, _stringLiteral794F749EE0FA37993B6136DCE128A5CA83A1CD61, NULL);
		if (L_147)
		{
			goto IL_0486;
		}
	}
	{
		String_t* L_148 = ___typeDefense1;
		bool L_149;
		L_149 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_148, _stringLiteralD2E0DF779A65305A3D712FB2833489B378419070, NULL);
		if (!L_149)
		{
			goto IL_048c;
		}
	}

IL_0486:
	{
		// return "fort";
		return _stringLiteral8BF1A130D782F57F44234B152D673BC5D8C71C12;
	}

IL_048c:
	{
		// return "normal";
		return _stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3;
	}

IL_0492:
	{
		// else if (typeAttaque == "vol")
		String_t* L_150 = ___typeAttaque0;
		bool L_151;
		L_151 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_150, _stringLiteral3DEBE551FFF770B7208FBBBF4291FFC0BB9B7ECD, NULL);
		if (!L_151)
		{
			goto IL_04ff;
		}
	}
	{
		// if (typeDefense == "electrik" || typeDefense == "roche" || typeDefense == "acier")
		String_t* L_152 = ___typeDefense1;
		bool L_153;
		L_153 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_152, _stringLiteral292255F88C4AEF260DC4938999FDAE7D5F83B3AA, NULL);
		if (L_153)
		{
			goto IL_04c6;
		}
	}
	{
		String_t* L_154 = ___typeDefense1;
		bool L_155;
		L_155 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_154, _stringLiteralEDDFC548A57FAB7C14CA7A86AF85A333F909865D, NULL);
		if (L_155)
		{
			goto IL_04c6;
		}
	}
	{
		String_t* L_156 = ___typeDefense1;
		bool L_157;
		L_157 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_156, _stringLiteralD2E0DF779A65305A3D712FB2833489B378419070, NULL);
		if (!L_157)
		{
			goto IL_04cc;
		}
	}

IL_04c6:
	{
		// return "faible";
		return _stringLiteralDA088E5330059BFBF9D7BC392C2F4C0FA85912E3;
	}

IL_04cc:
	{
		// if (typeDefense == "plante" || typeDefense == "combat" || typeDefense == "insecte")
		String_t* L_158 = ___typeDefense1;
		bool L_159;
		L_159 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_158, _stringLiteralDCF1463BFD171A19E8180B8948F12CE858C71A31, NULL);
		if (L_159)
		{
			goto IL_04f3;
		}
	}
	{
		String_t* L_160 = ___typeDefense1;
		bool L_161;
		L_161 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_160, _stringLiteralD721CB378CEB20826D36BE35B41F17508474401D, NULL);
		if (L_161)
		{
			goto IL_04f3;
		}
	}
	{
		String_t* L_162 = ___typeDefense1;
		bool L_163;
		L_163 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_162, _stringLiteral1D831CC5FBA843EC452F164399E6762480BAC1EB, NULL);
		if (!L_163)
		{
			goto IL_04f9;
		}
	}

IL_04f3:
	{
		// return "fort";
		return _stringLiteral8BF1A130D782F57F44234B152D673BC5D8C71C12;
	}

IL_04f9:
	{
		// return "normal";
		return _stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3;
	}

IL_04ff:
	{
		// else if (typeAttaque == "psy")
		String_t* L_164 = ___typeAttaque0;
		bool L_165;
		L_165 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_164, _stringLiteral39861698AABFA4CF7D217CADD214709766197D35, NULL);
		if (!L_165)
		{
			goto IL_0565;
		}
	}
	{
		// if (typeDefense == "tenebre")
		String_t* L_166 = ___typeDefense1;
		bool L_167;
		L_167 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_166, _stringLiteral27D719910FB31C46D9F1432022D54AD1DE1CA6FF, NULL);
		if (!L_167)
		{
			goto IL_051f;
		}
	}
	{
		// return "aucun";
		return _stringLiteral0B6D1EACB61B10A0E3503E4C7DD4EECB230E0D66;
	}

IL_051f:
	{
		// if (typeDefense == "psy" || typeDefense == "acier")
		String_t* L_168 = ___typeDefense1;
		bool L_169;
		L_169 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_168, _stringLiteral39861698AABFA4CF7D217CADD214709766197D35, NULL);
		if (L_169)
		{
			goto IL_0539;
		}
	}
	{
		String_t* L_170 = ___typeDefense1;
		bool L_171;
		L_171 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_170, _stringLiteralD2E0DF779A65305A3D712FB2833489B378419070, NULL);
		if (!L_171)
		{
			goto IL_053f;
		}
	}

IL_0539:
	{
		// return "faible";
		return _stringLiteralDA088E5330059BFBF9D7BC392C2F4C0FA85912E3;
	}

IL_053f:
	{
		// if (typeDefense == "combat" || typeDefense == "poison")
		String_t* L_172 = ___typeDefense1;
		bool L_173;
		L_173 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_172, _stringLiteralD721CB378CEB20826D36BE35B41F17508474401D, NULL);
		if (L_173)
		{
			goto IL_0559;
		}
	}
	{
		String_t* L_174 = ___typeDefense1;
		bool L_175;
		L_175 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_174, _stringLiteral794F749EE0FA37993B6136DCE128A5CA83A1CD61, NULL);
		if (!L_175)
		{
			goto IL_055f;
		}
	}

IL_0559:
	{
		// return "fort";
		return _stringLiteral8BF1A130D782F57F44234B152D673BC5D8C71C12;
	}

IL_055f:
	{
		// return "normal";
		return _stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3;
	}

IL_0565:
	{
		// else if (typeAttaque == "insecte")
		String_t* L_176 = ___typeAttaque0;
		bool L_177;
		L_177 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_176, _stringLiteral1D831CC5FBA843EC452F164399E6762480BAC1EB, NULL);
		if (!L_177)
		{
			goto IL_05fc;
		}
	}
	{
		// if (typeDefense == "feu" || typeDefense == "combat" || typeDefense == "poison"
		//     || typeDefense == "vol" || typeDefense == "spectre" || typeDefense == "acier")
		String_t* L_178 = ___typeDefense1;
		bool L_179;
		L_179 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_178, _stringLiteral1981081F0C0FB591D6C0DBFFF3DB12AD619970D3, NULL);
		if (L_179)
		{
			goto IL_05c3;
		}
	}
	{
		String_t* L_180 = ___typeDefense1;
		bool L_181;
		L_181 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_180, _stringLiteralD721CB378CEB20826D36BE35B41F17508474401D, NULL);
		if (L_181)
		{
			goto IL_05c3;
		}
	}
	{
		String_t* L_182 = ___typeDefense1;
		bool L_183;
		L_183 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_182, _stringLiteral794F749EE0FA37993B6136DCE128A5CA83A1CD61, NULL);
		if (L_183)
		{
			goto IL_05c3;
		}
	}
	{
		String_t* L_184 = ___typeDefense1;
		bool L_185;
		L_185 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_184, _stringLiteral3DEBE551FFF770B7208FBBBF4291FFC0BB9B7ECD, NULL);
		if (L_185)
		{
			goto IL_05c3;
		}
	}
	{
		String_t* L_186 = ___typeDefense1;
		bool L_187;
		L_187 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_186, _stringLiteral49263516E7E9B988032AA5C5327155DDF305738F, NULL);
		if (L_187)
		{
			goto IL_05c3;
		}
	}
	{
		String_t* L_188 = ___typeDefense1;
		bool L_189;
		L_189 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_188, _stringLiteralD2E0DF779A65305A3D712FB2833489B378419070, NULL);
		if (!L_189)
		{
			goto IL_05c9;
		}
	}

IL_05c3:
	{
		// return "faible";
		return _stringLiteralDA088E5330059BFBF9D7BC392C2F4C0FA85912E3;
	}

IL_05c9:
	{
		// if (typeDefense == "plante" || typeDefense == "psy" || typeDefense == "tenebre")
		String_t* L_190 = ___typeDefense1;
		bool L_191;
		L_191 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_190, _stringLiteralDCF1463BFD171A19E8180B8948F12CE858C71A31, NULL);
		if (L_191)
		{
			goto IL_05f0;
		}
	}
	{
		String_t* L_192 = ___typeDefense1;
		bool L_193;
		L_193 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_192, _stringLiteral39861698AABFA4CF7D217CADD214709766197D35, NULL);
		if (L_193)
		{
			goto IL_05f0;
		}
	}
	{
		String_t* L_194 = ___typeDefense1;
		bool L_195;
		L_195 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_194, _stringLiteral27D719910FB31C46D9F1432022D54AD1DE1CA6FF, NULL);
		if (!L_195)
		{
			goto IL_05f6;
		}
	}

IL_05f0:
	{
		// return "fort";
		return _stringLiteral8BF1A130D782F57F44234B152D673BC5D8C71C12;
	}

IL_05f6:
	{
		// return "normal";
		return _stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3;
	}

IL_05fc:
	{
		// else if (typeAttaque == "roche")
		String_t* L_196 = ___typeAttaque0;
		bool L_197;
		L_197 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_196, _stringLiteralEDDFC548A57FAB7C14CA7A86AF85A333F909865D, NULL);
		if (!L_197)
		{
			goto IL_0669;
		}
	}
	{
		// if (typeDefense == "combat" || typeDefense == "sol" || typeDefense == "acier")
		String_t* L_198 = ___typeDefense1;
		bool L_199;
		L_199 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_198, _stringLiteralD721CB378CEB20826D36BE35B41F17508474401D, NULL);
		if (L_199)
		{
			goto IL_0630;
		}
	}
	{
		String_t* L_200 = ___typeDefense1;
		bool L_201;
		L_201 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_200, _stringLiteralEC19981D10E4DFF34F5764FEEB856880224D055D, NULL);
		if (L_201)
		{
			goto IL_0630;
		}
	}
	{
		String_t* L_202 = ___typeDefense1;
		bool L_203;
		L_203 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_202, _stringLiteralD2E0DF779A65305A3D712FB2833489B378419070, NULL);
		if (!L_203)
		{
			goto IL_0636;
		}
	}

IL_0630:
	{
		// return "faible";
		return _stringLiteralDA088E5330059BFBF9D7BC392C2F4C0FA85912E3;
	}

IL_0636:
	{
		// if (typeDefense == "glace" || typeDefense == "vol" || typeDefense == "insecte")
		String_t* L_204 = ___typeDefense1;
		bool L_205;
		L_205 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_204, _stringLiteralB6AF2E06FCCD58DA89B7BCD8119A3BFDC03285EF, NULL);
		if (L_205)
		{
			goto IL_065d;
		}
	}
	{
		String_t* L_206 = ___typeDefense1;
		bool L_207;
		L_207 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_206, _stringLiteral3DEBE551FFF770B7208FBBBF4291FFC0BB9B7ECD, NULL);
		if (L_207)
		{
			goto IL_065d;
		}
	}
	{
		String_t* L_208 = ___typeDefense1;
		bool L_209;
		L_209 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_208, _stringLiteral1D831CC5FBA843EC452F164399E6762480BAC1EB, NULL);
		if (!L_209)
		{
			goto IL_0663;
		}
	}

IL_065d:
	{
		// return "fort";
		return _stringLiteral8BF1A130D782F57F44234B152D673BC5D8C71C12;
	}

IL_0663:
	{
		// return "normal";
		return _stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3;
	}

IL_0669:
	{
		// else if (typeAttaque == "spectre")
		String_t* L_210 = ___typeAttaque0;
		bool L_211;
		L_211 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_210, _stringLiteral49263516E7E9B988032AA5C5327155DDF305738F, NULL);
		if (!L_211)
		{
			goto IL_06c2;
		}
	}
	{
		// if (typeDefense == "normal")
		String_t* L_212 = ___typeDefense1;
		bool L_213;
		L_213 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_212, _stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3, NULL);
		if (!L_213)
		{
			goto IL_0689;
		}
	}
	{
		// return "aucun";
		return _stringLiteral0B6D1EACB61B10A0E3503E4C7DD4EECB230E0D66;
	}

IL_0689:
	{
		// if (typeDefense == "tenebre")
		String_t* L_214 = ___typeDefense1;
		bool L_215;
		L_215 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_214, _stringLiteral27D719910FB31C46D9F1432022D54AD1DE1CA6FF, NULL);
		if (!L_215)
		{
			goto IL_069c;
		}
	}
	{
		// return "faible";
		return _stringLiteralDA088E5330059BFBF9D7BC392C2F4C0FA85912E3;
	}

IL_069c:
	{
		// if (typeDefense == "psy" || typeDefense == "spectre")
		String_t* L_216 = ___typeDefense1;
		bool L_217;
		L_217 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_216, _stringLiteral39861698AABFA4CF7D217CADD214709766197D35, NULL);
		if (L_217)
		{
			goto IL_06b6;
		}
	}
	{
		String_t* L_218 = ___typeDefense1;
		bool L_219;
		L_219 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_218, _stringLiteral49263516E7E9B988032AA5C5327155DDF305738F, NULL);
		if (!L_219)
		{
			goto IL_06bc;
		}
	}

IL_06b6:
	{
		// return "fort";
		return _stringLiteral8BF1A130D782F57F44234B152D673BC5D8C71C12;
	}

IL_06bc:
	{
		// return "normal";
		return _stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3;
	}

IL_06c2:
	{
		// else if (typeAttaque == "dragon")
		String_t* L_220 = ___typeAttaque0;
		bool L_221;
		L_221 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_220, _stringLiteral58D4F02FFFE246215C14338C767F51C9E6A5C163, NULL);
		if (!L_221)
		{
			goto IL_06fb;
		}
	}
	{
		// if (typeDefense == "acier")
		String_t* L_222 = ___typeDefense1;
		bool L_223;
		L_223 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_222, _stringLiteralD2E0DF779A65305A3D712FB2833489B378419070, NULL);
		if (!L_223)
		{
			goto IL_06e2;
		}
	}
	{
		// return "faible";
		return _stringLiteralDA088E5330059BFBF9D7BC392C2F4C0FA85912E3;
	}

IL_06e2:
	{
		// if (typeDefense == "dragon")
		String_t* L_224 = ___typeDefense1;
		bool L_225;
		L_225 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_224, _stringLiteral58D4F02FFFE246215C14338C767F51C9E6A5C163, NULL);
		if (!L_225)
		{
			goto IL_06f5;
		}
	}
	{
		// return "fort";
		return _stringLiteral8BF1A130D782F57F44234B152D673BC5D8C71C12;
	}

IL_06f5:
	{
		// return "normal";
		return _stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3;
	}

IL_06fb:
	{
		// else if (typeAttaque == "tenebre")
		String_t* L_226 = ___typeAttaque0;
		bool L_227;
		L_227 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_226, _stringLiteral27D719910FB31C46D9F1432022D54AD1DE1CA6FF, NULL);
		if (!L_227)
		{
			goto IL_074e;
		}
	}
	{
		// if (typeDefense == "combat" || typeDefense == "tenebre")
		String_t* L_228 = ___typeDefense1;
		bool L_229;
		L_229 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_228, _stringLiteralD721CB378CEB20826D36BE35B41F17508474401D, NULL);
		if (L_229)
		{
			goto IL_0722;
		}
	}
	{
		String_t* L_230 = ___typeDefense1;
		bool L_231;
		L_231 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_230, _stringLiteral27D719910FB31C46D9F1432022D54AD1DE1CA6FF, NULL);
		if (!L_231)
		{
			goto IL_0728;
		}
	}

IL_0722:
	{
		// return "faible";
		return _stringLiteralDA088E5330059BFBF9D7BC392C2F4C0FA85912E3;
	}

IL_0728:
	{
		// if (typeDefense == "psy" || typeDefense == "spectre")
		String_t* L_232 = ___typeDefense1;
		bool L_233;
		L_233 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_232, _stringLiteral39861698AABFA4CF7D217CADD214709766197D35, NULL);
		if (L_233)
		{
			goto IL_0742;
		}
	}
	{
		String_t* L_234 = ___typeDefense1;
		bool L_235;
		L_235 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_234, _stringLiteral49263516E7E9B988032AA5C5327155DDF305738F, NULL);
		if (!L_235)
		{
			goto IL_0748;
		}
	}

IL_0742:
	{
		// return "fort";
		return _stringLiteral8BF1A130D782F57F44234B152D673BC5D8C71C12;
	}

IL_0748:
	{
		// return "normal";
		return _stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3;
	}

IL_074e:
	{
		// else if (typeAttaque == "acier")
		String_t* L_236 = ___typeAttaque0;
		bool L_237;
		L_237 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_236, _stringLiteralD2E0DF779A65305A3D712FB2833489B378419070, NULL);
		if (!L_237)
		{
			goto IL_07bb;
		}
	}
	{
		// if (typeDefense == "plante" || typeDefense == "feu" || typeDefense == "electrik" || typeDefense == "acier")
		String_t* L_238 = ___typeDefense1;
		bool L_239;
		L_239 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_238, _stringLiteralDCF1463BFD171A19E8180B8948F12CE858C71A31, NULL);
		if (L_239)
		{
			goto IL_078f;
		}
	}
	{
		String_t* L_240 = ___typeDefense1;
		bool L_241;
		L_241 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_240, _stringLiteral1981081F0C0FB591D6C0DBFFF3DB12AD619970D3, NULL);
		if (L_241)
		{
			goto IL_078f;
		}
	}
	{
		String_t* L_242 = ___typeDefense1;
		bool L_243;
		L_243 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_242, _stringLiteral292255F88C4AEF260DC4938999FDAE7D5F83B3AA, NULL);
		if (L_243)
		{
			goto IL_078f;
		}
	}
	{
		String_t* L_244 = ___typeDefense1;
		bool L_245;
		L_245 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_244, _stringLiteralD2E0DF779A65305A3D712FB2833489B378419070, NULL);
		if (!L_245)
		{
			goto IL_0795;
		}
	}

IL_078f:
	{
		// return "faible";
		return _stringLiteralDA088E5330059BFBF9D7BC392C2F4C0FA85912E3;
	}

IL_0795:
	{
		// if (typeDefense == "glace" || typeDefense == "roche")
		String_t* L_246 = ___typeDefense1;
		bool L_247;
		L_247 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_246, _stringLiteralB6AF2E06FCCD58DA89B7BCD8119A3BFDC03285EF, NULL);
		if (L_247)
		{
			goto IL_07af;
		}
	}
	{
		String_t* L_248 = ___typeDefense1;
		bool L_249;
		L_249 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_248, _stringLiteralEDDFC548A57FAB7C14CA7A86AF85A333F909865D, NULL);
		if (!L_249)
		{
			goto IL_07b5;
		}
	}

IL_07af:
	{
		// return "fort";
		return _stringLiteral8BF1A130D782F57F44234B152D673BC5D8C71C12;
	}

IL_07b5:
	{
		// return "normal";
		return _stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3;
	}

IL_07bb:
	{
		// return "Manquant dans la table des types";
		return _stringLiteralDA3E6369954B3EFCF5E8CA41E9B54A7B0C3F71C4;
	}
}
// System.String TableType::ResultatTableType(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TableType_ResultatTableType_m125564E0AB6BCC1EF9580FC646949A19E43E225E (String_t* ___typeAttaque10, String_t* ___typeAttaque21, String_t* ___typeDefense12, String_t* ___typeDefense23, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B6D1EACB61B10A0E3503E4C7DD4EECB230E0D66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BF1A130D782F57F44234B152D673BC5D8C71C12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA088E5330059BFBF9D7BC392C2F4C0FA85912E3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_4;
	memset((&V_4), 0, sizeof(V_4));
	String_t* V_5 = NULL;
	{
		// List<string> result = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		// result.Add(TableDesTypes(typeAttaque1, typeDefense1));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = L_0;
		String_t* L_2 = ___typeAttaque10;
		String_t* L_3 = ___typeDefense12;
		String_t* L_4;
		L_4 = TableType_TableDesTypes_mBB42E30C3762DEEC37A2C97C873F30C23B03EFF3(L_2, L_3, NULL);
		NullCheck(L_1);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_1, L_4, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// result.Add(TableDesTypes(typeAttaque1, typeDefense2));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = L_1;
		String_t* L_6 = ___typeAttaque10;
		String_t* L_7 = ___typeDefense23;
		String_t* L_8;
		L_8 = TableType_TableDesTypes_mBB42E30C3762DEEC37A2C97C873F30C23B03EFF3(L_6, L_7, NULL);
		NullCheck(L_5);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_5, L_8, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// result.Add(TableDesTypes(typeAttaque2, typeDefense1));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = L_5;
		String_t* L_10 = ___typeAttaque21;
		String_t* L_11 = ___typeDefense12;
		String_t* L_12;
		L_12 = TableType_TableDesTypes_mBB42E30C3762DEEC37A2C97C873F30C23B03EFF3(L_10, L_11, NULL);
		NullCheck(L_9);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_9, L_12, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// result.Add(TableDesTypes(typeAttaque2, typeDefense2));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = L_9;
		String_t* L_14 = ___typeAttaque21;
		String_t* L_15 = ___typeDefense23;
		String_t* L_16;
		L_16 = TableType_TableDesTypes_mBB42E30C3762DEEC37A2C97C873F30C23B03EFF3(L_14, L_15, NULL);
		NullCheck(L_13);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_13, L_16, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// int faible = 0;
		V_0 = 0;
		// int aucun = 0;
		V_1 = 0;
		// int normal = 0;
		V_2 = 0;
		// int fort = 0;
		V_3 = 0;
		// foreach (string currentResult in result)
		NullCheck(L_13);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_17;
		L_17 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_13, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_4 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ac:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_4), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a1_1;
			}

IL_004a_1:
			{
				// foreach (string currentResult in result)
				String_t* L_18;
				L_18 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_4), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				V_5 = L_18;
				// if (currentResult == "faible")
				String_t* L_19 = V_5;
				bool L_20;
				L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteralDA088E5330059BFBF9D7BC392C2F4C0FA85912E3, NULL);
				if (!L_20)
				{
					goto IL_0067_1;
				}
			}
			{
				// faible++;
				int32_t L_21 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
				goto IL_00a1_1;
			}

IL_0067_1:
			{
				// else if (currentResult == "fort")
				String_t* L_22 = V_5;
				bool L_23;
				L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral8BF1A130D782F57F44234B152D673BC5D8C71C12, NULL);
				if (!L_23)
				{
					goto IL_007b_1;
				}
			}
			{
				// fort++;
				int32_t L_24 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
				goto IL_00a1_1;
			}

IL_007b_1:
			{
				// else if (currentResult == "aucun")
				String_t* L_25 = V_5;
				bool L_26;
				L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral0B6D1EACB61B10A0E3503E4C7DD4EECB230E0D66, NULL);
				if (!L_26)
				{
					goto IL_008f_1;
				}
			}
			{
				// aucun++;
				int32_t L_27 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_27, 1));
				goto IL_00a1_1;
			}

IL_008f_1:
			{
				// else if (currentResult == "normal")
				String_t* L_28 = V_5;
				bool L_29;
				L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3, NULL);
				if (!L_29)
				{
					goto IL_00a1_1;
				}
			}
			{
				// normal++;
				int32_t L_30 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_30, 1));
			}

IL_00a1_1:
			{
				// foreach (string currentResult in result)
				bool L_31;
				L_31 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_4), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_31)
				{
					goto IL_004a_1;
				}
			}
			{
				goto IL_00ba;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ba:
	{
		// if(aucun > 0)
		int32_t L_32 = V_1;
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_00c4;
		}
	}
	{
		// return "aucun";
		return _stringLiteral0B6D1EACB61B10A0E3503E4C7DD4EECB230E0D66;
	}

IL_00c4:
	{
		// if(fort > faible && fort >= normal)
		int32_t L_33 = V_3;
		int32_t L_34 = V_0;
		if ((((int32_t)L_33) <= ((int32_t)L_34)))
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_35 = V_3;
		int32_t L_36 = V_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00d2;
		}
	}
	{
		// return "fort";
		return _stringLiteral8BF1A130D782F57F44234B152D673BC5D8C71C12;
	}

IL_00d2:
	{
		// if (faible > fort && faible >= normal)
		int32_t L_37 = V_0;
		int32_t L_38 = V_3;
		if ((((int32_t)L_37) <= ((int32_t)L_38)))
		{
			goto IL_00e0;
		}
	}
	{
		int32_t L_39 = V_0;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_00e0;
		}
	}
	{
		// return "faible";
		return _stringLiteralDA088E5330059BFBF9D7BC392C2F4C0FA85912E3;
	}

IL_00e0:
	{
		// return "normal";
		return _stringLiteralCCFF8CC980F0024DC5B3F925194A35C0FA0231C3;
	}
}
// UnityEngine.Sprite TableType::SpriteForType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* TableType_SpriteForType_mF5F2224C5A7E6A6A4F27268F91A008ACF3EA58A7 (TableType_t4F8D447FAEEA8C0F3609B4BD58E1EE94D88A7E09* __this, String_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC2944E5125933569A7157B7C90399BEF9C44313C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m779FA5FCE005ABE1D7E9C78A5B14684BA7FA864A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m91DC3318511183BDAADD91C8791135AE5A2B71ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m287A2DC6A1FC1EF8920E8244CF0BFC04723260F3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD2EB3DD5FD266C0F9F7DE350E94815F08A9F9324 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_1 = NULL;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_2 = NULL;
	{
		// foreach(Sprite currentSprite in listSpritesForType)
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_0 = __this->___listSpritesForType_4;
		NullCheck(L_0);
		Enumerator_tD2EB3DD5FD266C0F9F7DE350E94815F08A9F9324 L_1;
		L_1 = List_1_GetEnumerator_m287A2DC6A1FC1EF8920E8244CF0BFC04723260F3(L_0, List_1_GetEnumerator_m287A2DC6A1FC1EF8920E8244CF0BFC04723260F3_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC2944E5125933569A7157B7C90399BEF9C44313C((&V_0), Enumerator_Dispose_mC2944E5125933569A7157B7C90399BEF9C44313C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0028_1;
			}

IL_000e_1:
			{
				// foreach(Sprite currentSprite in listSpritesForType)
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2;
				L_2 = Enumerator_get_Current_m91DC3318511183BDAADD91C8791135AE5A2B71ED_inline((&V_0), Enumerator_get_Current_m91DC3318511183BDAADD91C8791135AE5A2B71ED_RuntimeMethod_var);
				V_1 = L_2;
				// if (currentSprite.name == type)
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = V_1;
				NullCheck(L_3);
				String_t* L_4;
				L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
				String_t* L_5 = ___type0;
				bool L_6;
				L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, L_5, NULL);
				if (!L_6)
				{
					goto IL_0028_1;
				}
			}
			{
				// return currentSprite;
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7 = V_1;
				V_2 = L_7;
				goto IL_0043;
			}

IL_0028_1:
			{
				// foreach(Sprite currentSprite in listSpritesForType)
				bool L_8;
				L_8 = Enumerator_MoveNext_m779FA5FCE005ABE1D7E9C78A5B14684BA7FA864A((&V_0), Enumerator_MoveNext_m779FA5FCE005ABE1D7E9C78A5B14684BA7FA864A_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0041;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		// return null;
		return (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)NULL;
	}

IL_0043:
	{
		// }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_9 = V_2;
		return L_9;
	}
}
// System.Void TableType::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableType__ctor_m0E88C24B6172FA4896F1C5BB13A07F4D8CB961DA (TableType_t4F8D447FAEEA8C0F3609B4BD58E1EE94D88A7E09* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PopUpInfo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopUpInfo_Start_mE01A70791FEB33FCE5F37CF22E1E98BC24BCE6FA (PopUpInfo_tAD1073FE05EFD0F458EB7944B5951032F236EA2E* __this, const RuntimeMethod* method) 
{
	{
		// popUpPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___popUpPanel_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PopUpInfo::FermerPopUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopUpInfo_FermerPopUp_mCA7E8B1584D9F1061A514164CF31463A82C6B3B7 (PopUpInfo_tAD1073FE05EFD0F458EB7944B5951032F236EA2E* __this, const RuntimeMethod* method) 
{
	{
		// popUpPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___popUpPanel_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PopUpInfo::OuvrirPopUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopUpInfo_OuvrirPopUp_mF79929E8FBCF1CD0107C83AA3469613A04B12F83 (PopUpInfo_tAD1073FE05EFD0F458EB7944B5951032F236EA2E* __this, const RuntimeMethod* method) 
{
	{
		// popUpPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___popUpPanel_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// StartCoroutine(fermetureAuto());
		RuntimeObject* L_1;
		L_1 = PopUpInfo_fermetureAuto_m759C8805988B47E1B05D29296BB08214B1C26F5C(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void PopUpInfo::RemplirTextePupUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopUpInfo_RemplirTextePupUp_m10A0667C738B9CE836A3A34011812F542273947E (PopUpInfo_tAD1073FE05EFD0F458EB7944B5951032F236EA2E* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// popUpPanel.transform.GetChild(1).transform.GetChild(0).GetComponent<TextMeshProUGUI>().text = text;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___popUpPanel_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_1, 1, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_3, 0, NULL);
		NullCheck(L_4);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5;
		L_5 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(L_4, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		String_t* L_6 = ___text0;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_6);
		// }
		return;
	}
}
// System.Collections.IEnumerator PopUpInfo::fermetureAuto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PopUpInfo_fermetureAuto_m759C8805988B47E1B05D29296BB08214B1C26F5C (PopUpInfo_tAD1073FE05EFD0F458EB7944B5951032F236EA2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CfermetureAutoU3Ed__6_t7EE26AD7B428A6897545728EB4FF4C3899DDC1B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CfermetureAutoU3Ed__6_t7EE26AD7B428A6897545728EB4FF4C3899DDC1B4* L_0 = (U3CfermetureAutoU3Ed__6_t7EE26AD7B428A6897545728EB4FF4C3899DDC1B4*)il2cpp_codegen_object_new(U3CfermetureAutoU3Ed__6_t7EE26AD7B428A6897545728EB4FF4C3899DDC1B4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CfermetureAutoU3Ed__6__ctor_mE7FCF885ED8D412674B1E8D0C211962AACC25EB7(L_0, 0, NULL);
		U3CfermetureAutoU3Ed__6_t7EE26AD7B428A6897545728EB4FF4C3899DDC1B4* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void PopUpInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopUpInfo__ctor_m6F865A177281F210C48D9EF9ADFC316CFCFF88A7 (PopUpInfo_tAD1073FE05EFD0F458EB7944B5951032F236EA2E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PopUpInfo/<fermetureAuto>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CfermetureAutoU3Ed__6__ctor_mE7FCF885ED8D412674B1E8D0C211962AACC25EB7 (U3CfermetureAutoU3Ed__6_t7EE26AD7B428A6897545728EB4FF4C3899DDC1B4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PopUpInfo/<fermetureAuto>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CfermetureAutoU3Ed__6_System_IDisposable_Dispose_m3D53FD461177B5AC951771E661E1BBC7911F2D6D (U3CfermetureAutoU3Ed__6_t7EE26AD7B428A6897545728EB4FF4C3899DDC1B4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PopUpInfo/<fermetureAuto>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CfermetureAutoU3Ed__6_MoveNext_m24BBF6BE82ACD30E3FE4E116C1B38EB36E3F8293 (U3CfermetureAutoU3Ed__6_t7EE26AD7B428A6897545728EB4FF4C3899DDC1B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PopUpInfo_tAD1073FE05EFD0F458EB7944B5951032F236EA2E* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PopUpInfo_tAD1073FE05EFD0F458EB7944B5951032F236EA2E* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// popUpPanel.SetActive(false);
		PopUpInfo_tAD1073FE05EFD0F458EB7944B5951032F236EA2E* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___popUpPanel_4;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object PopUpInfo/<fermetureAuto>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CfermetureAutoU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m73F70179EF58B105457CAFC2C860E72E0D5141F0 (U3CfermetureAutoU3Ed__6_t7EE26AD7B428A6897545728EB4FF4C3899DDC1B4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PopUpInfo/<fermetureAuto>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CfermetureAutoU3Ed__6_System_Collections_IEnumerator_Reset_mFE3907FB3D4B8ED68AB2E783860E05D7A3A24A4D (U3CfermetureAutoU3Ed__6_t7EE26AD7B428A6897545728EB4FF4C3899DDC1B4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CfermetureAutoU3Ed__6_System_Collections_IEnumerator_Reset_mFE3907FB3D4B8ED68AB2E783860E05D7A3A24A4D_RuntimeMethod_var)));
	}
}
// System.Object PopUpInfo/<fermetureAuto>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CfermetureAutoU3Ed__6_System_Collections_IEnumerator_get_Current_mF72F29CB8AB9DEE6967C9EBCD7F1D33EBBE5D80F (U3CfermetureAutoU3Ed__6_t7EE26AD7B428A6897545728EB4FF4C3899DDC1B4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SaveData3::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData3_Start_mD91C856EE01D755F9DCFD9047CCB3D27DF632E5A (SaveData3_t6A98FFD6760807C16AD260C3E9C335927F7EFC47* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveData3_t6A98FFD6760807C16AD260C3E9C335927F7EFC47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (onContinue)
		bool L_0 = ((SaveData3_t6A98FFD6760807C16AD260C3E9C335927F7EFC47_StaticFields*)il2cpp_codegen_static_fields_for(SaveData3_t6A98FFD6760807C16AD260C3E9C335927F7EFC47_il2cpp_TypeInfo_var))->___onContinue_4;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// LoadToJson();
		SaveData3_LoadToJson_m73D5DDDBBB6D47E133AEA1911040E150BF053C55(__this, NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void SaveData3::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData3_Update_m1B9D926C69BA02CD6EF46E4273BF4CD4293C8FC6 (SaveData3_t6A98FFD6760807C16AD260C3E9C335927F7EFC47* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SaveData3::SaveAllData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData3_SaveAllData_mA99FD44305E010915F80C0642D759B333B3F4254 (SaveData3_t6A98FFD6760807C16AD260C3E9C335927F7EFC47* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Data_tD68044ADE8612868F3B424B065920F50C65B5CCE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7FCD69D0014C21BC22D8CCDA59CFB4ACA7CD6600_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* V_1 = NULL;
	int32_t V_2 = 0;
	Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* V_3 = NULL;
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_4;
	memset((&V_4), 0, sizeof(V_4));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	{
		// dataForSave = new Data();
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_0 = (Data_tD68044ADE8612868F3B424B065920F50C65B5CCE*)il2cpp_codegen_object_new(Data_tD68044ADE8612868F3B424B065920F50C65B5CCE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Data__ctor_mAD0738081D5922E1E6C75A516F6564FBB8468214(L_0, NULL);
		__this->___dataForSave_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataForSave_5), (void*)L_0);
		// dataForSave.coin = player.coin;
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_1 = __this->___dataForSave_5;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_2 = __this->___player_7;
		NullCheck(L_2);
		int32_t L_3 = L_2->___coin_15;
		NullCheck(L_1);
		L_1->___coin_0 = L_3;
		// dataForSave.multiExp = true;
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_4 = __this->___dataForSave_5;
		NullCheck(L_4);
		L_4->___multiExp_1 = (bool)1;
		// for(int i = 0; i<player.playerPokemon.Count; i++)
		V_0 = 0;
		goto IL_0159;
	}

IL_0034:
	{
		// Poke pokeOut = new Poke();
		Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_5 = (Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7*)il2cpp_codegen_object_new(Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Poke__ctor_mE57B7C9505F53F884591555068C6B0383D596E86(L_5, NULL);
		V_1 = L_5;
		// pokeOut.id = player.playerPokemon[i].GetComponent<IncrementPrefabsWithScriptableObject>().pokemon.id;
		Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_6 = V_1;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_7 = __this->___player_7;
		NullCheck(L_7);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = L_7->___playerPokemon_8;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_8, L_9, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_10);
		IncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7* L_11;
		L_11 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C(L_10, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C_RuntimeMethod_var);
		NullCheck(L_11);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_12 = L_11->___pokemon_4;
		NullCheck(L_12);
		int32_t L_13 = L_12->___id_4;
		NullCheck(L_6);
		L_6->___id_0 = L_13;
		// pokeOut.namePoke = player.playerPokemon[i].GetComponent<IncrementPrefabsWithScriptableObject>().pokemon.namePoke;
		Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_14 = V_1;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_15 = __this->___player_7;
		NullCheck(L_15);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_16 = L_15->___playerPokemon_8;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_16, L_17, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_18);
		IncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7* L_19;
		L_19 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C(L_18, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C_RuntimeMethod_var);
		NullCheck(L_19);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_20 = L_19->___pokemon_4;
		NullCheck(L_20);
		String_t* L_21 = L_20->___namePoke_7;
		NullCheck(L_14);
		L_14->___namePoke_1 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___namePoke_1), (void*)L_21);
		// pokeOut.lvl = player.playerPokemon[i].GetComponent<IncrementPrefabsWithScriptableObject>().pokemon.lvl;
		Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_22 = V_1;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_23 = __this->___player_7;
		NullCheck(L_23);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_24 = L_23->___playerPokemon_8;
		int32_t L_25 = V_0;
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_24, L_25, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_26);
		IncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7* L_27;
		L_27 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C(L_26, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C_RuntimeMethod_var);
		NullCheck(L_27);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_28 = L_27->___pokemon_4;
		NullCheck(L_28);
		int32_t L_29 = L_28->___lvl_5;
		NullCheck(L_22);
		L_22->___lvl_2 = L_29;
		// pokeOut.damage = player.playerPokemon[i].GetComponent<IncrementPrefabsWithScriptableObject>().pokemon.damage;
		Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_30 = V_1;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_31 = __this->___player_7;
		NullCheck(L_31);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_32 = L_31->___playerPokemon_8;
		int32_t L_33 = V_0;
		NullCheck(L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_32, L_33, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_34);
		IncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7* L_35;
		L_35 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C(L_34, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C_RuntimeMethod_var);
		NullCheck(L_35);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_36 = L_35->___pokemon_4;
		NullCheck(L_36);
		int32_t L_37 = L_36->___damage_6;
		NullCheck(L_30);
		L_30->___damage_3 = L_37;
		// pokeOut.xp = player.playerPokemon[i].GetComponent<IncrementPrefabsWithScriptableObject>().pokemon.xp;
		Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_38 = V_1;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_39 = __this->___player_7;
		NullCheck(L_39);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_40 = L_39->___playerPokemon_8;
		int32_t L_41 = V_0;
		NullCheck(L_40);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42;
		L_42 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_40, L_41, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_42);
		IncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7* L_43;
		L_43 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C(L_42, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C_RuntimeMethod_var);
		NullCheck(L_43);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_44 = L_43->___pokemon_4;
		NullCheck(L_44);
		int32_t L_45 = L_44->___xp_9;
		NullCheck(L_38);
		L_38->___xp_4 = L_45;
		// pokeOut.maxXp = player.playerPokemon[i].GetComponent<IncrementPrefabsWithScriptableObject>().pokemon.maxXp;
		Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_46 = V_1;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_47 = __this->___player_7;
		NullCheck(L_47);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_48 = L_47->___playerPokemon_8;
		int32_t L_49 = V_0;
		NullCheck(L_48);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50;
		L_50 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_48, L_49, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_50);
		IncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7* L_51;
		L_51 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C(L_50, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C_RuntimeMethod_var);
		NullCheck(L_51);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_52 = L_51->___pokemon_4;
		NullCheck(L_52);
		int32_t L_53 = L_52->___maxXp_10;
		NullCheck(L_46);
		L_46->___maxXp_5 = L_53;
		// pokeOut.isStarter = player.playerPokemon[i].GetComponent<IncrementPrefabsWithScriptableObject>().pokemon.isStarter;
		Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_54 = V_1;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_55 = __this->___player_7;
		NullCheck(L_55);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_56 = L_55->___playerPokemon_8;
		int32_t L_57 = V_0;
		NullCheck(L_56);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58;
		L_58 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_56, L_57, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_58);
		IncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7* L_59;
		L_59 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C(L_58, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C_RuntimeMethod_var);
		NullCheck(L_59);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_60 = L_59->___pokemon_4;
		NullCheck(L_60);
		bool L_61 = L_60->___isStarter_11;
		NullCheck(L_54);
		L_54->___isStarter_6 = L_61;
		// dataForSave.equipe.Add(pokeOut);
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_62 = __this->___dataForSave_5;
		NullCheck(L_62);
		List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708* L_63 = L_62->___equipe_2;
		Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_64 = V_1;
		NullCheck(L_63);
		List_1_Add_m7FCD69D0014C21BC22D8CCDA59CFB4ACA7CD6600_inline(L_63, L_64, List_1_Add_m7FCD69D0014C21BC22D8CCDA59CFB4ACA7CD6600_RuntimeMethod_var);
		// for(int i = 0; i<player.playerPokemon.Count; i++)
		int32_t L_65 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0159:
	{
		// for(int i = 0; i<player.playerPokemon.Count; i++)
		int32_t L_66 = V_0;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_67 = __this->___player_7;
		NullCheck(L_67);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_68 = L_67->___playerPokemon_8;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_68, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_66) < ((int32_t)L_69)))
		{
			goto IL_0034;
		}
	}
	{
		// for (int i = 0; i < player.storagePokemon.Count; i++)
		V_2 = 0;
		goto IL_029b;
	}

IL_0176:
	{
		// Poke pokeOut = new Poke();
		Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_70 = (Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7*)il2cpp_codegen_object_new(Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7_il2cpp_TypeInfo_var);
		NullCheck(L_70);
		Poke__ctor_mE57B7C9505F53F884591555068C6B0383D596E86(L_70, NULL);
		V_3 = L_70;
		// pokeOut.id = player.storagePokemon[i].GetComponent<IncrementPrefabsWithScriptableObjectStorage>().pokemon.id;
		Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_71 = V_3;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_72 = __this->___player_7;
		NullCheck(L_72);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_73 = L_72->___storagePokemon_19;
		int32_t L_74 = V_2;
		NullCheck(L_73);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_75;
		L_75 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_73, L_74, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_75);
		IncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3* L_76;
		L_76 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576(L_75, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576_RuntimeMethod_var);
		NullCheck(L_76);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_77 = L_76->___pokemon_4;
		NullCheck(L_77);
		int32_t L_78 = L_77->___id_4;
		NullCheck(L_71);
		L_71->___id_0 = L_78;
		// pokeOut.namePoke = player.storagePokemon[i].GetComponent<IncrementPrefabsWithScriptableObjectStorage>().pokemon.namePoke;
		Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_79 = V_3;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_80 = __this->___player_7;
		NullCheck(L_80);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_81 = L_80->___storagePokemon_19;
		int32_t L_82 = V_2;
		NullCheck(L_81);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_83;
		L_83 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_81, L_82, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_83);
		IncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3* L_84;
		L_84 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576(L_83, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576_RuntimeMethod_var);
		NullCheck(L_84);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_85 = L_84->___pokemon_4;
		NullCheck(L_85);
		String_t* L_86 = L_85->___namePoke_7;
		NullCheck(L_79);
		L_79->___namePoke_1 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&L_79->___namePoke_1), (void*)L_86);
		// pokeOut.lvl = player.storagePokemon[i].GetComponent<IncrementPrefabsWithScriptableObjectStorage>().pokemon.lvl;
		Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_87 = V_3;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_88 = __this->___player_7;
		NullCheck(L_88);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_89 = L_88->___storagePokemon_19;
		int32_t L_90 = V_2;
		NullCheck(L_89);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_91;
		L_91 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_89, L_90, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_91);
		IncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3* L_92;
		L_92 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576(L_91, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576_RuntimeMethod_var);
		NullCheck(L_92);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_93 = L_92->___pokemon_4;
		NullCheck(L_93);
		int32_t L_94 = L_93->___lvl_5;
		NullCheck(L_87);
		L_87->___lvl_2 = L_94;
		// pokeOut.damage = player.storagePokemon[i].GetComponent<IncrementPrefabsWithScriptableObjectStorage>().pokemon.damage;
		Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_95 = V_3;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_96 = __this->___player_7;
		NullCheck(L_96);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_97 = L_96->___storagePokemon_19;
		int32_t L_98 = V_2;
		NullCheck(L_97);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_99;
		L_99 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_97, L_98, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_99);
		IncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3* L_100;
		L_100 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576(L_99, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576_RuntimeMethod_var);
		NullCheck(L_100);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_101 = L_100->___pokemon_4;
		NullCheck(L_101);
		int32_t L_102 = L_101->___damage_6;
		NullCheck(L_95);
		L_95->___damage_3 = L_102;
		// pokeOut.xp = player.storagePokemon[i].GetComponent<IncrementPrefabsWithScriptableObjectStorage>().pokemon.xp;
		Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_103 = V_3;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_104 = __this->___player_7;
		NullCheck(L_104);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_105 = L_104->___storagePokemon_19;
		int32_t L_106 = V_2;
		NullCheck(L_105);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_107;
		L_107 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_105, L_106, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_107);
		IncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3* L_108;
		L_108 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576(L_107, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576_RuntimeMethod_var);
		NullCheck(L_108);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_109 = L_108->___pokemon_4;
		NullCheck(L_109);
		int32_t L_110 = L_109->___xp_9;
		NullCheck(L_103);
		L_103->___xp_4 = L_110;
		// pokeOut.maxXp = player.storagePokemon[i].GetComponent<IncrementPrefabsWithScriptableObjectStorage>().pokemon.maxXp;
		Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_111 = V_3;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_112 = __this->___player_7;
		NullCheck(L_112);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_113 = L_112->___storagePokemon_19;
		int32_t L_114 = V_2;
		NullCheck(L_113);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_115;
		L_115 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_113, L_114, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_115);
		IncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3* L_116;
		L_116 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576(L_115, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576_RuntimeMethod_var);
		NullCheck(L_116);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_117 = L_116->___pokemon_4;
		NullCheck(L_117);
		int32_t L_118 = L_117->___maxXp_10;
		NullCheck(L_111);
		L_111->___maxXp_5 = L_118;
		// pokeOut.isStarter = player.storagePokemon[i].GetComponent<IncrementPrefabsWithScriptableObjectStorage>().pokemon.isStarter;
		Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_119 = V_3;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_120 = __this->___player_7;
		NullCheck(L_120);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_121 = L_120->___storagePokemon_19;
		int32_t L_122 = V_2;
		NullCheck(L_121);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_123;
		L_123 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_121, L_122, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_123);
		IncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3* L_124;
		L_124 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576(L_123, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576_RuntimeMethod_var);
		NullCheck(L_124);
		PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_125 = L_124->___pokemon_4;
		NullCheck(L_125);
		bool L_126 = L_125->___isStarter_11;
		NullCheck(L_119);
		L_119->___isStarter_6 = L_126;
		// dataForSave.stockage.Add(pokeOut);
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_127 = __this->___dataForSave_5;
		NullCheck(L_127);
		List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708* L_128 = L_127->___stockage_3;
		Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_129 = V_3;
		NullCheck(L_128);
		List_1_Add_m7FCD69D0014C21BC22D8CCDA59CFB4ACA7CD6600_inline(L_128, L_129, List_1_Add_m7FCD69D0014C21BC22D8CCDA59CFB4ACA7CD6600_RuntimeMethod_var);
		// for (int i = 0; i < player.storagePokemon.Count; i++)
		int32_t L_130 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_130, 1));
	}

IL_029b:
	{
		// for (int i = 0; i < player.storagePokemon.Count; i++)
		int32_t L_131 = V_2;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_132 = __this->___player_7;
		NullCheck(L_132);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_133 = L_132->___storagePokemon_19;
		NullCheck(L_133);
		int32_t L_134;
		L_134 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_133, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_131) < ((int32_t)L_134)))
		{
			goto IL_0176;
		}
	}
	{
		// foreach (GameObject currentBadgePlayerObtain in enemy.badgePlayerObtain)
		EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_135 = __this->___enemy_8;
		NullCheck(L_135);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_136 = L_135->___badgePlayerObtain_23;
		NullCheck(L_136);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_137;
		L_137 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_136, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_4 = L_137;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02f0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_4), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_02e5_1;
			}

IL_02c5_1:
			{
				// foreach (GameObject currentBadgePlayerObtain in enemy.badgePlayerObtain)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_138;
				L_138 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_4), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_5 = L_138;
				// dataForSave.badgePlayerObtainName.Add(currentBadgePlayerObtain.name);
				Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_139 = __this->___dataForSave_5;
				NullCheck(L_139);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_140 = L_139->___badgePlayerObtainName_5;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_141 = V_5;
				NullCheck(L_141);
				String_t* L_142;
				L_142 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_141, NULL);
				NullCheck(L_140);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_140, L_142, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			}

IL_02e5_1:
			{
				// foreach (GameObject currentBadgePlayerObtain in enemy.badgePlayerObtain)
				bool L_143;
				L_143 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_4), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_143)
				{
					goto IL_02c5_1;
				}
			}
			{
				goto IL_02fe;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02fe:
	{
		// }
		return;
	}
}
// System.Void SaveData3::LoadAllData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData3_LoadAllData_m1A3EFC32504D2E997F8F2CC7FB5CF707C0F09AC5 (SaveData3_t6A98FFD6760807C16AD260C3E9C335927F7EFC47* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m50B2B076888A333E177402056C615E5979B75375_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	int32_t V_3 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// player.coin = dataForLoad.coin;
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_0 = __this->___player_7;
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_1 = __this->___dataForLoad_6;
		NullCheck(L_1);
		int32_t L_2 = L_1->___coin_0;
		NullCheck(L_0);
		L_0->___coin_15 = L_2;
		// player.RefreshCoinUi();
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_3 = __this->___player_7;
		NullCheck(L_3);
		PlayerCore_RefreshCoinUi_mFDA27DBF35C4FBC1C71FB09971759D88296BC99B(L_3, NULL);
		// player.playerPokemon = new List<GameObject>();
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_4 = __this->___player_7;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_5, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->___playerPokemon_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___playerPokemon_8), (void*)L_5);
		// player.ClearUIPokemon();
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_6 = __this->___player_7;
		NullCheck(L_6);
		PlayerCore_ClearUIPokemon_mAE963C708560048022FBAD0399A46AC6F5D15B72(L_6, NULL);
		// for (int i = 0; i < dataForLoad.equipe.Count; i++)
		V_0 = 0;
		goto IL_01d0;
	}

IL_0043:
	{
		// foreach(GameObject currentPrefab in allPrefabPokemon)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = __this->___allPrefabPokemon_9;
		NullCheck(L_7);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_8;
		L_8 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_7, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_1 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01be:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_1), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01b0_1;
			}

IL_0054_1:
			{
				// foreach(GameObject currentPrefab in allPrefabPokemon)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
				L_9 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_1), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_2 = L_9;
				// if (currentPrefab.name == dataForLoad.equipe[i].namePoke)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_2;
				NullCheck(L_10);
				String_t* L_11;
				L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
				Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_12 = __this->___dataForLoad_6;
				NullCheck(L_12);
				List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708* L_13 = L_12->___equipe_2;
				int32_t L_14 = V_0;
				NullCheck(L_13);
				Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_15;
				L_15 = List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356(L_13, L_14, List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356_RuntimeMethod_var);
				NullCheck(L_15);
				String_t* L_16 = L_15->___namePoke_1;
				bool L_17;
				L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, L_16, NULL);
				if (!L_17)
				{
					goto IL_01b0_1;
				}
			}
			{
				// currentPrefab.GetComponent<IncrementPrefabsWithScriptableObject>().pokemon.id = dataForLoad.equipe[i].id;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = V_2;
				NullCheck(L_18);
				IncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7* L_19;
				L_19 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C(L_18, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C_RuntimeMethod_var);
				NullCheck(L_19);
				PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_20 = L_19->___pokemon_4;
				Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_21 = __this->___dataForLoad_6;
				NullCheck(L_21);
				List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708* L_22 = L_21->___equipe_2;
				int32_t L_23 = V_0;
				NullCheck(L_22);
				Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_24;
				L_24 = List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356(L_22, L_23, List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356_RuntimeMethod_var);
				NullCheck(L_24);
				int32_t L_25 = L_24->___id_0;
				NullCheck(L_20);
				L_20->___id_4 = L_25;
				// currentPrefab.GetComponent<IncrementPrefabsWithScriptableObject>().pokemon.namePoke = dataForLoad.equipe[i].namePoke;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_2;
				NullCheck(L_26);
				IncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7* L_27;
				L_27 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C(L_26, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C_RuntimeMethod_var);
				NullCheck(L_27);
				PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_28 = L_27->___pokemon_4;
				Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_29 = __this->___dataForLoad_6;
				NullCheck(L_29);
				List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708* L_30 = L_29->___equipe_2;
				int32_t L_31 = V_0;
				NullCheck(L_30);
				Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_32;
				L_32 = List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356(L_30, L_31, List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356_RuntimeMethod_var);
				NullCheck(L_32);
				String_t* L_33 = L_32->___namePoke_1;
				NullCheck(L_28);
				L_28->___namePoke_7 = L_33;
				Il2CppCodeGenWriteBarrier((void**)(&L_28->___namePoke_7), (void*)L_33);
				// currentPrefab.GetComponent<IncrementPrefabsWithScriptableObject>().pokemon.lvl = dataForLoad.equipe[i].lvl;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = V_2;
				NullCheck(L_34);
				IncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7* L_35;
				L_35 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C(L_34, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C_RuntimeMethod_var);
				NullCheck(L_35);
				PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_36 = L_35->___pokemon_4;
				Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_37 = __this->___dataForLoad_6;
				NullCheck(L_37);
				List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708* L_38 = L_37->___equipe_2;
				int32_t L_39 = V_0;
				NullCheck(L_38);
				Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_40;
				L_40 = List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356(L_38, L_39, List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356_RuntimeMethod_var);
				NullCheck(L_40);
				int32_t L_41 = L_40->___lvl_2;
				NullCheck(L_36);
				L_36->___lvl_5 = L_41;
				// currentPrefab.GetComponent<IncrementPrefabsWithScriptableObject>().pokemon.damage = dataForLoad.equipe[i].damage;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = V_2;
				NullCheck(L_42);
				IncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7* L_43;
				L_43 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C(L_42, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C_RuntimeMethod_var);
				NullCheck(L_43);
				PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_44 = L_43->___pokemon_4;
				Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_45 = __this->___dataForLoad_6;
				NullCheck(L_45);
				List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708* L_46 = L_45->___equipe_2;
				int32_t L_47 = V_0;
				NullCheck(L_46);
				Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_48;
				L_48 = List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356(L_46, L_47, List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356_RuntimeMethod_var);
				NullCheck(L_48);
				int32_t L_49 = L_48->___damage_3;
				NullCheck(L_44);
				L_44->___damage_6 = L_49;
				// currentPrefab.GetComponent<IncrementPrefabsWithScriptableObject>().pokemon.xp = dataForLoad.equipe[i].xp;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = V_2;
				NullCheck(L_50);
				IncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7* L_51;
				L_51 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C(L_50, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C_RuntimeMethod_var);
				NullCheck(L_51);
				PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_52 = L_51->___pokemon_4;
				Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_53 = __this->___dataForLoad_6;
				NullCheck(L_53);
				List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708* L_54 = L_53->___equipe_2;
				int32_t L_55 = V_0;
				NullCheck(L_54);
				Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_56;
				L_56 = List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356(L_54, L_55, List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356_RuntimeMethod_var);
				NullCheck(L_56);
				int32_t L_57 = L_56->___xp_4;
				NullCheck(L_52);
				L_52->___xp_9 = L_57;
				// currentPrefab.GetComponent<IncrementPrefabsWithScriptableObject>().pokemon.maxXp = dataForLoad.equipe[i].maxXp;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = V_2;
				NullCheck(L_58);
				IncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7* L_59;
				L_59 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C(L_58, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C_RuntimeMethod_var);
				NullCheck(L_59);
				PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_60 = L_59->___pokemon_4;
				Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_61 = __this->___dataForLoad_6;
				NullCheck(L_61);
				List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708* L_62 = L_61->___equipe_2;
				int32_t L_63 = V_0;
				NullCheck(L_62);
				Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_64;
				L_64 = List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356(L_62, L_63, List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356_RuntimeMethod_var);
				NullCheck(L_64);
				int32_t L_65 = L_64->___maxXp_5;
				NullCheck(L_60);
				L_60->___maxXp_10 = L_65;
				// currentPrefab.GetComponent<IncrementPrefabsWithScriptableObject>().pokemon.isStarter = dataForLoad.equipe[i].isStarter;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66 = V_2;
				NullCheck(L_66);
				IncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7* L_67;
				L_67 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C(L_66, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C_RuntimeMethod_var);
				NullCheck(L_67);
				PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_68 = L_67->___pokemon_4;
				Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_69 = __this->___dataForLoad_6;
				NullCheck(L_69);
				List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708* L_70 = L_69->___equipe_2;
				int32_t L_71 = V_0;
				NullCheck(L_70);
				Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_72;
				L_72 = List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356(L_70, L_71, List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356_RuntimeMethod_var);
				NullCheck(L_72);
				bool L_73 = L_72->___isStarter_6;
				NullCheck(L_68);
				L_68->___isStarter_11 = L_73;
				// if (currentPrefab.GetComponent<IncrementPrefabsWithScriptableObject>().pokemon.isStarter)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_74 = V_2;
				NullCheck(L_74);
				IncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7* L_75;
				L_75 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C(L_74, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObject_t02791DD182B88441D3548C59CFFDE93E588D60B7_m95B6FE9302684CE4446BB335E4C78E37C04C505C_RuntimeMethod_var);
				NullCheck(L_75);
				PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_76 = L_75->___pokemon_4;
				NullCheck(L_76);
				bool L_77 = L_76->___isStarter_11;
				if (!L_77)
				{
					goto IL_01a4_1;
				}
			}
			{
				// PlayerCore.starter = currentPrefab;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_78 = V_2;
				((PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_il2cpp_TypeInfo_var))->___starter_4 = L_78;
				Il2CppCodeGenWriteBarrier((void**)(&((PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_il2cpp_TypeInfo_var))->___starter_4), (void*)L_78);
			}

IL_01a4_1:
			{
				// player.AddPokemonForLoad(currentPrefab);
				PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_79 = __this->___player_7;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_80 = V_2;
				NullCheck(L_79);
				PlayerCore_AddPokemonForLoad_mF76A1E7188FDCE3F95C0A6E6F5A880F3BDA4452C(L_79, L_80, NULL);
			}

IL_01b0_1:
			{
				// foreach(GameObject currentPrefab in allPrefabPokemon)
				bool L_81;
				L_81 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_1), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_81)
				{
					goto IL_0054_1;
				}
			}
			{
				goto IL_01cc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01cc:
	{
		// for (int i = 0; i < dataForLoad.equipe.Count; i++)
		int32_t L_82 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01d0:
	{
		// for (int i = 0; i < dataForLoad.equipe.Count; i++)
		int32_t L_83 = V_0;
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_84 = __this->___dataForLoad_6;
		NullCheck(L_84);
		List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708* L_85 = L_84->___equipe_2;
		NullCheck(L_85);
		int32_t L_86;
		L_86 = List_1_get_Count_m50B2B076888A333E177402056C615E5979B75375_inline(L_85, List_1_get_Count_m50B2B076888A333E177402056C615E5979B75375_RuntimeMethod_var);
		if ((((int32_t)L_83) < ((int32_t)L_86)))
		{
			goto IL_0043;
		}
	}
	{
		// player.storagePokemon = new List<GameObject>();
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_87 = __this->___player_7;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_88 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_88);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_88, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		NullCheck(L_87);
		L_87->___storagePokemon_19 = L_88;
		Il2CppCodeGenWriteBarrier((void**)(&L_87->___storagePokemon_19), (void*)L_88);
		// player.ClearUIStorage();
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_89 = __this->___player_7;
		NullCheck(L_89);
		PlayerCore_ClearUIStorage_m6B061AB2125A04B5C4A5ECD8BA24FADDC16026A8(L_89, NULL);
		// for (int i = 0; i < dataForLoad.stockage.Count; i++)
		V_3 = 0;
		goto IL_03a1;
	}

IL_0208:
	{
		// foreach (GameObject currentPrefab in allPrefabPokemonStorage)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_90 = __this->___allPrefabPokemonStorage_10;
		NullCheck(L_90);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_91;
		L_91 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_90, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_1 = L_91;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_038f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_1), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0381_1;
			}

IL_0219_1:
			{
				// foreach (GameObject currentPrefab in allPrefabPokemonStorage)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_92;
				L_92 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_1), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_4 = L_92;
				// if (currentPrefab.name == dataForLoad.stockage[i].namePoke)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_93 = V_4;
				NullCheck(L_93);
				String_t* L_94;
				L_94 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_93, NULL);
				Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_95 = __this->___dataForLoad_6;
				NullCheck(L_95);
				List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708* L_96 = L_95->___stockage_3;
				int32_t L_97 = V_3;
				NullCheck(L_96);
				Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_98;
				L_98 = List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356(L_96, L_97, List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356_RuntimeMethod_var);
				NullCheck(L_98);
				String_t* L_99 = L_98->___namePoke_1;
				bool L_100;
				L_100 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_94, L_99, NULL);
				if (!L_100)
				{
					goto IL_0381_1;
				}
			}
			{
				// currentPrefab.GetComponent<IncrementPrefabsWithScriptableObjectStorage>().pokemon.id = dataForLoad.stockage[i].id;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_101 = V_4;
				NullCheck(L_101);
				IncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3* L_102;
				L_102 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576(L_101, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576_RuntimeMethod_var);
				NullCheck(L_102);
				PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_103 = L_102->___pokemon_4;
				Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_104 = __this->___dataForLoad_6;
				NullCheck(L_104);
				List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708* L_105 = L_104->___stockage_3;
				int32_t L_106 = V_3;
				NullCheck(L_105);
				Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_107;
				L_107 = List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356(L_105, L_106, List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356_RuntimeMethod_var);
				NullCheck(L_107);
				int32_t L_108 = L_107->___id_0;
				NullCheck(L_103);
				L_103->___id_4 = L_108;
				// currentPrefab.GetComponent<IncrementPrefabsWithScriptableObjectStorage>().pokemon.namePoke = dataForLoad.stockage[i].namePoke;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_109 = V_4;
				NullCheck(L_109);
				IncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3* L_110;
				L_110 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576(L_109, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576_RuntimeMethod_var);
				NullCheck(L_110);
				PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_111 = L_110->___pokemon_4;
				Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_112 = __this->___dataForLoad_6;
				NullCheck(L_112);
				List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708* L_113 = L_112->___stockage_3;
				int32_t L_114 = V_3;
				NullCheck(L_113);
				Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_115;
				L_115 = List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356(L_113, L_114, List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356_RuntimeMethod_var);
				NullCheck(L_115);
				String_t* L_116 = L_115->___namePoke_1;
				NullCheck(L_111);
				L_111->___namePoke_7 = L_116;
				Il2CppCodeGenWriteBarrier((void**)(&L_111->___namePoke_7), (void*)L_116);
				// currentPrefab.GetComponent<IncrementPrefabsWithScriptableObjectStorage>().pokemon.lvl = dataForLoad.stockage[i].lvl;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_117 = V_4;
				NullCheck(L_117);
				IncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3* L_118;
				L_118 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576(L_117, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576_RuntimeMethod_var);
				NullCheck(L_118);
				PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_119 = L_118->___pokemon_4;
				Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_120 = __this->___dataForLoad_6;
				NullCheck(L_120);
				List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708* L_121 = L_120->___stockage_3;
				int32_t L_122 = V_3;
				NullCheck(L_121);
				Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_123;
				L_123 = List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356(L_121, L_122, List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356_RuntimeMethod_var);
				NullCheck(L_123);
				int32_t L_124 = L_123->___lvl_2;
				NullCheck(L_119);
				L_119->___lvl_5 = L_124;
				// currentPrefab.GetComponent<IncrementPrefabsWithScriptableObjectStorage>().pokemon.damage = dataForLoad.stockage[i].damage;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_125 = V_4;
				NullCheck(L_125);
				IncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3* L_126;
				L_126 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576(L_125, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576_RuntimeMethod_var);
				NullCheck(L_126);
				PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_127 = L_126->___pokemon_4;
				Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_128 = __this->___dataForLoad_6;
				NullCheck(L_128);
				List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708* L_129 = L_128->___stockage_3;
				int32_t L_130 = V_3;
				NullCheck(L_129);
				Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_131;
				L_131 = List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356(L_129, L_130, List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356_RuntimeMethod_var);
				NullCheck(L_131);
				int32_t L_132 = L_131->___damage_3;
				NullCheck(L_127);
				L_127->___damage_6 = L_132;
				// currentPrefab.GetComponent<IncrementPrefabsWithScriptableObjectStorage>().pokemon.xp = dataForLoad.stockage[i].xp;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_133 = V_4;
				NullCheck(L_133);
				IncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3* L_134;
				L_134 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576(L_133, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576_RuntimeMethod_var);
				NullCheck(L_134);
				PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_135 = L_134->___pokemon_4;
				Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_136 = __this->___dataForLoad_6;
				NullCheck(L_136);
				List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708* L_137 = L_136->___stockage_3;
				int32_t L_138 = V_3;
				NullCheck(L_137);
				Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_139;
				L_139 = List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356(L_137, L_138, List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356_RuntimeMethod_var);
				NullCheck(L_139);
				int32_t L_140 = L_139->___xp_4;
				NullCheck(L_135);
				L_135->___xp_9 = L_140;
				// currentPrefab.GetComponent<IncrementPrefabsWithScriptableObjectStorage>().pokemon.maxXp = dataForLoad.stockage[i].maxXp;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_141 = V_4;
				NullCheck(L_141);
				IncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3* L_142;
				L_142 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576(L_141, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576_RuntimeMethod_var);
				NullCheck(L_142);
				PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_143 = L_142->___pokemon_4;
				Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_144 = __this->___dataForLoad_6;
				NullCheck(L_144);
				List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708* L_145 = L_144->___stockage_3;
				int32_t L_146 = V_3;
				NullCheck(L_145);
				Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_147;
				L_147 = List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356(L_145, L_146, List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356_RuntimeMethod_var);
				NullCheck(L_147);
				int32_t L_148 = L_147->___maxXp_5;
				NullCheck(L_143);
				L_143->___maxXp_10 = L_148;
				// currentPrefab.GetComponent<IncrementPrefabsWithScriptableObjectStorage>().pokemon.isStarter = dataForLoad.stockage[i].isStarter;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_149 = V_4;
				NullCheck(L_149);
				IncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3* L_150;
				L_150 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576(L_149, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576_RuntimeMethod_var);
				NullCheck(L_150);
				PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_151 = L_150->___pokemon_4;
				Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_152 = __this->___dataForLoad_6;
				NullCheck(L_152);
				List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708* L_153 = L_152->___stockage_3;
				int32_t L_154 = V_3;
				NullCheck(L_153);
				Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* L_155;
				L_155 = List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356(L_153, L_154, List_1_get_Item_m5AFC358A34AED674374EDC803C2ED1D3D14AE356_RuntimeMethod_var);
				NullCheck(L_155);
				bool L_156 = L_155->___isStarter_6;
				NullCheck(L_151);
				L_151->___isStarter_11 = L_156;
				// if (currentPrefab.GetComponent<IncrementPrefabsWithScriptableObjectStorage>().pokemon.isStarter)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_157 = V_4;
				NullCheck(L_157);
				IncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3* L_158;
				L_158 = GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576(L_157, GameObject_GetComponent_TisIncrementPrefabsWithScriptableObjectStorage_t6A99D1B1192A5AB436D4AE6967AC417A67FFC7B3_mF8C3DF8EA480D7067515851A63CD75943EFE9576_RuntimeMethod_var);
				NullCheck(L_158);
				PokemonScriptableObjectPlayer_t40F6C60091091EFD5C469BD83E8A0A54270675BE* L_159 = L_158->___pokemon_4;
				NullCheck(L_159);
				bool L_160 = L_159->___isStarter_11;
				if (!L_160)
				{
					goto IL_0374_1;
				}
			}
			{
				// PlayerCore.starter = currentPrefab;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_161 = V_4;
				((PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_il2cpp_TypeInfo_var))->___starter_4 = L_161;
				Il2CppCodeGenWriteBarrier((void**)(&((PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_il2cpp_TypeInfo_var))->___starter_4), (void*)L_161);
			}

IL_0374_1:
			{
				// player.AddPokemonStorageForLoad(currentPrefab);
				PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_162 = __this->___player_7;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_163 = V_4;
				NullCheck(L_162);
				PlayerCore_AddPokemonStorageForLoad_m073189036944A8802DC6D794268ACB1F47A2580C(L_162, L_163, NULL);
			}

IL_0381_1:
			{
				// foreach (GameObject currentPrefab in allPrefabPokemonStorage)
				bool L_164;
				L_164 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_1), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_164)
				{
					goto IL_0219_1;
				}
			}
			{
				goto IL_039d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_039d:
	{
		// for (int i = 0; i < dataForLoad.stockage.Count; i++)
		int32_t L_165 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_165, 1));
	}

IL_03a1:
	{
		// for (int i = 0; i < dataForLoad.stockage.Count; i++)
		int32_t L_166 = V_3;
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_167 = __this->___dataForLoad_6;
		NullCheck(L_167);
		List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708* L_168 = L_167->___stockage_3;
		NullCheck(L_168);
		int32_t L_169;
		L_169 = List_1_get_Count_m50B2B076888A333E177402056C615E5979B75375_inline(L_168, List_1_get_Count_m50B2B076888A333E177402056C615E5979B75375_RuntimeMethod_var);
		if ((((int32_t)L_166) < ((int32_t)L_169)))
		{
			goto IL_0208;
		}
	}
	{
		// player.InstantiateShop2();
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_170 = __this->___player_7;
		NullCheck(L_170);
		PlayerCore_InstantiateShop2_mD68E74986F4ABC4C432CC935F169FC03FF4C51A1(L_170, NULL);
		// foreach (string currentBadgeName in dataForLoad.badgePlayerObtainName)
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_171 = __this->___dataForLoad_6;
		NullCheck(L_171);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_172 = L_171->___badgePlayerObtainName_5;
		NullCheck(L_172);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_173;
		L_173 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_172, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_5 = L_173;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03f5:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_5), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_03ea_1;
			}

IL_03d6_1:
			{
				// foreach (string currentBadgeName in dataForLoad.badgePlayerObtainName)
				String_t* L_174;
				L_174 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_5), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				// enemy.WinChampionfight(true);
				EnemyCore_tE2FA7882442629F31E1889C44D3FF844CEF946D7* L_175 = __this->___enemy_8;
				NullCheck(L_175);
				EnemyCore_WinChampionfight_mEA1F41A91973A7E722317B288FD111B1802084D1(L_175, (bool)1, NULL);
			}

IL_03ea_1:
			{
				// foreach (string currentBadgeName in dataForLoad.badgePlayerObtainName)
				bool L_176;
				L_176 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_5), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_176)
				{
					goto IL_03d6_1;
				}
			}
			{
				goto IL_0403;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0403:
	{
		// }
		return;
	}
}
// System.Void SaveData3::SaveToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData3_SaveToJson_m2E72C9EF7D197DD92932AE835BD2574201D5AD77 (SaveData3_t6A98FFD6760807C16AD260C3E9C335927F7EFC47* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EB66D8C918A3B23E19C404CB3D9980DA693A46D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBA9FD4D4F041497DD1FC1B4FC3B07FC837D7E5C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		// SaveAllData();
		SaveData3_SaveAllData_mA99FD44305E010915F80C0642D759B333B3F4254(__this, NULL);
		// string saveData = JsonUtility.ToJson(dataForSave, true);
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_0 = __this->___dataForSave_5;
		String_t* L_1;
		L_1 = JsonUtility_ToJson_mA7B20656D12861446AAA157DF6E9ACBBD78EC0AC(L_0, (bool)1, NULL);
		V_0 = L_1;
		// string filePath = Application.persistentDataPath + "/SaveData.json";
		String_t* L_2;
		L_2 = Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17(NULL);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_2, _stringLiteralEBA9FD4D4F041497DD1FC1B4FC3B07FC837D7E5C, NULL);
		// Debug.Log(filePath);
		String_t* L_4 = L_3;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_4, NULL);
		// string filename = Path.Combine(Application.persistentDataPath, "SaveData.json");
		String_t* L_5;
		L_5 = Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17(NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_5, _stringLiteral6EB66D8C918A3B23E19C404CB3D9980DA693A46D, NULL);
		V_1 = L_6;
		// if (File.Exists(filename))
		String_t* L_7 = V_1;
		bool L_8;
		L_8 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_7, NULL);
		G_B1_0 = L_4;
		if (!L_8)
		{
			G_B2_0 = L_4;
			goto IL_0046;
		}
	}
	{
		// File.Delete(filename);
		String_t* L_9 = V_1;
		File_Delete_mB5CB249F5370D49747243BCA9C56CCC48D3E6A08(L_9, NULL);
		G_B2_0 = G_B1_0;
	}

IL_0046:
	{
		// File.WriteAllText(filePath, saveData);
		String_t* L_10 = V_0;
		File_WriteAllText_mE462D8448CA65183AA5D464210706167E0EF19EB(G_B2_0, L_10, NULL);
		// }
		return;
	}
}
// System.Void SaveData3::LoadToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData3_LoadToJson_m73D5DDDBBB6D47E133AEA1911040E150BF053C55 (SaveData3_t6A98FFD6760807C16AD260C3E9C335927F7EFC47* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisData_tD68044ADE8612868F3B424B065920F50C65B5CCE_mDD30F97326D48545982A2725699D35786A998AB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBA9FD4D4F041497DD1FC1B4FC3B07FC837D7E5C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string filePath = Application.persistentDataPath + "/SaveData.json";
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17(NULL);
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_0, _stringLiteralEBA9FD4D4F041497DD1FC1B4FC3B07FC837D7E5C, NULL);
		// string loadData = System.IO.File.ReadAllText(filePath);
		String_t* L_2;
		L_2 = File_ReadAllText_m5635BE83C14358AB1721547180F43103F777CEB5(L_1, NULL);
		V_0 = L_2;
		// dataForLoad = JsonUtility.FromJson<Data>(loadData);
		String_t* L_3 = V_0;
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_4;
		L_4 = JsonUtility_FromJson_TisData_tD68044ADE8612868F3B424B065920F50C65B5CCE_mDD30F97326D48545982A2725699D35786A998AB8(L_3, JsonUtility_FromJson_TisData_tD68044ADE8612868F3B424B065920F50C65B5CCE_mDD30F97326D48545982A2725699D35786A998AB8_RuntimeMethod_var);
		__this->___dataForLoad_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataForLoad_6), (void*)L_4);
		// LoadAllData();
		SaveData3_LoadAllData_m1A3EFC32504D2E997F8F2CC7FB5CF707C0F09AC5(__this, NULL);
		// }
		return;
	}
}
// System.Void SaveData3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData3__ctor_m2371A12A12A46D141F7DA1D1777EAA188AF6A576 (SaveData3_t6A98FFD6760807C16AD260C3E9C335927F7EFC47* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Data::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Data__ctor_mAD0738081D5922E1E6C75A516F6564FBB8468214 (Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2C875BD1394315BBADB39E649B762DA1EADA540_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Poke> equipe = new List<Poke>();
		List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708* L_0 = (List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708*)il2cpp_codegen_object_new(List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE2C875BD1394315BBADB39E649B762DA1EADA540(L_0, List_1__ctor_mE2C875BD1394315BBADB39E649B762DA1EADA540_RuntimeMethod_var);
		__this->___equipe_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___equipe_2), (void*)L_0);
		// public List<Poke> stockage = new List<Poke>();
		List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708* L_1 = (List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708*)il2cpp_codegen_object_new(List_1_t110C11B0F6331B7B621A88403EEFD1DF104B6708_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mE2C875BD1394315BBADB39E649B762DA1EADA540(L_1, List_1__ctor_mE2C875BD1394315BBADB39E649B762DA1EADA540_RuntimeMethod_var);
		__this->___stockage_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stockage_3), (void*)L_1);
		// public List<string> badgePlayerObtainName = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_2, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___badgePlayerObtainName_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___badgePlayerObtainName_5), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Poke::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Poke__ctor_mE57B7C9505F53F884591555068C6B0383D596E86 (Poke_tA8B13C0D25C4EC051D27F9E11594069CD14A9ED7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void UIPokemonShop::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPokemonShop_Start_mCAD04D31C54D38E8350792E83AAECE16B2C940FC (UIPokemonShop_tAE361E81FC9B65FB7ACA5D12CB546AA4F99C3C2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIPokemonShop_U3CStartU3Eb__4_0_mFF58CFF05AF9AC6168191E40BDCFA9E6D4DFD70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral949A8BEA31A7E10FE0AA02A3C2A54389F9D3FCB4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pokemonObjectShop = this.gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		__this->___pokemonObjectShop_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pokemonObjectShop_5), (void*)L_0);
		// pokemonObjectShop.transform.GetChild(0).GetComponent<TMP_Text>().text = statPokemonShop.namePoke;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___pokemonObjectShop_5;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_2, 0, NULL);
		NullCheck(L_3);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4;
		L_4 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(L_3, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		PokemonScriptableObjectShop_tACBEF0C6F0B0725664A9438B860D3A7432ABB545* L_5 = __this->___statPokemonShop_4;
		NullCheck(L_5);
		String_t* L_6 = L_5->___namePoke_4;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_6);
		// pokemonObjectShop.transform.GetChild(1).GetComponent<TMP_Text>().text = statPokemonShop.cost.ToString() + " Poke";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___pokemonObjectShop_5;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_8, 1, NULL);
		NullCheck(L_9);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_10;
		L_10 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(L_9, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		PokemonScriptableObjectShop_tACBEF0C6F0B0725664A9438B860D3A7432ABB545* L_11 = __this->___statPokemonShop_4;
		NullCheck(L_11);
		int32_t* L_12 = (&L_11->___cost_6);
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_12, NULL);
		String_t* L_14;
		L_14 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_13, _stringLiteral949A8BEA31A7E10FE0AA02A3C2A54389F9D3FCB4, NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_10, L_14);
		// pokemonObjectShop.transform.GetChild(2).GetComponent<Image>().sprite = statPokemonShop.sprite;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___pokemonObjectShop_5;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_16, 2, NULL);
		NullCheck(L_17);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18;
		L_18 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_17, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		PokemonScriptableObjectShop_tACBEF0C6F0B0725664A9438B860D3A7432ABB545* L_19 = __this->___statPokemonShop_4;
		NullCheck(L_19);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_20 = L_19->___sprite_5;
		NullCheck(L_18);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_18, L_20, NULL);
		// pokemonObjectShop.transform.GetChild(3).GetComponent<Button>().onClick.AddListener(() => {
		//     GameObject.Find("Player").GetComponent<PlayerCore>().BuyPokemon(pokemonObject);
		//     GameObject.Find("Player").GetComponent<PlayerCore>().BuyPokemonStorage(storageObject);
		//     GameObject.Find("Player").GetComponent<PlayerCore>().InstantiateShop2();
		// });
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___pokemonObjectShop_5;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_22, 3, NULL);
		NullCheck(L_23);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_24;
		L_24 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_23, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		NullCheck(L_24);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_25;
		L_25 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_24, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_26 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_26, __this, (intptr_t)((void*)UIPokemonShop_U3CStartU3Eb__4_0_mFF58CFF05AF9AC6168191E40BDCFA9E6D4DFD70D_RuntimeMethod_var), NULL);
		NullCheck(L_25);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_25, L_26, NULL);
		// }
		return;
	}
}
// System.Void UIPokemonShop::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPokemonShop_Update_mFD22290F63645401550D8E748EC0496F5E54B05D (UIPokemonShop_tAE361E81FC9B65FB7ACA5D12CB546AA4F99C3C2E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UIPokemonShop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPokemonShop__ctor_m349882608BFF72DA8D0E8BFF8A45E173843F5BED (UIPokemonShop_tAE361E81FC9B65FB7ACA5D12CB546AA4F99C3C2E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void UIPokemonShop::<Start>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPokemonShop_U3CStartU3Eb__4_0_mFF58CFF05AF9AC6168191E40BDCFA9E6D4DFD70D (UIPokemonShop_tAE361E81FC9B65FB7ACA5D12CB546AA4F99C3C2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_m8D8A17457C2F9D76018A5CDDB7C21FDCC6156C29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject.Find("Player").GetComponent<PlayerCore>().BuyPokemon(pokemonObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_0);
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_1;
		L_1 = GameObject_GetComponent_TisPlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_m8D8A17457C2F9D76018A5CDDB7C21FDCC6156C29(L_0, GameObject_GetComponent_TisPlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_m8D8A17457C2F9D76018A5CDDB7C21FDCC6156C29_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___pokemonObject_6;
		NullCheck(L_1);
		PlayerCore_BuyPokemon_m26D0B3F50BFA24B90E2CA11EA6FB9FAFE7964057(L_1, L_2, NULL);
		// GameObject.Find("Player").GetComponent<PlayerCore>().BuyPokemonStorage(storageObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_3);
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_4;
		L_4 = GameObject_GetComponent_TisPlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_m8D8A17457C2F9D76018A5CDDB7C21FDCC6156C29(L_3, GameObject_GetComponent_TisPlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_m8D8A17457C2F9D76018A5CDDB7C21FDCC6156C29_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___storageObject_7;
		NullCheck(L_4);
		PlayerCore_BuyPokemonStorage_m5E44641D148C3C0D65F7CFC973E77CC328D5243C(L_4, L_5, NULL);
		// GameObject.Find("Player").GetComponent<PlayerCore>().InstantiateShop2();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_6);
		PlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459* L_7;
		L_7 = GameObject_GetComponent_TisPlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_m8D8A17457C2F9D76018A5CDDB7C21FDCC6156C29(L_6, GameObject_GetComponent_TisPlayerCore_t51C7B6A43B2E62D41161996C65DB01C7A411A459_m8D8A17457C2F9D76018A5CDDB7C21FDCC6156C29_RuntimeMethod_var);
		NullCheck(L_7);
		PlayerCore_InstantiateShop2_mD68E74986F4ABC4C432CC935F169FC03FF4C51A1(L_7, NULL);
		// });
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
// System.Void WinBadgesOrLigues::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinBadgesOrLigues_Start_m78D41C6B5A910B9D5DF3639E8A9B367019818CBC (WinBadgesOrLigues_t0333DDB55F7891A171F154295F2F4B7FC3F2D26B* __this, const RuntimeMethod* method) 
{
	{
		// panelWin.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___panelWin_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void WinBadgesOrLigues::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinBadgesOrLigues_Update_mCC27BD1DB2D81BFCD16BC5EF0C8EBE6A85BEB984 (WinBadgesOrLigues_t0333DDB55F7891A171F154295F2F4B7FC3F2D26B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void WinBadgesOrLigues::RemplirVarWin(UnityEngine.Sprite,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinBadgesOrLigues_RemplirVarWin_m8EA7BD3EDEA281CFFC0CBD62DC070256633AAE01 (WinBadgesOrLigues_t0333DDB55F7891A171F154295F2F4B7FC3F2D26B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___spriteBadgeTemp0, String_t* ___textWinTemp1, const RuntimeMethod* method) 
{
	{
		// spriteBadge = spriteBadgeTemp;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___spriteBadgeTemp0;
		__this->___spriteBadge_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteBadge_6), (void*)L_0);
		// }
		return;
	}
}
// System.Collections.IEnumerator WinBadgesOrLigues::Win()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WinBadgesOrLigues_Win_m2F4F4AF80B1E259C72960BED3C504328434E7DE6 (WinBadgesOrLigues_t0333DDB55F7891A171F154295F2F4B7FC3F2D26B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWinU3Ed__6_tD1E23B3CE118867FE5C7336125C505FBA3BF52EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWinU3Ed__6_tD1E23B3CE118867FE5C7336125C505FBA3BF52EE* L_0 = (U3CWinU3Ed__6_tD1E23B3CE118867FE5C7336125C505FBA3BF52EE*)il2cpp_codegen_object_new(U3CWinU3Ed__6_tD1E23B3CE118867FE5C7336125C505FBA3BF52EE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWinU3Ed__6__ctor_mB1B65B1C866EBC38FE2E9348EB8A37E2A35DC8D6(L_0, 0, NULL);
		U3CWinU3Ed__6_tD1E23B3CE118867FE5C7336125C505FBA3BF52EE* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void WinBadgesOrLigues::startCorou()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinBadgesOrLigues_startCorou_mEAE59B28ED4ECED51DF5D4464DC3CFA7059515B7 (WinBadgesOrLigues_t0333DDB55F7891A171F154295F2F4B7FC3F2D26B* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(Win());
		RuntimeObject* L_0;
		L_0 = WinBadgesOrLigues_Win_m2F4F4AF80B1E259C72960BED3C504328434E7DE6(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void WinBadgesOrLigues::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinBadgesOrLigues__ctor_m9DBFF17D5173024951DE8104B4FC6098252CDC90 (WinBadgesOrLigues_t0333DDB55F7891A171F154295F2F4B7FC3F2D26B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void WinBadgesOrLigues/<Win>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWinU3Ed__6__ctor_mB1B65B1C866EBC38FE2E9348EB8A37E2A35DC8D6 (U3CWinU3Ed__6_tD1E23B3CE118867FE5C7336125C505FBA3BF52EE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void WinBadgesOrLigues/<Win>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWinU3Ed__6_System_IDisposable_Dispose_mB05E0E6FDD8D3D125484254C9E7B721D14FDD96A (U3CWinU3Ed__6_tD1E23B3CE118867FE5C7336125C505FBA3BF52EE* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean WinBadgesOrLigues/<Win>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWinU3Ed__6_MoveNext_m3DFC9B94E279D01C9B7F32E423C7BEC16DE96C36 (U3CWinU3Ed__6_tD1E23B3CE118867FE5C7336125C505FBA3BF52EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WinBadgesOrLigues_t0333DDB55F7891A171F154295F2F4B7FC3F2D26B* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		WinBadgesOrLigues_t0333DDB55F7891A171F154295F2F4B7FC3F2D26B* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_006f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// this.transform.GetChild(0).gameObject.transform.GetChild(0).GetComponent<Image>().sprite = spriteBadge;
		WinBadgesOrLigues_t0333DDB55F7891A171F154295F2F4B7FC3F2D26B* L_4 = V_1;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_5, 0, NULL);
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_8, 0, NULL);
		NullCheck(L_9);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10;
		L_10 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_9, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		WinBadgesOrLigues_t0333DDB55F7891A171F154295F2F4B7FC3F2D26B* L_11 = V_1;
		NullCheck(L_11);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_12 = L_11->___spriteBadge_6;
		NullCheck(L_10);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_10, L_12, NULL);
		// panelWin.SetActive(true);
		WinBadgesOrLigues_t0333DDB55F7891A171F154295F2F4B7FC3F2D26B* L_13 = V_1;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = L_13->___panelWin_5;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)1, NULL);
		// yield return new WaitForSeconds(1.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_15 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_15, (1.5f), NULL);
		__this->___U3CU3E2__current_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_15);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_006f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// panelWin.SetActive(false);
		WinBadgesOrLigues_t0333DDB55F7891A171F154295F2F4B7FC3F2D26B* L_16 = V_1;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = L_16->___panelWin_5;
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object WinBadgesOrLigues/<Win>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWinU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5F21E511C84822DF4A96ED834661D75EF7CAF9B9 (U3CWinU3Ed__6_tD1E23B3CE118867FE5C7336125C505FBA3BF52EE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void WinBadgesOrLigues/<Win>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWinU3Ed__6_System_Collections_IEnumerator_Reset_m756787262D2817EE38559424B53AB6EE4875438A (U3CWinU3Ed__6_tD1E23B3CE118867FE5C7336125C505FBA3BF52EE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWinU3Ed__6_System_Collections_IEnumerator_Reset_m756787262D2817EE38559424B53AB6EE4875438A_RuntimeMethod_var)));
	}
}
// System.Object WinBadgesOrLigues/<Win>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWinU3Ed__6_System_Collections_IEnumerator_get_Current_m7FE21CF7F8590DFA8829F552A2784B9DD7C95050 (U3CWinU3Ed__6_tD1E23B3CE118867FE5C7336125C505FBA3BF52EE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void MenuInterraction::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuInterraction_Start_mA525D3E5507610A2B3AD4A1EB002B9DBA83D8D2D (MenuInterraction_t5F80DECE49CEF61C996CD13727F8D4A83A495DA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EB66D8C918A3B23E19C404CB3D9980DA693A46D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string filename = Path.Combine(Application.persistentDataPath, "SaveData.json");
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17(NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_0, _stringLiteral6EB66D8C918A3B23E19C404CB3D9980DA693A46D, NULL);
		// message.text = "";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___message_6;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// if (File.Exists(filename))
		bool L_3;
		L_3 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_1, NULL);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		// boutonContinuer.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___boutonContinuer_4;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// boutonNewGame.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___boutonNewGame_5;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		return;
	}

IL_003f:
	{
		// boutonContinuer.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___boutonContinuer_4;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// boutonNewGame.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___boutonNewGame_5;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MenuInterraction::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuInterraction_Update_mB1C15286D4751689395ADD3D1D002CAB07FF3B12 (MenuInterraction_t5F80DECE49CEF61C996CD13727F8D4A83A495DA6* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MenuInterraction::Continue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuInterraction_Continue_mFC05A0E15791D129F872943827B8C3E34670721D (MenuInterraction_t5F80DECE49CEF61C996CD13727F8D4A83A495DA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveData3_t6A98FFD6760807C16AD260C3E9C335927F7EFC47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SaveData3.onContinue = true;
		((SaveData3_t6A98FFD6760807C16AD260C3E9C335927F7EFC47_StaticFields*)il2cpp_codegen_static_fields_for(SaveData3_t6A98FFD6760807C16AD260C3E9C335927F7EFC47_il2cpp_TypeInfo_var))->___onContinue_4 = (bool)1;
		// SceneManager.LoadScene("Game");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, NULL);
		// }
		return;
	}
}
// System.Void MenuInterraction::NewGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuInterraction_NewGame_mB8AFA64D2702C74F3F3D3ED59D4406A52B674F31 (MenuInterraction_t5F80DECE49CEF61C996CD13727F8D4A83A495DA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE78726DE90EF414F6BAE456D807A90A133A52C3E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("StarterScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralE78726DE90EF414F6BAE456D807A90A133A52C3E, NULL);
		// }
		return;
	}
}
// System.Void MenuInterraction::EffacerDonnees()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuInterraction_EffacerDonnees_mAAA8687BA39D00D79ACBB717C977E4CC36F5279A (MenuInterraction_t5F80DECE49CEF61C996CD13727F8D4A83A495DA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05485A48DCC7CBA56F6007B728288FA7274B45BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21552CE750FC0DB7EE700F765261997E52D44309);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EB66D8C918A3B23E19C404CB3D9980DA693A46D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEAB750E145FB3B516C4250CCD017EA599FCCE8D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string filename = Path.Combine(Application.persistentDataPath, "SaveData.json");
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17(NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_0, _stringLiteral6EB66D8C918A3B23E19C404CB3D9980DA693A46D, NULL);
		V_0 = L_1;
		// if (File.Exists(filename))
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_2, NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		// File.Delete(filename);
		String_t* L_4 = V_0;
		File_Delete_mB5CB249F5370D49747243BCA9C56CCC48D3E6A08(L_4, NULL);
		// boutonContinuer.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___boutonContinuer_4;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// message.text = "Les donn?es ont ?t? effac?s";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = __this->___message_6;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, _stringLiteral05485A48DCC7CBA56F6007B728288FA7274B45BB);
		goto IL_004c;
	}

IL_003c:
	{
		// message.text = "Aucunes donn?es n'a ?t? trouv?e";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7 = __this->___message_6;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, _stringLiteral21552CE750FC0DB7EE700F765261997E52D44309);
	}

IL_004c:
	{
		// StartCoroutine("RoutineAffichageMessage");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteralAEAB750E145FB3B516C4250CCD017EA599FCCE8D, NULL);
		// }
		return;
	}
}
// System.Void MenuInterraction::Quitter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuInterraction_Quitter_m20A4745760F378E1BD2380E52244DDFF6FF2AB1E (MenuInterraction_t5F80DECE49CEF61C996CD13727F8D4A83A495DA6* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator MenuInterraction::RoutineAffichageMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MenuInterraction_RoutineAffichageMessage_mA890786E99E21BA4CC81792EEB3EC1C61A2B8085 (MenuInterraction_t5F80DECE49CEF61C996CD13727F8D4A83A495DA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRoutineAffichageMessageU3Ed__9_t55EA49C04717F2B7ABDF3C47E7EB1253EBD94BE4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRoutineAffichageMessageU3Ed__9_t55EA49C04717F2B7ABDF3C47E7EB1253EBD94BE4* L_0 = (U3CRoutineAffichageMessageU3Ed__9_t55EA49C04717F2B7ABDF3C47E7EB1253EBD94BE4*)il2cpp_codegen_object_new(U3CRoutineAffichageMessageU3Ed__9_t55EA49C04717F2B7ABDF3C47E7EB1253EBD94BE4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRoutineAffichageMessageU3Ed__9__ctor_m78364B5E6AAEDC61E90D8CAEF2080B8CB78170B0(L_0, 0, NULL);
		U3CRoutineAffichageMessageU3Ed__9_t55EA49C04717F2B7ABDF3C47E7EB1253EBD94BE4* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void MenuInterraction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuInterraction__ctor_m5DF515212BA759053217CFEE41A277627B8EFB8E (MenuInterraction_t5F80DECE49CEF61C996CD13727F8D4A83A495DA6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MenuInterraction/<RoutineAffichageMessage>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoutineAffichageMessageU3Ed__9__ctor_m78364B5E6AAEDC61E90D8CAEF2080B8CB78170B0 (U3CRoutineAffichageMessageU3Ed__9_t55EA49C04717F2B7ABDF3C47E7EB1253EBD94BE4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MenuInterraction/<RoutineAffichageMessage>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoutineAffichageMessageU3Ed__9_System_IDisposable_Dispose_m6B47959A4DEF30BA0626380CDE1604D70591142A (U3CRoutineAffichageMessageU3Ed__9_t55EA49C04717F2B7ABDF3C47E7EB1253EBD94BE4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MenuInterraction/<RoutineAffichageMessage>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRoutineAffichageMessageU3Ed__9_MoveNext_m84D798FBC170E04A4C01BAB2EBBB469027CA164C (U3CRoutineAffichageMessageU3Ed__9_t55EA49C04717F2B7ABDF3C47E7EB1253EBD94BE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MenuInterraction_t5F80DECE49CEF61C996CD13727F8D4A83A495DA6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MenuInterraction_t5F80DECE49CEF61C996CD13727F8D4A83A495DA6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(2);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// message.text = "";
		MenuInterraction_t5F80DECE49CEF61C996CD13727F8D4A83A495DA6* L_5 = V_1;
		NullCheck(L_5);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = L_5->___message_6;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return (bool)0;
	}
}
// System.Object MenuInterraction/<RoutineAffichageMessage>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRoutineAffichageMessageU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1DB8FB5273020A4400C878F69C324BCDF19E001C (U3CRoutineAffichageMessageU3Ed__9_t55EA49C04717F2B7ABDF3C47E7EB1253EBD94BE4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MenuInterraction/<RoutineAffichageMessage>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoutineAffichageMessageU3Ed__9_System_Collections_IEnumerator_Reset_m4F740510D94665295E567A6A22E90CE4112AA9E5 (U3CRoutineAffichageMessageU3Ed__9_t55EA49C04717F2B7ABDF3C47E7EB1253EBD94BE4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRoutineAffichageMessageU3Ed__9_System_Collections_IEnumerator_Reset_m4F740510D94665295E567A6A22E90CE4112AA9E5_RuntimeMethod_var)));
	}
}
// System.Object MenuInterraction/<RoutineAffichageMessage>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRoutineAffichageMessageU3Ed__9_System_Collections_IEnumerator_get_Current_m255615408A23D4B87BF20E5DBD47BB67D700ADE9 (U3CRoutineAffichageMessageU3Ed__9_t55EA49C04717F2B7ABDF3C47E7EB1253EBD94BE4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___r0;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___g1;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___b2;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___a3;
		__this->___a_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___c0;
		uint8_t L_1 = L_0.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___c0;
		uint8_t L_3 = L_2.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___c0;
		uint8_t L_5 = L_4.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___c0;
		uint8_t L_7 = L_6.___a_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), ((float)(((float)L_1)/(255.0f))), ((float)(((float)L_3)/(255.0f))), ((float)(((float)L_5)/(255.0f))), ((float)(((float)L_7)/(255.0f))), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Sprite; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_Sprite_38;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinBadgesOrLigues_RemplirVarWin_m8EA7BD3EDEA281CFFC0CBD62DC070256633AAE01_inline (WinBadgesOrLigues_t0333DDB55F7891A171F154295F2F4B7FC3F2D26B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___spriteBadgeTemp0, String_t* ___textWinTemp1, const RuntimeMethod* method) 
{
	{
		// spriteBadge = spriteBadgeTemp;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___spriteBadgeTemp0;
		__this->___spriteBadge_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteBadge_6), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_CurrentSelected; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_CurrentSelected_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
