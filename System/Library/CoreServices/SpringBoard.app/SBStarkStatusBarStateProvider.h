/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBStatusBarStateProvider.h>

@protocol SBStarkSessionConfiguring;
@class NSString;

@interface SBStarkStatusBarStateProvider : SBStatusBarStateProvider {

	id<SBStarkSessionConfiguring> _sessionConfiguration;
	char _oldAggregatorTimeCString[64];
	char _timeCString[64];
	BOOL _statusBarTimeRequiresUpdate;
	BOOL _showOptimalCellData;
	BOOL _showTapToRadar;
	BOOL _disableBattery;
	BOOL _showElectronicTollCollection;
	BOOL _electronicTollCollectionAvailable;
	NSString* _inCallDetail;

}
+(BOOL)_itemIsIgnored:(int)arg1 ;
-(BOOL)_shouldPostForVisitedItem:(int)arg1 withUpdates:(BOOL)arg2 toAggregatorData:(const SCD_Struct_SB49*)arg3 ;
-(void)_composePostDataFromAggregatorData:(SCD_Struct_SB49*)arg1 ;
-(BOOL)_shouldPostForUpdatesToNonItemData:(const SCD_Struct_SB49*)arg1 ;
-(void)_electronicTollCollectionChanged;
-(void)_resetStatusBarTime;
-(void)_callDurationChanged;
-(BOOL)_shouldShowRadarItem;
-(void)dealloc;
-(id)initWithConfiguration:(id)arg1 ;
-(id)doubleHeightStatusStringForStyle:(long long)arg1 ;
@end
