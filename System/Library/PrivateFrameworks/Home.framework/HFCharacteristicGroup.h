/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet;

@interface HFCharacteristicGroup : NSObject {

	NSString* _identifier;
	NSString* _title;
	NSSet* _characteristicTypes;

}

@property (nonatomic,copy,readonly) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) long long groupSortPriority; 
@property (nonatomic,copy,readonly) NSSet * characteristicTypes;              //@synthesize characteristicTypes=_characteristicTypes - In the implementation block
+(id)_targetCurrentStateCharacteristicTypeMap;
+(id)_targetCurrentStateCharacteristicGroups;
+(id)_currentTargetStateCharacteristicTypeMap;
+(id)allCharacteristicGroups;
+(id)groupedTitleForCharacteristicType:(id)arg1 ;
+(id)characteristicGroupForCharacteristicType:(id)arg1 ;
+(id)characteristicGroupForIdentifier:(id)arg1 ;
-(id)init;
-(NSString *)identifier;
-(NSString *)title;
-(id)initWithID:(id)arg1 title:(id)arg2 characteristicTypes:(id)arg3 ;
-(long long)groupSortPriority;
-(NSSet *)characteristicTypes;
@end

