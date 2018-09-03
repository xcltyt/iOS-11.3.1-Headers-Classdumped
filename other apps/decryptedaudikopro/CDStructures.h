//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSOutputStream, NSString, TAGPBArray, TAGPBGeneratedMessage;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AURange {
    long long _field1;
    long long _field2;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CLSMachOSlice {
    void *_field1;
    int _field2;
    int _field3;
};

struct FBAdSize {
    struct CGSize size;
};

struct FBAdStarRating {
    double value;
    long long scale;
};

struct FBAspectRatioInfo {
    struct CGSize _field1;
    struct CGSize _field2;
    struct CGSize _field3;
    struct CGSize _field4;
};

struct FBDeviceBatteryInfo {
    long long _field1;
    double _field2;
};

struct GAIReachabilityApi {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
};

struct TAGPBExtensionDescription {
    char *_field1;
    int _field2;
    char *_field3;
    int _field4;
    CDUnion_3de46016 _field5;
    char *_field6;
    unsigned int _field7;
    char *_field8;
};

struct TAGPBInputBufferState {
    char *bytes;
    unsigned long long bufferSize;
    unsigned long long bufferPos;
    unsigned long long currentLimit;
};

struct TAGPBMessageEnumDescription {
    char *_field1;
};

struct TAGPBMessageEnumValueDescription {
    char *_field1;
    int _field2;
};

struct TAGPBMessageExtensionRangeDescription {
    unsigned int _field1;
    unsigned int _field2;
};

struct TAGPBMessageFieldDescription {
    char *_field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    int _field5;
    unsigned long long _field6;
    char *_field7;
    CDUnion_3de46016 _field8;
    union {
        char *_field1;
        CDUnknownFunctionPointerType _field2;
    } _field9;
};

struct TAGPBOutputBufferState {
    char *bytes;
    unsigned long long size;
    unsigned long long position;
    NSOutputStream *output;
};

struct UIEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct UIImage {
    Class _field1;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct re_guts;

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    unsigned short _field2;
} CDStruct_6a59ab51;

typedef struct {
    unsigned int major;
    unsigned int minor;
    unsigned int bugfix;
} CDStruct_e24ffa00;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
} CDStruct_4bcfbbae;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    char *_field1;
    char *_field2;
    unsigned int _field3;
    unsigned int _field4;
} CDStruct_4355734a;

typedef struct {
    char *_field1;
    void *_field2;
    _Bool _field3;
    void *_field4;
    char *_field5;
    char *_field6;
    char *_field7;
    char *_field8;
    char *_field9;
    unsigned int _field10;
    _Bool _field11;
    _Bool _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
} CDStruct_1e2a2a70;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct {
    char _field1[33];
    _Bool _field2;
    CDStruct_e24ffa00 _field3;
    CDStruct_e24ffa00 _field4;
    struct {
        void *_field1;
        unsigned long long _field2;
        void *_field3;
        void *_field4;
        void *_field5;
    } _field5;
    struct CLSMachOSlice _field6;
} CDStruct_86ed9822;

typedef struct {
    CDStruct_1b6d18a9 start;
    CDStruct_1b6d18a9 duration;
} CDStruct_e83c9415;

#pragma mark Typedef'd Unions

typedef union {
    _Bool valueBool;
    unsigned int valueFixed32;
    int valueSFixed32;
    float valueFloat;
    unsigned long long valueFixed64;
    long long valueSFixed64;
    double valueDouble;
    int valueInt32;
    long long valueInt64;
    int valueSInt32;
    long long valueSInt64;
    unsigned int valueUInt32;
    unsigned long long valueUInt64;
    NSData *valueData;
    NSString *valueString;
    TAGPBGeneratedMessage *valueMessage;
    TAGPBGeneratedMessage *valueGroup;
    int valueEnum;
    TAGPBArray *valueArray;
    id valueObject;
} CDUnion_3de46016;
