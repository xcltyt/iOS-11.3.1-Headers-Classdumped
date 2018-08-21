/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSCore/MPSState.h>

@interface MPSCNNLossLabels : MPSState {

	SCD_Struct_MP0 _lossImageSize;
	BOOL _isScalarLoss;
	unsigned long long _numNonZeroWeights;

}
-(id)initWithDevice:(id)arg1 lossImageSize:(SCD_Struct_MP0)arg2 labelsDescriptor:(id)arg3 weightsDescriptor:(id)arg4 ;
-(id)initWithDevice:(id)arg1 labelsDescriptor:(id)arg2 ;
-(id)lossImage;
-(id)init;
-(void)dealloc;
@end
