//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComponentBase.h"

@interface ComponentSystemBase : ComponentBase
{
}

- (_Bool)isInternalInstall;
- (_Bool)isBetaBuild;
- (id)chipID;
- (_Bool)isSetupAssistantCompleted;
- (id)setupAssistantCompletionDate;
- (id)localTime;
- (id)rootCreationDate;
- (id)productClass;
- (id)setupCompletedDate;
- (id)marketingName;
- (id)ECID;
- (id)systemUptime;
- (id)deviceColor;
- (id)deviceName;
- (id)cpuArchitecture;
- (id)deviceType;
- (id)serialNumber;
- (id)UDID;
- (id)modelNumber;
- (id)buildVersion;
- (id)diagnosticsBuild;
- (id)systemVersion;
- (id)marketingVersion;
- (id)diagnosticsVersion;
- (id)deviceVersion;
- (id)lastEraseDate;
- (id)lastUpdateDate;
- (id)lastRestoreDate;
- (void)populateAttributes:(struct NSMutableDictionary *)arg1;
- (_Bool)isPresent;

@end

