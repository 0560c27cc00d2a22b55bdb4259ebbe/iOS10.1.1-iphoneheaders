/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DuetExpertCenter/Experts/QueryPrediction.bundle/QueryPrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QueryPrediction/QueryPrediction-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface QPReason : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _reason;

}
+(id)stringsForReasons:(id)arg1 ;
+(id)shortAggdCodesForReasons:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)asShortAggdCode;
-(id)asString;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithValue:(unsigned long long)arg1 ;
-(unsigned long long)rawValue;
@end

