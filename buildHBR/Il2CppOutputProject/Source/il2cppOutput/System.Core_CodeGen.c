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
	8132,
	8132,
	8395,
	8395,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	8020,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
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
	{ (Il2CppRGCTXDataType)2, 7837 },
	{ (Il2CppRGCTXDataType)3, 31339 },
	{ (Il2CppRGCTXDataType)2, 12540 },
	{ (Il2CppRGCTXDataType)2, 11727 },
	{ (Il2CppRGCTXDataType)3, 55000 },
	{ (Il2CppRGCTXDataType)2, 8632 },
	{ (Il2CppRGCTXDataType)2, 11760 },
	{ (Il2CppRGCTXDataType)3, 55053 },
	{ (Il2CppRGCTXDataType)2, 11741 },
	{ (Il2CppRGCTXDataType)3, 55020 },
	{ (Il2CppRGCTXDataType)2, 7838 },
	{ (Il2CppRGCTXDataType)3, 31340 },
	{ (Il2CppRGCTXDataType)2, 12576 },
	{ (Il2CppRGCTXDataType)2, 11777 },
	{ (Il2CppRGCTXDataType)3, 55076 },
	{ (Il2CppRGCTXDataType)2, 8658 },
	{ (Il2CppRGCTXDataType)2, 11807 },
	{ (Il2CppRGCTXDataType)3, 55262 },
	{ (Il2CppRGCTXDataType)2, 11792 },
	{ (Il2CppRGCTXDataType)3, 55161 },
	{ (Il2CppRGCTXDataType)2, 1377 },
	{ (Il2CppRGCTXDataType)3, 241 },
	{ (Il2CppRGCTXDataType)3, 242 },
	{ (Il2CppRGCTXDataType)2, 4574 },
	{ (Il2CppRGCTXDataType)3, 20177 },
	{ (Il2CppRGCTXDataType)2, 1381 },
	{ (Il2CppRGCTXDataType)3, 269 },
	{ (Il2CppRGCTXDataType)3, 270 },
	{ (Il2CppRGCTXDataType)2, 4592 },
	{ (Il2CppRGCTXDataType)3, 20184 },
	{ (Il2CppRGCTXDataType)3, 61261 },
	{ (Il2CppRGCTXDataType)2, 1429 },
	{ (Il2CppRGCTXDataType)3, 499 },
	{ (Il2CppRGCTXDataType)3, 61268 },
	{ (Il2CppRGCTXDataType)2, 1437 },
	{ (Il2CppRGCTXDataType)3, 535 },
	{ (Il2CppRGCTXDataType)2, 9518 },
	{ (Il2CppRGCTXDataType)3, 43400 },
	{ (Il2CppRGCTXDataType)2, 9519 },
	{ (Il2CppRGCTXDataType)3, 43401 },
	{ (Il2CppRGCTXDataType)3, 26177 },
	{ (Il2CppRGCTXDataType)3, 61190 },
	{ (Il2CppRGCTXDataType)2, 1384 },
	{ (Il2CppRGCTXDataType)3, 324 },
	{ (Il2CppRGCTXDataType)3, 61307 },
	{ (Il2CppRGCTXDataType)2, 1441 },
	{ (Il2CppRGCTXDataType)3, 567 },
	{ (Il2CppRGCTXDataType)3, 61212 },
	{ (Il2CppRGCTXDataType)2, 1418 },
	{ (Il2CppRGCTXDataType)3, 457 },
	{ (Il2CppRGCTXDataType)3, 61199 },
	{ (Il2CppRGCTXDataType)2, 1391 },
	{ (Il2CppRGCTXDataType)3, 365 },
	{ (Il2CppRGCTXDataType)2, 1865 },
	{ (Il2CppRGCTXDataType)3, 4287 },
	{ (Il2CppRGCTXDataType)3, 4288 },
	{ (Il2CppRGCTXDataType)2, 8633 },
	{ (Il2CppRGCTXDataType)3, 33921 },
	{ (Il2CppRGCTXDataType)3, 61219 },
	{ (Il2CppRGCTXDataType)2, 1421 },
	{ (Il2CppRGCTXDataType)3, 471 },
	{ (Il2CppRGCTXDataType)2, 6832 },
	{ (Il2CppRGCTXDataType)2, 4898 },
	{ (Il2CppRGCTXDataType)2, 5174 },
	{ (Il2CppRGCTXDataType)2, 5533 },
	{ (Il2CppRGCTXDataType)2, 6833 },
	{ (Il2CppRGCTXDataType)2, 4899 },
	{ (Il2CppRGCTXDataType)2, 5175 },
	{ (Il2CppRGCTXDataType)2, 5534 },
	{ (Il2CppRGCTXDataType)2, 6834 },
	{ (Il2CppRGCTXDataType)2, 4900 },
	{ (Il2CppRGCTXDataType)2, 5176 },
	{ (Il2CppRGCTXDataType)2, 5535 },
	{ (Il2CppRGCTXDataType)2, 5177 },
	{ (Il2CppRGCTXDataType)2, 5536 },
	{ (Il2CppRGCTXDataType)3, 20178 },
	{ (Il2CppRGCTXDataType)2, 6831 },
	{ (Il2CppRGCTXDataType)2, 5173 },
	{ (Il2CppRGCTXDataType)2, 5532 },
	{ (Il2CppRGCTXDataType)2, 3191 },
	{ (Il2CppRGCTXDataType)2, 5153 },
	{ (Il2CppRGCTXDataType)2, 5154 },
	{ (Il2CppRGCTXDataType)2, 5530 },
	{ (Il2CppRGCTXDataType)3, 20176 },
	{ (Il2CppRGCTXDataType)2, 5152 },
	{ (Il2CppRGCTXDataType)2, 5529 },
	{ (Il2CppRGCTXDataType)3, 20175 },
	{ (Il2CppRGCTXDataType)2, 4897 },
	{ (Il2CppRGCTXDataType)2, 5172 },
	{ (Il2CppRGCTXDataType)2, 4896 },
	{ (Il2CppRGCTXDataType)3, 61166 },
	{ (Il2CppRGCTXDataType)3, 18655 },
	{ (Il2CppRGCTXDataType)2, 4343 },
	{ (Il2CppRGCTXDataType)2, 5156 },
	{ (Il2CppRGCTXDataType)2, 5531 },
	{ (Il2CppRGCTXDataType)2, 5804 },
	{ (Il2CppRGCTXDataType)2, 5206 },
	{ (Il2CppRGCTXDataType)2, 5544 },
	{ (Il2CppRGCTXDataType)3, 20451 },
	{ (Il2CppRGCTXDataType)3, 31341 },
	{ (Il2CppRGCTXDataType)3, 31343 },
	{ (Il2CppRGCTXDataType)2, 952 },
	{ (Il2CppRGCTXDataType)3, 31342 },
	{ (Il2CppRGCTXDataType)3, 31351 },
	{ (Il2CppRGCTXDataType)2, 7841 },
	{ (Il2CppRGCTXDataType)2, 11742 },
	{ (Il2CppRGCTXDataType)3, 55021 },
	{ (Il2CppRGCTXDataType)3, 31352 },
	{ (Il2CppRGCTXDataType)2, 5279 },
	{ (Il2CppRGCTXDataType)2, 5598 },
	{ (Il2CppRGCTXDataType)3, 20192 },
	{ (Il2CppRGCTXDataType)3, 61123 },
	{ (Il2CppRGCTXDataType)2, 11793 },
	{ (Il2CppRGCTXDataType)3, 55162 },
	{ (Il2CppRGCTXDataType)3, 31344 },
	{ (Il2CppRGCTXDataType)2, 7840 },
	{ (Il2CppRGCTXDataType)2, 11728 },
	{ (Il2CppRGCTXDataType)3, 55001 },
	{ (Il2CppRGCTXDataType)3, 20191 },
	{ (Il2CppRGCTXDataType)3, 31345 },
	{ (Il2CppRGCTXDataType)3, 61122 },
	{ (Il2CppRGCTXDataType)2, 11778 },
	{ (Il2CppRGCTXDataType)3, 55077 },
	{ (Il2CppRGCTXDataType)3, 31358 },
	{ (Il2CppRGCTXDataType)2, 7842 },
	{ (Il2CppRGCTXDataType)2, 11761 },
	{ (Il2CppRGCTXDataType)3, 55054 },
	{ (Il2CppRGCTXDataType)3, 33982 },
	{ (Il2CppRGCTXDataType)3, 16024 },
	{ (Il2CppRGCTXDataType)3, 20193 },
	{ (Il2CppRGCTXDataType)3, 16023 },
	{ (Il2CppRGCTXDataType)3, 31359 },
	{ (Il2CppRGCTXDataType)3, 61124 },
	{ (Il2CppRGCTXDataType)2, 11808 },
	{ (Il2CppRGCTXDataType)3, 55263 },
	{ (Il2CppRGCTXDataType)3, 31372 },
	{ (Il2CppRGCTXDataType)2, 7844 },
	{ (Il2CppRGCTXDataType)2, 11795 },
	{ (Il2CppRGCTXDataType)3, 55164 },
	{ (Il2CppRGCTXDataType)3, 31373 },
	{ (Il2CppRGCTXDataType)2, 5282 },
	{ (Il2CppRGCTXDataType)2, 5601 },
	{ (Il2CppRGCTXDataType)3, 20197 },
	{ (Il2CppRGCTXDataType)3, 20196 },
	{ (Il2CppRGCTXDataType)2, 11744 },
	{ (Il2CppRGCTXDataType)3, 55023 },
	{ (Il2CppRGCTXDataType)3, 61131 },
	{ (Il2CppRGCTXDataType)2, 11794 },
	{ (Il2CppRGCTXDataType)3, 55163 },
	{ (Il2CppRGCTXDataType)3, 31365 },
	{ (Il2CppRGCTXDataType)2, 7843 },
	{ (Il2CppRGCTXDataType)2, 11780 },
	{ (Il2CppRGCTXDataType)3, 55079 },
	{ (Il2CppRGCTXDataType)3, 20195 },
	{ (Il2CppRGCTXDataType)3, 20194 },
	{ (Il2CppRGCTXDataType)3, 31366 },
	{ (Il2CppRGCTXDataType)2, 11743 },
	{ (Il2CppRGCTXDataType)3, 55022 },
	{ (Il2CppRGCTXDataType)3, 61130 },
	{ (Il2CppRGCTXDataType)2, 11779 },
	{ (Il2CppRGCTXDataType)3, 55078 },
	{ (Il2CppRGCTXDataType)3, 31379 },
	{ (Il2CppRGCTXDataType)2, 7845 },
	{ (Il2CppRGCTXDataType)2, 11810 },
	{ (Il2CppRGCTXDataType)3, 55265 },
	{ (Il2CppRGCTXDataType)3, 33983 },
	{ (Il2CppRGCTXDataType)3, 16026 },
	{ (Il2CppRGCTXDataType)3, 20199 },
	{ (Il2CppRGCTXDataType)3, 20198 },
	{ (Il2CppRGCTXDataType)3, 16025 },
	{ (Il2CppRGCTXDataType)3, 31380 },
	{ (Il2CppRGCTXDataType)2, 11745 },
	{ (Il2CppRGCTXDataType)3, 55024 },
	{ (Il2CppRGCTXDataType)3, 61132 },
	{ (Il2CppRGCTXDataType)2, 11809 },
	{ (Il2CppRGCTXDataType)3, 55264 },
	{ (Il2CppRGCTXDataType)3, 20188 },
	{ (Il2CppRGCTXDataType)3, 20189 },
	{ (Il2CppRGCTXDataType)3, 20203 },
	{ (Il2CppRGCTXDataType)3, 502 },
	{ (Il2CppRGCTXDataType)3, 501 },
	{ (Il2CppRGCTXDataType)2, 5268 },
	{ (Il2CppRGCTXDataType)2, 5590 },
	{ (Il2CppRGCTXDataType)3, 20190 },
	{ (Il2CppRGCTXDataType)2, 5314 },
	{ (Il2CppRGCTXDataType)2, 5639 },
	{ (Il2CppRGCTXDataType)3, 504 },
	{ (Il2CppRGCTXDataType)2, 1237 },
	{ (Il2CppRGCTXDataType)2, 1430 },
	{ (Il2CppRGCTXDataType)3, 500 },
	{ (Il2CppRGCTXDataType)3, 503 },
	{ (Il2CppRGCTXDataType)3, 537 },
	{ (Il2CppRGCTXDataType)2, 5271 },
	{ (Il2CppRGCTXDataType)2, 5592 },
	{ (Il2CppRGCTXDataType)3, 539 },
	{ (Il2CppRGCTXDataType)2, 948 },
	{ (Il2CppRGCTXDataType)2, 1438 },
	{ (Il2CppRGCTXDataType)3, 536 },
	{ (Il2CppRGCTXDataType)3, 538 },
	{ (Il2CppRGCTXDataType)3, 326 },
	{ (Il2CppRGCTXDataType)2, 10776 },
	{ (Il2CppRGCTXDataType)3, 50027 },
	{ (Il2CppRGCTXDataType)2, 5258 },
	{ (Il2CppRGCTXDataType)2, 5583 },
	{ (Il2CppRGCTXDataType)3, 50028 },
	{ (Il2CppRGCTXDataType)3, 328 },
	{ (Il2CppRGCTXDataType)2, 939 },
	{ (Il2CppRGCTXDataType)2, 1385 },
	{ (Il2CppRGCTXDataType)3, 325 },
	{ (Il2CppRGCTXDataType)3, 327 },
	{ (Il2CppRGCTXDataType)3, 569 },
	{ (Il2CppRGCTXDataType)3, 570 },
	{ (Il2CppRGCTXDataType)2, 10782 },
	{ (Il2CppRGCTXDataType)3, 50034 },
	{ (Il2CppRGCTXDataType)2, 5274 },
	{ (Il2CppRGCTXDataType)2, 5594 },
	{ (Il2CppRGCTXDataType)3, 50035 },
	{ (Il2CppRGCTXDataType)3, 572 },
	{ (Il2CppRGCTXDataType)2, 950 },
	{ (Il2CppRGCTXDataType)2, 1442 },
	{ (Il2CppRGCTXDataType)3, 568 },
	{ (Il2CppRGCTXDataType)3, 571 },
	{ (Il2CppRGCTXDataType)3, 459 },
	{ (Il2CppRGCTXDataType)2, 10780 },
	{ (Il2CppRGCTXDataType)3, 50031 },
	{ (Il2CppRGCTXDataType)2, 5264 },
	{ (Il2CppRGCTXDataType)2, 5587 },
	{ (Il2CppRGCTXDataType)3, 50032 },
	{ (Il2CppRGCTXDataType)3, 50033 },
	{ (Il2CppRGCTXDataType)3, 461 },
	{ (Il2CppRGCTXDataType)2, 943 },
	{ (Il2CppRGCTXDataType)2, 1419 },
	{ (Il2CppRGCTXDataType)3, 458 },
	{ (Il2CppRGCTXDataType)3, 460 },
	{ (Il2CppRGCTXDataType)3, 367 },
	{ (Il2CppRGCTXDataType)2, 10778 },
	{ (Il2CppRGCTXDataType)3, 50029 },
	{ (Il2CppRGCTXDataType)2, 5261 },
	{ (Il2CppRGCTXDataType)2, 5585 },
	{ (Il2CppRGCTXDataType)3, 50030 },
	{ (Il2CppRGCTXDataType)3, 369 },
	{ (Il2CppRGCTXDataType)2, 941 },
	{ (Il2CppRGCTXDataType)2, 1392 },
	{ (Il2CppRGCTXDataType)3, 366 },
	{ (Il2CppRGCTXDataType)3, 368 },
	{ (Il2CppRGCTXDataType)3, 473 },
	{ (Il2CppRGCTXDataType)2, 945 },
	{ (Il2CppRGCTXDataType)3, 475 },
	{ (Il2CppRGCTXDataType)2, 1422 },
	{ (Il2CppRGCTXDataType)3, 472 },
	{ (Il2CppRGCTXDataType)3, 474 },
	{ (Il2CppRGCTXDataType)2, 12592 },
	{ (Il2CppRGCTXDataType)2, 3192 },
	{ (Il2CppRGCTXDataType)3, 18697 },
	{ (Il2CppRGCTXDataType)2, 4360 },
	{ (Il2CppRGCTXDataType)2, 13097 },
	{ (Il2CppRGCTXDataType)3, 50024 },
	{ (Il2CppRGCTXDataType)3, 50025 },
	{ (Il2CppRGCTXDataType)2, 5822 },
	{ (Il2CppRGCTXDataType)3, 50026 },
	{ (Il2CppRGCTXDataType)2, 837 },
	{ (Il2CppRGCTXDataType)2, 1394 },
	{ (Il2CppRGCTXDataType)3, 379 },
	{ (Il2CppRGCTXDataType)3, 43375 },
	{ (Il2CppRGCTXDataType)2, 9520 },
	{ (Il2CppRGCTXDataType)3, 43402 },
	{ (Il2CppRGCTXDataType)2, 1866 },
	{ (Il2CppRGCTXDataType)3, 4289 },
	{ (Il2CppRGCTXDataType)3, 43381 },
	{ (Il2CppRGCTXDataType)3, 15960 },
	{ (Il2CppRGCTXDataType)2, 988 },
	{ (Il2CppRGCTXDataType)3, 43376 },
	{ (Il2CppRGCTXDataType)2, 9515 },
	{ (Il2CppRGCTXDataType)3, 4820 },
	{ (Il2CppRGCTXDataType)2, 1920 },
	{ (Il2CppRGCTXDataType)2, 3406 },
	{ (Il2CppRGCTXDataType)3, 15978 },
	{ (Il2CppRGCTXDataType)3, 43377 },
	{ (Il2CppRGCTXDataType)3, 15955 },
	{ (Il2CppRGCTXDataType)3, 15956 },
	{ (Il2CppRGCTXDataType)3, 15954 },
	{ (Il2CppRGCTXDataType)3, 15957 },
	{ (Il2CppRGCTXDataType)2, 3402 },
	{ (Il2CppRGCTXDataType)2, 12661 },
	{ (Il2CppRGCTXDataType)3, 20186 },
	{ (Il2CppRGCTXDataType)3, 15959 },
	{ (Il2CppRGCTXDataType)2, 5076 },
	{ (Il2CppRGCTXDataType)3, 15958 },
	{ (Il2CppRGCTXDataType)2, 4905 },
	{ (Il2CppRGCTXDataType)2, 12585 },
	{ (Il2CppRGCTXDataType)2, 5210 },
	{ (Il2CppRGCTXDataType)2, 5547 },
	{ (Il2CppRGCTXDataType)3, 18676 },
	{ (Il2CppRGCTXDataType)2, 4353 },
	{ (Il2CppRGCTXDataType)3, 21186 },
	{ (Il2CppRGCTXDataType)3, 21187 },
	{ (Il2CppRGCTXDataType)3, 21192 },
	{ (Il2CppRGCTXDataType)2, 5816 },
	{ (Il2CppRGCTXDataType)3, 21189 },
	{ (Il2CppRGCTXDataType)3, 62490 },
	{ (Il2CppRGCTXDataType)2, 3410 },
	{ (Il2CppRGCTXDataType)3, 16011 },
	{ (Il2CppRGCTXDataType)1, 5059 },
	{ (Il2CppRGCTXDataType)2, 12598 },
	{ (Il2CppRGCTXDataType)3, 21188 },
	{ (Il2CppRGCTXDataType)1, 12598 },
	{ (Il2CppRGCTXDataType)1, 5816 },
	{ (Il2CppRGCTXDataType)2, 13095 },
	{ (Il2CppRGCTXDataType)2, 12598 },
	{ (Il2CppRGCTXDataType)2, 5217 },
	{ (Il2CppRGCTXDataType)2, 5552 },
	{ (Il2CppRGCTXDataType)3, 21193 },
	{ (Il2CppRGCTXDataType)3, 21191 },
	{ (Il2CppRGCTXDataType)3, 21190 },
	{ (Il2CppRGCTXDataType)2, 710 },
	{ (Il2CppRGCTXDataType)3, 16027 },
	{ (Il2CppRGCTXDataType)2, 961 },
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
