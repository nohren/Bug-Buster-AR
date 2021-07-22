#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Object>
struct ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99;
// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.WeakReference>
struct ExtractKeyDelegate_t11259FF9F9B2731017891756CE47308FEA3BF56F;
// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Xml.Linq.XName>
struct ExtractKeyDelegate_t497C1F3C8CA6FA376C383A6E622E18CFF278B78C;
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement>
struct IEnumerable_1_t70F856D4968B925F9EDFA9EB3A403F5B672FE7D2;
// System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XElement>
struct IEnumerator_1_tBB768286D73592EAD62B2400AE4B604477758148;
// System.Xml.Linq.XHashtable`1/XHashtableState<System.WeakReference>
struct XHashtableState_t37EA7100EEC68A7E18B29ACAA61082089048A256;
// System.Xml.Linq.XHashtable`1/XHashtableState<System.Xml.Linq.XName>
struct XHashtableState_tEF855C388AEE854CCEB1517E8DB793AEEE970A29;
// System.Xml.Linq.XHashtable`1<System.Object>
struct XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37;
// System.Xml.Linq.XHashtable`1<System.WeakReference>
struct XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD;
// System.Xml.Linq.XHashtable`1<System.Xml.Linq.XName>
struct XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2A667D8777429024D8A3CB3D9AE29EA79FEA6176;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Xml.Linq.NameSerializer
struct NameSerializer_t49A4F679B483838B05DD1E2231CF9C4FAB125A45;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.PlatformNotSupportedException
struct PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.WeakReference
struct WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76;
// System.Xml.Linq.XContainer
struct XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525;
// System.Xml.Linq.XElement
struct XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5;
// System.Xml.Linq.XName
struct XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956;
// System.Xml.Linq.XNamespace
struct XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7;
// System.Xml.Linq.XNode
struct XNode_tB88EE59443DF799686825ED2168D47C857C8CA99;
// System.Xml.Linq.XContainer/<GetElements>d__40
struct U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExtractKeyDelegate_t11259FF9F9B2731017891756CE47308FEA3BF56F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExtractKeyDelegate_t497C1F3C8CA6FA376C383A6E622E18CFF278B78C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlConvert_t5D0BE0A0EE15E2D3EC7F4881C519B5137DFA370A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0585B1F8C119DD15D843D55F7CCBF9D9162B9AC8;
IL2CPP_EXTERN_C String_t* _stringLiteral088A9A5E3B4F0C5B7CA099259703FC5AA6BA7C5E;
IL2CPP_EXTERN_C String_t* _stringLiteral0ABEBB01305DAD5CDC4ABC544CFEBCFEB1290EFC;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral0FE0357577FE6BDD9E51A23B11B887B73877D0AA;
IL2CPP_EXTERN_C String_t* _stringLiteral11680B2FB0D0FC01D9AFDF475517284900ACFB79;
IL2CPP_EXTERN_C String_t* _stringLiteral145ACF7B0AD8FB6FCA89E2F74EED12E94EC3A7E8;
IL2CPP_EXTERN_C String_t* _stringLiteral19A2333FCD07371493EC6A40D0F145865A97BE75;
IL2CPP_EXTERN_C String_t* _stringLiteral284BB8EA8CC921896C74586B4CEC5337B1525FC9;
IL2CPP_EXTERN_C String_t* _stringLiteral31F8C4E9485B20B546C635CB7C6B559821CF1715;
IL2CPP_EXTERN_C String_t* _stringLiteral349C6DC0F34B9BA242E4C728EDD28CAB809D4917;
IL2CPP_EXTERN_C String_t* _stringLiteral38C66D82074221F9BF474E266F4485F93490FF1A;
IL2CPP_EXTERN_C String_t* _stringLiteral3B1FEDF0C4DF52130C3B66237FAB6509FA39A38D;
IL2CPP_EXTERN_C String_t* _stringLiteral3C775B23554B97CFD8879DFA281939C311427192;
IL2CPP_EXTERN_C String_t* _stringLiteral3E06E7E4F8ED38905491595BD31A52DEEA86DBAF;
IL2CPP_EXTERN_C String_t* _stringLiteral3EA1556EC2451041F02B5E24CC1259B4F9C88E56;
IL2CPP_EXTERN_C String_t* _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE;
IL2CPP_EXTERN_C String_t* _stringLiteral4CF69E50664676AF96974413A4F4F427000D9619;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral4E4C5FABD283631DC7912E3AB1B252B989829C49;
IL2CPP_EXTERN_C String_t* _stringLiteral501C7A99CB5D9B00206EDB627BD9F44F2FFFF7A0;
IL2CPP_EXTERN_C String_t* _stringLiteral51E076C77A20C01FCA9E7EFBD613E0CE099CD99E;
IL2CPP_EXTERN_C String_t* _stringLiteral538ED4DB2714E63F1702E3DC7ED7111FE51CB075;
IL2CPP_EXTERN_C String_t* _stringLiteral57307604A13D96EA752170A81E5BBA1A66E7DD27;
IL2CPP_EXTERN_C String_t* _stringLiteral582BE1949D522410D0C0CA69C37F3379F416C90B;
IL2CPP_EXTERN_C String_t* _stringLiteral5B2A557B4B47ACB5849DADEBD641B0A73D5C5A0E;
IL2CPP_EXTERN_C String_t* _stringLiteral5CCCD2494E78C8BCB11782EA6F5BE4D70AD09654;
IL2CPP_EXTERN_C String_t* _stringLiteral5F2E3906078083B3F6EF50D81DCCBA5FBE0099F0;
IL2CPP_EXTERN_C String_t* _stringLiteral65151EF1CE2870155EB1F4CF50191C136CBF7C27;
IL2CPP_EXTERN_C String_t* _stringLiteral665790B550DE00E17BA971D1D60E8148C2C3CEFB;
IL2CPP_EXTERN_C String_t* _stringLiteral751B5F3E33CE57A71852A78FFD92E0813DACD5C0;
IL2CPP_EXTERN_C String_t* _stringLiteral763B440B89C2BEAB56B575C7128AED7D0BF0D02D;
IL2CPP_EXTERN_C String_t* _stringLiteral7BEC2F7CA45AAF0977D93E629BEDAA257CE32075;
IL2CPP_EXTERN_C String_t* _stringLiteral7C0D11305C4CE4883C53D10C917D9FEC585923B0;
IL2CPP_EXTERN_C String_t* _stringLiteral7DA684079C4910A68C26112D31B4F30B7602EED6;
IL2CPP_EXTERN_C String_t* _stringLiteral8410460AD56D52600FC1FDB68F42DAC9B13253F9;
IL2CPP_EXTERN_C String_t* _stringLiteral850779CE1C493FE4BB82FD830D211C5DC080E111;
IL2CPP_EXTERN_C String_t* _stringLiteral8C4D13815C4A9C6CE0C71EC81D9AEAA15F07F052;
IL2CPP_EXTERN_C String_t* _stringLiteral8DB0D0A6E34E903191ED08A3028F75FBFA429DAE;
IL2CPP_EXTERN_C String_t* _stringLiteral8EA4FEAB6355D2BF9CAD022606C89690929ADAB3;
IL2CPP_EXTERN_C String_t* _stringLiteral8FAA2E070FFBE18DB7236C5FBDA9522A6EB8E95B;
IL2CPP_EXTERN_C String_t* _stringLiteral9070F650E803F95AAF7F0424AC3CD59B848708B7;
IL2CPP_EXTERN_C String_t* _stringLiteral935ED84C03CE19EFAE29DD6987A405F64591906A;
IL2CPP_EXTERN_C String_t* _stringLiteral93ACD1E94819C250C280A5D433EB81D487EA36C6;
IL2CPP_EXTERN_C String_t* _stringLiteral9415A429F11852DD4CCC80868C382788D76BD744;
IL2CPP_EXTERN_C String_t* _stringLiteral9E601A048BDE14CE54D8454BBD9B9A6EFB0EA02D;
IL2CPP_EXTERN_C String_t* _stringLiteral9F7756F3BC424FA91FEB920E997A5D28CB0F1D32;
IL2CPP_EXTERN_C String_t* _stringLiteralA3A3C640F703360E63541701EA84B997C01338F3;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralA8DD31F05F41B09FE8B15F5B1ED920B57F9DD84B;
IL2CPP_EXTERN_C String_t* _stringLiteralB32CBA74471B0BEA9F5E6F2D81368851EB20F188;
IL2CPP_EXTERN_C String_t* _stringLiteralC45C10F625DAF964B5295D59B33A9925EB8F882B;
IL2CPP_EXTERN_C String_t* _stringLiteralC8E594A81BD02C38A87789127F45DB6050261191;
IL2CPP_EXTERN_C String_t* _stringLiteralCD81BDA78BCD57F79427E0E3EF951CA3C2F3104A;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralCEBF7CCC7EBCDB19212EDC6A7AC1FC14F5B4B78E;
IL2CPP_EXTERN_C String_t* _stringLiteralD0AD11967FD3AC7BB8160E4DE21B7F70A5DCE6D2;
IL2CPP_EXTERN_C String_t* _stringLiteralD89180693C38BF429E9AF7466537CF6318F5CAE5;
IL2CPP_EXTERN_C String_t* _stringLiteralD9E30988DB4F13BB9F958646EC9E7FF9F399590A;
IL2CPP_EXTERN_C String_t* _stringLiteralDC1E003403D94E4D0E795CA3BFED667F7CA0D66A;
IL2CPP_EXTERN_C String_t* _stringLiteralDCAE0763CD303EC66D7B464B2BBEDB7CBD57E62C;
IL2CPP_EXTERN_C String_t* _stringLiteralE074D06CDFBA700869E4BF8CF358542E5E30BAA8;
IL2CPP_EXTERN_C String_t* _stringLiteralE5BF3A6C9BCB5E556DB62148F4FFB6D95E86A203;
IL2CPP_EXTERN_C String_t* _stringLiteralE6E3A8B3B29F9F1380AA2EB5EE7E038B27443D4F;
IL2CPP_EXTERN_C String_t* _stringLiteralE72DBFC447E1D53312863F57EF2C05A706E17E85;
IL2CPP_EXTERN_C String_t* _stringLiteralED7EC29553ED94A7299E962F6977E154443E0A2B;
IL2CPP_EXTERN_C String_t* _stringLiteralEE8A3FF8F77EE2A54026CB8ACCB49E6814F9C9DF;
IL2CPP_EXTERN_C String_t* _stringLiteralEF1F4810BB2716A77F316168F198D71B1CCDF923;
IL2CPP_EXTERN_C String_t* _stringLiteralF1F4AB7959CA8C93DAD635616EBD31A69C0C9B65;
IL2CPP_EXTERN_C String_t* _stringLiteralFB841A1E583CE3C43AA0486C84F6BD76B960A50E;
IL2CPP_EXTERN_C String_t* _stringLiteralFDBD8FBE7D5D48AD37D3C8124A385028A3FE6B8A;
IL2CPP_EXTERN_C String_t* _stringLiteralFFF2135A9F37786CC0108D53D4AFCDF36E7B4E8F;
IL2CPP_EXTERN_C const RuntimeMethod* ExtractKeyDelegate__ctor_m48CC0E7DB8DD7D4E987B0C6D4A1F3BA93726339A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtractKeyDelegate__ctor_m6EE51D51CEBD056B30D9A4F85A4501898480C5DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameSerializer_System_Runtime_Serialization_ISerializable_GetObjectData_m309AB629E47E1D640D2A44960A9004BC34016B8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameSerializer__ctor_mFF83F9040F5363B72D87DC6CCEA0321DB215F822_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowStub_ThrowNotSupportedException_m1B65D6A1FF55272EEE13380F3E7C53E2015C3F44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetElementsU3Ed__40_System_Collections_IEnumerator_Reset_mEBD70692F6B1A660FC8C4BE32AEC4079CC25BD10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XHashtable_1_Add_m3D9D39AE72FEF8885FE759C8C3F2D81C12A81B2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XHashtable_1_Add_mE7AF7A056D777267667AB48389520BD99FECFB1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XHashtable_1_TryGetValue_m13319666DDA95B2D930D3D5328BD6C0BFD020AFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XHashtable_1_TryGetValue_mA51B0B689C3D0D7E88B62FA023BD37E404507697_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XHashtable_1__ctor_m36FDA2D50FF3D73A801A75D6B1E5D49A1D2F7632_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XHashtable_1__ctor_m9DCA12E571A56E28A1DF7B4CED269AFA89672940_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XName_Get_mFE26FB1696ED2D60324938EBEB37C0363637BAB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XName_System_Runtime_Serialization_ISerializable_GetObjectData_m45F244C932C673A2DBB248CDD1A640138A02DAFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XName__ctor_m2D7B85963C672FA3E6E5559CC101F790A4757ECE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XNamespace_ExtractLocalName_mFFC3D4C8CA969449FAD1F029330DED93180959A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XNamespace_ExtractNamespace_mC09B1EB8F42638C5B58F853F81CB9A32B73D415A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XNamespace_GetName_mB9A7E789565459E55D929AF8F7C84CC38BBC8DFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* NameSerializer_t49A4F679B483838B05DD1E2231CF9C4FAB125A45_0_0_0_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBBC8060C6F95337222402802CAA1A512C2A3B7C6 
{
public:

public:
};


// System.Object


// System.Xml.Linq.XHashtable`1<System.WeakReference>
struct XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD  : public RuntimeObject
{
public:
	// System.Xml.Linq.XHashtable`1/XHashtableState<TValue> System.Xml.Linq.XHashtable`1::state
	XHashtableState_t37EA7100EEC68A7E18B29ACAA61082089048A256 * ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD, ___state_0)); }
	inline XHashtableState_t37EA7100EEC68A7E18B29ACAA61082089048A256 * get_state_0() const { return ___state_0; }
	inline XHashtableState_t37EA7100EEC68A7E18B29ACAA61082089048A256 ** get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(XHashtableState_t37EA7100EEC68A7E18B29ACAA61082089048A256 * value)
	{
		___state_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_0), (void*)value);
	}
};


// System.Xml.Linq.XHashtable`1<System.Xml.Linq.XName>
struct XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F  : public RuntimeObject
{
public:
	// System.Xml.Linq.XHashtable`1/XHashtableState<TValue> System.Xml.Linq.XHashtable`1::state
	XHashtableState_tEF855C388AEE854CCEB1517E8DB793AEEE970A29 * ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F, ___state_0)); }
	inline XHashtableState_tEF855C388AEE854CCEB1517E8DB793AEEE970A29 * get_state_0() const { return ___state_0; }
	inline XHashtableState_tEF855C388AEE854CCEB1517E8DB793AEEE970A29 ** get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(XHashtableState_tEF855C388AEE854CCEB1517E8DB793AEEE970A29 * value)
	{
		___state_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_0), (void*)value);
	}
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tE65ED5F1D3A63B5FD36E20F0E76A6590D1E03E4A  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Xml.Linq.NameSerializer
struct NameSerializer_t49A4F679B483838B05DD1E2231CF9C4FAB125A45  : public RuntimeObject
{
public:
	// System.String System.Xml.Linq.NameSerializer::expandedName
	String_t* ___expandedName_0;

public:
	inline static int32_t get_offset_of_expandedName_0() { return static_cast<int32_t>(offsetof(NameSerializer_t49A4F679B483838B05DD1E2231CF9C4FAB125A45, ___expandedName_0)); }
	inline String_t* get_expandedName_0() const { return ___expandedName_0; }
	inline String_t** get_address_of_expandedName_0() { return &___expandedName_0; }
	inline void set_expandedName_0(String_t* value)
	{
		___expandedName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___expandedName_0), (void*)value);
	}
};


// System.Xml.Linq.Res
struct Res_t63342267B54C7EE35253885BE251951FD78F70C7  : public RuntimeObject
{
public:

public:
};


// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;

public:
	inline static int32_t get_offset_of_m_members_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_members_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_members_3() const { return ___m_members_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_members_3() { return &___m_members_3; }
	inline void set_m_members_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_members_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_members_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_data_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_data_4)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_data_4() const { return ___m_data_4; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_data_4() { return &___m_data_4; }
	inline void set_m_data_4(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_data_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_types_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_types_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_m_types_5() const { return ___m_types_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_m_types_5() { return &___m_types_5; }
	inline void set_m_types_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___m_types_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_types_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_nameToIndex_6)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_m_nameToIndex_6() const { return ___m_nameToIndex_6; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_m_nameToIndex_6() { return &___m_nameToIndex_6; }
	inline void set_m_nameToIndex_6(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___m_nameToIndex_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_nameToIndex_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_currMember_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_currMember_7)); }
	inline int32_t get_m_currMember_7() const { return ___m_currMember_7; }
	inline int32_t* get_address_of_m_currMember_7() { return &___m_currMember_7; }
	inline void set_m_currMember_7(int32_t value)
	{
		___m_currMember_7 = value;
	}

	inline static int32_t get_offset_of_m_converter_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_converter_8)); }
	inline RuntimeObject* get_m_converter_8() const { return ___m_converter_8; }
	inline RuntimeObject** get_address_of_m_converter_8() { return &___m_converter_8; }
	inline void set_m_converter_8(RuntimeObject* value)
	{
		___m_converter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_converter_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_fullTypeName_9)); }
	inline String_t* get_m_fullTypeName_9() const { return ___m_fullTypeName_9; }
	inline String_t** get_address_of_m_fullTypeName_9() { return &___m_fullTypeName_9; }
	inline void set_m_fullTypeName_9(String_t* value)
	{
		___m_fullTypeName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTypeName_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_assemName_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_assemName_10)); }
	inline String_t* get_m_assemName_10() const { return ___m_assemName_10; }
	inline String_t** get_address_of_m_assemName_10() { return &___m_assemName_10; }
	inline void set_m_assemName_10(String_t* value)
	{
		___m_assemName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_assemName_10), (void*)value);
	}

	inline static int32_t get_offset_of_objectType_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___objectType_11)); }
	inline Type_t * get_objectType_11() const { return ___objectType_11; }
	inline Type_t ** get_address_of_objectType_11() { return &___objectType_11; }
	inline void set_objectType_11(Type_t * value)
	{
		___objectType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectType_11), (void*)value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_12() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isFullTypeNameSetExplicit_12)); }
	inline bool get_isFullTypeNameSetExplicit_12() const { return ___isFullTypeNameSetExplicit_12; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_12() { return &___isFullTypeNameSetExplicit_12; }
	inline void set_isFullTypeNameSetExplicit_12(bool value)
	{
		___isFullTypeNameSetExplicit_12 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_13() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isAssemblyNameSetExplicit_13)); }
	inline bool get_isAssemblyNameSetExplicit_13() const { return ___isAssemblyNameSetExplicit_13; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_13() { return &___isAssemblyNameSetExplicit_13; }
	inline void set_isAssemblyNameSetExplicit_13(bool value)
	{
		___isAssemblyNameSetExplicit_13 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_14() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___requireSameTokenInPartialTrust_14)); }
	inline bool get_requireSameTokenInPartialTrust_14() const { return ___requireSameTokenInPartialTrust_14; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_14() { return &___requireSameTokenInPartialTrust_14; }
	inline void set_requireSameTokenInPartialTrust_14(bool value)
	{
		___requireSameTokenInPartialTrust_14 = value;
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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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

// System.Xml.Linq.XName
struct XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956  : public RuntimeObject
{
public:
	// System.Xml.Linq.XNamespace System.Xml.Linq.XName::ns
	XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___ns_0;
	// System.String System.Xml.Linq.XName::localName
	String_t* ___localName_1;
	// System.Int32 System.Xml.Linq.XName::hashCode
	int32_t ___hashCode_2;

public:
	inline static int32_t get_offset_of_ns_0() { return static_cast<int32_t>(offsetof(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956, ___ns_0)); }
	inline XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * get_ns_0() const { return ___ns_0; }
	inline XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 ** get_address_of_ns_0() { return &___ns_0; }
	inline void set_ns_0(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * value)
	{
		___ns_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ns_0), (void*)value);
	}

	inline static int32_t get_offset_of_localName_1() { return static_cast<int32_t>(offsetof(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956, ___localName_1)); }
	inline String_t* get_localName_1() const { return ___localName_1; }
	inline String_t** get_address_of_localName_1() { return &___localName_1; }
	inline void set_localName_1(String_t* value)
	{
		___localName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localName_1), (void*)value);
	}

	inline static int32_t get_offset_of_hashCode_2() { return static_cast<int32_t>(offsetof(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956, ___hashCode_2)); }
	inline int32_t get_hashCode_2() const { return ___hashCode_2; }
	inline int32_t* get_address_of_hashCode_2() { return &___hashCode_2; }
	inline void set_hashCode_2(int32_t value)
	{
		___hashCode_2 = value;
	}
};


// System.Xml.Linq.XNamespace
struct XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7  : public RuntimeObject
{
public:
	// System.String System.Xml.Linq.XNamespace::namespaceName
	String_t* ___namespaceName_4;
	// System.Int32 System.Xml.Linq.XNamespace::hashCode
	int32_t ___hashCode_5;
	// System.Xml.Linq.XHashtable`1<System.Xml.Linq.XName> System.Xml.Linq.XNamespace::names
	XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F * ___names_6;

public:
	inline static int32_t get_offset_of_namespaceName_4() { return static_cast<int32_t>(offsetof(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7, ___namespaceName_4)); }
	inline String_t* get_namespaceName_4() const { return ___namespaceName_4; }
	inline String_t** get_address_of_namespaceName_4() { return &___namespaceName_4; }
	inline void set_namespaceName_4(String_t* value)
	{
		___namespaceName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namespaceName_4), (void*)value);
	}

	inline static int32_t get_offset_of_hashCode_5() { return static_cast<int32_t>(offsetof(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7, ___hashCode_5)); }
	inline int32_t get_hashCode_5() const { return ___hashCode_5; }
	inline int32_t* get_address_of_hashCode_5() { return &___hashCode_5; }
	inline void set_hashCode_5(int32_t value)
	{
		___hashCode_5 = value;
	}

	inline static int32_t get_offset_of_names_6() { return static_cast<int32_t>(offsetof(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7, ___names_6)); }
	inline XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F * get_names_6() const { return ___names_6; }
	inline XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F ** get_address_of_names_6() { return &___names_6; }
	inline void set_names_6(XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F * value)
	{
		___names_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___names_6), (void*)value);
	}
};

struct XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_StaticFields
{
public:
	// System.Xml.Linq.XHashtable`1<System.WeakReference> System.Xml.Linq.XNamespace::namespaces
	XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD * ___namespaces_0;
	// System.WeakReference System.Xml.Linq.XNamespace::refNone
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ___refNone_1;
	// System.WeakReference System.Xml.Linq.XNamespace::refXml
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ___refXml_2;
	// System.WeakReference System.Xml.Linq.XNamespace::refXmlns
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ___refXmlns_3;

public:
	inline static int32_t get_offset_of_namespaces_0() { return static_cast<int32_t>(offsetof(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_StaticFields, ___namespaces_0)); }
	inline XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD * get_namespaces_0() const { return ___namespaces_0; }
	inline XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD ** get_address_of_namespaces_0() { return &___namespaces_0; }
	inline void set_namespaces_0(XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD * value)
	{
		___namespaces_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namespaces_0), (void*)value);
	}

	inline static int32_t get_offset_of_refNone_1() { return static_cast<int32_t>(offsetof(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_StaticFields, ___refNone_1)); }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * get_refNone_1() const { return ___refNone_1; }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** get_address_of_refNone_1() { return &___refNone_1; }
	inline void set_refNone_1(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * value)
	{
		___refNone_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___refNone_1), (void*)value);
	}

	inline static int32_t get_offset_of_refXml_2() { return static_cast<int32_t>(offsetof(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_StaticFields, ___refXml_2)); }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * get_refXml_2() const { return ___refXml_2; }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** get_address_of_refXml_2() { return &___refXml_2; }
	inline void set_refXml_2(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * value)
	{
		___refXml_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___refXml_2), (void*)value);
	}

	inline static int32_t get_offset_of_refXmlns_3() { return static_cast<int32_t>(offsetof(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_StaticFields, ___refXmlns_3)); }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * get_refXmlns_3() const { return ___refXmlns_3; }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** get_address_of_refXmlns_3() { return &___refXmlns_3; }
	inline void set_refXmlns_3(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * value)
	{
		___refXmlns_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___refXmlns_3), (void*)value);
	}
};


// System.Xml.Linq.XObject
struct XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6  : public RuntimeObject
{
public:
	// System.Xml.Linq.XContainer System.Xml.Linq.XObject::parent
	XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * ___parent_0;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6, ___parent_0)); }
	inline XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * get_parent_0() const { return ___parent_0; }
	inline XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_0), (void*)value);
	}
};


// System.Xml.Linq.XContainer/<GetElements>d__40
struct U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.Linq.XContainer/<GetElements>d__40::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Xml.Linq.XElement System.Xml.Linq.XContainer/<GetElements>d__40::<>2__current
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___U3CU3E2__current_1;
	// System.Int32 System.Xml.Linq.XContainer/<GetElements>d__40::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Xml.Linq.XContainer System.Xml.Linq.XContainer/<GetElements>d__40::<>4__this
	XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * ___U3CU3E4__this_3;
	// System.Xml.Linq.XNode System.Xml.Linq.XContainer/<GetElements>d__40::<n>5__1
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___U3CnU3E5__1_4;
	// System.Xml.Linq.XName System.Xml.Linq.XContainer/<GetElements>d__40::name
	XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name_5;
	// System.Xml.Linq.XName System.Xml.Linq.XContainer/<GetElements>d__40::<>3__name
	XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___U3CU3E3__name_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC, ___U3CU3E2__current_1)); }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC, ___U3CU3E4__this_3)); }
	inline XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC, ___U3CnU3E5__1_4)); }
	inline XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * get_U3CnU3E5__1_4() const { return ___U3CnU3E5__1_4; }
	inline XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 ** get_address_of_U3CnU3E5__1_4() { return &___U3CnU3E5__1_4; }
	inline void set_U3CnU3E5__1_4(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * value)
	{
		___U3CnU3E5__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnU3E5__1_4), (void*)value);
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC, ___name_5)); }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * get_name_5() const { return ___name_5; }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 ** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__name_6() { return static_cast<int32_t>(offsetof(U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC, ___U3CU3E3__name_6)); }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * get_U3CU3E3__name_6() const { return ___U3CU3E3__name_6; }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 ** get_address_of_U3CU3E3__name_6() { return &___U3CU3E3__name_6; }
	inline void set_U3CU3E3__name_6(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * value)
	{
		___U3CU3E3__name_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__name_6), (void*)value);
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


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
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


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
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


// System.Xml.Linq.XNode
struct XNode_tB88EE59443DF799686825ED2168D47C857C8CA99  : public XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6
{
public:
	// System.Xml.Linq.XNode System.Xml.Linq.XNode::next
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___next_1;

public:
	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99, ___next_1)); }
	inline XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * get_next_1() const { return ___next_1; }
	inline XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 ** get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * value)
	{
		___next_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_1), (void*)value);
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.WeakReference
struct WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76, ___gcHandle_1)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___gcHandle_1 = value;
	}
};


// System.Xml.Linq.XContainer
struct XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525  : public XNode_tB88EE59443DF799686825ED2168D47C857C8CA99
{
public:
	// System.Object System.Xml.Linq.XContainer::content
	RuntimeObject * ___content_2;

public:
	inline static int32_t get_offset_of_content_2() { return static_cast<int32_t>(offsetof(XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525, ___content_2)); }
	inline RuntimeObject * get_content_2() const { return ___content_2; }
	inline RuntimeObject ** get_address_of_content_2() { return &___content_2; }
	inline void set_content_2(RuntimeObject * value)
	{
		___content_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___content_2), (void*)value);
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

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Xml.Linq.XElement
struct XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5  : public XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525
{
public:
	// System.Xml.Linq.XName System.Xml.Linq.XElement::name
	XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name_3;

public:
	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5, ___name_3)); }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * get_name_3() const { return ___name_3; }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 ** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}
};


// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.WeakReference>
struct ExtractKeyDelegate_t11259FF9F9B2731017891756CE47308FEA3BF56F  : public MulticastDelegate_t
{
public:

public:
};


// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Xml.Linq.XName>
struct ExtractKeyDelegate_t497C1F3C8CA6FA376C383A6E622E18CFF278B78C  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A  : public InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_17;

public:
	inline static int32_t get_offset_of_objectName_17() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A, ___objectName_17)); }
	inline String_t* get_objectName_17() const { return ___objectName_17; }
	inline String_t** get_address_of_objectName_17() { return &___objectName_17; }
	inline void set_objectName_17(String_t* value)
	{
		___objectName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectName_17), (void*)value);
	}
};


// System.PlatformNotSupportedException
struct PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E  : public NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339
{
public:

public:
};


// Unity.ThrowStub
struct ThrowStub_t21447C6AE98553DD7B5605550AE707DD0C25D42D  : public ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Void System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractKeyDelegate__ctor_m9C7C3D1E55DE1C291769C69F8D87C6806F671A44_gshared (ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XHashtable`1<System.Object>::.ctor(System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1__ctor_mB4BD2615B8F54F8589333762FAF1C4A8807725FF_gshared (XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37 * __this, ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * ___extractKey0, int32_t ___capacity1, const RuntimeMethod* method);
// System.Boolean System.Xml.Linq.XHashtable`1<System.Object>::TryGetValue(System.String,System.Int32,System.Int32,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtable_1_TryGetValue_m7A823EC488B0CF6F3FFE7A1DD5D82997343784F0_gshared (XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37 * __this, String_t* ___key0, int32_t ___index1, int32_t ___count2, RuntimeObject ** ___value3, const RuntimeMethod* method);
// TValue System.Xml.Linq.XHashtable`1<System.Object>::Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XHashtable_1_Add_m675BFA5CB9B9AFF50836CB517F1C4C7E054629E1_gshared (XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);

// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.String System.Runtime.Serialization.SerializationInfo::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializationInfo_GetString_m50298DCBCD07D858EE19414052CB02EE4DDD3C2C (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Xml.Linq.XName System.Xml.Linq.XName::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * XName_Get_mFE26FB1696ED2D60324938EBEB37C0363637BAB7 (String_t* ___expandedName0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m627B7273A2428AFBCF4C41D574196135907A582D (String_t* ___s0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String System.Xml.Linq.Res::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750 (String_t* ___name0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_CurrentCulture_m99E5F5BD20445F2A73F7EA0014A4E783DF3840BB (const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21 (RuntimeObject* ___provider0, String_t* ___format1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method);
// System.Void System.PlatformNotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformNotSupportedException__ctor_mF4122BD5C9FF6CF441C2A4BCECF012EEF603AE05 (PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> System.Xml.Linq.XContainer::GetElements(System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XContainer_GetElements_mD0047470C5500C65C8EE064CEF831242E64766E3 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer/<GetElements>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetElementsU3Ed__40__ctor_mF908BE084ADA6F221E2B54376F43CF6A79676663 (U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::VerifyNCName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_VerifyNCName_m21986D07C46947592D5B6EC2114435AB92B9C942 (String_t* ___name0, const RuntimeMethod* method);
// System.String System.Xml.Linq.XNamespace::get_NamespaceName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XNamespace_get_NamespaceName_mD97F3E27C3274AEB1B8AE634BE739F44219992DB_inline (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.String System.Xml.Linq.Res::GetString(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Res_GetString_mA952BE145DB45E41118302D24CD5FF7772CDE9F0 (String_t* ___name0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::Get(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * XNamespace_Get_mF8EF85F60D3C811461541AC8FD3DCFF9C081BCAA (String_t* ___namespaceName0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method);
// System.Xml.Linq.XName System.Xml.Linq.XNamespace::GetName(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * XNamespace_GetName_m59979BF3C0D17127A15B3369152BA0821FB10794 (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * __this, String_t* ___localName0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method);
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * XNamespace_get_None_m2795996F3AD1908D3CFC3F1AFCD58CFBED61EFE0 (const RuntimeMethod* method);
// System.Xml.Linq.XName System.Xml.Linq.XNamespace::GetName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * XNamespace_GetName_mB9A7E789565459E55D929AF8F7C84CC38BBC8DFD (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * __this, String_t* ___localName0, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::SetType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_SetType_mD6F11DC42FDE78E7E8A58BC3D9E248E21BB37275 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Xml.Linq.XName>::.ctor(System.Object,System.IntPtr)
inline void ExtractKeyDelegate__ctor_m6EE51D51CEBD056B30D9A4F85A4501898480C5DE (ExtractKeyDelegate_t497C1F3C8CA6FA376C383A6E622E18CFF278B78C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ExtractKeyDelegate_t497C1F3C8CA6FA376C383A6E622E18CFF278B78C *, RuntimeObject *, intptr_t, const RuntimeMethod*))ExtractKeyDelegate__ctor_m9C7C3D1E55DE1C291769C69F8D87C6806F671A44_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Xml.Linq.XHashtable`1<System.Xml.Linq.XName>::.ctor(System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>,System.Int32)
inline void XHashtable_1__ctor_m36FDA2D50FF3D73A801A75D6B1E5D49A1D2F7632 (XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F * __this, ExtractKeyDelegate_t497C1F3C8CA6FA376C383A6E622E18CFF278B78C * ___extractKey0, int32_t ___capacity1, const RuntimeMethod* method)
{
	((  void (*) (XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F *, ExtractKeyDelegate_t497C1F3C8CA6FA376C383A6E622E18CFF278B78C *, int32_t, const RuntimeMethod*))XHashtable_1__ctor_mB4BD2615B8F54F8589333762FAF1C4A8807725FF_gshared)(__this, ___extractKey0, ___capacity1, method);
}
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::EnsureNamespace(System.WeakReference&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * XNamespace_EnsureNamespace_m0F4936CB583036C26C69C3DBBE0A37D4D3635F18 (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** ___refNmsp0, String_t* ___namespaceName1, const RuntimeMethod* method);
// System.Boolean System.Xml.Linq.XHashtable`1<System.Xml.Linq.XName>::TryGetValue(System.String,System.Int32,System.Int32,TValue&)
inline bool XHashtable_1_TryGetValue_mA51B0B689C3D0D7E88B62FA023BD37E404507697 (XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F * __this, String_t* ___key0, int32_t ___index1, int32_t ___count2, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 ** ___value3, const RuntimeMethod* method)
{
	return ((  bool (*) (XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F *, String_t*, int32_t, int32_t, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 **, const RuntimeMethod*))XHashtable_1_TryGetValue_m7A823EC488B0CF6F3FFE7A1DD5D82997343784F0_gshared)(__this, ___key0, ___index1, ___count2, ___value3, method);
}
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XName::.ctor(System.Xml.Linq.XNamespace,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XName__ctor_m08CA9A842644AFE1545DDFB3EA1BF011D797CE59 (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * __this, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___ns0, String_t* ___localName1, const RuntimeMethod* method);
// TValue System.Xml.Linq.XHashtable`1<System.Xml.Linq.XName>::Add(TValue)
inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * XHashtable_1_Add_m3D9D39AE72FEF8885FE759C8C3F2D81C12A81B2F (XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F * __this, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___value0, const RuntimeMethod* method)
{
	return ((  XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * (*) (XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F *, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *, const RuntimeMethod*))XHashtable_1_Add_m675BFA5CB9B9AFF50836CB517F1C4C7E054629E1_gshared)(__this, ___value0, method);
}
// System.Void System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.WeakReference>::.ctor(System.Object,System.IntPtr)
inline void ExtractKeyDelegate__ctor_m48CC0E7DB8DD7D4E987B0C6D4A1F3BA93726339A (ExtractKeyDelegate_t11259FF9F9B2731017891756CE47308FEA3BF56F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ExtractKeyDelegate_t11259FF9F9B2731017891756CE47308FEA3BF56F *, RuntimeObject *, intptr_t, const RuntimeMethod*))ExtractKeyDelegate__ctor_m9C7C3D1E55DE1C291769C69F8D87C6806F671A44_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Xml.Linq.XHashtable`1<System.WeakReference>::.ctor(System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>,System.Int32)
inline void XHashtable_1__ctor_m9DCA12E571A56E28A1DF7B4CED269AFA89672940 (XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD * __this, ExtractKeyDelegate_t11259FF9F9B2731017891756CE47308FEA3BF56F * ___extractKey0, int32_t ___capacity1, const RuntimeMethod* method)
{
	((  void (*) (XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD *, ExtractKeyDelegate_t11259FF9F9B2731017891756CE47308FEA3BF56F *, int32_t, const RuntimeMethod*))XHashtable_1__ctor_mB4BD2615B8F54F8589333762FAF1C4A8807725FF_gshared)(__this, ___extractKey0, ___capacity1, method);
}
// System.Boolean System.Xml.Linq.XHashtable`1<System.WeakReference>::TryGetValue(System.String,System.Int32,System.Int32,TValue&)
inline bool XHashtable_1_TryGetValue_m13319666DDA95B2D930D3D5328BD6C0BFD020AFE (XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD * __this, String_t* ___key0, int32_t ___index1, int32_t ___count2, WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** ___value3, const RuntimeMethod* method)
{
	return ((  bool (*) (XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD *, String_t*, int32_t, int32_t, WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **, const RuntimeMethod*))XHashtable_1_TryGetValue_m7A823EC488B0CF6F3FFE7A1DD5D82997343784F0_gshared)(__this, ___key0, ___index1, ___count2, ___value3, method);
}
// System.Int32 System.String::CompareOrdinal(System.String,System.Int32,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareOrdinal_m080D376EC2E7A0C528A440094A0DB97DFB34CD41 (String_t* ___strA0, int32_t ___indexA1, String_t* ___strB2, int32_t ___indexB3, int32_t ___length4, const RuntimeMethod* method);
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::get_Xml()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * XNamespace_get_Xml_mF816E04DDC8ED562C6B6E71449706594EECCA55E (const RuntimeMethod* method);
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::get_Xmlns()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * XNamespace_get_Xmlns_m140AE4DD66BD99100AA9492D105D3B1383BC5112 (const RuntimeMethod* method);
// System.Void System.Xml.Linq.XNamespace::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XNamespace__ctor_m032BFBA1A9B9D4B33642F96DB64DC4297F331617 (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * __this, String_t* ___namespaceName0, const RuntimeMethod* method);
// System.Void System.WeakReference::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m11BFDB039514BDCE23425FD90E8C414D051B2F13 (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * __this, RuntimeObject * ___target0, const RuntimeMethod* method);
// TValue System.Xml.Linq.XHashtable`1<System.WeakReference>::Add(TValue)
inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * XHashtable_1_Add_mE7AF7A056D777267667AB48389520BD99FECFB1C (XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD * __this, WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ___value0, const RuntimeMethod* method)
{
	return ((  WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * (*) (XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD *, WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *, const RuntimeMethod*))XHashtable_1_Add_m675BFA5CB9B9AFF50836CB517F1C4C7E054629E1_gshared)(__this, ___value0, method);
}
// System.Boolean System.Xml.Linq.XNamespace::op_Equality(System.Xml.Linq.XNamespace,System.Xml.Linq.XNamespace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XNamespace_op_Equality_m59C867B675C5C15015A9F081A6BD2A47370A4DBE (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___left0, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___right1, const RuntimeMethod* method);
// System.String System.Xml.Linq.XName::get_LocalName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XName_get_LocalName_m696497ACA70F6707FAF6DDC7B0FB4297D7F4A007_inline (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.Linq.XNamespace::op_Inequality(System.Xml.Linq.XNamespace,System.Xml.Linq.XNamespace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XNamespace_op_Inequality_m075CAE6D2922DE14AB223F9C4C290E9BC478CD12 (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___left0, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___right1, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Boolean System.Xml.Linq.XName::op_Equality(System.Xml.Linq.XName,System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XName_op_Equality_m303F10BF2291A8B7AD3E3ACB4BB00C0800777B06 (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___left0, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___right1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XElement> System.Xml.Linq.XContainer/<GetElements>d__40::System.Collections.Generic.IEnumerable<System.Xml.Linq.XElement>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetElementsU3Ed__40_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XElementU3E_GetEnumerator_m5985519113352CB9D6500FD7EE23018996093E8D (U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * __this, const RuntimeMethod* method);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m627B7273A2428AFBCF4C41D574196135907A582D (String_t* ___s0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_1, L_2, /*hidden argument*/NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_3^(int32_t)L_4)), (int32_t)((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
// System.Void System.Xml.Linq.NameSerializer::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameSerializer__ctor_mFF83F9040F5363B72D87DC6CCEA0321DB215F822 (NameSerializer_t49A4F679B483838B05DD1E2231CF9C4FAB125A45 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameSerializer__ctor_mFF83F9040F5363B72D87DC6CCEA0321DB215F822_RuntimeMethod_var)));
	}

IL_0014:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = SerializationInfo_GetString_m50298DCBCD07D858EE19414052CB02EE4DDD3C2C(L_2, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, /*hidden argument*/NULL);
		__this->set_expandedName_0(L_3);
		return;
	}
}
// System.Object System.Xml.Linq.NameSerializer::System.Runtime.Serialization.IObjectReference.GetRealObject(System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * NameSerializer_System_Runtime_Serialization_IObjectReference_GetRealObject_m67AA4E4AF30FB2A0898BEC4C2E9DB34BEA5AD4A6 (NameSerializer_t49A4F679B483838B05DD1E2231CF9C4FAB125A45 * __this, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_expandedName_0();
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_1;
		L_1 = XName_Get_mFE26FB1696ED2D60324938EBEB37C0363637BAB7(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Xml.Linq.NameSerializer::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameSerializer_System_Runtime_Serialization_ISerializable_GetObjectData_m309AB629E47E1D640D2A44960A9004BC34016B8C (NameSerializer_t49A4F679B483838B05DD1E2231CF9C4FAB125A45 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameSerializer_System_Runtime_Serialization_ISerializable_GetObjectData_m309AB629E47E1D640D2A44960A9004BC34016B8C_RuntimeMethod_var)));
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
// System.String System.Xml.Linq.Res::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral088A9A5E3B4F0C5B7CA099259703FC5AA6BA7C5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ABEBB01305DAD5CDC4ABC544CFEBCFEB1290EFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FE0357577FE6BDD9E51A23B11B887B73877D0AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11680B2FB0D0FC01D9AFDF475517284900ACFB79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral145ACF7B0AD8FB6FCA89E2F74EED12E94EC3A7E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19A2333FCD07371493EC6A40D0F145865A97BE75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral284BB8EA8CC921896C74586B4CEC5337B1525FC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31F8C4E9485B20B546C635CB7C6B559821CF1715);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38C66D82074221F9BF474E266F4485F93490FF1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B1FEDF0C4DF52130C3B66237FAB6509FA39A38D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C775B23554B97CFD8879DFA281939C311427192);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E06E7E4F8ED38905491595BD31A52DEEA86DBAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EA1556EC2451041F02B5E24CC1259B4F9C88E56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CF69E50664676AF96974413A4F4F427000D9619);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E4C5FABD283631DC7912E3AB1B252B989829C49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral501C7A99CB5D9B00206EDB627BD9F44F2FFFF7A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51E076C77A20C01FCA9E7EFBD613E0CE099CD99E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral538ED4DB2714E63F1702E3DC7ED7111FE51CB075);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57307604A13D96EA752170A81E5BBA1A66E7DD27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral582BE1949D522410D0C0CA69C37F3379F416C90B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B2A557B4B47ACB5849DADEBD641B0A73D5C5A0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CCCD2494E78C8BCB11782EA6F5BE4D70AD09654);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F2E3906078083B3F6EF50D81DCCBA5FBE0099F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65151EF1CE2870155EB1F4CF50191C136CBF7C27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral665790B550DE00E17BA971D1D60E8148C2C3CEFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral763B440B89C2BEAB56B575C7128AED7D0BF0D02D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BEC2F7CA45AAF0977D93E629BEDAA257CE32075);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C0D11305C4CE4883C53D10C917D9FEC585923B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DA684079C4910A68C26112D31B4F30B7602EED6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8410460AD56D52600FC1FDB68F42DAC9B13253F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral850779CE1C493FE4BB82FD830D211C5DC080E111);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C4D13815C4A9C6CE0C71EC81D9AEAA15F07F052);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DB0D0A6E34E903191ED08A3028F75FBFA429DAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EA4FEAB6355D2BF9CAD022606C89690929ADAB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FAA2E070FFBE18DB7236C5FBDA9522A6EB8E95B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9070F650E803F95AAF7F0424AC3CD59B848708B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral935ED84C03CE19EFAE29DD6987A405F64591906A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93ACD1E94819C250C280A5D433EB81D487EA36C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9415A429F11852DD4CCC80868C382788D76BD744);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E601A048BDE14CE54D8454BBD9B9A6EFB0EA02D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F7756F3BC424FA91FEB920E997A5D28CB0F1D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3A3C640F703360E63541701EA84B997C01338F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8DD31F05F41B09FE8B15F5B1ED920B57F9DD84B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB32CBA74471B0BEA9F5E6F2D81368851EB20F188);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC45C10F625DAF964B5295D59B33A9925EB8F882B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8E594A81BD02C38A87789127F45DB6050261191);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD81BDA78BCD57F79427E0E3EF951CA3C2F3104A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEBF7CCC7EBCDB19212EDC6A7AC1FC14F5B4B78E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0AD11967FD3AC7BB8160E4DE21B7F70A5DCE6D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD89180693C38BF429E9AF7466537CF6318F5CAE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9E30988DB4F13BB9F958646EC9E7FF9F399590A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC1E003403D94E4D0E795CA3BFED667F7CA0D66A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCAE0763CD303EC66D7B464B2BBEDB7CBD57E62C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE074D06CDFBA700869E4BF8CF358542E5E30BAA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5BF3A6C9BCB5E556DB62148F4FFB6D95E86A203);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6E3A8B3B29F9F1380AA2EB5EE7E038B27443D4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE72DBFC447E1D53312863F57EF2C05A706E17E85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED7EC29553ED94A7299E962F6977E154443E0A2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE8A3FF8F77EE2A54026CB8ACCB49E6814F9C9DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF1F4810BB2716A77F316168F198D71B1CCDF923);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1F4AB7959CA8C93DAD635616EBD31A69C0C9B65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB841A1E583CE3C43AA0486C84F6BD76B960A50E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDBD8FBE7D5D48AD37D3C8124A385028A3FE6B8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFF2135A9F37786CC0108D53D4AFCDF36E7B4E8F);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		String_t* L_0 = ___name0;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m627B7273A2428AFBCF4C41D574196135907A582D(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-1949800506)))))
		{
			goto IL_0125;
		}
	}
	{
		uint32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)626770679)))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)272356109)))))
		{
			goto IL_0063;
		}
	}
	{
		uint32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)85233838)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)15713876))))
		{
			goto IL_0355;
		}
	}
	{
		uint32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)85233838))))
		{
			goto IL_0394;
		}
	}
	{
		goto IL_058f;
	}

IL_0048:
	{
		uint32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)103965186))))
		{
			goto IL_0412;
		}
	}
	{
		uint32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)272356109))))
		{
			goto IL_043c;
		}
	}
	{
		goto IL_058f;
	}

IL_0063:
	{
		uint32_t L_10 = V_0;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)569780718)))))
		{
			goto IL_0086;
		}
	}
	{
		uint32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)407913795))))
		{
			goto IL_02ec;
		}
	}
	{
		uint32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)569780718))))
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_058f;
	}

IL_0086:
	{
		uint32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)625070019))))
		{
			goto IL_0451;
		}
	}
	{
		uint32_t L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)626770679))))
		{
			goto IL_0427;
		}
	}
	{
		goto IL_058f;
	}

IL_00a1:
	{
		uint32_t L_15 = V_0;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1639487891)))))
		{
			goto IL_00e7;
		}
	}
	{
		uint32_t L_16 = V_0;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)1004902937)))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)922706940))))
		{
			goto IL_0298;
		}
	}
	{
		uint32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)1004902937))))
		{
			goto IL_036a;
		}
	}
	{
		goto IL_058f;
	}

IL_00cc:
	{
		uint32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)1405029661))))
		{
			goto IL_047b;
		}
	}
	{
		uint32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)1639487891))))
		{
			goto IL_0301;
		}
	}
	{
		goto IL_058f;
	}

IL_00e7:
	{
		uint32_t L_21 = V_0;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)1755217186)))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_22 = V_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)1718317927))))
		{
			goto IL_032b;
		}
	}
	{
		uint32_t L_23 = V_0;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)1755217186))))
		{
			goto IL_03a9;
		}
	}
	{
		goto IL_058f;
	}

IL_010a:
	{
		uint32_t L_24 = V_0;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)1837980878))))
		{
			goto IL_03d3;
		}
	}
	{
		uint32_t L_25 = V_0;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-1949800506))))
		{
			goto IL_02ad;
		}
	}
	{
		goto IL_058f;
	}

IL_0125:
	{
		uint32_t L_26 = V_0;
		if ((!(((uint32_t)L_26) <= ((uint32_t)((int32_t)-784584768)))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_0;
		if ((!(((uint32_t)L_27) <= ((uint32_t)((int32_t)-1014396228)))))
		{
			goto IL_0176;
		}
	}
	{
		uint32_t L_28 = V_0;
		if ((!(((uint32_t)L_28) <= ((uint32_t)((int32_t)-1803877632)))))
		{
			goto IL_015b;
		}
	}
	{
		uint32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)-1857585789))))
		{
			goto IL_03e8;
		}
	}
	{
		uint32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)-1803877632))))
		{
			goto IL_03be;
		}
	}
	{
		goto IL_058f;
	}

IL_015b:
	{
		uint32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)-1122788132))))
		{
			goto IL_0316;
		}
	}
	{
		uint32_t L_32 = V_0;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)-1014396228))))
		{
			goto IL_02d7;
		}
	}
	{
		goto IL_058f;
	}

IL_0176:
	{
		uint32_t L_33 = V_0;
		if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)-864757643)))))
		{
			goto IL_0199;
		}
	}
	{
		uint32_t L_34 = V_0;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)-906458386))))
		{
			goto IL_026e;
		}
	}
	{
		uint32_t L_35 = V_0;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)-864757643))))
		{
			goto IL_0340;
		}
	}
	{
		goto IL_058f;
	}

IL_0199:
	{
		uint32_t L_36 = V_0;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)-863392252))))
		{
			goto IL_0259;
		}
	}
	{
		uint32_t L_37 = V_0;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)-784584768))))
		{
			goto IL_037f;
		}
	}
	{
		goto IL_058f;
	}

IL_01b4:
	{
		uint32_t L_38 = V_0;
		if ((!(((uint32_t)L_38) <= ((uint32_t)((int32_t)-571087830)))))
		{
			goto IL_01f7;
		}
	}
	{
		uint32_t L_39 = V_0;
		if ((!(((uint32_t)L_39) <= ((uint32_t)((int32_t)-700897642)))))
		{
			goto IL_01df;
		}
	}
	{
		uint32_t L_40 = V_0;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)-755692016))))
		{
			goto IL_0490;
		}
	}
	{
		uint32_t L_41 = V_0;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)-700897642))))
		{
			goto IL_03fd;
		}
	}
	{
		goto IL_058f;
	}

IL_01df:
	{
		uint32_t L_42 = V_0;
		if ((((int32_t)L_42) == ((int32_t)((int32_t)-666966205))))
		{
			goto IL_04a5;
		}
	}
	{
		uint32_t L_43 = V_0;
		if ((((int32_t)L_43) == ((int32_t)((int32_t)-571087830))))
		{
			goto IL_0244;
		}
	}
	{
		goto IL_058f;
	}

IL_01f7:
	{
		uint32_t L_44 = V_0;
		if ((!(((uint32_t)L_44) <= ((uint32_t)((int32_t)-497792745)))))
		{
			goto IL_0217;
		}
	}
	{
		uint32_t L_45 = V_0;
		if ((((int32_t)L_45) == ((int32_t)((int32_t)-560446364))))
		{
			goto IL_0283;
		}
	}
	{
		uint32_t L_46 = V_0;
		if ((((int32_t)L_46) == ((int32_t)((int32_t)-497792745))))
		{
			goto IL_0466;
		}
	}
	{
		goto IL_058f;
	}

IL_0217:
	{
		uint32_t L_47 = V_0;
		if ((((int32_t)L_47) == ((int32_t)((int32_t)-492803734))))
		{
			goto IL_022f;
		}
	}
	{
		uint32_t L_48 = V_0;
		if ((((int32_t)L_48) == ((int32_t)((int32_t)-461614960))))
		{
			goto IL_04ba;
		}
	}
	{
		goto IL_058f;
	}

IL_022f:
	{
		String_t* L_49 = ___name0;
		bool L_50;
		L_50 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_49, _stringLiteralB32CBA74471B0BEA9F5E6F2D81368851EB20F188, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_04cf;
		}
	}
	{
		goto IL_058f;
	}

IL_0244:
	{
		String_t* L_51 = ___name0;
		bool L_52;
		L_52 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_51, _stringLiteral4E4C5FABD283631DC7912E3AB1B252B989829C49, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_04d5;
		}
	}
	{
		goto IL_058f;
	}

IL_0259:
	{
		String_t* L_53 = ___name0;
		bool L_54;
		L_54 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_53, _stringLiteral582BE1949D522410D0C0CA69C37F3379F416C90B, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_04db;
		}
	}
	{
		goto IL_058f;
	}

IL_026e:
	{
		String_t* L_55 = ___name0;
		bool L_56;
		L_56 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_55, _stringLiteralFFF2135A9F37786CC0108D53D4AFCDF36E7B4E8F, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_04e1;
		}
	}
	{
		goto IL_058f;
	}

IL_0283:
	{
		String_t* L_57 = ___name0;
		bool L_58;
		L_58 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_57, _stringLiteralD89180693C38BF429E9AF7466537CF6318F5CAE5, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_04e7;
		}
	}
	{
		goto IL_058f;
	}

IL_0298:
	{
		String_t* L_59 = ___name0;
		bool L_60;
		L_60 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_59, _stringLiteral5B2A557B4B47ACB5849DADEBD641B0A73D5C5A0E, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_04ed;
		}
	}
	{
		goto IL_058f;
	}

IL_02ad:
	{
		String_t* L_61 = ___name0;
		bool L_62;
		L_62 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_61, _stringLiteralF1F4AB7959CA8C93DAD635616EBD31A69C0C9B65, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_04f3;
		}
	}
	{
		goto IL_058f;
	}

IL_02c2:
	{
		String_t* L_63 = ___name0;
		bool L_64;
		L_64 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_63, _stringLiteral9415A429F11852DD4CCC80868C382788D76BD744, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_04f9;
		}
	}
	{
		goto IL_058f;
	}

IL_02d7:
	{
		String_t* L_65 = ___name0;
		bool L_66;
		L_66 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_65, _stringLiteral284BB8EA8CC921896C74586B4CEC5337B1525FC9, /*hidden argument*/NULL);
		if (L_66)
		{
			goto IL_04ff;
		}
	}
	{
		goto IL_058f;
	}

IL_02ec:
	{
		String_t* L_67 = ___name0;
		bool L_68;
		L_68 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_67, _stringLiteral8EA4FEAB6355D2BF9CAD022606C89690929ADAB3, /*hidden argument*/NULL);
		if (L_68)
		{
			goto IL_0505;
		}
	}
	{
		goto IL_058f;
	}

IL_0301:
	{
		String_t* L_69 = ___name0;
		bool L_70;
		L_70 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_69, _stringLiteral31F8C4E9485B20B546C635CB7C6B559821CF1715, /*hidden argument*/NULL);
		if (L_70)
		{
			goto IL_050b;
		}
	}
	{
		goto IL_058f;
	}

IL_0316:
	{
		String_t* L_71 = ___name0;
		bool L_72;
		L_72 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_71, _stringLiteralEE8A3FF8F77EE2A54026CB8ACCB49E6814F9C9DF, /*hidden argument*/NULL);
		if (L_72)
		{
			goto IL_0511;
		}
	}
	{
		goto IL_058f;
	}

IL_032b:
	{
		String_t* L_73 = ___name0;
		bool L_74;
		L_74 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_73, _stringLiteral665790B550DE00E17BA971D1D60E8148C2C3CEFB, /*hidden argument*/NULL);
		if (L_74)
		{
			goto IL_0517;
		}
	}
	{
		goto IL_058f;
	}

IL_0340:
	{
		String_t* L_75 = ___name0;
		bool L_76;
		L_76 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_75, _stringLiteralC45C10F625DAF964B5295D59B33A9925EB8F882B, /*hidden argument*/NULL);
		if (L_76)
		{
			goto IL_051d;
		}
	}
	{
		goto IL_058f;
	}

IL_0355:
	{
		String_t* L_77 = ___name0;
		bool L_78;
		L_78 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_77, _stringLiteralE72DBFC447E1D53312863F57EF2C05A706E17E85, /*hidden argument*/NULL);
		if (L_78)
		{
			goto IL_0523;
		}
	}
	{
		goto IL_058f;
	}

IL_036a:
	{
		String_t* L_79 = ___name0;
		bool L_80;
		L_80 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_79, _stringLiteral19A2333FCD07371493EC6A40D0F145865A97BE75, /*hidden argument*/NULL);
		if (L_80)
		{
			goto IL_0529;
		}
	}
	{
		goto IL_058f;
	}

IL_037f:
	{
		String_t* L_81 = ___name0;
		bool L_82;
		L_82 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_81, _stringLiteral0FE0357577FE6BDD9E51A23B11B887B73877D0AA, /*hidden argument*/NULL);
		if (L_82)
		{
			goto IL_052f;
		}
	}
	{
		goto IL_058f;
	}

IL_0394:
	{
		String_t* L_83 = ___name0;
		bool L_84;
		L_84 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_83, _stringLiteralCD81BDA78BCD57F79427E0E3EF951CA3C2F3104A, /*hidden argument*/NULL);
		if (L_84)
		{
			goto IL_0535;
		}
	}
	{
		goto IL_058f;
	}

IL_03a9:
	{
		String_t* L_85 = ___name0;
		bool L_86;
		L_86 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_85, _stringLiteral5CCCD2494E78C8BCB11782EA6F5BE4D70AD09654, /*hidden argument*/NULL);
		if (L_86)
		{
			goto IL_053b;
		}
	}
	{
		goto IL_058f;
	}

IL_03be:
	{
		String_t* L_87 = ___name0;
		bool L_88;
		L_88 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_87, _stringLiteralD0AD11967FD3AC7BB8160E4DE21B7F70A5DCE6D2, /*hidden argument*/NULL);
		if (L_88)
		{
			goto IL_0541;
		}
	}
	{
		goto IL_058f;
	}

IL_03d3:
	{
		String_t* L_89 = ___name0;
		bool L_90;
		L_90 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_89, _stringLiteral088A9A5E3B4F0C5B7CA099259703FC5AA6BA7C5E, /*hidden argument*/NULL);
		if (L_90)
		{
			goto IL_0547;
		}
	}
	{
		goto IL_058f;
	}

IL_03e8:
	{
		String_t* L_91 = ___name0;
		bool L_92;
		L_92 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_91, _stringLiteral3E06E7E4F8ED38905491595BD31A52DEEA86DBAF, /*hidden argument*/NULL);
		if (L_92)
		{
			goto IL_054d;
		}
	}
	{
		goto IL_058f;
	}

IL_03fd:
	{
		String_t* L_93 = ___name0;
		bool L_94;
		L_94 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_93, _stringLiteral7BEC2F7CA45AAF0977D93E629BEDAA257CE32075, /*hidden argument*/NULL);
		if (L_94)
		{
			goto IL_0553;
		}
	}
	{
		goto IL_058f;
	}

IL_0412:
	{
		String_t* L_95 = ___name0;
		bool L_96;
		L_96 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_95, _stringLiteralED7EC29553ED94A7299E962F6977E154443E0A2B, /*hidden argument*/NULL);
		if (L_96)
		{
			goto IL_0559;
		}
	}
	{
		goto IL_058f;
	}

IL_0427:
	{
		String_t* L_97 = ___name0;
		bool L_98;
		L_98 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_97, _stringLiteralD9E30988DB4F13BB9F958646EC9E7FF9F399590A, /*hidden argument*/NULL);
		if (L_98)
		{
			goto IL_055f;
		}
	}
	{
		goto IL_058f;
	}

IL_043c:
	{
		String_t* L_99 = ___name0;
		bool L_100;
		L_100 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_99, _stringLiteral8FAA2E070FFBE18DB7236C5FBDA9522A6EB8E95B, /*hidden argument*/NULL);
		if (L_100)
		{
			goto IL_0565;
		}
	}
	{
		goto IL_058f;
	}

IL_0451:
	{
		String_t* L_101 = ___name0;
		bool L_102;
		L_102 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_101, _stringLiteral501C7A99CB5D9B00206EDB627BD9F44F2FFFF7A0, /*hidden argument*/NULL);
		if (L_102)
		{
			goto IL_056b;
		}
	}
	{
		goto IL_058f;
	}

IL_0466:
	{
		String_t* L_103 = ___name0;
		bool L_104;
		L_104 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_103, _stringLiteralCEBF7CCC7EBCDB19212EDC6A7AC1FC14F5B4B78E, /*hidden argument*/NULL);
		if (L_104)
		{
			goto IL_0571;
		}
	}
	{
		goto IL_058f;
	}

IL_047b:
	{
		String_t* L_105 = ___name0;
		bool L_106;
		L_106 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_105, _stringLiteralA3A3C640F703360E63541701EA84B997C01338F3, /*hidden argument*/NULL);
		if (L_106)
		{
			goto IL_0577;
		}
	}
	{
		goto IL_058f;
	}

IL_0490:
	{
		String_t* L_107 = ___name0;
		bool L_108;
		L_108 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_107, _stringLiteral57307604A13D96EA752170A81E5BBA1A66E7DD27, /*hidden argument*/NULL);
		if (L_108)
		{
			goto IL_057d;
		}
	}
	{
		goto IL_058f;
	}

IL_04a5:
	{
		String_t* L_109 = ___name0;
		bool L_110;
		L_110 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_109, _stringLiteral65151EF1CE2870155EB1F4CF50191C136CBF7C27, /*hidden argument*/NULL);
		if (L_110)
		{
			goto IL_0583;
		}
	}
	{
		goto IL_058f;
	}

IL_04ba:
	{
		String_t* L_111 = ___name0;
		bool L_112;
		L_112 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_111, _stringLiteralC8E594A81BD02C38A87789127F45DB6050261191, /*hidden argument*/NULL);
		if (L_112)
		{
			goto IL_0589;
		}
	}
	{
		goto IL_058f;
	}

IL_04cf:
	{
		return _stringLiteral9070F650E803F95AAF7F0424AC3CD59B848708B7;
	}

IL_04d5:
	{
		return _stringLiteral38C66D82074221F9BF474E266F4485F93490FF1A;
	}

IL_04db:
	{
		return _stringLiteralE5BF3A6C9BCB5E556DB62148F4FFB6D95E86A203;
	}

IL_04e1:
	{
		return _stringLiteral3EA1556EC2451041F02B5E24CC1259B4F9C88E56;
	}

IL_04e7:
	{
		return _stringLiteralFDBD8FBE7D5D48AD37D3C8124A385028A3FE6B8A;
	}

IL_04ed:
	{
		return _stringLiteral9F7756F3BC424FA91FEB920E997A5D28CB0F1D32;
	}

IL_04f3:
	{
		return _stringLiteral8DB0D0A6E34E903191ED08A3028F75FBFA429DAE;
	}

IL_04f9:
	{
		return _stringLiteral51E076C77A20C01FCA9E7EFBD613E0CE099CD99E;
	}

IL_04ff:
	{
		return _stringLiteral7DA684079C4910A68C26112D31B4F30B7602EED6;
	}

IL_0505:
	{
		return _stringLiteral3B1FEDF0C4DF52130C3B66237FAB6509FA39A38D;
	}

IL_050b:
	{
		return _stringLiteralA8DD31F05F41B09FE8B15F5B1ED920B57F9DD84B;
	}

IL_0511:
	{
		return _stringLiteralDCAE0763CD303EC66D7B464B2BBEDB7CBD57E62C;
	}

IL_0517:
	{
		return _stringLiteralE074D06CDFBA700869E4BF8CF358542E5E30BAA8;
	}

IL_051d:
	{
		return _stringLiteralFB841A1E583CE3C43AA0486C84F6BD76B960A50E;
	}

IL_0523:
	{
		return _stringLiteral7C0D11305C4CE4883C53D10C917D9FEC585923B0;
	}

IL_0529:
	{
		return _stringLiteral935ED84C03CE19EFAE29DD6987A405F64591906A;
	}

IL_052f:
	{
		return _stringLiteral4CF69E50664676AF96974413A4F4F427000D9619;
	}

IL_0535:
	{
		return _stringLiteralEF1F4810BB2716A77F316168F198D71B1CCDF923;
	}

IL_053b:
	{
		return _stringLiteral145ACF7B0AD8FB6FCA89E2F74EED12E94EC3A7E8;
	}

IL_0541:
	{
		return _stringLiteralDC1E003403D94E4D0E795CA3BFED667F7CA0D66A;
	}

IL_0547:
	{
		return _stringLiteral3C775B23554B97CFD8879DFA281939C311427192;
	}

IL_054d:
	{
		return _stringLiteral93ACD1E94819C250C280A5D433EB81D487EA36C6;
	}

IL_0553:
	{
		return _stringLiteral763B440B89C2BEAB56B575C7128AED7D0BF0D02D;
	}

IL_0559:
	{
		return _stringLiteralE6E3A8B3B29F9F1380AA2EB5EE7E038B27443D4F;
	}

IL_055f:
	{
		return _stringLiteral5F2E3906078083B3F6EF50D81DCCBA5FBE0099F0;
	}

IL_0565:
	{
		return _stringLiteral9E601A048BDE14CE54D8454BBD9B9A6EFB0EA02D;
	}

IL_056b:
	{
		return _stringLiteral11680B2FB0D0FC01D9AFDF475517284900ACFB79;
	}

IL_0571:
	{
		return _stringLiteral850779CE1C493FE4BB82FD830D211C5DC080E111;
	}

IL_0577:
	{
		return _stringLiteral538ED4DB2714E63F1702E3DC7ED7111FE51CB075;
	}

IL_057d:
	{
		return _stringLiteral8C4D13815C4A9C6CE0C71EC81D9AEAA15F07F052;
	}

IL_0583:
	{
		return _stringLiteral8410460AD56D52600FC1FDB68F42DAC9B13253F9;
	}

IL_0589:
	{
		return _stringLiteral0ABEBB01305DAD5CDC4ABC544CFEBCFEB1290EFC;
	}

IL_058f:
	{
		return (String_t*)NULL;
	}
}
// System.String System.Xml.Linq.Res::GetString(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Res_GetString_mA952BE145DB45E41118302D24CD5FF7772CDE9F0 (String_t* ___name0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___name0;
		String_t* L_1;
		L_1 = Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args1;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args1;
		NullCheck(L_3);
		if ((((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0010;
		}
	}

IL_000e:
	{
		String_t* L_4 = V_0;
		return L_4;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_5;
		L_5 = CultureInfo_get_CurrentCulture_m99E5F5BD20445F2A73F7EA0014A4E783DF3840BB(/*hidden argument*/NULL);
		String_t* L_6 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = ___args1;
		String_t* L_8;
		L_8 = String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21(L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
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
// System.Void Unity.ThrowStub::ThrowNotSupportedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowStub_ThrowNotSupportedException_m1B65D6A1FF55272EEE13380F3E7C53E2015C3F44 (const RuntimeMethod* method)
{
	{
		PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E * L_0 = (PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E_il2cpp_TypeInfo_var)));
		PlatformNotSupportedException__ctor_mF4122BD5C9FF6CF441C2A4BCECF012EEF603AE05(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowStub_ThrowNotSupportedException_m1B65D6A1FF55272EEE13380F3E7C53E2015C3F44_RuntimeMethod_var)));
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
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> System.Xml.Linq.XContainer::Elements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XContainer_Elements_mE3525ED34CA3769624CB81CF4501C662FE824DB3 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = XContainer_GetElements_mD0047470C5500C65C8EE064CEF831242E64766E3(__this, (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> System.Xml.Linq.XContainer::GetElements(System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XContainer_GetElements_mD0047470C5500C65C8EE064CEF831242E64766E3 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * L_0 = (U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC *)il2cpp_codegen_object_new(U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC_il2cpp_TypeInfo_var);
		U3CGetElementsU3Ed__40__ctor_mF908BE084ADA6F221E2B54376F43CF6A79676663(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * L_2 = L_1;
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_3 = ___name0;
		NullCheck(L_2);
		L_2->set_U3CU3E3__name_6(L_3);
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
// System.Xml.Linq.XName System.Xml.Linq.XElement::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * XElement_get_Name_m1154DCAA063C86BB056B2A49FF9C4FA65CEEAD3D (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, const RuntimeMethod* method)
{
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_0 = __this->get_name_3();
		return L_0;
	}
}
// System.String System.Xml.Linq.XElement::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XElement_get_Value_mBD9F8869BF4F3865FEDED418854020E9AFF031FA (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringBuilder_t * V_1 = NULL;
	{
		RuntimeObject * L_0 = ((XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 *)__this)->get_content_2();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_1;
	}

IL_000e:
	{
		RuntimeObject * L_2 = ((XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 *)__this)->get_content_2();
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		String_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_4 = V_0;
		return L_4;
	}

IL_001f:
	{
		StringBuilder_t * L_5 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		StringBuilder_t * L_6 = V_1;
		VirtActionInvoker1< StringBuilder_t * >::Invoke(4 /* System.Void System.Xml.Linq.XNode::AppendText(System.Text.StringBuilder) */, __this, L_6);
		StringBuilder_t * L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		return L_8;
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
// System.Void System.Xml.Linq.XName::.ctor(System.Xml.Linq.XNamespace,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XName__ctor_m08CA9A842644AFE1545DDFB3EA1BF011D797CE59 (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * __this, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___ns0, String_t* ___localName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D0BE0A0EE15E2D3EC7F4881C519B5137DFA370A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_0 = ___ns0;
		__this->set_ns_0(L_0);
		String_t* L_1 = ___localName1;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t5D0BE0A0EE15E2D3EC7F4881C519B5137DFA370A_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = XmlConvert_VerifyNCName_m21986D07C46947592D5B6EC2114435AB92B9C942(L_1, /*hidden argument*/NULL);
		__this->set_localName_1(L_2);
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_3 = ___ns0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_3);
		String_t* L_5 = ___localName1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		__this->set_hashCode_2(((int32_t)((int32_t)L_4^(int32_t)L_6)));
		return;
	}
}
// System.String System.Xml.Linq.XName::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XName_get_LocalName_m696497ACA70F6707FAF6DDC7B0FB4297D7F4A007 (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_localName_1();
		return L_0;
	}
}
// System.String System.Xml.Linq.XName::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XName_ToString_m5095F3F0750DD9AF19A7A4817CECD4192B4C0DD7 (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		s_Il2CppMethodInitialized = true;
	}
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_0 = __this->get_ns_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XNamespace_get_NamespaceName_mD97F3E27C3274AEB1B8AE634BE739F44219992DB_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_3 = __this->get_localName_1();
		return L_3;
	}

IL_0019:
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_4 = __this->get_ns_0();
		NullCheck(L_4);
		String_t* L_5;
		L_5 = XNamespace_get_NamespaceName_mD97F3E27C3274AEB1B8AE634BE739F44219992DB_inline(L_4, /*hidden argument*/NULL);
		String_t* L_6 = __this->get_localName_1();
		String_t* L_7;
		L_7 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, L_5, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Xml.Linq.XName System.Xml.Linq.XName::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * XName_Get_mFE26FB1696ED2D60324938EBEB37C0363637BAB7 (String_t* ___expandedName0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___expandedName0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0585B1F8C119DD15D843D55F7CCBF9D9162B9AC8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XName_Get_mFE26FB1696ED2D60324938EBEB37C0363637BAB7_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___expandedName0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_4;
		String_t* L_6 = ___expandedName0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		String_t* L_7;
		L_7 = Res_GetString_mA952BE145DB45E41118302D24CD5FF7772CDE9F0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B2A557B4B47ACB5849DADEBD641B0A73D5C5A0E)), L_5, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XName_Get_mFE26FB1696ED2D60324938EBEB37C0363637BAB7_RuntimeMethod_var)));
	}

IL_0030:
	{
		String_t* L_9 = ___expandedName0;
		NullCheck(L_9);
		Il2CppChar L_10;
		L_10 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_9, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_008b;
		}
	}
	{
		String_t* L_11 = ___expandedName0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826(L_11, ((int32_t)125), /*hidden argument*/NULL);
		V_0 = L_12;
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_14 = V_0;
		String_t* L_15 = ___expandedName0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_15, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1))))))
		{
			goto IL_006d;
		}
	}

IL_0053:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_17;
		String_t* L_19 = ___expandedName0;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_19);
		String_t* L_20;
		L_20 = Res_GetString_mA952BE145DB45E41118302D24CD5FF7772CDE9F0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B2A557B4B47ACB5849DADEBD641B0A73D5C5A0E)), L_18, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_21 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_21, L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XName_Get_mFE26FB1696ED2D60324938EBEB37C0363637BAB7_RuntimeMethod_var)));
	}

IL_006d:
	{
		String_t* L_22 = ___expandedName0;
		int32_t L_23 = V_0;
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_24;
		L_24 = XNamespace_Get_mF8EF85F60D3C811461541AC8FD3DCFF9C081BCAA(L_22, 1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1)), /*hidden argument*/NULL);
		String_t* L_25 = ___expandedName0;
		int32_t L_26 = V_0;
		String_t* L_27 = ___expandedName0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_27, /*hidden argument*/NULL);
		int32_t L_29 = V_0;
		NullCheck(L_24);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_30;
		L_30 = XNamespace_GetName_m59979BF3C0D17127A15B3369152BA0821FB10794(L_24, L_25, ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)L_29)), (int32_t)1)), /*hidden argument*/NULL);
		return L_30;
	}

IL_008b:
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_31;
		L_31 = XNamespace_get_None_m2795996F3AD1908D3CFC3F1AFCD58CFBED61EFE0(/*hidden argument*/NULL);
		String_t* L_32 = ___expandedName0;
		NullCheck(L_31);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_33;
		L_33 = XNamespace_GetName_mB9A7E789565459E55D929AF8F7C84CC38BBC8DFD(L_31, L_32, /*hidden argument*/NULL);
		return L_33;
	}
}
// System.Boolean System.Xml.Linq.XName::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XName_Equals_m688E6032F6F05612771D7E920B5CD1723D7EF24A (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		return (bool)((((RuntimeObject*)(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)__this) == ((RuntimeObject*)(RuntimeObject *)L_0))? 1 : 0);
	}
}
// System.Int32 System.Xml.Linq.XName::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XName_GetHashCode_m4B3D379685B914C9BA6E29BB4A861853AF582D3A (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_hashCode_2();
		return L_0;
	}
}
// System.Boolean System.Xml.Linq.XName::op_Equality(System.Xml.Linq.XName,System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XName_op_Equality_m303F10BF2291A8B7AD3E3ACB4BB00C0800777B06 (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___left0, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___right1, const RuntimeMethod* method)
{
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_0 = ___left0;
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_1 = ___right1;
		return (bool)((((RuntimeObject*)(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)L_0) == ((RuntimeObject*)(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)L_1))? 1 : 0);
	}
}
// System.Boolean System.Xml.Linq.XName::System.IEquatable<System.Xml.Linq.XName>.Equals(System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XName_System_IEquatableU3CSystem_Xml_Linq_XNameU3E_Equals_mCDE24CE750E5DB3C7E3432F457FCFE7C6657FF81 (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * __this, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___other0, const RuntimeMethod* method)
{
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_0 = ___other0;
		return (bool)((((RuntimeObject*)(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)__this) == ((RuntimeObject*)(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)L_0))? 1 : 0);
	}
}
// System.Void System.Xml.Linq.XName::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XName_System_Runtime_Serialization_ISerializable_GetObjectData_m45F244C932C673A2DBB248CDD1A640138A02DAFA (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameSerializer_t49A4F679B483838B05DD1E2231CF9C4FAB125A45_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XName_System_Runtime_Serialization_ISerializable_GetObjectData_m45F244C932C673A2DBB248CDD1A640138A02DAFA_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		NullCheck(L_2);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_2, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_3, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (NameSerializer_t49A4F679B483838B05DD1E2231CF9C4FAB125A45_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		SerializationInfo_SetType_mD6F11DC42FDE78E7E8A58BC3D9E248E21BB37275(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Linq.XName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XName__ctor_m2D7B85963C672FA3E6E5559CC101F790A4757ECE (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XName__ctor_m2D7B85963C672FA3E6E5559CC101F790A4757ECE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(XName__ctor_m2D7B85963C672FA3E6E5559CC101F790A4757ECE_RuntimeMethod_var);
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
// System.Void System.Xml.Linq.XNamespace::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XNamespace__ctor_m032BFBA1A9B9D4B33642F96DB64DC4297F331617 (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * __this, String_t* ___namespaceName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtractKeyDelegate__ctor_m6EE51D51CEBD056B30D9A4F85A4501898480C5DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtractKeyDelegate_t497C1F3C8CA6FA376C383A6E622E18CFF278B78C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XHashtable_1__ctor_m36FDA2D50FF3D73A801A75D6B1E5D49A1D2F7632_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNamespace_ExtractLocalName_mFFC3D4C8CA969449FAD1F029330DED93180959A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___namespaceName0;
		__this->set_namespaceName_4(L_0);
		String_t* L_1 = ___namespaceName0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		__this->set_hashCode_5(L_2);
		ExtractKeyDelegate_t497C1F3C8CA6FA376C383A6E622E18CFF278B78C * L_3 = (ExtractKeyDelegate_t497C1F3C8CA6FA376C383A6E622E18CFF278B78C *)il2cpp_codegen_object_new(ExtractKeyDelegate_t497C1F3C8CA6FA376C383A6E622E18CFF278B78C_il2cpp_TypeInfo_var);
		ExtractKeyDelegate__ctor_m6EE51D51CEBD056B30D9A4F85A4501898480C5DE(L_3, NULL, (intptr_t)((intptr_t)XNamespace_ExtractLocalName_mFFC3D4C8CA969449FAD1F029330DED93180959A9_RuntimeMethod_var), /*hidden argument*/ExtractKeyDelegate__ctor_m6EE51D51CEBD056B30D9A4F85A4501898480C5DE_RuntimeMethod_var);
		XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F * L_4 = (XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F *)il2cpp_codegen_object_new(XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F_il2cpp_TypeInfo_var);
		XHashtable_1__ctor_m36FDA2D50FF3D73A801A75D6B1E5D49A1D2F7632(L_4, L_3, 8, /*hidden argument*/XHashtable_1__ctor_m36FDA2D50FF3D73A801A75D6B1E5D49A1D2F7632_RuntimeMethod_var);
		__this->set_names_6(L_4);
		return;
	}
}
// System.String System.Xml.Linq.XNamespace::get_NamespaceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XNamespace_get_NamespaceName_mD97F3E27C3274AEB1B8AE634BE739F44219992DB (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_namespaceName_4();
		return L_0;
	}
}
// System.Xml.Linq.XName System.Xml.Linq.XNamespace::GetName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * XNamespace_GetName_mB9A7E789565459E55D929AF8F7C84CC38BBC8DFD (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * __this, String_t* ___localName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___localName0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral751B5F3E33CE57A71852A78FFD92E0813DACD5C0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XNamespace_GetName_mB9A7E789565459E55D929AF8F7C84CC38BBC8DFD_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___localName0;
		String_t* L_3 = ___localName0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_3, /*hidden argument*/NULL);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_5;
		L_5 = XNamespace_GetName_m59979BF3C0D17127A15B3369152BA0821FB10794(__this, L_2, 0, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.String System.Xml.Linq.XNamespace::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XNamespace_ToString_m1D5D03F1C2C1374DFCE24FB397394CD76584BC70 (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_namespaceName_4();
		return L_0;
	}
}
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * XNamespace_get_None_m2795996F3AD1908D3CFC3F1AFCD58CFBED61EFE0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_1;
		L_1 = XNamespace_EnsureNamespace_m0F4936CB583036C26C69C3DBBE0A37D4D3635F18((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(((XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_StaticFields*)il2cpp_codegen_static_fields_for(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var))->get_address_of_refNone_1()), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::get_Xml()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * XNamespace_get_Xml_mF816E04DDC8ED562C6B6E71449706594EECCA55E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral349C6DC0F34B9BA242E4C728EDD28CAB809D4917);
		s_Il2CppMethodInitialized = true;
	}
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_0;
		L_0 = XNamespace_EnsureNamespace_m0F4936CB583036C26C69C3DBBE0A37D4D3635F18((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(((XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_StaticFields*)il2cpp_codegen_static_fields_for(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var))->get_address_of_refXml_2()), _stringLiteral349C6DC0F34B9BA242E4C728EDD28CAB809D4917, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::get_Xmlns()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * XNamespace_get_Xmlns_m140AE4DD66BD99100AA9492D105D3B1383BC5112 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE);
		s_Il2CppMethodInitialized = true;
	}
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_0;
		L_0 = XNamespace_EnsureNamespace_m0F4936CB583036C26C69C3DBBE0A37D4D3635F18((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(((XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_StaticFields*)il2cpp_codegen_static_fields_for(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var))->get_address_of_refXmlns_3()), _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Xml.Linq.XNamespace::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XNamespace_Equals_m8964855B6CBF87B2BC5317DABE0678F6E24683E6 (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		return (bool)((((RuntimeObject*)(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 *)__this) == ((RuntimeObject*)(RuntimeObject *)L_0))? 1 : 0);
	}
}
// System.Int32 System.Xml.Linq.XNamespace::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XNamespace_GetHashCode_m90177556974B375FEBD8F55CA6D208924BA366D0 (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_hashCode_5();
		return L_0;
	}
}
// System.Boolean System.Xml.Linq.XNamespace::op_Equality(System.Xml.Linq.XNamespace,System.Xml.Linq.XNamespace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XNamespace_op_Equality_m59C867B675C5C15015A9F081A6BD2A47370A4DBE (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___left0, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___right1, const RuntimeMethod* method)
{
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_0 = ___left0;
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_1 = ___right1;
		return (bool)((((RuntimeObject*)(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 *)L_0) == ((RuntimeObject*)(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 *)L_1))? 1 : 0);
	}
}
// System.Boolean System.Xml.Linq.XNamespace::op_Inequality(System.Xml.Linq.XNamespace,System.Xml.Linq.XNamespace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XNamespace_op_Inequality_m075CAE6D2922DE14AB223F9C4C290E9BC478CD12 (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___left0, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___right1, const RuntimeMethod* method)
{
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_0 = ___left0;
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_1 = ___right1;
		return (bool)((((int32_t)((((RuntimeObject*)(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 *)L_0) == ((RuntimeObject*)(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 *)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Xml.Linq.XName System.Xml.Linq.XNamespace::GetName(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * XNamespace_GetName_m59979BF3C0D17127A15B3369152BA0821FB10794 (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * __this, String_t* ___localName0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XHashtable_1_Add_m3D9D39AE72FEF8885FE759C8C3F2D81C12A81B2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XHashtable_1_TryGetValue_mA51B0B689C3D0D7E88B62FA023BD37E404507697_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * V_0 = NULL;
	{
		XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F * L_0 = __this->get_names_6();
		String_t* L_1 = ___localName0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		bool L_4;
		L_4 = XHashtable_1_TryGetValue_mA51B0B689C3D0D7E88B62FA023BD37E404507697(L_0, L_1, L_2, L_3, (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 **)(&V_0), /*hidden argument*/XHashtable_1_TryGetValue_mA51B0B689C3D0D7E88B62FA023BD37E404507697_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_5 = V_0;
		return L_5;
	}

IL_0014:
	{
		XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F * L_6 = __this->get_names_6();
		String_t* L_7 = ___localName0;
		int32_t L_8 = ___index1;
		int32_t L_9 = ___count2;
		NullCheck(L_7);
		String_t* L_10;
		L_10 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_7, L_8, L_9, /*hidden argument*/NULL);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_11 = (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)il2cpp_codegen_object_new(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956_il2cpp_TypeInfo_var);
		XName__ctor_m08CA9A842644AFE1545DDFB3EA1BF011D797CE59(L_11, __this, L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_12;
		L_12 = XHashtable_1_Add_m3D9D39AE72FEF8885FE759C8C3F2D81C12A81B2F(L_6, L_11, /*hidden argument*/XHashtable_1_Add_m3D9D39AE72FEF8885FE759C8C3F2D81C12A81B2F_RuntimeMethod_var);
		return L_12;
	}
}
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::Get(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * XNamespace_Get_mF8EF85F60D3C811461541AC8FD3DCFF9C081BCAA (String_t* ___namespaceName0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtractKeyDelegate__ctor_m48CC0E7DB8DD7D4E987B0C6D4A1F3BA93726339A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtractKeyDelegate_t11259FF9F9B2731017891756CE47308FEA3BF56F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XHashtable_1_Add_mE7AF7A056D777267667AB48389520BD99FECFB1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XHashtable_1_TryGetValue_m13319666DDA95B2D930D3D5328BD6C0BFD020AFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XHashtable_1__ctor_m9DCA12E571A56E28A1DF7B4CED269AFA89672940_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNamespace_ExtractNamespace_mC09B1EB8F42638C5B58F853F81CB9A32B73D415A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral349C6DC0F34B9BA242E4C728EDD28CAB809D4917);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE);
		s_Il2CppMethodInitialized = true;
	}
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_0 = NULL;
	XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * V_1 = NULL;
	XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * G_B15_0 = NULL;
	{
		int32_t L_0 = ___count2;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_1;
		L_1 = XNamespace_get_None_m2795996F3AD1908D3CFC3F1AFCD58CFBED61EFE0(/*hidden argument*/NULL);
		return L_1;
	}

IL_0009:
	{
		XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD * L_2 = ((XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_StaticFields*)il2cpp_codegen_static_fields_for(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var))->get_namespaces_0();
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		ExtractKeyDelegate_t11259FF9F9B2731017891756CE47308FEA3BF56F * L_3 = (ExtractKeyDelegate_t11259FF9F9B2731017891756CE47308FEA3BF56F *)il2cpp_codegen_object_new(ExtractKeyDelegate_t11259FF9F9B2731017891756CE47308FEA3BF56F_il2cpp_TypeInfo_var);
		ExtractKeyDelegate__ctor_m48CC0E7DB8DD7D4E987B0C6D4A1F3BA93726339A(L_3, NULL, (intptr_t)((intptr_t)XNamespace_ExtractNamespace_mC09B1EB8F42638C5B58F853F81CB9A32B73D415A_RuntimeMethod_var), /*hidden argument*/ExtractKeyDelegate__ctor_m48CC0E7DB8DD7D4E987B0C6D4A1F3BA93726339A_RuntimeMethod_var);
		XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD * L_4 = (XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD *)il2cpp_codegen_object_new(XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD_il2cpp_TypeInfo_var);
		XHashtable_1__ctor_m9DCA12E571A56E28A1DF7B4CED269AFA89672940(L_4, L_3, ((int32_t)32), /*hidden argument*/XHashtable_1__ctor_m9DCA12E571A56E28A1DF7B4CED269AFA89672940_RuntimeMethod_var);
		XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD * L_5;
		L_5 = InterlockedCompareExchangeImpl<XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD *>((XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD **)(((XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_StaticFields*)il2cpp_codegen_static_fields_for(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var))->get_address_of_namespaces_0()), L_4, (XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD *)NULL);
	}

IL_002f:
	{
		XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD * L_6 = ((XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_StaticFields*)il2cpp_codegen_static_fields_for(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var))->get_namespaces_0();
		String_t* L_7 = ___namespaceName0;
		int32_t L_8 = ___index1;
		int32_t L_9 = ___count2;
		NullCheck(L_6);
		bool L_10;
		L_10 = XHashtable_1_TryGetValue_m13319666DDA95B2D930D3D5328BD6C0BFD020AFE(L_6, L_7, L_8, L_9, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(&V_0), /*hidden argument*/XHashtable_1_TryGetValue_m13319666DDA95B2D930D3D5328BD6C0BFD020AFE_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_11 = ___count2;
		NullCheck(_stringLiteral349C6DC0F34B9BA242E4C728EDD28CAB809D4917);
		int32_t L_12;
		L_12 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(_stringLiteral349C6DC0F34B9BA242E4C728EDD28CAB809D4917, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0063;
		}
	}
	{
		String_t* L_13 = ___namespaceName0;
		int32_t L_14 = ___index1;
		int32_t L_15 = ___count2;
		int32_t L_16;
		L_16 = String_CompareOrdinal_m080D376EC2E7A0C528A440094A0DB97DFB34CD41(L_13, L_14, _stringLiteral349C6DC0F34B9BA242E4C728EDD28CAB809D4917, 0, L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_0063;
		}
	}
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_17;
		L_17 = XNamespace_get_Xml_mF816E04DDC8ED562C6B6E71449706594EECCA55E(/*hidden argument*/NULL);
		return L_17;
	}

IL_0063:
	{
		int32_t L_18 = ___count2;
		NullCheck(_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE);
		int32_t L_19;
		L_19 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_0086;
		}
	}
	{
		String_t* L_20 = ___namespaceName0;
		int32_t L_21 = ___index1;
		int32_t L_22 = ___count2;
		int32_t L_23;
		L_23 = String_CompareOrdinal_m080D376EC2E7A0C528A440094A0DB97DFB34CD41(L_20, L_21, _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE, 0, L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_0086;
		}
	}
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_24;
		L_24 = XNamespace_get_Xmlns_m140AE4DD66BD99100AA9492D105D3B1383BC5112(/*hidden argument*/NULL);
		return L_24;
	}

IL_0086:
	{
		XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD * L_25 = ((XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_StaticFields*)il2cpp_codegen_static_fields_for(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var))->get_namespaces_0();
		String_t* L_26 = ___namespaceName0;
		int32_t L_27 = ___index1;
		int32_t L_28 = ___count2;
		NullCheck(L_26);
		String_t* L_29;
		L_29 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_26, L_27, L_28, /*hidden argument*/NULL);
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_30 = (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 *)il2cpp_codegen_object_new(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var);
		XNamespace__ctor_m032BFBA1A9B9D4B33642F96DB64DC4297F331617(L_30, L_29, /*hidden argument*/NULL);
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_31 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)il2cpp_codegen_object_new(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var);
		WeakReference__ctor_m11BFDB039514BDCE23425FD90E8C414D051B2F13(L_31, L_30, /*hidden argument*/NULL);
		NullCheck(L_25);
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_32;
		L_32 = XHashtable_1_Add_mE7AF7A056D777267667AB48389520BD99FECFB1C(L_25, L_31, /*hidden argument*/XHashtable_1_Add_mE7AF7A056D777267667AB48389520BD99FECFB1C_RuntimeMethod_var);
		V_0 = L_32;
	}

IL_00a3:
	{
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_33 = V_0;
		if (L_33)
		{
			goto IL_00a9;
		}
	}
	{
		G_B15_0 = ((XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 *)(NULL));
		goto IL_00b4;
	}

IL_00a9:
	{
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_34 = V_0;
		NullCheck(L_34);
		RuntimeObject * L_35;
		L_35 = VirtFuncInvoker0< RuntimeObject * >::Invoke(5 /* System.Object System.WeakReference::get_Target() */, L_34);
		G_B15_0 = ((XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 *)CastclassSealed((RuntimeObject*)L_35, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var));
	}

IL_00b4:
	{
		V_1 = G_B15_0;
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_36 = V_1;
		bool L_37;
		L_37 = XNamespace_op_Equality_m59C867B675C5C15015A9F081A6BD2A47370A4DBE(L_36, (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 *)NULL, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_002f;
		}
	}
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_38 = V_1;
		return L_38;
	}
}
// System.String System.Xml.Linq.XNamespace::ExtractLocalName(System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XNamespace_ExtractLocalName_mFFC3D4C8CA969449FAD1F029330DED93180959A9 (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___n0, const RuntimeMethod* method)
{
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_0 = ___n0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XName_get_LocalName_m696497ACA70F6707FAF6DDC7B0FB4297D7F4A007_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.Linq.XNamespace::ExtractNamespace(System.WeakReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XNamespace_ExtractNamespace_mC09B1EB8F42638C5B58F853F81CB9A32B73D415A (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ___r0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * V_0 = NULL;
	{
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_0 = ___r0;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_1 = ___r0;
		NullCheck(L_1);
		RuntimeObject * L_2;
		L_2 = VirtFuncInvoker0< RuntimeObject * >::Invoke(5 /* System.Object System.WeakReference::get_Target() */, L_1);
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_3 = ((XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 *)CastclassSealed((RuntimeObject*)L_2, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var));
		V_0 = L_3;
		bool L_4;
		L_4 = XNamespace_op_Equality_m59C867B675C5C15015A9F081A6BD2A47370A4DBE(L_3, (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (String_t*)NULL;
	}

IL_001a:
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = XNamespace_get_NamespaceName_mD97F3E27C3274AEB1B8AE634BE739F44219992DB_inline(L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::EnsureNamespace(System.WeakReference&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * XNamespace_EnsureNamespace_m0F4936CB583036C26C69C3DBBE0A37D4D3635F18 (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** ___refNmsp0, String_t* ___namespaceName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_0 = NULL;
	XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * V_1 = NULL;

IL_0000:
	{
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** L_0 = ___refNmsp0;
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_1 = *((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)L_0);
		V_0 = L_1;
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject * L_4;
		L_4 = VirtFuncInvoker0< RuntimeObject * >::Invoke(5 /* System.Object System.WeakReference::get_Target() */, L_3);
		V_1 = ((XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 *)CastclassSealed((RuntimeObject*)L_4, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var));
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_5 = V_1;
		bool L_6;
		L_6 = XNamespace_op_Inequality_m075CAE6D2922DE14AB223F9C4C290E9BC478CD12(L_5, (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_001d;
		}
	}
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_7 = V_1;
		return L_7;
	}

IL_001d:
	{
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** L_8 = ___refNmsp0;
		String_t* L_9 = ___namespaceName1;
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_10 = (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 *)il2cpp_codegen_object_new(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var);
		XNamespace__ctor_m032BFBA1A9B9D4B33642F96DB64DC4297F331617(L_10, L_9, /*hidden argument*/NULL);
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_11 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)il2cpp_codegen_object_new(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var);
		WeakReference__ctor_m11BFDB039514BDCE23425FD90E8C414D051B2F13(L_11, L_10, /*hidden argument*/NULL);
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_12 = V_0;
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_13;
		L_13 = InterlockedCompareExchangeImpl<WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *>((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)L_8, L_11, L_12);
		goto IL_0000;
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
// System.Void System.Xml.Linq.XNode::AppendText(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XNode_AppendText_mE2146B20CA977C9A065DF58A4FD15138D5B9BE8C (XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.XContainer/<GetElements>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetElementsU3Ed__40__ctor_mF908BE084ADA6F221E2B54376F43CF6A79676663 (U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void System.Xml.Linq.XContainer/<GetElements>d__40::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetElementsU3Ed__40_System_IDisposable_Dispose_m26D03CD4EC581A64543916058C2744EF2113E353 (U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean System.Xml.Linq.XContainer/<GetElements>d__40::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetElementsU3Ed__40_MoveNext_mBC40C788810006A11FE0F1EFB9730F31DC6B1D6E (U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * V_1 = NULL;
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_1 = __this->get_U3CU3E4__this_3();
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
			goto IL_0088;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject * L_5 = L_4->get_content_2();
		__this->set_U3CnU3E5__1_4(((XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)IsInstClass((RuntimeObject*)L_5, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var)));
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_6 = __this->get_U3CnU3E5__1_4();
		if (!L_6)
		{
			goto IL_00ab;
		}
	}

IL_0037:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_7 = __this->get_U3CnU3E5__1_4();
		NullCheck(L_7);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_8 = L_7->get_next_1();
		__this->set_U3CnU3E5__1_4(L_8);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_9 = __this->get_U3CnU3E5__1_4();
		V_2 = ((XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)IsInstClass((RuntimeObject*)L_9, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var));
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_10 = V_2;
		if (!L_10)
		{
			goto IL_008f;
		}
	}
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_11 = __this->get_name_5();
		bool L_12;
		L_12 = XName_op_Equality_m303F10BF2291A8B7AD3E3ACB4BB00C0800777B06(L_11, (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)NULL, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0078;
		}
	}
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_13 = V_2;
		NullCheck(L_13);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_14 = L_13->get_name_3();
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_15 = __this->get_name_5();
		bool L_16;
		L_16 = XName_op_Equality_m303F10BF2291A8B7AD3E3ACB4BB00C0800777B06(L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_008f;
		}
	}

IL_0078:
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_17 = V_2;
		__this->set_U3CU3E2__current_1(L_17);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0088:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_008f:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_18 = __this->get_U3CnU3E5__1_4();
		NullCheck(L_18);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_19 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_18)->get_parent_0();
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_20 = V_1;
		if ((!(((RuntimeObject*)(XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 *)L_19) == ((RuntimeObject*)(XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 *)L_20))))
		{
			goto IL_00ab;
		}
	}
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_21 = __this->get_U3CnU3E5__1_4();
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_22 = V_1;
		NullCheck(L_22);
		RuntimeObject * L_23 = L_22->get_content_2();
		if ((!(((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_21) == ((RuntimeObject*)(RuntimeObject *)L_23))))
		{
			goto IL_0037;
		}
	}

IL_00ab:
	{
		return (bool)0;
	}
}
// System.Xml.Linq.XElement System.Xml.Linq.XContainer/<GetElements>d__40::System.Collections.Generic.IEnumerator<System.Xml.Linq.XElement>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * U3CGetElementsU3Ed__40_System_Collections_Generic_IEnumeratorU3CSystem_Xml_Linq_XElementU3E_get_Current_m557169F857BE3A2E8AE60A5B31793CCB5FEE6DF8 (U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * __this, const RuntimeMethod* method)
{
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void System.Xml.Linq.XContainer/<GetElements>d__40::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetElementsU3Ed__40_System_Collections_IEnumerator_Reset_mEBD70692F6B1A660FC8C4BE32AEC4079CC25BD10 (U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetElementsU3Ed__40_System_Collections_IEnumerator_Reset_mEBD70692F6B1A660FC8C4BE32AEC4079CC25BD10_RuntimeMethod_var)));
	}
}
// System.Object System.Xml.Linq.XContainer/<GetElements>d__40::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetElementsU3Ed__40_System_Collections_IEnumerator_get_Current_mE30CD7CAB4C943F4FB52BAFB133941024A125CB9 (U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * __this, const RuntimeMethod* method)
{
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XElement> System.Xml.Linq.XContainer/<GetElements>d__40::System.Collections.Generic.IEnumerable<System.Xml.Linq.XElement>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetElementsU3Ed__40_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XElementU3E_GetEnumerator_m5985519113352CB9D6500FD7EE23018996093E8D (U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * L_3 = (U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC *)il2cpp_codegen_object_new(U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC_il2cpp_TypeInfo_var);
		U3CGetElementsU3Ed__40__ctor_mF908BE084ADA6F221E2B54376F43CF6A79676663(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * L_4 = V_0;
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * L_6 = V_0;
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_7 = __this->get_U3CU3E3__name_6();
		NullCheck(L_6);
		L_6->set_name_5(L_7);
		U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator System.Xml.Linq.XContainer/<GetElements>d__40::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetElementsU3Ed__40_System_Collections_IEnumerable_GetEnumerator_m1E01D5F2FFF1255AAD4FE9DE0E03ED6E59F228CA (U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetElementsU3Ed__40_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XElementU3E_GetEnumerator_m5985519113352CB9D6500FD7EE23018996093E8D(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XNamespace_get_NamespaceName_mD97F3E27C3274AEB1B8AE634BE739F44219992DB_inline (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_namespaceName_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XName_get_LocalName_m696497ACA70F6707FAF6DDC7B0FB4297D7F4A007_inline (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_localName_1();
		return L_0;
	}
}
