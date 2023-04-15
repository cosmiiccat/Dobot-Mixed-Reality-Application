#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000F System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Intersect(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::IntersectIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000016 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Except(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ExceptIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000018 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType(System.Collections.IEnumerable)
// 0x0000001B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfTypeIterator(System.Collections.IEnumerable)
// 0x0000001C TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001D TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001E TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001F TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000020 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000021 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000022 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000023 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000026 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000027 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000028 TAccumulate System.Linq.Enumerable::Aggregate(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
// 0x00000029 System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5 (void);
// 0x0000002A System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000002B TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000002C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000002D System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000002E System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000002F System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000030 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000031 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000033 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000034 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000035 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000036 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000037 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000038 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000039 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003B System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000003C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000003D System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000003E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000040 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000041 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000042 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000043 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000044 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000045 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000046 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000047 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000048 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000049 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004B System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004C System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000004D System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000004E System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000050 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000051 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000052 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000053 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000054 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000055 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000056 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000057 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000058 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000059 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000005A System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000005B System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000005C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000005D System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x0000005E TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000005F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000060 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000061 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000062 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000063 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x00000064 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x00000065 System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x00000066 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x00000067 TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000068 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x00000069 System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x0000006A System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000006B System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006C System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x0000006D System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x0000006E System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x0000006F System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000070 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000071 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000072 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000073 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000074 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000075 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x00000076 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x00000077 System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x00000078 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x00000079 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x0000007A TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000007B System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x0000007C System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x0000007D System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000007E System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007F System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::.ctor(System.Int32)
// 0x00000080 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.IDisposable.Dispose()
// 0x00000081 System.Boolean System.Linq.Enumerable/<IntersectIterator>d__74`1::MoveNext()
// 0x00000082 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::<>m__Finally1()
// 0x00000083 TSource System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000084 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.Reset()
// 0x00000085 System.Object System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.get_Current()
// 0x00000086 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000087 System.Collections.IEnumerator System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000088 System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::.ctor(System.Int32)
// 0x00000089 System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::System.IDisposable.Dispose()
// 0x0000008A System.Boolean System.Linq.Enumerable/<ExceptIterator>d__77`1::MoveNext()
// 0x0000008B System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::<>m__Finally1()
// 0x0000008C TSource System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000008D System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerator.Reset()
// 0x0000008E System.Object System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerator.get_Current()
// 0x0000008F System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000090 System.Collections.IEnumerator System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000091 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::.ctor(System.Int32)
// 0x00000092 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.IDisposable.Dispose()
// 0x00000093 System.Boolean System.Linq.Enumerable/<OfTypeIterator>d__97`1::MoveNext()
// 0x00000094 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>m__Finally1()
// 0x00000095 TResult System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000096 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.Reset()
// 0x00000097 System.Object System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.get_Current()
// 0x00000098 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000099 System.Collections.IEnumerator System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009A System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x0000009B System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000009C System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x0000009D System.Boolean System.Linq.Set`1::Add(TElement)
// 0x0000009E System.Boolean System.Linq.Set`1::Remove(TElement)
// 0x0000009F System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x000000A0 System.Void System.Linq.Set`1::Resize()
// 0x000000A1 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x000000A2 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x000000A3 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A4 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000A5 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000A6 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x000000A7 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x000000A8 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x000000A9 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x000000AA TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000AB System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x000000AC System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x000000AD System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000AE System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000AF System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x000000B0 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x000000B1 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000B2 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000B3 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000B4 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000B5 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000B6 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000B7 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000B8 TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000B9 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000BA System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000BB System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000BC System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000BD System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000BE System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000BF System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000C0 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000C1 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000C2 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000C3 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000C4 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000C5 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000C6 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000C7 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000C8 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000C9 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000CA System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000CB System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000CC System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000CD System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000CE System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000CF System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000D0 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000D1 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000D2 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000D3 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000D4 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000D5 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000D6 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[214] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
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
	Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5,
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
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[214] = 
{
	7459,
	7459,
	7719,
	7719,
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
	7353,
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
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[69] = 
{
	{ 0x02000004, { 99, 4 } },
	{ 0x02000005, { 103, 9 } },
	{ 0x02000006, { 114, 7 } },
	{ 0x02000007, { 123, 10 } },
	{ 0x02000008, { 135, 11 } },
	{ 0x02000009, { 149, 9 } },
	{ 0x0200000A, { 161, 12 } },
	{ 0x0200000B, { 176, 1 } },
	{ 0x0200000C, { 177, 2 } },
	{ 0x0200000D, { 179, 12 } },
	{ 0x0200000E, { 191, 8 } },
	{ 0x0200000F, { 199, 11 } },
	{ 0x02000010, { 210, 12 } },
	{ 0x02000011, { 222, 12 } },
	{ 0x02000012, { 234, 11 } },
	{ 0x02000013, { 245, 6 } },
	{ 0x02000014, { 251, 2 } },
	{ 0x02000016, { 253, 8 } },
	{ 0x02000018, { 261, 3 } },
	{ 0x02000019, { 266, 5 } },
	{ 0x0200001A, { 271, 7 } },
	{ 0x0200001B, { 278, 3 } },
	{ 0x0200001C, { 281, 7 } },
	{ 0x0200001D, { 288, 4 } },
	{ 0x0200001E, { 292, 23 } },
	{ 0x02000020, { 315, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 1 } },
	{ 0x0600000C, { 34, 2 } },
	{ 0x0600000D, { 36, 2 } },
	{ 0x0600000E, { 38, 2 } },
	{ 0x0600000F, { 40, 1 } },
	{ 0x06000010, { 41, 1 } },
	{ 0x06000011, { 42, 2 } },
	{ 0x06000012, { 44, 1 } },
	{ 0x06000013, { 45, 2 } },
	{ 0x06000014, { 47, 1 } },
	{ 0x06000015, { 48, 2 } },
	{ 0x06000016, { 50, 1 } },
	{ 0x06000017, { 51, 2 } },
	{ 0x06000018, { 53, 3 } },
	{ 0x06000019, { 56, 2 } },
	{ 0x0600001A, { 58, 1 } },
	{ 0x0600001B, { 59, 2 } },
	{ 0x0600001C, { 61, 4 } },
	{ 0x0600001D, { 65, 4 } },
	{ 0x0600001E, { 69, 4 } },
	{ 0x0600001F, { 73, 3 } },
	{ 0x06000020, { 76, 3 } },
	{ 0x06000021, { 79, 1 } },
	{ 0x06000022, { 80, 1 } },
	{ 0x06000023, { 81, 3 } },
	{ 0x06000024, { 84, 3 } },
	{ 0x06000025, { 87, 2 } },
	{ 0x06000026, { 89, 2 } },
	{ 0x06000027, { 91, 5 } },
	{ 0x06000028, { 96, 3 } },
	{ 0x06000039, { 112, 2 } },
	{ 0x0600003E, { 121, 2 } },
	{ 0x06000043, { 133, 2 } },
	{ 0x06000049, { 146, 3 } },
	{ 0x0600004E, { 158, 3 } },
	{ 0x06000053, { 173, 3 } },
	{ 0x060000A5, { 264, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[317] = 
{
	{ (Il2CppRGCTXDataType)2, 7460 },
	{ (Il2CppRGCTXDataType)3, 29349 },
	{ (Il2CppRGCTXDataType)2, 11839 },
	{ (Il2CppRGCTXDataType)2, 11048 },
	{ (Il2CppRGCTXDataType)3, 51300 },
	{ (Il2CppRGCTXDataType)2, 8196 },
	{ (Il2CppRGCTXDataType)2, 11081 },
	{ (Il2CppRGCTXDataType)3, 51353 },
	{ (Il2CppRGCTXDataType)2, 11062 },
	{ (Il2CppRGCTXDataType)3, 51320 },
	{ (Il2CppRGCTXDataType)2, 7461 },
	{ (Il2CppRGCTXDataType)3, 29350 },
	{ (Il2CppRGCTXDataType)2, 11875 },
	{ (Il2CppRGCTXDataType)2, 11098 },
	{ (Il2CppRGCTXDataType)3, 51376 },
	{ (Il2CppRGCTXDataType)2, 8222 },
	{ (Il2CppRGCTXDataType)2, 11128 },
	{ (Il2CppRGCTXDataType)3, 51562 },
	{ (Il2CppRGCTXDataType)2, 11113 },
	{ (Il2CppRGCTXDataType)3, 51461 },
	{ (Il2CppRGCTXDataType)2, 1340 },
	{ (Il2CppRGCTXDataType)3, 241 },
	{ (Il2CppRGCTXDataType)3, 242 },
	{ (Il2CppRGCTXDataType)2, 4300 },
	{ (Il2CppRGCTXDataType)3, 18629 },
	{ (Il2CppRGCTXDataType)2, 1344 },
	{ (Il2CppRGCTXDataType)3, 269 },
	{ (Il2CppRGCTXDataType)3, 270 },
	{ (Il2CppRGCTXDataType)2, 4318 },
	{ (Il2CppRGCTXDataType)3, 18636 },
	{ (Il2CppRGCTXDataType)3, 57276 },
	{ (Il2CppRGCTXDataType)2, 1392 },
	{ (Il2CppRGCTXDataType)3, 499 },
	{ (Il2CppRGCTXDataType)3, 57283 },
	{ (Il2CppRGCTXDataType)2, 1400 },
	{ (Il2CppRGCTXDataType)3, 535 },
	{ (Il2CppRGCTXDataType)2, 9005 },
	{ (Il2CppRGCTXDataType)3, 40473 },
	{ (Il2CppRGCTXDataType)2, 9006 },
	{ (Il2CppRGCTXDataType)3, 40474 },
	{ (Il2CppRGCTXDataType)3, 24349 },
	{ (Il2CppRGCTXDataType)3, 57205 },
	{ (Il2CppRGCTXDataType)2, 1347 },
	{ (Il2CppRGCTXDataType)3, 324 },
	{ (Il2CppRGCTXDataType)3, 57322 },
	{ (Il2CppRGCTXDataType)2, 1404 },
	{ (Il2CppRGCTXDataType)3, 567 },
	{ (Il2CppRGCTXDataType)3, 57227 },
	{ (Il2CppRGCTXDataType)2, 1381 },
	{ (Il2CppRGCTXDataType)3, 457 },
	{ (Il2CppRGCTXDataType)3, 57214 },
	{ (Il2CppRGCTXDataType)2, 1354 },
	{ (Il2CppRGCTXDataType)3, 365 },
	{ (Il2CppRGCTXDataType)2, 1765 },
	{ (Il2CppRGCTXDataType)3, 3601 },
	{ (Il2CppRGCTXDataType)3, 3602 },
	{ (Il2CppRGCTXDataType)2, 8197 },
	{ (Il2CppRGCTXDataType)3, 31760 },
	{ (Il2CppRGCTXDataType)3, 57234 },
	{ (Il2CppRGCTXDataType)2, 1384 },
	{ (Il2CppRGCTXDataType)3, 471 },
	{ (Il2CppRGCTXDataType)2, 6462 },
	{ (Il2CppRGCTXDataType)2, 4618 },
	{ (Il2CppRGCTXDataType)2, 4883 },
	{ (Il2CppRGCTXDataType)2, 5235 },
	{ (Il2CppRGCTXDataType)2, 6463 },
	{ (Il2CppRGCTXDataType)2, 4619 },
	{ (Il2CppRGCTXDataType)2, 4884 },
	{ (Il2CppRGCTXDataType)2, 5236 },
	{ (Il2CppRGCTXDataType)2, 6464 },
	{ (Il2CppRGCTXDataType)2, 4620 },
	{ (Il2CppRGCTXDataType)2, 4885 },
	{ (Il2CppRGCTXDataType)2, 5237 },
	{ (Il2CppRGCTXDataType)2, 4886 },
	{ (Il2CppRGCTXDataType)2, 5238 },
	{ (Il2CppRGCTXDataType)3, 18630 },
	{ (Il2CppRGCTXDataType)2, 6461 },
	{ (Il2CppRGCTXDataType)2, 4882 },
	{ (Il2CppRGCTXDataType)2, 5234 },
	{ (Il2CppRGCTXDataType)2, 3007 },
	{ (Il2CppRGCTXDataType)2, 4862 },
	{ (Il2CppRGCTXDataType)2, 4863 },
	{ (Il2CppRGCTXDataType)2, 5232 },
	{ (Il2CppRGCTXDataType)3, 18628 },
	{ (Il2CppRGCTXDataType)2, 4861 },
	{ (Il2CppRGCTXDataType)2, 5231 },
	{ (Il2CppRGCTXDataType)3, 18627 },
	{ (Il2CppRGCTXDataType)2, 4617 },
	{ (Il2CppRGCTXDataType)2, 4881 },
	{ (Il2CppRGCTXDataType)2, 4616 },
	{ (Il2CppRGCTXDataType)3, 57181 },
	{ (Il2CppRGCTXDataType)3, 17179 },
	{ (Il2CppRGCTXDataType)2, 4072 },
	{ (Il2CppRGCTXDataType)2, 4865 },
	{ (Il2CppRGCTXDataType)2, 5233 },
	{ (Il2CppRGCTXDataType)2, 5498 },
	{ (Il2CppRGCTXDataType)2, 4915 },
	{ (Il2CppRGCTXDataType)2, 5246 },
	{ (Il2CppRGCTXDataType)3, 18903 },
	{ (Il2CppRGCTXDataType)3, 29351 },
	{ (Il2CppRGCTXDataType)3, 29353 },
	{ (Il2CppRGCTXDataType)2, 934 },
	{ (Il2CppRGCTXDataType)3, 29352 },
	{ (Il2CppRGCTXDataType)3, 29361 },
	{ (Il2CppRGCTXDataType)2, 7464 },
	{ (Il2CppRGCTXDataType)2, 11063 },
	{ (Il2CppRGCTXDataType)3, 51321 },
	{ (Il2CppRGCTXDataType)3, 29362 },
	{ (Il2CppRGCTXDataType)2, 4987 },
	{ (Il2CppRGCTXDataType)2, 5300 },
	{ (Il2CppRGCTXDataType)3, 18644 },
	{ (Il2CppRGCTXDataType)3, 57138 },
	{ (Il2CppRGCTXDataType)2, 11114 },
	{ (Il2CppRGCTXDataType)3, 51462 },
	{ (Il2CppRGCTXDataType)3, 29354 },
	{ (Il2CppRGCTXDataType)2, 7463 },
	{ (Il2CppRGCTXDataType)2, 11049 },
	{ (Il2CppRGCTXDataType)3, 51301 },
	{ (Il2CppRGCTXDataType)3, 18643 },
	{ (Il2CppRGCTXDataType)3, 29355 },
	{ (Il2CppRGCTXDataType)3, 57137 },
	{ (Il2CppRGCTXDataType)2, 11099 },
	{ (Il2CppRGCTXDataType)3, 51377 },
	{ (Il2CppRGCTXDataType)3, 29368 },
	{ (Il2CppRGCTXDataType)2, 7465 },
	{ (Il2CppRGCTXDataType)2, 11082 },
	{ (Il2CppRGCTXDataType)3, 51354 },
	{ (Il2CppRGCTXDataType)3, 31821 },
	{ (Il2CppRGCTXDataType)3, 14781 },
	{ (Il2CppRGCTXDataType)3, 18645 },
	{ (Il2CppRGCTXDataType)3, 14780 },
	{ (Il2CppRGCTXDataType)3, 29369 },
	{ (Il2CppRGCTXDataType)3, 57139 },
	{ (Il2CppRGCTXDataType)2, 11129 },
	{ (Il2CppRGCTXDataType)3, 51563 },
	{ (Il2CppRGCTXDataType)3, 29382 },
	{ (Il2CppRGCTXDataType)2, 7467 },
	{ (Il2CppRGCTXDataType)2, 11116 },
	{ (Il2CppRGCTXDataType)3, 51464 },
	{ (Il2CppRGCTXDataType)3, 29383 },
	{ (Il2CppRGCTXDataType)2, 4990 },
	{ (Il2CppRGCTXDataType)2, 5303 },
	{ (Il2CppRGCTXDataType)3, 18649 },
	{ (Il2CppRGCTXDataType)3, 18648 },
	{ (Il2CppRGCTXDataType)2, 11065 },
	{ (Il2CppRGCTXDataType)3, 51323 },
	{ (Il2CppRGCTXDataType)3, 57146 },
	{ (Il2CppRGCTXDataType)2, 11115 },
	{ (Il2CppRGCTXDataType)3, 51463 },
	{ (Il2CppRGCTXDataType)3, 29375 },
	{ (Il2CppRGCTXDataType)2, 7466 },
	{ (Il2CppRGCTXDataType)2, 11101 },
	{ (Il2CppRGCTXDataType)3, 51379 },
	{ (Il2CppRGCTXDataType)3, 18647 },
	{ (Il2CppRGCTXDataType)3, 18646 },
	{ (Il2CppRGCTXDataType)3, 29376 },
	{ (Il2CppRGCTXDataType)2, 11064 },
	{ (Il2CppRGCTXDataType)3, 51322 },
	{ (Il2CppRGCTXDataType)3, 57145 },
	{ (Il2CppRGCTXDataType)2, 11100 },
	{ (Il2CppRGCTXDataType)3, 51378 },
	{ (Il2CppRGCTXDataType)3, 29389 },
	{ (Il2CppRGCTXDataType)2, 7468 },
	{ (Il2CppRGCTXDataType)2, 11131 },
	{ (Il2CppRGCTXDataType)3, 51565 },
	{ (Il2CppRGCTXDataType)3, 31822 },
	{ (Il2CppRGCTXDataType)3, 14783 },
	{ (Il2CppRGCTXDataType)3, 18651 },
	{ (Il2CppRGCTXDataType)3, 18650 },
	{ (Il2CppRGCTXDataType)3, 14782 },
	{ (Il2CppRGCTXDataType)3, 29390 },
	{ (Il2CppRGCTXDataType)2, 11066 },
	{ (Il2CppRGCTXDataType)3, 51324 },
	{ (Il2CppRGCTXDataType)3, 57147 },
	{ (Il2CppRGCTXDataType)2, 11130 },
	{ (Il2CppRGCTXDataType)3, 51564 },
	{ (Il2CppRGCTXDataType)3, 18640 },
	{ (Il2CppRGCTXDataType)3, 18641 },
	{ (Il2CppRGCTXDataType)3, 18655 },
	{ (Il2CppRGCTXDataType)3, 502 },
	{ (Il2CppRGCTXDataType)3, 501 },
	{ (Il2CppRGCTXDataType)2, 4976 },
	{ (Il2CppRGCTXDataType)2, 5292 },
	{ (Il2CppRGCTXDataType)3, 18642 },
	{ (Il2CppRGCTXDataType)2, 5020 },
	{ (Il2CppRGCTXDataType)2, 5339 },
	{ (Il2CppRGCTXDataType)3, 504 },
	{ (Il2CppRGCTXDataType)2, 1207 },
	{ (Il2CppRGCTXDataType)2, 1393 },
	{ (Il2CppRGCTXDataType)3, 500 },
	{ (Il2CppRGCTXDataType)3, 503 },
	{ (Il2CppRGCTXDataType)3, 537 },
	{ (Il2CppRGCTXDataType)2, 4979 },
	{ (Il2CppRGCTXDataType)2, 5294 },
	{ (Il2CppRGCTXDataType)3, 539 },
	{ (Il2CppRGCTXDataType)2, 930 },
	{ (Il2CppRGCTXDataType)2, 1401 },
	{ (Il2CppRGCTXDataType)3, 536 },
	{ (Il2CppRGCTXDataType)3, 538 },
	{ (Il2CppRGCTXDataType)3, 326 },
	{ (Il2CppRGCTXDataType)2, 10180 },
	{ (Il2CppRGCTXDataType)3, 46809 },
	{ (Il2CppRGCTXDataType)2, 4966 },
	{ (Il2CppRGCTXDataType)2, 5285 },
	{ (Il2CppRGCTXDataType)3, 46810 },
	{ (Il2CppRGCTXDataType)3, 328 },
	{ (Il2CppRGCTXDataType)2, 921 },
	{ (Il2CppRGCTXDataType)2, 1348 },
	{ (Il2CppRGCTXDataType)3, 325 },
	{ (Il2CppRGCTXDataType)3, 327 },
	{ (Il2CppRGCTXDataType)3, 569 },
	{ (Il2CppRGCTXDataType)3, 570 },
	{ (Il2CppRGCTXDataType)2, 10186 },
	{ (Il2CppRGCTXDataType)3, 46816 },
	{ (Il2CppRGCTXDataType)2, 4982 },
	{ (Il2CppRGCTXDataType)2, 5296 },
	{ (Il2CppRGCTXDataType)3, 46817 },
	{ (Il2CppRGCTXDataType)3, 572 },
	{ (Il2CppRGCTXDataType)2, 932 },
	{ (Il2CppRGCTXDataType)2, 1405 },
	{ (Il2CppRGCTXDataType)3, 568 },
	{ (Il2CppRGCTXDataType)3, 571 },
	{ (Il2CppRGCTXDataType)3, 459 },
	{ (Il2CppRGCTXDataType)2, 10184 },
	{ (Il2CppRGCTXDataType)3, 46813 },
	{ (Il2CppRGCTXDataType)2, 4972 },
	{ (Il2CppRGCTXDataType)2, 5289 },
	{ (Il2CppRGCTXDataType)3, 46814 },
	{ (Il2CppRGCTXDataType)3, 46815 },
	{ (Il2CppRGCTXDataType)3, 461 },
	{ (Il2CppRGCTXDataType)2, 925 },
	{ (Il2CppRGCTXDataType)2, 1382 },
	{ (Il2CppRGCTXDataType)3, 458 },
	{ (Il2CppRGCTXDataType)3, 460 },
	{ (Il2CppRGCTXDataType)3, 367 },
	{ (Il2CppRGCTXDataType)2, 10182 },
	{ (Il2CppRGCTXDataType)3, 46811 },
	{ (Il2CppRGCTXDataType)2, 4969 },
	{ (Il2CppRGCTXDataType)2, 5287 },
	{ (Il2CppRGCTXDataType)3, 46812 },
	{ (Il2CppRGCTXDataType)3, 369 },
	{ (Il2CppRGCTXDataType)2, 923 },
	{ (Il2CppRGCTXDataType)2, 1355 },
	{ (Il2CppRGCTXDataType)3, 366 },
	{ (Il2CppRGCTXDataType)3, 368 },
	{ (Il2CppRGCTXDataType)3, 473 },
	{ (Il2CppRGCTXDataType)2, 927 },
	{ (Il2CppRGCTXDataType)3, 475 },
	{ (Il2CppRGCTXDataType)2, 1385 },
	{ (Il2CppRGCTXDataType)3, 472 },
	{ (Il2CppRGCTXDataType)3, 474 },
	{ (Il2CppRGCTXDataType)2, 11891 },
	{ (Il2CppRGCTXDataType)2, 3008 },
	{ (Il2CppRGCTXDataType)3, 17221 },
	{ (Il2CppRGCTXDataType)2, 4089 },
	{ (Il2CppRGCTXDataType)2, 12362 },
	{ (Il2CppRGCTXDataType)3, 46806 },
	{ (Il2CppRGCTXDataType)3, 46807 },
	{ (Il2CppRGCTXDataType)2, 5516 },
	{ (Il2CppRGCTXDataType)3, 46808 },
	{ (Il2CppRGCTXDataType)2, 820 },
	{ (Il2CppRGCTXDataType)2, 1357 },
	{ (Il2CppRGCTXDataType)3, 379 },
	{ (Il2CppRGCTXDataType)3, 40448 },
	{ (Il2CppRGCTXDataType)2, 9007 },
	{ (Il2CppRGCTXDataType)3, 40475 },
	{ (Il2CppRGCTXDataType)2, 1766 },
	{ (Il2CppRGCTXDataType)3, 3603 },
	{ (Il2CppRGCTXDataType)3, 40454 },
	{ (Il2CppRGCTXDataType)3, 14717 },
	{ (Il2CppRGCTXDataType)2, 968 },
	{ (Il2CppRGCTXDataType)3, 40449 },
	{ (Il2CppRGCTXDataType)2, 9002 },
	{ (Il2CppRGCTXDataType)3, 4133 },
	{ (Il2CppRGCTXDataType)2, 1819 },
	{ (Il2CppRGCTXDataType)2, 3209 },
	{ (Il2CppRGCTXDataType)3, 14735 },
	{ (Il2CppRGCTXDataType)3, 40450 },
	{ (Il2CppRGCTXDataType)3, 14712 },
	{ (Il2CppRGCTXDataType)3, 14713 },
	{ (Il2CppRGCTXDataType)3, 14711 },
	{ (Il2CppRGCTXDataType)3, 14714 },
	{ (Il2CppRGCTXDataType)2, 3205 },
	{ (Il2CppRGCTXDataType)2, 11957 },
	{ (Il2CppRGCTXDataType)3, 18638 },
	{ (Il2CppRGCTXDataType)3, 14716 },
	{ (Il2CppRGCTXDataType)2, 4788 },
	{ (Il2CppRGCTXDataType)3, 14715 },
	{ (Il2CppRGCTXDataType)2, 4625 },
	{ (Il2CppRGCTXDataType)2, 11884 },
	{ (Il2CppRGCTXDataType)2, 4919 },
	{ (Il2CppRGCTXDataType)2, 5249 },
	{ (Il2CppRGCTXDataType)3, 17200 },
	{ (Il2CppRGCTXDataType)2, 4082 },
	{ (Il2CppRGCTXDataType)3, 19587 },
	{ (Il2CppRGCTXDataType)3, 19588 },
	{ (Il2CppRGCTXDataType)3, 19593 },
	{ (Il2CppRGCTXDataType)2, 5510 },
	{ (Il2CppRGCTXDataType)3, 19590 },
	{ (Il2CppRGCTXDataType)3, 58463 },
	{ (Il2CppRGCTXDataType)2, 3213 },
	{ (Il2CppRGCTXDataType)3, 14768 },
	{ (Il2CppRGCTXDataType)1, 4773 },
	{ (Il2CppRGCTXDataType)2, 11897 },
	{ (Il2CppRGCTXDataType)3, 19589 },
	{ (Il2CppRGCTXDataType)1, 11897 },
	{ (Il2CppRGCTXDataType)1, 5510 },
	{ (Il2CppRGCTXDataType)2, 12360 },
	{ (Il2CppRGCTXDataType)2, 11897 },
	{ (Il2CppRGCTXDataType)2, 4926 },
	{ (Il2CppRGCTXDataType)2, 5254 },
	{ (Il2CppRGCTXDataType)3, 19594 },
	{ (Il2CppRGCTXDataType)3, 19592 },
	{ (Il2CppRGCTXDataType)3, 19591 },
	{ (Il2CppRGCTXDataType)2, 693 },
	{ (Il2CppRGCTXDataType)3, 14784 },
	{ (Il2CppRGCTXDataType)2, 943 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	214,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	69,
	s_rgctxIndices,
	317,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
