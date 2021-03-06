/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MailAccountSettings.bundle/MailAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MailAccount;

@interface MailboxListViewingContext : NSObject {

	MailAccount* _account;
	id _mailboxSelectionTarget;
	int _pickingForType;
	float _offset;
	BOOL _promoteFavorites;

}
-(BOOL)promoteFavorites;
-(void)setPromoteFavorites:(BOOL)arg1 ;
-(void)dealloc;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setOffset:(float)arg1 ;
-(float)offset;
-(id)account;
-(void)setAccount:(id)arg1 ;
-(void)setSelectionTarget:(id)arg1 ;
-(id)selectionTarget;
@end

