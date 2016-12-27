/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface CalendarOccurrencesCollection : NSObject <NSCopying> {

	NSArray* _occurrences;
	NSArray* _allDayOccurrences;
	NSArray* _timedOccurrences;

}

@property (nonatomic,readonly) NSArray * occurrences;                    //@synthesize occurrences=_occurrences - In the implementation block
@property (nonatomic,readonly) NSArray * allDayOccurrences;              //@synthesize allDayOccurrences=_allDayOccurrences - In the implementation block
@property (nonatomic,readonly) NSArray * timedOccurrences;               //@synthesize timedOccurrences=_timedOccurrences - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)occurrences;
-(id)initWithOccurrences:(id)arg1 timedOccurrences:(id)arg2 allDayOccurrences:(id)arg3 ;
-(NSArray *)allDayOccurrences;
-(NSArray *)timedOccurrences;
@end

