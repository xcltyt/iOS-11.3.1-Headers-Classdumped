//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface BFFSetupAssistantOnBoarding : PBCodable <NSCopying>
{
    unsigned long long _durationPlaceholder;
    unsigned long long _durationVideo;
    unsigned long long _timestamp;
    unsigned int _feature;
    struct {
        unsigned int durationPlaceholder:1;
        unsigned int durationVideo:1;
        unsigned int timestamp:1;
        unsigned int feature:1;
    } _has;
}

@property(nonatomic) unsigned long long durationVideo; // @synthesize durationVideo=_durationVideo;
@property(nonatomic) unsigned long long durationPlaceholder; // @synthesize durationPlaceholder=_durationPlaceholder;
@property(nonatomic) unsigned int feature; // @synthesize feature=_feature;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDurationVideo;
@property(nonatomic) _Bool hasDurationPlaceholder;
@property(nonatomic) _Bool hasFeature;
@property(nonatomic) _Bool hasTimestamp;

@end

