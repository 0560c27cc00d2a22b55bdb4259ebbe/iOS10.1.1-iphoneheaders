/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFSearchResult.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _DECItem;

@interface _DECSearchResult : SFSearchResult <NSSecureCoding> {

	_DECItem* _item;

}

@property (readonly) _DECItem * item;              //@synthesize item=_item - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(_DECItem *)item;
-(id)initWithItem:(id)arg1 ;
-(BOOL)isDecAppResult;
-(BOOL)isDecQueryResult;
@end

