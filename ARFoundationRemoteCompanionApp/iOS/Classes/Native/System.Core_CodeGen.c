#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,TResult>)
// 0x00000007 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,TResult>)
// 0x00000008 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000009 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000C System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ConcatIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Except(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ExceptIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000014 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000016 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 System.Collections.Generic.Dictionary`2<TKey,TSource> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000019 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x0000001A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast(System.Collections.IEnumerable)
// 0x0000001B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::CastIterator(System.Collections.IEnumerable)
// 0x0000001C TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001D TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001E TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001F TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000020 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000021 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000022 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000023 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000024 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000025 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000026 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000027 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000028 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000029 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000002A System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000002B System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000002C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000002F System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000030 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000031 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000033 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000034 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000035 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000036 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000037 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000038 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000039 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000003A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003C System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000003D System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000003E System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000003F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000040 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000041 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000042 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000043 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000044 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000045 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000046 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000047 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000048 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000049 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000004A System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004C System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004D System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000004E System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000004F System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000050 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000051 System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::.ctor(System.Int32)
// 0x00000052 System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::System.IDisposable.Dispose()
// 0x00000053 System.Boolean System.Linq.Enumerable/<SelectIterator>d__5`2::MoveNext()
// 0x00000054 System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::<>m__Finally1()
// 0x00000055 TResult System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000056 System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.IEnumerator.Reset()
// 0x00000057 System.Object System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.IEnumerator.get_Current()
// 0x00000058 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000059 System.Collections.IEnumerator System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.IEnumerable.GetEnumerator()
// 0x0000005A System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000005B System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x0000005C System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000005D TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000005E System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000005F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x00000060 System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x00000061 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x00000062 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000063 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000064 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000065 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000066 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000067 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000068 System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::.ctor(System.Int32)
// 0x00000069 System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::System.IDisposable.Dispose()
// 0x0000006A System.Boolean System.Linq.Enumerable/<ConcatIterator>d__59`1::MoveNext()
// 0x0000006B System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::<>m__Finally1()
// 0x0000006C System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::<>m__Finally2()
// 0x0000006D TSource System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000006E System.Void System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.IEnumerator.Reset()
// 0x0000006F System.Object System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.IEnumerator.get_Current()
// 0x00000070 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000071 System.Collections.IEnumerator System.Linq.Enumerable/<ConcatIterator>d__59`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000072 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x00000073 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000074 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000075 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000076 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000077 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000078 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000079 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000007A System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007B System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::.ctor(System.Int32)
// 0x0000007C System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::System.IDisposable.Dispose()
// 0x0000007D System.Boolean System.Linq.Enumerable/<ExceptIterator>d__77`1::MoveNext()
// 0x0000007E System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::<>m__Finally1()
// 0x0000007F TSource System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000080 System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerator.Reset()
// 0x00000081 System.Object System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerator.get_Current()
// 0x00000082 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000083 System.Collections.IEnumerator System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000084 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::.ctor(System.Int32)
// 0x00000085 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.IDisposable.Dispose()
// 0x00000086 System.Boolean System.Linq.Enumerable/<CastIterator>d__99`1::MoveNext()
// 0x00000087 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::<>m__Finally1()
// 0x00000088 TResult System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000089 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.Reset()
// 0x0000008A System.Object System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.get_Current()
// 0x0000008B System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x0000008C System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000008D System.Func`2<TElement,TElement> System.Linq.IdentityFunction`1::get_Instance()
// 0x0000008E System.Void System.Linq.IdentityFunction`1/<>c::.cctor()
// 0x0000008F System.Void System.Linq.IdentityFunction`1/<>c::.ctor()
// 0x00000090 TElement System.Linq.IdentityFunction`1/<>c::<get_Instance>b__1_0(TElement)
// 0x00000091 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000092 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000093 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000094 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000095 System.Void System.Linq.Set`1::Resize()
// 0x00000096 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000097 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000098 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000099 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009A System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000009B System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000009C System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000009D System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x0000009E System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x0000009F TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000A0 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x000000A1 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x000000A2 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000A3 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A4 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x000000A5 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x000000A6 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000A7 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000A8 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000A9 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000AA System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000AB System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000AC System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000AD TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000AE System.Void System.Collections.Generic.BitHelper::.ctor(System.Int32*,System.Int32)
extern void BitHelper__ctor_m2770BB414919277B2CF522840B54819F5082CD80 (void);
// 0x000000AF System.Void System.Collections.Generic.BitHelper::.ctor(System.Int32[],System.Int32)
extern void BitHelper__ctor_m7A8E43BE1D2A4ED086E708B6FFE693322FC9D2EB (void);
// 0x000000B0 System.Void System.Collections.Generic.BitHelper::MarkBit(System.Int32)
extern void BitHelper_MarkBit_m1C6D787021BEA9D02DCA0762C09E5D443E04A86B (void);
// 0x000000B1 System.Boolean System.Collections.Generic.BitHelper::IsMarked(System.Int32)
extern void BitHelper_IsMarked_m6036A81F50D820045D3F62E52D57098A332AB608 (void);
// 0x000000B2 System.Int32 System.Collections.Generic.BitHelper::ToIntArrayLength(System.Int32)
extern void BitHelper_ToIntArrayLength_m32A0B1B014CB81891165AC325514784171C8E7B3 (void);
// 0x000000B3 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000B4 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000B5 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000B6 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000B7 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000B8 System.Void System.Collections.Generic.HashSet`1::CopyFrom(System.Collections.Generic.HashSet`1<T>)
// 0x000000B9 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000BA System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000BB System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000BC System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000BD System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000BE System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000BF System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000C0 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000C1 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000C2 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000C3 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000C4 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000C5 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000C6 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000C7 System.Boolean System.Collections.Generic.HashSet`1::SetEquals(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000C8 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000C9 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000CA System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::get_Comparer()
// 0x000000CB System.Void System.Collections.Generic.HashSet`1::TrimExcess()
// 0x000000CC System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000CD System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000CE System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000CF System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000D0 System.Void System.Collections.Generic.HashSet`1::AddValue(System.Int32,System.Int32,T)
// 0x000000D1 System.Boolean System.Collections.Generic.HashSet`1::ContainsAllElements(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000D2 System.Int32 System.Collections.Generic.HashSet`1::InternalIndexOf(T)
// 0x000000D3 System.Collections.Generic.HashSet`1/ElementCount<T> System.Collections.Generic.HashSet`1::CheckUniqueAndUnfoundElements(System.Collections.Generic.IEnumerable`1<T>,System.Boolean)
// 0x000000D4 System.Boolean System.Collections.Generic.HashSet`1::AreEqualityComparersEqual(System.Collections.Generic.HashSet`1<T>,System.Collections.Generic.HashSet`1<T>)
// 0x000000D5 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000D6 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000D7 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000D8 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000D9 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000DA System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000DB System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
// 0x000000DC System.Void System.Collections.Generic.ICollectionDebugView`1::.ctor(System.Collections.Generic.ICollection`1<T>)
// 0x000000DD T[] System.Collections.Generic.ICollectionDebugView`1::get_Items()
static Il2CppMethodPointer s_methodPointers[221] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	BitHelper__ctor_m2770BB414919277B2CF522840B54819F5082CD80,
	BitHelper__ctor_m7A8E43BE1D2A4ED086E708B6FFE693322FC9D2EB,
	BitHelper_MarkBit_m1C6D787021BEA9D02DCA0762C09E5D443E04A86B,
	BitHelper_IsMarked_m6036A81F50D820045D3F62E52D57098A332AB608,
	BitHelper_ToIntArrayLength_m32A0B1B014CB81891165AC325514784171C8E7B3,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[221] = 
{
	4863,
	5005,
	5005,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	1146,
	1382,
	2563,
	2140,
	4752,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[68] = 
{
	{ 0x02000004, { 103, 4 } },
	{ 0x02000005, { 107, 9 } },
	{ 0x02000006, { 118, 7 } },
	{ 0x02000007, { 127, 10 } },
	{ 0x02000008, { 139, 11 } },
	{ 0x02000009, { 153, 9 } },
	{ 0x0200000A, { 165, 12 } },
	{ 0x0200000B, { 180, 9 } },
	{ 0x0200000C, { 189, 1 } },
	{ 0x0200000D, { 190, 2 } },
	{ 0x0200000E, { 192, 12 } },
	{ 0x0200000F, { 204, 9 } },
	{ 0x02000010, { 213, 11 } },
	{ 0x02000011, { 224, 11 } },
	{ 0x02000012, { 235, 6 } },
	{ 0x02000013, { 241, 4 } },
	{ 0x02000014, { 245, 3 } },
	{ 0x02000016, { 248, 8 } },
	{ 0x02000018, { 256, 3 } },
	{ 0x02000019, { 261, 5 } },
	{ 0x0200001A, { 266, 7 } },
	{ 0x0200001B, { 273, 3 } },
	{ 0x0200001C, { 276, 7 } },
	{ 0x0200001D, { 283, 4 } },
	{ 0x0200001F, { 287, 39 } },
	{ 0x02000022, { 326, 2 } },
	{ 0x02000023, { 328, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 10 } },
	{ 0x06000006, { 20, 1 } },
	{ 0x06000007, { 21, 2 } },
	{ 0x06000008, { 23, 5 } },
	{ 0x06000009, { 28, 5 } },
	{ 0x0600000A, { 33, 1 } },
	{ 0x0600000B, { 34, 2 } },
	{ 0x0600000C, { 36, 2 } },
	{ 0x0600000D, { 38, 1 } },
	{ 0x0600000E, { 39, 1 } },
	{ 0x0600000F, { 40, 2 } },
	{ 0x06000010, { 42, 1 } },
	{ 0x06000011, { 43, 2 } },
	{ 0x06000012, { 45, 1 } },
	{ 0x06000013, { 46, 2 } },
	{ 0x06000014, { 48, 1 } },
	{ 0x06000015, { 49, 5 } },
	{ 0x06000016, { 54, 3 } },
	{ 0x06000017, { 57, 2 } },
	{ 0x06000018, { 59, 3 } },
	{ 0x06000019, { 62, 7 } },
	{ 0x0600001A, { 69, 2 } },
	{ 0x0600001B, { 71, 2 } },
	{ 0x0600001C, { 73, 4 } },
	{ 0x0600001D, { 77, 3 } },
	{ 0x0600001E, { 80, 4 } },
	{ 0x0600001F, { 84, 3 } },
	{ 0x06000020, { 87, 1 } },
	{ 0x06000021, { 88, 3 } },
	{ 0x06000022, { 91, 3 } },
	{ 0x06000023, { 94, 2 } },
	{ 0x06000024, { 96, 2 } },
	{ 0x06000025, { 98, 5 } },
	{ 0x06000035, { 116, 2 } },
	{ 0x0600003A, { 125, 2 } },
	{ 0x0600003F, { 137, 2 } },
	{ 0x06000045, { 150, 3 } },
	{ 0x0600004A, { 162, 3 } },
	{ 0x0600004F, { 177, 3 } },
	{ 0x0600009A, { 259, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[330] = 
{
	{ (Il2CppRGCTXDataType)2, 2234 },
	{ (Il2CppRGCTXDataType)3, 9679 },
	{ (Il2CppRGCTXDataType)2, 3635 },
	{ (Il2CppRGCTXDataType)2, 3238 },
	{ (Il2CppRGCTXDataType)3, 17451 },
	{ (Il2CppRGCTXDataType)2, 2330 },
	{ (Il2CppRGCTXDataType)2, 3245 },
	{ (Il2CppRGCTXDataType)3, 17602 },
	{ (Il2CppRGCTXDataType)2, 3240 },
	{ (Il2CppRGCTXDataType)3, 17464 },
	{ (Il2CppRGCTXDataType)2, 2235 },
	{ (Il2CppRGCTXDataType)3, 9680 },
	{ (Il2CppRGCTXDataType)2, 3660 },
	{ (Il2CppRGCTXDataType)2, 3247 },
	{ (Il2CppRGCTXDataType)3, 17615 },
	{ (Il2CppRGCTXDataType)2, 2350 },
	{ (Il2CppRGCTXDataType)2, 3255 },
	{ (Il2CppRGCTXDataType)3, 18037 },
	{ (Il2CppRGCTXDataType)2, 3251 },
	{ (Il2CppRGCTXDataType)3, 17806 },
	{ (Il2CppRGCTXDataType)3, 21106 },
	{ (Il2CppRGCTXDataType)2, 753 },
	{ (Il2CppRGCTXDataType)3, 358 },
	{ (Il2CppRGCTXDataType)2, 738 },
	{ (Il2CppRGCTXDataType)3, 103 },
	{ (Il2CppRGCTXDataType)3, 104 },
	{ (Il2CppRGCTXDataType)2, 1364 },
	{ (Il2CppRGCTXDataType)3, 7194 },
	{ (Il2CppRGCTXDataType)2, 739 },
	{ (Il2CppRGCTXDataType)3, 151 },
	{ (Il2CppRGCTXDataType)3, 152 },
	{ (Il2CppRGCTXDataType)2, 1376 },
	{ (Il2CppRGCTXDataType)3, 7199 },
	{ (Il2CppRGCTXDataType)3, 21111 },
	{ (Il2CppRGCTXDataType)2, 755 },
	{ (Il2CppRGCTXDataType)3, 381 },
	{ (Il2CppRGCTXDataType)2, 2857 },
	{ (Il2CppRGCTXDataType)3, 15375 },
	{ (Il2CppRGCTXDataType)3, 8264 },
	{ (Il2CppRGCTXDataType)3, 21027 },
	{ (Il2CppRGCTXDataType)2, 744 },
	{ (Il2CppRGCTXDataType)3, 266 },
	{ (Il2CppRGCTXDataType)3, 21039 },
	{ (Il2CppRGCTXDataType)2, 746 },
	{ (Il2CppRGCTXDataType)3, 282 },
	{ (Il2CppRGCTXDataType)3, 21043 },
	{ (Il2CppRGCTXDataType)2, 749 },
	{ (Il2CppRGCTXDataType)3, 315 },
	{ (Il2CppRGCTXDataType)3, 21115 },
	{ (Il2CppRGCTXDataType)3, 6537 },
	{ (Il2CppRGCTXDataType)2, 1262 },
	{ (Il2CppRGCTXDataType)2, 1711 },
	{ (Il2CppRGCTXDataType)2, 1839 },
	{ (Il2CppRGCTXDataType)2, 1934 },
	{ (Il2CppRGCTXDataType)2, 974 },
	{ (Il2CppRGCTXDataType)3, 2136 },
	{ (Il2CppRGCTXDataType)3, 2137 },
	{ (Il2CppRGCTXDataType)2, 2331 },
	{ (Il2CppRGCTXDataType)3, 10452 },
	{ (Il2CppRGCTXDataType)3, 8278 },
	{ (Il2CppRGCTXDataType)2, 2204 },
	{ (Il2CppRGCTXDataType)3, 21153 },
	{ (Il2CppRGCTXDataType)2, 1063 },
	{ (Il2CppRGCTXDataType)3, 2924 },
	{ (Il2CppRGCTXDataType)2, 1743 },
	{ (Il2CppRGCTXDataType)2, 1845 },
	{ (Il2CppRGCTXDataType)3, 7197 },
	{ (Il2CppRGCTXDataType)3, 7198 },
	{ (Il2CppRGCTXDataType)3, 2925 },
	{ (Il2CppRGCTXDataType)2, 1712 },
	{ (Il2CppRGCTXDataType)3, 20952 },
	{ (Il2CppRGCTXDataType)2, 742 },
	{ (Il2CppRGCTXDataType)3, 252 },
	{ (Il2CppRGCTXDataType)2, 2125 },
	{ (Il2CppRGCTXDataType)2, 1593 },
	{ (Il2CppRGCTXDataType)2, 1723 },
	{ (Il2CppRGCTXDataType)2, 1840 },
	{ (Il2CppRGCTXDataType)2, 1724 },
	{ (Il2CppRGCTXDataType)2, 1841 },
	{ (Il2CppRGCTXDataType)3, 7195 },
	{ (Il2CppRGCTXDataType)2, 2126 },
	{ (Il2CppRGCTXDataType)2, 1594 },
	{ (Il2CppRGCTXDataType)2, 1725 },
	{ (Il2CppRGCTXDataType)2, 1842 },
	{ (Il2CppRGCTXDataType)2, 1726 },
	{ (Il2CppRGCTXDataType)2, 1843 },
	{ (Il2CppRGCTXDataType)3, 7196 },
	{ (Il2CppRGCTXDataType)2, 1706 },
	{ (Il2CppRGCTXDataType)2, 1707 },
	{ (Il2CppRGCTXDataType)2, 1837 },
	{ (Il2CppRGCTXDataType)3, 7193 },
	{ (Il2CppRGCTXDataType)2, 1705 },
	{ (Il2CppRGCTXDataType)2, 1836 },
	{ (Il2CppRGCTXDataType)3, 7192 },
	{ (Il2CppRGCTXDataType)2, 1592 },
	{ (Il2CppRGCTXDataType)2, 1722 },
	{ (Il2CppRGCTXDataType)2, 1591 },
	{ (Il2CppRGCTXDataType)3, 21032 },
	{ (Il2CppRGCTXDataType)3, 6536 },
	{ (Il2CppRGCTXDataType)2, 1261 },
	{ (Il2CppRGCTXDataType)2, 1709 },
	{ (Il2CppRGCTXDataType)2, 1838 },
	{ (Il2CppRGCTXDataType)2, 1933 },
	{ (Il2CppRGCTXDataType)3, 9681 },
	{ (Il2CppRGCTXDataType)3, 9683 },
	{ (Il2CppRGCTXDataType)2, 491 },
	{ (Il2CppRGCTXDataType)3, 9682 },
	{ (Il2CppRGCTXDataType)3, 9691 },
	{ (Il2CppRGCTXDataType)2, 2238 },
	{ (Il2CppRGCTXDataType)2, 3241 },
	{ (Il2CppRGCTXDataType)3, 17465 },
	{ (Il2CppRGCTXDataType)3, 9692 },
	{ (Il2CppRGCTXDataType)2, 1787 },
	{ (Il2CppRGCTXDataType)2, 1881 },
	{ (Il2CppRGCTXDataType)3, 7210 },
	{ (Il2CppRGCTXDataType)3, 20955 },
	{ (Il2CppRGCTXDataType)2, 3252 },
	{ (Il2CppRGCTXDataType)3, 17807 },
	{ (Il2CppRGCTXDataType)3, 9684 },
	{ (Il2CppRGCTXDataType)2, 2237 },
	{ (Il2CppRGCTXDataType)2, 3239 },
	{ (Il2CppRGCTXDataType)3, 17452 },
	{ (Il2CppRGCTXDataType)3, 7209 },
	{ (Il2CppRGCTXDataType)3, 9685 },
	{ (Il2CppRGCTXDataType)3, 20954 },
	{ (Il2CppRGCTXDataType)2, 3248 },
	{ (Il2CppRGCTXDataType)3, 17616 },
	{ (Il2CppRGCTXDataType)3, 9698 },
	{ (Il2CppRGCTXDataType)2, 2239 },
	{ (Il2CppRGCTXDataType)2, 3246 },
	{ (Il2CppRGCTXDataType)3, 17603 },
	{ (Il2CppRGCTXDataType)3, 10504 },
	{ (Il2CppRGCTXDataType)3, 5343 },
	{ (Il2CppRGCTXDataType)3, 7211 },
	{ (Il2CppRGCTXDataType)3, 5342 },
	{ (Il2CppRGCTXDataType)3, 9699 },
	{ (Il2CppRGCTXDataType)3, 20956 },
	{ (Il2CppRGCTXDataType)2, 3256 },
	{ (Il2CppRGCTXDataType)3, 18038 },
	{ (Il2CppRGCTXDataType)3, 9712 },
	{ (Il2CppRGCTXDataType)2, 2241 },
	{ (Il2CppRGCTXDataType)2, 3254 },
	{ (Il2CppRGCTXDataType)3, 17809 },
	{ (Il2CppRGCTXDataType)3, 9713 },
	{ (Il2CppRGCTXDataType)2, 1790 },
	{ (Il2CppRGCTXDataType)2, 1884 },
	{ (Il2CppRGCTXDataType)3, 7215 },
	{ (Il2CppRGCTXDataType)3, 7214 },
	{ (Il2CppRGCTXDataType)2, 3243 },
	{ (Il2CppRGCTXDataType)3, 17467 },
	{ (Il2CppRGCTXDataType)3, 20981 },
	{ (Il2CppRGCTXDataType)2, 3253 },
	{ (Il2CppRGCTXDataType)3, 17808 },
	{ (Il2CppRGCTXDataType)3, 9705 },
	{ (Il2CppRGCTXDataType)2, 2240 },
	{ (Il2CppRGCTXDataType)2, 3250 },
	{ (Il2CppRGCTXDataType)3, 17618 },
	{ (Il2CppRGCTXDataType)3, 7213 },
	{ (Il2CppRGCTXDataType)3, 7212 },
	{ (Il2CppRGCTXDataType)3, 9706 },
	{ (Il2CppRGCTXDataType)2, 3242 },
	{ (Il2CppRGCTXDataType)3, 17466 },
	{ (Il2CppRGCTXDataType)3, 20980 },
	{ (Il2CppRGCTXDataType)2, 3249 },
	{ (Il2CppRGCTXDataType)3, 17617 },
	{ (Il2CppRGCTXDataType)3, 9719 },
	{ (Il2CppRGCTXDataType)2, 2242 },
	{ (Il2CppRGCTXDataType)2, 3258 },
	{ (Il2CppRGCTXDataType)3, 18040 },
	{ (Il2CppRGCTXDataType)3, 10505 },
	{ (Il2CppRGCTXDataType)3, 5345 },
	{ (Il2CppRGCTXDataType)3, 7217 },
	{ (Il2CppRGCTXDataType)3, 7216 },
	{ (Il2CppRGCTXDataType)3, 5344 },
	{ (Il2CppRGCTXDataType)3, 9720 },
	{ (Il2CppRGCTXDataType)2, 3244 },
	{ (Il2CppRGCTXDataType)3, 17468 },
	{ (Il2CppRGCTXDataType)3, 20982 },
	{ (Il2CppRGCTXDataType)2, 3257 },
	{ (Il2CppRGCTXDataType)3, 18039 },
	{ (Il2CppRGCTXDataType)3, 360 },
	{ (Il2CppRGCTXDataType)2, 1779 },
	{ (Il2CppRGCTXDataType)2, 1875 },
	{ (Il2CppRGCTXDataType)3, 7602 },
	{ (Il2CppRGCTXDataType)3, 362 },
	{ (Il2CppRGCTXDataType)2, 656 },
	{ (Il2CppRGCTXDataType)2, 754 },
	{ (Il2CppRGCTXDataType)3, 359 },
	{ (Il2CppRGCTXDataType)3, 361 },
	{ (Il2CppRGCTXDataType)3, 7206 },
	{ (Il2CppRGCTXDataType)3, 7207 },
	{ (Il2CppRGCTXDataType)3, 7218 },
	{ (Il2CppRGCTXDataType)3, 384 },
	{ (Il2CppRGCTXDataType)3, 383 },
	{ (Il2CppRGCTXDataType)2, 1782 },
	{ (Il2CppRGCTXDataType)2, 1877 },
	{ (Il2CppRGCTXDataType)3, 7208 },
	{ (Il2CppRGCTXDataType)2, 1799 },
	{ (Il2CppRGCTXDataType)2, 1897 },
	{ (Il2CppRGCTXDataType)3, 386 },
	{ (Il2CppRGCTXDataType)2, 658 },
	{ (Il2CppRGCTXDataType)2, 756 },
	{ (Il2CppRGCTXDataType)3, 382 },
	{ (Il2CppRGCTXDataType)3, 385 },
	{ (Il2CppRGCTXDataType)3, 268 },
	{ (Il2CppRGCTXDataType)3, 269 },
	{ (Il2CppRGCTXDataType)2, 1770 },
	{ (Il2CppRGCTXDataType)2, 1869 },
	{ (Il2CppRGCTXDataType)3, 271 },
	{ (Il2CppRGCTXDataType)2, 483 },
	{ (Il2CppRGCTXDataType)2, 745 },
	{ (Il2CppRGCTXDataType)3, 267 },
	{ (Il2CppRGCTXDataType)3, 270 },
	{ (Il2CppRGCTXDataType)3, 284 },
	{ (Il2CppRGCTXDataType)2, 2940 },
	{ (Il2CppRGCTXDataType)3, 15842 },
	{ (Il2CppRGCTXDataType)2, 1773 },
	{ (Il2CppRGCTXDataType)2, 1871 },
	{ (Il2CppRGCTXDataType)3, 15843 },
	{ (Il2CppRGCTXDataType)3, 286 },
	{ (Il2CppRGCTXDataType)2, 485 },
	{ (Il2CppRGCTXDataType)2, 747 },
	{ (Il2CppRGCTXDataType)3, 283 },
	{ (Il2CppRGCTXDataType)3, 285 },
	{ (Il2CppRGCTXDataType)3, 317 },
	{ (Il2CppRGCTXDataType)2, 2942 },
	{ (Il2CppRGCTXDataType)3, 15844 },
	{ (Il2CppRGCTXDataType)2, 1776 },
	{ (Il2CppRGCTXDataType)2, 1873 },
	{ (Il2CppRGCTXDataType)3, 15845 },
	{ (Il2CppRGCTXDataType)3, 319 },
	{ (Il2CppRGCTXDataType)2, 487 },
	{ (Il2CppRGCTXDataType)2, 750 },
	{ (Il2CppRGCTXDataType)3, 316 },
	{ (Il2CppRGCTXDataType)3, 318 },
	{ (Il2CppRGCTXDataType)3, 254 },
	{ (Il2CppRGCTXDataType)2, 481 },
	{ (Il2CppRGCTXDataType)3, 256 },
	{ (Il2CppRGCTXDataType)2, 743 },
	{ (Il2CppRGCTXDataType)3, 253 },
	{ (Il2CppRGCTXDataType)3, 255 },
	{ (Il2CppRGCTXDataType)2, 712 },
	{ (Il2CppRGCTXDataType)3, 0 },
	{ (Il2CppRGCTXDataType)2, 1381 },
	{ (Il2CppRGCTXDataType)3, 7202 },
	{ (Il2CppRGCTXDataType)2, 717 },
	{ (Il2CppRGCTXDataType)3, 6 },
	{ (Il2CppRGCTXDataType)2, 717 },
	{ (Il2CppRGCTXDataType)3, 6573 },
	{ (Il2CppRGCTXDataType)2, 1277 },
	{ (Il2CppRGCTXDataType)2, 3755 },
	{ (Il2CppRGCTXDataType)3, 15839 },
	{ (Il2CppRGCTXDataType)3, 15840 },
	{ (Il2CppRGCTXDataType)2, 1949 },
	{ (Il2CppRGCTXDataType)3, 15841 },
	{ (Il2CppRGCTXDataType)2, 411 },
	{ (Il2CppRGCTXDataType)2, 751 },
	{ (Il2CppRGCTXDataType)3, 338 },
	{ (Il2CppRGCTXDataType)3, 15362 },
	{ (Il2CppRGCTXDataType)2, 2858 },
	{ (Il2CppRGCTXDataType)3, 15376 },
	{ (Il2CppRGCTXDataType)2, 975 },
	{ (Il2CppRGCTXDataType)3, 2138 },
	{ (Il2CppRGCTXDataType)3, 15368 },
	{ (Il2CppRGCTXDataType)3, 5315 },
	{ (Il2CppRGCTXDataType)2, 514 },
	{ (Il2CppRGCTXDataType)3, 15363 },
	{ (Il2CppRGCTXDataType)2, 2854 },
	{ (Il2CppRGCTXDataType)3, 2250 },
	{ (Il2CppRGCTXDataType)2, 992 },
	{ (Il2CppRGCTXDataType)2, 1230 },
	{ (Il2CppRGCTXDataType)3, 5321 },
	{ (Il2CppRGCTXDataType)3, 15364 },
	{ (Il2CppRGCTXDataType)3, 5310 },
	{ (Il2CppRGCTXDataType)3, 5311 },
	{ (Il2CppRGCTXDataType)3, 5309 },
	{ (Il2CppRGCTXDataType)3, 5312 },
	{ (Il2CppRGCTXDataType)2, 1226 },
	{ (Il2CppRGCTXDataType)2, 3730 },
	{ (Il2CppRGCTXDataType)3, 7201 },
	{ (Il2CppRGCTXDataType)3, 5314 },
	{ (Il2CppRGCTXDataType)2, 1684 },
	{ (Il2CppRGCTXDataType)3, 5313 },
	{ (Il2CppRGCTXDataType)2, 1596 },
	{ (Il2CppRGCTXDataType)2, 3665 },
	{ (Il2CppRGCTXDataType)2, 1745 },
	{ (Il2CppRGCTXDataType)2, 1847 },
	{ (Il2CppRGCTXDataType)3, 6556 },
	{ (Il2CppRGCTXDataType)2, 1271 },
	{ (Il2CppRGCTXDataType)3, 7929 },
	{ (Il2CppRGCTXDataType)3, 7930 },
	{ (Il2CppRGCTXDataType)2, 1556 },
	{ (Il2CppRGCTXDataType)3, 7933 },
	{ (Il2CppRGCTXDataType)2, 1556 },
	{ (Il2CppRGCTXDataType)3, 7937 },
	{ (Il2CppRGCTXDataType)2, 1602 },
	{ (Il2CppRGCTXDataType)3, 7941 },
	{ (Il2CppRGCTXDataType)3, 7946 },
	{ (Il2CppRGCTXDataType)3, 7945 },
	{ (Il2CppRGCTXDataType)2, 3753 },
	{ (Il2CppRGCTXDataType)3, 7932 },
	{ (Il2CppRGCTXDataType)3, 7931 },
	{ (Il2CppRGCTXDataType)3, 7942 },
	{ (Il2CppRGCTXDataType)2, 1944 },
	{ (Il2CppRGCTXDataType)3, 7939 },
	{ (Il2CppRGCTXDataType)3, 21586 },
	{ (Il2CppRGCTXDataType)2, 1233 },
	{ (Il2CppRGCTXDataType)3, 5332 },
	{ (Il2CppRGCTXDataType)1, 1679 },
	{ (Il2CppRGCTXDataType)2, 3677 },
	{ (Il2CppRGCTXDataType)3, 7938 },
	{ (Il2CppRGCTXDataType)1, 3677 },
	{ (Il2CppRGCTXDataType)1, 1944 },
	{ (Il2CppRGCTXDataType)2, 3753 },
	{ (Il2CppRGCTXDataType)2, 3677 },
	{ (Il2CppRGCTXDataType)2, 1749 },
	{ (Il2CppRGCTXDataType)2, 1851 },
	{ (Il2CppRGCTXDataType)3, 7948 },
	{ (Il2CppRGCTXDataType)3, 7936 },
	{ (Il2CppRGCTXDataType)3, 7934 },
	{ (Il2CppRGCTXDataType)3, 7944 },
	{ (Il2CppRGCTXDataType)3, 7940 },
	{ (Il2CppRGCTXDataType)3, 7935 },
	{ (Il2CppRGCTXDataType)3, 7943 },
	{ (Il2CppRGCTXDataType)3, 7947 },
	{ (Il2CppRGCTXDataType)2, 344 },
	{ (Il2CppRGCTXDataType)3, 5346 },
	{ (Il2CppRGCTXDataType)2, 500 },
	{ (Il2CppRGCTXDataType)2, 1605 },
	{ (Il2CppRGCTXDataType)2, 3679 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	221,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	68,
	s_rgctxIndices,
	330,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
