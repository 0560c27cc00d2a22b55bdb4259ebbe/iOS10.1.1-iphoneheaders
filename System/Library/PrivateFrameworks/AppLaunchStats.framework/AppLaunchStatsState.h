/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppLaunchStats/AppLaunchStats-Structs.h>
#import <libobjc.A.dylib/DuetLoggerProtocol.h>
#import <libobjc.A.dylib/DuetSaveAndRestore.h>
#import <libobjc.A.dylib/PCInterfaceMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, AppLaunchStatsSaveAndRestore, NSDate, NSMutableDictionary, NSMutableArray, APLSBinnedGlanceHistory, NSString;

@interface AppLaunchStatsState : NSObject <DuetLoggerProtocol, DuetSaveAndRestore, PCInterfaceMonitorDelegate> {

	BOOL isDeviceInCall;
	BOOL isDeviceUnderThermalPressure;
	BOOL isDeviceInGoodCellularCondition;
	BOOL isDataResourceAvailable;
	BOOL isFetchPowerResourceAvailable;
	BOOL isFetchPushPowerResourceAvailable;
	BOOL isDevicePhoneType;
	BOOL doUniformBudget;
	BOOL isBatteryChargerConnected;
	long long wifiQuality;
	long long cellQuality;
	BOOL wifiHot;
	BOOL cellHot;
	NSObject*<OS_dispatch_queue> stateQueue;
	int thermalStatusToken;
	long long globalDataBudgetCap;
	long long globalPowerBudgetCap;
	long long BGDataBudgetCap;
	AppLaunchStatsSaveAndRestore* saveAndRestoreContext;
	NSDate* startTimeStamp;
	NSDate* startTimeStampOOB;
	NSMutableDictionary* appsAliveInLSTDict;
	NSMutableArray* fireDates;
	NSMutableArray* cacheAppsforFullDebug;
	NSMutableArray* dailyLaunchArrays;
	NSMutableArray* recentLaunchArrays;
	NSMutableArray* weeklyLaunchArrays;
	APLSBinnedGlanceHistory* glanceLaunchLikelihood;
	NSMutableArray* appForecastArray;
	NSMutableArray* dataForecastArray;
	unsigned long long appForecastQuality;
	unsigned long long dataForecastQuality;
	NSMutableArray* powerFetchForecastArray;
	NSMutableArray* powerPushForecastArray;
	NSMutableArray* dailyAppForecastSlots;
	NSDate* firstWakeupDate;
	long long endofdayDataBudget;
	long long endofdayBGDataBudget;
	long long endofdayNDISCDataBudget;
	/*^block*/id clientCallBack;
	BOOL _enableLiveListCheck;
	BOOL _enableBlackListCheck;
	BOOL _enableOpportunisticFetchCheck;
	BOOL _enableForeGroundAppCheck;
	BOOL _enableBudgetCheck;
	float _globalNonactivePWPC;
	float _globalFetchPWPC;
	float _globalPushPWPC;
	float _dataWifiMultiplier;
	float _dataCellMultiplier;
	long long globalDataCarryCap;
	long long BGDataCarryCap;
	APLSBinnedGlanceHistory* _binnedLaunches;
	long long _globalMinSlotData;
	long long _BGMinSlotData;
	long long _globalTimeThreshold;

}

@property (assign) BOOL isDeviceInCall; 
@property (assign) BOOL isDeviceUnderThermalPressure; 
@property (assign) BOOL isDataResourceAvailable; 
@property (assign) BOOL isFetchPowerResourceAvailable; 
@property (assign) BOOL isFetchPushPowerResourceAvailable; 
@property (assign) BOOL doUniformBudget; 
@property (assign) BOOL isBatteryChargerConnected; 
@property (assign) long long wifiQuality; 
@property (assign) long long cellQuality; 
@property (assign) BOOL wifiHot; 
@property (assign) BOOL cellHot; 
@property (retain) NSMutableDictionary * appsAliveInLSTDict; 
@property (retain) NSMutableArray * fireDates; 
@property (nonatomic,readonly) NSMutableArray * cacheAppsforFullDebug; 
@property (nonatomic,retain) NSMutableArray * dailyLaunchArrays; 
@property (nonatomic,retain) NSMutableArray * recentLaunchArrays; 
@property (nonatomic,retain) NSMutableArray * weeklyLaunchArrays; 
@property (nonatomic,retain) APLSBinnedGlanceHistory * binnedLaunches;              //@synthesize binnedLaunches=_binnedLaunches - In the implementation block
@property (nonatomic,retain) NSMutableArray * appForecastArray; 
@property (nonatomic,retain) NSMutableArray * dataForecastArray; 
@property (assign,nonatomic) unsigned long long appForecastQuality; 
@property (assign,nonatomic) unsigned long long dataForecastQuality; 
@property (nonatomic,retain) NSMutableArray * powerFetchForecastArray; 
@property (nonatomic,retain) NSMutableArray * powerPushForecastArray; 
@property (nonatomic,retain) NSMutableArray * dailyAppForecastSlots; 
@property (retain) NSDate * firstWakeupDate; 
@property (nonatomic,readonly) long long globalMinSlotData;                         //@synthesize globalMinSlotData=_globalMinSlotData - In the implementation block
@property (nonatomic,readonly) long long globalDataCarryCap; 
@property (nonatomic,readonly) long long globalDataBudgetCap; 
@property (nonatomic,readonly) long long BGDataBudgetCap; 
@property (nonatomic,readonly) long long BGMinSlotData;                             //@synthesize BGMinSlotData=_BGMinSlotData - In the implementation block
@property (nonatomic,readonly) long long BGDataCarryCap; 
@property (nonatomic,readonly) long long globalTimeThreshold;                       //@synthesize globalTimeThreshold=_globalTimeThreshold - In the implementation block
@property (nonatomic,readonly) float globalNonactivePWPC;                           //@synthesize globalNonactivePWPC=_globalNonactivePWPC - In the implementation block
@property (nonatomic,readonly) float globalFetchPWPC;                               //@synthesize globalFetchPWPC=_globalFetchPWPC - In the implementation block
@property (nonatomic,readonly) float globalPushPWPC;                                //@synthesize globalPushPWPC=_globalPushPWPC - In the implementation block
@property (nonatomic,readonly) float dataWifiMultiplier;                            //@synthesize dataWifiMultiplier=_dataWifiMultiplier - In the implementation block
@property (nonatomic,readonly) float dataCellMultiplier;                            //@synthesize dataCellMultiplier=_dataCellMultiplier - In the implementation block
@property (assign,nonatomic) BOOL enableLiveListCheck;                              //@synthesize enableLiveListCheck=_enableLiveListCheck - In the implementation block
@property (assign,nonatomic) BOOL enableBlackListCheck;                             //@synthesize enableBlackListCheck=_enableBlackListCheck - In the implementation block
@property (nonatomic,readonly) BOOL enableOpportunisticFetchCheck;                  //@synthesize enableOpportunisticFetchCheck=_enableOpportunisticFetchCheck - In the implementation block
@property (nonatomic,readonly) BOOL enableForeGroundAppCheck;                       //@synthesize enableForeGroundAppCheck=_enableForeGroundAppCheck - In the implementation block
@property (nonatomic,readonly) BOOL enableBudgetCheck;                              //@synthesize enableBudgetCheck=_enableBudgetCheck - In the implementation block
@property (assign) long long endofdayDataBudget; 
@property (assign) long long endofdayBGDataBudget; 
@property (assign) long long endofdayNDISCDataBudget; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)save:(id)arg1 ;
-(void)logAll:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)logLight:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(int)reloadConfiguration;
-(void)restore:(id)arg1 ;
-(NSMutableArray *)recentLaunchArrays;
-(NSMutableArray *)dailyLaunchArrays;
-(NSMutableArray *)weeklyLaunchArrays;
-(void)aggregateAllLaunchTypes;
-(void)setDataForecastQuality:(unsigned long long)arg1 ;
-(NSMutableArray *)dataForecastArray;
-(unsigned long long)dataForecastQuality;
-(NSMutableArray *)appForecastArray;
-(void)setAppForecastQuality:(unsigned long long)arg1 ;
-(unsigned long long)appForecastQuality;
-(NSMutableArray *)powerFetchForecastArray;
-(NSMutableArray *)powerPushForecastArray;
-(void)resetAppsAliveInLSTList;
-(void)updateAppsAliveInLSTList:(id)arg1 ;
-(NSMutableArray *)fireDates;
-(void)setFireDates:(NSMutableArray *)arg1 ;
-(NSMutableArray *)dailyAppForecastSlots;
-(void)setFirstWakeupDate:(NSDate *)arg1 ;
-(NSDate *)firstWakeupDate;
-(void)addPredictedSlotsToDailyOutOfBandQueue:(id)arg1 ;
-(id)glancesLaunchedBetween:(id)arg1 and:(id)arg2 ;
-(void)combineGlanceLaunchProbabilities:(id)arg1 withAppLaunches:(id)arg2 ;
-(int)addToOutOfBandAppList:(long long)arg1 withCacheDict:(id)arg2 withAppList:(id)arg3 ;
-(BOOL)getInCallStatus;
-(void)setClientblock:(/*^block*/id)arg1 ;
-(BOOL)inMemoryPressure;
-(void)addPredictedSlotsToDailyAppForecastQueue:(id)arg1 ;
-(void)updateHistoricalGlanceData;
-(long long)calculateDailyDataBudgetFor:(const char*)arg1 ;
-(long long)calculateSlotMinDataBudget:(const char*)arg1 ;
-(void)convertPCdistributionToInt:(id)arg1 fetchOver:(float)arg2 array:(id)arg3 dailyInt:(int)arg4 ;
-(BOOL)getAppsAliveInLSTList:(id)arg1 ;
-(BOOL)isOutOfBand;
-(id)getOutOfBandAppList;
-(BOOL)hasResourcesAvailable:(BOOL)arg1 forTriggerType:(int)arg2 ;
-(id)deniedReasonForPush;
-(BOOL)isChargeOnWifiOrCellOn;
-(BOOL)isDeviceInCall;
-(void)setIsDeviceInCall:(BOOL)arg1 ;
-(BOOL)isDeviceUnderThermalPressure;
-(void)setIsDeviceUnderThermalPressure:(BOOL)arg1 ;
-(BOOL)isDataResourceAvailable;
-(void)setIsDataResourceAvailable:(BOOL)arg1 ;
-(BOOL)isFetchPowerResourceAvailable;
-(void)setIsFetchPowerResourceAvailable:(BOOL)arg1 ;
-(BOOL)isFetchPushPowerResourceAvailable;
-(void)setIsFetchPushPowerResourceAvailable:(BOOL)arg1 ;
-(BOOL)doUniformBudget;
-(void)setDoUniformBudget:(BOOL)arg1 ;
-(BOOL)isBatteryChargerConnected;
-(void)setIsBatteryChargerConnected:(BOOL)arg1 ;
-(long long)wifiQuality;
-(void)setWifiQuality:(long long)arg1 ;
-(BOOL)wifiHot;
-(void)setWifiHot:(BOOL)arg1 ;
-(long long)cellQuality;
-(void)setCellQuality:(long long)arg1 ;
-(BOOL)cellHot;
-(void)setCellHot:(BOOL)arg1 ;
-(NSMutableDictionary *)appsAliveInLSTDict;
-(void)setAppsAliveInLSTDict:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)cacheAppsforFullDebug;
-(void)setDailyLaunchArrays:(NSMutableArray *)arg1 ;
-(void)setRecentLaunchArrays:(NSMutableArray *)arg1 ;
-(void)setWeeklyLaunchArrays:(NSMutableArray *)arg1 ;
-(void)setAppForecastArray:(NSMutableArray *)arg1 ;
-(void)setDataForecastArray:(NSMutableArray *)arg1 ;
-(void)setPowerFetchForecastArray:(NSMutableArray *)arg1 ;
-(void)setPowerPushForecastArray:(NSMutableArray *)arg1 ;
-(void)setDailyAppForecastSlots:(NSMutableArray *)arg1 ;
-(long long)globalDataCarryCap;
-(long long)globalDataBudgetCap;
-(long long)BGDataBudgetCap;
-(long long)BGDataCarryCap;
-(long long)endofdayDataBudget;
-(void)setEndofdayDataBudget:(long long)arg1 ;
-(long long)endofdayBGDataBudget;
-(void)setEndofdayBGDataBudget:(long long)arg1 ;
-(long long)endofdayNDISCDataBudget;
-(void)setEndofdayNDISCDataBudget:(long long)arg1 ;
-(APLSBinnedGlanceHistory *)binnedLaunches;
-(void)setBinnedLaunches:(APLSBinnedGlanceHistory *)arg1 ;
-(long long)globalMinSlotData;
-(long long)BGMinSlotData;
-(long long)globalTimeThreshold;
-(float)globalNonactivePWPC;
-(float)globalFetchPWPC;
-(float)globalPushPWPC;
-(float)dataWifiMultiplier;
-(float)dataCellMultiplier;
-(BOOL)enableLiveListCheck;
-(void)setEnableLiveListCheck:(BOOL)arg1 ;
-(BOOL)enableBlackListCheck;
-(void)setEnableBlackListCheck:(BOOL)arg1 ;
-(BOOL)enableOpportunisticFetchCheck;
-(BOOL)enableForeGroundAppCheck;
-(BOOL)enableBudgetCheck;
-(void)saveContext:(id)arg1 ;
@end

