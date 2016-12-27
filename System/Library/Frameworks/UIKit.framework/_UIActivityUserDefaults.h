/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSUserDefaults;

@interface _UIActivityUserDefaults : NSObject {

	NSString* _identifier;
	NSUserDefaults* _userDefaults;

}

@property (nonatomic,copy) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSUserDefaults * userDefaults;              //@synthesize userDefaults=_userDefaults - In the implementation block
+(id)builtinActivityOrder;
+(id)updatedActivityIdentifiersUserOrderWithPreviousOrder:(id)arg1 someSortedActivityIdentifiers:(id)arg2 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 userDefaults:(id)arg2 ;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)userDefaults;
-(id)activitiesSortedByUserOrderForActivities:(id)arg1 ;
-(BOOL)activityIsHidden:(id)arg1 ;
-(BOOL)canHideActivity:(id)arg1 ;
-(void)updateUserOrderWithSomeSortedActivities:(id)arg1 ;
-(void)setActivity:(id)arg1 asHidden:(BOOL)arg2 ;
-(id)applicationExtensionForActivity:(id)arg1 ;
-(void)postActivityUserDefaultsDidChangeNotification;
-(id)migrateSortOrderIfNeededForBuiltInActivityType:(id)arg1 activityIdentifierOrder:(id)arg2 ;
-(id)identifierForActivity:(id)arg1 ;
-(id)activityIdentifiersInUserOrder;
-(id)activitiesSortedByActivityIdentifierOrder:(id)arg1 forActivities:(id)arg2 ;
-(id)mutableActivityIdentifiersArrayForActivitiesArray:(id)arg1 ;
-(void)setActivityIdentifiersInUserOrder:(id)arg1 ;
-(id)defaultsValueForKey:(id)arg1 activity:(id)arg2 ;
-(void)setDefaultsValue:(id)arg1 forKey:(id)arg2 activity:(id)arg3 ;
@end

