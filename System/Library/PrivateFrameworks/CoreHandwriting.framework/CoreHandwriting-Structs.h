/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct Matrix<double> {
	/*function pointer*/void* _vptr$Matrix;
	double _data;
	unsigned _w;
	unsigned _h;
} Matrix<double>;

typedef struct _compressed_pair<std::__1::vector<double, std::__1::allocator<double> > *, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > {
	vector<double, std::__1::allocator<double> > __first_;
} compressed_pair<std::__1::vector<double, std::__1::allocator<double> > *, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > >;

typedef struct vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > {
	vector<double, std::__1::allocator<double> > __begin_;
	vector<double, std::__1::allocator<double> > __end_;
	compressed_pair<std::__1::vector<double, std::__1::allocator<double> > *, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > __end_cap_;
} vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > >;

typedef struct CJKChar {
	vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > strokes;
	unsigned long long currentStrokeIndex;
	unsigned mSize;
	Matrix<double> bitmap;
	double lineHeight;
} CJKChar;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct __Mecabra* MecabraRef;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > >, std::__1::less<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > >, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > >, std::__1::less<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > >, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > >, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > >, void *> > >;

typedef struct _tree<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > >, std::__1::__map_value_compare<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > >, std::__1::less<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > > > > {
	__tree_node<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > >, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > >, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > >, std::__1::less<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > >, true> > __pair3_;
} tree<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > >, std::__1::__map_value_compare<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > >, std::__1::less<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > > > >;

typedef struct map<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> >, std::__1::less<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > >, std::__1::allocator<std::__1::pair<const std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > > > > {
	tree<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > >, std::__1::__map_value_compare<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > >, std::__1::less<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > > > > __tree_;
} map<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> >, std::__1::less<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > >, std::__1::allocator<std::__1::pair<const std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > > > >;

typedef struct _compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> > {
	 __first_;
} compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >;

typedef struct vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> > {
	 __begin_;
	 __end_;
	compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> > __end_cap_;
} vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >;

typedef struct CGPath* CGPathRef;

