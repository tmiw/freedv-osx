# -*- coding: utf-8 -*- 

###########################################################################
## Python code generated with wxFormBuilder (version Mar 17 2012)
## http://www.wxformbuilder.org/
##
## PLEASE DO "NOT" EDIT THIS FILE!
###########################################################################

import wx
import wx.xrc

import gettext
_ = gettext.gettext

###########################################################################
## Class MainFrameBase
###########################################################################

class MainFrameBase ( wx.Frame ):
	
	def __init__( self, parent ):
		wx.Frame.__init__ ( self, parent, id = wx.ID_ANY, title = _(u"Test PortAudio CPP Binding "), pos = wx.DefaultPosition, size = wx.Size( 500,300 ), style = wx.CLOSE_BOX|wx.DEFAULT_FRAME_STYLE|wx.RESIZE_BORDER|wx.TAB_TRAVERSAL )
		
		self.SetSizeHintsSz( wx.DefaultSize, wx.DefaultSize )
		
		self.m_menuBar = wx.MenuBar( 0 )
		self.m_menuFile = wx.Menu()
		self.menuFileExit = wx.MenuItem( self.m_menuFile, wx.ID_EXIT, _(u"E&xit")+ u"\t" + u"Alt+X", wx.EmptyString, wx.ITEM_NORMAL )
		self.m_menuFile.AppendItem( self.menuFileExit )
		
		self.m_menuBar.Append( self.m_menuFile, _(u"&File") ) 
		
		self.SetMenuBar( self.m_menuBar )
		
		mainSizer = wx.BoxSizer( wx.VERTICAL )
		
		self.m_audioInfo = wx.Panel( self, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, wx.TAB_TRAVERSAL )
		self.m_audioInfo.SetMinSize( wx.Size( 65,65 ) )
		
		fgSizer1 = wx.FlexGridSizer( 4, 4, 1, 1 )
		fgSizer1.AddGrowableCol( 3 )
		fgSizer1.AddGrowableRow( 3 )
		fgSizer1.SetFlexibleDirection( wx.BOTH )
		fgSizer1.SetNonFlexibleGrowMode( wx.FLEX_GROWMODE_ALL )
		
		
		fgSizer1.AddSpacer( ( 0, 0), 1, wx.EXPAND, 5 )
		
		self.m_staticText1 = wx.StaticText( self.m_audioInfo, wx.ID_ANY, _(u"Input, Output:"), wx.DefaultPosition, wx.DefaultSize, wx.ALIGN_RIGHT )
		self.m_staticText1.Wrap( -1 )
		fgSizer1.Add( self.m_staticText1, 1, wx.ALL|wx.EXPAND, 5 )
		
		bSizer2 = wx.BoxSizer( wx.VERTICAL )
		
		bSizer2.SetMinSize( wx.Size( 65,65 ) ) 
		m_comboBoxLeftChoices = []
		self.m_comboBoxLeft = wx.ComboBox( self.m_audioInfo, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, m_comboBoxLeftChoices, wx.CB_SIMPLE )
		self.m_comboBoxLeft.SetToolTipString( _(u"Input Audio Interface") )
		self.m_comboBoxLeft.SetMinSize( wx.Size( 65,65 ) )
		
		bSizer2.Add( self.m_comboBoxLeft, 1, wx.ALL|wx.EXPAND, 5 )
		
		
		fgSizer1.Add( bSizer2, 1, wx.EXPAND|wx.FIXED_MINSIZE, 5 )
		
		bSizer3 = wx.BoxSizer( wx.VERTICAL )
		
		bSizer3.SetMinSize( wx.Size( 65,65 ) ) 
		m_comboBoxRightChoices = []
		self.m_comboBoxRight = wx.ComboBox( self.m_audioInfo, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, m_comboBoxRightChoices, wx.CB_SIMPLE )
		self.m_comboBoxRight.SetToolTipString( _(u"Output Audio Interface") )
		self.m_comboBoxRight.SetMinSize( wx.Size( 65,65 ) )
		
		bSizer3.Add( self.m_comboBoxRight, 1, wx.ALL|wx.EXPAND, 5 )
		
		
		fgSizer1.Add( bSizer3, 1, wx.EXPAND, 5 )
		
		
		fgSizer1.AddSpacer( ( 0, 0), 1, wx.EXPAND, 5 )
		
		self.m_staticText2 = wx.StaticText( self.m_audioInfo, wx.ID_ANY, _(u"Behavor:"), wx.DefaultPosition, wx.DefaultSize, wx.ALIGN_RIGHT )
		self.m_staticText2.Wrap( -1 )
		fgSizer1.Add( self.m_staticText2, 1, wx.ALIGN_CENTER_VERTICAL|wx.ALIGN_RIGHT|wx.ALL|wx.EXPAND, 5 )
		
		self.m_gauge1 = wx.Gauge( self.m_audioInfo, wx.ID_ANY, 100, wx.DefaultPosition, wx.DefaultSize, wx.GA_HORIZONTAL|wx.GA_SMOOTH )
		fgSizer1.Add( self.m_gauge1, 1, wx.ALL|wx.EXPAND, 5 )
		
		self.m_slider1 = wx.Slider( self.m_audioInfo, wx.ID_ANY, 50, 0, 100, wx.DefaultPosition, wx.DefaultSize, wx.SL_AUTOTICKS|wx.SL_HORIZONTAL|wx.SL_SELRANGE|wx.SL_TOP )
		fgSizer1.Add( self.m_slider1, 1, wx.ALL|wx.EXPAND, 5 )
		
		
		fgSizer1.AddSpacer( ( 0, 0), 1, wx.EXPAND, 5 )
		
		self.m_staticText5 = wx.StaticText( self.m_audioInfo, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText5.Wrap( -1 )
		fgSizer1.Add( self.m_staticText5, 1, wx.ALL|wx.EXPAND, 5 )
		
		self.m_toggleBtn2 = wx.ToggleButton( self.m_audioInfo, wx.ID_ANY, _(u"On / Off"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_toggleBtn2.SetValue( True ) 
		fgSizer1.Add( self.m_toggleBtn2, 1, wx.ALL|wx.EXPAND, 5 )
		
		self.m_toggleBtn3 = wx.ToggleButton( self.m_audioInfo, wx.ID_ANY, _(u"On / Off"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_toggleBtn3.SetValue( True ) 
		fgSizer1.Add( self.m_toggleBtn3, 0, wx.ALL|wx.EXPAND, 5 )
		
		
		fgSizer1.AddSpacer( ( 0, 0), 1, 0, 5 )
		
		
		fgSizer1.AddSpacer( ( 0, 0), 1, 0, 5 )
		
		
		fgSizer1.AddSpacer( ( 0, 0), 1, 0, 5 )
		
		self.m_button1 = wx.Button( self.m_audioInfo, wx.ID_ANY, _(u"Exit"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_button1.SetDefault() 
		fgSizer1.Add( self.m_button1, 0, wx.ALIGN_BOTTOM|wx.ALIGN_RIGHT|wx.ALL, 5 )
		
		
		self.m_audioInfo.SetSizer( fgSizer1 )
		self.m_audioInfo.Layout()
		fgSizer1.Fit( self.m_audioInfo )
		mainSizer.Add( self.m_audioInfo, 1, wx.ALL|wx.EXPAND|wx.FIXED_MINSIZE, 0 )
		
		
		self.SetSizer( mainSizer )
		self.Layout()
		self.m_statusBar = self.CreateStatusBar( 1, wx.ST_SIZEGRIP, wx.ID_ANY )
		
		self.Centre( wx.BOTH )
		
		# Connect Events
		self.Bind( wx.EVT_CLOSE, self.OnCloseFrame )
		self.Bind( wx.EVT_MENU, self.OnExitClick, id = self.menuFileExit.GetId() )
		self.m_comboBoxLeft.Bind( wx.EVT_COMBOBOX, self.OnComboLeft )
		self.m_comboBoxRight.Bind( wx.EVT_COMBOBOX, self.OnComboRight )
		self.m_slider1.Bind( wx.EVT_SCROLL, self.OnScroll )
		self.m_toggleBtn2.Bind( wx.EVT_TOGGLEBUTTON, self.OnTogLeft )
		self.m_toggleBtn3.Bind( wx.EVT_TOGGLEBUTTON, self.OnTogRight )
		self.m_button1.Bind( wx.EVT_BUTTON, self.OnExitClick )
	
	def __del__( self ):
		pass
	
	
	# Virtual event handlers, overide them in your derived class
	def OnCloseFrame( self, event ):
		event.Skip()
	
	def OnExitClick( self, event ):
		event.Skip()
	
	def OnComboLeft( self, event ):
		event.Skip()
	
	def OnComboRight( self, event ):
		event.Skip()
	
	def OnScroll( self, event ):
		event.Skip()
	
	def OnTogLeft( self, event ):
		event.Skip()
	
	def OnTogRight( self, event ):
		event.Skip()
	
	

