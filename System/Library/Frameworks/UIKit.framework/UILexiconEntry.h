/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface UILexiconEntry : NSObject <NSCopying> {

	NSString* _userInput;
	NSString* _documentText;

}

@property (nonatomic,readonly) NSString * documentText;              //@synthesize documentText=_documentText - In the implementation block
@property (nonatomic,readonly) NSString * userInput;                 //@synthesize userInput=_userInput - In the implementation block
+(id)_entryWithTILexiconEntry:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)documentText;
-(NSString *)userInput;
@end

