/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct HDSQLiteRow* HDSQLiteRowRef;

typedef struct _NSZone* NSZoneRef;

typedef struct sqlite3* sqlite3Ref;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::hash<sqlite3_stmt *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::hash<sqlite3_stmt *> >;

typedef struct _compressed_pair<float, std::__1::equal_to<sqlite3_stmt *> > {
	float __value_;
} compressed_pair<float, std::__1::equal_to<sqlite3_stmt *> >;

typedef struct _hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> {
	__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *>, std::__1::allocator<std::__1::__hash_node<sqlite3_stmt *, void *> > > {
	hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *>, std::__1::allocator<std::__1::__hash_node<sqlite3_stmt *, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> *> > >;

typedef struct _hash_table<sqlite3_stmt *, std::__1::hash<sqlite3_stmt *>, std::__1::equal_to<sqlite3_stmt *>, std::__1::allocator<sqlite3_stmt *> > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *> *>, std::__1::allocator<std::__1::__hash_node<sqlite3_stmt *, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::hash<sqlite3_stmt *> > __p2_;
	compressed_pair<float, std::__1::equal_to<sqlite3_stmt *> > __p3_;
} hash_table<sqlite3_stmt *, std::__1::hash<sqlite3_stmt *>, std::__1::equal_to<sqlite3_stmt *>, std::__1::allocator<sqlite3_stmt *> >;

typedef struct unordered_set<sqlite3_stmt *, std::__1::hash<sqlite3_stmt *>, std::__1::equal_to<sqlite3_stmt *>, std::__1::allocator<sqlite3_stmt *> > {
	hash_table<sqlite3_stmt *, std::__1::hash<sqlite3_stmt *>, std::__1::equal_to<sqlite3_stmt *>, std::__1::allocator<sqlite3_stmt *> > __table_;
} unordered_set<sqlite3_stmt *, std::__1::hash<sqlite3_stmt *>, std::__1::equal_to<sqlite3_stmt *>, std::__1::allocator<sqlite3_stmt *> >;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct {
	long long majorVersion;
	long long minorVersion;
	long long patchVersion;
} SCD_Struct_HD15;

typedef struct {
	unsigned code : 1;
} SCD_Struct_HD16;

typedef struct {
	unsigned altitude : 1;
	unsigned course : 1;
	unsigned horizontalAccuracy : 1;
	unsigned latitude : 1;
	unsigned longitude : 1;
	unsigned speed : 1;
	unsigned timestamp : 1;
	unsigned verticalAccuracy : 1;
} SCD_Struct_HD17;

typedef struct {
	unsigned confidence : 1;
	unsigned latitude : 1;
	unsigned longitude : 1;
	unsigned uncertainty : 1;
	unsigned locationOfInterestType : 1;
} SCD_Struct_HD18;

typedef struct {
	unsigned confidence : 1;
	unsigned nextEntryTime : 1;
	unsigned modeOfTransportation : 1;
	unsigned sourceType : 1;
} SCD_Struct_HD19;

typedef struct {
	unsigned sequenceNumber : 1;
	unsigned statusCode : 1;
} SCD_Struct_HD20;

typedef struct _compressed_pair<long long *, std::__1::allocator<long long> > {
	long long __value_;
} compressed_pair<long long *, std::__1::allocator<long long> >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::hash<long long>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::hash<long long>, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::equal_to<long long>, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::equal_to<long long>, true> >;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, HDCumulativeStatistics>, std::__1::less<long long>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, HDCumulativeStatistics>, std::__1::less<long long>, true> >;

typedef struct HDCumulativeStatistics {
	double _sum;
	long long _count;
	double _startTime;
	double _endTime;
} HDCumulativeStatistics;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, HDCumulativeStatistics>, std::__1::less<std::__1::basic_string<char> >, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, HDCumulativeStatistics>, std::__1::less<std::__1::basic_string<char> >, true> >;

typedef struct _compressed_pair<HDCumulativeSample *, std::__1::allocator<HDCumulativeSample> > {
	HDCumulativeSample __value_;
} compressed_pair<HDCumulativeSample *, std::__1::allocator<HDCumulativeSample> >;

typedef struct vector<HDCumulativeSample, std::__1::allocator<HDCumulativeSample> > {
	HDCumulativeSample __begin_;
	HDCumulativeSample __end_;
	compressed_pair<HDCumulativeSample *, std::__1::allocator<HDCumulativeSample> > __end_cap_;
} vector<HDCumulativeSample, std::__1::allocator<HDCumulativeSample> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, HDCumulativeStatistics>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, HDCumulativeStatistics>, void *> > >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, HDCumulativeStatistics>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, HDCumulativeStatistics>, void *> > >;

typedef struct _tree<std::__1::__value_type<std::__1::basic_string<char>, HDCumulativeStatistics>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, HDCumulativeStatistics>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, HDCumulativeStatistics> > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, HDCumulativeStatistics>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, HDCumulativeStatistics>, std::__1::less<std::__1::basic_string<char> >, true> > __pair3_;
} tree<std::__1::__value_type<std::__1::basic_string<char>, HDCumulativeStatistics>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, HDCumulativeStatistics>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, HDCumulativeStatistics> > >;

typedef struct map<std::__1::basic_string<char>, HDCumulativeStatistics, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, HDCumulativeStatistics> > > {
	tree<std::__1::__value_type<std::__1::basic_string<char>, HDCumulativeStatistics>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, HDCumulativeStatistics>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, HDCumulativeStatistics> > > __tree_;
} map<std::__1::basic_string<char>, HDCumulativeStatistics, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, HDCumulativeStatistics> > >;

typedef struct _tree<std::__1::__value_type<long long, HDCumulativeStatistics>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, HDCumulativeStatistics>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, HDCumulativeStatistics> > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, HDCumulativeStatistics>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, HDCumulativeStatistics>, std::__1::less<long long>, true> > __pair3_;
} tree<std::__1::__value_type<long long, HDCumulativeStatistics>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, HDCumulativeStatistics>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, HDCumulativeStatistics> > >;

typedef struct map<long long, HDCumulativeStatistics, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, HDCumulativeStatistics> > > {
	tree<std::__1::__value_type<long long, HDCumulativeStatistics>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, HDCumulativeStatistics>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, HDCumulativeStatistics> > > __tree_;
} map<long long, HDCumulativeStatistics, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, HDCumulativeStatistics> > >;

typedef struct HDCumulativeStatisticsInterval {
	double _startTime;
	double _endTime;
	long long _sampleCount;
	map<long long, HDCumulativeStatistics, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, HDCumulativeStatistics> > > _statisticsBySourceID;
} HDCumulativeStatisticsInterval;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<long long, NSString *>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, NSString *> > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::hash<long long>, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::equal_to<long long>, true> > __p3_;
} hash_table<std::__1::__hash_value_type<long long, NSString *>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, NSString *> > >;

typedef struct unordered_map<long long, NSString *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, NSString *> > > {
	hash_table<std::__1::__hash_value_type<long long, NSString *>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, NSString *> > > __table_;
} unordered_map<long long, NSString *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, NSString *> > >;

typedef struct vector<long long, std::__1::allocator<long long> > {
	long long __begin_;
	long long __end_;
	compressed_pair<long long *, std::__1::allocator<long long> > __end_cap_;
} vector<long long, std::__1::allocator<long long> >;

typedef struct HDCumulativeStatisticsBucket {
	double _startTime;
	double _endTime;
	double _intervalDuration;
	vector<long long, std::__1::allocator<long long> > _orderedSourceIDs;
	unordered_map<long long, NSString *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, NSString *> > > _sourceIDToBundleIdentifier;
	HDCumulativeStatisticsInterval _currentInterval;
	long long _currentIntervalIndex;
	vector<HDCumulativeSample, std::__1::allocator<HDCumulativeSample> > _remainders;
	HDCumulativeStatistics _statistics;
	map<long long, HDCumulativeStatistics, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, HDCumulativeStatistics> > > _statisticsBySourceID;
	map<std::__1::basic_string<char>, HDCumulativeStatistics, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, HDCumulativeStatistics> > > _statisticsBySourceBundleIdentifier;
} HDCumulativeStatisticsBucket;

typedef struct HDCumulativeStatisticsEngine {
	long long _currentBucketIndex;
	HDCumulativeStatisticsBucket _currentBucket;
	vector<HDCumulativeSample, std::__1::allocator<HDCumulativeSample> > _remainders;
} HDCumulativeStatisticsEngine;

typedef struct {
	unsigned dateValue : 1;
	unsigned numberDoubleValue : 1;
	unsigned numberIntValue : 1;
} SCD_Struct_HD48;

typedef struct {
	double avg;
	double max;
	double min;
	unsigned long long count;
} SCD_Struct_HD49;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::less<long long>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::less<long long>, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, _HDDiscreteStats>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, _HDDiscreteStats>, void *> > >;

typedef struct _tree<std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, _HDDiscreteStats> > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, _HDDiscreteStats>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::less<long long>, true> > __pair3_;
} tree<std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, _HDDiscreteStats> > >;

typedef struct map<long long, _HDDiscreteStats, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDDiscreteStats> > > {
	tree<std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, _HDDiscreteStats> > > __tree_;
} map<long long, _HDDiscreteStats, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDDiscreteStats> > >;

typedef struct linear_congruential_engine<unsigned int, 48271, 0, 2147483647> {
	unsigned __x_;
} linear_congruential_engine<unsigned int, 48271, 0, 2147483647>;

typedef struct param_type {
	double __mean_;
	double __stddev_;
} param_type;

typedef struct normal_distribution<double> {
	param_type __p_;
	double _V_;
	BOOL _V_hot_;
} normal_distribution<double>;

typedef struct MGNotificationTokenStruct* MGNotificationTokenStructRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __CFUserNotification* CFUserNotificationRef;

typedef struct {
	unsigned endAnchor : 1;
	unsigned sequence : 1;
	unsigned startAnchor : 1;
	unsigned objectType : 1;
	unsigned complete : 1;
	unsigned speculative : 1;
} SCD_Struct_HD60;

typedef struct shared_ptr<health::DataStore> {
	DataStore __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<health::DataStore>;

typedef struct {
	unsigned databaseSizeMB : 1;
	unsigned highFrequencyDataSizeMB : 1;
	unsigned lastMonthDatabaseSizeIncreaseMB : 1;
	unsigned lastMonthRowsAdded : 1;
	unsigned manuallyEnteredTypesCount : 1;
	unsigned percentageDeletedObjects : 1;
	unsigned rowCountObjects : 1;
	unsigned thirdPartyAppsCount : 1;
	unsigned thirdPartyAppsWroteDataCount : 1;
	unsigned timestamp : 1;
	unsigned rowCountCDA : 1;
	unsigned hasWatchSource : 1;
} SCD_Struct_HD62;

typedef struct {
	unsigned numberOfFriends : 1;
	unsigned numberOfFriendsAwaitingResponse : 1;
	unsigned numberOfFriendsHiddenFromMe : 1;
	unsigned numberOfFriendsMuted : 1;
	unsigned numberOfFriendsMyDataHidden : 1;
	unsigned numberOfFriendsPendingMyResponse : 1;
	unsigned timestamp : 1;
	unsigned maxFriendDuration : 1;
	unsigned medianFriendDuration : 1;
	unsigned minFriendDuration : 1;
} SCD_Struct_HD63;

typedef struct {
	unsigned daysSinceFirstCalorieGoal : 1;
	unsigned eventBusyTime : 1;
	unsigned numberOfEvents : 1;
	unsigned progressUpdateFrequency : 1;
	unsigned timeZoneOffset : 1;
	unsigned timestamp : 1;
	unsigned enableAchievements : 1;
	unsigned enableGoalCompletions : 1;
	unsigned enableStandReminders : 1;
	unsigned enableWeeklySummary : 1;
	unsigned wellnessComplicationOnWatchFace : 1;
} SCD_Struct_HD64;

typedef struct _compressed_pair<HDActivityCacheStatisticsBuilderWorkoutSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> > {
	HDActivityCacheStatisticsBuilderWorkoutSample __value_;
} compressed_pair<HDActivityCacheStatisticsBuilderWorkoutSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> >;

typedef struct vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> > {
	HDActivityCacheStatisticsBuilderWorkoutSample __begin_;
	HDActivityCacheStatisticsBuilderWorkoutSample __end_;
	compressed_pair<HDActivityCacheStatisticsBuilderWorkoutSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> > __end_cap_;
} vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> >;

typedef struct _compressed_pair<HDActivityCacheActiveSource *, std::__1::allocator<HDActivityCacheActiveSource> > {
	HDActivityCacheActiveSource __value_;
} compressed_pair<HDActivityCacheActiveSource *, std::__1::allocator<HDActivityCacheActiveSource> >;

typedef struct vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource> > {
	HDActivityCacheActiveSource __begin_;
	HDActivityCacheActiveSource __end_;
	compressed_pair<HDActivityCacheActiveSource *, std::__1::allocator<HDActivityCacheActiveSource> > __end_cap_;
} vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource> >;

typedef struct __SecCertificate* SecCertificateRef;

typedef struct {
	unsigned activeHours : 1;
	unsigned briskMinutes : 1;
	unsigned cacheIndex : 1;
	unsigned deepBreathingDuration : 1;
	unsigned energyBurned : 1;
	unsigned energyBurnedGoal : 1;
	unsigned energyBurnedGoalDate : 1;
	unsigned flightsClimbed : 1;
	unsigned pushCount : 1;
	unsigned sequence : 1;
	unsigned stepCount : 1;
	unsigned walkingAndRunningDistance : 1;
	unsigned wheelchairUse : 1;
} SCD_Struct_HD70;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	double field3;
} SCD_Struct_HD71;

typedef struct {
	long long field1;
	long long field2;
	double field3;
	double field4;
	double field5;
	double field6;
	double field7;
	long long field8;
	long long field9;
	long long field10;
	long long field11;
	double field12;
	double field13;
	SCD_Struct_HD71 field14;
	SCD_Struct_HD71 field15;
	SCD_Struct_HD71 field16;
	BOOL field17;
	BOOL field18;
	double field19;
} SCD_Struct_HD72;

typedef struct _compressed_pair<HDActivityCacheStatisticsBuilderSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderSample> > {
	HDActivityCacheStatisticsBuilderSample __value_;
} compressed_pair<HDActivityCacheStatisticsBuilderSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderSample> >;

typedef struct vector<HDActivityCacheStatisticsBuilderSample, std::__1::allocator<HDActivityCacheStatisticsBuilderSample> > {
	HDActivityCacheStatisticsBuilderSample __begin_;
	HDActivityCacheStatisticsBuilderSample __end_;
	compressed_pair<HDActivityCacheStatisticsBuilderSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderSample> > __end_cap_;
} vector<HDActivityCacheStatisticsBuilderSample, std::__1::allocator<HDActivityCacheStatisticsBuilderSample> >;

typedef struct {
	long long list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_HD75;

typedef struct {
	unsigned duration : 1;
	unsigned goal : 1;
	unsigned goalType : 1;
	unsigned totalBasalEnergyBurnedInCanonicalUnit : 1;
	unsigned totalDistanceInCanonicalUnit : 1;
	unsigned totalEnergyBurnedInCanonicalUnit : 1;
	unsigned totalFlightsClimbedInCanonicalUnit : 1;
	unsigned totalSwimmingStrokeCountInCanonicalUnit : 1;
	unsigned type : 1;
} SCD_Struct_HD76;

typedef struct _compressed_pair<HDActivityCacheStatisticsBuilderStandHourSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderStandHourSample> > {
	HDActivityCacheStatisticsBuilderStandHourSample __value_;
} compressed_pair<HDActivityCacheStatisticsBuilderStandHourSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderStandHourSample> >;

typedef struct vector<HDActivityCacheStatisticsBuilderStandHourSample, std::__1::allocator<HDActivityCacheStatisticsBuilderStandHourSample> > {
	HDActivityCacheStatisticsBuilderStandHourSample __begin_;
	HDActivityCacheStatisticsBuilderStandHourSample __end_;
	compressed_pair<HDActivityCacheStatisticsBuilderStandHourSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderStandHourSample> > __end_cap_;
} vector<HDActivityCacheStatisticsBuilderStandHourSample, std::__1::allocator<HDActivityCacheStatisticsBuilderStandHourSample> >;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<_HKDataTypeCode, std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > >, std::__1::less<_HKDataTypeCode>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<_HKDataTypeCode, std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > >, std::__1::less<_HKDataTypeCode>, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > >, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > >, void *> > >;

typedef struct _tree<std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > >, std::__1::__map_value_compare<_HKDataTypeCode, std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > >, std::__1::less<_HKDataTypeCode>, true>, std::__1::allocator<std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > > > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > >, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<_HKDataTypeCode, std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > >, std::__1::less<_HKDataTypeCode>, true> > __pair3_;
} tree<std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > >, std::__1::__map_value_compare<_HKDataTypeCode, std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > >, std::__1::less<_HKDataTypeCode>, true>, std::__1::allocator<std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > > > >;

typedef struct map<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > >, std::__1::less<_HKDataTypeCode>, std::__1::allocator<std::__1::pair<const _HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > > > > {
	tree<std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > >, std::__1::__map_value_compare<_HKDataTypeCode, std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > >, std::__1::less<_HKDataTypeCode>, true>, std::__1::allocator<std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > > > > __tree_;
} map<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > >, std::__1::less<_HKDataTypeCode>, std::__1::allocator<std::__1::pair<const _HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > > > >;

typedef struct {
	unsigned list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_HD83;

typedef struct {
	unsigned endDate : 1;
	unsigned startDate : 1;
	unsigned timestamp : 1;
	unsigned alertType : 1;
	unsigned testAction : 1;
	unsigned dndEnabled : 1;
	unsigned failedPosting : 1;
} SCD_Struct_HD84;

typedef struct _compressed_pair<HistogramBucket *, std::__1::allocator<HistogramBucket> > {
	HistogramBucket __value_;
} compressed_pair<HistogramBucket *, std::__1::allocator<HistogramBucket> >;

typedef struct vector<HistogramBucket, std::__1::allocator<HistogramBucket> > {
	HistogramBucket __begin_;
	HistogramBucket __end_;
	compressed_pair<HistogramBucket *, std::__1::allocator<HistogramBucket> > __end_cap_;
} vector<HistogramBucket, std::__1::allocator<HistogramBucket> >;

typedef struct HistogramState {
	vector<HistogramBucket, std::__1::allocator<HistogramBucket> > _dateBuckets;
	double _histogramBucketAnchor;
	double _histogramBucketSize;
	long long _currentStartDateBucket;
} HistogramState;

typedef struct {
	unsigned day : 1;
	unsigned era : 1;
	unsigned hour : 1;
	unsigned minute : 1;
	unsigned month : 1;
	unsigned nanosecond : 1;
	unsigned quarter : 1;
	unsigned second : 1;
	unsigned weekOfMonth : 1;
	unsigned weekOfYear : 1;
	unsigned weekday : 1;
	unsigned weekdayOrdinal : 1;
	unsigned year : 1;
	unsigned yearForWeekOfYear : 1;
} SCD_Struct_HD88;

typedef struct _compressed_pair<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample> > {
	HDActivityCacheHeartRateStatisticsBuilderHeartRateSample __value_;
} compressed_pair<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample> >;

typedef struct vector<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample> > {
	HDActivityCacheHeartRateStatisticsBuilderHeartRateSample __begin_;
	HDActivityCacheHeartRateStatisticsBuilderHeartRateSample __end_;
	compressed_pair<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample> > __end_cap_;
} vector<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample> >;

typedef struct {
	double field1;
	BOOL field2;
	BOOL field3;
	BOOL field4;
} SCD_Struct_HD91;

typedef struct HDSyncAnchorRange {
	long long start;
	long long end;
} HDSyncAnchorRange;
