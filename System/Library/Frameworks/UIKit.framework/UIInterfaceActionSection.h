/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface UIInterfaceActionSection : NSObject <NSCopying> {

	NSArray* _actions;
	NSString* _sectionID;

}

@property (nonatomic,readonly) NSArray * actions;                 //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) NSString * sectionID;              //@synthesize sectionID=_sectionID - In the implementation block
+(id)actionsFromSections:(id)arg1 ;
-(id)description;
-(NSArray *)actions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)sectionID;
-(id)copyOfActions;
-(id)initWithActions:(id)arg1 ;
@end

