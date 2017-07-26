//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

@class UIButton, UIImage, UIImageView, UIView;

@interface BCPreviewViewController : DTViewController
{
    UIImage *_image;
    CDUnknownBlockType _redoAction;
    CDUnknownBlockType _confirmAction;
    UIImageView *_imageView;
    UIButton *_redoBtn;
    UIButton *_confirmBtn;
    UIView *_toolView;
}

@property(retain, nonatomic) UIView *toolView; // @synthesize toolView=_toolView;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UIButton *redoBtn; // @synthesize redoBtn=_redoBtn;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) CDUnknownBlockType confirmAction; // @synthesize confirmAction=_confirmAction;
@property(copy, nonatomic) CDUnknownBlockType redoAction; // @synthesize redoAction=_redoAction;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)autohideNavigationBar;
- (long long)customStatusBarStytle;
- (void)pressConfirmBtn;
- (void)pressRedoBtn;
- (void)didReceiveMemoryWarning;
- (void)setupView;
- (void)viewDidLoad;
- (id)init;

@end
