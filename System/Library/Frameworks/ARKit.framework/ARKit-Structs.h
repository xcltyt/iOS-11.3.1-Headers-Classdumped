/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct __CVBuffer* CVBufferRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGImage* CGImageRef;

typedef struct {
	[3 columns];
} SCD_Struct_AR4;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_AR5;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct OpaqueVTPixelTransferSession* OpaqueVTPixelTransferSessionRef;

typedef struct __CVPixelBufferPool* CVPixelBufferPoolRef;

typedef struct CV3DODTContext* CV3DODTContextRef;

typedef struct {
	long long field1;
	long long field2;
	BOOL field3;
	BOOL field4;
	int field5;
} SCD_Struct_AR11;

typedef struct _compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> > {
	 __value_;
} compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >;

typedef struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> > {
	 __begin_;
	 __end_;
	compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> > __end_cap_;
} vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >;

typedef struct _compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > {
	 __value_;
} compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >;

typedef struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > {
	 __begin_;
	 __end_;
	compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > __end_cap_;
} vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >;

typedef struct _compressed_pair<float *, std::__1::allocator<float> > {
	float __value_;
} compressed_pair<float *, std::__1::allocator<float> >;

typedef struct vector<float, std::__1::allocator<float> > {
	float __begin_;
	float __end_;
	compressed_pair<float *, std::__1::allocator<float> > __end_cap_;
} vector<float, std::__1::allocator<float> >;

typedef struct {
	[4 columns];
} SCD_Struct_AR18;

typedef struct OpaqueVTImageRotationSession* OpaqueVTImageRotationSessionRef;

typedef struct {
	float field1;
	float field2;
	float field3;
} SCD_Struct_AR20;

typedef struct {
	SCD_Struct_AR20 field1;
	double field2;
} SCD_Struct_AR21;

typedef struct __IOHIDEventSystemClient* IOHIDEventSystemClientRef;

typedef struct __IOHIDServiceClient* IOHIDServiceClientRef;

typedef struct __IOHIDEvent* IOHIDEventRef;

typedef struct shared_ptr<acv::math::PinholeCamera> {
	PinholeCamera __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<acv::math::PinholeCamera>;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, acv::vision::marker::DetectedMarker>, std::__1::less<int>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, acv::vision::marker::DetectedMarker>, std::__1::less<int>, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, acv::vision::marker::DetectedMarker>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, acv::vision::marker::DetectedMarker>, void *> > >;

typedef struct _tree<std::__1::__value_type<int, acv::vision::marker::DetectedMarker>, std::__1::__map_value_compare<int, std::__1::__value_type<int, acv::vision::marker::DetectedMarker>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, acv::vision::marker::DetectedMarker> > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, acv::vision::marker::DetectedMarker>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, acv::vision::marker::DetectedMarker>, std::__1::less<int>, true> > __pair3_;
} tree<std::__1::__value_type<int, acv::vision::marker::DetectedMarker>, std::__1::__map_value_compare<int, std::__1::__value_type<int, acv::vision::marker::DetectedMarker>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, acv::vision::marker::DetectedMarker> > >;

typedef struct map<int, acv::vision::marker::DetectedMarker, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, acv::vision::marker::DetectedMarker> > > {
	tree<std::__1::__value_type<int, acv::vision::marker::DetectedMarker>, std::__1::__map_value_compare<int, std::__1::__value_type<int, acv::vision::marker::DetectedMarker>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, acv::vision::marker::DetectedMarker> > > __tree_;
} map<int, acv::vision::marker::DetectedMarker, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, acv::vision::marker::DetectedMarker> > >;

typedef struct _compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long> > {
	unsigned long long __value_;
} compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long> >;

typedef struct vector<unsigned long long, std::__1::allocator<unsigned long long> > {
	unsigned long long __begin_;
	unsigned long long __end_;
	compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long> > __end_cap_;
} vector<unsigned long long, std::__1::allocator<unsigned long long> >;

typedef const struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >__compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >* ector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >Ref;

typedef struct {
	double x;
	double y;
	double z;
} SCD_Struct_AR34;

typedef struct {
	int field1;
	int field2;
} SCD_Struct_AR35;

typedef struct {
	float coefficients[9];
} SCD_Struct_AR36;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_AR37;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct CV3DVIOContext* CV3DVIOContextRef;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<CV3DVIOError, std::__1::__value_type<CV3DVIOError, double>, std::__1::less<CV3DVIOError>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<CV3DVIOError, std::__1::__value_type<CV3DVIOError, double>, std::__1::less<CV3DVIOError>, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<CV3DVIOError, double>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<CV3DVIOError, double>, void *> > >;

typedef struct _tree<std::__1::__value_type<CV3DVIOError, double>, std::__1::__map_value_compare<CV3DVIOError, std::__1::__value_type<CV3DVIOError, double>, std::__1::less<CV3DVIOError>, true>, std::__1::allocator<std::__1::__value_type<CV3DVIOError, double> > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<CV3DVIOError, double>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<CV3DVIOError, std::__1::__value_type<CV3DVIOError, double>, std::__1::less<CV3DVIOError>, true> > __pair3_;
} tree<std::__1::__value_type<CV3DVIOError, double>, std::__1::__map_value_compare<CV3DVIOError, std::__1::__value_type<CV3DVIOError, double>, std::__1::less<CV3DVIOError>, true>, std::__1::allocator<std::__1::__value_type<CV3DVIOError, double> > >;

typedef struct map<CV3DVIOError, double, std::__1::less<CV3DVIOError>, std::__1::allocator<std::__1::pair<const CV3DVIOError, double> > > {
	tree<std::__1::__value_type<CV3DVIOError, double>, std::__1::__map_value_compare<CV3DVIOError, std::__1::__value_type<CV3DVIOError, double>, std::__1::less<CV3DVIOError>, true>, std::__1::allocator<std::__1::__value_type<CV3DVIOError, double> > > __tree_;
} map<CV3DVIOError, double, std::__1::less<CV3DVIOError>, std::__1::allocator<std::__1::pair<const CV3DVIOError, double> > >;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct _compressed_pair<ARPatch *, std::__1::allocator<ARPatch> > {
	/*function pointer*/void* __value_;
} compressed_pair<ARPatch *, std::__1::allocator<ARPatch> >;

typedef struct vector<ARPatch, std::__1::allocator<ARPatch> > {
	/*function pointer*/void* __begin_;
	/*function pointer*/void* __end_;
	compressed_pair<ARPatch *, std::__1::allocator<ARPatch> > __end_cap_;
} vector<ARPatch, std::__1::allocator<ARPatch> >;

typedef struct Matrix<float, 0, 1> {
	float m_data;
	unsigned long long m_capacity;
	unsigned m_rows;
} Matrix<float, 0, 1>;

typedef struct _compressed_pair<int *, std::__1::allocator<int> > {
	int __value_;
} compressed_pair<int *, std::__1::allocator<int> >;

typedef struct Matrix<float, 0, 0> {
	float m_data;
	unsigned long long m_capacity;
	unsigned m_rows;
	unsigned m_cols;
} Matrix<float, 0, 0>;

typedef struct _compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > {
	unsigned long long __value_;
} compressed_pair<unsigned long *, std::__1::allocator<unsigned long> >;

typedef struct vector<unsigned long, std::__1::allocator<unsigned long> > {
	unsigned long long __begin_;
	unsigned long long __end_;
	compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > __end_cap_;
} vector<unsigned long, std::__1::allocator<unsigned long> >;

typedef struct _compressed_pair<cva::Matrix<float, 9, 1> *, std::__1::default_delete<cva::Matrix<float, 9, 1> > > {
	Matrix<float, 9, 1> __value_;
} compressed_pair<cva::Matrix<float, 9, 1> *, std::__1::default_delete<cva::Matrix<float, 9, 1> > >;

typedef struct unique_ptr<cva::Matrix<float, 9, 1>, std::__1::default_delete<cva::Matrix<float, 9, 1> > > {
	compressed_pair<cva::Matrix<float, 9, 1> *, std::__1::default_delete<cva::Matrix<float, 9, 1> > > __ptr_;
} unique_ptr<cva::Matrix<float, 9, 1>, std::__1::default_delete<cva::Matrix<float, 9, 1> > >;

typedef struct Optional<cva::Matrix<float, 9, 1>, void> {
	unique_ptr<cva::Matrix<float, 9, 1>, std::__1::default_delete<cva::Matrix<float, 9, 1> > > m_value;
} Optional<cva::Matrix<float, 9, 1>, void>;

typedef struct shared_ptr<acv::vision::algorithms::PrecomputedFaceData> {
	PrecomputedFaceData __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<acv::vision::algorithms::PrecomputedFaceData>;

typedef struct vector<int, std::__1::allocator<int> > {
	int __begin_;
	int __end_;
	compressed_pair<int *, std::__1::allocator<int> > __end_cap_;
} vector<int, std::__1::allocator<int> >;

typedef struct FacialLightEstimation {
	/*function pointer*/void* _vptr$FacialLightEstimation;
	Matrix<float, 0, 1> m_validSampleIntensities;
	vector<int, std::__1::allocator<int> > m_validChromaSampleIDS;
	vector<int, std::__1::allocator<int> > m_sampleIndices_all;
	Matrix<float, 0, 0> m_validRtfs;
	float m_gamma;
	shared_ptr<acv::vision::algorithms::PrecomputedFaceData> m_precomputedFaceData;
	Optional<cva::Matrix<float, 9, 1>, void> m_averageSHCoeff;
	vector<unsigned long, std::__1::allocator<unsigned long> > m_inliers;
} FacialLightEstimation;

typedef struct FLEOptions {
	float smoothingAlpha;
	int maxSHDegree;
	float lightIntensityMinimumConstraint;
	BOOL ransacEnabled;
	BOOL chromaEnabled;
	int ransacMinSampleSet;
	float ransacErrorThreshold;
	BOOL darkBehindHead;
} FLEOptions;

typedef struct SurfaceDetectionContext* SurfaceDetectionContextRef;

typedef struct {
	double m11;
	double m12;
	double m13;
	double m21;
	double m22;
	double m23;
	double m31;
	double m32;
	double m33;
} SCD_Struct_AR60;

typedef struct _compressed_pair<short *, std::__1::allocator<short> > {
	short __value_;
} compressed_pair<short *, std::__1::allocator<short> >;

typedef struct vector<short, std::__1::allocator<short> > {
	short __begin_;
	short __end_;
	compressed_pair<short *, std::__1::allocator<short> > __end_cap_;
} vector<short, std::__1::allocator<short> >;

typedef const struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >__compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >* ector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >Ref;

typedef struct {
	long long state;
	long long reason;
	BOOL relocalized;
	BOOL poseGraphUpdated;
	int vioTrackingState;
} SCD_Struct_AR64;
