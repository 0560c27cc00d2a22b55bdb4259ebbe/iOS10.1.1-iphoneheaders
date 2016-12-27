/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PETLoggingOutlet;
@class NSString, NSArray;

@interface PETEventTracker : NSObject {

	BOOL _testingMode;
	NSString* _featureId;
	NSArray* _registeredProperties;
	NSArray* _propertySubsets;
	id<PETLoggingOutlet> _loggingOutlet;

}

@property (nonatomic,readonly) BOOL testingMode;                                //@synthesize testingMode=_testingMode - In the implementation block
@property (nonatomic,readonly) id<PETLoggingOutlet> loggingOutlet;              //@synthesize loggingOutlet=_loggingOutlet - In the implementation block
@property (nonatomic,readonly) NSString * featureId;                            //@synthesize featureId=_featureId - In the implementation block
@property (nonatomic,readonly) NSArray * registeredProperties;                  //@synthesize registeredProperties=_registeredProperties - In the implementation block
@property (nonatomic,readonly) NSArray * propertySubsets;                       //@synthesize propertySubsets=_propertySubsets - In the implementation block
-(id)getValueForKey:(id)arg1 ;
-(NSString *)featureId;
-(void)enableTestingMode;
-(void)disableTestingMode;
-(id)getKeyValueDict;
-(void)_setLoggingOutlet:(id)arg1 ;
-(id)initWithFeatureId:(id)arg1 registerProperties:(id)arg2 propertySubsets:(id)arg3 ;
-(void)_checkCardinalityForEvent:(id)arg1 ;
-(id)_keyMetadataForEvent:(id)arg1 ;
-(void)_checkKeyLengthForEvent:(id)arg1 metaData:(id)arg2 ;
-(void)_trackEvent:(id)arg1 withPropertyValues:(id)arg2 value:(id)arg3 ;
-(id<PETLoggingOutlet>)loggingOutlet;
-(void)_logValue:(id)arg1 forEvent:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4 ;
-(void)_checkPropertySubsets:(id)arg1 ;
-(id)_defaultLoggingOutlet;
-(BOOL)_validatePropertyValues:(id)arg1 ;
-(id)_stringifiedPropertiesForEvent:(id)arg1 propertyValueArray:(id)arg2 ;
-(NSArray *)registeredProperties;
-(void)_checkInTestingMode;
-(NSArray *)propertySubsets;
-(BOOL)testingMode;
@end

