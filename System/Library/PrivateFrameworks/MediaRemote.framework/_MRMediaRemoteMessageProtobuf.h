/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, _MRClientUpdatesConfigurationProtobuf, _MRSetConnectionStateMessageProtobuf, _MRPlaybackQueueProtobuf, _MRCryptoPairingMessageProtobuf, _MRDeviceInfoMessageProtobuf, _MRGameControllerMessageProtobuf, _MRGameControllerPropertiesMessageProtobuf, _MRGenericMessageProtobuf, _MRGetKeyboardSessionProtobuf, _MRGetStateMessageProtobuf, _MRGetVoiceInputDevicesMessageProtobuf, _MRGetVoiceInputDevicesResponseMessageProtobuf, _MRGetVolumeMessageProtobuf, _MRGetVolumeResultMessageProtobuf, _MRKeyboardMessageProtobuf, _MRAVModifyOutputContextRequestProtobuf, _MRNotificationMessageProtobuf, _MRPlaybackQueueRequestProtobuf, _MRPresentRouteAuthorizationStatusMessageProtobuf, _MRPromptForRouteAuthorizationMessageProtobuf, _MRPromptForRouteAuthorizationResponseMessageProtobuf, _MRSetReadyStateMessageProtobuf, _MRRegisterForGameControllerEventsMessageProtobuf, _MRRegisterGameControllerMessageProtobuf, _MRRegisterGameControllerResponseMessageProtobuf, _MRRegisterHIDDeviceMessageProtobuf, _MRRegisterHIDDeviceResultMessageProtobuf, _MRRegisterVoiceInputDeviceMessageProtobuf, _MRRegisterVoiceInputDeviceResponseMessageProtobuf, _MRRemoveClientMessageProtobuf, _MRRemovePlayerMessageProtobuf, _MRSendButtonEventMessageProtobuf, _MRSendCommandMessageProtobuf, _MRSendCommandResultMessageProtobuf, _MRSendHIDEventMessageProtobuf, _MRSendHIDReportMessageProtobuf, _MRSendLyricsEventMessageProtobuf, _MRSendPackedVirtualTouchEventMessageProtobuf, _MRSendVirtualTouchEventMessageProtobuf, _MRSendVoiceInputMessageProtobuf, _MRSetArtworkMessageProtobuf, _MRSetHiliteModeMessageProtobuf, _MRSetNowPlayingClientMessageProtobuf, _MRSetNowPlayingPlayerMessageProtobuf, _MRSetRecordingStateMessageProtobuf, _MRSetStateMessageProtobuf, _MRSetVolumeMessageProtobuf, _MRTextInputMessageProtobuf, _MRTransactionMessageProtobuf, _MRUnregisterGameControllerMessageProtobuf, _MRUpdateClientMessageProtobuf, _MRUpdateContentItemArtworkMessageProtobuf, _MRUpdateContentItemMessageProtobuf, _MRUpdatePlayerMessageProtobuf, _MRVolumeControlAvailabilityProtobuf, _MRVolumeDidChangeMessageProtobuf, _MRWakeDeviceMessageProtobuf;

@interface _MRMediaRemoteMessageProtobuf : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _authenticationToken;
	_MRClientUpdatesConfigurationProtobuf* _clientUpdatesConfigMessage;
	_MRSetConnectionStateMessageProtobuf* _connectionState;
	_MRPlaybackQueueProtobuf* _contentItemsChangedNotificationMessage;
	_MRCryptoPairingMessageProtobuf* _cryptoPairingMessage;
	_MRDeviceInfoMessageProtobuf* _deviceInfoMessage;
	unsigned _errorCode;
	_MRGameControllerMessageProtobuf* _gameController;
	_MRGameControllerPropertiesMessageProtobuf* _gameControllerProperties;
	_MRGenericMessageProtobuf* _genericMessage;
	_MRGetKeyboardSessionProtobuf* _getKeyboardMessage;
	_MRGetStateMessageProtobuf* _getStateMessage;
	_MRGetVoiceInputDevicesMessageProtobuf* _getVoiceInputDevicesMessage;
	_MRGetVoiceInputDevicesResponseMessageProtobuf* _getVoiceInputDevicesResponseMessage;
	_MRGetVolumeMessageProtobuf* _getVolumeMessage;
	_MRGetVolumeResultMessageProtobuf* _getVolumeResultMessage;
	NSString* _identifier;
	_MRKeyboardMessageProtobuf* _keyboardMessage;
	_MRAVModifyOutputContextRequestProtobuf* _modifyOutputContextRequestMessage;
	_MRNotificationMessageProtobuf* _notificationMessage;
	_MRPlaybackQueueRequestProtobuf* _playbackQueueRequest;
	_MRPresentRouteAuthorizationStatusMessageProtobuf* _presentRouteAuthorizationStatusMessage;
	_MRPromptForRouteAuthorizationMessageProtobuf* _promptForRouteAuthorizationMessage;
	_MRPromptForRouteAuthorizationResponseMessageProtobuf* _promptForRouteAuthorizationResponseMessage;
	_MRSetReadyStateMessageProtobuf* _readyStateMessage;
	_MRRegisterForGameControllerEventsMessageProtobuf* _registerForGameControllerEvents;
	_MRRegisterGameControllerMessageProtobuf* _registerGameController;
	_MRRegisterGameControllerResponseMessageProtobuf* _registerGameControllerResponse;
	_MRRegisterHIDDeviceMessageProtobuf* _registerHIDDeviceMessage;
	_MRRegisterHIDDeviceResultMessageProtobuf* _registerHIDDeviceResultMessage;
	_MRRegisterVoiceInputDeviceMessageProtobuf* _registerVoiceInputDeviceMessage;
	_MRRegisterVoiceInputDeviceResponseMessageProtobuf* _registerVoiceInputDeviceResponseMessage;
	_MRRemoveClientMessageProtobuf* _removeClientMessage;
	_MRRemovePlayerMessageProtobuf* _removePlayerMessage;
	_MRSendButtonEventMessageProtobuf* _sendButtonEventMessage;
	_MRSendCommandMessageProtobuf* _sendCommandMessage;
	_MRSendCommandResultMessageProtobuf* _sendCommandResultMessage;
	_MRSendHIDEventMessageProtobuf* _sendHIDEventMessage;
	_MRSendHIDReportMessageProtobuf* _sendHIDReportMessage;
	_MRSendLyricsEventMessageProtobuf* _sendLyricsEventMessage;
	_MRSendPackedVirtualTouchEventMessageProtobuf* _sendPackedVirtualTouchEventMessage;
	_MRSendVirtualTouchEventMessageProtobuf* _sendVirtualTouchEventMessage;
	_MRSendVoiceInputMessageProtobuf* _sendVoiceInputMessage;
	_MRSetArtworkMessageProtobuf* _setArtworkMessage;
	_MRSetHiliteModeMessageProtobuf* _setHiliteModeMessage;
	_MRSetNowPlayingClientMessageProtobuf* _setNowPlayingClientMessage;
	_MRSetNowPlayingPlayerMessageProtobuf* _setNowPlayingPlayerMessage;
	_MRSetRecordingStateMessageProtobuf* _setRecordingStateMessage;
	_MRSetStateMessageProtobuf* _setStateMessage;
	_MRSetVolumeMessageProtobuf* _setVolumeMessage;
	_MRTextInputMessageProtobuf* _textInputMessage;
	_MRTransactionMessageProtobuf* _transactionPackets;
	int _type;
	_MRUnregisterGameControllerMessageProtobuf* _unregisterGameController;
	_MRUpdateClientMessageProtobuf* _updateClientMessage;
	_MRUpdateContentItemArtworkMessageProtobuf* _updateContentItemArtworkMessage;
	_MRUpdateContentItemMessageProtobuf* _updateContentItemMessage;
	_MRUpdatePlayerMessageProtobuf* _updatePlayerMessage;
	_MRVolumeControlAvailabilityProtobuf* _volumeControlAvailabilityMessage;
	_MRVolumeDidChangeMessageProtobuf* _volumeDidChangeMessage;
	_MRWakeDeviceMessageProtobuf* _wakeDeviceMessage;
	SCD_Struct_MR6 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                                                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                                                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAuthenticationToken; 
@property (nonatomic,retain) NSString * authenticationToken;                                                                                  //@synthesize authenticationToken=_authenticationToken - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;                                                                                              //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSendCommandMessage; 
@property (nonatomic,retain) _MRSendCommandMessageProtobuf * sendCommandMessage;                                                              //@synthesize sendCommandMessage=_sendCommandMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasSendCommandResultMessage; 
@property (nonatomic,retain) _MRSendCommandResultMessageProtobuf * sendCommandResultMessage;                                                  //@synthesize sendCommandResultMessage=_sendCommandResultMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasGetStateMessage; 
@property (nonatomic,retain) _MRGetStateMessageProtobuf * getStateMessage;                                                                    //@synthesize getStateMessage=_getStateMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasSetStateMessage; 
@property (nonatomic,retain) _MRSetStateMessageProtobuf * setStateMessage;                                                                    //@synthesize setStateMessage=_setStateMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasSetArtworkMessage; 
@property (nonatomic,retain) _MRSetArtworkMessageProtobuf * setArtworkMessage;                                                                //@synthesize setArtworkMessage=_setArtworkMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasRegisterHIDDeviceMessage; 
@property (nonatomic,retain) _MRRegisterHIDDeviceMessageProtobuf * registerHIDDeviceMessage;                                                  //@synthesize registerHIDDeviceMessage=_registerHIDDeviceMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasRegisterHIDDeviceResultMessage; 
@property (nonatomic,retain) _MRRegisterHIDDeviceResultMessageProtobuf * registerHIDDeviceResultMessage;                                      //@synthesize registerHIDDeviceResultMessage=_registerHIDDeviceResultMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasSendHIDEventMessage; 
@property (nonatomic,retain) _MRSendHIDEventMessageProtobuf * sendHIDEventMessage;                                                            //@synthesize sendHIDEventMessage=_sendHIDEventMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasSendHIDReportMessage; 
@property (nonatomic,retain) _MRSendHIDReportMessageProtobuf * sendHIDReportMessage;                                                          //@synthesize sendHIDReportMessage=_sendHIDReportMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasSendVirtualTouchEventMessage; 
@property (nonatomic,retain) _MRSendVirtualTouchEventMessageProtobuf * sendVirtualTouchEventMessage;                                          //@synthesize sendVirtualTouchEventMessage=_sendVirtualTouchEventMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasNotificationMessage; 
@property (nonatomic,retain) _MRNotificationMessageProtobuf * notificationMessage;                                                            //@synthesize notificationMessage=_notificationMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasContentItemsChangedNotificationMessage; 
@property (nonatomic,retain) _MRPlaybackQueueProtobuf * contentItemsChangedNotificationMessage;                                               //@synthesize contentItemsChangedNotificationMessage=_contentItemsChangedNotificationMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceInfoMessage; 
@property (nonatomic,retain) _MRDeviceInfoMessageProtobuf * deviceInfoMessage;                                                                //@synthesize deviceInfoMessage=_deviceInfoMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasClientUpdatesConfigMessage; 
@property (nonatomic,retain) _MRClientUpdatesConfigurationProtobuf * clientUpdatesConfigMessage;                                              //@synthesize clientUpdatesConfigMessage=_clientUpdatesConfigMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasVolumeControlAvailabilityMessage; 
@property (nonatomic,retain) _MRVolumeControlAvailabilityProtobuf * volumeControlAvailabilityMessage;                                         //@synthesize volumeControlAvailabilityMessage=_volumeControlAvailabilityMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasGameController; 
@property (nonatomic,retain) _MRGameControllerMessageProtobuf * gameController;                                                               //@synthesize gameController=_gameController - In the implementation block
@property (nonatomic,readonly) BOOL hasRegisterGameController; 
@property (nonatomic,retain) _MRRegisterGameControllerMessageProtobuf * registerGameController;                                               //@synthesize registerGameController=_registerGameController - In the implementation block
@property (nonatomic,readonly) BOOL hasRegisterGameControllerResponse; 
@property (nonatomic,retain) _MRRegisterGameControllerResponseMessageProtobuf * registerGameControllerResponse;                               //@synthesize registerGameControllerResponse=_registerGameControllerResponse - In the implementation block
@property (nonatomic,readonly) BOOL hasUnregisterGameController; 
@property (nonatomic,retain) _MRUnregisterGameControllerMessageProtobuf * unregisterGameController;                                           //@synthesize unregisterGameController=_unregisterGameController - In the implementation block
@property (nonatomic,readonly) BOOL hasRegisterForGameControllerEvents; 
@property (nonatomic,retain) _MRRegisterForGameControllerEventsMessageProtobuf * registerForGameControllerEvents;                             //@synthesize registerForGameControllerEvents=_registerForGameControllerEvents - In the implementation block
@property (nonatomic,readonly) BOOL hasKeyboardMessage; 
@property (nonatomic,retain) _MRKeyboardMessageProtobuf * keyboardMessage;                                                                    //@synthesize keyboardMessage=_keyboardMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasGetKeyboardMessage; 
@property (nonatomic,retain) _MRGetKeyboardSessionProtobuf * getKeyboardMessage;                                                              //@synthesize getKeyboardMessage=_getKeyboardMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasTextInputMessage; 
@property (nonatomic,retain) _MRTextInputMessageProtobuf * textInputMessage;                                                                  //@synthesize textInputMessage=_textInputMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasGetVoiceInputDevicesMessage; 
@property (nonatomic,retain) _MRGetVoiceInputDevicesMessageProtobuf * getVoiceInputDevicesMessage;                                            //@synthesize getVoiceInputDevicesMessage=_getVoiceInputDevicesMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasGetVoiceInputDevicesResponseMessage; 
@property (nonatomic,retain) _MRGetVoiceInputDevicesResponseMessageProtobuf * getVoiceInputDevicesResponseMessage;                            //@synthesize getVoiceInputDevicesResponseMessage=_getVoiceInputDevicesResponseMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasRegisterVoiceInputDeviceMessage; 
@property (nonatomic,retain) _MRRegisterVoiceInputDeviceMessageProtobuf * registerVoiceInputDeviceMessage;                                    //@synthesize registerVoiceInputDeviceMessage=_registerVoiceInputDeviceMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasRegisterVoiceInputDeviceResponseMessage; 
@property (nonatomic,retain) _MRRegisterVoiceInputDeviceResponseMessageProtobuf * registerVoiceInputDeviceResponseMessage;                    //@synthesize registerVoiceInputDeviceResponseMessage=_registerVoiceInputDeviceResponseMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasSetRecordingStateMessage; 
@property (nonatomic,retain) _MRSetRecordingStateMessageProtobuf * setRecordingStateMessage;                                                  //@synthesize setRecordingStateMessage=_setRecordingStateMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasSendVoiceInputMessage; 
@property (nonatomic,retain) _MRSendVoiceInputMessageProtobuf * sendVoiceInputMessage;                                                        //@synthesize sendVoiceInputMessage=_sendVoiceInputMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackQueueRequest; 
@property (nonatomic,retain) _MRPlaybackQueueRequestProtobuf * playbackQueueRequest;                                                          //@synthesize playbackQueueRequest=_playbackQueueRequest - In the implementation block
@property (nonatomic,readonly) BOOL hasTransactionPackets; 
@property (nonatomic,retain) _MRTransactionMessageProtobuf * transactionPackets;                                                              //@synthesize transactionPackets=_transactionPackets - In the implementation block
@property (nonatomic,readonly) BOOL hasCryptoPairingMessage; 
@property (nonatomic,retain) _MRCryptoPairingMessageProtobuf * cryptoPairingMessage;                                                          //@synthesize cryptoPairingMessage=_cryptoPairingMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasGameControllerProperties; 
@property (nonatomic,retain) _MRGameControllerPropertiesMessageProtobuf * gameControllerProperties;                                           //@synthesize gameControllerProperties=_gameControllerProperties - In the implementation block
@property (nonatomic,readonly) BOOL hasReadyStateMessage; 
@property (nonatomic,retain) _MRSetReadyStateMessageProtobuf * readyStateMessage;                                                             //@synthesize readyStateMessage=_readyStateMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasConnectionState; 
@property (nonatomic,retain) _MRSetConnectionStateMessageProtobuf * connectionState;                                                          //@synthesize connectionState=_connectionState - In the implementation block
@property (nonatomic,readonly) BOOL hasSendButtonEventMessage; 
@property (nonatomic,retain) _MRSendButtonEventMessageProtobuf * sendButtonEventMessage;                                                      //@synthesize sendButtonEventMessage=_sendButtonEventMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasSetHiliteModeMessage; 
@property (nonatomic,retain) _MRSetHiliteModeMessageProtobuf * setHiliteModeMessage;                                                          //@synthesize setHiliteModeMessage=_setHiliteModeMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasWakeDeviceMessage; 
@property (nonatomic,retain) _MRWakeDeviceMessageProtobuf * wakeDeviceMessage;                                                                //@synthesize wakeDeviceMessage=_wakeDeviceMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasGenericMessage; 
@property (nonatomic,retain) _MRGenericMessageProtobuf * genericMessage;                                                                      //@synthesize genericMessage=_genericMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasSendPackedVirtualTouchEventMessage; 
@property (nonatomic,retain) _MRSendPackedVirtualTouchEventMessageProtobuf * sendPackedVirtualTouchEventMessage;                              //@synthesize sendPackedVirtualTouchEventMessage=_sendPackedVirtualTouchEventMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasSendLyricsEventMessage; 
@property (nonatomic,retain) _MRSendLyricsEventMessageProtobuf * sendLyricsEventMessage;                                                      //@synthesize sendLyricsEventMessage=_sendLyricsEventMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasSetNowPlayingClientMessage; 
@property (nonatomic,retain) _MRSetNowPlayingClientMessageProtobuf * setNowPlayingClientMessage;                                              //@synthesize setNowPlayingClientMessage=_setNowPlayingClientMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasSetNowPlayingPlayerMessage; 
@property (nonatomic,retain) _MRSetNowPlayingPlayerMessageProtobuf * setNowPlayingPlayerMessage;                                              //@synthesize setNowPlayingPlayerMessage=_setNowPlayingPlayerMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasModifyOutputContextRequestMessage; 
@property (nonatomic,retain) _MRAVModifyOutputContextRequestProtobuf * modifyOutputContextRequestMessage;                                     //@synthesize modifyOutputContextRequestMessage=_modifyOutputContextRequestMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasGetVolumeMessage; 
@property (nonatomic,retain) _MRGetVolumeMessageProtobuf * getVolumeMessage;                                                                  //@synthesize getVolumeMessage=_getVolumeMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasGetVolumeResultMessage; 
@property (nonatomic,retain) _MRGetVolumeResultMessageProtobuf * getVolumeResultMessage;                                                      //@synthesize getVolumeResultMessage=_getVolumeResultMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasSetVolumeMessage; 
@property (nonatomic,retain) _MRSetVolumeMessageProtobuf * setVolumeMessage;                                                                  //@synthesize setVolumeMessage=_setVolumeMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasVolumeDidChangeMessage; 
@property (nonatomic,retain) _MRVolumeDidChangeMessageProtobuf * volumeDidChangeMessage;                                                      //@synthesize volumeDidChangeMessage=_volumeDidChangeMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasRemoveClientMessage; 
@property (nonatomic,retain) _MRRemoveClientMessageProtobuf * removeClientMessage;                                                            //@synthesize removeClientMessage=_removeClientMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasRemovePlayerMessage; 
@property (nonatomic,retain) _MRRemovePlayerMessageProtobuf * removePlayerMessage;                                                            //@synthesize removePlayerMessage=_removePlayerMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasUpdateClientMessage; 
@property (nonatomic,retain) _MRUpdateClientMessageProtobuf * updateClientMessage;                                                            //@synthesize updateClientMessage=_updateClientMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasUpdateContentItemMessage; 
@property (nonatomic,retain) _MRUpdateContentItemMessageProtobuf * updateContentItemMessage;                                                  //@synthesize updateContentItemMessage=_updateContentItemMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasUpdateContentItemArtworkMessage; 
@property (nonatomic,retain) _MRUpdateContentItemArtworkMessageProtobuf * updateContentItemArtworkMessage;                                    //@synthesize updateContentItemArtworkMessage=_updateContentItemArtworkMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasUpdatePlayerMessage; 
@property (nonatomic,retain) _MRUpdatePlayerMessageProtobuf * updatePlayerMessage;                                                            //@synthesize updatePlayerMessage=_updatePlayerMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasPromptForRouteAuthorizationMessage; 
@property (nonatomic,retain) _MRPromptForRouteAuthorizationMessageProtobuf * promptForRouteAuthorizationMessage;                              //@synthesize promptForRouteAuthorizationMessage=_promptForRouteAuthorizationMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasPromptForRouteAuthorizationResponseMessage; 
@property (nonatomic,retain) _MRPromptForRouteAuthorizationResponseMessageProtobuf * promptForRouteAuthorizationResponseMessage;              //@synthesize promptForRouteAuthorizationResponseMessage=_promptForRouteAuthorizationResponseMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasPresentRouteAuthorizationStatusMessage; 
@property (nonatomic,retain) _MRPresentRouteAuthorizationStatusMessageProtobuf * presentRouteAuthorizationStatusMessage;                      //@synthesize presentRouteAuthorizationStatusMessage=_presentRouteAuthorizationStatusMessage - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasIdentifier;
-(void)setErrorCode:(unsigned)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(unsigned)errorCode;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(NSString *)identifier;
-(void)setType:(int)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(int)type;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSendCommandMessage:(_MRSendCommandMessageProtobuf *)arg1 ;
-(void)setSendCommandResultMessage:(_MRSendCommandResultMessageProtobuf *)arg1 ;
-(void)setGetStateMessage:(_MRGetStateMessageProtobuf *)arg1 ;
-(void)setSetStateMessage:(_MRSetStateMessageProtobuf *)arg1 ;
-(void)setSetArtworkMessage:(_MRSetArtworkMessageProtobuf *)arg1 ;
-(void)setRegisterHIDDeviceMessage:(_MRRegisterHIDDeviceMessageProtobuf *)arg1 ;
-(void)setRegisterHIDDeviceResultMessage:(_MRRegisterHIDDeviceResultMessageProtobuf *)arg1 ;
-(void)setSendHIDEventMessage:(_MRSendHIDEventMessageProtobuf *)arg1 ;
-(void)setSendHIDReportMessage:(_MRSendHIDReportMessageProtobuf *)arg1 ;
-(void)setSendVirtualTouchEventMessage:(_MRSendVirtualTouchEventMessageProtobuf *)arg1 ;
-(void)setNotificationMessage:(_MRNotificationMessageProtobuf *)arg1 ;
-(void)setContentItemsChangedNotificationMessage:(_MRPlaybackQueueProtobuf *)arg1 ;
-(void)setDeviceInfoMessage:(_MRDeviceInfoMessageProtobuf *)arg1 ;
-(void)setClientUpdatesConfigMessage:(_MRClientUpdatesConfigurationProtobuf *)arg1 ;
-(void)setVolumeControlAvailabilityMessage:(_MRVolumeControlAvailabilityProtobuf *)arg1 ;
-(void)setGameController:(_MRGameControllerMessageProtobuf *)arg1 ;
-(void)setRegisterGameController:(_MRRegisterGameControllerMessageProtobuf *)arg1 ;
-(void)setRegisterGameControllerResponse:(_MRRegisterGameControllerResponseMessageProtobuf *)arg1 ;
-(void)setUnregisterGameController:(_MRUnregisterGameControllerMessageProtobuf *)arg1 ;
-(void)setRegisterForGameControllerEvents:(_MRRegisterForGameControllerEventsMessageProtobuf *)arg1 ;
-(void)setKeyboardMessage:(_MRKeyboardMessageProtobuf *)arg1 ;
-(void)setGetKeyboardMessage:(_MRGetKeyboardSessionProtobuf *)arg1 ;
-(void)setTextInputMessage:(_MRTextInputMessageProtobuf *)arg1 ;
-(void)setGetVoiceInputDevicesMessage:(_MRGetVoiceInputDevicesMessageProtobuf *)arg1 ;
-(void)setGetVoiceInputDevicesResponseMessage:(_MRGetVoiceInputDevicesResponseMessageProtobuf *)arg1 ;
-(void)setRegisterVoiceInputDeviceMessage:(_MRRegisterVoiceInputDeviceMessageProtobuf *)arg1 ;
-(void)setRegisterVoiceInputDeviceResponseMessage:(_MRRegisterVoiceInputDeviceResponseMessageProtobuf *)arg1 ;
-(void)setSetRecordingStateMessage:(_MRSetRecordingStateMessageProtobuf *)arg1 ;
-(void)setSendVoiceInputMessage:(_MRSendVoiceInputMessageProtobuf *)arg1 ;
-(void)setPlaybackQueueRequest:(_MRPlaybackQueueRequestProtobuf *)arg1 ;
-(void)setTransactionPackets:(_MRTransactionMessageProtobuf *)arg1 ;
-(void)setCryptoPairingMessage:(_MRCryptoPairingMessageProtobuf *)arg1 ;
-(void)setGameControllerProperties:(_MRGameControllerPropertiesMessageProtobuf *)arg1 ;
-(void)setReadyStateMessage:(_MRSetReadyStateMessageProtobuf *)arg1 ;
-(void)setSendButtonEventMessage:(_MRSendButtonEventMessageProtobuf *)arg1 ;
-(void)setSetHiliteModeMessage:(_MRSetHiliteModeMessageProtobuf *)arg1 ;
-(void)setWakeDeviceMessage:(_MRWakeDeviceMessageProtobuf *)arg1 ;
-(void)setGenericMessage:(_MRGenericMessageProtobuf *)arg1 ;
-(void)setSendPackedVirtualTouchEventMessage:(_MRSendPackedVirtualTouchEventMessageProtobuf *)arg1 ;
-(void)setSendLyricsEventMessage:(_MRSendLyricsEventMessageProtobuf *)arg1 ;
-(void)setSetNowPlayingClientMessage:(_MRSetNowPlayingClientMessageProtobuf *)arg1 ;
-(void)setSetNowPlayingPlayerMessage:(_MRSetNowPlayingPlayerMessageProtobuf *)arg1 ;
-(void)setModifyOutputContextRequestMessage:(_MRAVModifyOutputContextRequestProtobuf *)arg1 ;
-(void)setGetVolumeMessage:(_MRGetVolumeMessageProtobuf *)arg1 ;
-(void)setGetVolumeResultMessage:(_MRGetVolumeResultMessageProtobuf *)arg1 ;
-(void)setSetVolumeMessage:(_MRSetVolumeMessageProtobuf *)arg1 ;
-(void)setVolumeDidChangeMessage:(_MRVolumeDidChangeMessageProtobuf *)arg1 ;
-(void)setRemoveClientMessage:(_MRRemoveClientMessageProtobuf *)arg1 ;
-(void)setRemovePlayerMessage:(_MRRemovePlayerMessageProtobuf *)arg1 ;
-(void)setUpdateClientMessage:(_MRUpdateClientMessageProtobuf *)arg1 ;
-(void)setUpdateContentItemMessage:(_MRUpdateContentItemMessageProtobuf *)arg1 ;
-(void)setUpdateContentItemArtworkMessage:(_MRUpdateContentItemArtworkMessageProtobuf *)arg1 ;
-(void)setUpdatePlayerMessage:(_MRUpdatePlayerMessageProtobuf *)arg1 ;
-(void)setPromptForRouteAuthorizationMessage:(_MRPromptForRouteAuthorizationMessageProtobuf *)arg1 ;
-(void)setPromptForRouteAuthorizationResponseMessage:(_MRPromptForRouteAuthorizationResponseMessageProtobuf *)arg1 ;
-(void)setPresentRouteAuthorizationStatusMessage:(_MRPresentRouteAuthorizationStatusMessageProtobuf *)arg1 ;
-(BOOL)hasAuthenticationToken;
-(BOOL)hasSendCommandMessage;
-(BOOL)hasSendCommandResultMessage;
-(BOOL)hasGetStateMessage;
-(BOOL)hasSetStateMessage;
-(BOOL)hasSetArtworkMessage;
-(BOOL)hasRegisterHIDDeviceMessage;
-(BOOL)hasRegisterHIDDeviceResultMessage;
-(BOOL)hasSendHIDEventMessage;
-(BOOL)hasSendHIDReportMessage;
-(BOOL)hasSendVirtualTouchEventMessage;
-(BOOL)hasNotificationMessage;
-(BOOL)hasContentItemsChangedNotificationMessage;
-(BOOL)hasDeviceInfoMessage;
-(BOOL)hasClientUpdatesConfigMessage;
-(BOOL)hasVolumeControlAvailabilityMessage;
-(BOOL)hasGameController;
-(BOOL)hasRegisterGameController;
-(BOOL)hasRegisterGameControllerResponse;
-(BOOL)hasUnregisterGameController;
-(BOOL)hasRegisterForGameControllerEvents;
-(BOOL)hasKeyboardMessage;
-(BOOL)hasGetKeyboardMessage;
-(BOOL)hasTextInputMessage;
-(BOOL)hasGetVoiceInputDevicesMessage;
-(BOOL)hasGetVoiceInputDevicesResponseMessage;
-(BOOL)hasRegisterVoiceInputDeviceMessage;
-(BOOL)hasRegisterVoiceInputDeviceResponseMessage;
-(BOOL)hasSetRecordingStateMessage;
-(BOOL)hasSendVoiceInputMessage;
-(BOOL)hasPlaybackQueueRequest;
-(BOOL)hasTransactionPackets;
-(BOOL)hasCryptoPairingMessage;
-(BOOL)hasGameControllerProperties;
-(BOOL)hasReadyStateMessage;
-(BOOL)hasConnectionState;
-(BOOL)hasSendButtonEventMessage;
-(BOOL)hasSetHiliteModeMessage;
-(BOOL)hasWakeDeviceMessage;
-(BOOL)hasGenericMessage;
-(BOOL)hasSendPackedVirtualTouchEventMessage;
-(BOOL)hasSendLyricsEventMessage;
-(BOOL)hasSetNowPlayingClientMessage;
-(BOOL)hasSetNowPlayingPlayerMessage;
-(BOOL)hasModifyOutputContextRequestMessage;
-(BOOL)hasGetVolumeMessage;
-(BOOL)hasGetVolumeResultMessage;
-(BOOL)hasSetVolumeMessage;
-(BOOL)hasVolumeDidChangeMessage;
-(BOOL)hasRemoveClientMessage;
-(BOOL)hasRemovePlayerMessage;
-(BOOL)hasUpdateClientMessage;
-(BOOL)hasUpdateContentItemMessage;
-(BOOL)hasUpdateContentItemArtworkMessage;
-(BOOL)hasUpdatePlayerMessage;
-(BOOL)hasPromptForRouteAuthorizationMessage;
-(BOOL)hasPromptForRouteAuthorizationResponseMessage;
-(BOOL)hasPresentRouteAuthorizationStatusMessage;
-(_MRSendCommandMessageProtobuf *)sendCommandMessage;
-(_MRSendCommandResultMessageProtobuf *)sendCommandResultMessage;
-(_MRGetStateMessageProtobuf *)getStateMessage;
-(_MRSetStateMessageProtobuf *)setStateMessage;
-(_MRSetArtworkMessageProtobuf *)setArtworkMessage;
-(_MRRegisterHIDDeviceMessageProtobuf *)registerHIDDeviceMessage;
-(_MRRegisterHIDDeviceResultMessageProtobuf *)registerHIDDeviceResultMessage;
-(_MRSendHIDEventMessageProtobuf *)sendHIDEventMessage;
-(_MRSendHIDReportMessageProtobuf *)sendHIDReportMessage;
-(_MRSendVirtualTouchEventMessageProtobuf *)sendVirtualTouchEventMessage;
-(_MRNotificationMessageProtobuf *)notificationMessage;
-(_MRPlaybackQueueProtobuf *)contentItemsChangedNotificationMessage;
-(_MRDeviceInfoMessageProtobuf *)deviceInfoMessage;
-(_MRClientUpdatesConfigurationProtobuf *)clientUpdatesConfigMessage;
-(_MRVolumeControlAvailabilityProtobuf *)volumeControlAvailabilityMessage;
-(_MRGameControllerMessageProtobuf *)gameController;
-(_MRRegisterGameControllerMessageProtobuf *)registerGameController;
-(_MRRegisterGameControllerResponseMessageProtobuf *)registerGameControllerResponse;
-(_MRUnregisterGameControllerMessageProtobuf *)unregisterGameController;
-(_MRRegisterForGameControllerEventsMessageProtobuf *)registerForGameControllerEvents;
-(_MRKeyboardMessageProtobuf *)keyboardMessage;
-(_MRGetKeyboardSessionProtobuf *)getKeyboardMessage;
-(_MRTextInputMessageProtobuf *)textInputMessage;
-(_MRGetVoiceInputDevicesMessageProtobuf *)getVoiceInputDevicesMessage;
-(_MRGetVoiceInputDevicesResponseMessageProtobuf *)getVoiceInputDevicesResponseMessage;
-(_MRRegisterVoiceInputDeviceMessageProtobuf *)registerVoiceInputDeviceMessage;
-(_MRRegisterVoiceInputDeviceResponseMessageProtobuf *)registerVoiceInputDeviceResponseMessage;
-(_MRSetRecordingStateMessageProtobuf *)setRecordingStateMessage;
-(_MRSendVoiceInputMessageProtobuf *)sendVoiceInputMessage;
-(_MRPlaybackQueueRequestProtobuf *)playbackQueueRequest;
-(_MRTransactionMessageProtobuf *)transactionPackets;
-(_MRCryptoPairingMessageProtobuf *)cryptoPairingMessage;
-(_MRGameControllerPropertiesMessageProtobuf *)gameControllerProperties;
-(_MRSetReadyStateMessageProtobuf *)readyStateMessage;
-(_MRSendButtonEventMessageProtobuf *)sendButtonEventMessage;
-(_MRSetHiliteModeMessageProtobuf *)setHiliteModeMessage;
-(_MRWakeDeviceMessageProtobuf *)wakeDeviceMessage;
-(_MRGenericMessageProtobuf *)genericMessage;
-(_MRSendPackedVirtualTouchEventMessageProtobuf *)sendPackedVirtualTouchEventMessage;
-(_MRSendLyricsEventMessageProtobuf *)sendLyricsEventMessage;
-(_MRSetNowPlayingClientMessageProtobuf *)setNowPlayingClientMessage;
-(_MRSetNowPlayingPlayerMessageProtobuf *)setNowPlayingPlayerMessage;
-(_MRAVModifyOutputContextRequestProtobuf *)modifyOutputContextRequestMessage;
-(_MRGetVolumeMessageProtobuf *)getVolumeMessage;
-(_MRGetVolumeResultMessageProtobuf *)getVolumeResultMessage;
-(_MRSetVolumeMessageProtobuf *)setVolumeMessage;
-(_MRVolumeDidChangeMessageProtobuf *)volumeDidChangeMessage;
-(_MRRemoveClientMessageProtobuf *)removeClientMessage;
-(_MRRemovePlayerMessageProtobuf *)removePlayerMessage;
-(_MRUpdateClientMessageProtobuf *)updateClientMessage;
-(_MRUpdateContentItemMessageProtobuf *)updateContentItemMessage;
-(_MRUpdateContentItemArtworkMessageProtobuf *)updateContentItemArtworkMessage;
-(_MRUpdatePlayerMessageProtobuf *)updatePlayerMessage;
-(_MRPromptForRouteAuthorizationMessageProtobuf *)promptForRouteAuthorizationMessage;
-(_MRPromptForRouteAuthorizationResponseMessageProtobuf *)promptForRouteAuthorizationResponseMessage;
-(_MRPresentRouteAuthorizationStatusMessageProtobuf *)presentRouteAuthorizationStatusMessage;
-(void)setAuthenticationToken:(NSString *)arg1 ;
-(NSString *)authenticationToken;
-(_MRSetConnectionStateMessageProtobuf *)connectionState;
-(void)setConnectionState:(_MRSetConnectionStateMessageProtobuf *)arg1 ;
@end
