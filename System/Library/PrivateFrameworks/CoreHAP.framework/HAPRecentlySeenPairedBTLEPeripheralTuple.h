/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CBPeripheral, NSNumber, NSString, NSMutableDictionary, NSMapTable;

@interface HAPRecentlySeenPairedBTLEPeripheralTuple : NSObject {

	BOOL _notifyingCharacteristicUpdated;
	BOOL _monitorState;
	double _lastSeen;
	CBPeripheral* _peripheral;
	NSNumber* _statusFlags;
	NSNumber* _stateNumber;
	NSNumber* _configNumber;
	NSNumber* _categoryIdentifier;
	NSString* _identifier;
	unsigned long long _advertisementFormat;
	NSMutableDictionary* _cachedDescriptors;
	NSMapTable* _cachedCharacteristicSignatures;
	NSMapTable* _cachedServiceSignatures;
	unsigned long long _connectionPriority;

}

@property (nonatomic,readonly) double lastSeen;                                          //@synthesize lastSeen=_lastSeen - In the implementation block
@property (nonatomic,retain) CBPeripheral * peripheral;                                  //@synthesize peripheral=_peripheral - In the implementation block
@property (nonatomic,retain) NSNumber * statusFlags;                                     //@synthesize statusFlags=_statusFlags - In the implementation block
@property (nonatomic,retain) NSNumber * stateNumber;                                     //@synthesize stateNumber=_stateNumber - In the implementation block
@property (nonatomic,retain) NSNumber * configNumber;                                    //@synthesize configNumber=_configNumber - In the implementation block
@property (nonatomic,retain) NSNumber * categoryIdentifier;                              //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long advertisementFormat;                   //@synthesize advertisementFormat=_advertisementFormat - In the implementation block
@property (assign,nonatomic) BOOL notifyingCharacteristicUpdated;                        //@synthesize notifyingCharacteristicUpdated=_notifyingCharacteristicUpdated - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cachedDescriptors;                  //@synthesize cachedDescriptors=_cachedDescriptors - In the implementation block
@property (nonatomic,readonly) NSMapTable * cachedCharacteristicSignatures;              //@synthesize cachedCharacteristicSignatures=_cachedCharacteristicSignatures - In the implementation block
@property (nonatomic,readonly) NSMapTable * cachedServiceSignatures;                     //@synthesize cachedServiceSignatures=_cachedServiceSignatures - In the implementation block
@property (assign,nonatomic) BOOL monitorState;                                          //@synthesize monitorState=_monitorState - In the implementation block
@property (assign,nonatomic) unsigned long long connectionPriority;                      //@synthesize connectionPriority=_connectionPriority - In the implementation block
-(BOOL)monitorState;
-(void)setMonitorState:(BOOL)arg1 ;
-(NSString *)identifier;
-(void)setCategoryIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)categoryIdentifier;
-(NSNumber *)configNumber;
-(NSNumber *)statusFlags;
-(void)setConfigNumber:(NSNumber *)arg1 ;
-(void)setStatusFlags:(NSNumber *)arg1 ;
-(void)setConnectionPriority:(unsigned long long)arg1 ;
-(id)initRecentlySeenPairedBTLEPeripheral:(id)arg1 statusFlags:(id)arg2 stateNumber:(id)arg3 category:(id)arg4 configNumber:(id)arg5 identifier:(id)arg6 advertisementFormat:(unsigned long long)arg7 ;
-(void)updatePairedPeripheralConfiguration:(BOOL)arg1 connectionPriority:(unsigned long long)arg2 ;
-(unsigned long long)advertisementFormat;
-(BOOL)notifyingCharacteristicUpdated;
-(void)setNotifyingCharacteristicUpdated:(BOOL)arg1 ;
-(NSMutableDictionary *)cachedDescriptors;
-(NSMapTable *)cachedCharacteristicSignatures;
-(NSMapTable *)cachedServiceSignatures;
-(unsigned long long)connectionPriority;
-(double)lastSeen;
-(CBPeripheral *)peripheral;
-(void)setPeripheral:(CBPeripheral *)arg1 ;
-(NSNumber *)stateNumber;
-(void)setStateNumber:(NSNumber *)arg1 ;
@end

