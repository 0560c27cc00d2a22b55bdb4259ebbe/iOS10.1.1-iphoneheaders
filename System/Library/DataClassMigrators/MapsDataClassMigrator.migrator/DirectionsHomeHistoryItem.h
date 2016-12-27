/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsDataClassMigrator/RecentsItem.h>

@class SearchResult, AddressBookAddress, NSString;

@interface DirectionsHomeHistoryItem : NSObject <RecentsItem> {

	SearchResult* _currentLocation;

}

@property (nonatomic,retain) SearchResult * currentLocation;                  //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,readonly) AddressBookAddress * homeAddress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AddressBookAddress *)homeAddress;
-(id)init;
-(double)timestamp;
-(SearchResult *)currentLocation;
-(void)setCurrentLocation:(SearchResult *)arg1 ;
@end

