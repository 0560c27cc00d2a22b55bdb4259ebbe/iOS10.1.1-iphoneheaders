/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/TUPubliclyAccessibleCopying.h>

@class TUCTCapabilityInfo, NSSet, NSString, NSDictionary, NSArray, TUCloudCallingDevice;

@interface TUCallCapabilitiesState : NSObject <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying> {

	BOOL _telephonyDevice;
	BOOL _supportsCellularData;
	BOOL _supportsDisplayingTelephonyCalls;
	BOOL _supportsDisplayingFaceTimeAudioCalls;
	BOOL _supportsDisplayingFaceTimeVideoCalls;
	BOOL _faceTimeAudioAvailable;
	BOOL _faceTimeVideoAvailable;
	BOOL _ctCapabilitiesValid;
	BOOL _csCallingCurrentlyAvailable;
	BOOL _wiFiCallingCurrentlyAvailable;
	BOOL _wiFiEmergencyCallingAvailable;
	BOOL _wiFiEmergencyCallingSupported;
	BOOL _voLTECallingCurrentlyAvailable;
	BOOL _accountsMatchForSecondaryCalling;
	BOOL _supportsThumperCalling;
	BOOL _thumperCallingCurrentlyAvailable;
	BOOL _thumperCallingAllowedForCurrentDevice;
	BOOL _thumperCallingEnabled;
	BOOL _supportsRelayCalling;
	BOOL _relayCallingEnabled;
	BOOL _supportsTelephonyRelayCalling;
	BOOL _supportsFaceTimeAudioRelayCalling;
	BOOL _supportsFaceTimeVideoRelayCalling;
	BOOL _supportsSimultaneousVoiceAndData;
	BOOL _pairedDeviceExists;
	BOOL _emergencyCallbackModeEnabled;
	int _relayCallingAvailability;
	TUCTCapabilityInfo* _wiFiCallingCapabilityInfo;
	TUCTCapabilityInfo* _voLTECallingCapabilityInfo;
	TUCTCapabilityInfo* _thumperCallingCapabilityInfo;
	NSSet* _thumperCallingAllowedSecondaryDeviceIDs;
	NSString* _thumperCallingLocalDeviceID;
	NSDictionary* _relayCallingDisabledForDeviceID;
	NSString* _outgoingRelayCallerID;
	NSArray* _cloudCallingDevices;

}

@property (assign,getter=isTelephonyDevice,nonatomic) BOOL telephonyDevice;                                                          //@synthesize telephonyDevice=_telephonyDevice - In the implementation block
@property (assign,nonatomic) BOOL supportsCellularData;                                                                              //@synthesize supportsCellularData=_supportsCellularData - In the implementation block
@property (assign,nonatomic) BOOL supportsDisplayingTelephonyCalls;                                                                  //@synthesize supportsDisplayingTelephonyCalls=_supportsDisplayingTelephonyCalls - In the implementation block
@property (assign,nonatomic) BOOL supportsDisplayingFaceTimeAudioCalls;                                                              //@synthesize supportsDisplayingFaceTimeAudioCalls=_supportsDisplayingFaceTimeAudioCalls - In the implementation block
@property (assign,nonatomic) BOOL supportsDisplayingFaceTimeVideoCalls;                                                              //@synthesize supportsDisplayingFaceTimeVideoCalls=_supportsDisplayingFaceTimeVideoCalls - In the implementation block
@property (assign,getter=isFaceTimeAudioAvailable,nonatomic) BOOL faceTimeAudioAvailable;                                            //@synthesize faceTimeAudioAvailable=_faceTimeAudioAvailable - In the implementation block
@property (assign,getter=isFaceTimeVideoAvailable,nonatomic) BOOL faceTimeVideoAvailable;                                            //@synthesize faceTimeVideoAvailable=_faceTimeVideoAvailable - In the implementation block
@property (assign,getter=areCTCapabilitiesValid,nonatomic) BOOL ctCapabilitiesValid;                                                 //@synthesize ctCapabilitiesValid=_ctCapabilitiesValid - In the implementation block
@property (assign,getter=isCSCallingCurrentlyAvailable,nonatomic) BOOL csCallingCurrentlyAvailable;                                  //@synthesize csCallingCurrentlyAvailable=_csCallingCurrentlyAvailable - In the implementation block
@property (assign,getter=isWiFiCallingCurrentlyAvailable,nonatomic) BOOL wiFiCallingCurrentlyAvailable;                              //@synthesize wiFiCallingCurrentlyAvailable=_wiFiCallingCurrentlyAvailable - In the implementation block
@property (assign,getter=isWiFiEmergencyCallingAvailable,nonatomic) BOOL wiFiEmergencyCallingAvailable;                              //@synthesize wiFiEmergencyCallingAvailable=_wiFiEmergencyCallingAvailable - In the implementation block
@property (assign,getter=isWiFiEmergencyCallingSupported,nonatomic) BOOL wiFiEmergencyCallingSupported;                              //@synthesize wiFiEmergencyCallingSupported=_wiFiEmergencyCallingSupported - In the implementation block
@property (nonatomic,copy) TUCTCapabilityInfo * wiFiCallingCapabilityInfo;                                                           //@synthesize wiFiCallingCapabilityInfo=_wiFiCallingCapabilityInfo - In the implementation block
@property (assign,getter=isVoLTECallingCurrentlyAvailable,nonatomic) BOOL voLTECallingCurrentlyAvailable;                            //@synthesize voLTECallingCurrentlyAvailable=_voLTECallingCurrentlyAvailable - In the implementation block
@property (nonatomic,copy) TUCTCapabilityInfo * voLTECallingCapabilityInfo;                                                          //@synthesize voLTECallingCapabilityInfo=_voLTECallingCapabilityInfo - In the implementation block
@property (assign,nonatomic) BOOL accountsMatchForSecondaryCalling;                                                                  //@synthesize accountsMatchForSecondaryCalling=_accountsMatchForSecondaryCalling - In the implementation block
@property (nonatomic,readonly) BOOL accountsSupportSecondaryCalling; 
@property (assign,nonatomic) BOOL supportsThumperCalling;                                                                            //@synthesize supportsThumperCalling=_supportsThumperCalling - In the implementation block
@property (assign,getter=isThumperCallingCurrentlyAvailable,nonatomic) BOOL thumperCallingCurrentlyAvailable;                        //@synthesize thumperCallingCurrentlyAvailable=_thumperCallingCurrentlyAvailable - In the implementation block
@property (assign,getter=isThumperCallingAllowedForCurrentDevice,nonatomic) BOOL thumperCallingAllowedForCurrentDevice;              //@synthesize thumperCallingAllowedForCurrentDevice=_thumperCallingAllowedForCurrentDevice - In the implementation block
@property (assign,getter=isThumperCallingEnabled,nonatomic) BOOL thumperCallingEnabled;                                              //@synthesize thumperCallingEnabled=_thumperCallingEnabled - In the implementation block
@property (nonatomic,copy) TUCTCapabilityInfo * thumperCallingCapabilityInfo;                                                        //@synthesize thumperCallingCapabilityInfo=_thumperCallingCapabilityInfo - In the implementation block
@property (nonatomic,copy) NSSet * thumperCallingAllowedSecondaryDeviceIDs;                                                          //@synthesize thumperCallingAllowedSecondaryDeviceIDs=_thumperCallingAllowedSecondaryDeviceIDs - In the implementation block
@property (nonatomic,copy) NSString * thumperCallingLocalDeviceID;                                                                   //@synthesize thumperCallingLocalDeviceID=_thumperCallingLocalDeviceID - In the implementation block
@property (assign,nonatomic) BOOL supportsRelayCalling;                                                                              //@synthesize supportsRelayCalling=_supportsRelayCalling - In the implementation block
@property (assign,getter=isRelayCallingEnabled,nonatomic) BOOL relayCallingEnabled;                                                  //@synthesize relayCallingEnabled=_relayCallingEnabled - In the implementation block
@property (assign,nonatomic) int relayCallingAvailability;                                                                           //@synthesize relayCallingAvailability=_relayCallingAvailability - In the implementation block
@property (nonatomic,copy) NSDictionary * relayCallingDisabledForDeviceID;                                                           //@synthesize relayCallingDisabledForDeviceID=_relayCallingDisabledForDeviceID - In the implementation block
@property (nonatomic,copy) NSString * outgoingRelayCallerID;                                                                         //@synthesize outgoingRelayCallerID=_outgoingRelayCallerID - In the implementation block
@property (assign,nonatomic) BOOL supportsTelephonyRelayCalling;                                                                     //@synthesize supportsTelephonyRelayCalling=_supportsTelephonyRelayCalling - In the implementation block
@property (assign,nonatomic) BOOL supportsFaceTimeAudioRelayCalling;                                                                 //@synthesize supportsFaceTimeAudioRelayCalling=_supportsFaceTimeAudioRelayCalling - In the implementation block
@property (assign,nonatomic) BOOL supportsFaceTimeVideoRelayCalling;                                                                 //@synthesize supportsFaceTimeVideoRelayCalling=_supportsFaceTimeVideoRelayCalling - In the implementation block
@property (assign,nonatomic) BOOL supportsSimultaneousVoiceAndData;                                                                  //@synthesize supportsSimultaneousVoiceAndData=_supportsSimultaneousVoiceAndData - In the implementation block
@property (assign,nonatomic) BOOL pairedDeviceExists;                                                                                //@synthesize pairedDeviceExists=_pairedDeviceExists - In the implementation block
@property (nonatomic,copy) NSArray * cloudCallingDevices;                                                                            //@synthesize cloudCallingDevices=_cloudCallingDevices - In the implementation block
@property (nonatomic,readonly) TUCloudCallingDevice * defaultPairedDevice; 
@property (assign,getter=isEmergencyCallbackModeEnabled,nonatomic) BOOL emergencyCallbackModeEnabled;                                //@synthesize emergencyCallbackModeEnabled=_emergencyCallbackModeEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)allowedCapabilityInformationClasses;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isFaceTimeAudioAvailable;
-(BOOL)supportsDisplayingFaceTimeAudioCalls;
-(BOOL)isWiFiCallingCurrentlyAvailable;
-(BOOL)isThumperCallingCurrentlyAvailable;
-(BOOL)isWiFiEmergencyCallingAvailable;
-(BOOL)supportsDisplayingTelephonyCalls;
-(BOOL)supportsTelephonyRelayCalling;
-(BOOL)supportsFaceTimeAudioRelayCalling;
-(BOOL)supportsDisplayingFaceTimeVideoCalls;
-(BOOL)supportsFaceTimeVideoRelayCalling;
-(BOOL)isVoLTECallingCurrentlyAvailable;
-(BOOL)isCSCallingCurrentlyAvailable;
-(BOOL)isFaceTimeVideoAvailable;
-(BOOL)supportsSimultaneousVoiceAndData;
-(BOOL)areCTCapabilitiesValid;
-(TUCTCapabilityInfo *)wiFiCallingCapabilityInfo;
-(BOOL)isWiFiEmergencyCallingSupported;
-(TUCTCapabilityInfo *)voLTECallingCapabilityInfo;
-(BOOL)accountsMatchForSecondaryCalling;
-(NSArray *)cloudCallingDevices;
-(BOOL)isThumperCallingAllowedForCurrentDevice;
-(TUCTCapabilityInfo *)thumperCallingCapabilityInfo;
-(void)setThumperCallingEnabled:(BOOL)arg1 ;
-(NSSet *)thumperCallingAllowedSecondaryDeviceIDs;
-(BOOL)pairedDeviceExists;
-(NSDictionary *)relayCallingDisabledForDeviceID;
-(BOOL)isEmergencyCallbackModeEnabled;
-(int)relayCallingAvailability;
-(id)publiclyAccessibleCopyWithZone:(NSZone*)arg1 ;
-(id)publiclyAccessibleCopy;
-(NSString *)thumperCallingLocalDeviceID;
-(void)setTelephonyDevice:(BOOL)arg1 ;
-(void)setSupportsCellularData:(BOOL)arg1 ;
-(void)setSupportsDisplayingTelephonyCalls:(BOOL)arg1 ;
-(void)setSupportsDisplayingFaceTimeAudioCalls:(BOOL)arg1 ;
-(void)setSupportsDisplayingFaceTimeVideoCalls:(BOOL)arg1 ;
-(void)setFaceTimeAudioAvailable:(BOOL)arg1 ;
-(void)setFaceTimeVideoAvailable:(BOOL)arg1 ;
-(void)setCtCapabilitiesValid:(BOOL)arg1 ;
-(void)setCsCallingCurrentlyAvailable:(BOOL)arg1 ;
-(void)setWiFiCallingCurrentlyAvailable:(BOOL)arg1 ;
-(void)setWiFiEmergencyCallingAvailable:(BOOL)arg1 ;
-(void)setWiFiEmergencyCallingSupported:(BOOL)arg1 ;
-(void)setWiFiCallingCapabilityInfo:(TUCTCapabilityInfo *)arg1 ;
-(void)setVoLTECallingCurrentlyAvailable:(BOOL)arg1 ;
-(void)setVoLTECallingCapabilityInfo:(TUCTCapabilityInfo *)arg1 ;
-(void)setSupportsThumperCalling:(BOOL)arg1 ;
-(void)setThumperCallingCurrentlyAvailable:(BOOL)arg1 ;
-(void)setThumperCallingAllowedForCurrentDevice:(BOOL)arg1 ;
-(void)setThumperCallingCapabilityInfo:(TUCTCapabilityInfo *)arg1 ;
-(void)setThumperCallingAllowedSecondaryDeviceIDs:(NSSet *)arg1 ;
-(void)setThumperCallingLocalDeviceID:(NSString *)arg1 ;
-(void)setSupportsRelayCalling:(BOOL)arg1 ;
-(void)setAccountsMatchForSecondaryCalling:(BOOL)arg1 ;
-(void)setRelayCallingAvailability:(int)arg1 ;
-(void)setRelayCallingDisabledForDeviceID:(NSDictionary *)arg1 ;
-(void)setSupportsTelephonyRelayCalling:(BOOL)arg1 ;
-(void)setSupportsFaceTimeAudioRelayCalling:(BOOL)arg1 ;
-(void)setSupportsFaceTimeVideoRelayCalling:(BOOL)arg1 ;
-(void)setOutgoingRelayCallerID:(NSString *)arg1 ;
-(void)setSupportsSimultaneousVoiceAndData:(BOOL)arg1 ;
-(void)setPairedDeviceExists:(BOOL)arg1 ;
-(void)setCloudCallingDevices:(NSArray *)arg1 ;
-(void)setEmergencyCallbackModeEnabled:(BOOL)arg1 ;
-(id)deviceIDForPhoneNumber:(id)arg1 ;
-(BOOL)supportsCellularData;
-(BOOL)accountsSupportSecondaryCalling;
-(void)setRelayCallingEnabled:(BOOL)arg1 ;
-(BOOL)isRelayCallingEnabled;
-(BOOL)supportsRelayCalling;
-(BOOL)supportsThumperCalling;
-(NSString *)outgoingRelayCallerID;
-(BOOL)isTelephonyDevice;
-(BOOL)isThumperCallingEnabled;
-(TUCloudCallingDevice *)defaultPairedDevice;
@end
