/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/MNLocationRecorder.h>

@protocol MNTraceRecorderBackgroundGuard;
@class MNTrace, NSString, NSDate, NSMapTable, GEOComposedRouteLeg;

@interface MNTraceRecorder : NSObject <MNLocationRecorder> {

	MNTrace* _trace;
	NSString* _tracePath;
	NSDate* _recordingStartTime;
	BOOL _corrupted;
	BOOL _closed;
	sqlite3_stmtRef _updateStart;
	sqlite3_stmtRef _updateEnd;
	sqlite3_stmtRef _updateActiveTransportType;
	sqlite3_stmtRef _debugSettingInsert;
	sqlite3_stmtRef _audioSettingInsert;
	sqlite3_stmtRef _stylesheetInsert;
	sqlite3_stmtRef _locationInsert;
	sqlite3_stmtRef _locationErrorInsert;
	sqlite3_stmtRef _matchInfoInsert;
	sqlite3_stmtRef _routeRequestInsert;
	sqlite3_stmtRef _routeResponseUpdate;
	sqlite3_stmtRef _routeResponseErrorInsert;
	sqlite3_stmtRef _routeSelectionInsert;
	sqlite3_stmtRef _routeSelectionUpdate;
	sqlite3_stmtRef _likelyRouteInsert;
	sqlite3_stmtRef _etaTrafficUpdateRequestInsert;
	sqlite3_stmtRef _etaTrafficUpdateResponseInsert;
	sqlite3_stmtRef _etaTrafficUpdateResponseErrorInsert;
	sqlite3_stmtRef _vehicleSpeedInsert;
	sqlite3_stmtRef _vehicleHeadingInsert;
	sqlite3_stmtRef _motionDataInsert;
	sqlite3_stmtRef _compassHeadingInsert;
	sqlite3_stmtRef _routeLegGuidanceInsert;
	sqlite3_stmtRef _routeLegEndGuidanceUpdate;
	sqlite3_stmtRef _guidanceEventInsert;
	sqlite3_stmtRef _significantEventInsert;
	NSMapTable* _routeRequests;
	unsigned long long _routeRequestCount;
	unsigned long long _routeSelectionCount;
	unsigned long long _etaTrafficUpdateCount;
	GEOComposedRouteLeg* _currentLeg;
	/*^block*/id _timeSinceRecordingBeganHandler;
	/*^block*/id _errorHandler;
	BOOL _copyToCrashReporterDirectory;
	BOOL _lastPauseSpokenAudio;
	long long _lastVolumeSetting;
	id<MNTraceRecorderBackgroundGuard> _backgroundGuardDelegate;

}

@property (nonatomic,readonly) MNTrace * trace;                                                              //@synthesize trace=_trace - In the implementation block
@property (nonatomic,readonly) NSDate * recordingStartTime;                                                  //@synthesize recordingStartTime=_recordingStartTime - In the implementation block
@property (nonatomic,copy) id timeSinceRecordingBeganHandler;                                                //@synthesize timeSinceRecordingBeganHandler=_timeSinceRecordingBeganHandler - In the implementation block
@property (assign,nonatomic,__weak) id<MNTraceRecorderBackgroundGuard> backgroundGuardDelegate;              //@synthesize backgroundGuardDelegate=_backgroundGuardDelegate - In the implementation block
@property (assign,nonatomic) BOOL copyToCrashReporterDirectory;                                              //@synthesize copyToCrashReporterDirectory=_copyToCrashReporterDirectory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_prepareStatements;
-(void)recordVehicleHeading:(double)arg1 timestamp:(id)arg2 ;
-(void)recordVehicleSpeed:(double)arg1 timestamp:(id)arg2 ;
-(void)recordLocationUpdateResume;
-(void)recordLocationUpdatePause;
-(void)recordCompassHeading:(double)arg1 magneticHeading:(double)arg2 accuracy:(double)arg3 timestamp:(id)arg4 ;
-(void)recordError:(id)arg1 ;
-(void)recordLocation:(id)arg1 correctedLocation:(id)arg2 ;
-(void)recordInitialCourse:(double)arg1 ;
-(void)beginTransaction;
-(void)endTransaction;
-(id)initWithPath:(id)arg1 clMapMatching:(BOOL)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)_dispatchWrite:(/*^block*/id)arg1 ;
-(void)_logSqliteErrorWithResult:(int)arg1 file:(const char*)arg2 line:(int)arg3 ;
-(void)_serializationError:(id)arg1 ;
-(void)_openExistingTrace;
-(void)_createTrace;
-(void)_initializeTraceDB;
-(void)setOriginSearchResultData:(id)arg1 ;
-(void)setDestinationSearchResultData:(id)arg1 ;
-(void)_closeTraceDB;
-(void)startWritingTraceToFile;
-(void)startWritingTraceToFileAtPath:(id)arg1 ;
-(void)saveTrace;
-(void)cancelTrace;
-(void)saveTraceSynchronously;
-(void)saveTraceWithHandler:(/*^block*/id)arg1 ;
-(double)timeSinceRecordingBegan;
-(void)recordDebugSetting:(id)arg1 settingValue:(id)arg2 ;
-(void)recordAudioSetting:(BOOL)arg1 volume:(long long)arg2 ;
-(void)recordStylesheet:(id)arg1 data:(id)arg2 ;
-(void)_recordLocationMatchInfoOnWriteQueue:(id)arg1 forLocationID:(int)arg2 ;
-(void)_recordLocationEvent:(long long)arg1 coordinate:(CLLocationCoordinate2D)arg2 rawCoordinate:(CLLocationCoordinate2D)arg3 timestamp:(double)arg4 horizontalAccuracy:(double)arg5 verticalAccuracy:(double)arg6 altitude:(double)arg7 speed:(double)arg8 speedAccuracy:(double)arg9 course:(double)arg10 rawCourse:(double)arg11 type:(int)arg12 courseAccuracy:(double)arg13 correctedCoordinate:(CLLocationCoordinate2D)arg14 correctedCourse:(double)arg15 matchType:(int)arg16 activeTransportType:(int)arg17 matchInfo:(id)arg18 correctedLocation:(id)arg19 ;
-(void)_recordLocationEvent:(long long)arg1 location:(id)arg2 correctedLocation:(id)arg3 ;
-(void)recordSimulatedCoordinate:(CLLocationCoordinate2D)arg1 course:(double)arg2 altitude:(double)arg3 speed:(double)arg4 timestamp:(double)arg5 activeTransportType:(int)arg6 ;
-(void)setRouteGenius:(BOOL)arg1 ;
-(void)resetLocationsForSimulation;
-(void)recordActiveTransportType:(int)arg1 timestamp:(double)arg2 ;
-(void)recordGuidanceWasStartedForRouteLeg:(id)arg1 timestamp:(double)arg2 ;
-(void)recordGuidanceWasStartedForRouteLeg:(id)arg1 ;
-(void)recordGuidanceWasEndedAtTime:(double)arg1 ;
-(void)recordGuidanceWasEnded;
-(void)recordGuidanceEventForEventType:(long long)arg1 stage:(long long)arg2 description:(id)arg3 ;
-(void)resetRouteSelections;
-(void)recordRouteRequest:(id)arg1 waypoints:(id)arg2 ;
-(void)recordRouteResponse:(id)arg1 forRouteRequest:(id)arg2 ;
-(void)recordRouteError:(id)arg1 forRouteRequest:(id)arg2 ;
-(void)recordRouteError:(id)arg1 ;
-(void)recordRouteSelected:(id)arg1 routeIndex:(unsigned long long)arg2 ;
-(void)recordRouteDeselected;
-(void)recordLikelyRouteRequest:(id)arg1 response:(id)arg2 waypoints:(id)arg3 ;
-(void)recordETATrafficUpdateRequest:(id)arg1 forDestination:(id)arg2 ;
-(void)recordETATrafficUpdateRequest:(id)arg1 ;
-(void)recordETATrafficUpdateResponse:(id)arg1 ;
-(void)recordETATrafficUpdateError:(id)arg1 ;
-(void)recordMotionUpdate:(unsigned long long)arg1 exitType:(unsigned long long)arg2 confidence:(unsigned long long)arg3 ;
-(void)_logError:(id)arg1 resultCode:(int)arg2 ;
-(void)_copyTraceToCrashReporter;
-(void)recordSignificantEvent:(long long)arg1 withData:(id)arg2 ;
-(MNTrace *)trace;
-(NSDate *)recordingStartTime;
-(id)timeSinceRecordingBeganHandler;
-(void)setTimeSinceRecordingBeganHandler:(id)arg1 ;
-(id<MNTraceRecorderBackgroundGuard>)backgroundGuardDelegate;
-(void)setBackgroundGuardDelegate:(id<MNTraceRecorderBackgroundGuard>)arg1 ;
-(BOOL)copyToCrashReporterDirectory;
-(void)setCopyToCrashReporterDirectory:(BOOL)arg1 ;
@end

