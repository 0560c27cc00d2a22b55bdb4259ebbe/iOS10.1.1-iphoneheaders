/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLXPCListenerOperatorComposition, PLNSNotificationOperatorComposition, PLXPCResponderOperatorComposition, NSDate;

@interface PLXPCAgent : PLAgent {

	PLXPCListenerOperatorComposition* _testMarkerXPCListener;
	PLXPCListenerOperatorComposition* _UIKitKeyboardXPCListener;
	PLXPCListenerOperatorComposition* _UIKitActivityXPCListener;
	PLXPCListenerOperatorComposition* _UIKitAlertXPCListener;
	PLXPCListenerOperatorComposition* _DASyncStartXPCListener;
	PLXPCListenerOperatorComposition* _DACalendarItemsDownloadedXPCListener;
	PLXPCListenerOperatorComposition* _DACalendarItemsUploadedXPCListener;
	PLXPCListenerOperatorComposition* _MailFetchXPCListener;
	PLXPCListenerOperatorComposition* _NavdXPCListener;
	PLXPCListenerOperatorComposition* _MediaServerdRTCXPCListener;
	PLXPCListenerOperatorComposition* _SafariFetcherXPCListener;
	PLXPCListenerOperatorComposition* _SafariViewServiceXPCListener;
	PLXPCListenerOperatorComposition* _SiriXPCListener;
	PLNSNotificationOperatorComposition* _MemoryWarningListener;
	PLXPCListenerOperatorComposition* _AccessoriesXPCListener;
	PLXPCListenerOperatorComposition* _AppAccessoriesXPCListener;
	PLXPCListenerOperatorComposition* _AirDropXPCListener;
	PLXPCListenerOperatorComposition* _SymptomsNetworkAdvisory;
	PLXPCListenerOperatorComposition* _InCallServiceXPCListener;
	PLXPCListenerOperatorComposition* _WebAppXPCListener;
	PLXPCListenerOperatorComposition* _BackgroundTransfer;
	PLXPCListenerOperatorComposition* _telNotificationXPCListener;
	PLXPCListenerOperatorComposition* _SpotlightXPCListener;
	PLXPCListenerOperatorComposition* _siriFalseAlarm;
	PLXPCResponderOperatorComposition* _entryRequestResponder;
	NSDate* _spotlightAgentLastFlushDate;
	long long _spotlightAgentIndexOperationCount;
	PLXPCListenerOperatorComposition* _PeekXPCListener;
	PLXPCListenerOperatorComposition* _PopXPCListener;
	PLXPCListenerOperatorComposition* _ThermalLevelXPCListener;
	long long _peekpopProcessID;
	NSDate* _peekStartTime;
	long long _peekCount;
	long long _popCount;
	double _peekDuration;

}

@property (retain) PLXPCListenerOperatorComposition * testMarkerXPCListener;                                                        //@synthesize testMarkerXPCListener=_testMarkerXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * UIKitKeyboardXPCListener;                                                     //@synthesize UIKitKeyboardXPCListener=_UIKitKeyboardXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * UIKitActivityXPCListener;                                                     //@synthesize UIKitActivityXPCListener=_UIKitActivityXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * UIKitAlertXPCListener;                                                        //@synthesize UIKitAlertXPCListener=_UIKitAlertXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * DASyncStartXPCListener;                                                       //@synthesize DASyncStartXPCListener=_DASyncStartXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * DACalendarItemsDownloadedXPCListener;                                         //@synthesize DACalendarItemsDownloadedXPCListener=_DACalendarItemsDownloadedXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * DACalendarItemsUploadedXPCListener;                                           //@synthesize DACalendarItemsUploadedXPCListener=_DACalendarItemsUploadedXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * MailFetchXPCListener;                                                         //@synthesize MailFetchXPCListener=_MailFetchXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * NavdXPCListener;                                                              //@synthesize NavdXPCListener=_NavdXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * MediaServerdRTCXPCListener;                                                   //@synthesize MediaServerdRTCXPCListener=_MediaServerdRTCXPCListener - In the implementation block
@property (setter=afariFetcherXPCListener,retain) PLXPCListenerOperatorComposition * SafariFetcherXPCListener;                      //@synthesize SafariFetcherXPCListener=_SafariFetcherXPCListener - In the implementation block
@property (setter=afariViewServiceXPCListener,retain) PLXPCListenerOperatorComposition * SafariViewServiceXPCListener;              //@synthesize SafariViewServiceXPCListener=_SafariViewServiceXPCListener - In the implementation block
@property (setter=iriXPCListener,retain) PLXPCListenerOperatorComposition * SiriXPCListener;                                        //@synthesize SiriXPCListener=_SiriXPCListener - In the implementation block
@property (retain) PLNSNotificationOperatorComposition * MemoryWarningListener;                                                     //@synthesize MemoryWarningListener=_MemoryWarningListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * AccessoriesXPCListener;                                                       //@synthesize AccessoriesXPCListener=_AccessoriesXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * AppAccessoriesXPCListener;                                                    //@synthesize AppAccessoriesXPCListener=_AppAccessoriesXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * AirDropXPCListener;                                                           //@synthesize AirDropXPCListener=_AirDropXPCListener - In the implementation block
@property (setter=ymptomsNetworkAdvisory,retain) PLXPCListenerOperatorComposition * SymptomsNetworkAdvisory;                        //@synthesize SymptomsNetworkAdvisory=_SymptomsNetworkAdvisory - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * InCallServiceXPCListener;                                                     //@synthesize InCallServiceXPCListener=_InCallServiceXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * WebAppXPCListener;                                                            //@synthesize WebAppXPCListener=_WebAppXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * BackgroundTransfer;                                                           //@synthesize BackgroundTransfer=_BackgroundTransfer - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * telNotificationXPCListener;                                                   //@synthesize telNotificationXPCListener=_telNotificationXPCListener - In the implementation block
@property (setter=potlightXPCListener,retain) PLXPCListenerOperatorComposition * SpotlightXPCListener;                              //@synthesize SpotlightXPCListener=_SpotlightXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * siriFalseAlarm;                                                               //@synthesize siriFalseAlarm=_siriFalseAlarm - In the implementation block
@property (retain) PLXPCResponderOperatorComposition * entryRequestResponder;                                                       //@synthesize entryRequestResponder=_entryRequestResponder - In the implementation block
@property (retain) NSDate * spotlightAgentLastFlushDate;                                                                            //@synthesize spotlightAgentLastFlushDate=_spotlightAgentLastFlushDate - In the implementation block
@property (assign) long long spotlightAgentIndexOperationCount;                                                                     //@synthesize spotlightAgentIndexOperationCount=_spotlightAgentIndexOperationCount - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * PeekXPCListener;                                                              //@synthesize PeekXPCListener=_PeekXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * PopXPCListener;                                                               //@synthesize PopXPCListener=_PopXPCListener - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * ThermalLevelXPCListener;                                                      //@synthesize ThermalLevelXPCListener=_ThermalLevelXPCListener - In the implementation block
@property (assign) long long peekpopProcessID;                                                                                      //@synthesize peekpopProcessID=_peekpopProcessID - In the implementation block
@property (retain) NSDate * peekStartTime;                                                                                          //@synthesize peekStartTime=_peekStartTime - In the implementation block
@property (assign) long long peekCount;                                                                                             //@synthesize peekCount=_peekCount - In the implementation block
@property (assign) long long popCount;                                                                                              //@synthesize popCount=_popCount - In the implementation block
@property (assign) double peekDuration;                                                                                             //@synthesize peekDuration=_peekDuration - In the implementation block
+(void)load;
+(id)entryAggregateDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventPointDefinitionTestMarkers;
+(id)entryEventPointDefinitionDASyncStart;
+(id)entryEventPointDefinitionDACalendarItemsDownloaded;
+(id)entryEventPointDefinitionDACalendarItemsUploaded;
+(id)entryEventPointDefinitionMailFetch;
+(id)entryEventPointDefinitionJetsam;
+(id)entryEventPointDefinitionsSymptomsNetworkAdvisory;
+(id)entryEventPointDefinitionsBackgroundTransfer;
+(id)entryEventPointDefinitionNavd;
+(id)entryEventForwardDefinitionUIKitKeyboard;
+(id)entryEventForwardDefinitionUIKitActivity;
+(id)entryEventForwardDefinitionUIKitAlert;
+(id)entryEventForwardDefinitionSafariFetcher;
+(id)entryEventForwardDefinitionAccessory;
+(id)entryEventForwardDefinitionAppAccessory;
+(id)entryEventForwardDefinitionAirDrop;
+(id)entryEventForwardDefinitionSiri;
+(id)entryEventForwardDefinitionInCallService;
+(id)entryEventForwardDefinitionWebApp;
+(id)entryEventForwardDefinitionThermalLevel;
+(id)entryEventBackwardDefinitionSpotlight;
+(id)entryEventBackwardDefinitionSiriFalseAlarm;
+(id)entryEventBackwardDefinitionPeekPop;
+(id)defaults;
-(id)init;
-(void)log;
-(void)initOperatorDependancies;
-(void)logEventPointJetsam:(unsigned long long)arg1 ;
-(void)logEventPointTestMarker:(id)arg1 ;
-(void)setTestMarkerXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventForwardUIKitKeyboard:(id)arg1 ;
-(void)setUIKitKeyboardXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventForwardUIKitActivity:(id)arg1 ;
-(void)setUIKitActivityXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventForwardUIKitAlert:(id)arg1 ;
-(void)setUIKitAlertXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventPointDASyncStart:(id)arg1 ;
-(void)setDASyncStartXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventPointDACalendarItemsDownloaded:(id)arg1 ;
-(void)setDACalendarItemsDownloadedXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventPointDACalendarItemsUploaded:(id)arg1 ;
-(void)setDACalendarItemsUploadedXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventPointMailFetch:(id)arg1 ;
-(void)setMailFetchXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventPointNavd:(id)arg1 ;
-(void)setNavdXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventBackwardNameMediaServerdRTC:(id)arg1 ;
-(void)setMediaServerdRTCXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventForwardSafariFetcherStatus:(id)arg1 ;
-(void)setSafariFetcherXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)setSafariViewServiceXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventForwardAccessory:(id)arg1 ;
-(void)setAccessoriesXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventForwardAppAccessory:(id)arg1 ;
-(void)setAppAccessoriesXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventForwardAirDrop:(id)arg1 ;
-(void)setAirDropXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventForwardSiri:(id)arg1 ;
-(void)setSiriXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventPointNetworkSymptomsAdviosry:(id)arg1 ;
-(void)setSymptomsNetworkAdvisory:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventPointBackgroundTransfer:(id)arg1 ;
-(void)setBackgroundTransfer:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventForwardInCallService:(id)arg1 ;
-(void)setInCallServiceXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventForwardWebApp:(id)arg1 ;
-(void)setWebAppXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(id)entryRequestResponseForPayload:(id)arg1 ;
-(void)setEntryRequestResponder:(PLXPCResponderOperatorComposition *)arg1 ;
-(void)logEventAggregateTelNotification:(id)arg1 ;
-(void)setTelNotificationXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventBackwardNameSpotlight:(id)arg1 ;
-(void)setSpotlightXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventBackwardSiriFalseAlarm:(id)arg1 ;
-(void)setSiriFalseAlarm:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventBackwardNamePeek:(id)arg1 ;
-(void)setPeekXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventBackwardNamePop:(id)arg1 ;
-(void)setPopXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)logEventForwardThermalLevel:(id)arg1 ;
-(void)setThermalLevelXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)createAccessoryAccountingEventWithName:(id)arg1 isStartEvent:(BOOL)arg2 ;
-(void)createAirDropAccountingEvent:(id)arg1 ;
-(void)createInCallServiceAccountingEvent:(id)arg1 ;
-(NSDate *)spotlightAgentLastFlushDate;
-(void)setSpotlightAgentLastFlushDate:(NSDate *)arg1 ;
-(void)setSpotlightAgentIndexOperationCount:(long long)arg1 ;
-(long long)spotlightAgentIndexOperationCount;
-(long long)popCount;
-(void)setPopCount:(long long)arg1 ;
-(NSDate *)peekStartTime;
-(void)setPeekStartTime:(NSDate *)arg1 ;
-(void)setPeekpopProcessID:(long long)arg1 ;
-(void)setPeekCount:(long long)arg1 ;
-(void)setPeekDuration:(double)arg1 ;
-(long long)peekpopProcessID;
-(long long)peekCount;
-(double)peekDuration;
-(PLXPCListenerOperatorComposition *)testMarkerXPCListener;
-(PLXPCListenerOperatorComposition *)UIKitKeyboardXPCListener;
-(PLXPCListenerOperatorComposition *)UIKitActivityXPCListener;
-(PLXPCListenerOperatorComposition *)UIKitAlertXPCListener;
-(PLXPCListenerOperatorComposition *)DASyncStartXPCListener;
-(PLXPCListenerOperatorComposition *)DACalendarItemsDownloadedXPCListener;
-(PLXPCListenerOperatorComposition *)DACalendarItemsUploadedXPCListener;
-(PLXPCListenerOperatorComposition *)MailFetchXPCListener;
-(PLXPCListenerOperatorComposition *)NavdXPCListener;
-(PLXPCListenerOperatorComposition *)MediaServerdRTCXPCListener;
-(PLXPCListenerOperatorComposition *)SafariFetcherXPCListener;
-(PLXPCListenerOperatorComposition *)SafariViewServiceXPCListener;
-(PLXPCListenerOperatorComposition *)SiriXPCListener;
-(PLNSNotificationOperatorComposition *)MemoryWarningListener;
-(void)setMemoryWarningListener:(PLNSNotificationOperatorComposition *)arg1 ;
-(PLXPCListenerOperatorComposition *)AccessoriesXPCListener;
-(PLXPCListenerOperatorComposition *)AppAccessoriesXPCListener;
-(PLXPCListenerOperatorComposition *)AirDropXPCListener;
-(PLXPCListenerOperatorComposition *)SymptomsNetworkAdvisory;
-(PLXPCListenerOperatorComposition *)InCallServiceXPCListener;
-(PLXPCListenerOperatorComposition *)WebAppXPCListener;
-(PLXPCListenerOperatorComposition *)BackgroundTransfer;
-(PLXPCListenerOperatorComposition *)telNotificationXPCListener;
-(PLXPCListenerOperatorComposition *)SpotlightXPCListener;
-(PLXPCListenerOperatorComposition *)siriFalseAlarm;
-(PLXPCResponderOperatorComposition *)entryRequestResponder;
-(PLXPCListenerOperatorComposition *)PeekXPCListener;
-(PLXPCListenerOperatorComposition *)PopXPCListener;
-(PLXPCListenerOperatorComposition *)ThermalLevelXPCListener;
@end

