/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSDictionary;

@interface MPPropertySet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSSet* _properties;
	NSDictionary* _relationships;

}

@property (nonatomic,readonly) NSSet * properties;                        //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) NSDictionary * relationships;              //@synthesize relationships=_relationships - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)emptyPropertySet;
+(id)propertySetWithProperties:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSSet *)properties;
-(id)initWithProperties:(id)arg1 relationships:(id)arg2 ;
-(NSDictionary *)relationships;
-(id)propertySetByCombiningWithPropertySet:(id)arg1 ;
-(id)propertySetByIntersectingWithPropertySet:(id)arg1 ;
-(BOOL)containsPropertySet:(id)arg1 ;
@end

