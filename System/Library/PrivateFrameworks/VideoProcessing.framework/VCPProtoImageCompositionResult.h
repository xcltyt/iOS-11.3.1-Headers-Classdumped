/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VCPProtoLine, VCPProtoPoint;

@interface VCPProtoImageCompositionResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	float _confidence;
	VCPProtoLine* _dominantLine;
	VCPProtoPoint* _vanishingPoint;

}

@property (assign,nonatomic) float confidence;                            //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,retain) VCPProtoPoint * vanishingPoint;              //@synthesize vanishingPoint=_vanishingPoint - In the implementation block
@property (nonatomic,retain) VCPProtoLine * dominantLine;                 //@synthesize dominantLine=_dominantLine - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(float)confidence;
-(void)setConfidence:(float)arg1 ;
-(void)setVanishingPoint:(VCPProtoPoint *)arg1 ;
-(VCPProtoPoint *)vanishingPoint;
-(id)exportToLegacyDictionary;
-(void)setDominantLine:(VCPProtoLine *)arg1 ;
-(VCPProtoLine *)dominantLine;
@end
