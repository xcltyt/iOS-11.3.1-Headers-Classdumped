//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComponentBase.h"

@interface ComponentBaseband : ComponentBase
{
}

- (id)serialNumber;
- (id)eriVersion;
- (id)prlVersion;
- (id)basebandFirmwareVersion;
- (id)simTrayStatus;
- (id)simStatus;
- (id)eUICCFwUpdateOperationMode;
- (id)eUICCFwUpdateLoaderVersion;
- (id)eUICCFwUpdateGoldFwMac;
- (id)eUICCFwUpdateCurrentVersion;
- (id)eUICCChipID;
- (id)eUICC;
- (id)ICCID;
- (id)MEID;
- (id)IMEI;
- (id)cellularCallStatistics;
- (void)populateAttributes:(struct NSMutableDictionary *)arg1;
- (_Bool)isPresent;

@end

