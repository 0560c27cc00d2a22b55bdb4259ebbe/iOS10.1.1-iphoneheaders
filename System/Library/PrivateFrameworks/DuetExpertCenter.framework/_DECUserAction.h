/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CSUserAction, CSSearchableItem;

@interface _DECUserAction : NSObject <NSSecureCoding> {

	CSUserAction* _spotlightUserAction;
	CSSearchableItem* _spotlightSearcheableItem;

}

@property (nonatomic,copy,readonly) CSUserAction * spotlightUserAction;                       //@synthesize spotlightUserAction=_spotlightUserAction - In the implementation block
@property (nonatomic,copy,readonly) CSSearchableItem * spotlightSearcheableItem;              //@synthesize spotlightSearcheableItem=_spotlightSearcheableItem - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithUserAction:(id)arg1 item:(id)arg2 ;
-(CSUserAction *)spotlightUserAction;
-(CSSearchableItem *)spotlightSearcheableItem;
@end

