/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSKeyedUnarchiverDelegate <NSObject>
@optional
-(Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;
-(id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;
-(void)unarchiver:(id)arg1 willReplaceObject:(id)arg2 withObject:(id)arg3;
-(void)unarchiverWillFinish:(id)arg1;
-(void)unarchiverDidFinish:(id)arg1;

@end

