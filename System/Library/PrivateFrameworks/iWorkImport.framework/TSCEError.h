/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface TSCEError : NSObject <NSCopying> {

	NSDictionary* mErrorDictionary;

}
+(void)raiseInvalidArgumentPairingsErrorForFunctionName:(id)arg1 hasInitialUnrelatedArgument:(BOOL)arg2 ;
+(void)raiseErrorForInvalidReference;
+(void)raiseRangeSizeMismatchErrorForFunctionName:(id)arg1 ;
+(id)circularReferenceError;
+(void)raiseEmptyArrayError;
+(void)raiseArgumentSetUsedOutOfContextError;
+(void)raiseNumberError;
+(void)raiseCategoryCellReferenceError;
+(void)raiseInvalidDateManipulationError;
+(void)raiseNumberMinusDateError;
+(void)raiseComparisonTypeExceptionForLeftType:(int)arg1 rightType:(int)arg2 ;
+(void)raiseTypeExceptionForValue:(TSCEValue)arg1 functionSpec:(id)arg2 argumentIndex:(int)arg3 locale:(id)arg4 ;
+(void)raiseInvalidCurrencyComparisonError;
+(void)raiseInvalidComparisonError;
+(void)raiseMismatchedCurrenciesErrorForFunctionName:(id)arg1 ;
+(void)raiseDivideByZeroError;
+(void)raiseZeroToPowerOfZeroError;
+(void)raiseDurationNotAllowedError:(id)arg1 argumentNumber:(int)arg2 ;
+(void)raiseValueErrorForFunctionName:(id)arg1 ;
+(id)errorWithDictionary:(id)arg1 ;
+(void)raiseAbortError;
+(void)p_RaiseErrorForDictionary:(id)arg1 ;
+(BOOL)p_DictionaryRepresentsInvalidMergeReference:(id)arg1 ;
+(void)raiseErrorForError:(id)arg1 ;
+(void)raiseErrorForInvalidReference:(TSCERangeRef)arg1 orString:(id)arg2 contextEntityUID:(const UUIDData<TSP::UUIDData>*)arg3 invalidMergeReference:(BOOL)arg4 disqualifiedFromEndCell:(BOOL)arg5 ;
+(void)raiseOutOfBoundsArgumentErrorForArgument:(int)arg1 functionName:(id)arg2 lowerBound:(double)arg3 lowerBoundInclusive:(BOOL)arg4 upperBound:(double)arg5 upperBoundInclusive:(BOOL)arg6 ;
+(id)indirectErrorForRangeReference:(TSCERangeRef)arg1 hostTableUID:(const UUIDData<TSP::UUIDData>*)arg2 calculationEngine:(id)arg3 ;
+(void)raiseMismatchedUnitsErrorForFunctionName:(id)arg1 argumentNumberString:(id)arg2 ;
+(id)invalidLiveStockAttributeError;
+(id)invalidHistoricalStockAttributeError;
+(id)invalidLiveCurrencyAttributeError;
+(id)invalidHistoricalCurrencyAttributeError;
+(id)invalidHistoricalDateError;
+(id)remoteDataUnavailableErrorWithAttribute:(id)arg1 ;
+(id)errorForToken:(id)arg1 ;
+(id)syntaxError;
+(BOOL)exceptionIsFromCalcEngine:(id)arg1 ;
+(BOOL)exceptionIsCircularReferenceError:(id)arg1 ;
+(BOOL)exceptionIsRangeUsageError:(id)arg1 ;
+(id)referenceToNonexistentTableError:(const UUIDData<TSP::UUIDData>*)arg1 ;
+(id)badReferenceError;
+(id)autoNumberAttachmentError;
+(id)attachmentError;
+(BOOL)exceptionIsInvalidMergeReference:(id)arg1 ;
+(void)raiseInvalidArrayContentsError;
+(id)abortError;
+(void)raiseNotReadyError;
+(void)raiseDisallowedStockModeError:(id)arg1 ;
+(void)raiseUnkownFunctionErrorForString:(id)arg1 ;
+(void)raiseNumberErrorForFunctionName:(id)arg1 ;
+(void)raiseAutoNumberAttachmentErrorInTextCell:(BOOL)arg1 ;
+(void)raiseAttachmentErrorInTextCell:(BOOL)arg1 ;
+(void)raiseValueNotAvailableErrorForFunctionName:(id)arg1 ;
+(void)raiseErrorForInvalidReference:(TSCERangeRef)arg1 orString:(id)arg2 contextEntityUID:(const UUIDData<TSP::UUIDData>*)arg3 ;
+(id)invalidMergeReference:(TSCERangeRef)arg1 contextEntityUID:(const UUIDData<TSP::UUIDData>*)arg2 ;
+(void)raiseOutOfBoundsArgumentErrorForArgument:(int)arg1 functionName:(id)arg2 lowerBound:(double)arg3 lowerBoundInclusive:(BOOL)arg4 ;
+(void)raiseOutOfBoundsArgumentErrorForArgument:(int)arg1 functionName:(id)arg2 upperBound:(double)arg3 upperBoundInclusive:(BOOL)arg4 ;
+(void)raiseMatchNotFoundErrorForValue:(id)arg1 functionName:(id)arg2 ;
+(void)raiseStartNumberExceedsStringLengthErrorForFunctionName:(id)arg1 ;
+(void)raiseDifferentNumberOfDataPointsErrorForFunctionName:(id)arg1 ;
+(void)raiseMixedTypeManipulationErrorForFunctionName:(id)arg1 ;
+(void)raiseInvalidArgumentsErrorForFunctionName:(id)arg1 argumentIndex:(int)arg2 ;
+(void)raiseIndirectErrorForRangeReference:(TSCERangeRef)arg1 hostTableUID:(const UUIDData<TSP::UUIDData>*)arg2 calculationEngine:(id)arg3 ;
+(void)raiseNoModeError;
+(void)raiseInvalidTokenInFormulaError;
+(void)raiseEmptyArgumentError;
+(void)raiseEmptyArgumentSpecificErrorForArgumentNumber:(int)arg1 ;
+(void)raiseInvalidRangeUsageErrorForReference:(TSCERangeRef)arg1 ;
+(void)raiseInvalidHyperlinkError;
+(void)raiseDifferentNumberOfElementsErrorForFunctionName:(id)arg1 ;
+(void)raiseUnionInsideIntersectionError;
+(void)raiseCircularReferenceErrorWithReference:(id)arg1 ;
+(void)raiseNotAReferenceErrorForFunctionName:(id)arg1 ;
+(void)raiseNoSuitableArgumentsFoundErrorForFunctionName:(id)arg1 requiredType:(int)arg2 ;
+(void)raiseInvalidArgumentRelationshipErrorForFunctionName:(id)arg1 argIndex1:(int)arg2 argIndex2:(int)arg3 argsAscending:(BOOL)arg4 equalityPermitted:(BOOL)arg5 ;
+(void)raiseInvalidArgumentEqualityRelationshipErrorForFunctionName:(id)arg1 argIndex1:(int)arg2 argIndex2:(int)arg3 ;
+(void)raiseInvalidIndexForChooseError:(int)arg1 ;
+(void)raiseNonEmptyStringRequiredErrorForFunctionName:(id)arg1 ;
+(void)raiseStringDoesNotRepresentNumberErrorForFunctionName:(id)arg1 string:(id)arg2 ;
+(void)raiseStringDoesNotRepresentDateErrorForFunctionName:(id)arg1 string:(id)arg2 ;
+(void)raiseSignsMustMatchErrorForFunctionName:(id)arg1 ;
+(void)raiseRangeDoesNotSumToOneForFunctionName:(id)arg1 argumentNumber:(int)arg2 ;
+(void)raiseUnsupportedR1C1StyleError;
+(void)raiseInvalidDateError;
+(void)raiseInvalidTimeError;
+(void)raiseNotAVectorError;
+(void)raiseInvalidProbabilityErrorForFunctionName:(id)arg1 ;
+(void)raiseNumberSmallerThanZeroError;
+(void)raiseArgumentEqualsToZeroErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 ;
+(void)raisePositionLargerThanArrayErrorForFunctionName:(id)arg1 ;
+(void)raiseInvalidFrequencyErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 ;
+(void)raiseInvalidTypeErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 ;
+(void)raiseInvalidTailErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 ;
+(void)raiseInvalidSubtotalFunctionNumberError;
+(void)raiseNumberDoesNotConvergeErrorForFunctionName:(id)arg1 ;
+(void)raiseNumberDoesNotConvergeWithEstimateErrorForFunctionName:(id)arg1 ;
+(void)raiseTooFewDataPointsErrorForFunctionName:(id)arg1 ;
+(void)raiseDateEarlierThanStartingDateErrorForFunctionName:(id)arg1 ;
+(void)raiseOnlyPositiveOrNegativeErrorForFunctionName:(id)arg1 ;
+(void)raiseReferenceToEmptyCellErrorForFunctionName:(id)arg1 rangeReference:(TSCERangeRef)arg2 ;
+(void)raiseWrongNumberOfArgumentsErrorForFunctionName:(id)arg1 provided:(int)arg2 ;
+(void)raiseMismatchedUnitsErrorForFunctionName:(id)arg1 ;
+(void)raiseUnitsNotAllowedErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 ;
+(void)raiseCurrencyNotAllowedErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 ;
+(id)durationNotAllowedError:(id)arg1 argumentNumber:(int)arg2 ;
+(void)raiseSumMixedDurationsAndUnitlessWithoutADateErrorForFunctionName:(id)arg1 ;
+(void)raiseNotEnoughInputsErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 required:(int)arg3 ;
+(void)raiseInvalidIntersectionError:(vector<TSCEReferenceValue, std::__1::allocator<TSCEReferenceValue> >*)arg1 hostTableUID:(const UUIDData<TSP::UUIDData>*)arg2 calcEngine:(id)arg3 ;
+(void)raiseInvalidBaseCharacterErrorForCharacter:(unsigned short)arg1 base:(short)arg2 ;
+(void)raiseInvalidUnitStringError:(id)arg1 ;
+(void)raiseDifferentDimensionsErrorForFunctionName:(id)arg1 ;
+(void)raiseNonMetricUnitPrefixErrorForUnitString:(id)arg1 ;
+(void)raiseConvertOriginUnitMismatchError;
+(void)raiseArrayElementNoDataError;
+(void)raiseDataInvalidDimensionsError;
+(void)raiseDataInvalidLengthError;
+(void)raiseDataInvalidWidthError;
+(void)raiseNegativeReceivedAmountError;
+(void)raiseInvalidMatchModeError;
+(void)raiseMismatchedMaxUnitsError;
+(void)raiseVectorValueNotNumberErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 ;
+(void)raiseCharInputOutOfBoundsError;
+(void)raiseDurationDisallowedForNormdistPDFError;
+(void)raiseLinestHighlyCorrelatedVariableError;
+(void)raiseMultipleDurationsErrorForFunctionName:(id)arg1 ;
+(void)raiseLinestMatrixUnderdeterminedError;
+(void)raiseNegativeVectorValueErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 ;
+(void)raisePercentRankInputOutOfRangeError;
+(void)raisePercentRankExcInputOutOfRangeError;
+(void)raiseLocationServicesNotEnabledError;
+(void)raiseLocationHeadingUnknownError;
+(void)raiseLocationUnknownError;
+(void)raiseLocationUserDeniedError;
+(void)raiseLocationNetworkError;
+(void)raiseLocationHeadingFailureError;
+(void)raiseInvalidLatitudeLongitudeError;
+(void)raiseInvalidAltitudeError;
+(void)raiseInvalidHeadingError;
+(void)raiseStringTooLongError;
+(void)raiseUnsupportedFunctionError;
+(void)raiseInvalidLiveStockAttributeError;
+(void)raiseInvalidHistoricalStockAttributeError;
+(void)raiseInvalidLiveCurrencyAttributeError;
+(void)raiseInvalidHistoricalCurrencyAttributeError;
+(void)raiseInvalidHistoricalDateError;
+(void)raiseRemoteDataUnavailableErrorWithAttribute:(id)arg1 ;
+(id)noTradingInformationErrorWithNextAvailableDate:(id)arg1 ;
+(id)invalidStockCodeError:(id)arg1 ;
+(id)invalidCurrencyPairError;
+(id)remoteDataServerError;
+(id)notReadyError;
-(TSCERangeRef)rangeRef;
-(id)displayStringWithCalculationEngine:(id)arg1 forTable:(const UUIDData<TSP::UUIDData>*)arg2 andCellID:(TSUCellCoord)arg3 ;
-(void)raiseException;
-(void)setErrorDictionary:(id)arg1 ;
-(id)errorDictionary;
-(int)nativeType;
-(BOOL)isOfType:(id)arg1 ;
-(BOOL)isSyntaxError;
-(BOOL)isFromCalcEngine;
-(BOOL)isCircularReferenceError;
-(BOOL)errorIsRangeUsageError;
-(BOOL)isInvalidMergeReference;
-(BOOL)isAbortedError;
-(BOOL)isNotReadyError;
-(BOOL)isUnsupportedFunctionError;
-(BOOL)isErrorReferenceError;
-(void)performSelector:(SEL)arg1 withObject:(id)arg2 andDescend:(BOOL)arg3 ;
-(BOOL)isInvalidReference;
-(int)deepType;
-(TSCENumberValue*)numberForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(TSCEWarningReportingContext*)arg3 ;
-(id)dateForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(TSCEWarningReportingContext*)arg3 ;
-(id)stringForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(TSCEWarningReportingContext*)arg3 ;
-(BOOL)booleanForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(TSCEWarningReportingContext*)arg3 ;
-(TSCEVector*)formattedVectorForFunction:(id)arg1 argumentIndex:(int)arg2 context:(TSCEEvaluationContextRef)arg3 format:(const TSCEFormat*)arg4 ;
-(TSCEReferenceValue*)referenceValueForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(TSCEWarningReportingContext*)arg3 ;
-(BOOL)boolean;
-(BOOL)isNativelyEqual:(TSCEValue)arg1 ;
-(id)bakedString;
-(double)doubleValue;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)string;
-(id)stringValue;
-(id)error;
-(TSCEReferenceValue*)referenceValue;
-(id)dateValue;
-(TSCEVector*)vector;
-(TSCENumberValue*)number;
-(id)tokenString;
@end
