/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Support/pasted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID, NSString;


@protocol UAPasteboardItemProviding <NSObject>
@property (nonatomic,copy) NSUUID * uuid; 
@property (nonatomic,copy) NSString * type; 
@required
-(void)setType:(id)arg1;
-(NSString *)type;
-(NSUUID *)uuid;
-(void)setUuid:(id)arg1;
-(void)getDataWithCompletionBlock:(/*^block*/id)arg1;

@end

