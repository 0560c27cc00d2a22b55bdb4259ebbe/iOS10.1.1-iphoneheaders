/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFCharacteristicOperationContextProviding;
@class NSMutableSet, NSMutableDictionary, NSSet;

@interface HFMultiServiceCharacteristicValueBatchReadResponse : NSObject {

	id<HFCharacteristicOperationContextProviding> _contextProvider;
	NSMutableSet* _mutableAllCharacteristics;
	NSMutableDictionary* _servicesByUUID;
	NSMutableDictionary* _serviceUUIDToResponseMap;

}

@property (nonatomic,retain) NSMutableSet * mutableAllCharacteristics;                                   //@synthesize mutableAllCharacteristics=_mutableAllCharacteristics - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * servicesByUUID;                                       //@synthesize servicesByUUID=_servicesByUUID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * serviceUUIDToResponseMap;                             //@synthesize serviceUUIDToResponseMap=_serviceUUIDToResponseMap - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicOperationContextProviding> contextProvider;              //@synthesize contextProvider=_contextProvider - In the implementation block
@property (nonatomic,readonly) NSSet * allCharacteristics; 
@property (nonatomic,readonly) NSSet * allCharacteristicTypes; 
@property (nonatomic,readonly) NSSet * allServices; 
-(id)init;
-(NSSet *)allServices;
-(NSSet *)allCharacteristics;
-(void)addCharacteristic:(id)arg1 service:(id)arg2 ;
-(void)addValue:(id)arg1 forCharacteristic:(id)arg2 service:(id)arg3 ;
-(void)addError:(id)arg1 forCharacteristic:(id)arg2 service:(id)arg3 ;
-(id<HFCharacteristicOperationContextProviding>)contextProvider;
-(void)setContextProvider:(id<HFCharacteristicOperationContextProviding>)arg1 ;
-(NSSet *)allCharacteristicTypes;
-(id)servicesWithValuesPassingTest:(/*^block*/id)arg1 forCharacteristicType:(id)arg2 ;
-(id)servicesWithValue:(id)arg1 forCharacteristicType:(id)arg2 ;
-(BOOL)hasAnyErrors;
-(BOOL)hasErrorForEveryCharacteristic;
-(id)batchResponseForService:(id)arg1 ;
-(id)averageValueForCharacteristicType:(id)arg1 ;
-(void)setMutableAllCharacteristics:(NSMutableSet *)arg1 ;
-(void)setServicesByUUID:(NSMutableDictionary *)arg1 ;
-(void)setServiceUUIDToResponseMap:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)mutableAllCharacteristics;
-(NSMutableDictionary *)servicesByUUID;
-(NSMutableDictionary *)serviceUUIDToResponseMap;
-(id)_firstValueForCharacteristicType:(id)arg1 inServiceUUID:(id)arg2 error:(id*)arg3 ;
-(void)_addValue:(id)arg1 orError:(id)arg2 forCharacteristic:(id)arg3 service:(id)arg4 ;
-(id)firstValueForCharacteristicType:(id)arg1 ;
-(id)firstValueForCharacteristicType:(id)arg1 inService:(id)arg2 ;
-(id)firstErrorForCharacteristicType:(id)arg1 inService:(id)arg2 ;
-(id)valuesForCharacteristicType:(id)arg1 ;
-(id)servicesWithErrorForCharacteristicType:(id)arg1 ;
@end

