/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKCOOperation.h>

@interface TSKCOAbstractOperation : NSObject <TSKCOOperation> {

	BOOL mNoop;

}

@property (nonatomic,readonly) BOOL isNoop; 
+(id)_classRegistry;
+(void)registerClass:(Class)arg1 forExtensionNumber:(int)arg2 ;
+(id)newObjectForUnarchiver:(id)arg1 message:(const Message*)arg2 ;
-(void)saveToArchiver:(id)arg1 message:(Operation*)arg2 ;
-(BOOL)isNoop;
-(id)initWithUnarchiver:(id)arg1 message:(const Operation*)arg2 ;
-(id)initWithNoop:(BOOL)arg1 ;
-(void)dealloc;
@end

