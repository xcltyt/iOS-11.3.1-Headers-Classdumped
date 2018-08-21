#import <AVFoundation/AVPlayerLayerIntermediateLayer.h>
#import <AVFoundation/AVPlayerLayerInternal.h>
#import <AVFoundation/AVPlayerLayer.h>
#import <AVFoundation/AVCaptureSessionConfiguration.h>
#import <AVFoundation/AVPlayerLooperInternal.h>
#import <AVFoundation/AVPlayerLooper.h>
#import <AVFoundation/AVCaptureSynchronizedDataCollectionInternal.h>
#import <AVFoundation/AVCaptureSynchronizedDataCollection.h>
#import <AVFoundation/CMTimeAsValue.h>
#import <AVFoundation/CMTimeRangeAsValue.h>
#import <AVFoundation/CMTimeMappingAsValue.h>
#import <AVFoundation/AVMetadataItemInternal.h>
#import <AVFoundation/AVMetadataItem.h>
#import <AVFoundation/AVMutableMetadataItem.h>
#import <AVFoundation/AVLazyValueLoadingMetadataItemInternal.h>
#import <AVFoundation/AVLazyValueLoadingMetadataItem.h>
#import <AVFoundation/AVMetadataItemValueRequestInternal.h>
#import <AVFoundation/AVMetadataItemValueRequest.h>
#import <AVFoundation/AVChapterMetadataItemInternal.h>
#import <AVFoundation/AVChapterMetadataItem.h>
#import <AVFoundation/AVMetadataItemFilterForSharing.h>
#import <AVFoundation/AVMetadataItemFilterInternal.h>
#import <AVFoundation/AVMetadataItemFilter.h>
#import <AVFoundation/AVAssetInternal.h>
#import <AVFoundation/AVAsset.h>
#import <AVFoundation/AVURLAssetInternal.h>
#import <AVFoundation/AVURLAsset.h>
#import <AVFoundation/AVAssetClientURLRequestHelper.h>
#import <AVFoundation/AVDataAsset.h>
#import <AVFoundation/AVAssetTrackEnumerator.h>
#import <AVFoundation/AVAssetImageGeneratorInternal.h>
#import <AVFoundation/AVAssetImageGenerator.h>
#import <AVFoundation/AVAssetReaderOutputMetadataAdaptorInternal.h>
#import <AVFoundation/AVAssetReaderOutputMetadataAdaptor.h>
#import <AVFoundation/AVAssetTrackInternal.h>
#import <AVFoundation/AVAssetTrack.h>
#import <AVFoundation/AVPlayerInternal.h>
#import <AVFoundation/AVPlayer.h>
#import <AVFoundation/AVPlayerQueueModificationDescription.h>
#import <AVFoundation/AVPlayerItemInternal.h>
#import <AVFoundation/AVPlayerItem.h>
#import <AVFoundation/AVPlayerConnection.h>
#import <AVFoundation/AVPlayerItemTrackInternal.h>
#import <AVFoundation/AVPlayerItemTrack.h>
#import <AVFoundation/AVAssetDownloadStorageManager.h>
#import <AVFoundation/AVAssetDownloadStorageManagementPolicy.h>
#import <AVFoundation/AVMutableAssetDownloadStorageManagementPolicy.h>
#import <AVFoundation/AVAssetDownloadStorageManagementPolicyInternal.h>
#import <AVFoundation/AVQueuePlayer.h>
#import <AVFoundation/AVQueuePlayerInternal.h>
#import <AVFoundation/AVOutputDeviceDiscoverySessionInternal.h>
#import <AVFoundation/AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal.h>
#import <AVFoundation/AVOutputDeviceDiscoverySession.h>
#import <AVFoundation/AVEmptyOutputDeviceDiscoverySessionAvailableOutputDevices.h>
#import <AVFoundation/AVOutputDeviceDiscoverySessionAvailableOutputDevices.h>
#import <AVFoundation/AVCompositionInternal.h>
#import <AVFoundation/AVComposition.h>
#import <AVFoundation/AVMutableCompositionInternal.h>
#import <AVFoundation/AVMutableComposition.h>
#import <AVFoundation/AVCompositionFormatReaderInspector.h>
#import <AVFoundation/AVCompositionTrackInternal.h>
#import <AVFoundation/AVCompositionTrack.h>
#import <AVFoundation/AVMutableCompositionTrackInternal.h>
#import <AVFoundation/AVMutableCompositionTrack.h>
#import <AVFoundation/AVCompositionTrackSegmentInternal.h>
#import <AVFoundation/AVCompositionTrackSegment.h>
#import <AVFoundation/AVAssetReaderInternal.h>
#import <AVFoundation/AVAssetReader.h>
#import <AVFoundation/AVAssetReaderOutputInternal.h>
#import <AVFoundation/AVAssetReaderOutput.h>
#import <AVFoundation/AVAssetReaderTrackOutputInternal.h>
#import <AVFoundation/AVAssetReaderTrackOutput.h>
#import <AVFoundation/AVAssetReaderAudioMixOutputInternal.h>
#import <AVFoundation/AVAssetReaderAudioMixOutput.h>
#import <AVFoundation/AVAssetReaderVideoCompositionOutputInternal.h>
#import <AVFoundation/AVAssetReaderVideoCompositionOutput.h>
#import <AVFoundation/AVAssetReaderSampleReferenceOutputInternal.h>
#import <AVFoundation/AVAssetReaderSampleReferenceOutput.h>
#import <AVFoundation/AVAssetWriterConfigurationState.h>
#import <AVFoundation/AVAssetWriterInternal.h>
#import <AVFoundation/AVAssetWriter.h>
#import <AVFoundation/AVAssetWriterUnknownHelper.h>
#import <AVFoundation/AVAssetWriterFigAssetWriterNotificationHandler.h>
#import <AVFoundation/AVAssetWriterWritingHelper.h>
#import <AVFoundation/AVWorkaroundNSBlockOperation.h>
#import <AVFoundation/AVAssetWriterFinishWritingHelper.h>
#import <AVFoundation/AVFigAssetWriterFinishWritingAsyncOperation.h>
#import <AVFoundation/AVAssetWriterTerminalHelper.h>
#import <AVFoundation/AVAssetWriterFailedTerminalHelper.h>
#import <AVFoundation/AVAssetWriterClientInitiatedTerminalHelper.h>
#import <AVFoundation/AVAssetWriterHelper.h>
#import <AVFoundation/AVAssetWriterInputGroupInternal.h>
#import <AVFoundation/AVAssetWriterInputGroup.h>
#import <AVFoundation/AVAssetWriterInputSelectionOption.h>
#import <AVFoundation/AVTimebaseObserver.h>
#import <AVFoundation/AVPeriodicTimebaseObserver.h>
#import <AVFoundation/AVOccasionalTimebaseObserver.h>
#import <AVFoundation/AVOnceTimebaseObserver.h>
#import <AVFoundation/AVPlayerItemMetadataCollectorInternal.h>
#import <AVFoundation/AVPlayerItemMetadataCollector.h>
#import <AVFoundation/AVAssetWriterInputConfigurationState.h>
#import <AVFoundation/AVAssetWriterInputInternal.h>
#import <AVFoundation/AVAssetWriterInput.h>
#import <AVFoundation/AVAssetWriterInputUnknownHelper.h>
#import <AVFoundation/AVAssetWriterInputWritingHelper.h>
#import <AVFoundation/AVAssetWriterInputInterPassAnalysisHelper.h>
#import <AVFoundation/AVAssetWriterInputNoMorePassesHelper.h>
#import <AVFoundation/AVAssetWriterInputTerminalHelper.h>
#import <AVFoundation/AVAssetWriterInputHelper.h>
#import <AVFoundation/AVAssetWriterInputPixelBufferAdaptorInternal.h>
#import <AVFoundation/AVAssetWriterInputPixelBufferAdaptor.h>
#import <AVFoundation/AVFigAssetWriterTrack.h>
#import <AVFoundation/AVFigAssetWriterAudioTrack.h>
#import <AVFoundation/AVFigAssetWriterVideoTrack.h>
#import <AVFoundation/AVFigAssetWriterGenericTrack.h>
#import <AVFoundation/AVAssetWriterInputMediaDataRequester.h>
#import <AVFoundation/AVAssetWriterInputPassDescriptionResponder.h>
#import <AVFoundation/AVAssetWriterInputFigAssetWriterEndPassOperation.h>
#import <AVFoundation/AVAssetWriterInputPassDescriptionInternal.h>
#import <AVFoundation/AVAssetWriterInputPassDescription.h>
#import <AVFoundation/AVCaptureVideoThumbnailOutputInternal.h>
#import <AVFoundation/AVCaptureVideoThumbnailOutput.h>
#import <AVFoundation/AVCapturePhotoRequest.h>
#import <AVFoundation/AVVideoCompositionInstructionInternal.h>
#import <AVFoundation/AVVideoCompositionInstruction.h>
#import <AVFoundation/AVMutableVideoCompositionInstruction.h>
#import <AVFoundation/AVVideoCompositionLayerInstructionInternal.h>
#import <AVFoundation/AVVideoCompositionLayerInstruction.h>
#import <AVFoundation/AVMutableVideoCompositionLayerInstruction.h>
#import <AVFoundation/AVVideoCompositionInternal.h>
#import <AVFoundation/AVVideoComposition.h>
#import <AVFoundation/AVMutableVideoComposition.h>
#import <AVFoundation/AVVideoCompositionCoreAnimationTool.h>
#import <AVFoundation/AVVideoCompositionCoreAnimationToolInternal.h>
#import <AVFoundation/AVCapturePhotoSettingsInternal.h>
#import <AVFoundation/AVCapturePhotoSettings.h>
#import <AVFoundation/AVCapturePhotoBracketSettingsInternal.h>
#import <AVFoundation/AVCapturePhotoBracketSettings.h>
#import <AVFoundation/AVCaptureResolvedPhotoSettingsInternal.h>
#import <AVFoundation/AVCaptureResolvedPhotoSettings.h>
#import <AVFoundation/AVMetadataObjectInternal.h>
#import <AVFoundation/AVMetadataObject.h>
#import <AVFoundation/AVMetadataFaceObjectInternal.h>
#import <AVFoundation/AVMetadataFaceObject.h>
#import <AVFoundation/AVMetadataTrackedFacesObjectInternal.h>
#import <AVFoundation/AVMetadataTrackedFacesObject.h>
#import <AVFoundation/AVMetadataMachineReadableCodeObjectInternal.h>
#import <AVFoundation/AVMetadataMachineReadableCodeObject.h>
#import <AVFoundation/AVAssetProxyInternal.h>
#import <AVFoundation/AVAssetProxy.h>
#import <AVFoundation/AVAssetExportSessionInternal.h>
#import <AVFoundation/AVAssetExportSession.h>
#import <AVFoundation/AVAudioMixEffectParameters.h>
#import <AVFoundation/AVAudioMixSweepFilterEffectParameters.h>
#import <AVFoundation/AVAudioMixSweepFilterEffectParametersInternal.h>
#import <AVFoundation/AVSynchronizedLayerInternal.h>
#import <AVFoundation/AVSynchronizedLayer.h>
#import <AVFoundation/AVCaptureAudioDataOutputInternal.h>
#import <AVFoundation/AVCaptureAudioDataOutput.h>
#import <AVFoundation/AVCaptureAudioChannelInternal.h>
#import <AVFoundation/AVCaptureAudioChannel.h>
#import <AVFoundation/AVCaptureConnectionInternal.h>
#import <AVFoundation/AVCaptureConnection.h>
#import <AVFoundation/AVAssetWriterInputMetadataAdaptorInternal.h>
#import <AVFoundation/AVAssetWriterInputMetadataAdaptor.h>
#import <AVFoundation/AVSampleBufferAudioRendererInternal.h>
#import <AVFoundation/AVSampleBufferAudioRenderer.h>
#import <AVFoundation/AVExternalProtectionMonitorInternal.h>
#import <AVFoundation/AVExternalProtectionMonitor.h>
#import <AVFoundation/AVCaptureDeviceInternal.h>
#import <AVFoundation/AVCaptureDevice.h>
#import <AVFoundation/AVCaptureDeviceDiscoverySession.h>
#import <AVFoundation/AVCaptureDeviceInputInternal.h>
#import <AVFoundation/AVCaptureDeviceInput.h>
#import <AVFoundation/AVCaptureVideoSettingsValidator.h>
#import <AVFoundation/AVCaptureFigAudioDevice.h>
#import <AVFoundation/AVCaptureFigVideoDevice.h>
#import <AVFoundation/AVPlayerItemMetadataOutputInternal.h>
#import <AVFoundation/AVPlayerItemMetadataOutput.h>
#import <AVFoundation/AVOutputDeviceAuthorizationSessionInternal.h>
#import <AVFoundation/AVOutputDeviceAuthorizationSession.h>
#import <AVFoundation/AVOutputDeviceAuthorizationRequestInternal.h>
#import <AVFoundation/AVOutputDeviceAuthorizationRequest.h>
#import <AVFoundation/AVCaptureFileOutputDelegateWrapper.h>
#import <AVFoundation/AVCaptureFileOutputInternal.h>
#import <AVFoundation/AVCaptureFileOutput.h>
#import <AVFoundation/AVCaptureInputInternal.h>
#import <AVFoundation/AVCaptureInput.h>
#import <AVFoundation/AVCaptureBracketedStillImageSettings.h>
#import <AVFoundation/AVCaptureManualExposureBracketedStillImageSettings.h>
#import <AVFoundation/AVCaptureAutoExposureBracketedStillImageSettings.h>
#import <AVFoundation/AVTimeFormatterInternal.h>
#import <AVFoundation/AVTimeFormatter.h>
#import <AVFoundation/AVCaptureInputPortInternal.h>
#import <AVFoundation/AVCaptureInputPort.h>
#import <AVFoundation/AVCaptureMovieFileOutputInternal.h>
#import <AVFoundation/AVCaptureMovieFileOutput.h>
#import <AVFoundation/AVCaptureOutputInternal.h>
#import <AVFoundation/AVCaptureOutput.h>
#import <AVFoundation/AVCaptureSessionInternal.h>
#import <AVFoundation/AVCaptureSession.h>
#import <AVFoundation/AVCaptureStillImageRequest.h>
#import <AVFoundation/AVCapturePrepareBracketRequest.h>
#import <AVFoundation/AVCaptureStillImageOutputInternal.h>
#import <AVFoundation/AVCaptureStillImageOutput.h>
#import <AVFoundation/AVCaptureVideoDataOutputInternal.h>
#import <AVFoundation/AVCaptureVideoDataOutput.h>
#import <AVFoundation/AVExecutionEnvironment.h>
#import <AVFoundation/AVMediaDataRequester.h>
#import <AVFoundation/AVCaptureVideoPreviewLayerInternal.h>
#import <AVFoundation/AVCaptureVideoPreviewLayer.h>
#import <AVFoundation/AVOutputDeviceInternal.h>
#import <AVFoundation/AVOutputDevice.h>
#import <AVFoundation/AVOutputDeviceFrecencyManager.h>
#import <AVFoundation/AVOutputDeviceAuthorizedPeerInternal.h>
#import <AVFoundation/AVOutputDeviceAuthorizedPeer.h>
#import <AVFoundation/AVPairedDeviceInternal.h>
#import <AVFoundation/AVPairedDevice.h>
#import <AVFoundation/AVLocalOutputDeviceImpl.h>
#import <AVFoundation/AVCaptureDepthDataOutputInternal.h>
#import <AVFoundation/AVCaptureDepthDataOutput.h>
#import <AVFoundation/AVFigRouteDescriptorOutputDeviceImpl.h>
#import <AVFoundation/AVMetadataEnumerator.h>
#import <AVFoundation/AVAssetTrackSegment.h>
#import <AVFoundation/AVCaptureCoreMotionMetadataInputInternal.h>
#import <AVFoundation/AVCaptureCoreMotionMetadataInput.h>
#import <AVFoundation/AVPropertyStorage.h>
#import <AVFoundation/AVFigEndpointOutputDeviceImpl.h>
#import <AVFoundation/AVAssetCustomURLRequest.h>
#import <AVFoundation/AVAssetCustomURLBridgeForNSURLSession.h>
#import <AVFoundation/AVNSURLProtocolRequest.h>
#import <AVFoundation/AVAssetCustomURLBridgeForNSURLProtocol.h>
#import <AVFoundation/AVAudioMix.h>
#import <AVFoundation/AVMutableAudioMix.h>
#import <AVFoundation/AVAudioMixInternal.h>
#import <AVFoundation/AVAudioMixInputParameters.h>
#import <AVFoundation/AVAudioMixInputParametersInternal.h>
#import <AVFoundation/AVMutableAudioMixInputParameters.h>
#import <AVFoundation/AVApplePortraitMetadataInternal.h>
#import <AVFoundation/AVApplePortraitMetadata.h>
#import <AVFoundation/AVRunLoopConditionRunLoopState.h>
#import <AVFoundation/AVRunLoopCondition.h>
#import <AVFoundation/AVOutputContextInternal.h>
#import <AVFoundation/AVOutputContext.h>
#import <AVFoundation/AVOutputContextCommunicationChannelInternal.h>
#import <AVFoundation/AVOutputContextCommunicationChannel.h>
#import <AVFoundation/AVOutputContextDestinationChangeInternal.h>
#import <AVFoundation/AVOutputContextDestinationChange.h>
#import <AVFoundation/AVOutputContextManagerInternal.h>
#import <AVFoundation/AVOutputContextManager.h>
#import <AVFoundation/AVCameraCalibrationDataInternal.h>
#import <AVFoundation/AVCameraCalibrationData.h>
#import <AVFoundation/AVAssetInspector.h>
#import <AVFoundation/AVFormatReaderInspector.h>
#import <AVFoundation/AVPlaybackItemInspector.h>
#import <AVFoundation/AVStreamingResourceInspector.h>
#import <AVFoundation/AVFigAssetInspector.h>
#import <AVFoundation/AVScheduledAudioParametersInternal.h>
#import <AVFoundation/AVScheduledAudioParameters.h>
#import <AVFoundation/AVMutableScheduledAudioParameters.h>
#import <AVFoundation/AVWeakReferencingDelegateStorage.h>
#import <AVFoundation/AVOperation.h>
#import <AVFoundation/AVBlockOperation.h>
#import <AVFoundation/AVGlobalOperationQueue.h>
#import <AVFoundation/AVOperationQueueWithFundamentalDependency.h>
#import <AVFoundation/AVDepartureAnnouncingObjectMonitor.h>
#import <AVFoundation/AVWaitForNotificationOrDeallocationOperation.h>
#import <AVFoundation/AVAssetInspectorLoader.h>
#import <AVFoundation/AVAssetSynchronousInspectorLoader.h>
#import <AVFoundation/AVAssetMakeReadyForInspectionLoader.h>
#import <AVFoundation/AVPlaybackItemInspectorLoader.h>
#import <AVFoundation/AVFigAssetInspectorLoader.h>
#import <AVFoundation/AVUnreachableAssetInspectorLoader.h>
#import <AVFoundation/AVAssetTrackInspector.h>
#import <AVFoundation/AVTrackReaderInspector.h>
#import <AVFoundation/AVFigAssetTrackInspector.h>
#import <AVFoundation/AVCompositionTrackReaderInspector.h>
#import <AVFoundation/AVPlaybackItemTrackInspector.h>
#import <AVFoundation/AVCaptureMetadataInputInternal.h>
#import <AVFoundation/AVCaptureMetadataInput.h>
#import <AVFoundation/AVWeakReference.h>
#import <AVFoundation/AVRetainReleaseWeakReference.h>
#import <AVFoundation/AVFigRoutingContextSendConfigureDeviceCommandOperation.h>
#import <AVFoundation/AVRemoteFigRoutingContextFactory.h>
#import <AVFoundation/AVFigRoutingContextCommandOutputDeviceConfigurationModification.h>
#import <AVFoundation/AVFigRoutingContextCommandOutputDeviceConfiguration.h>
#import <AVFoundation/AVFigRoutingContextRouteChangeOperation.h>
#import <AVFoundation/AVRouteConfigUpdatedFigRoutingContextRouteChangeOperation.h>
#import <AVFoundation/AVCallbackContextRegistry.h>
#import <AVFoundation/AVCMNotificationDispatcher.h>
#import <AVFoundation/AVCMNotificationDispatcherListenerAndCallback.h>
#import <AVFoundation/AVCMNotificationDispatcherListenerKey.h>
#import <AVFoundation/AVPlayerItemMediaDataCollectorInternal.h>
#import <AVFoundation/AVPlayerItemMediaDataCollector.h>
#import <AVFoundation/AVAssetTrackGroupInternal.h>
#import <AVFoundation/AVAssetTrackGroup.h>
#import <AVFoundation/AVDispatchGroup.h>
#import <AVFoundation/AVEventWaiter.h>
#import <AVFoundation/AVMetadataGroup.h>
#import <AVFoundation/AVTimedMetadataGroupInternal.h>
#import <AVFoundation/AVTimedMetadataGroup.h>
#import <AVFoundation/AVMutableTimedMetadataGroup.h>
#import <AVFoundation/AVDateRangeMetadataGroupInternal.h>
#import <AVFoundation/AVDateRangeMetadataGroup.h>
#import <AVFoundation/AVMutableDateRangeMetadataGroup.h>
#import <AVFoundation/AVAssetCache.h>
#import <AVFoundation/AVManagedAssetCacheInternal.h>
#import <AVFoundation/AVManagedAssetCache.h>
#import <AVFoundation/AVAssetDownloadCacheInternal.h>
#import <AVFoundation/AVAssetDownloadCache.h>
#import <AVFoundation/AVPlayerItemAccessLogInternal.h>
#import <AVFoundation/AVPlayerItemAccessLog.h>
#import <AVFoundation/AVPlayerItemAccessLogEventInternal.h>
#import <AVFoundation/AVPlayerItemAccessLogEvent.h>
#import <AVFoundation/AVPlayerItemErrorLogInternal.h>
#import <AVFoundation/AVPlayerItemErrorLog.h>
#import <AVFoundation/AVPlayerItemErrorLogEventInternal.h>
#import <AVFoundation/AVPlayerItemErrorLogEvent.h>
#import <AVFoundation/AVAudioSessionMediaPlayerOnlyInternal.h>
#import <AVFoundation/AVAudioSessionMediaPlayerOnly.h>
#import <AVFoundation/AVMediaSelectionGroupInternal.h>
#import <AVFoundation/AVMediaSelectionGroup.h>
#import <AVFoundation/AVAssetMediaSelectionGroup.h>
#import <AVFoundation/AVMediaSelectionOptionInternal.h>
#import <AVFoundation/AVMediaSelectionOption.h>
#import <AVFoundation/AVMediaSelectionTrackOption.h>
#import <AVFoundation/AVMediaSelectionKeyValueOption.h>
#import <AVFoundation/AVFigObjectInspector.h>
#import <AVFoundation/AVOutputSettings.h>
#import <AVFoundation/AVFormatSpecification.h>
#import <AVFoundation/AVDisplayCriteriaInternal.h>
#import <AVFoundation/AVDisplayCriteria.h>
#import <AVFoundation/AVMediaFileType.h>
#import <AVFoundation/AVMediaFileOutputSettingsValidator.h>
#import <AVFoundation/AVWAVEOutputSettingsValidator.h>
#import <AVFoundation/AVAIFFOutputSettingsValidator.h>
#import <AVFoundation/AVAIFCOutputSettingsValidator.h>
#import <AVFoundation/AVISOOutputSettingsValidator.h>
#import <AVFoundation/AVGenericMediaFileOutputSettingsValidator.h>
#import <AVFoundation/AVAudioOutputSettings.h>
#import <AVFoundation/AVAVAudioSettingsAudioOutputSettings.h>
#import <AVFoundation/AVVideoOutputSettings.h>
#import <AVFoundation/AVPixelBufferAttributesVideoOutputSettings.h>
#import <AVFoundation/AVAVVideoSettingsVideoOutputSettings.h>
#import <AVFoundation/AVAudioSettingsValueConstrainer.h>
#import <AVFoundation/AVFloat64Range.h>
#import <AVFoundation/AVAggregateAssetDownloadTask.h>
#import <AVFoundation/AVAssetDownloadSessionInternal.h>
#import <AVFoundation/AVAssetDownloadSession.h>
#import <AVFoundation/AVPlayerItemOutputInternal.h>
#import <AVFoundation/AVPlayerItemOutput.h>
#import <AVFoundation/AVPlayerItemVideoOutputInternal.h>
#import <AVFoundation/AVPlayerItemVideoOutput.h>
#import <AVFoundation/AVCaptureDeviceFormatInternal.h>
#import <AVFoundation/AVCaptureDeviceFormat.h>
#import <AVFoundation/AVFrameRateRangeInternal.h>
#import <AVFoundation/AVFrameRateRange.h>
#import <AVFoundation/AVCapturePreparedPhotoSettingsArrayRequest.h>
#import <AVFoundation/AVSampleBufferDisplayLayerContentLayer.h>
#import <AVFoundation/AVSampleBufferDisplayLayerInternal.h>
#import <AVFoundation/AVSampleBufferDisplayLayer.h>
#import <AVFoundation/AVVideoPerformanceMetricsInternal.h>
#import <AVFoundation/AVVideoPerformanceMetrics.h>
#import <AVFoundation/AVCaptureMetadataOutputInternal.h>
#import <AVFoundation/AVCaptureMetadataOutput.h>
#import <AVFoundation/AVCaptureSystemPressureStateInternal.h>
#import <AVFoundation/AVCaptureSystemPressureState.h>
#import <AVFoundation/AVPixelBufferAttributeMediator.h>
#import <AVFoundation/AVURLAuthenticationChallenge.h>
#import <AVFoundation/AVAssetResourceLoaderInternal.h>
#import <AVFoundation/AVAssetResourceLoader.h>
#import <AVFoundation/AVAssetResourceLoaderURLSessionDataDelegate.h>
#import <AVFoundation/AVAssetResourceLoaderURLSessionDataDelegateForCustomURLLoader.h>
#import <AVFoundation/AVAssetResourceLoadingContentInformationRequestInternal.h>
#import <AVFoundation/AVAssetResourceLoadingContentInformationRequest.h>
#import <AVFoundation/AVAssetResourceLoadingDataRequestInternal.h>
#import <AVFoundation/AVAssetResourceLoadingDataRequest.h>
#import <AVFoundation/AVAssetResourceLoadingRequestInternal.h>
#import <AVFoundation/AVAssetResourceLoadingRequest.h>
#import <AVFoundation/AVAssetResourceRenewalRequest.h>
#import <AVFoundation/AVSampleBufferRenderSynchronizerInternal.h>
#import <AVFoundation/AVSampleBufferRenderSynchronizer.h>
#import <AVFoundation/AVTextStyleRuleInternal.h>
#import <AVFoundation/AVTextStyleRule.h>
#import <AVFoundation/AVPlayerMediaSelectionCriteria.h>
#import <AVFoundation/AVPlayerItemLegibleOutputRealDependencyFactory.h>
#import <AVFoundation/AVPlayerItemLegibleOutputInternal.h>
#import <AVFoundation/AVPlayerItemLegibleOutput.h>
#import <AVFoundation/AVFigRemoteRouteDiscovererFactory.h>
#import <AVFoundation/AVFigRouteDiscovererOutputDeviceDiscoverySessionFactory.h>
#import <AVFoundation/AVFigRouteDiscovererOutputDeviceDiscoverySessionImpl.h>
#import <AVFoundation/AVFigRouteDescriptorOutputDeviceDiscoverySessionAvailableOutputDevicesImpl.h>
#import <AVFoundation/AVAsynchronousCIImageFilteringRequestInternal.h>
#import <AVFoundation/AVAsynchronousCIImageFilteringRequest.h>
#import <AVFoundation/AVCoreImageFilterVideoCompositionInstruction.h>
#import <AVFoundation/AVCoreImageFilterCustomVideoCompositor.h>
#import <AVFoundation/AVDepthDataInternal.h>
#import <AVFoundation/AVDepthData.h>
#import <AVFoundation/AVOutputSettingsAssistantInternal.h>
#import <AVFoundation/AVOutputSettingsAssistant.h>
#import <AVFoundation/AVExportSettingsOutputSettingsAssistantBaseSettings.h>
#import <AVFoundation/AVExportSettingsOutputSettingsAssistantVideoSettingsAdjuster.h>
#import <AVFoundation/AVIOKitOutputSettingsAssistantVideoEncoderCapabilities.h>
#import <AVFoundation/AVCaptureDeviceControlRequest.h>
#import <AVFoundation/AVCaptureDeviceFakeBiasControlRequest.h>
#import <AVFoundation/AVCaptureDeviceControlRequestQueue.h>
#import <AVFoundation/AVMediaSelectionInternal.h>
#import <AVFoundation/AVMediaSelection.h>
#import <AVFoundation/AVMutableMediaSelection.h>
#import <AVFoundation/AVExternalDeviceHIDInternal.h>
#import <AVFoundation/AVExternalDeviceHID.h>
#import <AVFoundation/AVExternalDeviceIconInternal.h>
#import <AVFoundation/AVExternalDeviceIcon.h>
#import <AVFoundation/AVExternalDeviceInternal.h>
#import <AVFoundation/AVExternalDeviceScreenBorrowToken.h>
#import <AVFoundation/AVExternalDeviceTurnByTurnToken.h>
#import <AVFoundation/AVExternalDevice.h>
#import <AVFoundation/AVCustomVideoCompositorSession.h>
#import <AVFoundation/AVFigEndpointPickerOutputDeviceDiscoverySessionImpl.h>
#import <AVFoundation/AVFigEndpointPickerOutputDeviceDiscoverySessionFactory.h>
#import <AVFoundation/AVFigEndpointOutputDeviceDiscoverySessionAvailableOutputDevicesImpl.h>
#import <AVFoundation/AVAsynchronousVideoCompositionRequestInternal.h>
#import <AVFoundation/AVAsynchronousVideoCompositionRequest.h>
#import <AVFoundation/AVCaptureSynchronizedDataInternal.h>
#import <AVFoundation/AVCaptureSynchronizedData.h>
#import <AVFoundation/AVCaptureSynchronizedSampleBufferDataInternal.h>
#import <AVFoundation/AVCaptureSynchronizedSampleBufferData.h>
#import <AVFoundation/AVCaptureSynchronizedMetadataObjectDataInternal.h>
#import <AVFoundation/AVCaptureSynchronizedMetadataObjectData.h>
#import <AVFoundation/AVCaptureSynchronizedDepthDataInternal.h>
#import <AVFoundation/AVCaptureSynchronizedDepthData.h>
#import <AVFoundation/AVKVODispatcher.h>
#import <AVFoundation/AVObservationBlockFactory.h>
#import <AVFoundation/AVWeakObservationBlockFactory.h>
#import <AVFoundation/AVClientBlockKVONotifier.h>
#import <AVFoundation/AVWeaklyObservedObjectClientBlockKVONotifier.h>
#import <AVFoundation/AVWeakObservableCallbackCancellationHelper.h>
#import <AVFoundation/AVKeyPathDependencyManager.h>
#import <AVFoundation/AVKeyPathDependency.h>
#import <AVFoundation/AVTwoPartKeyPath.h>
#import <AVFoundation/AVKeyPathFlattener.h>
#import <AVFoundation/AVKeyPathFlattenerKVOIntrospectionShim.h>
#import <AVFoundation/AVVideoCompositionRenderContextInternal.h>
#import <AVFoundation/AVVideoCompositionRenderContext.h>
#import <AVFoundation/AVFigRoutingContextOutputContextImpl.h>
#import <AVFoundation/AVFigCommChannelUUIDCommunicationChannelManager.h>
#import <AVFoundation/AVFigEndpointFigRoutingContextOutputDeviceTranslator.h>
#import <AVFoundation/AVFigRouteDescriptorFigRoutingContextOutputDeviceTranslator.h>
#import <AVFoundation/AVFigCommChannelUUIDOutputContextCommunicationChannelImpl.h>
#import <AVFoundation/AVFigEndpointUIAgentOutputContextManagerImpl.h>
#import <AVFoundation/AVCDOSDataOutputStorage.h>
#import <AVFoundation/AVCaptureDataOutputSynchronizerInternal.h>
#import <AVFoundation/AVCaptureDataOutputSynchronizer.h>
#import <AVFoundation/AVCapturePhotoInternal.h>
#import <AVFoundation/AVCapturePhoto.h>
#import <AVFoundation/AVCapturePhotoOutputInternal.h>
#import <AVFoundation/AVCapturePhotoOutput.h>
#import <AVFoundation/AVNetworkPlaybackPerfHUDLayer.h>
#import <AVFoundation/AVContentKeyRequestInternal.h>
#import <AVFoundation/AVContentKeyRequest.h>
#import <AVFoundation/AVPersistableContentKeyRequest.h>
#import <AVFoundation/AVContentKeyResponseFairPlayStreaming.h>
#import <AVFoundation/AVContentKeyResponseClearKey.h>
#import <AVFoundation/AVContentKeyResponseInternal.h>
#import <AVFoundation/AVContentKeyResponse.h>
#import <AVFoundation/AVContentKeySessionInternal.h>
#import <AVFoundation/AVContentKeySession.h>
#import <AVFoundation/AVFlashlightInternal.h>
#import <AVFoundation/AVFlashlight.h>
#import <AVFoundation/AVFigEndpointPickerOutputContextImpl.h>
#import <AVFoundation/AVOfflineVideoStabilizer.h>
#import <AVFoundation/AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl.h>
#import <AVFoundation/AVFigEndpointUIAgentOutputDeviceAuthorizationRequestImpl.h>
#import <AVFoundation/AVRouteDetectorInternal.h>
#import <AVFoundation/AVRouteDetector.h>