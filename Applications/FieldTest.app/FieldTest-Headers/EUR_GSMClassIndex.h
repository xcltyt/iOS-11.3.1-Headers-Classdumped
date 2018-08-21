//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ClassIndex.h"

@class ActiveSet, BLER, CellChangeCounters, CodingScheme, DetectedSet, EquivalentPLMNList, GPRSInformation, GSMRRInfo, GSMServingCell, GSMSet, HSDPAInformation, MobileAllocation, MonitoredSet, NeighboringCells, NonRankedGSMSet, NonRankedUMTSSet, PDPContextList, ProcessCO, ProcessCS, ProcessPS, ServingPLMN, SimInfo, UMTSRRInfo, UMTSRRMeasurement, UMTSSet, VirtualActiveSet;

@interface EUR_GSMClassIndex : ClassIndex
{
    ActiveSet *objActiveSet;
    CodingScheme *objCodingScheme;
    GPRSInformation *objGPRSInformation;
    GSMServingCell *objGSMServingCell;
    MobileAllocation *objMobileAllocation;
    NeighboringCells *objNeighboringCells;
    PDPContextList *objPDPContextList;
    ProcessPS *objProcessPS;
    UMTSRRMeasurement *objUMTSRRMeasurement;
    CellChangeCounters *objCellChangeCounter;
    DetectedSet *objDetectedSet;
    GSMSet *objGSMSet;
    NonRankedGSMSet *objNonRankedGSMSet;
    ProcessCO *objProcessCO;
    ServingPLMN *objServingPLMN;
    UMTSSet *objUMTSSet;
    EquivalentPLMNList *objEquivalentPLMNList;
    GSMRRInfo *objGSMRRInfo;
    MonitoredSet *objMonitoredSet;
    NonRankedUMTSSet *objNonRankedUMTSSet;
    ProcessCS *objProcessCS;
    UMTSRRInfo *objUMTSRRInfo;
    BLER *objBLER;
    VirtualActiveSet *objVirtualActiveSet;
    SimInfo *objSimInfo;
    HSDPAInformation *objHSDPAInformation;
}

- (void)dealloc;
- (id)init;

@end

